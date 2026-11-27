#!/usr/bin/env python3
"""Read-only APK SpriteAtlas/Material PPtr evidence. Never infer business IDs."""
import argparse, csv, hashlib, json, re, io
from collections import defaultdict, Counter
from pathlib import Path
import UnityPy
from PIL import Image
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from elftools.elf.elffile import ELFFile

APK_SHA="8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1"
ELF_SHA="80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe"
def sha(data): return hashlib.sha256(data).hexdigest()
def basename(s): return str(s).replace("\\","/").rsplit("/",1)[-1].lower()
def typ(o): return getattr(o.type,"name",str(o.type))
def dump(p,v): p.write_text(json.dumps(v,ensure_ascii=False,indent=2,default=str)+"\n",encoding="utf-8")
def safe_name(s): return re.sub(r"[^a-zA-Z0-9_.-]","_",str(s))[:90] or "unnamed"
def identity(o): return {"serialized_file":str(o.assets_file.name),"path_id":o.path_id,"type":typ(o)}
def peek(o):
    try: return o.peek_name() or ""
    except Exception: return ""
def walk_refs(x,p="$"):
    if isinstance(x,dict):
        if "m_FileID" in x and "m_PathID" in x:
            if x["m_PathID"]: yield p,int(x["m_FileID"]),int(x["m_PathID"])
            return
        for k,v in x.items(): yield from walk_refs(v,p+"."+str(k))
    elif isinstance(x,(list,tuple)):
        for i,v in enumerate(x): yield from walk_refs(v,p+"["+str(i)+"]")
def primitive(v):
    if isinstance(v,(str,int,float,bool,type(None))): return v
    if isinstance(v,(tuple,list)): return [primitive(x) for x in v]
    if isinstance(v,dict): return {str(k):primitive(x) for k,x in v.items()}
    a={k:primitive(getattr(v,k)) for k in ("x","y","z","w","width","height","m_FileID","m_PathID") if hasattr(v,k)}
    return a or str(v)
def selected(obj,names):
    return {k:primitive(getattr(obj,k)) for k in names if hasattr(obj,k)}
