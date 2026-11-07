/*
 * Frida 17.26.1 — read-only architecture/IL2CPP visibility probe in
 * Android Native Bridge "emulated" realm.
 *
 * This is intentionally a separate agent without Java Bridge:
 * Java hooks belong in native realm. No memory mutation, calls to HOME
 * app methods, network data, addresses, paths, hostnames or secret fields.
 */
'use strict';
let visible = false;
let rvaInBounds = false;
try {
  const module = Process.findModuleByName('libil2cpp.so');
  visible = module !== null;
  rvaInBounds = visible && module.size > 0x1D763D0;
} catch (_) {}
send({
  event: "emulated_realm_probe",
  arch: String(Process.arch),
  il2cpp_visible: visible,
  basic_rva_in_bounds: rvaInBounds
});
