# Personal / Waza Native Getter Recovery
[Schema V3](NativeLearnsetSchemaV3.md) · [Learnset native research](PersonalLearnsetNativeResearch.md) · [audit tool](../../tools/home41_native_pml_getters.py)

V3 full import [45966490493](https://github.com/969981/PokeHome_Resources/actions/runs/45966490493) success, artifact 15183710708 SHA256 487fa4e3afecfdd47800dc4c82df88aa5bf2e5bff98d2f3329918930bf72a2c2, SQLite SHA256 (CI) b944d16204b5c33b153cd440b8ca5d9741ce57f70e0a33be5eefaa43a0808e69. 8485 parents,360484 learnset rows,157049 personal fields,5089 Waza records/40871 raw field rows,761486 text entries,7044 image assets. No mutation to V3.

Phase 1: enumerate seven mapped Personal vtables slots +0x30..+0xd0, extract scalar getter windows, identify vtable-offset candidates and exact operand evidence; Waza constructor registration and GOT candidate vtables, dynamic provider and query wrappers. Actual field/default/consumer data-flow must be reviewed before promoting names to business columns. Do not infer semantic labels from order. Fixed original ELF SHA; CI output JSON, CSV, ASM. The new audit is not a completed business schema.
