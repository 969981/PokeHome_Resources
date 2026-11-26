#!/usr/bin/env python3
"""Stage the scoped HOME 4.1.0 image archive from a Git checkout; no device access."""
import argparse
import ast
import collections
import hashlib
import json
import shutil
import subprocess
from pathlib import Path
from PIL import Image

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
B = NCA + "/1/bin/"
H = "HomeImageResources/"
DEST = "docs/pokemon_home_reverse/4.1.0/resources/home41_images_4_1_0"
SCRIPTS = (
    "home41_export_editor_images", "home41_rebuild_image_subset",
    "home41_export_pokemon_images_uv", "home41_bntx_to_png", "home41_romfs_core",
    "home41_icon_brti_audit", "home41_image_selector_model",
    "home41_origin_swizzle_audit", "home41_type_native_package",
    "home41_type_layout_audit", "home41_type_image_resolver",
    "home41_full_texture_package", "home41_portrait_icon_parity",
    "home41_icon_selector_audit", "home41_icon_selector_tables",
    "home41_icon_field_producers", "test_home41_bntx", "test_home41_portrait_icon_parity",
)
PREFIXES = tuple(H + p + "/" for p in (
    "core", "pokemon", "pokemon_icons", "native_names", "native_names_compat",
    "languages", "origins", "balls", "types", "rust",
    "research/native_icon_selectors", "research/origin_swizzle",
)) + (B + "pokemon/compress_capture_pokemon/",) + tuple(
    "Unpack/" + B + "appli/" + p + "/bin/" for p in
    ("icon_type", "icon_language", "icon_version", "icon_generation")
)
EXACT = {
    NCA + "/0/main.elf", B + "pokemon/pokemon_list/pokemon_image_list.bin",
    B + "pokemon/icon_pokemon/bin/icon_pokemon.arc",
    B + "appli/icon_item/bin/icon_item.arc",
    H + "pokemon_image_index.csv", H + "item_image_index.csv",
    H + "asset_source_index.csv", H + "texture_atlas_index.json",
    H + "manifest.json", H + "README.md",
    *[H+"docs/"+p for p in ("README.md","01-Pokemon.md","02-Types.md","07-Pipeline.md",
        "08-Coverage.md","09-Pokemon-UV-Extraction.md","10-Type-Language-Version-Origin.md",
        "11-Native-Icon-Integration.md")],
    *[H+"research/"+p for p in ("README.md","HOME_IMAGE_RESOURCE_CORE.md",
        "NATIVE_TYPE_RESOURCE_CORE.md","TYPE_LAYOUT_BINDING.md","NATIVE_IMAGE_SELECTOR_MODEL.md",
        "NATIVE_IMAGE_REQUEST_PRODUCER.md","NATIVE_CORE_DEFAULT_OBJECTS.md",
        "RUST_HOME_IMAGE_RESOURCE_CORE.md","DEFAULT_POINTER_RELR_AND_RUST_TYPE_RESOLVER.md",
        "POKEMON_PORTRAIT_ICON_PARITY.md","POKEMON_IMAGE_SELECTOR_V2.md","FULL_TEXTURE_PACKAGE.md",
        "pokemon_image_list_native.csv","pokemon_image_selector_v2.csv",
        "pokemon_image_selector_v2_summary.json","pokemon_image_list_diff.json",
        "item_native_crosswalk.csv")],
    ".github/workflows/home-uv-pokemon-export.yml",
    ".github/workflows/home-image-rust-core.yml",
    ".github/workflows/home-native-name-png-audit.yml",
    ".github/workflows/home41-sync-editor-images.yml",
}
ARCHIVES = tuple(B+"appli/"+p+"/bin/" for p in
    ("icon_type","icon_language","icon_version","icon_generation"))

def git(root, *args):
    return subprocess.check_output(["git", "-C", str(root), *args])

def digest(p):
    with p.open("rb") as f:
        return hashlib.file_digest(f, "sha256").hexdigest()

def readjson(p):
    return json.loads(p.read_text(encoding="utf-8-sig"))

