/* Read-only callback result category monitor.
 * HOME 4.1.0 AArch64 IL2CPP, original code RVAs.
 * Never export args/pointers/response bytes/headers/tokens or arbitrary ints.
 */
'use strict';
let i=0, ready=false;
function emit(event,info) {
  if (i++>=40) return;
  send(Object.assign({event},info||{}));
}
function resultCategory(n) {
  if (n === 9007) return 'matches_display_detail_9007';
  if (n === 400) return 'matches_display_code_400';
  if (n === 200) return 'exact_200';
  if (n < 0) return 'negative';
  if (n === 0) return 'zero';
  if (n > 0 && n < 100) return 'small_positive';
  if (n >= 100 && n <= 599) return 'http_range_other';
  if (n >= 600 && n < 10000) return 'other_600_9999';
  if (n >= 10000 && n < 1000000) return 'other_10000_999999';
  return 'outside_expected_code_range';
}
function install() {
  if (ready) return true;
  const mod=Process.findModuleByName('libil2cpp.so');
  if (!mod || Process.arch!=='arm64') return false;
  if (mod.size<=0x1F29E6C) return false;
  try {
    Interceptor.attach(mod.base.add(0x1F29E6C),{
      onEnter(args) {
        try {
          const code=args[1].toInt32();
          emit('callback_result_class',{class_name:resultCategory(code)});
        }catch(_){emit('callback_result_unreadable');}
      }
    });
    emit('arm64_response_hook_ready');
    ready=true;
  }catch(_){emit('arm64_response_hook_unavailable');ready=true;}
  return true;
}
emit('agent_loaded',{arch: String(Process.arch)});
install();
if (!ready) {
  const poll=setInterval(()=>{if(install())clearInterval(poll)},200);
  setTimeout(()=>{clearInterval(poll);if(!ready)emit('arm64_module_not_visible')},45000);
}
