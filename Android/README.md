# Pokémon HOME Android 4.1.0 — APK extraction and identity research

This **Android/** area complements the existing Switch 4.1.0 NCA/Unpack tree. It is a separate, reproducible research track, **not** an Android APK mirror committed to the public repository.

## Exact target

| Item | Value |
|---|---|
| Android version | 4.1.0 (versionCode 81), arm64-v8a / Unity IL2CPP |
| Original APK SHA-256 | `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1` |
| libil2cpp.so SHA-256 | `80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe` |
| global-metadata.dat SHA-256 | `dde114e58c195c44d8261ff00259c2da5dcfd62facad6103ea4b60b77bebb0ad` |
| Unity | 6000.0.71f1; metadata format 31 |

These hashes were recovered from [previously documented analysis](https://github.com/969981/HOME-Live-Plugin-CHS/blob/home-core-editor/docs/pokemon_home_reverse/4.1.0/111_home_4_1_0_android_il2cpp_layout_rva_reconstruction.md). **No original APK was accessible in the execution environment for this new commit.** Do not mistake saved evidence for a fresh run.

## Local reproduction

Requirements: Python 3.9+, your own authorized 4.1.0 APK. For optional deeper views: JADX CLI, Apktool, and [morluto/rea](https://github.com/morluto/rea). REA's Android workflow additionally needs a full JDK 17+ and `REA_JADX_MCP_JAR` pointing to the compatible `jadx-headless-mcp-0.7.1-all.jar`. See the [REA Android guide](https://github.com/morluto/rea/blob/main/docs/android-analysis.md).

```powershell
py -3 Android/tools/unpack_apk.py --apk "D:\Targets\HOME_4.1.0.apk" --out "Android/work/4.1.0"
py -3 Android/tools/scan_id_artifacts.py --root "Android/work/4.1.0" --out "Android/work/4.1.0/reports/id_hits.csv"
py -3 -m unittest discover -s Android/tests -v
```

The extractor: (1) verifies the exact APK and key embedded file SHA-256; (2) safely extracts **all ZIP members** to `raw/`; (3) emits a per-member manifest and verification report; (4) runs locally available JADX, Apktool and REA inspection tools, with explicit outcome/status; (5) keeps all extracted assets local and excluded from Git. A ZIP inventory is **not** equivalent to reconstructed IL2CPP method bodies. For IL2CPP, inspect `libil2cpp.so` **together with** `global-metadata.dat` using the already recorded v31 registration layout and a compatible IL2CPP native analyzer/IDA/Ghidra.

REA commands for narrow read-only follow-up (requires its engine):

```powershell
rea inspect-android-package "D:\Targets\HOME_4.1.0.apk" --json
rea search-android-classes "D:\Targets\HOME_4.1.0.apk" Auth
rea search-android-classes "D:\Targets\HOME_4.1.0.apk" Register
```

REA/JADX **may only explain the Java/Kotlin DEX shell** of this Unity IL2CPP app; the critical `ApiRequestAuthRegisterUser` and `UD_Basic` implementations live in native IL2CPP. Do not report “ID algorithm recovered” from DEX class-name search or from ID display formatting.

## Output contract

```text
Android/work/4.1.0/
  raw/                 complete checked APK ZIP-member extraction
  jadx/                optional Java/decompiled resources (tool-dependent)
  apktool/             optional Android resource/smali decoding
  rea/                 optional REA package inspection Evidence
  reports/
    apk_manifest.csv   one row per original APK file member
    extraction.json    source/key hashes, counts, tool exit status, errors
    id_hits.csv        redacted, bounded literal search (after scanner run)
```

Research results: [ID ownership and generation boundaries](ID_GENERATION_RESEARCH.md).

### Evidence/publishing status

- **Existing archival Android 4.1.0 IL2CPP research**: documented and linked, not re-executed here.
- **This delivery**: executable *workflow source* and static research dossier; APK-dependent extraction and native reanalysis **pending exact input**.
- **Publication**: do not commit proprietary APK payload, whole decompiled app, native binaries, metadata blobs, authenticated traffic, real account IDs or tokens. Derived evidence can be shared after review and redaction.