def writejson(p, x):
    p.write_text(json.dumps(x, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")

def selected(root):
    tracked = set(git(root,"ls-files","-z").decode("utf-8").rstrip("\0").split("\0"))
    files = {p for p in tracked if p in EXACT or p.startswith(PREFIXES)
             or (p.startswith(ARCHIVES) and p.endswith(".arc"))
             or (p.startswith(B+"message/") and p.endswith(("/megaturtle/typename.tbl","/megaturtle/typename.dat")))}
    missing = EXACT - tracked
    if missing: raise ValueError("missing required source files: "+str(sorted(missing)))
    todo = list(SCRIPTS)
    seen = set()
    while todo:
        name = todo.pop()
        if name in seen: continue
        seen.add(name)
        path = "tools/"+name+".py"
        if path not in tracked: raise ValueError("missing script "+path)
        files.add(path)
        for node in ast.walk(ast.parse((root/path).read_text(encoding="utf-8-sig"))):
            modules = [node.module] if isinstance(node, ast.ImportFrom) else (
                [x.name for x in node.names] if isinstance(node, ast.Import) else [])
            for mod in modules:
                if mod and "tools/"+mod+".py" in tracked: todo.append(mod)
    if len({p.casefold() for p in files}) != len(files):
        raise ValueError("Windows case-fold collision")
    return sorted(files)

def png(p, size=None):
    with Image.open(p) as im:
        if im.format != "PNG": raise ValueError("not PNG "+str(p))
        if size and im.size not in size: raise ValueError("wrong size "+str(p))
        im.verify()
    with Image.open(p) as im:
        im.load()

def validate(root):
    h=root/H
    portraits=list((h/"pokemon").glob("*.png"))
    icons=list((h/"pokemon_icons").glob("*.png"))
    raw=list((root/B/"pokemon/compress_capture_pokemon").glob("*.bntx.gz"))
    counts={"portraits":len(portraits),"icons":len(icons),"raw_portraits":len(raw)}
    if counts != {"portraits":3538,"icons":3506,"raw_portraits":3538}:
        raise ValueError(counts)
    if {p.name.removesuffix(".bntx.gz") for p in raw} != {p.stem for p in portraits}:
        raise ValueError("portrait names differ")
    for p in raw:
        with p.open("rb") as f:
            if f.read(2)!=b"\x1f\x8b": raise ValueError("not original gzip "+str(p))
    for p in portraits: png(p,{(512,512),(112,112)})
    for p in icons: png(p,{(112,112)})
    from home41_romfs_core import sarc_members
    selector=root/B/"pokemon/pokemon_list/pokemon_image_list.bin"
    if digest(selector)!="92d950d1006bfd254a92947f4ad16b95e7f69630af0f36db7c5d1088f132ffbc":
        raise ValueError("selector SHA mismatch")
    arc=(root/B/"pokemon/icon_pokemon/bin/icon_pokemon.arc").read_bytes()
    m=[x for x in sarc_members(arc) if x["name"]=="timg/__Combined.bntx"]
    if len(m)!=1 or m[0]["bytes"]!=52879496: raise ValueError("icon BNTX count/size")
    if hashlib.sha256(arc[m[0]["offset"]:m[0]["offset"]+m[0]["bytes"]]).hexdigest()!="eca6074b6b4a8c6f487c515dee8080e147426b4db335dd8b5847b9a1efc7de06":
        raise ValueError("icon BNTX SHA mismatch")
    if digest(root/NCA/"0/main.elf")!="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a":
        raise ValueError("ELF SHA mismatch")
    for folder,n in zip(ARCHIVES,(10,10,1,2)):
        if len(list((root/folder).glob("*.arc")))!=n: raise ValueError("ARC count "+folder)
    t=readjson(h/"core/types/index.json")
    if len(t["rows"])!=360 or len({r["path"] for r in t["rows"]})!=179:
        raise ValueError("type index count")
    for r in t["rows"]:
        p=h/r["path"]
        with Image.open(p) as im:
            if hashlib.sha256(im.convert("RGBA").tobytes()).hexdigest()!=r["rgba_sha256"]:
                raise ValueError("type pixel mismatch "+str(p))
    original=readjson(h/"native_names/index.json")["rows"]
    compat=readjson(h/"native_names_compat/index.json")["rows"]
    if len(original)!=419 or len(compat)!=419: raise ValueError("alias count")
    by_original={r["original_named_path"]:r for r in compat}
    if len(by_original)!=419: raise ValueError("compat key collision")
    for r in original:
        c=by_original[r["named_path"]]
        expected=r["named_path"].replace("native_names/","native_names_compat/",1).replace("^","_")
        if c["named_path"]!=expected or c["raw_name"]!=r["raw_name"]: raise ValueError("compat mapping")
        data=(h/r["source_path"]).read_bytes()
        if hashlib.sha1(b"blob "+str(len(data)).encode()+b"\0"+data).hexdigest()!=r["git_blob"]:
            raise ValueError("source Git blob mismatch")
        for item in (r,c):
            p=h/item["named_path"]
            if p.read_bytes()!=data: raise ValueError("alias bytes mismatch "+str(p))
            png(p)
    for folder,rows in (("native_names",original),("native_names_compat",compat)):
        if set((h/folder).rglob("*.png"))!={h/r["named_path"] for r in rows}:
            raise ValueError("unexpected alias path "+folder)
    core=readjson(h/"core/resource_core.json")
    if len(core["pokemon"])!=3506 or len(core["ball_display"]["rows"])!=38: raise ValueError("core count")
    for r in core["pokemon"]:
        for key in ("icon","portrait"):
            if not (h/r[key]).is_file(): raise ValueError("missing core path "+r[key])
    for r in core["ball_display"]["rows"]:
        png(h/r["path"])
    return {**counts,"type_logical":360,"type_unique_rgba":179,"native_names":419,
            "compat_names":419,"core_selector_rows":3506,"ball_dependency":38,"ui_arcs":23}

def stage(root,out):
    root=root.resolve(); out=out.resolve()
    if out.exists() or out==root or root in out.parents:
        raise ValueError("use new output directory outside source checkout")
    out.mkdir(parents=True)
    manifest=[]
    for rel in selected(root):
        src=root/rel
        if not src.is_file() or src.is_symlink() or not src.resolve().is_relative_to(root):
            raise ValueError("invalid source "+rel)
        if src.stat().st_size>=100*1024*1024: raise ValueError("GitHub single-file limit "+rel)
        if src.stat().st_size<1024 and src.read_bytes().startswith(b"version https://git-lfs.github.com/spec/v1"):
            raise ValueError("unmaterialized LFS "+rel)
        dst=out/rel; dst.parent.mkdir(parents=True,exist_ok=True); shutil.copyfile(src,dst)
        sha=digest(src)
        if digest(dst)!=sha: raise ValueError("copy mismatch "+rel)
        manifest.append({"path":rel,"bytes":src.stat().st_size,"sha256":sha})
    counts=validate(out)
    commit=git(root,"rev-parse","HEAD").decode().strip()
    writejson(out/"IMPORT-MANIFEST.json",{"schema_version":1,"home_version":"4.1.0",
        "source_repository":"969981/PokeHome_Resources","source_commit":commit,
        "target_path":DEST,"counts":counts,"file_count":len(manifest),
        "bytes":sum(r["bytes"] for r in manifest),"files":manifest})
    shutil.copyfile(root/"docs/HOME41_IMAGE_EDITOR_IMPORT.md",out/"README.md")
    print("STAGED",json.dumps(counts), "files",len(manifest),"bytes",sum(r["bytes"] for r in manifest))

def verify(root):
    m=readjson(root/"IMPORT-MANIFEST.json")
    expected={r["path"] for r in m["files"]}
    actual={p.relative_to(root).as_posix() for p in root.rglob("*") if p.is_file()}
    if actual!=expected|{"README.md","IMPORT-MANIFEST.json"}: raise ValueError("bundle paths differ")
    for r in m["files"]:
        p=root/r["path"]
        if p.is_symlink() or not p.resolve().is_relative_to(root) or p.stat().st_size!=r["bytes"] or digest(p)!=r["sha256"]:
            raise ValueError("bundle digest mismatch "+r["path"])
    print("VERIFIED",len(expected),"source files",m["source_commit"])

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    g=p.add_mutually_exclusive_group(required=True)
    g.add_argument("--out",type=Path)
    g.add_argument("--verify-bundle",type=Path)
    a=p.parse_args()
    if a.verify_bundle: verify(a.verify_bundle.resolve())
    else: stage(a.root,a.out)
