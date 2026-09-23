# Entry points still unnamed (tier C)

Tiers: {'A': 10, 'B': 156, 'C': 34}
Classes: {'lifetime': 5, 'state': 45, 'accessor': 25, 'unknown': 35, 'setter': 18, 'draw': 5, 'tiling': 3, 'load-time': 51, 'sync': 8, 'constants': 4, 'dispatch': 1}

| va | callers | instr | args | why unknown | runtime evidence needed |
|---|---|---|---|---|---|
| 0x888DCD40 | 4 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DB7C0 | 3 | 19 | 4 | writes r3+32 without dirty bit; runtime: race_all total=0 max/frame=0 frames=0; cadence: l | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DB810 | 3 | 19 | 4 | writes r3+32 without dirty bit; runtime: race_all total=0 max/frame=0 frames=0; cadence: l | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DCCC8 | 3 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DCCE0 | 3 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E0070 | 3 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E0740 | 3 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E0788 | 3 | 1 | 0 | tiny accessor, 1 instr, 0 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D36F0 | 2 | 7 | 6 | 7 instr, 6 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D3718 | 2 | 1 | 0 | tiny accessor, 1 instr, 0 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D6598 | 2 | 17 | 2 | 17 instr, 2 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DAA58 | 2 | 8 | 2 | writes r3+0,r3+19892 without dirty bit; runtime: race_all total=0 max/frame=0 frames=0; ca | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DAA98 | 2 | 1 | 0 | tiny accessor, 1 instr, 0 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DCC70 | 2 | 10 | 2 | 10 instr, 2 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DCC98 | 2 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E1108 | 2 | 53 | 6 | ORs dirty bit (ori r11,r11,128) and writes device; runtime: race_all total=0 max/frame=0 f | argument capture + next-draw register delta |
| 0x888E15C0 | 2 | 18 | 3 | 18 instr, 3 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E1FD8 | 2 | 91 | 1 | ORs dirty bit (ori r11,r11,30840) and writes device; runtime: race_all total=0 max/frame=0 | argument capture + next-draw register delta |
| 0x888E23D0 | 2 | 239 | 3 | 239 instr, 3 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E3E88 | 2 | 58 | 3 | 58 instr, 3 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888EC100 | 2 | 126 | 6 | 126 instr, 6 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D37D0 | 1 | 1 | 0 | tiny accessor, 1 instr, 0 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D3B38 | 1 | 7 | 4 | 7 instr, 4 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D5D38 | 1 | 23 | 3 | writes r3+24 without dirty bit; runtime: race_all total=0 max/frame=0 frames=0; cadence: l | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888D6620 | 1 | 52 | 3 | ORs dirty bit (oris r11,r11,32768;ori r11,r11,2) and writes device; runtime: race_all tota | argument capture + next-draw register delta |
| 0x888D66F0 | 1 | 52 | 3 | ORs dirty bit (oris r11,r11,32768;ori r11,r11,2) and writes device; runtime: race_all tota | argument capture + next-draw register delta |
| 0x888D8798 | 1 | 26 | 2 | 26 instr, 2 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DBF10 | 1 | 1 | 0 | tiny accessor, 1 instr, 0 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DD2F0 | 1 | 22 | 3 | 22 instr, 3 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888DE7E0 | 1 | 5 | 1 | tiny accessor, 5 instr, 1 arg(s), no stores; runtime: race_all total=0 max/frame=0 frames= | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888E6C88 | 1 | 30 | 1 | 30 instr, 1 arg(s); runtime: race_all total=0 max/frame=0 frames=0; cadence: load-time | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888EB148 | 1 | 2 | 2 | writes r3+16752 without dirty bit; runtime: race_all total=0 max/frame=0 frames=0; cadence | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888EB150 | 1 | 2 | 2 | writes r3+16748 without dirty bit; runtime: race_all total=0 max/frame=0 frames=0; cadence | call-count profile (per-draw / per-frame / load-time) + arg capture |
| 0x888EBBE8 | 1 | 44 | 1 | ORs dirty bit (ori r11,r11,9) and writes device; runtime: race_all total=0 max/frame=0 fra | argument capture + next-draw register delta |
