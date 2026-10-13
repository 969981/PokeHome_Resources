# Publish the complete 19,622-file HOME Android 4.1.0 offline archive

The research archive's **actual bytes are not yet on GitHub**. This document gives a reproducible importer for the exact offline ZIP created 2026-10-13. The importer is checked into `Android/tools/publish_full_archive.py` and refuses another APK, a dirty git checkout, missing paths, ZIP duplicates, mismatched SHA-256 hashes, or a case-insensitive filesystem.

## Why the offline ZIP is not directly available to GitHub Actions

The archive lives in a conversation's local file environment. This runtime's direct HTTPS/GitHub DNS is unavailable, and the connected GitHub API accepts per-file content or blobs, not a filesystem path to the 173 MB ZIP. GitHub Actions cannot access a private ChatGPT `sandbox:/` URL. There is currently no valid public HTTPS mirror of this *exact research ZIP* for Actions to ingest.

The largest uncompressed member is 75,365,728 bytes (`libil2cpp.so`), below GitHub's 100 MiB single-blob hard limit. However, the **full 696,724,324 byte tree includes 19,622 files** and materially increases Git history; evaluate rights to republish third-party binaries and decompilation results, GitHub repository-size guidance, and LFS quotas before publishing.

## Full import on WSL2 Ubuntu with a Linux ext4 checkout

**The two case-fold path collisions in the APK require a case-sensitive filesystem.** Do not clone on `/mnt/c` or any ordinary NTFS case-insensitive Windows directory. Use a checkout inside `~/` (WSL2 Linux ext4).

1. Download the complete offline archive provided in this conversation to Windows Downloads.
2. In WSL2 Ubuntu:

```bash
sudo apt-get update && sudo apt-get install -y git python3
cd ~
git clone --branch 4.1.0 https://github.com/969981/PokeHome_Resources.git
cd PokeHome_Resources
# Git credentials must be configured for a user allowed to push.
python3 Android/tools/publish_full_archive.py \
  --zip /mnt/c/Users/<WINDOWS_USERNAME>/Downloads/HOME_Android_4.1.0_Full_Research.zip \
  --repo "$PWD" \
  --push
```

Use `gh auth login` if necessary to configure your GitHub credentials. A downloaded artifact's name is not sufficient for trust; the importer checks the ZIP's actual SHA-256.

The importer extracts to `Android/4.1.0/{Raw,JADX,JADX_Fallback,reports}` and accompanying `manifest.csv`, `README.txt` and `report.json`; its source ZIP root prefix is stripped.

Archive fingerprints:

- ZIP SHA-256: `5f6fe5dfe8924098e8af818282262575c5063b4de7d579e31562da8d38080ed3`
- Original APK SHA-256: `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`
- Expected regular files: **19,622**, including **1,810** files in `Raw/`.
- Total uncompressed member bytes: **696,724,324**.

The import deliberately forces all ignored file types via `git add -f -A -- Android/4.1.0`. This is necessary because `Android/.gitignore` currently ignores `*.so`, and `global-metadata.dat`; without it, the Git tree would silently omit the two most important IL2CPP research inputs.

## Completion criteria

The user-requested upload is completed **only after** `git push` succeeds, the script verifies GitHub `refs/heads/4.1.0` equals the committed local SHA, and the GitHub tree contains the raw IL2CPP and metadata binaries, all 7,900 normal JADX `.java` files, 7,995 fallback Java outputs, and audit reports.

Do not call the research archive 'fully pushed' on the basis of this instruction document or a successful CI tool-installation workflow. Publish only if you have rights to redistribute the third-party APK-derived material.
