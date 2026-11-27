# Native Scalar Core / Schema V4
[Native Getter research](PersonalWazaNativeGetters.md) · [Migration](../schemas/migrations/0004_native_scalar_getters.sql)

V4 adds a release-scoped getter registry and typed views over the unchanged original V2 fields and V3 record keys. Physical mapping 133 Personal +48 Waza. No duplicate physical source values. Each getter carries semantic_status (identity_verified, consumer_supported, sample_supported, unresolved); names in typed views are convenience names, NOT universal game enums. Personal stats/type/ability labels supported by anchors and native read paths; exact upper-level semantics not all closed. Waza f1 final Ikkaku dynamic predicate, f6 special 101 comparison, f7 PP-Up arithmetic; f3 unresolved, its null RECORD default 13 differs from absent FIELD default 0. Default 0 for scalar fields applies to existing source record; full native lookup fallback/invalid selector is not modeled. Ikkaku f8 and Titan/ Ikkaku personal extensions not registered in this common-slot catalog.

Build re-runs original ELF getter closure, checks all Waza read/default instruction paths, and compares every typed scalar to original source bytes. Views: v_native_scalar_values (raw presence, raw value, native value, semantic status), v_native_personal_base_data, v_native_waza_base_data. No official move learning method mapping or cross-game legal rules.

```powershell
uv run PokemonResourceDatabase/tools/build_home_resources.py --out export/home-v4
```

CI result pending; keep V3 as verified baseline until full V4 passes.

## Verified schema CI
[46011533391](https://github.com/969981/PokeHome_Resources/actions/runs/46011533391) success, schema_version4,60 business tables,308 fields,14/14 tests. Artifact 15203797949 ZIP SHA256 a5fd94d972926500ff069bbe74cfe08598b2bae4c3e4b0865c31c86417ca477b; independently downloaded and verified SHA256/CRC, SQLite user_version=4, integrity_check=ok and foreign_key_check empty. Historical artifact/file naming schema_v1 is retained by legacy workflow but version is4. Full V4 data import [46011533477](https://github.com/969981/PokeHome_Resources/actions/runs/46011533477) still running at verification; this schema package contains no real imported scalar records. V3 remains verified full-data baseline until V4 data import succeeds.
