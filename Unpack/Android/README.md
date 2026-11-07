# Pokémon HOME Android 4.1.0 — private extracted assets

This directory is intentionally separate from the existing Switch RomFS mirror at `Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/`.

The private workflow `.github/workflows/android41-import-assets.yml` checks out the public *source APK and conversion tools* from `969981/Home_Android`, runs actual analysis on the GitHub runner, then commits generated **images, sprites, text, audio, OBJ and geometry-only GLB models** here under `Unpack/Android/4.1.0/`.

Source mapping, SHA-256, failure records and the SQLite index are under `_meta/`. Unity `Font` binaries are excluded in accordance with the existing root `AGENTS.md`. No login, account cache, secrets, remotely downloaded game files, or token material should be committed.

Do not mistake this directory for full coverage of Pokémon HOME: APK resources are not the same as downloaded runtime assets; Mesh GLB geometry does not prove material/armature/animation recovery. See `_meta/unity_summary.json` and `_meta/unity_failures_summary.json`.

The GitHub repository is private at the time of workflow creation; before changing visibility, review rights to all contained content.
