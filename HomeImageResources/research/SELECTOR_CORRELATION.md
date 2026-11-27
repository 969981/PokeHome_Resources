# Selector correlation and icon extraction

From all 3,506 native leaves, level3 value 0 maps to suffix n (1,753/1,753), value 1 maps to r (1,753/1,753), no exceptions. Level4 raw 4-byte candidate read = 0 maps to f (3,486), 1025 maps to b (20). The latter is a raw field window, not yet proven to be a uint32 enum; width/padding require schema or ELF consumer evidence. Leaf field0 distribution: 40=3501, 44=1, 48=2, 52=2. Runtime lookup precedence and fallback remain unknown. Exact name mapping is verified against current PNG paths, not pixel identity.

To inspect the large BNTX member without the connector's size limit:
```powershell
python tools/home41_icon_brti_audit.py --root . --out audit_output --decode
```
The audit checks expected SHA-256 and sizes, validates each pointer/name, preserves ^o, records unsupported formats/array counts, and exports PNG only if the existing decoder returns valid dimensions. The old decoder default 1000-texture cap remains unchanged; this explicit audit uses a bounded 10000 limit. Optional BC7/ASTC dependency is not installed by the workflow, so those formats may remain unsupported. The workflow uploads an audit artifact; it does not claim publication to the permanent package or alter the base branch. Actual CI status must be checked separately.
