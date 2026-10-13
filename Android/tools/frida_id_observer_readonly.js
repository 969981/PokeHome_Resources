// HOME Android 4.1.0 versionCode81 -- READ-ONLY account ID observer.
// Arm64 IL2CPP libil2cpp.so SHA256:
// 80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe
// Only attach to a user's own test device. No network replay or memory mutation.
'use strict';

const SHOW_FULL_IDS = false; // true only locally on your own test accounts.
const mod = Process.getModuleByName('libil2cpp.so');
const base = mod.base;
const RVA = {
  authCallback: 0x1D33294,
  basicResponseReturn: 0x1D2BA68,
  setBasic: 0x1D763D0,
  transferCallback: 0x1D345E8
};

function managedString(p) {
  if (p.isNull()) return null;
  try {
    // arm64 IL2CPP System.String: object refs [0],[8], length +0x10, UTF16 +0x14
    const count = p.add(0x10).readS32();
    if (count < 0 || count > 128) return '[invalid length]';
    return p.add(0x14).readUtf16String(count);
  } catch (e) { return '[unreadable string]'; }
}
function fieldString(obj, offset) {
  try { return obj.isNull() ? null : managedString(obj.add(offset).readPointer()); }
  catch (e) { return '[unreadable field]'; }
}
function mask(v) {
  if (v === null) return '(null)';
  if (SHOW_FULL_IDS) return v;
  return v.length > 4 ? '*'.repeat(Math.min(24,v.length-4))+v.slice(-4) : '*'.repeat(v.length);
}
function watch(name, offset, observer) {
  Interceptor.attach(base.add(offset), observer);
  console.log('[HOME41]', name, 'hooked', base.add(offset));
}

watch('AuthRegisterUser.CallAfterResponse', RVA.authCallback, {
  onEnter(args) {
    console.log('[HOME41] register http_status=', args[1].toInt32(),
      'response_present=', !args[3].isNull());
    // Never dump auth cookies, id_token, UUID, nonce, or authorization headers.
  }
});
watch('UDManager.SetBasic', RVA.setBasic, {
  onEnter(args) {
    const fromResponse=this.context.lr.equals(base.add(RVA.basicResponseReturn));
    const utid=fieldString(args[0],0xF0);
    console.log('[HOME41] server_basic_receive=', fromResponse,
      'caller_rva=', this.context.lr.sub(base),
      'utid=', mask(utid));
  },
  onLeave(ret) { console.log('[HOME41] SetBasic result=', ret.toInt32()); }
});
watch('ApiRequestChampTransferAccount.CallAfterResponse', RVA.transferCallback, {
  onEnter(args) {
    const status=args[1].toInt32();
    if (status !== 200 || args[3].isNull()) {
      console.log('[HOME41] transfer status=', status); return;
    }
    console.log('[HOME41] transfer cid=', mask(fieldString(args[3],0x140)));
  }
});
console.log('[HOME41] Observe first registration, fresh login, and transfer UI on your own test user.');
