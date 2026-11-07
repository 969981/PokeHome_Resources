#!/usr/bin/env python3
"""Frida 17 read-only watcher for one HOME 4.1.0 guest emulator session.

Only sanitized event names, statuses, API categories and timings are saved.
Never record complete HTTP URLs, requests, responses, raw UTID, auth tokens,
cookies, Nintendo credentials, guest keys or private device identifiers.
Spawn-attach installs hooks BEFORE HOME starts, then resumes the normal app.
The IL2CPP ARM64 SetBasic observer is loaded only on native ARM64 targets.
"""
from __future__ import annotations

import json
import time
from collections import Counter
from pathlib import Path

PACKAGE = "jp.pokemon.pokemonhome"
ALLOWED_EVENTS = frozenset({
    "frida_agent_loaded", "java_runtime_unavailable", "java_runtime_ready",
    "java_url_hook_ready", "java_url_hook_unavailable",
    "java_response_hook_ready", "java_response_hook_unavailable",
    "java_http_request_open", "java_http_response_status",
    "dns_hook_ready", "dns_hook_unavailable", "pokemon_dns_query",
    "native_connect_hook_ready", "native_connect_hook_unavailable",
    "native_socket_io_hooks_ready", "native_socket_io_hooks_unavailable",
    "native_socket_connect", "native_socket_send", "native_socket_receive",
    "native_arch_report", "il2cpp_module_seen", "il2cpp_module_unavailable",
    "script_runtime_error", "hook_preflight", "read_only_observer_ready",
    "unsupported_native_arch", "invalid_module_size", "preflight_exception",
    "registration_request_serializer_enter",
    "registration_response_handler_enter",
    "token_response_handler_enter", "login_request_serializer_enter",
    "login_response_handler_enter", "first_basic_utid",
    "basic_utid_not_yet_numeric",
})
CATEGORIES = frozenset({
    "register", "token", "login", "locale", "basic_profile", "other"
})
ARCHES = frozenset({"arm64", "arm", "x64", "ia32", "x86_64"})
SOCKET_FAMILIES = frozenset({"ipv4", "ipv6"})
CONNECT_OUTCOMES = frozenset({"returned_zero", "other_return"})
BYTE_BANDS = frozenset({"zero", "1_512", "513_4096", "over_4096"})
MAX_EVENTS = 180


def sanitize(payload: object) -> dict | None:
    """Allowlist only transport-neutral metadata, never arbitrary fields."""
    if not isinstance(payload, dict):
        return None
    requested = payload.get("event")
    if not isinstance(requested, str) or requested not in ALLOWED_EVENTS:
        return None
    event = payload["event"]
    cleaned = {"event": event}
    elapsed = payload.get("elapsed_ms")
    if isinstance(elapsed, (int, float)) and not isinstance(elapsed, bool) and 0 <= elapsed < 86400000:
        cleaned["elapsed_ms"] = int(elapsed)
    if event in {"java_http_request_open", "java_http_response_status"}:
        category = payload.get("category")
        cleaned["category"] = (
            category if isinstance(category, str) and category in CATEGORIES
            else "other"
        )
        if event == "java_http_response_status":
            code = payload.get("status_code")
            if isinstance(code, int) and not isinstance(code, bool) and 100 <= code <= 599:
                cleaned["http_status"] = code
    if event == "native_socket_connect":
        fam = payload.get("family")
        outcome = payload.get("outcome")
        cleaned["family"] = fam if isinstance(fam, str) and fam in SOCKET_FAMILIES else "unknown"
        cleaned["outcome"] = (outcome if isinstance(outcome, str)
                              and outcome in CONNECT_OUTCOMES else "unknown")
    if event in {"native_socket_send", "native_socket_receive"}:
        size_band = payload.get("size_band")
        cleaned["size_band"] = (size_band if isinstance(size_band, str)
                                and size_band in BYTE_BANDS else "unknown")
    if event == "native_arch_report":
        arch = payload.get("arch")
        cleaned["arch"] = arch if isinstance(arch, str) and arch in ARCHES else "unknown"
        cleaned["arm64_rva_hook_supported"] = payload.get("arm64_rva_hook_supported") is True
    if event == "hook_preflight":
        cleaned["supported_arch"] = payload.get("supported_arch") is True
    if event == "first_basic_utid":
        # The numeric candidate is intentionally *not* saved in GitHub CI:
        # a runtime event confirms the presence of a parsed numeric basic.utid.
        cleaned["observed_common_response_basic_consumer"] = (
            payload.get("observed_common_response_basic_consumer") is True
        )
    return cleaned


