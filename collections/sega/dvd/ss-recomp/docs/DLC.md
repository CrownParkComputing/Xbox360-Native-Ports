# DLC status — 2026-09-12

All six packages in `/home/jon/Downloads/Split_Second/Split Second/` have matching
SHA-256 copies under `content_root/0000000000000000/425607E7/00000002/`:

- Deadline Pack
- High Octane Supercar Vehicle Pack
- Master Unlock!
- Onslaught Pack
- Survival At The Rock Pack
- The Elite Vehicle Livery Pack

These are raw `LIVE` content packages, totaling about 838 MiB. Presence does not
mean activation. Run 089 still logs the skipper content-processing thread as
stubbed and fails to open `DLC:\DLC\Unlock\Unlock.params` with status 0xC000000F.
`src/skipper_stubs.cpp` bypasses `sub_980DDBD8` to avoid the earlier boot fault
storm. Do not remove that bypass until content mounting/initialization works.

The runtime's content enumeration recognizes raw STFS headers, but
`ContentPackage` currently constructs a `HostPathDevice` for the package path;
raw package mounting/extraction needs investigation before claiming support.

The `assets-ztm-v1` private release backs up the base-game `assets/` tree only.
These DLC packages live in ignored `content_root/` and are not part of that
release or its tracked manifest. The Downloads originals are retained.
