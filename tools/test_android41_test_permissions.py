import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from android41_test_permissions import configure_emulator_camera_permission,predeny_emulator_location,CAMERA,LOCATIONS

class FakeAdb:
    def __init__(self,declared=True,grant_success=True):
        self.declared=declared
        self.grant_success=grant_success
        self.calls=[]
        self.granted=False
    def __call__(self,*args,secs=45,**kwargs):
        self.calls.append(args)
        if args[1:3]==("dumpsys","package"):
            if not self.declared:
                return SimpleNamespace(returncode=0,stdout="Package [HOME]")
            return SimpleNamespace(returncode=0,stdout=f"{CAMERA}: granted={'true' if self.granted else 'false'}, flags=[]")
        if args[1:3]==("pm","grant"):
            if self.grant_success:self.granted=True
            return SimpleNamespace(returncode=0 if self.grant_success else 1,stdout="")
        if args[1:4]==("cmd","appops","set"):
            return SimpleNamespace(returncode=0,stdout="")
        return SimpleNamespace(returncode=1,stdout="")

class FakeLocationAdb:
    def __init__(self):
        self.calls=[]
        self.fixed=set()
    def __call__(self,*args,secs=30,**kwargs):
        self.calls.append(args)
        if args[1:3]==("dumpsys","package"):
            lines=[]
            for p in LOCATIONS:
                flags="USER_SET|USER_FIXED" if p in self.fixed else ""
                lines.append(f"{p}: granted=false, flags=[{flags}]")
            return SimpleNamespace(returncode=0,stdout="\n".join(lines))
        if args[1:3]==("pm","set-permission-flags"):
            self.fixed.add(args[3])
            return SimpleNamespace(returncode=0,stdout="")
        return SimpleNamespace(returncode=0,stdout="")

class PermissionTests(unittest.TestCase):
    def test_only_camera_is_pregranted(self):
        fake=FakeAdb()
        r=configure_emulator_camera_permission(fake,"jp.pokemon.pokemonhome")
        self.assertEqual(r["status"],"verified_granted")
        self.assertTrue(r["verified_granted"])
        self.assertTrue(r["appop_command_ok"])
        self.assertEqual(len([x for x in fake.calls if "grant" in x]),1)
        self.assertFalse(r["other_permissions_modified"])
    def test_missing_permission_is_not_granted(self):
        fake=FakeAdb(declared=False)
        r=configure_emulator_camera_permission(fake,"jp.pokemon.pokemonhome")
        self.assertEqual(r["status"],"not_declared")
        self.assertEqual(len(fake.calls),1)

    def test_location_is_denied_and_fixed_without_grant(self):
        fake=FakeLocationAdb()
        r=predeny_emulator_location(fake,"jp.pokemon.pokemonhome")
        self.assertEqual(r["status"],"verified_denied_fixed")
        self.assertFalse(r["location_access_granted"])
        self.assertTrue(all(x["status"]=="verified_denied_fixed"
            for x in r["details"].values()))
        self.assertFalse(any(args[1:3]==("pm","grant") for args in fake.calls))
        self.assertTrue(all(args[-1]=="ignore" for args in fake.calls
            if args[1:4]==("cmd","appops","set")))

    def test_error_explicit(self):
        fake=FakeAdb(grant_success=False)
        r=configure_emulator_camera_permission(fake,"jp.pokemon.pokemonhome")
        self.assertEqual(r["status"],"grant_failed")
        self.assertFalse(r["verified_granted"])
if __name__=="__main__":
    unittest.main()
