/*
 * HOME Android 4.1.0 — read-only earliest basic.utid observer.
 * Verified target APK SHA256: 8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1
 * libil2cpp.so SHA256: 80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe
 *
 * This never sends HTTP or calls signup/delete APIs. The optional one-shot
 * birth-year experiment rewrites only a local Unity UI callback index,
 * when explicitly armed from a verified, non-submitting test page.
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
  // 4.1.0 IL2CPP ScriptMethod metadata, not offset guesses:
  // FirstBootViewInputBirthData.OnYearChageValue(int index)
  birthdateSetDataRva: 0x1C80964,
  birthdateYearChangeRva: 0x1C80EF8,
  birthdateMonthChangeRva: 0x1C814C0,
  birthdateDayChangeRva: 0x1C8181C,
  // Custom.UI.CustomTMPDropdownScrollList.Open(int value)
  dropdownScrollOpenRva: 0x1F14C90,
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
let year1999OptionsChecked = false;
let localYear1999Armed = false;
let localYear1999ArmedAt = 0;
let localYear1999Redirected = false;
let localYear1999Expired = false;

// Disabled by default: only a host RPC after verified screenshot can arm.
// One local Unity callback from a verified visible 2018 row (index 8)
// may be mapped to index 27 (1999). No HTTP/registration behavior is changed.
rpc.exports = {
  armlocalyear1999() {
    if (Process.arch !== "arm64" || !setupDone ||
        !year1999OptionsChecked || localYear1999Armed ||
        localYear1999Redirected || localYear1999Expired)
      return "local_year1999_arm_rejected";
    localYear1999Armed = true;
    localYear1999ArmedAt = Date.now();
    report("local_year1999_arm_accepted");
    return "local_year1999_arm_accepted";
  }
};

function report(event, fields = {}) {
  // Frida's emulated ARM64 agent can deliver explicit send() messages
  // even when console.log() messages are not forwarded to the native
  // Python session. Raw fields stay in process/host memory: consumers
  // strictly whitelist and discard tokens and numeric UTID from CI.
  send({event, elapsed_ms: Date.now() - initialMs, ...fields});
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
  // Static field layout from FirstBootViewInputBirthData (4.1.0):
  // yearOptionDataList at +0x40, List<T>._items +0x10, _size +0x18.
  // OptionData.m_Text at +0x10. Read ONLY short public year labels,
  // then emit the target's INDEX, NEVER any pointer, UI text or DOB.
  // No invocation of setters, callbacks or app methods occurs here.
  try {
    Interceptor.attach(addr(HOME.birthdateSetDataRva), {
      onEnter(args) {
        this.view = args[0];
      },
      onLeave() {
        if (!this.view || this.view.isNull()) return;
        try {
          const list = this.view.add(0x40).readPointer();
          if (list.isNull()) return;
          const count = list.add(0x18).readS32();
          if (count < 100 || count > 140) {
            report("year_options_layout_not_verified");
            return;
          }
          const items = list.add(0x10).readPointer();
          if (items.isNull()) return;
          const years = [];
          const size = Process.pointerSize;
          for (let i = 0; i < count; i++) {
            const option = items.add(0x20 + i*size).readPointer();
            if (option.isNull()) continue;
            const txt = option.add(0x10).readPointer();
            if (txt.isNull()) continue;
            const len = txt.add(0x10).readU32();
            if (len < 4 || len > 12) continue;
            const raw = txt.add(0x14).readUtf16String(len);
            const match = raw.match(/^([12][0-9]{3})[^0-9]*$/);
            if (!match) continue;
            const year = Number(match[1]);
            if (year >= 1900 && year <= 2100) years.push([i,year]);
          }
          if (years.length < count - 2) {
            report("year_options_layout_not_verified");
            return;
          }
          const consecutive = years.every((entry,i) =>
            i === 0 || years[i-1][1] - entry[1] === 1);
          const matched = years.filter(entry => entry[1] === 1999);
          if (!consecutive || matched.length !== 1) {
            report("year_options_layout_not_verified");
            return;
          }
          // Exact calibration: 2026..1900, with 1999 at index 27.
          // Arm is refused unless runtime options match this full range.
          year1999OptionsChecked = (
              count === 127 && matched[0][0] === 27 &&
              years[0][1] === 2026 &&
              years[years.length-1][1] === 1900);
          report("year_1999_option_index_verified", {
            selected_index: matched[0][0],
            total_options: count,
            first_year: years[0][1],
            last_year: years[years.length-1][1],
            descending_sequential: true
          });
        } catch (_) {
          report("year_options_layout_not_verified");
        }
      }
    });
    report("year_options_inspector_hook_installed");
  } catch (_) {
    report("year_options_inspector_hook_unavailable");
  }

  // Trace Unity's own date-picker events, not network responses.
  // Verify callback indices against matching HOME screenshots before
  // inferring which index means 1999. No setter, callback invocation,
  // input rewriting or DOB submission is used here.
  const dateCallbacks = [
    ["birthdate_year_change_index", HOME.birthdateYearChangeRva, 127],
    ["birthdate_month_change_index", HOME.birthdateMonthChangeRva, 13],
    ["birthdate_day_change_index", HOME.birthdateDayChangeRva, 32],
    ["dropdown_scroll_open_index", HOME.dropdownScrollOpenRva, 127]
  ];
  const observed = Object.create(null);
  for (const [name, rva, limit] of dateCallbacks) {
    if (rva >= module.size) {
      report("date_hook_rva_outside_module");
      continue;
    }
    observed[name] = 0;
    try {
      Interceptor.attach(addr(rva), {
        onEnter(args) {
          this.yearRedirected = false;
          if (observed[name] >= 8) return;
          observed[name]++;
          let index;
          try { index = args[1].toInt32(); } catch (_) { index = -999; }
          if (name === "birthdate_year_change_index" &&
              localYear1999Armed && !localYear1999Redirected) {
            // This hook is invoked on Unity's UI event thread after an
            // actual user tap. Do not invoke a managed method or call
            // from an arbitrary Frida RPC thread.
            localYear1999Armed = false;
            localYear1999Expired = true;
            if (index === 8 && year1999OptionsChecked &&
                Date.now() - localYear1999ArmedAt <= 20000 &&
                !args[0].isNull()) {
              args[1] = ptr(27);
              index = 27;
              localYear1999Redirected = true;
              this.yearRedirected = true;
              this.view = args[0];
              report("local_year1999_callback_redirected", {
                from_index: 8, to_index: 27
              });
            } else {
              report("local_year1999_callback_refused");
            }
          }
          if (index >= 0 && index < limit)
            report(name, {selected_index: index});
          else
            report(name, {index_range_valid: false});
        },
        onLeave() {
          if (name !== "birthdate_year_change_index" ||
              !this.yearRedirected || !this.view) return;
          // The field is the documented FirstBootViewInputBirthData
          // inputedYear integer at +0x58; do not read nearby PII.
          try {
            const value = this.view.add(0x58).readS32();
            report("local_year1999_model_readback", {
              year_is_1999: value === 1999
            });
          } catch (_) {
            report("local_year1999_model_readback_unavailable");
          }
        }
      });
      report("date_hook_installed", {hook_kind: name});
    } catch (e) {
      report("date_hook_install_failed", {hook_kind: name});
    }
  }
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
