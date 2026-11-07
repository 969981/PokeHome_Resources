/*
 * HOME 4.1.0 — Frida read-only initialization/API metadata.
 * Attach only to your own authorized test app/session.
 * No request/response bodies, cookies, OAuth tokens, raw URLs, or headers.
 * No API replays, certificate bypass, return-value edits or account actions.
 */
"use strict";
// Frida 17 Python Session.create_script() does NOT bundle Java bridge.
// Bundled by frida-compile in the workflow (see official Frida bridges docs).
import Java from "frida-java-bridge";
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

/*
 * Capture only transport-level existence, timing and coarse byte bands.
 * The x64 emulator translates ARM64 Unity libraries; Java URL/DNS hooks alone
 * produced zero actual events on runs #42374803315 and #42374866803.
 * Never inspect, decode, copy or print socket buffers or sockaddr addresses.
 */
function installNativeSocketTransport() {
  const sockets = new Map();
  const emitted = new Map();
  function bounded(name, info, limit = 24) {
    const old = emitted.get(name) || 0;
    if (old >= limit) return;
    emitted.set(name, old + 1);
    event(name, info);
  }
  function band(n) {
    if (!Number.isFinite(n) || n <= 0) return "zero";
    if (n <= 512) return "1_512";
    if (n <= 4096) return "513_4096";
    return "over_4096";
  }
  const connect = Module.findGlobalExportByName("connect");
  if (connect === null) {
    event("native_connect_hook_unavailable");
    return;
  }
  try {
    Interceptor.attach(connect, {
      onEnter(args) {
        this.validIpFamily = false;
        try {
          if (args[1].isNull()) return;
          const family = args[1].readU16(); // AF_INET=2 / AF_INET6=10
          if (family !== 2 && family !== 10) return;
          const fd = args[0].toInt32();
          if (fd < 0 || fd > 1000000) return;
          this.fd = fd;
          this.family = family === 2 ? "ipv4" : "ipv6";
          this.validIpFamily = true;
          sockets.set(fd, this.family);
          if (sockets.size > 256) sockets.clear();
        } catch (_) {}
      },
      onLeave(rv) {
        if (!this.validIpFamily) return;
        // Result -1 is expected for nonblocking EINPROGRESS as well as
        // failures; classify without inventing connection success.
        let code = 0;
        try { code = rv.toInt32(); } catch (_) { code = -2; }
        bounded("native_socket_connect", {
          family: this.family,
          outcome: code === 0 ? "returned_zero" : "other_return"
        });
      }
    });
    event("native_connect_hook_ready");
  } catch (_) {
    event("native_connect_hook_unavailable");
    return;
  }

  // Treat data transfer as transport evidence, not a parsed API endpoint.
  function hookTransfer(symbol, kind, readFd = true) {
    try {
      const fn = Module.findGlobalExportByName(symbol);
      if (fn === null) return false;
      Interceptor.attach(fn, {
        onEnter(args) {
          this.tracked = false;
          try {
            const fd = args[0].toInt32();
            this.tracked = sockets.has(fd);
          } catch (_) {}
        },
        onLeave(rv) {
          if (!this.tracked) return;
          let length = 0;
          try { length = rv.toInt32(); } catch (_) {}
          if (length > 0) {
            bounded(kind, {size_band: band(length)});
          }
        }
      });
      return true;
    } catch (_) {
      return false;
    }
  }
  let count = 0;
  for (const [name,kind] of [
    ["send","native_socket_send"],
    ["sendto","native_socket_send"],
    ["write","native_socket_send"],
    ["recv","native_socket_receive"],
    ["recvfrom","native_socket_receive"],
    ["read","native_socket_receive"]
  ]) if (hookTransfer(name,kind)) count++;
  event(count > 0 ? "native_socket_io_hooks_ready" :
        "native_socket_io_hooks_unavailable");
}
event("frida_agent_loaded");
installNativeMarkers();
installDns();
installNativeSocketTransport();
installJava();
