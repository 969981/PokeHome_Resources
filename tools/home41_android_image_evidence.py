#!/usr/bin/env python3
"""Read-only HOME 4.1 Android image evidence audit. No inferred IDs."""
import argparse
import csv
import json
import re
from pathlib import Path

FAMILY = re.compile(r"achievement|medal|ribbon|encounter.?mark|held.?item|item.?icon|icon.?item|bankmarks|marking", re.I)
ATLAS = "assets/bin/Data/6e26bfd444fa55b46903a2904dda6ee6"

def rows(p):
    with p.open(encoding="utf-8-sig", newline="") as f:
        return list(csv.DictReader(f))

def select_refs(refs, name):
    return sorted((r for r in refs if r["owner_type"] == "SpriteAtlas" and
        r["owner_name"] == name and re.fullmatch(r"\$\.m_PackedSprites\[\d+\]", r["property_path"])),
        key=lambda r: int(re.search(r"\[(\d+)\]", r["property_path"]).group(1)))

def audit(root):
    a = root / "Unpack/Android/4.1.0"
    refs = rows(a / "_meta/unity_references.csv")
    objs = rows(a / "_meta/unity_objects.csv")
    achievement = select_refs(refs, "Achievement")
    bank = select_refs(refs, "BankMarks")
    assert len(achievement) == 12 and len(bank) == 12
    assert [int(r["target_file_id"]) for r in achievement] == list(range(1, 13))
    assert [int(r["target_path_id"]) for r in achievement] == [2,1,2,2,2,2,1,1,1,2,2,2]
    assert all(r["source_container"] == ATLAS and r["owner_path_id"] == "1" and
               r["status"] == "external_file" for r in achievement)
    assert all(r["status"] == "same_file_resolved" for r in bank)
    data = json.loads((a / "il2cpp/script.json").read_text(encoding="utf-8-sig"))
    methods = data["ScriptMethod"]
    assert isinstance(methods, list) and len(methods) == 180628
    candidates = [{"name": m["Name"], "address": m.get("Address"), "signature": m.get("Signature"),
                   "status": "name_candidate_only"}
                  for m in methods if FAMILY.search(m.get("Name", ""))]
    assert any(m["name"] == "MedalResourceData$$_OnTextureLoaded" and m["address"] == 30475804
               for m in candidates)
    match = lambda r: FAMILY.search(" ".join(str(v) for v in r.values()))
    assets = json.loads((root / "HomeImageResources/supplemental/index.json").read_text())["rows"]
    atlas = [r for r in assets if r["category"] == "achievement_atlas"]
    assert len(atlas) == 1 and (atlas[0]["width"], atlas[0]["height"]) == (1024, 1024)
    mesh = a / "models/7376f9962a00_1_Medal.obj"
    lines = mesh.read_text().splitlines()
    geometry = {k: sum(l.startswith(k + " ") for l in lines) for k in ("v","vt","vn","f","usemtl","mtllib")}
    assert geometry == {"v":218,"vt":218,"vn":218,"f":144,"usemtl":0,"mtllib":0}
    return {
        "scope":"existing APK-derived metadata only; no UV or native consumer proof",
        "achievement_refs":[dict(r, achievement_id=None, uv=None) for r in achievement],
        "bankmarks_control":bank, "atlas_texture_candidates":atlas,
        "medal_geometry":geometry,
        "medal_material_refs":[r for r in refs if r["owner_type"] == "Material" and "medal" in r["owner_name"].lower()],
        "object_name_candidates":[r for r in objs if match(r)],
        "reference_name_candidates":[r for r in refs if match(r)],
        "il2cpp_method_candidates":candidates,
        "il2cpp_methods_scanned":len(methods),
        "runtime_cache_status":json.loads((a/"_meta/runtime_inventory_summary.json").read_text())["status"],
        "verified_business_ids":0
    }

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    result = audit(args.root)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")
    print(json.dumps({k:len(v) for k,v in result.items() if isinstance(v,list)}, ensure_ascii=False))
