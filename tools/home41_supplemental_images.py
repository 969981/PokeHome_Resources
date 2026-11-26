#!/usr/bin/env python3
"""Audit and extract remaining HOME image families; no guessed game IDs or atlas crops."""
from __future__ import annotations
import argparse, csv, hashlib, json, re, shutil
from collections import Counter, defaultdict
from pathlib import Path
from PIL import Image
from home41_icon_brti_audit import NCA, metadata
from home41_full_texture_package import walk, image_info, writecsv
from home41_bntx_to_png import decode_bntx
from home41_romfs_core import ahtb_labels, dat_lines

def sha(b): return hashlib.sha256(b).hexdigest()
def dump(p,obj):
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")

def inspect_png(p):
    raw=p.read_bytes()
    with Image.open(p) as im: w,h=im.size
    return dict(width=w,height=h,**image_info(raw,w,h))

def export(root,dst,out):
    rom=root/NCA/"1"; android=root/"Unpack/Android/4.1.0"
    inventory=[]; assets=[]; errors=[]; cache={}
    mark_re=re.compile(r"common_icon_btn_marking_(\d\d)_([a-z0-9_]+)\^[a-z]$",re.I)
    family=re.compile(r"ribbon|encounter.?mark|proof|medal|achievement|wappen|award|trophy|badge|item|marking",re.I)
    target_arcs={"bin/appli/mtt_context/bin/mtt_context_marking_00.arc":"context",
                 "bin/appli/mtt_pokebox/bin/mtt_pokebox_list.arc":"box"}
    for p in sorted(rom.rglob("*.arc"))+sorted(rom.rglob("*.bntx")):
        rel=p.relative_to(rom).as_posix()
        try:
            raw=p.read_bytes(); digest=sha(raw)
            for member,b in walk(raw):
                mh=sha(b)
                if mh not in cache: cache[mh]=metadata(b)
                for r in cache[mh]:
                    if family.search(r["raw_name"]):
                        inventory.append(dict(platform="switch",source=p.relative_to(root).as_posix(),source_sha256=digest,
                           member=member,member_sha256=mh,texture_index=r["texture_index"],raw_name=r["raw_name"],
                           format=r["format"],width=r["width"],height=r["height"],status="name_candidate"))
                if rel not in target_arcs: continue
                meta=cache[mh]
                wanted={r["texture_index"]:r for r in meta if mark_re.fullmatch(r["raw_name"])}
                if not wanted: continue
                for info,png in decode_bntx(b,max_textures=10000):
                    idx=info["texture_index"]
                    if idx not in wanted: continue
                    if png is None: raise ValueError("marking decode failed")
                    r=wanted[idx]; m=mark_re.fullmatch(r["raw_name"])
                    path=Path("markings/switch")/target_arcs[rel]/(r["raw_name"].replace("^","_")+".png")
                    dest=dst/path; dest.parent.mkdir(parents=True,exist_ok=True);dest.write_bytes(png)
                    assets.append(dict(category="box_marking",platform="switch",source=p.relative_to(root).as_posix(),
                      source_sha256=digest,member=member,member_sha256=mh,texture_index=idx,raw_name=r["raw_name"],
                      format=r["format"],shape_ordinal=int(m[1]),layer_token=m[2],path=path.as_posix(),
                      **inspect_png(dest),status="decoded_original_texture; layer/shape ordinal; shader colors unverified"))
        except Exception as e: errors.append(dict(source=rel,error=repr(e)))
    if errors: raise ValueError(json.dumps(errors[:8]))
    if sum(r["category"]=="box_marking" for r in assets)!=30: raise ValueError("expected 30 targeted marking layers")
    # Android source PNGs are previous UnityPy exports, not newly extracted APK files.
    # Use actual object names, retain all provenance and don't equate medal UI with achievement IDs.
    rules=[
        ("box_marking",re.compile(r"bnk_mark_symbol_(?:triangle|square|star|circle|heart|diamond)(?:_none)?$",re.I)),
        ("box_marking_atlas",re.compile(r"sactx.*-BankMarks-",re.I)),
        ("achievement_atlas",re.compile(r"sactx.*-Achievement-",re.I)),
        ("medal_material",re.compile(r"MTmedal_(?:front|back)_",re.I)),
        ("medal_ui",re.compile(r"^(?:medal_|ui_Medal_|MedalDeliver|MedalBG|cnm_ft_medal_icon)",re.I)),
        ("stamp_candidate",re.compile(r"^(?:img_stamp_|cmn_button_stamp|sactx.*-SealBase)",re.I)),
        ("ball_atlas_candidate",re.compile(r"sactx.*-monbo_atlas-",re.I)),
        ("mint_atlas_candidate",re.compile(r"sactx.*-Mint-",re.I)),
        ("pokemon_status",re.compile(r"^bnk_mark_(?:oyabun|shiny|pokerus|DAIMAX|expedition|tag)",re.I)),
        ("ribbon_or_encounter_mark_candidate",re.compile(r"ribbon|encounter.?mark",re.I)),
        ("held_item_candidate",re.compile(r"held.?item|item.?icon|icon.?item",re.I)),
    ]
    for folder in ("images","sprites"):
        for p in sorted((android/folder).glob("*.png")):
            m=re.match(r"([0-9a-f]{12})_(\d+)_(.+)",p.stem)
            if not m: continue
            name=m[3]
            if family.search(name) or any(rx.search(name) for _,rx in rules):
                inventory.append(dict(platform="android",source=p.relative_to(root).as_posix(),source_sha256=sha(p.read_bytes()),
                    container_prefix=m[1],path_id=m[2],raw_name=name,status="UnityPy_export_filename"))
            for category,rx in rules:
                if not rx.search(name): continue
                path=Path(category)/"android"/folder/p.name
                dest=dst/path;dest.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(p,dest)
                assets.append(dict(category=category,platform="android",source=p.relative_to(root).as_posix(),
                    source_sha256=sha(p.read_bytes()),container_prefix=m[1],path_id=m[2],raw_name=name,path=path.as_posix(),
                    **inspect_png(dest),status="existing_UnityPy_export; native business ID unverified"))
    # Exact original label dictionaries, not image IDs.
    texts=[]; table_summary=[]
    for lang in ("Simp_Chinese","English"):
        msg=rom/"bin/message"/lang/"megaturtle"
        for tbl in sorted(msg.glob("*.tbl")):
            if not re.fullmatch(r"ribbon(?:_[A-Z]+)?|itemname(?:_.*)?|[A-Z]+_iteminfo",tbl.stem): continue
            dat=tbl.with_suffix(".dat")
            if not dat.exists(): continue
            labels=ahtb_labels(tbl.read_bytes()); rows=dat_lines(dat.read_bytes())
            if len(labels)==len(rows)+1 and labels[-1][0].lower().endswith("max"): labels=labels[:-1]
            if len(labels)!=len(rows):
                table_summary.append(dict(language=lang,table=tbl.stem,status="count_mismatch",labels=len(labels),texts=len(rows)))
                continue
            table_summary.append(dict(language=lang,table=tbl.stem,status="parsed",rows=len(rows)))
            for (label,h),r in zip(labels,rows):
                texts.append(dict(language=lang,table=tbl.stem,index=r["index"],label=label,hash=f"{h:016x}",text=r["text"],
                   table_source=tbl.relative_to(root).as_posix(),data_source=dat.relative_to(root).as_posix(),
                   status="text_only_not_image_mapping"))
    if texts: writecsv(dst/"message_dictionary.csv",texts)
    # Search previously exported metadata for SpriteAtlas/Sprite relationships.
    # Preserve matching rows as evidence, not inferred sprite rectangles.
    meta=android/"_meta"; meta_counts={}
    for filename in ("unity_objects.csv","unity_references.csv","resource_candidates.csv","apk_entries.csv","unity_failures.csv"):
        p=meta/filename
        if not p.exists(): continue
        with p.open(newline="",encoding="utf-8-sig") as f:
            reader=csv.DictReader(f); hits=[]
            for row in reader:
                line=" ".join(str(v) for v in row.values())
                if re.search(r"ribbon|encounter.?mark|achievement|bankmarks|medal|held.?item|item.?icon|icon.?item|9eaea10cde8e",line,re.I):
                    hits.append(row)
        meta_counts[filename]=len(hits)
        if hits: writecsv(out/("android_"+filename),hits)
    dump(dst/"index.json",dict(schema_version=1,home_version="4.1.0",rows=assets,
             scope="original source and existing APK exports; candidates not production ID maps"))
    dump(out/"name_inventory.json",inventory);dump(out/"message_tables.json",table_summary)
    summary=dict(exported_rows=len(assets),categories=dict(Counter(r["category"] for r in assets)),
        platforms=dict(Counter(r["platform"] for r in assets)),distinct_rgba=len({r["rgba_sha256"] for r in assets}),
        switch_name_hits=sum(r["platform"]=="switch" for r in inventory),
        android_name_hits=sum(r["platform"]=="android" for r in inventory),
        message_rows=len(texts),message_tables=table_summary,android_metadata_hits=meta_counts,
        runtime_cache="not supplied",semantic_scope="No generic ItemID/RibbonID/MarkID/AchievementID proof")
    dump(dst/"summary.json",summary);dump(out/"summary.json",summary)
    # GitHub + Obsidian compatible Markdown links and previews; same package relative paths.
    lines=["# 补充素材索引","","> 本页由审计脚本生成。图片为原始纹理/既有 Unity 导出；未证实的业务 ID 不作为 Resolver。","",
           "[返回资源导航](../../docs/README.md) · [JSON 索引](index.json) · [统计](summary.json) · [文本字典](message_dictionary.csv)",""]
    groups=defaultdict(list)
    for r in assets:groups[r["category"]].append(r)
    for cat,rs in sorted(groups.items()):
        lines.extend([f"## {cat} ({len(rs)})","","| 图片 | 原始名称 | 尺寸 | 平台 |","|---|---|---|---|"])
        for r in rs:
            lines.append(f'| ![]({r["path"]}) | [{r["raw_name"]}]({r["path"]}) | {r["width"]}×{r["height"]} | {r["platform"]} |')
        lines.append("")
    (dst/"README.md").write_text("\n".join(lines),encoding="utf-8")
    print(json.dumps({k:v for k,v in summary.items() if k!="message_tables"},ensure_ascii=False))

if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();a.out.mkdir(parents=True,exist_ok=True);export(a.root,a.root/"HomeImageResources/supplemental",a.out)