class FridaInterfaceMonitor:
    def __init__(self, output: Path, agent_bundle: Path,
                 native_agent: Path | None = None):
        self.output = output
        self.agent_bundle = agent_bundle
        self.native_agent = native_agent
        self.events: list[dict] = []
        self.setup_status = "not_started"
        self.setup_error_type = None
        self.device = None
        self.pid = None
        self.session = None
        self.scripts = []
        self.started_at = time.monotonic()
        self.arch = "unknown"
        self.load_errors = 0

    def on_message(self, message: object, _data=None) -> None:
        if not isinstance(message, dict):
            return
        if message.get("type") == "error":
            self.load_errors += 1
            if len(self.events) < MAX_EVENTS:
                self.events.append({"event": "script_runtime_error"})
            return
        if message.get("type") == "send":
            evt = sanitize(message.get("payload"))
        elif message.get("type") == "log":
            payload = message.get("payload")
            try:
                evt = sanitize(json.loads(payload)) if isinstance(payload, str) and len(payload) <= 8192 else None
            except (TypeError, ValueError):
                evt = None
        else:
            evt = None
        if evt and len(self.events) < MAX_EVENTS:
            self.events.append(evt)
            if evt["event"] == "native_arch_report":
                self.arch = evt.get("arch", "unknown")

    def start(self, frida_module=None) -> bool:
        """Connect to ADB-forwarded disposable frida-server and spawn HOME."""
        self.setup_status = "connecting"
        try:
            if frida_module is None:
                import frida as frida_module
            if not self.agent_bundle.is_file() or self.agent_bundle.stat().st_size < 80:
                raise FileNotFoundError("compiled agent bundle is missing")
            manager = frida_module.get_device_manager()
            self.device = manager.add_remote_device("127.0.0.1:27042")
            self.pid = self.device.spawn([PACKAGE])
            self.session = self.device.attach(self.pid)
            compiled = self.session.create_script(
                self.agent_bundle.read_text(encoding="utf-8"))
            compiled.on("message", self.on_message)
            compiled.load()
            self.scripts.append(compiled)
            if self.native_agent and self.native_agent.is_file():
                # This agent has its own ARM64 architecture gate. On the x64
                # emulator it reports unsupported native architecture and
                # never attaches ARM64 RVA hooks to translated native code.
                native = self.session.create_script(
                    self.native_agent.read_text(encoding="utf-8"))
                native.on("message", self.on_message)
                native.load()
                self.scripts.append(native)
            self.device.resume(self.pid)
            self.setup_status = "spawn_attach_resumed"
            return True
        except Exception as exc:
            self.setup_status = "frida_setup_failed"
            self.setup_error_type = type(exc).__name__
            # Never strand the process in Frida's spawn-suspended state.
            if self.device is not None and self.pid is not None:
                try:
                    self.device.resume(self.pid)
                except Exception:
                    pass
            return False

    def stop(self) -> dict:
        for script in reversed(self.scripts):
            try:
                script.unload()
            except Exception:
                pass
        if self.session is not None:
            try:
                self.session.detach()
            except Exception:
                pass
        self.output.mkdir(parents=True, exist_ok=True)
        counts = Counter(e["event"] for e in self.events)
        report = {
            "status": self.setup_status,
            "error_type": self.setup_error_type,
            "frida_agent_loaded": counts["frida_agent_loaded"] > 0,
            "java_hook_ready": counts["java_url_hook_ready"] > 0,
            "dns_hook_ready": counts["dns_hook_ready"] > 0,
            "il2cpp_module_seen": counts["il2cpp_module_seen"] > 0,
            "observed_arch": self.arch,
            "arm64_native_rva_hooks_usable": self.arch == "arm64",
            "native_socket_hook_ready": counts["native_connect_hook_ready"] > 0,
            "native_socket_io_hooks_ready": counts["native_socket_io_hooks_ready"] > 0,
            "native_transport_event_count": (
                counts["native_socket_connect"] + counts["native_socket_send"]
                + counts["native_socket_receive"]),
            "native_transport_only_metadata": True,
            "api_stage_event_count": sum(
                counts[e] for e in (
                    "java_http_request_open", "java_http_response_status",
                    "pokemon_dns_query", "registration_request_serializer_enter",
                    "registration_response_handler_enter",
                    "token_response_handler_enter", "login_request_serializer_enter",
                    "login_response_handler_enter"
                )
            ),
            "first_basic_utid_event_seen": counts["first_basic_utid"] > 0,
            "first_basic_utid_numeric_value_saved": False,
            "event_counts": dict(sorted(counts.items())),
            "event_count": len(self.events),
            "duration_seconds": round(time.monotonic() - self.started_at, 1),
            "note": "Java/DNS and native socket events are not full HTTP responses. Native socket traffic cannot identify the endpoint or HTTP response body. ARM64 hooks not validated on x64 native-bridge emulator.",
            "raw_http_or_auth_material_saved": False,
            "guest_registration_attempted_by_monitor": False,
        }
        (self.output / "frida_interface_events.jsonl").write_text(
            "".join(json.dumps(e, ensure_ascii=False, sort_keys=True) + "\n"
                    for e in self.events), encoding="utf-8")
        (self.output / "frida_interface_summary.json").write_text(
            json.dumps(report, ensure_ascii=False, indent=2) + "\n",
            encoding="utf-8"
        )
        return report
