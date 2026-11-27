"""Read-only resolver for proven HOME type display index; no implicit PKM conversion."""
import json
from pathlib import Path

class HomeTypeImageResolver:
    def __init__(self,package):
        self.package=Path(package).resolve()
        data=json.loads((self.package/"core/types/index.json").read_text(encoding="utf-8"))
        if data["schema_version"]!=1 or data["home_version"]!="4.1.0":
            raise ValueError("unsupported type pack")
        self.rows={(r["native_display_index"],r["kind"],r["language"]):r for r in data["rows"]}
        if len(self.rows)!=360 or any(r["status"]!="static_native_display_selector_exact" for r in data["rows"]):
            raise ValueError("incomplete or unverified type map")
    def resolve(self,native_display_index,kind="symbol",language="JPN"):
        if type(native_display_index) is not int or not 0<=native_display_index<18:
            return None
        r=self.rows.get((native_display_index,kind,language))
        if r is None:return None
        p=(self.package/r["path"]).resolve()
        if self.package not in p.parents or not p.is_file():raise ValueError("missing/unsafe resource")
        return p
    def resolve_message_label(self,message_label_id,kind="symbol",language="JPN"):
        if type(message_label_id) is not int or message_label_id not in (*range(9),*range(10,19)):
            return None
        return self.resolve(message_label_id-(message_label_id>=10),kind,language)
