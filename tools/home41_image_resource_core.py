"""Fail-closed HOME image resource resolver, usable offline with resource_core.json."""
import json
from pathlib import Path

class HomeImageResourceCore:
    def __init__(self, package):
        self.package=Path(package).resolve()
        self.data=json.loads((self.package/"core/resource_core.json").read_text(encoding="utf-8"))
        if self.data["schema_version"]!=1 or self.data["home_version"]!="4.1.0":
            raise ValueError("unsupported resource core")
        self.pokemon={tuple(r["key"]):r for r in self.data["pokemon"]}
        self.balls={r["input"]:r for r in self.data["ball_display"]["rows"]}
    def _path(self,rel):
        p=(self.package/rel).resolve()
        if self.package not in p.parents or not p.is_file():
            raise ValueError("missing/unsafe resource")
        return p
    def resolve_pokemon_exact(self,species,form,color,view,gender_code,variant_code,decoration,portrait=False):
        r=self.pokemon.get((species,form,color,view,gender_code,variant_code,decoration))
        return self._path(r["portrait" if portrait else "icon"]) if r else None
    def resolve_ball_display(self,native_display_input):
        # Deliberately no implicit coercion from PKM Ball or modulo wrapping.
        r=self.balls.get(native_display_input)
        return self._path(r["path"]) if r else None
    def resolve_item(self,item_id): return None
    def resolve_ribbon(self,ribbon_id): return None
    def resolve_mark(self,mark_id): return None
    def resolve_type(self,type_id,language=None): return None
    def resolve_achievement(self,achievement_id): return None
