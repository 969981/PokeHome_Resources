import json
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from home41_frida_interface_monitor import (
    sanitize, FridaInterfaceMonitor, MAX_EVENTS
)


class FakeScript:
    def __init__(self):
        self.cb=None
        self.loaded=False
        self.unloaded=False
    def on(self,event,callback):
        if event == "message":
            self.cb=callback
    def load(self):
        self.loaded=True
        self.cb({"type":"send","payload":{
            "event":"frida_agent_loaded","elapsed_ms":3,
            "cookie":"should_never_persist"}})
    def unload(self):
        self.unloaded=True


class FakeSession:
    def __init__(self):
        self.scripts=[]
        self.detached=False
    def create_script(self,data):
        s=FakeScript()
        self.scripts.append(s)
        return s
    def detach(self):
        self.detached=True


class FakeDevice:
    def __init__(self):
        self.session=FakeSession()
        self.spawned=None
        self.resumed=False
    def spawn(self,items):
        self.spawned=items
        return 4567
    def attach(self,pid):
        assert pid == 4567
        return self.session
    def resume(self,pid):
        assert pid == 4567
        self.resumed=True


class FakeManager:
    def __init__(self):
        self.device=FakeDevice()
        self.target=None
    def add_remote_device(self,addr):
        self.target=addr
        return self.device


class FakeFrida:
    def __init__(self):
        self.manager=FakeManager()
    def get_device_manager(self):
        return self.manager


