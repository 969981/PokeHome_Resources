#!/usr/bin/env python3
"""Offline-only Pokémon HOME 4.1.0 IL2CPP pre-registration UI symbol audit.

Source: original IL2CppDumper script.json from the user's own resource dump.
This identifies candidate native UI controller names only. No runtime hook,
consent action, account registration, authentication or network access.
"""
from __future__ import annotations

import argparse
import json
import re
from collections import Counter
from pathlib import Path

KEYWORDS = {
    "official_terms": ("terms", "agreement", "agree", "consent", "privacy",
                       "policy", "usercontract", "licence", "license"),
    "onboarding": ("firstboot", "first_boot", "firststartup", "firstlaunch",
                    "onboarding", "initialsetting"),
    "navigation": ("nextbutton", "btnnext", "clicknext", "onnext",
                   "onconfirm", "onaccept", "onagree"),
}
MAX_ROWS = 300
MAX_METHOD_NAME = 250


def audit_methods(methods: object) -> dict:
    if not isinstance(methods, list):
        return {"status": "invalid_method_list"}
    groups = {name: [] for name in KEYWORDS}
    counts = Counter()
    classes = Counter()
    for item in methods:
        if not isinstance(item, dict):
            continue
        symbol = item.get("Name")
        if not isinstance(symbol, str) or "$$" not in symbol:
            continue
        folded = symbol.casefold().replace("_", "")
        kind = [key for key, words in KEYWORDS.items() if
                any(w.replace("_", "") in folded for w in words)]
        if not kind:
            continue
        classname = symbol.split("$$", 1)[0]
        if len(classname) > 170 or not re.fullmatch(r"[A-Za-z0-9_.+<>-]+", classname):
            continue
        classes[classname] += 1
        raw_addr = item.get("Address")
        try:
            addr = int(raw_addr, 0) if isinstance(raw_addr, str) else int(raw_addr)
        except (ValueError, TypeError):
            addr = -1
        for key in kind:
            counts[key] += 1
            if len(groups[key]) < MAX_ROWS:
                groups[key].append({
                    "name": symbol[:MAX_METHOD_NAME],
                    "rva": ("0x%X" % addr) if 0 <= addr <= 0xFFFFFFFFFFFFFFFF else None
                })
    return {
        "status": "static_candidates_only",
        "source_method_count": len(methods),
        "group_match_total": dict(counts),
        "group_rows_stored": {k: len(v) for k, v in groups.items()},
        "candidate_classes": [{"class": name, "matches": count}
                              for name, count in classes.most_common(150)],
        "methods": groups,
        "native_terms_page_identified": False,
        "terms_ui_tapped": False,
        "account_created": False,
        "utid_observed": False
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--script", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    data = json.loads(args.script.read_text(encoding="utf-8-sig"))
    methods = data.get("ScriptMethod", [])
    if not isinstance(methods, list) or len(methods) < 100000:
        print('{"status":"incomplete_static_index"}')
        return 2
    report = audit_methods(methods)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2, ensure_ascii=False) + "\n",
                           encoding="utf-8")
    print(json.dumps({k: v for k, v in report.items()
                      if k not in ("methods", "candidate_classes")}, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
