# _shared - data that belongs to the family, not to one port

`user-data/` here is the ONE user-data root every port in this tree points at
(--user_data_root). The runtime namespaces everything beneath the profile and
title id on its own:

    user-data/<xuid>/<title-id>/<content-type>/...

- the profile xuid is a runtime constant, so both titles see the same player
- 58410954 = Banjo-Kazooie (XBLA), 58410955 = Banjo-Tooie (XBLA)
- this is what lets Tooie find the Kazooie save the way the console versions
  did (Stop 'N' Swop detection, cross-game unlocks)
- DLC lives under the shared xuid 0 and is visible to whichever title it was
  packaged for

Shader caches land in user-data/cache keyed by title id, so the two titles do
not fight over one cache. Per-port launcher settings stay in each port's own
user-data/rexmenu/ (menu layout, FPS cap - launcher state, not game state).

Never commit anything under user-data/.
