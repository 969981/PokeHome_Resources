/*
 * HOME 4.1.0 signing-data/initial-request boundary, read-only Frida ARM64.
 * Verified 4.1.0 code RVAs. No args, pointers, strings, credentials, URL,
 * request content, server response content, or native memory are exported.
 * All callbacks delegate to the original code path.
 */
'use strict';
const start = Date.now();
const MODULE = 'libil2cpp.so';
const DYNAMIC_RVAS = __HOME41_NETWORK_METHOD_RVAS__;
const STATIC_RVAS = {
  signing_receiver: 0x1D4AA34,
  signing_field_setter: 0x1F26E78,
  signature_field_write: 0x1F26F08,
  request_prepare: 0x1F27F5C,
  signature_field_read: 0x1F28474,
  signature_request_object_write: 0x1F284AC,
  request_serializer: 0x27395F0,
  response_callback: 0x1F29E6C,
  api_error_handler: 0x1F27858
};
let registered = false;
let eventTotal = 0;
const counts = Object.create(null);
function emit(event, info) {
  if (eventTotal >= 220) return;
  const count = counts[event] || 0;
  if (count >= 20) return;
  counts[event] = count + 1;
  eventTotal++;
  send(Object.assign({event, observer_elapsed_ms: Date.now() - start}, info || {}));
}
function classifyApiCode(value) {
  if (value === 9007) return 'exact_9007';
  if (value === 400) return 'exact_400';
  if (value === 200) return 'exact_200';
  if (value === 0) return 'zero';
  if (value < 0) return 'negative';
  if (value >= 100 && value <= 599) return 'other_http_range';
  if (value >= 1 && value <= 99) return 'small_positive';
  if (value >= 600 && value < 10000) return 'other_600_9999';
  if (value >= 10000 && value <= 999999) return 'other_10000_999999';
  return 'out_of_classification_range';
}
function hook(mod, name, rva, handlers) {
  if (!Number.isSafeInteger(rva) || rva <= 0 || rva >= mod.size) {
    emit('native_hook_not_in_module', {hook:name});
    return;
  }
  try {
    Interceptor.attach(mod.base.add(rva), handlers);
    emit('native_hook_ready', {hook:name});
  } catch (_) {
    emit('native_hook_failed', {hook:name});
  }
}
function setup() {
  if (registered) return;
  if (Process.arch !== 'arm64') {
    registered = true;
    emit('native_arch_unsupported', {arch: String(Process.arch)});
    return;
  }
  const mod = Process.findModuleByName(MODULE);
  if (mod === null) return;
  registered = true;
  emit('native_module_ready', {arch:'arm64'});
  hook(mod, 'signing_receiver', STATIC_RVAS.signing_receiver, {
    onEnter() { emit('unity_signing_callback_enter'); }
  });
  hook(mod, 'signing_field_setter', STATIC_RVAS.signing_field_setter, {
    onEnter() { emit('signature_state_setter_enter'); }
  });
  hook(mod, 'signature_field_write', STATIC_RVAS.signature_field_write, {
    onEnter() { emit('signature_state_write', {field_class:'signature_derived'}); }
  });
  hook(mod, 'request_prepare', STATIC_RVAS.request_prepare, {
    onEnter() { emit('request_build_enter'); },
    onLeave(result) {
      const value = result.toInt32();
      if (value === 0 || value === 1)
        emit('request_build_return', {success:value === 1});
    }
  });
  hook(mod, 'signature_field_read', STATIC_RVAS.signature_field_read, {
    onEnter() { emit('signature_state_read_for_request', {field_class:'signature_derived'}); }
  });
  hook(mod, 'signature_request_object_write', STATIC_RVAS.signature_request_object_write, {
    onEnter() { emit('request_field_write', {field_class:'signature_derived'}); }
  });
  hook(mod, 'request_serializer', STATIC_RVAS.request_serializer, {
    onEnter() { emit('request_json_serializer_enter'); }
  });
  hook(mod, 'response_callback', STATIC_RVAS.response_callback, {
    onEnter(args) {
      try {
        const code = args[1].toInt32();
        emit('api_response_callback_enter', {
          result_kind: code >= 100 && code <= 599 ? 'http_status_range' : 'not_http_status_range',
          result_code_if_http_range:code >= 100 && code <= 599 ? code : null
        });
      } catch (_) { emit('api_response_callback_enter', {result_kind:'unreadable'}); }
    }
  });
  // App-level code and detail code are distinct arguments of Chapignon.
  // Only fixed, bounded classification labels are emitted, never raw params
  // or response content. This is not an HTTP status code monitor.
  hook(mod, 'api_error_handler', STATIC_RVAS.api_error_handler, {
    onEnter(args) {
      try {
        const result = args[1].toInt32();
        const detail = args[2].toInt32();
        emit('app_error_handler_enter', {
          result_class: classifyApiCode(result),
          detail_class: classifyApiCode(detail),
          matches_display_pair_400_9007: result === 400 && detail === 9007
        });
      } catch (_) { emit('app_error_handler_unreadable'); }
    }
  });
  for (const [name, rva] of Object.entries(DYNAMIC_RVAS)) {
    if (name === 'unity_response_code') {
      hook(mod,name,rva,{
        onLeave(rv) {
          try {
            const http = rv.toInt32();
            if (http >= 100 && http <= 599)
              emit('unity_http_response_status', {http_status:http});
            else if (http === 0)
              emit('unity_http_response_pending');
          } catch (_) {}
        }
      });
    } else if (name === 'unity_request_send') {
      hook(mod,name,rva,{
        onEnter() { emit('unity_request_send_enter'); }
      });
    }
  }
  emit('native_probe_ready', {
    architecture:'arm64',
    response_status_hook_declared:Object.prototype.hasOwnProperty.call(DYNAMIC_RVAS,'unity_response_code')
  });
}
emit('native_agent_loaded',{arch:String(Process.arch)});
setup();
if (!registered) {
  const poll = setInterval(function () {
    setup();
    if (registered) clearInterval(poll);
  }, 200);
  setTimeout(function () {
    clearInterval(poll);
    if (!registered) emit('native_il2cpp_unavailable');
  }, 60000);
}