class MonitorTests(unittest.TestCase):
    def test_whitelist_discards_secrets_and_body(self):
        ev=sanitize({"event":"java_http_response_status","category":"login",
                     "status_code":200,"authorization":"Bearer SECRET",
                     "response_body":"utid=987654","url":"https://secret/?token=1",
                     "elapsed_ms":27})
        self.assertEqual(ev,{"event":"java_http_response_status",
                             "category":"login","http_status":200,"elapsed_ms":27})
        self.assertNotIn("SECRET",json.dumps(ev))
        self.assertNotIn("987654",json.dumps(ev))
        self.assertIsNone(sanitize({"event":"arbitrary_raw_http","body":"secret"}))
        self.assertIsNone(sanitize({"event":["unsafe"]}))
        self.assertEqual(sanitize({"event":"java_http_request_open",
                                   "category":["bad"]})["category"],"other")
        self.assertEqual(sanitize({"event":"native_arch_report","arch":["unsafe"]})["arch"],
                         "unknown")

    def test_real_ui_year_index_mapping_requires_both_observations(self):
        with tempfile.TemporaryDirectory() as d:
            dest=Path(d)
            monitor=FridaInterfaceMonitor(dest,dest/"bundle.js")
            monitor.on_message({"type":"send","payload":{
                "event":"year_1999_option_index_verified",
                "selected_index":27,"total_options":127,
                "first_year":2026,"last_year":1900,
                "descending_sequential":True}})
            first=monitor.stop()
            self.assertTrue(first["year_1999_option_index_observed"])
            self.assertFalse(first["known_2018_index_expected_8_observed"])
        with tempfile.TemporaryDirectory() as d:
            dest=Path(d)
            monitor=FridaInterfaceMonitor(dest,dest/"bundle.js")
            monitor.on_message({"type":"send","payload":{
                "event":"year_1999_option_index_verified",
                "selected_index":27,"total_options":127,
                "first_year":2026,"last_year":1900,
                "descending_sequential":True}})
            monitor.on_message({"type":"send","payload":{
                "event":"birthdate_year_change_index","selected_index":8}})
            summary=monitor.stop()
            self.assertEqual(summary["known_2018_ui_calibration_index"],8)
            self.assertTrue(summary["known_2018_index_expected_8_observed"])
            self.assertTrue(summary["year_mapping_requires_ui_screenshot_review"])
            self.assertFalse(summary["first_basic_utid_event_seen"])
            self.assertFalse(summary["guest_registration_attempted_by_monitor"])

    def test_native_transport_metadata_only_no_ip_or_payload(self):
        fields = {
            "event":"native_socket_connect", "family":"ipv4",
            "outcome":"returned_zero", "host":"private.login.example",
            "ip":"203.0.113.42", "port":443,
            "payload":"Authorization: Bearer PRIVATE",
            "elapsed_ms":88
        }
        cleaned=sanitize(fields)
        self.assertEqual(cleaned,{
            "event":"native_socket_connect","family":"ipv4",
            "outcome":"returned_zero","elapsed_ms":88
        })
        self.assertNotIn("PRIVATE",json.dumps(cleaned))
        self.assertNotIn("203.0.113.42",json.dumps(cleaned))
        for kind in ("native_socket_send", "native_socket_receive"):
            item=sanitize({"event":kind,"size_band":"513_4096",
                            "bytes":"secret", "buffer":"raw"})
            self.assertEqual(item,{"event":kind,"size_band":"513_4096"})
        self.assertEqual(sanitize({"event":"native_socket_send",
            "size_band":["unsafe"]})["size_band"],"unknown")
        self.assertEqual(sanitize({"event":"native_socket_connect",
            "family":{"bad":True}})["family"],"unknown")

    def test_transport_counts_not_falsely_called_api_responses(self):
        with tempfile.TemporaryDirectory() as d:
            monitor=FridaInterfaceMonitor(Path(d),Path(d)/"noop")
            for name in ("native_connect_hook_ready",
                         "native_socket_io_hooks_ready",
                         "native_socket_connect",
                         "native_socket_send","native_socket_receive"):
                monitor.on_message({"type":"send","payload":{"event":name}})
            s=monitor.stop()
            self.assertEqual(s["native_transport_event_count"],3)
            self.assertEqual(s["api_stage_event_count"],0)
            self.assertTrue(s["native_socket_hook_ready"])
            self.assertTrue(s["native_socket_io_hooks_ready"])
            self.assertFalse(s["first_basic_utid_event_seen"])
            self.assertTrue(s["native_transport_only_metadata"])

    def test_native_birthdate_indices_are_minimal_and_bounded(self):
        valid=(
            ("birthdate_year_change_index",8),
            ("birthdate_month_change_index",3),
            ("birthdate_day_change_index",4),
            ("dropdown_scroll_open_index",0),
        )
        for name,index in valid:
            clean=sanitize({
                "event":name,"selected_index":index,
                "raw_date":"1999-04-05","authorization":"PRIVATE",
                "il2cpp_object_address":"0xDeadBeef"})
            self.assertEqual(clean,{"event":name,"selected_index":index})
        for name in ("birthdate_year_change_index",
                     "birthdate_month_change_index",
                     "birthdate_day_change_index"):
            for invalid in (-1,999,True,"27",{"bad":"yes"}):
                evt=sanitize({"event":name,"selected_index":invalid})
                self.assertEqual(evt,{"event":name,"index_range_valid":False})
        hook=sanitize({"event":"date_hook_installed",
                      "hook_kind":"birthdate_year_change_index",
                      "path":"/private/home/libil2cpp.so"})
        self.assertEqual(hook,{"event":"date_hook_installed",
                      "hook_kind":"birthdate_year_change_index"})
        self.assertEqual(sanitize({"event":"date_hook_install_failed",
                        "hook_kind":["unsafe"]})["hook_kind"],"unknown")

    def test_birthdate_ui_callbacks_are_not_api_or_utid(self):
        with tempfile.TemporaryDirectory() as d:
            monitor=FridaInterfaceMonitor(Path(d),Path(d)/"fixture.js")
            for event in (
                "date_hook_installed","date_hook_installed",
                "birthdate_year_change_index","birthdate_month_change_index",
                "birthdate_day_change_index","dropdown_scroll_open_index"):
                monitor.on_message({"type":"send","payload":{"event":event,
                    "hook_kind":"birthdate_year_change_index",
                    "selected_index":8,"basic_utid":"PRIVATE_123456"}})
            summary=monitor.stop()
            self.assertEqual(summary["birthdate_ui_hook_install_count"],2)
            self.assertEqual(summary["birthdate_ui_callback_event_count"],4)
            self.assertEqual(summary["api_stage_event_count"],0)
            self.assertFalse(summary["first_basic_utid_event_seen"])
            output=(Path(d)/"frida_interface_events.jsonl").read_text()
            self.assertNotIn("PRIVATE",output)

    def test_year_1999_index_must_be_native_verified_ordered_options(self):
        candidate={
            "event":"year_1999_option_index_verified",
            "selected_index":27,"total_options":127,
            "first_year":2026,"last_year":1900,
            "descending_sequential":True,
            "memory_address":"0xprivate","token":"NO_COPY",
            "raw_birthdate":"1999-04-05"
        }
        clean=sanitize(candidate)
        self.assertEqual(clean,{
            "event":"year_1999_option_index_verified",
            "selected_index":27,"total_options":127,
            "first_year":2026,"last_year":1900,
            "descending_sequential":True
        })
        self.assertNotIn("NO_COPY",json.dumps(clean))
        self.assertNotIn("0xprivate",json.dumps(clean))
        self.assertEqual(sanitize({"event":"year_options_inspector_hook_installed"}),
                         {"event":"year_options_inspector_hook_installed"})
        for modify in (
            {"selected_index":200},
            {"selected_index":"27"},
            {"total_options":999},
            {"descending_sequential":False},
            {"first_year":1800},
            {"last_year":2050}
        ):
            item=dict(candidate);item.update(modify)
            self.assertIsNone(sanitize(item))

    def test_verified_option_index_not_an_actual_birthdate_submission(self):
        with tempfile.TemporaryDirectory() as d:
            monitor=FridaInterfaceMonitor(Path(d),Path(d)/"fixture")
            monitor.on_message({"type":"send","payload":{
                "event":"year_options_inspector_hook_installed"
            }})
            monitor.on_message({"type":"send","payload":{
                "event":"year_1999_option_index_verified",
                "selected_index":27,"total_options":127,
                "first_year":2026,"last_year":1900,
                "descending_sequential":True,
            }})
            report=monitor.stop()
            self.assertTrue(report["year_options_hook_installed"])
            self.assertTrue(report["year_1999_option_index_observed"])
            self.assertEqual(report["year_1999_option_index"],27)
            self.assertFalse(report["first_basic_utid_event_seen"])
            self.assertEqual(report["birthdate_ui_callback_event_count"],0)
            self.assertEqual(report["api_stage_event_count"],0)
            self.assertTrue(report["guest_registration_attempted_by_monitor"] is False)

    def test_first_utid_event_without_persisting_numeric_value(self):
        event=sanitize({"event":"first_basic_utid",
                        "six_digit_candidate":"123456",
                        "raw_utid":"4012345678",
                        "observed_common_response_basic_consumer":True})
        self.assertEqual(event,{"event":"first_basic_utid",
             "observed_common_response_basic_consumer":True})
        self.assertNotIn("123456",json.dumps(event))
        self.assertNotIn("4012345678",json.dumps(event))

    def test_spawns_before_normal_app_and_saves_safe_timeline(self):
        fake=FakeFrida()
        with tempfile.TemporaryDirectory() as d:
            out=Path(d)
            bundle=out/"agent.js"
            bundle.write_text("// fake compiled test bundle\n" + ("/* safe fixture */" * 8))
            observer=FridaInterfaceMonitor(out,bundle)
            self.assertTrue(observer.start(fake))
            self.assertEqual(fake.manager.target,"127.0.0.1:27042")
            self.assertEqual(fake.manager.device.spawned,["jp.pokemon.pokemonhome"])
            self.assertTrue(fake.manager.device.resumed)
            observer.on_message({"type":"send","payload":{
                "event":"java_http_request_open","category":"locale","cookie":"SECRET"
            }})
            observer.on_message({"type":"send","payload":{
                "event":"pokemon_dns_query","hostname":"private.pokemon.example"
            }})
            observer.on_message({"type":"error","description":"Bearer OTHER-SECRET"})
            report=observer.stop()
            self.assertEqual(report["status"],"spawn_attach_resumed")
            self.assertTrue(report["frida_agent_loaded"])
            self.assertEqual(report["api_stage_event_count"],2)
            self.assertEqual(report["event_count"],4)
            self.assertTrue(fake.manager.device.session.detached)
            persisted=(out/"frida_interface_events.jsonl").read_text()
            self.assertNotIn("SECRET",persisted)
            self.assertNotIn("private.pokemon",persisted)
            self.assertIn("pokemon_dns_query",persisted)
            self.assertTrue((out/"frida_interface_summary.json").exists())

    def test_emulated_arm64_realm_metadata_without_values(self):
        class EmulatedScript(FakeScript):
            def load(self):
                self.loaded=True
                self.cb({"type":"send","payload":{
                    "event":"emulated_realm_probe","arch":"arm64",
                    "il2cpp_visible":True,"basic_rva_in_bounds":True,
                    "rva":"0x1D763D0","token":"PRIVATE_TOKEN"}})
        class EmulatedSession(FakeSession):
            def create_script(self, data):
                s=EmulatedScript()
                self.scripts.append(s)
                return s
        class DeviceWithEmulation(FakeDevice):
            def attach(self,pid, realm="native"):
                if realm=="emulated":
                    return EmulatedSession()
                return super().attach(pid)
        fake=FakeFrida()
        fake.manager.device=DeviceWithEmulation()
        with tempfile.TemporaryDirectory() as d:
            out=Path(d)
            bundle=out/"native.js"
            bundle.write_text("/* safe native bundle */"*8)
            emulated=out/"realm.js"
            emulated.write_text('send({event:"emulated_realm_probe"});')
            monitor=FridaInterfaceMonitor(out,bundle)
            self.assertTrue(monitor.start(fake))
            status=monitor.probe_emulated_realm(emulated)
            self.assertEqual(status,"emulated_arm64_visible_no_native_observer")
            result=monitor.stop()
            self.assertTrue(result["emulated_il2cpp_visible"])
            self.assertTrue(result["emulated_basic_rva_in_bounds"])
            self.assertEqual(result["emulated_arch"],"arm64")
            serialized=(out/"frida_interface_events.jsonl").read_text()
            self.assertNotIn("PRIVATE_TOKEN",serialized)
            self.assertNotIn("0x1D763D0",serialized)
            self.assertFalse(result["first_basic_utid_event_seen"])

    def test_emulated_arm64_hook_waits_for_actual_ready_event(self):
        class EmulatedScript(FakeScript):
            def __init__(self, label):
                super().__init__()
                self.label=label
            def load(self):
                self.loaded=True
                if self.label=="probe":
                    self.cb({"type":"send","payload":{
                        "event":"emulated_realm_probe","arch":"arm64",
                        "il2cpp_visible":True,"basic_rva_in_bounds":True}})
                elif self.label=="native":
                    self.cb({"type":"send","payload":{
                        "event":"hook_preflight","supported_arch":True}})
                    self.cb({"type":"send","payload":{
                        "event":"read_only_observer_ready"}})
        class EmulatedSession(FakeSession):
            def create_script(self, source):
                kind="native" if "ARM64_HOOK_TEST" in source else "probe"
                script=EmulatedScript(kind)
                self.scripts.append(script)
                return script
        class EmulatedDevice(FakeDevice):
            def attach(self,pid,realm="native"):
                if realm=="emulated":
                    return EmulatedSession()
                return super().attach(pid)
        fake=FakeFrida()
        fake.manager.device=EmulatedDevice()
        with tempfile.TemporaryDirectory() as d:
            dest=Path(d)
            bundle=dest/"bundle.js"
            bundle.write_text("/* compiled test bundle */"*8)
            probe=dest/"probe.js"
            probe.write_text("send({event:'emulated_realm_probe'});")
            native=dest/"native.js"
            native.write_text("// ARM64_HOOK_TEST")
            monitor=FridaInterfaceMonitor(dest,bundle,native)
            self.assertTrue(monitor.start(fake))
            self.assertEqual(
                monitor.probe_emulated_realm(probe),
                "emulated_arm64_readonly_observer_loaded")
            report=monitor.stop()
            self.assertTrue(report["arm64_observer_ready"])
            self.assertTrue(report["arm64_hook_preflight_seen"])
            self.assertFalse(report["first_basic_utid_event_seen"])

    def test_emulated_arm64_unready_script_is_not_reported_ready(self):
        class NoReadyScript(FakeScript):
            def load(self):
                self.loaded=True
                if not getattr(self,"is_native",False):
                    self.cb({"type":"send","payload":{
                        "event":"emulated_realm_probe","arch":"arm64",
                        "il2cpp_visible":True,"basic_rva_in_bounds":True}})
        class EmulatedSession(FakeSession):
            def create_script(self, source):
                s=NoReadyScript()
                s.is_native="ARM64_HOOK_TEST" in source
                self.scripts.append(s)
                return s
        class Device(FakeDevice):
            def attach(self,pid,realm="native"):
                return EmulatedSession() if realm=="emulated" else super().attach(pid)
        fake=FakeFrida()
        fake.manager.device=Device()
        with tempfile.TemporaryDirectory() as d:
            dest=Path(d)
            bundle=dest/"bundle.js"
            bundle.write_text("/* compiled test bundle */"*8)
            probe=dest/"probe.js"
            probe.write_text("send({event:'emulated_realm_probe'});")
            native=dest/"native.js"
            native.write_text("// ARM64_HOOK_TEST")
            monitor=FridaInterfaceMonitor(dest,bundle,native)
            self.assertTrue(monitor.start(fake))
            monitor.arm64_hook_ready_seen.wait=lambda timeout: False
            self.assertEqual(
                monitor.probe_emulated_realm(probe),
                "emulated_arm64_hook_readiness_unverified")
            summary=monitor.stop()
            self.assertFalse(summary["arm64_observer_ready"])
            self.assertFalse(summary["first_basic_utid_event_seen"])

    def test_missing_emulated_realm_is_explicit_not_fake_success(self):
        fake=FakeFrida()
        with tempfile.TemporaryDirectory() as d:
            out=Path(d)
            bundle=out/"native.js"
            bundle.write_text("/* safe native bundle */"*8)
            probe=out/"probe.js"
            probe.write_text("send({event:'emulated_realm_probe'});")
            monitor=FridaInterfaceMonitor(out,bundle)
            self.assertTrue(monitor.start(fake))
            self.assertEqual(
                monitor.probe_emulated_realm(probe),
                "emulated_attach_or_load_failed")
            report=monitor.stop()
            self.assertEqual(report["emulated_realm_error_type"],"TypeError")
            self.assertFalse(report["emulated_il2cpp_visible"])
            self.assertFalse(report["first_basic_utid_event_seen"])

    def test_missing_bundle_is_safe_failure(self):
        with tempfile.TemporaryDirectory() as d:
            fake=FakeFrida()
            monitor=FridaInterfaceMonitor(Path(d),Path(d)/"none")
            self.assertFalse(monitor.start(fake))
            result=monitor.stop()
            self.assertEqual(result["status"],"frida_setup_failed")
            self.assertEqual(result["error_type"],"FileNotFoundError")
            self.assertEqual(result["api_stage_event_count"],0)
            self.assertFalse(result["first_basic_utid_event_seen"])


if __name__=="__main__":
    unittest.main()
