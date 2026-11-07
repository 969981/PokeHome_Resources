/*
 * HOME Android 4.1.0 — read-only earliest basic.utid observer.
 * Verified target APK SHA256: 8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1
 * libil2cpp.so SHA256: 80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe
 *
 * This never sends HTTP, calls signup/delete APIs, changes app memory,
 * or records Nintendo OAuth/session secrets. Only attach to your own test app.
 * HOME's actual visible TID7 from this UTID conversion is NOT YET VERIFIED.
 */
'use strict';

const HOME = {
  packageName: "jp.pokemon.pokemonhome",
  lib: "libil2cpp.so",
  basicSetRva: 0x1D763D0,
  registerSerializeRva: 0x1D334A4,
  registerCallbackRva: 0x1D33294,
  tokenCallbackRva: 0x1D35AD0,
  loginSerializeRva: 0x1D3BE50,
  loginCallbackRva: 0x1D3C020,
  basicUtidField: 0xF0,
  managedStringLength: 0x10,
  managedStringChars: 0x14,
  maxUint32: 4294967295
};

const targetTid7 = "888888";  // Change locally if needed, NOT a server request parameter.
let setupDone = false;
let initialMs = Date.now();
let registerSerializeSeen = false;
let registerCallbackSeen = false;
let tokenCallbackSeen = false;
let loginRequestSeen = false;
let loginCallbackSeen = false;
let firstValueFound = false;

function report(event, fields = {}) {
  console.log(JSON.stringify({
    event, elapsed_ms: Date.now() - initialMs, ...fields
  }));
}

function tryReadIl2CppString(ptr) {
  if (ptr.isNull()) return {kind:"absent"};
  // Layout on 64-bit IL2CPP:
  // object header: 0x00..0x0F, length: +0x10, UTF16 chars: +0x14.
  // Prevent potentially private or oversized arbitrary strings being logged.
  const len = ptr.add(HOME.managedStringLength).readU32();
  if (len < 1 || len > 10) return {kind:"non_numeric_or_invalid_length"};
  const value = ptr.add(HOME.managedStringChars).readUtf16String(len);
  if (!/^[0-9]{1,10}$/.test(value)) return {kind:"non_numeric"};
  const num = Number(value);
  if (!Number.isSafeInteger(num) || num < 0 || num > HOME.maxUint32) {
    return {kind:"out_of_uint32"};
  }
  return {kind:"numeric_uint32", number:num};
}

function installHooks(module) {
  if (setupDone) return;
  setupDone = true;
  const addr = rva => module.base.add(rva);
  report("hook_preflight", {
    arch:Process.arch,
    supported_arch:Process.arch === "arm64",
    target_rva:"0x" + HOME.basicSetRva.toString(16),
    module_size:module.size
  });
  if (Process.arch !== "arm64") {
    report("unsupported_native_arch", {
      reason:"ARM64 addresses have not been verified on an x86_64 native-bridge emulator"
    });
    return;
  }
  if (HOME.basicSetRva >= module.size) {
    report("invalid_module_size", {reason:"RVA outside libil2cpp.so"});
    return;
  }

  // Stage markers only. These callbacks do not expose session or auth data.
  Interceptor.attach(addr(HOME.registerSerializeRva), {
    onEnter() {
      registerSerializeSeen = true;
      report("registration_request_serializer_enter");
    }
  });
  Interceptor.attach(addr(HOME.registerCallbackRva), {
    onEnter() {
      registerCallbackSeen = true;
      report("registration_response_handler_enter");
    }
  });

  // These are entry markers only, not evidence of HTTP 200 or completion.
  // Exact function names discovered from the 4.1.0 IL2CppDumper 180,628-method index.
  Interceptor.attach(addr(HOME.tokenCallbackRva), {
    onEnter() {
      tokenCallbackSeen = true;
      report("token_response_handler_enter");
    }
  });
  Interceptor.attach(addr(HOME.loginSerializeRva), {
    onEnter() {
      loginRequestSeen = true;
      report("login_request_serializer_enter");
    }
  });
  Interceptor.attach(addr(HOME.loginCallbackRva), {
    onEnter() {
      loginCallbackSeen = true;
      report("login_response_handler_enter");
    }
  });

  let hook = Interceptor.attach(addr(HOME.basicSetRva), {
    onEnter(args) {
      if (firstValueFound) return;
      if (args[0].isNull()) return;
      try {
        const utidObject = args[0].add(HOME.basicUtidField).readPointer();
        const parsed = tryReadIl2CppString(utidObject);
        if (parsed.kind !== "numeric_uint32") {
          report("basic_utid_not_yet_numeric", {reason: parsed.kind});
          return;
        }
        const candidate = String(parsed.number % 1000000).padStart(6, "0");
        // The 4.1.0 AArch64 static BL at 0x1D2BA64 returns to 0x1D2BA68.
        // The return address establishes the consumer callsite, not the exact
        // server endpoint that produced this response.
        const lr = this.context.lr;
        const commonBasicReturn = addr(0x1D2BA68);
        const callerRelative = lr.sub(module.base);
        firstValueFound = true;
        report("first_basic_utid", {
          caller_rva: callerRelative.toString(),
          observed_common_response_basic_consumer: lr.equals(commonBasicReturn),
          six_digit_candidate: candidate,
          matches_target: candidate === targetTid7,
          target_tid7: targetTid7,
          registration_serializer_seen: registerSerializeSeen,
          registration_callback_seen: registerCallbackSeen,
          token_callback_seen: tokenCallbackSeen,
          login_request_seen: loginRequestSeen,
          login_callback_seen: loginCallbackSeen,
          semantic_status: "UTID_TO_HOME_TRAINER_ID_NOT_RUNTIME_VERIFIED"
        });
        // Detach only the observer after first ID. Never interfere with HOME.
        hook.detach();
      } catch(e) {
        report("basic_read_failed", {error_type:String(e.name||"memory_read")});
      }
    }
  });
  report("read_only_observer_ready");
}

// In Frida 17's ARM64 emulated realm we may attach *after* Unity has
// loaded libil2cpp.so. Install immediately in that case: relying only on
// setInterval() can leave scripts loaded without ever reporting hook ready.
// Retain polling for original spawn-attach before Unity loads.
function tryInstallNow() {
  try {
    const module = Process.findModuleByName(HOME.lib);
    if (!module) return false;
    installHooks(module);
    return true;
  } catch (e) {
    report("preflight_exception", {error_type:String(e.name || "unknown")});
    return true; // Do not retry potentially partially installed hooks.
  }
}
if (!tryInstallNow()) {
  const poll = setInterval(function () {
    if (tryInstallNow()) clearInterval(poll);
  }, 250);
}
