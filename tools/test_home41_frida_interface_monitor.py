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
            bundle.write_text("// compiled and validated in workflow")
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
