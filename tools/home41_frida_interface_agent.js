/*
 * HOME 4.1.0 — Frida read-only initialization/API metadata.
 * Attach only to your own authorized test app/session.
 * No request/response bodies, cookies, OAuth tokens, raw URLs, or headers.
 * No API replays, certificate bypass, return-value edits or account actions.
 */
"use strict";
const boot = Date.now();
const MAX_EVENTS = 200;
let events = 0;
let lastApiClass = "other";
function event(name, data) {
  if (events >= MAX_EVENTS) return;
  events++;
  send(Object.assign({event: name, elapsed_ms: Date.now() - boot}, data || {}));
}
function endpointClass(path) {
  const p = String(path || "").toLowerCase();
  if (/register|signup|createuser/.test(p)) return "register";
  if (/token/.test(p)) return "token";
  if (/login|signin|auth/.test(p)) return "login";
  if (/language|region|country|locale|setting/.test(p)) return "locale";
  if (/basic|profile|userdetail/.test(p)) return "basic_profile";
  return "other";
}
function knownProvider(host) {
  const h = String(host || "").toLowerCase();
  // No hostname, raw URL or query string ever leaves this script.
  return /(^|\.)(pokemonhome|pokemon|nintendo)\./.test(h)
      || h.indexOf("pokemon") !== -1;
}
function installJava() {
  if (!Java.available) {
    event("java_runtime_unavailable");
    return;
  }
  Java.perform(function () {
    event("java_runtime_ready");
    try {
      const URL = Java.use("java.net.URL");
      const open = URL.openConnection.overload();
      open.implementation = function () {
        const host = String(this.getHost() || "");
        const category = endpointClass(String(this.getPath() || ""));
        const provider = knownProvider(host);
        if (provider) {
          lastApiClass = category;
          event("java_http_request_open", {category:category});
        }
        return open.call(this);
      };
      event("java_url_hook_ready");
    } catch (_) {
      event("java_url_hook_unavailable");
    }
    try {
      const Conn = Java.use("java.net.HttpURLConnection");
      const codeFn = Conn.getResponseCode.overload();
      codeFn.implementation = function () {
        // Call original exactly once and return its original result.
        const code = codeFn.call(this);
        try {
          const target = this.getURL();
          if (target && knownProvider(String(target.getHost() || ""))) {
            const category = endpointClass(String(target.getPath() || ""));
            event("java_http_response_status", {
              category: category,
              status_code: Number(code)
            });
          }
        } catch (_) {}
        return code;
      };
      event("java_response_hook_ready");
    } catch (_) {
      event("java_response_hook_unavailable");
    }
  });
}
function installDns() {
  try {
    const symbol = Module.findGlobalExportByName("getaddrinfo");
    if (symbol === null) {
      event("dns_hook_unavailable");
      return;
    }
    Interceptor.attach(symbol, {
      onEnter(args) {
        try {
          if (args[0].isNull()) return;
          const name = args[0].readUtf8String(240);
          if (knownProvider(name)) {
            event("pokemon_dns_query");
          }
        } catch (_) {}
      }
    });
    event("dns_hook_ready");
  } catch (_) {
    event("dns_hook_unavailable");
  }
}
function installNativeMarkers() {
  // The existing separate ARM64 observer validates IL2CPP RVAs and reads
  // only the six-digit candidate from SetBasic. Do not attach ARM64 RVAs
  // to an x64 native-bridge process.
  event("native_arch_report", {
    arch: String(Process.arch),
    arm64_rva_hook_supported: Process.arch === "arm64"
  });
  const poll = setInterval(function () {
    try {
      const module = Process.findModuleByName("libil2cpp.so");
      if (module !== null) {
        clearInterval(poll);
        event("il2cpp_module_seen");
      }
    } catch (_) {
      clearInterval(poll);
      event("il2cpp_module_unavailable");
    }
  }, 300);
  setTimeout(function () { clearInterval(poll); }, 60000);
}
event("frida_agent_loaded");
installNativeMarkers();
installDns();
installJava();
