#!/usr/bin/env python3
"""Install matching Frida 17.26.1 server on disposable rooted Android CI AVD.

Uses official frida/frida GitHub release, checks asset's published SHA256
digest before deploying, and binds server to emulator loopback. Does not
change the installed app, certificates, HTTP, DNS, or authentication.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import lzma
import socket
import time
import subprocess
import tempfile
from pathlib import Path
from urllib.request import Request, urlopen

VERSION = "17.26.1"
SERVER = "frida-server-" + VERSION + "-android-x86_64.xz"


def cmd(*args, secs=30):
    return subprocess.run(args, capture_output=True, text=True, timeout=secs)


def install() -> dict:
    report = {"status": "not_started", "frida_version": VERSION,
              "server_cpu": "x86_64", "checksum_verified": False,
              "adb_root_confirmed": False, "frida_server_started": False,
              "adb_forward_started": False}
    try:
        api = "https://api.github.com/repos/frida/frida/releases/tags/" + VERSION
        req = Request(api, headers={"User-Agent":"home41-frida-readonly-ci",
                                    "Accept":"application/vnd.github+json"})
        with urlopen(req, timeout=45) as response:
            release = json.load(response)
        matching = [a for a in release.get("assets", [])
                    if a.get("name") == SERVER]
        if len(matching) != 1:
            report["status"] = "official_asset_not_found"
            return report
        asset = matching[0]
        digest = asset.get("digest") or ""
        if not digest.startswith("sha256:") or len(digest) != 71:
            report["status"] = "official_sha256_digest_missing"
            return report
        with urlopen(Request(asset["browser_download_url"],
                             headers={"User-Agent":"home41-frida-readonly-ci"}),
                     timeout=90) as response:
            archive = response.read(100_000_000)
        if hashlib.sha256(archive).hexdigest() != digest[7:]:
            report["status"] = "release_asset_checksum_mismatch"
            return report
        report["checksum_verified"] = True
        root = cmd("adb", "root", secs=30)
        # Root command may restart adbd, so wait for it.
        cmd("adb", "wait-for-device", secs=60)
        who = cmd("adb", "shell", "id", "-u")
        if who.returncode != 0 or who.stdout.strip() != "0":
            report["status"] = "emulator_not_rooted"
            return report
        report["adb_root_confirmed"] = True
        abis=cmd("adb","shell","getprop","ro.product.cpu.abilist").stdout
        if "x86_64" not in abis:
            report["status"] = "unsupported_emulator_abi"
            return report
        with tempfile.TemporaryDirectory() as tmp:
            target = Path(tmp) / "home41-frida-server"
            target.write_bytes(lzma.decompress(archive))
            push = cmd("adb", "push", str(target),
                       "/data/local/tmp/home41-frida-server", secs=60)
            if push.returncode != 0:
                report["status"] = "server_push_failed"
                return report
        chmod = cmd("adb", "shell", "chmod", "700",
                    "/data/local/tmp/home41-frida-server")
        if chmod.returncode != 0:
            report["status"] = "server_chmod_failed"
            return report
        # The Android frida-server 17 command stays in the foreground.
        # subprocess.run(..., timeout=25) gave TimeoutExpired on real
        # Actions #42373639368 even though the binary was verified. Keep
        # a detached adb shell process with *no inherited stdout/stderr*
        # instead, and validate an actual TCP listener via ADB forward.
        server = subprocess.Popen(
            ["adb", "shell", "/data/local/tmp/home41-frida-server",
             "-l", "127.0.0.1:27042"],
            stdin=subprocess.DEVNULL, stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL, start_new_session=True)
        time.sleep(2)
        if server.poll() is not None:
            report["status"] = "server_exited_early"
            return report
        forward = cmd("adb","forward","tcp:27042","tcp:27042",secs=20)
        if forward.returncode != 0:
            report["status"] = "adb_forward_failed"
            return report
        report["adb_forward_started"] = True
        connected = False
        for _ in range(8):
            try:
                with socket.create_connection(("127.0.0.1",27042),timeout=2):
                    connected = True
                    break
            except OSError:
                time.sleep(1)
        if not connected:
            report["status"] = "frida_server_port_unreachable"
            return report
        report["frida_server_started"] = True
        report["status"] = "ready"
    except Exception as e:
        # Never persist GitHub URLs, network messages or ADB command output.
        report["status"] = "setup_exception"
        report["error_type"] = type(e).__name__
    return report


def main():
    cli = argparse.ArgumentParser()
    cli.add_argument("--output", type=Path, required=True)
    opts=cli.parse_args()
    result=install()
    opts.output.parent.mkdir(parents=True,exist_ok=True)
    opts.output.write_text(json.dumps(result,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(result,sort_keys=True))
    return 0  # Frida is optional; the HOME runtime probe must still run.


if __name__=="__main__":
    raise SystemExit(main())
