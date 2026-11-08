#!/usr/bin/env python3
"""Read-only static evidence for UnitySendMessage receiver Azurill.Tarinor.

The receiver may be a GameObject rather than an IL2CPP type. Matching static
metadata does not prove a client-side check or explain a server error.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import re
from pathlib import Path

PAT = re.compile(rb"(?<![A-Za-z_0-9])(Azurill|Tarinor)(?![A-Za-z_0-9])")


def scan_text(path: Path, around=240, cap=50) -> dict:
    data = path.read_bytes()
    matches = []
    found = 0
    for m in PAT.finditer(data):
        found += 1
        if len(matches) >= cap:
            continue
        before = data[max(0, m.start()-around):m.start()].decode("utf-8", "replace")
        after = data[m.end():min(len(data), m.end()+around)].decode("utf-8", "replace")
        context = (before+"["+m.group().decode()+"]"+after).replace("\r", "").strip()
        matches.append({
            "target":m.group().decode(), "byte_offset":m.start(), "excerpt":context
        })
    return {
        "path":str(path), "sha256":hashlib.sha256(data).hexdigest(),
        "file_bytes":len(data), "match_count":found, "first_matches":matches
    }


def scan_dump(path: Path):
    data = path.read_text(encoding="utf-8", errors="replace")
    lines = data.splitlines()
    linenums = [i for i,line in enumerate(lines)
                if re.search(r"\b(?:Azurill|Tarinor)\b", line)]
    matches = []
    for i in linenums[:100]:
        ns, typedef = "", ""
        for q in range(max(0,i-250), i+1):
            line = lines[q].strip()
            if line.startswith("// Namespace:"):
                ns, typedef = line, ""
            elif re.match(
                r"^(?:public|internal|private|protected|abstract|sealed|static|partial|unsafe|\[|class|struct|enum|interface)", line
            ) and re.search(r"\b(class|struct|interface|enum)\b", line):
                typedef = line[:220]
        neighborhood = "\n".join(lines[max(0,i-5):min(len(lines),i+12)])
        matches.append({
            "line":i+1, "namespace":ns, "type_context":typedef,
            "match_line":lines[i][:250],
            "source_excerpt":neighborhood[:1300]
        })
    return {
        "path":str(path), "sha256":hashlib.sha256(path.read_bytes()).hexdigest(),
        "lines":len(lines), "match_count":len(linenums), "first_matches":matches
    }


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--dump", required=True, type=Path)
    p.add_argument("--script", required=True, type=Path)
    p.add_argument("--literals", required=True, type=Path)
    p.add_argument("--output", required=True, type=Path)
    a=p.parse_args()
    results={
        "targets":{"unity_gameobject":"Azurill","unity_receiver_method":"Tarinor"},
        "scope":"static IL2CPP metadata only; no certificates or account data",
        "dump":scan_dump(a.dump),
        "script":scan_text(a.script),
        "string_literals":scan_text(a.literals,cap=100),
        "caution":("UnitySendMessage receiver is usually a GameObject, not necessarily "
                   "a managed type. Names alone do not establish signature rejection.")
    }
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(results,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "found":{k:results[k]["match_count"] for k in ("dump","script","string_literals")},
        "target":results["targets"]
    },ensure_ascii=False))
    return 0


if __name__=="__main__":
    raise SystemExit(main())