def main(a):
    a.out.mkdir(parents=True,exist_ok=True)
    assert sha(a.apk.read_bytes())==APK_SHA
    assert sha(a.elf.read_bytes())==ELF_SHA
    env=UnityPy.Environment(path=str(a.raw))
    with a.candidates.open(encoding="utf-8-sig",newline="") as f:
        rels=[r["path"] for r in csv.DictReader(f) if r["kind"] in ("unity_bundle","unity_serialized_candidate")]
    sources={r:a.raw/r for r in rels if not re.search(r"\.split\d+$",r)}
    sources.update({"@reassembled/"+p.relative_to(a.reassembled).as_posix():p
                    for p in a.reassembled.rglob("*") if p.is_file()})
    # Explicitly register resource streams for texture decode.
    for p in a.raw.rglob("*"):
        if p.is_file() and p.suffix.lower() in (".ress",".resource") and p.relative_to(a.raw).as_posix() not in sources:
            sources[p.relative_to(a.raw).as_posix()]=p
    failures=[]
    for rel,p in sorted(sources.items()):
        try: env.load_file(io.BytesIO(p.read_bytes()),name=rel)
        except Exception as e: failures.append({"source":rel,"error":str(e)[:400]})
    assets=env.assets
    by_name=defaultdict(list)
    for f in assets: by_name[basename(f.name)].append(f)
    def resolve(owner,fid,pid):
        row={"file_id":fid,"path_id":pid}
        if fid==0: targets=[owner.assets_file]
        elif fid<0 or fid>len(owner.assets_file.externals):
            return dict(row,status="invalid_file_id"),None
        else:
            ext=owner.assets_file.externals[fid-1]
            row["external_path"]=str(ext.path)
            row["external_guid"]=str(getattr(ext,"guid",""))
            targets=by_name[basename(ext.path)]
        # Prefer exact normalized full file name, otherwise require unique basename.
        if len(targets)>1 and fid:
            exact=[f for f in targets if str(f.name).replace("\\","/").lower()==row["external_path"].replace("\\","/").lower()]
            if len(exact)==1: targets=exact
        if len(targets)!=1:
            return dict(row,status="missing_or_ambiguous_file",candidates=[str(f.name) for f in targets]),None
        obj=targets[0].objects.get(pid)
        if obj is None: return dict(row,status="missing_path_id",target_file=str(targets[0].name)),None
        return dict(row,status="resolved",target=identity(obj),target_name=peek(obj)),obj
    atlas_results=[]
    material_results=[]
    objects=[o for f in assets for o in f.objects.values()]
    for o in objects:
        if typ(o) not in ("SpriteAtlas","Material"): continue
        try: data=o.parse_as_object()
        except Exception as e:
            failures.append(dict(identity(o),error=str(e)[:400])); continue
        name=str(getattr(data,"m_Name",""))
        if typ(o)=="SpriteAtlas" and name in ("Achievement","BankMarks"):
            entry=dict(identity(o),name=name,packed_names=primitive(getattr(data,"m_PackedSpriteNamesToIndex",[])),sprites=[])
            for i,p in enumerate(data.m_PackedSprites):
                row,target=resolve(o,int(p.m_FileID),int(p.m_PathID))
                row.update(packed_index=i,achievement_id=None)
                entry["sprites"].append(row)
                if target is None or typ(target)!="Sprite": continue
                try:
                    # Independently confirm UnityPy pointer result before invoking image renderer.
                    assert p.deref() is target, "PPtr resolver disagreement"
                    sprite=target.parse_as_object()
                    row["sprite_name"]=str(sprite.m_Name)
                    row["sprite"]=selected(sprite,("m_Rect","m_Pivot","m_Border","m_PixelsToUnits","m_Offset","m_RenderDataKey"))
                    rmap=data.m_RenderDataMap
                    pairs=rmap.items() if isinstance(rmap,dict) else rmap
                    matches=[v for k,v in pairs if k==sprite.m_RenderDataKey]
                    row["render_map_matches"]=len(matches)
                    if len(matches)==1:
                        rd=matches[0]
                        row["atlas_render_data"]=selected(rd,("textureRect","textureRectOffset","atlasRectOffset","uvTransform","settingsRaw","downscaleMultiplier"))
                        for k in ("texture","alphaTexture"):
                            ptr=getattr(rd,k,None)
                            if ptr is not None and ptr.m_PathID:
                                evidence,tex=resolve(o,int(ptr.m_FileID),int(ptr.m_PathID))
                                row[k]=evidence
                                if k=="texture" and tex is not None and typ(tex)=="Texture2D":
                                    assert ptr.deref() is tex, "atlas texture resolver disagreement"
                    # Do not claim atlas-derived sprite if no render-map match/texture proof.
                    if len(matches)!=1 or row.get("texture",{}).get("status")!="resolved":
                        row["image_status"]="atlas_binding_unverified"; continue
                    atlas_ptr=getattr(sprite,"m_SpriteAtlas",None)
                    if not atlas_ptr or atlas_ptr.deref() is not o:
                        row["image_status"]="sprite_back_reference_unverified"; continue
                    img=sprite.image.convert("RGBA")
                    folder=a.out/"sprites"/name
                    folder.mkdir(parents=True,exist_ok=True)
                    path=folder/(f"{i:02d}_"+safe_name(sprite.m_Name)+".png")
                    img.save(path)
                    with Image.open(path) as check:
                        assert check.convert("RGBA").tobytes()==img.tobytes()
                    row.update(image_status="decoded_atlas_sprite",png=path.relative_to(a.out).as_posix(),
                               size=list(img.size),png_sha256=sha(path.read_bytes()),rgba_sha256=sha(img.tobytes()))
                except Exception as e: row.update(image_status="decode_or_binding_error",error=str(e)[:500])
            atlas_results.append(entry)
        elif typ(o)=="Material" and re.search("medal",name,re.I):
            entry=dict(identity(o),name=name,refs=[])
            try:
                tree=o.parse_as_dict()
                entry["saved_properties"]=primitive(tree.get("m_SavedProperties",{}))
                for prop,fid,pid in walk_refs(tree):
                    row,target=resolve(o,fid,pid); row["property_path"]=prop
                    if target is not None: row["target_name"]=peek(target)
                    entry["refs"].append(row)
            except Exception as e: entry["error"]=str(e)[:500]
            material_results.append(entry)
    dump(a.out/"atlas_evidence.json",atlas_results)
    dump(a.out/"medal_material_evidence.json",material_results)
    dump(a.out/"load_failures.json",failures)
    # Exact ARM64 bytes for narrow classes, not a guessed function boundary.
    methods=json.loads(a.methods.read_text(encoding="utf-8-sig"))["ScriptMethod"]
    by_address=defaultdict(list)
    for m in methods:
        if isinstance(m.get("Address"),int) and m["Address"]>0: by_address[m["Address"]].append(m["Name"])
    addrs=sorted(by_address)
    import bisect
    targets=[x for x in addrs if any(re.search(r"(?:^|[.])(?:Achievement\w*|MedalResourceData)\$\$_",n,re.I) for n in by_address[x])]
    dis=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    native=[]
    with a.elf.open("rb") as f:
        elf=ELFFile(f)
        assert elf["e_machine"]=="EM_AARCH64"
        segments=[s for s in elf.iter_segments() if s["p_type"]=="PT_LOAD" and s["p_flags"]&1]
        for addr in targets[:160]:
            row={"address":hex(addr),"names":by_address[addr],"scope":"bounded instruction window, not full function"}
            native.append(row)
            seg=next((s for s in segments if s["p_vaddr"]<=addr<s["p_vaddr"]+s["p_filesz"]),None)
            if seg is None: row["status"]="not_executable_file_backed"; continue
            idx=bisect.bisect_right(addrs,addr)
            end=min(addr+1024,addrs[idx] if idx<len(addrs) else addr+1024,seg["p_vaddr"]+seg["p_filesz"])
            f.seek(seg["p_offset"]+addr-seg["p_vaddr"])
            raw=f.read((end-addr)//4*4)
            row["file_offset"]=hex(seg["p_offset"]+addr-seg["p_vaddr"])
            row["bytes_sha256"]=sha(raw)
            ins=[]
            for i in dis.disasm(raw,addr):
                item={"address":hex(i.address),"bytes":i.bytes.hex(),"mnemonic":i.mnemonic,"operands":i.op_str}
                if i.mnemonic in ("bl","b") and i.op_str.startswith("#"):
                    try: item["target_names"]=by_address.get(int(i.op_str[1:],0),[])
                    except ValueError: pass
                ins.append(item)
            row.update(status="decoded_window",instructions=ins)
    dump(a.out/"native_consumer_windows.json",native)
    summaries={e["name"]:{"packed":len(e["sprites"]),"resolved":sum(s["status"]=="resolved" for s in e["sprites"]),
                "decoded":sum(s.get("image_status")=="decoded_atlas_sprite" for s in e["sprites"])} for e in atlas_results}
    assert summaries.get("Achievement",{}).get("packed")==12
    assert summaries.get("BankMarks",{}).get("packed")==12
    summary={"apk_sha256":APK_SHA,"elf_sha256":ELF_SHA,"unitypy":UnityPy.__version__,
             "sources":len(sources),"serialized_files":len(assets),"load_failures":len(failures),"atlases":summaries,
             "medal_materials":len(material_results),"native_windows":len(native),"native_candidates_total":len(targets),
             "verified_business_ids":0,"runtime_cache":"not supplied"}
    dump(a.out/"summary.json",summary)
    print(json.dumps(summary,ensure_ascii=False))
    # Keep summary and image names navigable in Obsidian without pretending names are IDs.
    lines=["# Android 原始 APK 图集审计","","[返回成就文档](../../docs/06-Achievements.md) · [统计](summary.json) · [图集证据](atlas_evidence.json) · [材质](medal_material_evidence.json) · [原生指令](native_consumer_windows.json)","","业务 ID 未确认；下列图片仅在双向图集绑定和像素校验通过后输出。",""]
    for e in atlas_results:
        lines.extend(["## "+e["name"],"","|序号|原生名称|状态|预览|","|---:|---|---|---|"])
        for s in e["sprites"]:
            image=("![]("+s["png"]+")") if s.get("png") else ""
            lines.append(f'|{s["packed_index"]}|{s.get("sprite_name",s.get("target_name",""))}|{s.get("image_status",s["status"])}|{image}|')
        lines.append("")
    (a.out/"README.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    for k in ("apk","elf","raw","reassembled","candidates","methods","out"): p.add_argument("--"+k,type=Path,required=True)
    main(p.parse_args())
