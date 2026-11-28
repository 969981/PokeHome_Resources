# HOME41 receiver and record collection audit

SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
Static only. Candidate vtables require constructor/type evidence.

## Direct callers
### 0x2c684: 3 sites
- 0x2c3b0 @ 0x2c4e8 BL
- 0x2c564 @ 0x2c624 BL
- 0x2d020 @ 0x2d21c BL
### 0x8ea84: 4 sites
- 0x8e980 @ 0x8ea40 BL
- 0xc462c @ 0xc462c B
- 0xc4640 @ 0xc4640 B
- 0xc4644 @ 0xc4644 B
### 0x8ecb4: 4 sites
- 0x8ebb0 @ 0x8ec70 BL
- 0xd7218 @ 0xd7218 B
- 0xd722c @ 0xd722c B
- 0xd7230 @ 0xd7230 B
### 0x97040: 18 sites
- 0x96fbc @ 0x96ff4 BL
- 0x96fbc @ 0x97014 BL
- 0x98b64 @ 0x98bc8 BL
- 0x98b64 @ 0x990d4 BL
- 0x993d8 @ 0x99420 BL
- 0x993d8 @ 0x99440 BL
- 0x99534 @ 0x9957c BL
- 0x99534 @ 0x9959c BL
- 0x99690 @ 0x996d8 BL
- 0x99690 @ 0x996f8 BL
- 0x997ec @ 0x99834 BL
- 0x997ec @ 0x99854 BL
- 0x99950 @ 0x999a8 BL
- 0x99950 @ 0x999cc BL
- 0x99e78 @ 0x99ec0 BL
- 0x99e78 @ 0x99ee0 BL
- 0x99fd4 @ 0x9a020 BL
- 0x99fd4 @ 0x9a040 BL
### 0x97440: 9 sites
- 0x897a0 @ 0x8a7cc BL
- 0x9c824 @ 0x9c98c BL
- 0x9ca64 @ 0x9cbb4 BL
- 0x9cc24 @ 0x9cc90 BL
- 0x9cc24 @ 0x9ccd0 BL
- 0xdba70 @ 0xdbb8c BL
- 0xdba70 @ 0xdbbcc BL
- 0xdbe5c @ 0xdbf34 BL
- 0xdc250 @ 0xdc334 BL
### 0x975b0: 2 sites
- 0xdbe5c @ 0xdbfb0 BL
- 0xdbe5c @ 0xdc014 BL
### 0x9bb38: 5 sites
- 0x97440 @ 0x97574 BL
- 0x975b0 @ 0x9765c BL
- 0x9e874 @ 0x9e8ac BL
- 0xdba70 @ 0xdbbe8 BL
- 0x14ca30 @ 0x14ce08 BL
### 0x9bb44: 9 sites
- 0x96fbc @ 0x9703c B
- 0x97440 @ 0x97580 BL
- 0x975b0 @ 0x9771c BL
- 0x97750 @ 0x98738 BL
- 0x98770 @ 0x98b40 BL
- 0x99950 @ 0x999e8 BL
- 0x9f1b0 @ 0x9f2d8 BL
- 0xdd1f4 @ 0xdd318 BL
- 0x14d584 @ 0x14d604 BL
### 0x9c3e4: 8 sites
- 0x96fbc @ 0x97024 BL
- 0x98770 @ 0x98b34 BL
- 0x99950 @ 0x999dc BL
- 0x9bd54 @ 0x9be68 B
- 0x9ca64 @ 0x9cbd0 BL
- 0xdbe5c @ 0xdbf64 BL
- 0xdc250 @ 0xdc350 BL
- 0xdc250 @ 0xdc4e4 BL
### 0x9c44c: 3 sites
- 0x97440 @ 0x97568 BL
- 0x975b0 @ 0x97710 BL
- 0x9a14c @ 0x9a160 B

## Type-token getter reverse paths and relocated slots
### token 0x8ea84: 23 reverse candidates
- 0x8c130 depth=2
- 0x8e980 depth=1
- 0x8ea84 depth=0
- 0xc462c depth=1
- 0xc4640 depth=1
- 0xc4644 depth=1
- 0xdea80 depth=2
- 0xdec50 depth=2
- 0xdf120 depth=2
- 0xdf2f0 depth=2
- 0xe1450 depth=2
- 0xe15c0 depth=2
- 0xe1750 depth=2
- 0xe2390 depth=2
- 0xe2510 depth=2
- 0xe2690 depth=2
- 0xe2870 depth=2
- 0xe29f0 depth=2
- 0xe2b60 depth=2
- 0xe2cd0 depth=2
- 0xe2e80 depth=2
- 0xf9cf0 depth=2
- 0xfa1b0 depth=2
### token 0x8ecb4: 29 reverse candidates
- 0x8c130 depth=2
- 0x8ebb0 depth=1
- 0x8ecb4 depth=0
- 0xd7218 depth=1
- 0xd722c depth=1
- 0xd7230 depth=1
- 0xdee20 depth=2
- 0xdef80 depth=2
- 0xe1920 depth=2
- 0xe1a70 depth=2
- 0xe1f60 depth=2
- 0xe20b0 depth=2
- 0xe2260 depth=2
- 0xe38c0 depth=2
- 0xe4100 depth=2
- 0xe41f0 depth=2
- 0xe4300 depth=2
- 0xe4420 depth=2
- 0xe51e0 depth=2
- 0xe5320 depth=2
- 0xe5550 depth=2
- 0xe5630 depth=2
- 0xe6130 depth=2
- 0xe63e0 depth=2
- 0xe7000 depth=2
- 0xe71d0 depth=2
- 0xe9340 depth=2
- 0xe9690 depth=2
- 0x105130 depth=2
- token 0x8ea84 relocation 0x76d468 -> 0x8c130 depth=2
- token 0x8ea84 relocation 0x76dd18 -> 0xc462c depth=1
- token 0x8ea84 relocation 0x76dda8 -> 0xc4640 depth=1
- token 0x8ea84 relocation 0x76ddc0 -> 0xc4644 depth=1
- token 0x8ea84 relocation 0x76e420 -> 0xdea80 depth=2
- token 0x8ea84 relocation 0x76e428 -> 0xdec50 depth=2
- token 0x8ea84 relocation 0x76e5c0 -> 0xdf120 depth=2
- token 0x8ea84 relocation 0x76e5c8 -> 0xdf2f0 depth=2
- token 0x8ea84 relocation 0x76e690 -> 0xe1450 depth=2
- token 0x8ea84 relocation 0x76e698 -> 0xe15c0 depth=2
- token 0x8ea84 relocation 0x76e6a0 -> 0xe1750 depth=2
- token 0x8ea84 relocation 0x76e908 -> 0xe2390 depth=2
- token 0x8ea84 relocation 0x76e9d8 -> 0xe2510 depth=2
- token 0x8ea84 relocation 0x76eaa8 -> 0xe2690 depth=2
- token 0x8ea84 relocation 0x76eb70 -> 0xe2870 depth=2
- token 0x8ea84 relocation 0x76eb78 -> 0xe29f0 depth=2
- token 0x8ea84 relocation 0x76ec40 -> 0xe2b60 depth=2
- token 0x8ea84 relocation 0x76ec48 -> 0xe2cd0 depth=2
- token 0x8ea84 relocation 0x76ed18 -> 0xe2e80 depth=2
- token 0x8ea84 relocation 0x76f468 -> 0xf9cf0 depth=2
- token 0x8ea84 relocation 0x76f530 -> 0xfa1b0 depth=2
- token 0x8ecb4 relocation 0x76d468 -> 0x8c130 depth=2
- token 0x8ecb4 relocation 0x76e1a0 -> 0xd7218 depth=1
- token 0x8ecb4 relocation 0x76e230 -> 0xd722c depth=1
- token 0x8ecb4 relocation 0x76e248 -> 0xd7230 depth=1
- token 0x8ecb4 relocation 0x76e4f0 -> 0xdee20 depth=2
- token 0x8ecb4 relocation 0x76e4f8 -> 0xdef80 depth=2
- token 0x8ecb4 relocation 0x76e760 -> 0xe1920 depth=2
- token 0x8ecb4 relocation 0x76e768 -> 0xe1a70 depth=2
- token 0x8ecb4 relocation 0x76e830 -> 0xe1f60 depth=2
- token 0x8ecb4 relocation 0x76e838 -> 0xe20b0 depth=2
- token 0x8ecb4 relocation 0x76e840 -> 0xe2260 depth=2
- token 0x8ecb4 relocation 0x76eeb0 -> 0xe38c0 depth=2
- token 0x8ecb4 relocation 0x76ef80 -> 0xe4420 depth=2
- token 0x8ecb4 relocation 0x76ef90 -> 0xe51e0 depth=2
- token 0x8ecb4 relocation 0x7a08c0 -> 0xe5320 depth=2
- token 0x8ecb4 relocation 0x7a08d0 -> 0xe5550 depth=2
- token 0x8ecb4 relocation 0x7a08d8 -> 0xe5630 depth=2
- token 0x8ecb4 relocation 0x7a0908 -> 0xe7000 depth=2
- token 0x8ecb4 relocation 0x7a0938 -> 0xe71d0 depth=2
- token 0x8ecb4 relocation 0x7a0958 -> 0xe63e0 depth=2
- token 0x8ecb4 relocation 0x7a09a0 -> 0xe9340 depth=2
- token 0x8ecb4 relocation 0x7a09e0 -> 0xe9690 depth=2

## Candidate primary table windows
- primary 0x76dce8, +58=0x27f78, +60=0x27f7c, evidence=[(584324, 7790016, -80)]
- primary 0x76dcf0, +58=0x27f7c, +60=0x27f80, evidence=[(584324, 7790016, -80)]
- primary 0x76e058, +58=0x27f78, +60=0x27f7c, evidence=[(584884, 7791176, -80)]
- primary 0x76e060, +58=0x27f7c, +60=0x27f80, evidence=[(584884, 7791176, -80)]
- primary 0x76e170, +58=0x27f78, +60=0x27f7c, evidence=[(584884, 7791176, -80)]
- primary 0x76e178, +58=0x27f7c, +60=0x27f80, evidence=[(584884, 7791176, -80)]

## Candidate table address materializers

## Record data call graph
### 0x2c684
- 0x2c7f0 -> 0x2f7f0
- 0x2c80c -> 0x2c10
### 0x8ea84
### 0x8ecb4
### 0x97040
- 0x970bc -> 0x930e0
- 0x97114 -> 0x9accc
- 0x97138 -> 0x9264c
- 0x97170 -> 0x94e98
- 0x9723c -> 0x92b40
- 0x9727c -> 0x920e4
- 0x972a0 -> 0x91358
- 0x972d4 -> 0x9accc
- 0x972f8 -> 0x91d1c
- 0x97330 -> 0x94e98
- 0x97410 -> 0x2c10
### 0x97440
- 0x9753c -> 0x9accc
- 0x97568 -> 0x9c44c
- 0x97574 -> 0x9bb38
- 0x97580 -> 0x9bb44
- 0x975a0 -> 0x2c10
### 0x975b0
- 0x9763c -> 0x9accc
- 0x9765c -> 0x9bb38
- 0x97710 -> 0x9c44c
- 0x9771c -> 0x9bb44
- 0x97740 -> 0x2c10
### 0x9bb38
### 0x9bb44
### 0x9c3e4
### 0x9c44c

## Bounded direct paths to SaveTick
- 0x2c684: visited=4 cap=False path=None
- 0x8ea84: visited=1 cap=False path=None
- 0x8ecb4: visited=1 cap=False path=None
- 0x96fbc: visited=48 cap=False path=None
- 0x97040: visited=58 cap=False path=None
- 0x97440: visited=6 cap=False path=None
- 0x975b0: visited=6 cap=False path=None
- 0x9bb38: visited=1 cap=False path=None
- 0x9bb44: visited=1 cap=False path=None
- 0x9c3e4: visited=1 cap=False path=None
- 0x9c44c: visited=1 cap=False path=None
- 0xdbe5c: visited=39 cap=False path=None

## Exact token-thunk relocation windows
### token thunk slot 0x76dd18
- 0x76dcf8 delta=-0x20 raw=0x1029c executable=0x1029c
- 0x76dd00 delta=-0x18 raw=0x102b8 executable=0x102b8
- 0x76dd08 delta=-0x10 raw=0x10310 executable=0x10310
- 0x76dd10 delta=-0x8 raw=0x10360 executable=0x10360
- 0x76dd18 delta=+0x0 raw=0xc462c executable=0xc462c
- 0x76dd20 delta=+0x8 raw=0x27f64 executable=0x27f64
- 0x76dd28 delta=+0x10 raw=0xc2ca4 executable=0xc2ca4
- 0x76dd30 delta=+0x18 raw=0x27f70 executable=0x27f70
- 0x76dd38 delta=+0x20 raw=0xc3250 executable=0xc3250
- 0x76dd40 delta=+0x28 raw=0x27f78 executable=0x27f78
- 0x76dd48 delta=+0x30 raw=0x27f7c executable=0x27f7c
- 0x76dd50 delta=+0x38 raw=0x27f80 executable=0x27f80
- 0x76dd58 delta=+0x40 raw=0xc3754 executable=0xc3754
- 0x76dd60 delta=+0x48 raw=0xc2ca0 executable=0xc2ca0
- 0x76dd68 delta=+0x50 raw=0xc38ec executable=0xc38ec
- 0x76dd70 delta=+0x58 raw=0xffffffffffffffb8 executable=-
- 0x76dd78 delta=+0x60 raw=0x0 executable=-
- 0x76dd80 delta=+0x68 raw=0xc4630 executable=0xc4630
- 0x76dd88 delta=+0x70 raw=0xc4638 executable=0xc4638
- 0x76dd90 delta=+0x78 raw=0x10440 executable=0x10440
- 0x76dd98 delta=+0x80 raw=0x10490 executable=0x10490
- 0x76dda0 delta=+0x88 raw=0x104c8 executable=0x104c8
### token thunk slot 0x76dda8
- 0x76dd88 delta=-0x20 raw=0xc4638 executable=0xc4638
- 0x76dd90 delta=-0x18 raw=0x10440 executable=0x10440
- 0x76dd98 delta=-0x10 raw=0x10490 executable=0x10490
- 0x76dda0 delta=-0x8 raw=0x104c8 executable=0x104c8
- 0x76dda8 delta=+0x0 raw=0xc4640 executable=0xc4640
- 0x76ddb0 delta=+0x8 raw=0xffffffffffffffb0 executable=-
- 0x76ddb8 delta=+0x10 raw=0x0 executable=-
- 0x76ddc0 delta=+0x18 raw=0xc4644 executable=0xc4644
- 0x76ddc8 delta=+0x20 raw=0xc4648 executable=0xc4648
- 0x76ddd0 delta=+0x28 raw=0xc4650 executable=0xc4650
- 0x76ddd8 delta=+0x30 raw=0x179844386f2820d1 executable=-
- 0x76dde0 delta=+0x38 raw=0x619e7a executable=-
- 0x76dde8 delta=+0x40 raw=0x18 executable=-
- 0x76ddf0 delta=+0x48 raw=0x0 executable=-
- 0x76ddf8 delta=+0x50 raw=0x0 executable=-
- 0x76de00 delta=+0x58 raw=0xc4658 executable=0xc4658
- 0x76de08 delta=+0x60 raw=0xc48e8 executable=0xc48e8
- 0x76de10 delta=+0x68 raw=0x0 executable=-
- 0x76de18 delta=+0x70 raw=0x0 executable=-
- 0x76de20 delta=+0x78 raw=0xa2f30 executable=0xa2f30
- 0x76de28 delta=+0x80 raw=0xc490c executable=0xc490c
- 0x76de30 delta=+0x88 raw=0xa27e0 executable=0xa27e0
### token thunk slot 0x76ddc0
- 0x76dda0 delta=-0x20 raw=0x104c8 executable=0x104c8
- 0x76dda8 delta=-0x18 raw=0xc4640 executable=0xc4640
- 0x76ddb0 delta=-0x10 raw=0xffffffffffffffb0 executable=-
- 0x76ddb8 delta=-0x8 raw=0x0 executable=-
- 0x76ddc0 delta=+0x0 raw=0xc4644 executable=0xc4644
- 0x76ddc8 delta=+0x8 raw=0xc4648 executable=0xc4648
- 0x76ddd0 delta=+0x10 raw=0xc4650 executable=0xc4650
- 0x76ddd8 delta=+0x18 raw=0x179844386f2820d1 executable=-
- 0x76dde0 delta=+0x20 raw=0x619e7a executable=-
- 0x76dde8 delta=+0x28 raw=0x18 executable=-
- 0x76ddf0 delta=+0x30 raw=0x0 executable=-
- 0x76ddf8 delta=+0x38 raw=0x0 executable=-
- 0x76de00 delta=+0x40 raw=0xc4658 executable=0xc4658
- 0x76de08 delta=+0x48 raw=0xc48e8 executable=0xc48e8
- 0x76de10 delta=+0x50 raw=0x0 executable=-
- 0x76de18 delta=+0x58 raw=0x0 executable=-
- 0x76de20 delta=+0x60 raw=0xa2f30 executable=0xa2f30
- 0x76de28 delta=+0x68 raw=0xc490c executable=0xc490c
- 0x76de30 delta=+0x70 raw=0xa27e0 executable=0xa27e0
- 0x76de38 delta=+0x78 raw=0xcbf29ce484222645 executable=-
- 0x76de40 delta=+0x80 raw=0x60f683 executable=-
- 0x76de48 delta=+0x88 raw=0x0 executable=-
### token thunk slot 0x76e1a0
- 0x76e180 delta=-0x20 raw=0x1029c executable=0x1029c
- 0x76e188 delta=-0x18 raw=0x102b8 executable=0x102b8
- 0x76e190 delta=-0x10 raw=0x10310 executable=0x10310
- 0x76e198 delta=-0x8 raw=0x10360 executable=0x10360
- 0x76e1a0 delta=+0x0 raw=0xd7218 executable=0xd7218
- 0x76e1a8 delta=+0x8 raw=0x27f64 executable=0x27f64
- 0x76e1b0 delta=+0x10 raw=0xd63e4 executable=0xd63e4
- 0x76e1b8 delta=+0x18 raw=0x27f70 executable=0x27f70
- 0x76e1c0 delta=+0x20 raw=0xd6888 executable=0xd6888
- 0x76e1c8 delta=+0x28 raw=0x27f78 executable=0x27f78
- 0x76e1d0 delta=+0x30 raw=0x27f7c executable=0x27f7c
- 0x76e1d8 delta=+0x38 raw=0x27f80 executable=0x27f80
- 0x76e1e0 delta=+0x40 raw=0xd69a4 executable=0xd69a4
- 0x76e1e8 delta=+0x48 raw=0xd63e0 executable=0xd63e0
- 0x76e1f0 delta=+0x50 raw=0xd6b3c executable=0xd6b3c
- 0x76e1f8 delta=+0x58 raw=0xffffffffffffffb8 executable=-
- 0x76e200 delta=+0x60 raw=0x0 executable=-
- 0x76e208 delta=+0x68 raw=0xd721c executable=0xd721c
- 0x76e210 delta=+0x70 raw=0xd7224 executable=0xd7224
- 0x76e218 delta=+0x78 raw=0x10440 executable=0x10440
- 0x76e220 delta=+0x80 raw=0x10490 executable=0x10490
- 0x76e228 delta=+0x88 raw=0x104c8 executable=0x104c8
### token thunk slot 0x76e230
- 0x76e210 delta=-0x20 raw=0xd7224 executable=0xd7224
- 0x76e218 delta=-0x18 raw=0x10440 executable=0x10440
- 0x76e220 delta=-0x10 raw=0x10490 executable=0x10490
- 0x76e228 delta=-0x8 raw=0x104c8 executable=0x104c8
- 0x76e230 delta=+0x0 raw=0xd722c executable=0xd722c
- 0x76e238 delta=+0x8 raw=0xffffffffffffffb0 executable=-
- 0x76e240 delta=+0x10 raw=0x0 executable=-
- 0x76e248 delta=+0x18 raw=0xd7230 executable=0xd7230
- 0x76e250 delta=+0x20 raw=0xd7234 executable=0xd7234
- 0x76e258 delta=+0x28 raw=0xd723c executable=0xd723c
- 0x76e260 delta=+0x30 raw=0x0 executable=-
- 0x76e268 delta=+0x38 raw=0x0 executable=-
- 0x76e270 delta=+0x40 raw=0xa2f30 executable=0xa2f30
- 0x76e278 delta=+0x48 raw=0xd7244 executable=0xd7244
- 0x76e280 delta=+0x50 raw=0xa27e0 executable=0xa27e0
- 0x76e288 delta=+0x58 raw=0xcbf29ce484222645 executable=-
- 0x76e290 delta=+0x60 raw=0x60f683 executable=-
- 0x76e298 delta=+0x68 raw=0x0 executable=-
- 0x76e2a0 delta=+0x70 raw=0x0 executable=-
- 0x76e2a8 delta=+0x78 raw=0x0 executable=-
- 0x76e2b0 delta=+0x80 raw=0xd75a0 executable=0xd75a0
- 0x76e2b8 delta=+0x88 raw=0xd763c executable=0xd763c
### token thunk slot 0x76e248
- 0x76e228 delta=-0x20 raw=0x104c8 executable=0x104c8
- 0x76e230 delta=-0x18 raw=0xd722c executable=0xd722c
- 0x76e238 delta=-0x10 raw=0xffffffffffffffb0 executable=-
- 0x76e240 delta=-0x8 raw=0x0 executable=-
- 0x76e248 delta=+0x0 raw=0xd7230 executable=0xd7230
- 0x76e250 delta=+0x8 raw=0xd7234 executable=0xd7234
- 0x76e258 delta=+0x10 raw=0xd723c executable=0xd723c
- 0x76e260 delta=+0x18 raw=0x0 executable=-
- 0x76e268 delta=+0x20 raw=0x0 executable=-
- 0x76e270 delta=+0x28 raw=0xa2f30 executable=0xa2f30
- 0x76e278 delta=+0x30 raw=0xd7244 executable=0xd7244
- 0x76e280 delta=+0x38 raw=0xa27e0 executable=0xa27e0
- 0x76e288 delta=+0x40 raw=0xcbf29ce484222645 executable=-
- 0x76e290 delta=+0x48 raw=0x60f683 executable=-
- 0x76e298 delta=+0x50 raw=0x0 executable=-
- 0x76e2a0 delta=+0x58 raw=0x0 executable=-
- 0x76e2a8 delta=+0x60 raw=0x0 executable=-
- 0x76e2b0 delta=+0x68 raw=0xd75a0 executable=0xd75a0
- 0x76e2b8 delta=+0x70 raw=0xd763c executable=0xd763c
- 0x76e2c0 delta=+0x78 raw=0xa27e0 executable=0xa27e0
- 0x76e2c8 delta=+0x80 raw=0x0 executable=-
- 0x76e2d0 delta=+0x88 raw=0x0 executable=-

## UI name anchors
- 0x6167d4: b'View_Top\x00HelpWindow\x00WazaRememberSelectWaza2\x00Play_mt_UI_common_ca'
- 0x615c42: b'View_List\x00SubWindow_ListFilterAnswer2\x0011\x00%s_left_button\x00%s_up_bu'

## Exact thunk window reference materializers
- relocated cell 0x7a0eb8 -> 0x76e260
- 0xc38ec @ 0xc3e70/0xc3e74 ADD 0x76ddd8
- 0xd64dc @ 0xd656c/0xd6570 ADD 0x76e260

## Function bodies
### 0x2c10 (3 slots)
~~~asm
00002C10 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
00002C14 fd030091 mov      x29, sp
00002C18 76cd1794 bl       #0x5f61f0
~~~
### 0x1029c (7 slots)
~~~asm
0001029C 002c40f9 ldr      x0, [x0, #0x58]
000102A0 000100f9 str      x0, [x8]
000102A4 800000b4 cbz      x0, #0x102b4
000102A8 088c44f8 ldr      x8, [x0, #0x48]!
000102AC 010940f9 ldr      x1, [x8, #0x10]
000102B0 20001fd6 br       x1
000102B4 c0035fd6 ret      
~~~
### 0x102b8 (19 slots)
~~~asm
000102B8 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000102BC f65701a9 stp      x22, x21, [sp, #0x10]
000102C0 f44f02a9 stp      x20, x19, [sp, #0x20]
000102C4 fd030091 mov      x29, sp
000102C8 085840a9 ldp      x8, x22, [x0]
000102CC 151040f9 ldr      x21, [x0, #0x20]
000102D0 135041a9 ldp      x19, x20, [x0, #0x10]
000102D4 080140f9 ldr      x8, [x8]
000102D8 00013fd6 blr      x8
000102DC c80240f9 ldr      x8, [x22]
000102E0 e00316aa mov      x0, x22
000102E4 e10313aa mov      x1, x19
000102E8 e20314aa mov      x2, x20
000102EC e30315aa mov      x3, x21
000102F0 040d40f9 ldr      x4, [x8, #0x18]
000102F4 f44f42a9 ldp      x20, x19, [sp, #0x20]
000102F8 f65741a9 ldp      x22, x21, [sp, #0x10]
000102FC fd7bc3a8 ldp      x29, x30, [sp], #0x30
00010300 80001fd6 br       x4
~~~
### 0x10310 (19 slots)
~~~asm
00010310 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00010314 f30b00f9 str      x19, [sp, #0x10]
00010318 fd030091 mov      x29, sp
0001031C 132c40f9 ldr      x19, [x0, #0x58]
00010320 682e40f9 ldr      x8, [x19, #0x58]
00010324 c80000b5 cbnz     x8, #0x1033c
00010328 603240f9 ldr      x0, [x19, #0x60]
0001032C 080040f9 ldr      x8, [x0]
00010330 080140f9 ldr      x8, [x8]
00010334 00013fd6 blr      x8
00010338 602e00f9 str      x0, [x19, #0x58]
0001033C 68520191 add      x8, x19, #0x54
00010340 09fd5f88 ldaxr    w9, [x8]
00010344 29050011 add      w9, w9, #1
00010348 09fd0a88 stlxr    w10, w9, [x8]
0001034C aaffff35 cbnz     w10, #0x10340
00010350 f30b40f9 ldr      x19, [sp, #0x10]
00010354 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00010358 c0035fd6 ret      
~~~
### 0x10360 (14 slots)
~~~asm
00010360 082c40f9 ldr      x8, [x0, #0x58]
00010364 09510191 add      x9, x8, #0x54
00010368 1f2003d5 nop      
0001036C 1f2003d5 nop      
00010370 2afd5f88 ldaxr    w10, [x9]
00010374 4a050071 subs     w10, w10, #1
00010378 2afd0b88 stlxr    w11, w10, [x9]
0001037C abffff35 cbnz     w11, #0x10370
00010380 a1000054 b.ne     #0x10394
00010384 1f3100f9 str      xzr, [x8, #0x60]
00010388 080040f9 ldr      x8, [x0]
0001038C 010d40f9 ldr      x1, [x8, #0x18]
00010390 20001fd6 br       x1
00010394 c0035fd6 ret      
~~~
### 0x10440 (19 slots)
~~~asm
00010440 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00010444 f30b00f9 str      x19, [sp, #0x10]
00010448 fd030091 mov      x29, sp
0001044C 130840f9 ldr      x19, [x0, #0x10]
00010450 682e40f9 ldr      x8, [x19, #0x58]
00010454 c80000b5 cbnz     x8, #0x1046c
00010458 603240f9 ldr      x0, [x19, #0x60]
0001045C 080040f9 ldr      x8, [x0]
00010460 080140f9 ldr      x8, [x8]
00010464 00013fd6 blr      x8
00010468 602e00f9 str      x0, [x19, #0x58]
0001046C 68520191 add      x8, x19, #0x54
00010470 09fd5f88 ldaxr    w9, [x8]
00010474 29050011 add      w9, w9, #1
00010478 09fd0a88 stlxr    w10, w9, [x8]
0001047C aaffff35 cbnz     w10, #0x10470
00010480 f30b40f9 ldr      x19, [sp, #0x10]
00010484 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00010488 c0035fd6 ret      
~~~
### 0x10490 (14 slots)
~~~asm
00010490 080840f9 ldr      x8, [x0, #0x10]
00010494 09510191 add      x9, x8, #0x54
00010498 1f2003d5 nop      
0001049C 1f2003d5 nop      
000104A0 2afd5f88 ldaxr    w10, [x9]
000104A4 4a050071 subs     w10, w10, #1
000104A8 2afd0b88 stlxr    w11, w10, [x9]
000104AC abffff35 cbnz     w11, #0x104a0
000104B0 a1000054 b.ne     #0x104c4
000104B4 1f3100f9 str      xzr, [x8, #0x60]
000104B8 088c5bf8 ldr      x8, [x0, #-0x48]!
000104BC 010d40f9 ldr      x1, [x8, #0x18]
000104C0 20001fd6 br       x1
000104C4 c0035fd6 ret      
~~~
### 0x104c8 (7 slots)
~~~asm
000104C8 000840f9 ldr      x0, [x0, #0x10]
000104CC 000100f9 str      x0, [x8]
000104D0 800000b4 cbz      x0, #0x104e0
000104D4 088c44f8 ldr      x8, [x0, #0x48]!
000104D8 010940f9 ldr      x1, [x8, #0x10]
000104DC 20001fd6 br       x1
000104E0 c0035fd6 ret      
~~~
### 0x27f64 (2 slots)
~~~asm
00027F64 20008052 mov      w0, #1
00027F68 c0035fd6 ret      
~~~
### 0x27f70 (2 slots)
~~~asm
00027F70 20008052 mov      w0, #1
00027F74 c0035fd6 ret      
~~~
### 0x27f78 (1 slots)
~~~asm
00027F78 c0035fd6 ret      
~~~
### 0x27f7c (1 slots)
~~~asm
00027F7C c0035fd6 ret      
~~~
### 0x27f80 (1 slots)
~~~asm
00027F80 c0035fd6 ret      
~~~
### 0x2c3b0 (109 slots)
~~~asm
0002C3B0 ff8307d1 sub      sp, sp, #0x1e0
0002C3B4 fd7b1aa9 stp      x29, x30, [sp, #0x1a0]
0002C3B8 fc5f1ba9 stp      x28, x23, [sp, #0x1b0]
0002C3BC f6571ca9 stp      x22, x21, [sp, #0x1c0]
0002C3C0 f44f1da9 stp      x20, x19, [sp, #0x1d0]
0002C3C4 fd830691 add      x29, sp, #0x1a0
0002C3C8 c10c00b4 cbz      x1, #0x2c560
0002C3CC 2b004039 ldrb     w11, [x1]
0002C3D0 a8c884d2 mov      x8, #0x2645
0002C3D4 4884b0f2 movk     x8, #0x8422, lsl #16
0002C3D8 f40302aa mov      x20, x2
0002C3DC f30300aa mov      x19, x0
0002C3E0 889cd3f2 movk     x8, #0x9ce4, lsl #32
0002C3E4 487ef9f2 movk     x8, #0xcbf2, lsl #48
0002C3E8 6b010034 cbz      w11, #0x2c414
0002C3EC 6a3680d2 mov      x10, #0x1b3
0002C3F0 29040091 add      x9, x1, #1
0002C3F4 0a20c0f2 movk     x10, #0x100, lsl #32
0002C3F8 1f2003d5 nop      
0002C3FC 1f2003d5 nop      
0002C400 eb030b2a mov      w11, w11
0002C404 08010bca eor      x8, x8, x11
0002C408 087d0a9b mul      x8, x8, x10
0002C40C 2b154038 ldrb     w11, [x9], #1
0002C410 8bffff35 cbnz     w11, #0x2c400
0002C414 e84700f9 str      x8, [sp, #0x88]
0002C418 880a40f9 ldr      x8, [x20, #0x10]
0002C41C ff7f00a9 stp      xzr, xzr, [sp]
0002C420 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
0002C424 280100b4 cbz      x8, #0x2c448
0002C428 e9030091 mov      x9, sp
0002C42C 80820091 add      x0, x20, #0x20
0002C430 21810091 add      x1, x9, #0x20
0002C434 00013fd6 blr      x8
0002C438 882640a9 ldp      x8, x9, [x20]
0002C43C e82700a9 stp      x8, x9, [sp]
0002C440 882641a9 ldp      x8, x9, [x20, #0x10]
0002C444 e82701a9 stp      x8, x9, [sp, #0x10]
0002C448 74e240f9 ldr      x20, [x19, #0x1c0]
0002C44C f5430291 add      x21, sp, #0x90
0002C450 ff4b00f9 str      xzr, [sp, #0x90]
0002C454 ff7f0aa9 stp      xzr, xzr, [sp, #0xa0]
0002C458 ff7f0ba9 stp      xzr, xzr, [sp, #0xb0]
0002C45C ff7f12a9 stp      xzr, xzr, [sp, #0x120]
0002C460 ff7f13a9 stp      xzr, xzr, [sp, #0x130]
0002C464 140500b4 cbz      x20, #0x2c504
0002C468 e1230291 add      x1, sp, #0x88
0002C46C e00314aa mov      x0, x20
0002C470 b6420291 add      x22, x21, #0x90
0002C474 476e0a94 bl       #0x2c7d90
0002C478 1f2003d5 nop      
0002C47C 284f0110 adr      x8, #0x2ee60
0002C480 1f2003d5 nop      
0002C484 094f0110 adr      x9, #0x2ee64
0002C488 e8a70aa9 stp      x8, x9, [sp, #0xa8]
0002C48C 1f2003d5 nop      
0002C490 084e0110 adr      x8, #0x2ee50
0002C494 e94740f9 ldr      x9, [sp, #0x88]
0002C498 e85300f9 str      x8, [sp, #0xa0]
0002C49C e80b40f9 ldr      x8, [sp, #0x10]
0002C4A0 1f2003d5 nop      
0002C4A4 6a4e0110 adr      x10, #0x2ee70
0002C4A8 ea5f00f9 str      x10, [sp, #0xb8]
0002C4AC e94b00f9 str      x9, [sp, #0x90]
0002C4B0 f3270ca9 stp      x19, x9, [sp, #0xc0]
0002C4B4 480100b4 cbz      x8, #0x2c4dc
0002C4B8 e9030091 mov      x9, sp
0002C4BC 20810091 add      x0, x9, #0x20
0002C4C0 e9430291 add      x9, sp, #0x90
0002C4C4 21c10291 add      x1, x9, #0xb0
0002C4C8 00013fd6 blr      x8
0002C4CC e82740a9 ldp      x8, x9, [sp]
0002C4D0 c82600a9 stp      x8, x9, [x22]
0002C4D4 e82741a9 ldp      x8, x9, [sp, #0x10]
0002C4D8 c82601a9 stp      x8, x9, [x22, #0x10]
0002C4DC e1430291 add      x1, sp, #0x90
0002C4E0 e00313aa mov      x0, x19
0002C4E4 f7430291 add      x23, sp, #0x90
0002C4E8 67000094 bl       #0x2c684
0002C4EC e89740f9 ldr      x8, [sp, #0x128]
0002C4F0 a80000b4 cbz      x8, #0x2c504
0002C4F4 e0c20291 add      x0, x23, #0xb0
0002C4F8 df7e01a9 stp      xzr, xzr, [x22, #0x10]
0002C4FC df7e00a9 stp      xzr, xzr, [x22]
0002C500 00013fd6 blr      x8
0002C504 e85740f9 ldr      x8, [sp, #0xa8]
0002C508 e80000b4 cbz      x8, #0x2c524
0002C50C ea430291 add      x10, sp, #0x90
0002C510 a9420091 add      x9, x21, #0x10
0002C514 40c10091 add      x0, x10, #0x30
0002C518 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0002C51C 3f7d00a9 stp      xzr, xzr, [x9]
0002C520 00013fd6 blr      x8
0002C524 e80740f9 ldr      x8, [sp, #8]
0002C528 c80000b4 cbz      x8, #0x2c540
0002C52C e9030091 mov      x9, sp
0002C530 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
0002C534 20810091 add      x0, x9, #0x20
0002C538 ff7f00a9 stp      xzr, xzr, [sp]
0002C53C 00013fd6 blr      x8
0002C540 9f0200f1 cmp      x20, #0
0002C544 f44f5da9 ldp      x20, x19, [sp, #0x1d0]
0002C548 f6575ca9 ldp      x22, x21, [sp, #0x1c0]
0002C54C e0079f1a cset     w0, ne
0002C550 fc5f5ba9 ldp      x28, x23, [sp, #0x1b0]
0002C554 fd7b5aa9 ldp      x29, x30, [sp, #0x1a0]
0002C558 ff830791 add      sp, sp, #0x1e0
0002C55C c0035fd6 ret      
0002C560 78271794 bl       #0x5f6340
~~~
### 0x2c564 (72 slots)
~~~asm
0002C564 ff8305d1 sub      sp, sp, #0x160
0002C568 fd7b11a9 stp      x29, x30, [sp, #0x110]
0002C56C fc9300f9 str      x28, [sp, #0x120]
0002C570 f85f13a9 stp      x24, x23, [sp, #0x130]
0002C574 f65714a9 stp      x22, x21, [sp, #0x140]
0002C578 f44f15a9 stp      x20, x19, [sp, #0x150]
0002C57C fd430491 add      x29, sp, #0x110
0002C580 13e040f9 ldr      x19, [x0, #0x1c0]
0002C584 f7030091 mov      x23, sp
0002C588 ff0300f9 str      xzr, [sp]
0002C58C ff7f01a9 stp      xzr, xzr, [sp, #0x10]
0002C590 ff7f02a9 stp      xzr, xzr, [sp, #0x20]
0002C594 ff7f09a9 stp      xzr, xzr, [sp, #0x90]
0002C598 ff7f0aa9 stp      xzr, xzr, [sp, #0xa0]
0002C59C 330500b4 cbz      x19, #0x2c640
0002C5A0 f40300aa mov      x20, x0
0002C5A4 e00313aa mov      x0, x19
0002C5A8 f50302aa mov      x21, x2
0002C5AC f60301aa mov      x22, x1
0002C5B0 f8420291 add      x24, x23, #0x90
0002C5B4 f76d0a94 bl       #0x2c7d90
0002C5B8 1f2003d5 nop      
0002C5BC 28450110 adr      x8, #0x2ee60
0002C5C0 1f2003d5 nop      
0002C5C4 09450110 adr      x9, #0x2ee64
0002C5C8 e8a701a9 stp      x8, x9, [sp, #0x18]
0002C5CC 1f2003d5 nop      
0002C5D0 08440110 adr      x8, #0x2ee50
0002C5D4 c90240f9 ldr      x9, [x22]
0002C5D8 e80b00f9 str      x8, [sp, #0x10]
0002C5DC a80a40f9 ldr      x8, [x21, #0x10]
0002C5E0 1f2003d5 nop      
0002C5E4 6a440110 adr      x10, #0x2ee70
0002C5E8 ea1700f9 str      x10, [sp, #0x28]
0002C5EC e90300f9 str      x9, [sp]
0002C5F0 f42703a9 stp      x20, x9, [sp, #0x30]
0002C5F4 280100b4 cbz      x8, #0x2c618
0002C5F8 e9030091 mov      x9, sp
0002C5FC a0820091 add      x0, x21, #0x20
0002C600 21c10291 add      x1, x9, #0xb0
0002C604 00013fd6 blr      x8
0002C608 a82640a9 ldp      x8, x9, [x21]
0002C60C 082700a9 stp      x8, x9, [x24]
0002C610 a82641a9 ldp      x8, x9, [x21, #0x10]
0002C614 082701a9 stp      x8, x9, [x24, #0x10]
0002C618 e1030091 mov      x1, sp
0002C61C e00314aa mov      x0, x20
0002C620 f5030091 mov      x21, sp
0002C624 18000094 bl       #0x2c684
0002C628 e84f40f9 ldr      x8, [sp, #0x98]
0002C62C a80000b4 cbz      x8, #0x2c640
0002C630 a0c20291 add      x0, x21, #0xb0
0002C634 1f7f01a9 stp      xzr, xzr, [x24, #0x10]
0002C638 1f7f00a9 stp      xzr, xzr, [x24]
0002C63C 00013fd6 blr      x8
0002C640 e80f40f9 ldr      x8, [sp, #0x18]
0002C644 e80000b4 cbz      x8, #0x2c660
0002C648 ea030091 mov      x10, sp
0002C64C e9420091 add      x9, x23, #0x10
0002C650 40c10091 add      x0, x10, #0x30
0002C654 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0002C658 3f7d00a9 stp      xzr, xzr, [x9]
0002C65C 00013fd6 blr      x8
0002C660 7f0200f1 cmp      x19, #0
0002C664 f44f55a9 ldp      x20, x19, [sp, #0x150]
0002C668 f65754a9 ldp      x22, x21, [sp, #0x140]
0002C66C e0079f1a cset     w0, ne
0002C670 f85f53a9 ldp      x24, x23, [sp, #0x130]
0002C674 fc9340f9 ldr      x28, [sp, #0x120]
0002C678 fd7b51a9 ldp      x29, x30, [sp, #0x110]
0002C67C ff830591 add      sp, sp, #0x160
0002C680 c0035fd6 ret      
~~~
### 0x2c684 (100 slots)
~~~asm
0002C684 ff4301d1 sub      sp, sp, #0x50
0002C688 fd7b01a9 stp      x29, x30, [sp, #0x10]
0002C68C f85f02a9 stp      x24, x23, [sp, #0x20]
0002C690 f65703a9 stp      x22, x21, [sp, #0x30]
0002C694 f44f04a9 stp      x20, x19, [sp, #0x40]
0002C698 fd430091 add      x29, sp, #0x10
0002C69C 08e05339 ldrb     w8, [x0, #0x4f8]
0002C6A0 09601391 add      x9, x0, #0x4d8
0002C6A4 0ae01291 add      x10, x0, #0x4b8
0002C6A8 1f010071 cmp      w8, #0
0002C6AC 4801899a csel     x8, x10, x9, eq
0002C6B0 140140f9 ldr      x20, [x8]
0002C6B4 954640f9 ldr      x21, [x20, #0x88]
0002C6B8 bf4200f1 cmp      x21, #0x10
0002C6BC a20a0054 b.hs     #0x2c810
0002C6C0 974240f9 ldr      x23, [x20, #0x80]
0002C6C4 08228052 mov      w8, #0x110
0002C6C8 f30301aa mov      x19, x1
0002C6CC 80020191 add      x0, x20, #0x40
0002C6D0 a15e089b madd     x1, x21, x8, x23
0002C6D4 884a40f9 ldr      x8, [x20, #0x90]
0002C6D8 bf0208eb cmp      x21, x8
0002C6DC 40080054 b.eq     #0x2c7e4
0002C6E0 48d03bd5 mrs      x8, tpidr_el0
0002C6E4 16c97392 and      x22, x8, #0xffffffffffffe000
0002C6E8 c84e40f9 ldr      x8, [x22, #0x98]
0002C6EC 1f4100f1 cmp      x8, #0x10
0002C6F0 e0080054 b.eq     #0x2c80c
0002C6F4 090040f9 ldr      x9, [x0]
0002C6F8 c80e088b add      x8, x22, x8, lsl #3
0002C6FC 090d00f9 str      x9, [x8, #0x18]
0002C700 09228052 mov      w9, #0x110
0002C704 c84e40f9 ldr      x8, [x22, #0x98]
0002C708 b85e099b madd     x24, x21, x9, x23
0002C70C 08050091 add      x8, x8, #1
0002C710 c84e00f9 str      x8, [x22, #0x98]
0002C714 680240f9 ldr      x8, [x19]
0002C718 1f0f01f8 str      xzr, [x24, #0x10]!
0002C71C 1fff00a9 stp      xzr, xzr, [x24, #8]
0002C720 1f0f00f9 str      xzr, [x24, #0x18]
0002C724 280000f9 str      x8, [x1]
0002C728 681240f9 ldr      x8, [x19, #0x20]
0002C72C c80100b4 cbz      x8, #0x2c764
0002C730 09228052 mov      w9, #0x110
0002C734 60c20091 add      x0, x19, #0x30
0002C738 a95e099b madd     x9, x21, x9, x23
0002C73C 21c10091 add      x1, x9, #0x30
0002C740 00013fd6 blr      x8
0002C744 681640f9 ldr      x8, [x19, #0x28]
0002C748 690e40f9 ldr      x9, [x19, #0x18]
0002C74C 090700f9 str      x9, [x24, #8]
0002C750 080f00f9 str      x8, [x24, #0x18]
0002C754 680a40f9 ldr      x8, [x19, #0x10]
0002C758 691240f9 ldr      x9, [x19, #0x20]
0002C75C 090b00f9 str      x9, [x24, #0x10]
0002C760 080300f9 str      x8, [x24]
0002C764 08228052 mov      w8, #0x110
0002C768 b85e089b madd     x24, x21, x8, x23
0002C76C 1f0f09f8 str      xzr, [x24, #0x90]!
0002C770 1f7f01a9 stp      xzr, xzr, [x24, #0x10]
0002C774 1f0700f9 str      xzr, [x24, #8]
0002C778 685240f9 ldr      x8, [x19, #0xa0]
0002C77C c80100b4 cbz      x8, #0x2c7b4
0002C780 09228052 mov      w9, #0x110
0002C784 60c20291 add      x0, x19, #0xb0
0002C788 a95e099b madd     x9, x21, x9, x23
0002C78C 21c10291 add      x1, x9, #0xb0
0002C790 00013fd6 blr      x8
0002C794 685640f9 ldr      x8, [x19, #0xa8]
0002C798 694e40f9 ldr      x9, [x19, #0x98]
0002C79C 090700f9 str      x9, [x24, #8]
0002C7A0 080f00f9 str      x8, [x24, #0x18]
0002C7A4 684a40f9 ldr      x8, [x19, #0x90]
0002C7A8 695240f9 ldr      x9, [x19, #0xa0]
0002C7AC 090b00f9 str      x9, [x24, #0x10]
0002C7B0 080300f9 str      x8, [x24]
0002C7B4 c84e40f9 ldr      x8, [x22, #0x98]
0002C7B8 080500d1 sub      x8, x8, #1
0002C7BC c84e00f9 str      x8, [x22, #0x98]
0002C7C0 884640f9 ldr      x8, [x20, #0x88]
0002C7C4 08050091 add      x8, x8, #1
0002C7C8 884600f9 str      x8, [x20, #0x88]
0002C7CC f44f44a9 ldp      x20, x19, [sp, #0x40]
0002C7D0 f65743a9 ldp      x22, x21, [sp, #0x30]
0002C7D4 f85f42a9 ldp      x24, x23, [sp, #0x20]
0002C7D8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0002C7DC ff430191 add      sp, sp, #0x50
0002C7E0 c0035fd6 ret      
0002C7E4 e8230091 add      x8, sp, #8
0002C7E8 22008052 mov      w2, #1
0002C7EC e30313aa mov      x3, x19
0002C7F0 000c0094 bl       #0x2f7f0
0002C7F4 f44f44a9 ldp      x20, x19, [sp, #0x40]
0002C7F8 f65743a9 ldp      x22, x21, [sp, #0x30]
0002C7FC f85f42a9 ldp      x24, x23, [sp, #0x20]
0002C800 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0002C804 ff430191 add      sp, sp, #0x50
0002C808 c0035fd6 ret      
0002C80C 0159ff97 bl       #0x2c10
0002C810 cc261794 bl       #0x5f6340
~~~
### 0x2c9f8 (4 slots)
~~~asm
0002C9F8 00e841f9 ldr      x0, [x0, #0x3d0]
0002C9FC 400000b4 cbz      x0, #0x2ca04
0002CA00 374f0a14 b        #0x2c06dc
0002CA04 c0035fd6 ret      
~~~
### 0x2d020 (161 slots)
~~~asm
0002D020 ff8301d1 sub      sp, sp, #0x60
0002D024 fd7b01a9 stp      x29, x30, [sp, #0x10]
0002D028 f91300f9 str      x25, [sp, #0x20]
0002D02C f85f03a9 stp      x24, x23, [sp, #0x30]
0002D030 f65704a9 stp      x22, x21, [sp, #0x40]
0002D034 f44f05a9 stp      x20, x19, [sp, #0x50]
0002D038 fd430091 add      x29, sp, #0x10
0002D03C 28008052 mov      w8, #1
0002D040 09228052 mov      w9, #0x110
0002D044 08e01339 strb     w8, [x0, #0x4f8]
0002D048 085c42f9 ldr      x8, [x0, #0x4b8]
0002D04C f30300aa mov      x19, x0
0002D050 162148a9 ldp      x22, x8, [x8, #0x80]
0002D054 1759099b madd     x23, x8, x9, x22
0002D058 280200b4 cbz      x8, #0x2d09c
0002D05C 0811088b add      x8, x8, x8, lsl #4
0002D060 14ed7cd3 lsl      x20, x8, #4
0002D064 06000014 b        #0x2d07c
0002D068 1f2003d5 nop      
0002D06C 1f2003d5 nop      
0002D070 d6420491 add      x22, x22, #0x110
0002D074 944204f1 subs     x20, x20, #0x110
0002D078 800a0054 b.eq     #0x2d1c8
0002D07C c80a40f9 ldr      x8, [x22, #0x10]
0002D080 c0c20091 add      x0, x22, #0x30
0002D084 00013fd6 blr      x8
0002D088 40ff0736 tbz      w0, #0, #0x2d070
0002D08C c84a40f9 ldr      x8, [x22, #0x90]
0002D090 c0c20291 add      x0, x22, #0xb0
0002D094 00013fd6 blr      x8
0002D098 c0fe0736 tbz      w0, #0, #0x2d070
0002D09C c8420491 add      x8, x22, #0x110
0002D0A0 df0217eb cmp      x22, x23
0002D0A4 041157fa ccmp     x8, x23, #4, ne
0002D0A8 20090054 b.eq     #0x2d1cc
0002D0AC d4020791 add      x20, x22, #0x1c0
0002D0B0 06000014 b        #0x2d0c8
0002D0B4 d6420491 add      x22, x22, #0x110
0002D0B8 88820191 add      x8, x20, #0x60
0002D0BC 94420491 add      x20, x20, #0x110
0002D0C0 1f0117eb cmp      x8, x23
0002D0C4 40080054 b.eq     #0x2d1cc
0002D0C8 f80314aa mov      x24, x20
0002D0CC 080f56f8 ldr      x8, [x24, #-0xa0]!
0002D0D0 15830091 add      x21, x24, #0x20
0002D0D4 e00315aa mov      x0, x21
0002D0D8 00013fd6 blr      x8
0002D0DC a0000036 tbz      w0, #0, #0x2d0f0
0002D0E0 88025ef8 ldur     x8, [x20, #-0x20]
0002D0E4 e00314aa mov      x0, x20
0002D0E8 00013fd6 blr      x8
0002D0EC 60fe0737 tbnz     w0, #0, #0x2d0b8
0002D0F0 880255f8 ldur     x8, [x20, #-0xb0]
0002D0F4 d9420091 add      x25, x22, #0x10
0002D0F8 c80200f9 str      x8, [x22]
0002D0FC c80e40f9 ldr      x8, [x22, #0x18]
0002D100 a80000b4 cbz      x8, #0x2d114
0002D104 c0c20091 add      x0, x22, #0x30
0002D108 3f7f01a9 stp      xzr, xzr, [x25, #0x10]
0002D10C 3f7f00a9 stp      xzr, xzr, [x25]
0002D110 00013fd6 blr      x8
0002D114 888257f8 ldur     x8, [x20, #-0x88]
0002D118 280200b4 cbz      x8, #0x2d15c
0002D11C c1c20091 add      x1, x22, #0x30
0002D120 e00315aa mov      x0, x21
0002D124 00013fd6 blr      x8
0002D128 090f40f9 ldr      x9, [x24, #0x18]
0002D12C 080740f9 ldr      x8, [x24, #8]
0002D130 290f00f9 str      x9, [x25, #0x18]
0002D134 090340f9 ldr      x9, [x24]
0002D138 0a0b40f9 ldr      x10, [x24, #0x10]
0002D13C 290300f9 str      x9, [x25]
0002D140 28ab00a9 stp      x8, x10, [x25, #8]
0002D144 888256f8 ldur     x8, [x20, #-0x98]
0002D148 a80000b4 cbz      x8, #0x2d15c
0002D14C e00315aa mov      x0, x21
0002D150 1f7f01a9 stp      xzr, xzr, [x24, #0x10]
0002D154 1f7f00a9 stp      xzr, xzr, [x24]
0002D158 00013fd6 blr      x8
0002D15C c84e40f9 ldr      x8, [x22, #0x98]
0002D160 d5420291 add      x21, x22, #0x90
0002D164 a80000b4 cbz      x8, #0x2d178
0002D168 c0c20291 add      x0, x22, #0xb0
0002D16C bf7e01a9 stp      xzr, xzr, [x21, #0x10]
0002D170 bf7e00a9 stp      xzr, xzr, [x21]
0002D174 00013fd6 blr      x8
0002D178 88825ff8 ldur     x8, [x20, #-8]
0002D17C c8f9ffb4 cbz      x8, #0x2d0b4
0002D180 c1c20291 add      x1, x22, #0xb0
0002D184 e00314aa mov      x0, x20
0002D188 988200d1 sub      x24, x20, #0x20
0002D18C 00013fd6 blr      x8
0002D190 090f40f9 ldr      x9, [x24, #0x18]
0002D194 080740f9 ldr      x8, [x24, #8]
0002D198 a90e00f9 str      x9, [x21, #0x18]
0002D19C 090340f9 ldr      x9, [x24]
0002D1A0 0a0b40f9 ldr      x10, [x24, #0x10]
0002D1A4 a90200f9 str      x9, [x21]
0002D1A8 a8aa00a9 stp      x8, x10, [x21, #8]
0002D1AC 88825ef8 ldur     x8, [x20, #-0x18]
0002D1B0 28f8ffb4 cbz      x8, #0x2d0b4
0002D1B4 e00314aa mov      x0, x20
0002D1B8 1f7f01a9 stp      xzr, xzr, [x24, #0x10]
0002D1BC 1f7f00a9 stp      xzr, xzr, [x24]
0002D1C0 00013fd6 blr      x8
0002D1C4 bcffff17 b        #0x2d0b4
0002D1C8 f60317aa mov      x22, x23
0002D1CC 685e42f9 ldr      x8, [x19, #0x4b8]
0002D1D0 0a228052 mov      w10, #0x110
0002D1D4 a1630091 add      x1, x29, #0x18
0002D1D8 e2230091 add      x2, sp, #8
0002D1DC b60f00f9 str      x22, [x29, #0x18]
0002D1E0 00010191 add      x0, x8, #0x40
0002D1E4 092148a9 ldp      x9, x8, [x8, #0x80]
0002D1E8 08250a9b madd     x8, x8, x10, x9
0002D1EC e80700f9 str      x8, [sp, #8]
0002D1F0 e8030091 mov      x8, sp
0002D1F4 2f000094 bl       #0x2d2b0
0002D1F8 746e42f9 ldr      x20, [x19, #0x4d8]
0002D1FC 7fe21339 strb     wzr, [x19, #0x4f8]
0002D200 884640f9 ldr      x8, [x20, #0x88]
0002D204 080400b4 cbz      x8, #0x2d284
0002D208 944240f9 ldr      x20, [x20, #0x80]
0002D20C 0811088b add      x8, x8, x8, lsl #4
0002D210 15ed7cd3 lsl      x21, x8, #4
0002D214 e00313aa mov      x0, x19
0002D218 e10314aa mov      x1, x20
0002D21C 1afdff97 bl       #0x2c684
0002D220 94420491 add      x20, x20, #0x110
0002D224 b54204f1 subs     x21, x21, #0x110
0002D228 61ffff54 b.ne     #0x2d214
0002D22C 746e42f9 ldr      x20, [x19, #0x4d8]
0002D230 954640f9 ldr      x21, [x20, #0x88]
0002D234 950200b4 cbz      x21, #0x2d284
0002D238 884240f9 ldr      x8, [x20, #0x80]
0002D23C 13c10291 add      x19, x8, #0xb0
0002D240 04000014 b        #0x2d250
0002D244 b50600d1 sub      x21, x21, #1
0002D248 73420491 add      x19, x19, #0x110
0002D24C d50100b4 cbz      x21, #0x2d284
0002D250 68825ef8 ldur     x8, [x19, #-0x18]
0002D254 a80000b4 cbz      x8, #0x2d268
0002D258 e00313aa mov      x0, x19
0002D25C 7f7e3fa9 stp      xzr, xzr, [x19, #-0x10]
0002D260 7f7e3ea9 stp      xzr, xzr, [x19, #-0x20]
0002D264 00013fd6 blr      x8
0002D268 688256f8 ldur     x8, [x19, #-0x98]
0002D26C c8feffb4 cbz      x8, #0x2d244
0002D270 600202d1 sub      x0, x19, #0x80
0002D274 7f7e37a9 stp      xzr, xzr, [x19, #-0x90]
0002D278 7f7e36a9 stp      xzr, xzr, [x19, #-0xa0]
0002D27C 00013fd6 blr      x8
0002D280 f1ffff17 b        #0x2d244
0002D284 9f4600f9 str      xzr, [x20, #0x88]
0002D288 f44f45a9 ldp      x20, x19, [sp, #0x50]
0002D28C f65744a9 ldp      x22, x21, [sp, #0x40]
0002D290 f91340f9 ldr      x25, [sp, #0x20]
0002D294 f85f43a9 ldp      x24, x23, [sp, #0x30]
0002D298 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0002D29C ff830191 add      sp, sp, #0x60
0002D2A0 c0035fd6 ret      
~~~
### 0x2f7f0 (100 slots)
~~~asm
0002F7F0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0002F7F4 fc6f01a9 stp      x28, x27, [sp, #0x10]
0002F7F8 fa6702a9 stp      x26, x25, [sp, #0x20]
0002F7FC f85f03a9 stp      x24, x23, [sp, #0x30]
0002F800 f65704a9 stp      x22, x21, [sp, #0x40]
0002F804 f44f05a9 stp      x20, x19, [sp, #0x50]
0002F808 fd030091 mov      x29, sp
0002F80C 09a844a9 ldp      x9, x10, [x0, #0x48]
0002F810 f30308aa mov      x19, x8
0002F814 080440f9 ldr      x8, [x0, #8]
0002F818 4c000acb sub      x12, x2, x10
0002F81C 0b010acb sub      x11, x8, x10
0002F820 8c01098b add      x12, x12, x9
0002F824 7f010ceb cmp      x11, x12
0002F828 a30a0054 b.lo     #0x2f97c
0002F82C 4bfd7dd3 lsr      x11, x10, #0x3d
0002F830 ede702b2 mov      x13, #-0x3333333333333334
0002F834 4af17dd3 lsl      x10, x10, #3
0002F838 7f1100f1 cmp      x11, #4
0002F83C ad9999f2 movk     x13, #0xcccd
0002F840 2901028b add      x9, x9, x2
0002F844 4c919fda csinv    x12, x10, xzr, ls
0002F848 4a7dcd9b umulh    x10, x10, x13
0002F84C 7f0100f1 cmp      x11, #0
0002F850 f50302aa mov      x21, x2
0002F854 4afd42d3 lsr      x10, x10, #2
0002F858 8a118a9a csel     x10, x12, x10, ne
0002F85C 5f0108eb cmp      x10, x8
0002F860 4a31889a csel     x10, x10, x8, lo
0002F864 3f010aeb cmp      x9, x10
0002F868 3a818a9a csel     x26, x9, x10, hi
0002F86C 1f011aeb cmp      x8, x26
0002F870 63080054 b.lo     #0x2f97c
0002F874 f40300aa mov      x20, x0
0002F878 1b2040f9 ldr      x27, [x0, #0x40]
0002F87C 48131a8b add      x8, x26, x26, lsl #4
0002F880 000040f9 ldr      x0, [x0]
0002F884 f60301aa mov      x22, x1
0002F888 02028052 mov      w2, #0x10
0002F88C 01ed7cd3 lsl      x1, x8, #4
0002F890 f80303aa mov      x24, x3
0002F894 080040f9 ldr      x8, [x0]
0002F898 080940f9 ldr      x8, [x8, #0x10]
0002F89C 00013fd6 blr      x8
0002F8A0 992244a9 ldp      x25, x8, [x20, #0x40]
0002F8A4 09228052 mov      w9, #0x110
0002F8A8 f70300aa mov      x23, x0
0002F8AC e00314aa mov      x0, x20
0002F8B0 e20316aa mov      x2, x22
0002F8B4 e40317aa mov      x4, x23
0002F8B8 e50315aa mov      x5, x21
0002F8BC 0365099b madd     x3, x8, x9, x25
0002F8C0 e10319aa mov      x1, x25
0002F8C4 e60318aa mov      x6, x24
0002F8C8 2e000094 bl       #0x2f980
0002F8CC d90300b4 cbz      x25, #0x2f944
0002F8D0 9c2640f9 ldr      x28, [x20, #0x48]
0002F8D4 7c0200b4 cbz      x28, #0x2f920
0002F8D8 38c30291 add      x24, x25, #0xb0
0002F8DC 04000014 b        #0x2f8ec
0002F8E0 9c0700d1 sub      x28, x28, #1
0002F8E4 18430491 add      x24, x24, #0x110
0002F8E8 dc0100b4 cbz      x28, #0x2f920
0002F8EC 08835ef8 ldur     x8, [x24, #-0x18]
0002F8F0 a80000b4 cbz      x8, #0x2f904
0002F8F4 e00318aa mov      x0, x24
0002F8F8 1f7f3fa9 stp      xzr, xzr, [x24, #-0x10]
0002F8FC 1f7f3ea9 stp      xzr, xzr, [x24, #-0x20]
0002F900 00013fd6 blr      x8
0002F904 088356f8 ldur     x8, [x24, #-0x98]
0002F908 c8feffb4 cbz      x8, #0x2f8e0
0002F90C 000302d1 sub      x0, x24, #0x80
0002F910 1f7f37a9 stp      xzr, xzr, [x24, #-0x90]
0002F914 1f7f36a9 stp      xzr, xzr, [x24, #-0xa0]
0002F918 00013fd6 blr      x8
0002F91C f1ffff17 b        #0x2f8e0
0002F920 882a40f9 ldr      x8, [x20, #0x50]
0002F924 03028052 mov      w3, #0x10
0002F928 0811088b add      x8, x8, x8, lsl #4
0002F92C 800240f9 ldr      x0, [x20]
0002F930 812240f9 ldr      x1, [x20, #0x40]
0002F934 02ed7cd3 lsl      x2, x8, #4
0002F938 080040f9 ldr      x8, [x0]
0002F93C 080d40f9 ldr      x8, [x8, #0x18]
0002F940 00013fd6 blr      x8
0002F944 882640f9 ldr      x8, [x20, #0x48]
0002F948 c9021bcb sub      x9, x22, x27
0002F94C 9a2a00f9 str      x26, [x20, #0x50]
0002F950 fa6742a9 ldp      x26, x25, [sp, #0x20]
0002F954 0801158b add      x8, x8, x21
0002F958 f65744a9 ldp      x22, x21, [sp, #0x40]
0002F95C fc6f41a9 ldp      x28, x27, [sp, #0x10]
0002F960 972204a9 stp      x23, x8, [x20, #0x40]
0002F964 e802098b add      x8, x23, x9
0002F968 f85f43a9 ldp      x24, x23, [sp, #0x30]
0002F96C 680200f9 str      x8, [x19]
0002F970 f44f45a9 ldp      x20, x19, [sp, #0x50]
0002F974 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0002F978 c0035fd6 ret      
0002F97C 1d1a1794 bl       #0x5f61f0
~~~
### 0x35c44 (179 slots)
~~~asm
00035C44 3f0c0071 cmp      w1, #3
00035C48 28160054 b.hi     #0x35f0c
00035C4C fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00035C50 fc0b00f9 str      x28, [sp, #0x10]
00035C54 fd030091 mov      x29, sp
00035C58 f65702a9 stp      x22, x21, [sp, #0x20]
00035C5C f44f03a9 stp      x20, x19, [sp, #0x30]
00035C60 ff8308d1 sub      sp, sp, #0x220
00035C64 e803012a mov      w8, w1
00035C68 692f0090 adrp     x9, #0x621000
00035C6C 29412791 add      x9, x9, #0x9d0
00035C70 ea000010 adr      x10, #0x35c8c
00035C74 2b696838 ldrb     w11, [x9, x8]
00035C78 4a090b8b add      x10, x10, x11, lsl #2
00035C7C f303012a mov      w19, w1
00035C80 f40300aa mov      x20, x0
00035C84 15400491 add      x21, x0, #0x110
00035C88 40011fd6 br       x10
00035C8C 88024439 ldrb     w8, [x20, #0x100]
00035C90 88010034 cbz      w8, #0x35cc0
00035C94 a0390090 adrp     x0, #0x769000
00035C98 00802591 add      x0, x0, #0x960
00035C9C a88300d1 sub      x8, x29, #0x20
00035CA0 77cd1294 bl       #0x4e927c
00035CA4 a08300d1 sub      x0, x29, #0x20
00035CA8 69300a94 bl       #0x2c1e4c
00035CAC a0835ff8 ldur     x0, [x29, #-8]
00035CB0 800000b4 cbz      x0, #0x35cc0
00035CB4 088c44f8 ldr      x8, [x0, #0x48]!
00035CB8 080d40f9 ldr      x8, [x8, #0x18]
00035CBC 00013fd6 blr      x8
00035CC0 88019dd2 mov      x8, #0xe80c
00035CC4 a86bbdf2 movk     x8, #0xeb5d, lsl #16
00035CC8 bf8318b8 stur     wzr, [x29, #-0x78]
00035CCC 28ddc8f2 movk     x8, #0x46e9, lsl #32
00035CD0 c8b4faf2 movk     x8, #0xd5a6, lsl #48
00035CD4 a8031ef8 stur     x8, [x29, #-0x20]
00035CD8 1f2003d5 nop      
00035CDC 491c0010 adr      x9, #0x36064
00035CE0 1f2003d5 nop      
00035CE4 681d0010 adr      x8, #0x36090
00035CE8 a92336a9 stp      x9, x8, [x29, #-0xa0]
00035CEC 1f2003d5 nop      
00035CF0 2a1d0010 adr      x10, #0x36094
00035CF4 aa0317f8 stur     x10, [x29, #-0x90]
00035CF8 1f2003d5 nop      
00035CFC 281d0010 adr      x8, #0x360a0
00035D00 a18300d1 sub      x1, x29, #0x20
00035D04 a28302d1 sub      x2, x29, #0xa0
00035D08 a8d337a9 stp      x8, x20, [x29, #-0x88]
00035D0C e00315aa mov      x0, x21
00035D10 b68302d1 sub      x22, x29, #0xa0
00035D14 14daff97 bl       #0x2c564
00035D18 a88356f8 ldur     x8, [x29, #-0x98]
00035D1C a80000b4 cbz      x8, #0x35d30
00035D20 c0820091 add      x0, x22, #0x20
00035D24 bf7f37a9 stp      xzr, xzr, [x29, #-0x90]
00035D28 bf7f36a9 stp      xzr, xzr, [x29, #-0xa0]
00035D2C 00013fd6 blr      x8
00035D30 282081d2 mov      x8, #0x901
00035D34 e848b8f2 movk     x8, #0xc247, lsl #16
00035D38 a18300d1 sub      x1, x29, #0x20
00035D3C 68a2caf2 movk     x8, #0x5513, lsl #32
00035D40 e871e7f2 movk     x8, #0x3b8f, lsl #48
00035D44 a8031ef8 stur     x8, [x29, #-0x20]
00035D48 e00315aa mov      x0, x21
00035D4C 8bd9ff97 bl       #0x2c378
00035D50 65000014 b        #0x35ee4
00035D54 88064439 ldrb     w8, [x20, #0x101]
00035D58 88010034 cbz      w8, #0x35d88
00035D5C a0390090 adrp     x0, #0x769000
00035D60 00e02591 add      x0, x0, #0x978
00035D64 a88300d1 sub      x8, x29, #0x20
00035D68 45cd1294 bl       #0x4e927c
00035D6C a08300d1 sub      x0, x29, #0x20
00035D70 37300a94 bl       #0x2c1e4c
00035D74 a0835ff8 ldur     x0, [x29, #-8]
00035D78 800000b4 cbz      x0, #0x35d88
00035D7C 088c44f8 ldr      x8, [x0, #0x48]!
00035D80 080d40f9 ldr      x8, [x8, #0x18]
00035D84 00013fd6 blr      x8
00035D88 28279ad2 mov      x8, #0xd139
00035D8C 2834baf2 movk     x8, #0xd1a1, lsl #16
00035D90 29008052 mov      w9, #1
00035D94 48efdef2 movk     x8, #0xf77a, lsl #32
00035D98 a836e6f2 movk     x8, #0x31b5, lsl #48
00035D9C e92b01b9 str      w9, [sp, #0x128]
00035DA0 a8031ef8 stur     x8, [x29, #-0x20]
00035DA4 1f2003d5 nop      
00035DA8 28180010 adr      x8, #0x360ac
00035DAC 1f2003d5 nop      
00035DB0 49190010 adr      x9, #0x360d8
00035DB4 1f2003d5 nop      
00035DB8 2a190010 adr      x10, #0x360dc
00035DBC e82710a9 stp      x8, x9, [sp, #0x100]
00035DC0 1f2003d5 nop      
00035DC4 28190010 adr      x8, #0x360e8
00035DC8 ea8b00f9 str      x10, [sp, #0x110]
00035DCC a18300d1 sub      x1, x29, #0x20
00035DD0 e8d311a9 stp      x8, x20, [sp, #0x118]
00035DD4 e2030491 add      x2, sp, #0x100
00035DD8 e00315aa mov      x0, x21
00035DDC f6030491 add      x22, sp, #0x100
00035DE0 e1d9ff97 bl       #0x2c564
00035DE4 e88740f9 ldr      x8, [sp, #0x108]
00035DE8 e80700b4 cbz      x8, #0x35ee4
00035DEC c0820091 add      x0, x22, #0x20
00035DF0 ff7f11a9 stp      xzr, xzr, [sp, #0x110]
00035DF4 ff7f10a9 stp      xzr, xzr, [sp, #0x100]
00035DF8 3a000014 b        #0x35ee0
00035DFC e8d181d2 mov      x8, #0xe8f
00035E00 c8acbef2 movk     x8, #0xf566, lsl #16
00035E04 49008052 mov      w9, #2
00035E08 c8d0d2f2 movk     x8, #0x9686, lsl #32
00035E0C 081de1f2 movk     x8, #0x8e8, lsl #48
00035E10 e9ab00b9 str      w9, [sp, #0xa8]
00035E14 a8031ef8 stur     x8, [x29, #-0x20]
00035E18 1f2003d5 nop      
00035E1C c8160010 adr      x8, #0x360f4
00035E20 1f2003d5 nop      
00035E24 e9170010 adr      x9, #0x36120
00035E28 1f2003d5 nop      
00035E2C ca170010 adr      x10, #0x36124
00035E30 e82708a9 stp      x8, x9, [sp, #0x80]
00035E34 1f2003d5 nop      
00035E38 c8170010 adr      x8, #0x36130
00035E3C ea4b00f9 str      x10, [sp, #0x90]
00035E40 a18300d1 sub      x1, x29, #0x20
00035E44 e8d309a9 stp      x8, x20, [sp, #0x98]
00035E48 e2030291 add      x2, sp, #0x80
00035E4C e00315aa mov      x0, x21
00035E50 f6030291 add      x22, sp, #0x80
00035E54 c4d9ff97 bl       #0x2c564
00035E58 e84740f9 ldr      x8, [sp, #0x88]
00035E5C 480400b4 cbz      x8, #0x35ee4
00035E60 c0820091 add      x0, x22, #0x20
00035E64 ff7f09a9 stp      xzr, xzr, [sp, #0x90]
00035E68 ff7f08a9 stp      xzr, xzr, [sp, #0x80]
00035E6C 1d000014 b        #0x35ee0
00035E70 88c29bd2 mov      x8, #0xde14
00035E74 886fa3f2 movk     x8, #0x1b7c, lsl #16
00035E78 69008052 mov      w9, #3
00035E7C 684ad6f2 movk     x8, #0xb253, lsl #32
00035E80 68e5f7f2 movk     x8, #0xbf2b, lsl #48
00035E84 e92b00b9 str      w9, [sp, #0x28]
00035E88 a8031ef8 stur     x8, [x29, #-0x20]
00035E8C 1f2003d5 nop      
00035E90 68150010 adr      x8, #0x3613c
00035E94 1f2003d5 nop      
00035E98 89160010 adr      x9, #0x36168
00035E9C 1f2003d5 nop      
00035EA0 6a160010 adr      x10, #0x3616c
00035EA4 e82700a9 stp      x8, x9, [sp]
00035EA8 1f2003d5 nop      
00035EAC 68160010 adr      x8, #0x36178
00035EB0 ea0b00f9 str      x10, [sp, #0x10]
00035EB4 a18300d1 sub      x1, x29, #0x20
00035EB8 e8d301a9 stp      x8, x20, [sp, #0x18]
00035EBC e2030091 mov      x2, sp
00035EC0 e00315aa mov      x0, x21
00035EC4 f6030091 mov      x22, sp
00035EC8 a7d9ff97 bl       #0x2c564
00035ECC e80740f9 ldr      x8, [sp, #8]
00035ED0 a80000b4 cbz      x8, #0x35ee4
00035ED4 c0820091 add      x0, x22, #0x20
00035ED8 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00035EDC ff7f00a9 stp      xzr, xzr, [sp]
00035EE0 00013fd6 blr      x8
00035EE4 880240f9 ldr      x8, [x20]
00035EE8 e00314aa mov      x0, x20
00035EEC e103132a mov      w1, w19
00035EF0 082d40f9 ldr      x8, [x8, #0x58]
00035EF4 00013fd6 blr      x8
00035EF8 ff830891 add      sp, sp, #0x220
00035EFC f44f43a9 ldp      x20, x19, [sp, #0x30]
00035F00 fc0b40f9 ldr      x28, [sp, #0x10]
00035F04 f65742a9 ldp      x22, x21, [sp, #0x20]
00035F08 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00035F0C c0035fd6 ret      
~~~
### 0x36064 (11 slots)
~~~asm
00036064 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
00036068 fd030091 mov      x29, sp
0003606C 080040f9 ldr      x8, [x0]
00036070 010840b9 ldr      w1, [x0, #8]
00036074 e00308aa mov      x0, x8
00036078 090140f9 ldr      x9, [x8]
0003607C 293140f9 ldr      x9, [x9, #0x60]
00036080 20013fd6 blr      x9
00036084 20008052 mov      w0, #1
00036088 fd7bc1a8 ldp      x29, x30, [sp], #0x10
0003608C c0035fd6 ret      
~~~
### 0x897a0 (1940 slots)
~~~asm
000897A0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
000897A4 fc6f01a9 stp      x28, x27, [sp, #0x10]
000897A8 fd030091 mov      x29, sp
000897AC fa6702a9 stp      x26, x25, [sp, #0x20]
000897B0 f85f03a9 stp      x24, x23, [sp, #0x30]
000897B4 f65704a9 stp      x22, x21, [sp, #0x40]
000897B8 f44f05a9 stp      x20, x19, [sp, #0x50]
000897BC ff4308d1 sub      sp, sp, #0x210
000897C0 a83800f0 adrp     x8, #0x7a0000
000897C4 f70300aa mov      x23, x0
000897C8 088942f9 ldr      x8, [x8, #0x510]
000897CC 006446f9 ldr      x0, [x0, #0xcc8]
000897D0 080140f9 ldr      x8, [x8]
000897D4 191540f9 ldr      x25, [x8, #0x28]
000897D8 aa1d0994 bl       #0x2d0e80
000897DC e06a46f9 ldr      x0, [x23, #0xcd0]
000897E0 a81d0994 bl       #0x2d0e80
000897E4 e06e46f9 ldr      x0, [x23, #0xcd8]
000897E8 a61d0994 bl       #0x2d0e80
000897EC e07246f9 ldr      x0, [x23, #0xce0]
000897F0 a41d0994 bl       #0x2d0e80
000897F4 e07646f9 ldr      x0, [x23, #0xce8]
000897F8 a21d0994 bl       #0x2d0e80
000897FC e07a46f9 ldr      x0, [x23, #0xcf0]
00089800 56290994 bl       #0x2d3d58
00089804 e07e46f9 ldr      x0, [x23, #0xcf8]
00089808 ebf30894 bl       #0x2c67b4
0008980C e08246f9 ldr      x0, [x23, #0xd00]
00089810 9c1d0994 bl       #0x2d0e80
00089814 e0a641f9 ldr      x0, [x23, #0x348]
00089818 080040f9 ldr      x8, [x0]
0008981C 090940f9 ldr      x9, [x8, #0x10]
00089820 a84302d1 sub      x8, x29, #0x90
00089824 20013fd6 blr      x9
00089828 b30357f8 ldur     x19, [x29, #-0x90]
0008982C 13ee00b4 cbz      x19, #0x8b5ec
00089830 743240f9 ldr      x20, [x19, #0x60]
00089834 f40200b4 cbz      x20, #0x89890
00089838 880240f9 ldr      x8, [x20]
0008983C e00314aa mov      x0, x20
00089840 080140f9 ldr      x8, [x8]
00089844 00013fd6 blr      x8
00089848 f50300aa mov      x21, x0
0008984C 950f0094 bl       #0x8d6a0
00089850 1f0015eb cmp      x0, x21
00089854 00010054 b.eq     #0x89874
00089858 1f2003d5 nop      
0008985C 1f2003d5 nop      
00089860 b50240f9 ldr      x21, [x21]
00089864 bf0200eb cmp      x21, x0
00089868 a41a40fa ccmp     x21, #0, #4, ne
0008986C a1ffff54 b.ne     #0x89860
00089870 150100b4 cbz      x21, #0x89890
00089874 9a4201d1 sub      x26, x20, #0x50
00089878 688e44f8 ldr      x8, [x19, #0x48]!
0008987C e00313aa mov      x0, x19
00089880 080d40f9 ldr      x8, [x8, #0x18]
00089884 00013fd6 blr      x8
00089888 1a0100b5 cbnz     x26, #0x898a8
0008988C 58070014 b        #0x8b5ec
00089890 fa031faa mov      x26, xzr
00089894 688e44f8 ldr      x8, [x19, #0x48]!
00089898 e00313aa mov      x0, x19
0008989C 080d40f9 ldr      x8, [x8, #0x18]
000898A0 00013fd6 blr      x8
000898A4 5fea00b4 cbz      xzr, #0x8b5ec
000898A8 a84302d1 sub      x8, x29, #0x90
000898AC e00319aa mov      x0, x25
000898B0 50070094 bl       #0x8b5f0
000898B4 e09a46f9 ldr      x0, [x23, #0xd30]
000898B8 800000b4 cbz      x0, #0x898c8
000898BC 088c44f8 ldr      x8, [x0, #0x48]!
000898C0 080d40f9 ldr      x8, [x8, #0x18]
000898C4 00013fd6 blr      x8
000898C8 b30357f8 ldur     x19, [x29, #-0x90]
000898CC f39a06f9 str      x19, [x23, #0xd30]
000898D0 b30000b4 cbz      x19, #0x898e4
000898D4 e00313aa mov      x0, x19
000898D8 088c44f8 ldr      x8, [x0, #0x48]!
000898DC 080940f9 ldr      x8, [x8, #0x10]
000898E0 00013fd6 blr      x8
000898E4 403741f9 ldr      x0, [x26, #0x268]
000898E8 533701f9 str      x19, [x26, #0x268]
000898EC 800000b4 cbz      x0, #0x898fc
000898F0 088c44f8 ldr      x8, [x0, #0x48]!
000898F4 080d40f9 ldr      x8, [x8, #0x18]
000898F8 00013fd6 blr      x8
000898FC e85646f9 ldr      x8, [x23, #0xca8]
00089900 a1a303d1 sub      x1, x29, #0xe8
00089904 e00319aa mov      x0, x25
00089908 fb5246f9 ldr      x27, [x23, #0xca0]
0008990C b98311f8 stur     x25, [x29, #-0xe8]
00089910 e82300f9 str      x8, [sp, #0x40]
00089914 a8c303d1 sub      x8, x29, #0xf0
00089918 960e0094 bl       #0x8d370
0008991C 68230091 add      x8, x27, #8
00089920 73630091 add      x19, x27, #0x18
00089924 484f06a9 stp      x8, x19, [x26, #0x60]
00089928 ba640694 bl       #0x222c10
0008992C 493340f9 ldr      x9, [x26, #0x60]
00089930 08000012 and      w8, w0, #1
00089934 ea031aaa mov      x10, x26
00089938 484d09b8 str      w8, [x10, #0x94]!
0008993C ea0700f9 str      x10, [sp, #8]
00089940 290140b9 ldr      w9, [x9]
00089944 3f050071 cmp      w9, #1
00089948 08159f1a csinc    w8, w8, wzr, ne
0008994C 480100b9 str      w8, [x10]
00089950 9c700694 bl       #0x225bc0
00089954 082c40b9 ldr      w8, [x0, #0x2c]
00089958 08050051 sub      w8, w8, #1
0008995C 1f250071 cmp      w8, #9
00089960 88010054 b.hi     #0x89990
00089964 e92c0090 adrp     x9, #0x625000
00089968 29c12391 add      x9, x9, #0x8f0
0008996C ca000010 adr      x10, #0x89984
00089970 2b696838 ldrb     w11, [x9, x8]
00089974 4a090b8b add      x10, x10, x11, lsl #2
00089978 fc031f2a mov      w28, wzr
0008997C 58008052 mov      w24, #2
00089980 40011fd6 br       x10
00089984 fc031f2a mov      w28, wzr
00089988 78008052 mov      w24, #3
0008998C 1b000014 b        #0x899f8
00089990 f8031f2a mov      w24, wzr
00089994 3c008052 mov      w28, #1
00089998 18000014 b        #0x899f8
0008999C fc031f2a mov      w28, wzr
000899A0 98008052 mov      w24, #4
000899A4 15000014 b        #0x899f8
000899A8 fc031f2a mov      w28, wzr
000899AC b8008052 mov      w24, #5
000899B0 12000014 b        #0x899f8
000899B4 fc031f2a mov      w28, wzr
000899B8 d8008052 mov      w24, #6
000899BC 0f000014 b        #0x899f8
000899C0 fc031f2a mov      w28, wzr
000899C4 f8008052 mov      w24, #7
000899C8 0c000014 b        #0x899f8
000899CC fc031f2a mov      w28, wzr
000899D0 18018052 mov      w24, #8
000899D4 09000014 b        #0x899f8
000899D8 fc031f2a mov      w28, wzr
000899DC 38018052 mov      w24, #9
000899E0 06000014 b        #0x899f8
000899E4 fc031f2a mov      w28, wzr
000899E8 58018052 mov      w24, #0xa
000899EC 03000014 b        #0x899f8
000899F0 fc031f2a mov      w28, wzr
000899F4 98018052 mov      w24, #0xc
000899F8 482b41f9 ldr      x8, [x26, #0x250]
000899FC 492f41f9 ldr      x9, [x26, #0x258]
00089A00 4a3341f9 ldr      x10, [x26, #0x260]
00089A04 a82737a9 stp      x8, x9, [x29, #-0x90]
00089A08 489740b9 ldr      w8, [x26, #0x94]
00089A0C b50351f8 ldur     x21, [x29, #-0xf0]
00089A10 aa0318f8 stur     x10, [x29, #-0x80]
00089A14 e86700b9 str      w8, [sp, #0x64]
00089A18 b50000b4 cbz      x21, #0x89a2c
00089A1C e00315aa mov      x0, x21
00089A20 088c44f8 ldr      x8, [x0, #0x48]!
00089A24 080940f9 ldr      x8, [x8, #0x10]
00089A28 00013fd6 blr      x8
00089A2C 680f40b9 ldr      w8, [x27, #0xc]
00089A30 1f050071 cmp      w8, #1
00089A34 48d03bd5 mrs      x8, tpidr_el0
00089A38 f95f01a9 stp      x25, x23, [sp, #0x10]
00089A3C faa304a9 stp      x26, x8, [sp, #0x48]
00089A40 01030054 b.ne     #0x89aa0
00089A44 688741f9 ldr      x8, [x27, #0x308]
00089A48 76230c91 add      x22, x27, #0x308
00089A4C 880000b4 cbz      x8, #0x89a5c
00089A50 a14302d1 sub      x1, x29, #0x90
00089A54 e00316aa mov      x0, x22
00089A58 4d350094 bl       #0x96f8c
00089A5C 688b41f9 ldr      x8, [x27, #0x310]
00089A60 77430c91 add      x23, x27, #0x310
00089A64 880000b4 cbz      x8, #0x89a74
00089A68 a14302d1 sub      x1, x29, #0x90
00089A6C e00317aa mov      x0, x23
00089A70 47350094 bl       #0x96f8c
00089A74 746741f9 ldr      x20, [x27, #0x2c8]
00089A78 79230b91 add      x25, x27, #0x2c8
00089A7C f4da00b4 cbz      x20, #0x8b5d8
00089A80 687741f9 ldr      x8, [x27, #0x2e8]
00089A84 a80000b4 cbz      x8, #0x89a98
00089A88 c80240f9 ldr      x8, [x22]
00089A8C 680000b4 cbz      x8, #0x89a98
00089A90 e80240f9 ldr      x8, [x23]
00089A94 687100b5 cbnz     x8, #0x8a8c0
00089A98 3f0300f9 str      xzr, [x25]
00089A9C 05000014 b        #0x89ab0
00089AA0 746741f9 ldr      x20, [x27, #0x2c8]
00089AA4 79230b91 add      x25, x27, #0x2c8
00089AA8 7f6701f9 str      xzr, [x27, #0x2c8]
00089AAC 540100b4 cbz      x20, #0x89ad4
00089AB0 e00314aa mov      x0, x20
00089AB4 0096ff97 bl       #0x6f2b4
00089AB8 606b41f9 ldr      x0, [x27, #0x2d0]
00089ABC e10314aa mov      x1, x20
00089AC0 626f41f9 ldr      x2, [x27, #0x2d8]
00089AC4 637341f9 ldr      x3, [x27, #0x2e0]
00089AC8 080040f9 ldr      x8, [x0]
00089ACC 080d40f9 ldr      x8, [x8, #0x18]
00089AD0 00013fd6 blr      x8
00089AD4 617741f9 ldr      x1, [x27, #0x2e8]
00089AD8 7f7701f9 str      xzr, [x27, #0x2e8]
00089ADC e10000b4 cbz      x1, #0x89af8
00089AE0 607b41f9 ldr      x0, [x27, #0x2f0]
00089AE4 627f41f9 ldr      x2, [x27, #0x2f8]
00089AE8 638341f9 ldr      x3, [x27, #0x300]
00089AEC 080040f9 ldr      x8, [x0]
00089AF0 080d40f9 ldr      x8, [x8, #0x18]
00089AF4 00013fd6 blr      x8
00089AF8 608741f9 ldr      x0, [x27, #0x308]
00089AFC a00000b4 cbz      x0, #0x89b10
00089B00 088c44f8 ldr      x8, [x0, #0x48]!
00089B04 080d40f9 ldr      x8, [x8, #0x18]
00089B08 00013fd6 blr      x8
00089B0C 7f8701f9 str      xzr, [x27, #0x308]
00089B10 608b41f9 ldr      x0, [x27, #0x310]
00089B14 a00000b4 cbz      x0, #0x89b28
00089B18 088c44f8 ldr      x8, [x0, #0x48]!
00089B1C 080d40f9 ldr      x8, [x8, #0x18]
00089B20 00013fd6 blr      x8
00089B24 7f8b01f9 str      xzr, [x27, #0x310]
00089B28 e00313aa mov      x0, x19
00089B2C 2494ff97 bl       #0x6ebbc
00089B30 b30357f8 ldur     x19, [x29, #-0x90]
00089B34 b50000b4 cbz      x21, #0x89b48
00089B38 e00315aa mov      x0, x21
00089B3C 088c44f8 ldr      x8, [x0, #0x48]!
00089B40 080940f9 ldr      x8, [x8, #0x10]
00089B44 00013fd6 blr      x8
00089B48 28008052 mov      w8, #1
00089B4C 010d8052 mov      w1, #0x68
00089B50 a8632d29 stp      w8, w24, [x29, #-0x98]
00089B54 a83800d0 adrp     x8, #0x79f000
00089B58 02018052 mov      w2, #8
00089B5C 08ed41f9 ldr      x8, [x8, #0x3d8]
00089B60 080140f9 ldr      x8, [x8]
00089B64 161541f9 ldr      x22, [x8, #0x228]
00089B68 c80240f9 ldr      x8, [x22]
00089B6C e00316aa mov      x0, x22
00089B70 080940f9 ldr      x8, [x8, #0x10]
00089B74 00013fd6 blr      x8
00089B78 e82b40f9 ldr      x8, [sp, #0x50]
00089B7C 14c97392 and      x20, x8, #0xffffffffffffe000
00089B80 884e40f9 ldr      x8, [x20, #0x98]
00089B84 1f4100f1 cmp      x8, #0x10
00089B88 60d20054 b.eq     #0x8b5d4
00089B8C 89620091 add      x9, x20, #0x18
00089B90 e10316aa mov      x1, x22
00089B94 fc3700b9 str      w28, [sp, #0x34]
00089B98 367928f8 str      x22, [x9, x8, lsl #3]
00089B9C e20313aa mov      x2, x19
00089BA0 884e40f9 ldr      x8, [x20, #0x98]
00089BA4 f80300aa mov      x24, x0
00089BA8 e91300f9 str      x9, [sp, #0x20]
00089BAC 08050091 add      x8, x8, #1
00089BB0 884e00f9 str      x8, [x20, #0x98]
00089BB4 57250094 bl       #0x93110
00089BB8 884e40f9 ldr      x8, [x20, #0x98]
00089BBC fa0316aa mov      x26, x22
00089BC0 f41700f9 str      x20, [sp, #0x28]
00089BC4 080500d1 sub      x8, x8, #1
00089BC8 884e00f9 str      x8, [x20, #0x98]
00089BCC 330340f9 ldr      x19, [x25]
00089BD0 380300f9 str      x24, [x25]
00089BD4 730100b4 cbz      x19, #0x89c00
00089BD8 e00313aa mov      x0, x19
00089BDC b695ff97 bl       #0x6f2b4
00089BE0 606b41f9 ldr      x0, [x27, #0x2d0]
00089BE4 e10313aa mov      x1, x19
00089BE8 626f41f9 ldr      x2, [x27, #0x2d8]
00089BEC 637341f9 ldr      x3, [x27, #0x2e0]
00089BF0 080040f9 ldr      x8, [x0]
00089BF4 080d40f9 ldr      x8, [x8, #0x18]
00089BF8 00013fd6 blr      x8
00089BFC 786741f9 ldr      x24, [x27, #0x2c8]
00089C00 080d8052 mov      w8, #0x68
00089C04 e00318aa mov      x0, x24
00089C08 7a6b01f9 str      x26, [x27, #0x2d0]
00089C0C 686f01f9 str      x8, [x27, #0x2d8]
00089C10 08018052 mov      w8, #8
00089C14 e1031aaa mov      x1, x26
00089C18 42008052 mov      w2, #2
00089C1C bce302d1 sub      x28, x29, #0xb8
00089C20 fb1f00f9 str      x27, [sp, #0x38]
00089C24 687301f9 str      x8, [x27, #0x2e0]
00089C28 b4250094 bl       #0x932f8
00089C2C 092340f9 ldr      x9, [x24, #0x40]
00089C30 a8a302d1 sub      x8, x29, #0xa8
00089C34 f4031faa mov      x20, xzr
00089C38 08110091 add      x8, x8, #4
00089C3C 36008052 mov      w22, #1
00089C40 fa2f00f9 str      x26, [sp, #0x58]
00089C44 e85f00f9 str      x8, [sp, #0xb8]
00089C48 a8220191 add      x8, x21, #0x48
00089C4C e86700f9 str      x8, [sp, #0xc8]
00089C50 28008052 mov      w8, #1
00089C54 e93700f9 str      x9, [sp, #0x68]
00089C58 a9e302d1 sub      x9, x29, #0xb8
00089C5C 3b110091 add      x27, x9, #4
00089C60 09000014 b        #0x89c84
00089C64 e03b40f9 ldr      x0, [sp, #0x70]
00089C68 080040f9 ldr      x8, [x0]
00089C6C 080d40f9 ldr      x8, [x8, #0x18]
00089C70 00013fd6 blr      x8
00089C74 f77b40b9 ldr      w23, [sp, #0x78]
00089C78 e8031f2a mov      w8, wzr
00089C7C 34008052 mov      w20, #1
00089C80 774d0036 tbz      w23, #0, #0x8a62c
00089C84 f703082a mov      w23, w8
00089C88 a86302d1 sub      x8, x29, #0x98
00089C8C f33740f9 ldr      x19, [sp, #0x68]
00089C90 197974b8 ldr      w25, [x8, x20, lsl #2]
00089C94 e1031aaa mov      x1, x26
00089C98 e203142a mov      w2, w20
00089C9C e00313aa mov      x0, x19
00089CA0 e303192a mov      w3, w25
00089CA4 bd240094 bl       #0x92f98
00089CA8 e00313aa mov      x0, x19
00089CAC e103142a mov      w1, w20
00089CB0 0c250094 bl       #0x930e0
00089CB4 39feff34 cbz      w25, #0x89c78
00089CB8 f46b00f9 str      x20, [sp, #0xd0]
00089CBC 140840f9 ldr      x20, [x0, #0x10]
00089CC0 f30300aa mov      x19, x0
00089CC4 e8630391 add      x8, sp, #0xd8
00089CC8 3f070071 cmp      w25, #1
00089CCC f97f00b9 str      w25, [sp, #0x7c]
00089CD0 81000054 b.ne     #0x89ce0
00089CD4 ff590694 bl       #0x2204d0
00089CD8 03000014 b        #0x89ce4
00089CDC 1f2003d5 nop      
00089CE0 f0590694 bl       #0x2204a0
00089CE4 f96f40f9 ldr      x25, [sp, #0xd8]
00089CE8 e00319aa mov      x0, x25
00089CEC fa5f40f9 ldr      x26, [sp, #0xb8]
00089CF0 6ce30594 bl       #0x202aa0
00089CF4 e00319aa mov      x0, x25
00089CF8 088c44f8 ldr      x8, [x0, #0x48]!
00089CFC e03b00f9 str      x0, [sp, #0x70]
00089D00 080940f9 ldr      x8, [x8, #0x10]
00089D04 00013fd6 blr      x8
00089D08 800640f9 ldr      x0, [x20, #8]
00089D0C 990600f9 str      x25, [x20, #8]
00089D10 800000b4 cbz      x0, #0x89d20
00089D14 088c44f8 ldr      x8, [x0, #0x48]!
00089D18 080d40f9 ldr      x8, [x8, #0x18]
00089D1C 00013fd6 blr      x8
00089D20 e87f40b9 ldr      w8, [sp, #0x7c]
00089D24 e0630391 add      x0, sp, #0xd8
00089D28 ffdb00b9 str      wzr, [sp, #0xd8]
00089D2C f94300f9 str      x25, [sp, #0x80]
00089D30 1f050071 cmp      w8, #1
00089D34 61000054 b.ne     #0x89d40
00089D38 8e5a0694 bl       #0x220770
00089D3C 02000014 b        #0x89d44
00089D40 fc590694 bl       #0x220530
00089D44 28119152 mov      w8, #0x8889
00089D48 0811b172 movk     w8, #0x8888, lsl #16
00089D4C f77b00b9 str      w23, [sp, #0x78]
00089D50 087ca89b umull    x8, w0, w8
00089D54 ca038052 mov      w10, #0x1e
00089D58 08fd64d3 lsr      x8, x8, #0x24
00089D5C 09810a1b msub     w9, w8, w10, w0
00089D60 601a40f9 ldr      x0, [x19, #0x30]
00089D64 3f010071 cmp      w9, #0
00089D68 1405881a cinc     w20, w8, ne
00089D6C e8db40b9 ldr      w8, [sp, #0xd8]
00089D70 29118a1a csel     w9, w9, w10, ne
00089D74 e04700f9 str      x0, [sp, #0x88]
00089D78 e103142a mov      w1, w20
00089D7C e99b00b9 str      w9, [sp, #0x98]
00089D80 e8b700b9 str      w8, [sp, #0xb4]
00089D84 6a230094 bl       #0x92b2c
00089D88 f49700b9 str      w20, [sp, #0x94]
00089D8C d43b0034 cbz      w20, #0x8a504
00089D90 e89740b9 ldr      w8, [sp, #0x94]
00089D94 08050051 sub      w8, w8, #1
00089D98 e8c700b9 str      w8, [sp, #0xc4]
00089D9C e89b40b9 ldr      w8, [sp, #0x98]
00089DA0 08050051 sub      w8, w8, #1
00089DA4 e8b300b9 str      w8, [sp, #0xb0]
00089DA8 e87f40b9 ldr      w8, [sp, #0x7c]
00089DAC 1f050071 cmp      w8, #1
00089DB0 c1100054 b.ne     #0x89fc8
00089DB4 f4031f2a mov      w20, wzr
00089DB8 06000014 b        #0x89dd0
00089DBC 1f2003d5 nop      
00089DC0 e89740b9 ldr      w8, [sp, #0x94]
00089DC4 94060011 add      w20, w20, #1
00089DC8 9f02086b cmp      w20, w8
00089DCC c0390054 b.eq     #0x8a504
00089DD0 e04740f9 ldr      x0, [sp, #0x88]
00089DD4 e103142a mov      w1, w20
00089DD8 5a230094 bl       #0x92b40
00089DDC e8c740b9 ldr      w8, [sp, #0xc4]
00089DE0 e05300f9 str      x0, [sp, #0xa0]
00089DE4 9f02086b cmp      w20, w8
00089DE8 e99b40b9 ldr      w9, [sp, #0x98]
00089DEC c8038052 mov      w8, #0x1e
00089DF0 3301881a csel     w19, w9, w8, eq
00089DF4 e103132a mov      w1, w19
00089DF8 3d200094 bl       #0x91eec
00089DFC 7f060071 cmp      w19, #1
00089E00 f7031f2a mov      w23, wzr
00089E04 f4ab00b9 str      w20, [sp, #0xa8]
00089E08 68869f1a csinc    w8, w19, wzr, hi
00089E0C e89f00b9 str      w8, [sp, #0x9c]
00089E10 07000014 b        #0x89e2c
00089E14 e89f40b9 ldr      w8, [sp, #0x9c]
00089E18 f7060011 add      w23, w23, #1
00089E1C ff02086b cmp      w23, w8
00089E20 fa5f40f9 ldr      x26, [sp, #0xb8]
00089E24 f4ab40b9 ldr      w20, [sp, #0xa8]
00089E28 c0fcff54 b.eq     #0x89dc0
00089E2C e003172a mov      w0, w23
00089E30 b48315b8 stur     w20, [x29, #-0xa8]
00089E34 541d0094 bl       #0x91384
00089E38 804301f8 stur     x0, [x28, #0x14]
00089E3C a0a302d1 sub      x0, x29, #0xa8
00089E40 461d0094 bl       #0x91358
00089E44 f903002a mov      w25, w0
00089E48 e05340f9 ldr      x0, [sp, #0xa0]
00089E4C e1031aaa mov      x1, x26
00089E50 a5200094 bl       #0x920e4
00089E54 e8275629 ldp      w8, w9, [sp, #0xb0]
00089E58 fa0300aa mov      x26, x0
00089E5C 161800b9 str      w22, [x0, #0x18]
00089E60 ff02086b cmp      w23, w8
00089E64 e8c740b9 ldr      w8, [sp, #0xc4]
00089E68 8002487a ccmp     w20, w8, #0, eq
00089E6C c8038052 mov      w8, #0x1e
00089E70 3401881a csel     w20, w9, w8, eq
00089E74 e103142a mov      w1, w20
00089E78 a41f0094 bl       #0x91d08
00089E7C d4fcff34 cbz      w20, #0x89e14
00089E80 f3031f2a mov      w19, wzr
00089E84 07000014 b        #0x89ea0
00089E88 1f2003d5 nop      
00089E8C 1f2003d5 nop      
00089E90 73060011 add      w19, w19, #1
00089E94 36008052 mov      w22, #1
00089E98 9f02136b cmp      w20, w19
00089E9C c0fbff54 b.eq     #0x89e14
00089EA0 e003132a mov      w0, w19
00089EA4 b98314b8 stur     w25, [x29, #-0xb8]
00089EA8 371d0094 bl       #0x91384
00089EAC 804300f8 stur     x0, [x28, #4]
00089EB0 e0031aaa mov      x0, x26
00089EB4 e1031baa mov      x1, x27
00089EB8 991f0094 bl       #0x91d1c
00089EBC a88354b8 ldur     w8, [x29, #-0xb8]
00089EC0 161800b9 str      w22, [x0, #0x18]
00089EC4 e00318aa mov      x0, x24
00089EC8 e96b40f9 ldr      x9, [sp, #0xd0]
00089ECC ff630339 strb     wzr, [sp, #0xd8]
00089ED0 e9a31b29 stp      w9, w8, [sp, #0xdc]
00089ED4 884340f8 ldur     x8, [x28, #4]
00089ED8 e8430ef8 stur     x8, [sp, #0xe4]
00089EDC 3b250094 bl       #0x933c8
00089EE0 081c0012 and      w8, w0, #0xff
00089EE4 1f050071 cmp      w8, #1
00089EE8 40fdff54 b.eq     #0x89e90
00089EEC e1630391 add      x1, sp, #0xd8
00089EF0 e00318aa mov      x0, x24
00089EF4 22008052 mov      w2, #1
00089EF8 0e270094 bl       #0x93b30
00089EFC b50314f8 stur     x21, [x29, #-0xc0]
00089F00 b50000b4 cbz      x21, #0x89f14
00089F04 e06740f9 ldr      x0, [sp, #0xc8]
00089F08 080040f9 ldr      x8, [x0]
00089F0C 080940f9 ldr      x8, [x8, #0x10]
00089F10 00013fd6 blr      x8
00089F14 a10303d1 sub      x1, x29, #0xc0
00089F18 e2630391 add      x2, sp, #0xd8
00089F1C e00318aa mov      x0, x24
00089F20 042a0094 bl       #0x94730
00089F24 f603002a mov      w22, w0
00089F28 a00354f8 ldur     x0, [x29, #-0xc0]
00089F2C a00000b4 cbz      x0, #0x89f40
00089F30 088c44f8 ldr      x8, [x0, #0x48]!
00089F34 080d40f9 ldr      x8, [x8, #0x18]
00089F38 00013fd6 blr      x8
00089F3C bf0314f8 stur     xzr, [x29, #-0xc0]
00089F40 96fa0736 tbz      w22, #0, #0x89e90
00089F44 b58313f8 stur     x21, [x29, #-0xc8]
00089F48 b50000b4 cbz      x21, #0x89f5c
00089F4C e06740f9 ldr      x0, [sp, #0xc8]
00089F50 080040f9 ldr      x8, [x0]
00089F54 080940f9 ldr      x8, [x8, #0x10]
00089F58 00013fd6 blr      x8
00089F5C a12303d1 sub      x1, x29, #0xc8
00089F60 e2630391 add      x2, sp, #0xd8
00089F64 e00318aa mov      x0, x24
00089F68 002c0094 bl       #0x94f68
00089F6C a08353f8 ldur     x0, [x29, #-0xc8]
00089F70 a00000b4 cbz      x0, #0x89f84
00089F74 088c44f8 ldr      x8, [x0, #0x48]!
00089F78 080d40f9 ldr      x8, [x8, #0x18]
00089F7C 00013fd6 blr      x8
00089F80 bf8313f8 stur     xzr, [x29, #-0xc8]
00089F84 b50313f8 stur     x21, [x29, #-0xd0]
00089F88 b50000b4 cbz      x21, #0x89f9c
00089F8C e06740f9 ldr      x0, [sp, #0xc8]
00089F90 080040f9 ldr      x8, [x0]
00089F94 080940f9 ldr      x8, [x8, #0x10]
00089F98 00013fd6 blr      x8
00089F9C a14303d1 sub      x1, x29, #0xd0
00089FA0 e2630391 add      x2, sp, #0xd8
00089FA4 e00318aa mov      x0, x24
00089FA8 c6250094 bl       #0x936c0
00089FAC a00353f8 ldur     x0, [x29, #-0xd0]
00089FB0 00f7ffb4 cbz      x0, #0x89e90
00089FB4 088c44f8 ldr      x8, [x0, #0x48]!
00089FB8 080d40f9 ldr      x8, [x8, #0x18]
00089FBC 00013fd6 blr      x8
00089FC0 bf0313f8 stur     xzr, [x29, #-0xd0]
00089FC4 b3ffff17 b        #0x89e90
00089FC8 f7031f2a mov      w23, wzr
00089FCC 07000014 b        #0x89fe8
00089FD0 f79f40b9 ldr      w23, [sp, #0x9c]
00089FD4 36008052 mov      w22, #1
00089FD8 f7060011 add      w23, w23, #1
00089FDC e89740b9 ldr      w8, [sp, #0x94]
00089FE0 ff02086b cmp      w23, w8
00089FE4 00290054 b.eq     #0x8a504
00089FE8 e04740f9 ldr      x0, [sp, #0x88]
00089FEC e103172a mov      w1, w23
00089FF0 d4220094 bl       #0x92b40
00089FF4 f4c740b9 ldr      w20, [sp, #0xc4]
00089FF8 c8038052 mov      w8, #0x1e
00089FFC f90300aa mov      x25, x0
0008A000 e99b40b9 ldr      w9, [sp, #0x98]
0008A004 ff02146b cmp      w23, w20
0008A008 3301881a csel     w19, w9, w8, eq
0008A00C e103132a mov      w1, w19
0008A010 b71f0094 bl       #0x91eec
0008A014 7f060071 cmp      w19, #1
0008A018 f95700f9 str      x25, [sp, #0xa8]
0008A01C 68869f1a csinc    w8, w19, wzr, hi
0008A020 ff02146b cmp      w23, w20
0008A024 f7a31329 stp      w23, w8, [sp, #0x9c]
0008A028 c1050054 b.ne     #0x8a0e0
0008A02C f4031f2a mov      w20, wzr
0008A030 36008052 mov      w22, #1
0008A034 09000014 b        #0x8a058
0008A038 1f2003d5 nop      
0008A03C 1f2003d5 nop      
0008A040 e8a340b9 ldr      w8, [sp, #0xa0]
0008A044 94060011 add      w20, w20, #1
0008A048 9f02086b cmp      w20, w8
0008A04C fa5f40f9 ldr      x26, [sp, #0xb8]
0008A050 f95740f9 ldr      x25, [sp, #0xa8]
0008A054 e0fbff54 b.eq     #0x89fd0
0008A058 e8c740b9 ldr      w8, [sp, #0xc4]
0008A05C e003142a mov      w0, w20
0008A060 a88315b8 stur     w8, [x29, #-0xa8]
0008A064 c81c0094 bl       #0x91384
0008A068 804301f8 stur     x0, [x28, #0x14]
0008A06C a0a302d1 sub      x0, x29, #0xa8
0008A070 ba1c0094 bl       #0x91358
0008A074 f703002a mov      w23, w0
0008A078 e00319aa mov      x0, x25
0008A07C e1031aaa mov      x1, x26
0008A080 19200094 bl       #0x920e4
0008A084 e8275629 ldp      w8, w9, [sp, #0xb0]
0008A088 f90300aa mov      x25, x0
0008A08C 161800b9 str      w22, [x0, #0x18]
0008A090 9f02086b cmp      w20, w8
0008A094 c8038052 mov      w8, #0x1e
0008A098 3a01881a csel     w26, w9, w8, eq
0008A09C e1031a2a mov      w1, w26
0008A0A0 1a1f0094 bl       #0x91d08
0008A0A4 fafcff34 cbz      w26, #0x8a040
0008A0A8 f3031f2a mov      w19, wzr
0008A0AC 1f2003d5 nop      
0008A0B0 e003132a mov      w0, w19
0008A0B4 b78314b8 stur     w23, [x29, #-0xb8]
0008A0B8 b31c0094 bl       #0x91384
0008A0BC 804300f8 stur     x0, [x28, #4]
0008A0C0 e00319aa mov      x0, x25
0008A0C4 e1031baa mov      x1, x27
0008A0C8 151f0094 bl       #0x91d1c
0008A0CC 73060011 add      w19, w19, #1
0008A0D0 161800b9 str      w22, [x0, #0x18]
0008A0D4 5f03136b cmp      w26, w19
0008A0D8 c1feff54 b.ne     #0x8a0b0
0008A0DC d9ffff17 b        #0x8a040
0008A0E0 f7031f2a mov      w23, wzr
0008A0E4 33008052 mov      w19, #1
0008A0E8 1f2003d5 nop      
0008A0EC 1f2003d5 nop      
0008A0F0 e89f40b9 ldr      w8, [sp, #0x9c]
0008A0F4 e003172a mov      w0, w23
0008A0F8 a88315b8 stur     w8, [x29, #-0xa8]
0008A0FC a21c0094 bl       #0x91384
0008A100 804301f8 stur     x0, [x28, #0x14]
0008A104 a0a302d1 sub      x0, x29, #0xa8
0008A108 941c0094 bl       #0x91358
0008A10C f403002a mov      w20, w0
0008A110 e00319aa mov      x0, x25
0008A114 e1031aaa mov      x1, x26
0008A118 f31f0094 bl       #0x920e4
0008A11C c1038052 mov      w1, #0x1e
0008A120 f90300aa mov      x25, x0
0008A124 131800b9 str      w19, [x0, #0x18]
0008A128 f81e0094 bl       #0x91d08
0008A12C e0031f2a mov      w0, wzr
0008A130 b48314b8 stur     w20, [x29, #-0xb8]
0008A134 941c0094 bl       #0x91384
0008A138 804300f8 stur     x0, [x28, #4]
0008A13C e00319aa mov      x0, x25
0008A140 e1031baa mov      x1, x27
0008A144 f61e0094 bl       #0x91d1c
0008A148 131800b9 str      w19, [x0, #0x18]
0008A14C 20008052 mov      w0, #1
0008A150 b48314b8 stur     w20, [x29, #-0xb8]
0008A154 8c1c0094 bl       #0x91384
0008A158 804300f8 stur     x0, [x28, #4]
0008A15C e00319aa mov      x0, x25
0008A160 e1031baa mov      x1, x27
0008A164 ee1e0094 bl       #0x91d1c
0008A168 131800b9 str      w19, [x0, #0x18]
0008A16C 40008052 mov      w0, #2
0008A170 b48314b8 stur     w20, [x29, #-0xb8]
0008A174 841c0094 bl       #0x91384
0008A178 804300f8 stur     x0, [x28, #4]
0008A17C e00319aa mov      x0, x25
0008A180 e1031baa mov      x1, x27
0008A184 e61e0094 bl       #0x91d1c
0008A188 131800b9 str      w19, [x0, #0x18]
0008A18C 60008052 mov      w0, #3
0008A190 b48314b8 stur     w20, [x29, #-0xb8]
0008A194 7c1c0094 bl       #0x91384
0008A198 804300f8 stur     x0, [x28, #4]
0008A19C e00319aa mov      x0, x25
0008A1A0 e1031baa mov      x1, x27
0008A1A4 de1e0094 bl       #0x91d1c
0008A1A8 131800b9 str      w19, [x0, #0x18]
0008A1AC 80008052 mov      w0, #4
0008A1B0 b48314b8 stur     w20, [x29, #-0xb8]
0008A1B4 741c0094 bl       #0x91384
0008A1B8 804300f8 stur     x0, [x28, #4]
0008A1BC e00319aa mov      x0, x25
0008A1C0 e1031baa mov      x1, x27
0008A1C4 d61e0094 bl       #0x91d1c
0008A1C8 131800b9 str      w19, [x0, #0x18]
0008A1CC a0008052 mov      w0, #5
0008A1D0 b48314b8 stur     w20, [x29, #-0xb8]
0008A1D4 6c1c0094 bl       #0x91384
0008A1D8 804300f8 stur     x0, [x28, #4]
0008A1DC e00319aa mov      x0, x25
0008A1E0 e1031baa mov      x1, x27
0008A1E4 ce1e0094 bl       #0x91d1c
0008A1E8 131800b9 str      w19, [x0, #0x18]
0008A1EC c0008052 mov      w0, #6
0008A1F0 b48314b8 stur     w20, [x29, #-0xb8]
0008A1F4 641c0094 bl       #0x91384
0008A1F8 804300f8 stur     x0, [x28, #4]
0008A1FC e00319aa mov      x0, x25
0008A200 e1031baa mov      x1, x27
0008A204 c61e0094 bl       #0x91d1c
0008A208 131800b9 str      w19, [x0, #0x18]
0008A20C e0008052 mov      w0, #7
0008A210 b48314b8 stur     w20, [x29, #-0xb8]
0008A214 5c1c0094 bl       #0x91384
0008A218 804300f8 stur     x0, [x28, #4]
0008A21C e00319aa mov      x0, x25
0008A220 e1031baa mov      x1, x27
0008A224 be1e0094 bl       #0x91d1c
0008A228 131800b9 str      w19, [x0, #0x18]
0008A22C 00018052 mov      w0, #8
0008A230 b48314b8 stur     w20, [x29, #-0xb8]
0008A234 541c0094 bl       #0x91384
0008A238 804300f8 stur     x0, [x28, #4]
0008A23C e00319aa mov      x0, x25
0008A240 e1031baa mov      x1, x27
0008A244 b61e0094 bl       #0x91d1c
0008A248 131800b9 str      w19, [x0, #0x18]
0008A24C 20018052 mov      w0, #9
0008A250 b48314b8 stur     w20, [x29, #-0xb8]
0008A254 4c1c0094 bl       #0x91384
0008A258 804300f8 stur     x0, [x28, #4]
0008A25C e00319aa mov      x0, x25
0008A260 e1031baa mov      x1, x27
0008A264 ae1e0094 bl       #0x91d1c
0008A268 131800b9 str      w19, [x0, #0x18]
0008A26C 40018052 mov      w0, #0xa
0008A270 b48314b8 stur     w20, [x29, #-0xb8]
0008A274 441c0094 bl       #0x91384
0008A278 804300f8 stur     x0, [x28, #4]
0008A27C e00319aa mov      x0, x25
0008A280 e1031baa mov      x1, x27
0008A284 a61e0094 bl       #0x91d1c
0008A288 131800b9 str      w19, [x0, #0x18]
0008A28C 60018052 mov      w0, #0xb
0008A290 b48314b8 stur     w20, [x29, #-0xb8]
0008A294 3c1c0094 bl       #0x91384
0008A298 804300f8 stur     x0, [x28, #4]
0008A29C e00319aa mov      x0, x25
0008A2A0 e1031baa mov      x1, x27
0008A2A4 9e1e0094 bl       #0x91d1c
0008A2A8 131800b9 str      w19, [x0, #0x18]
0008A2AC 80018052 mov      w0, #0xc
0008A2B0 b48314b8 stur     w20, [x29, #-0xb8]
0008A2B4 341c0094 bl       #0x91384
0008A2B8 804300f8 stur     x0, [x28, #4]
0008A2BC e00319aa mov      x0, x25
0008A2C0 e1031baa mov      x1, x27
0008A2C4 961e0094 bl       #0x91d1c
0008A2C8 131800b9 str      w19, [x0, #0x18]
0008A2CC a0018052 mov      w0, #0xd
0008A2D0 b48314b8 stur     w20, [x29, #-0xb8]
0008A2D4 2c1c0094 bl       #0x91384
0008A2D8 804300f8 stur     x0, [x28, #4]
0008A2DC e00319aa mov      x0, x25
0008A2E0 e1031baa mov      x1, x27
0008A2E4 8e1e0094 bl       #0x91d1c
0008A2E8 131800b9 str      w19, [x0, #0x18]
0008A2EC c0018052 mov      w0, #0xe
0008A2F0 b48314b8 stur     w20, [x29, #-0xb8]
0008A2F4 241c0094 bl       #0x91384
0008A2F8 804300f8 stur     x0, [x28, #4]
0008A2FC e00319aa mov      x0, x25
0008A300 e1031baa mov      x1, x27
0008A304 861e0094 bl       #0x91d1c
0008A308 131800b9 str      w19, [x0, #0x18]
0008A30C e0018052 mov      w0, #0xf
0008A310 b48314b8 stur     w20, [x29, #-0xb8]
0008A314 1c1c0094 bl       #0x91384
0008A318 804300f8 stur     x0, [x28, #4]
0008A31C e00319aa mov      x0, x25
0008A320 e1031baa mov      x1, x27
0008A324 7e1e0094 bl       #0x91d1c
0008A328 131800b9 str      w19, [x0, #0x18]
0008A32C 00028052 mov      w0, #0x10
0008A330 b48314b8 stur     w20, [x29, #-0xb8]
0008A334 141c0094 bl       #0x91384
0008A338 804300f8 stur     x0, [x28, #4]
0008A33C e00319aa mov      x0, x25
0008A340 e1031baa mov      x1, x27
0008A344 761e0094 bl       #0x91d1c
0008A348 131800b9 str      w19, [x0, #0x18]
0008A34C 20028052 mov      w0, #0x11
0008A350 b48314b8 stur     w20, [x29, #-0xb8]
0008A354 0c1c0094 bl       #0x91384
0008A358 804300f8 stur     x0, [x28, #4]
0008A35C e00319aa mov      x0, x25
0008A360 e1031baa mov      x1, x27
0008A364 6e1e0094 bl       #0x91d1c
0008A368 131800b9 str      w19, [x0, #0x18]
0008A36C 40028052 mov      w0, #0x12
0008A370 b48314b8 stur     w20, [x29, #-0xb8]
0008A374 041c0094 bl       #0x91384
0008A378 804300f8 stur     x0, [x28, #4]
0008A37C e00319aa mov      x0, x25
0008A380 e1031baa mov      x1, x27
0008A384 661e0094 bl       #0x91d1c
0008A388 131800b9 str      w19, [x0, #0x18]
0008A38C 60028052 mov      w0, #0x13
0008A390 b48314b8 stur     w20, [x29, #-0xb8]
0008A394 fc1b0094 bl       #0x91384
0008A398 804300f8 stur     x0, [x28, #4]
0008A39C e00319aa mov      x0, x25
0008A3A0 e1031baa mov      x1, x27
0008A3A4 5e1e0094 bl       #0x91d1c
0008A3A8 131800b9 str      w19, [x0, #0x18]
0008A3AC 80028052 mov      w0, #0x14
0008A3B0 b48314b8 stur     w20, [x29, #-0xb8]
0008A3B4 f41b0094 bl       #0x91384
0008A3B8 804300f8 stur     x0, [x28, #4]
0008A3BC e00319aa mov      x0, x25
0008A3C0 e1031baa mov      x1, x27
0008A3C4 561e0094 bl       #0x91d1c
0008A3C8 131800b9 str      w19, [x0, #0x18]
0008A3CC a0028052 mov      w0, #0x15
0008A3D0 b48314b8 stur     w20, [x29, #-0xb8]
0008A3D4 ec1b0094 bl       #0x91384
0008A3D8 804300f8 stur     x0, [x28, #4]
0008A3DC e00319aa mov      x0, x25
0008A3E0 e1031baa mov      x1, x27
0008A3E4 4e1e0094 bl       #0x91d1c
0008A3E8 131800b9 str      w19, [x0, #0x18]
0008A3EC c0028052 mov      w0, #0x16
0008A3F0 b48314b8 stur     w20, [x29, #-0xb8]
0008A3F4 e41b0094 bl       #0x91384
0008A3F8 804300f8 stur     x0, [x28, #4]
0008A3FC e00319aa mov      x0, x25
0008A400 e1031baa mov      x1, x27
0008A404 461e0094 bl       #0x91d1c
0008A408 131800b9 str      w19, [x0, #0x18]
0008A40C e0028052 mov      w0, #0x17
0008A410 b48314b8 stur     w20, [x29, #-0xb8]
0008A414 dc1b0094 bl       #0x91384
0008A418 804300f8 stur     x0, [x28, #4]
0008A41C e00319aa mov      x0, x25
0008A420 e1031baa mov      x1, x27
0008A424 3e1e0094 bl       #0x91d1c
0008A428 131800b9 str      w19, [x0, #0x18]
0008A42C 00038052 mov      w0, #0x18
0008A430 b48314b8 stur     w20, [x29, #-0xb8]
0008A434 d41b0094 bl       #0x91384
0008A438 804300f8 stur     x0, [x28, #4]
0008A43C e00319aa mov      x0, x25
0008A440 e1031baa mov      x1, x27
0008A444 361e0094 bl       #0x91d1c
0008A448 131800b9 str      w19, [x0, #0x18]
0008A44C 20038052 mov      w0, #0x19
0008A450 b48314b8 stur     w20, [x29, #-0xb8]
0008A454 cc1b0094 bl       #0x91384
0008A458 804300f8 stur     x0, [x28, #4]
0008A45C e00319aa mov      x0, x25
0008A460 e1031baa mov      x1, x27
0008A464 2e1e0094 bl       #0x91d1c
0008A468 131800b9 str      w19, [x0, #0x18]
0008A46C 40038052 mov      w0, #0x1a
0008A470 b48314b8 stur     w20, [x29, #-0xb8]
0008A474 c41b0094 bl       #0x91384
0008A478 804300f8 stur     x0, [x28, #4]
0008A47C e00319aa mov      x0, x25
0008A480 e1031baa mov      x1, x27
0008A484 261e0094 bl       #0x91d1c
0008A488 131800b9 str      w19, [x0, #0x18]
0008A48C 60038052 mov      w0, #0x1b
0008A490 b48314b8 stur     w20, [x29, #-0xb8]
0008A494 bc1b0094 bl       #0x91384
0008A498 804300f8 stur     x0, [x28, #4]
0008A49C e00319aa mov      x0, x25
0008A4A0 e1031baa mov      x1, x27
0008A4A4 1e1e0094 bl       #0x91d1c
0008A4A8 131800b9 str      w19, [x0, #0x18]
0008A4AC 80038052 mov      w0, #0x1c
0008A4B0 b48314b8 stur     w20, [x29, #-0xb8]
0008A4B4 b41b0094 bl       #0x91384
0008A4B8 804300f8 stur     x0, [x28, #4]
0008A4BC e00319aa mov      x0, x25
0008A4C0 e1031baa mov      x1, x27
0008A4C4 161e0094 bl       #0x91d1c
0008A4C8 131800b9 str      w19, [x0, #0x18]
0008A4CC a0038052 mov      w0, #0x1d
0008A4D0 b48314b8 stur     w20, [x29, #-0xb8]
0008A4D4 ac1b0094 bl       #0x91384
0008A4D8 804300f8 stur     x0, [x28, #4]
0008A4DC e00319aa mov      x0, x25
0008A4E0 f95740f9 ldr      x25, [sp, #0xa8]
0008A4E4 e1031baa mov      x1, x27
0008A4E8 0d1e0094 bl       #0x91d1c
0008A4EC e8a340b9 ldr      w8, [sp, #0xa0]
0008A4F0 f7060011 add      w23, w23, #1
0008A4F4 131800b9 str      w19, [x0, #0x18]
0008A4F8 1f01176b cmp      w8, w23
0008A4FC a1dfff54 b.ne     #0x8a0f0
0008A500 b4feff17 b        #0x89fd0
0008A504 e87f40b9 ldr      w8, [sp, #0x7c]
0008A508 1f050071 cmp      w8, #1
0008A50C f96740b9 ldr      w25, [sp, #0x64]
0008A510 fa2f40f9 ldr      x26, [sp, #0x58]
0008A514 81baff54 b.ne     #0x89c64
0008A518 e84740f9 ldr      x8, [sp, #0x88]
0008A51C c1038052 mov      w1, #0x1e
0008A520 13a940f9 ldr      x19, [x8, #0x150]
0008A524 e00313aa mov      x0, x19
0008A528 44200094 bl       #0x92638
0008A52C f4031f2a mov      w20, wzr
0008A530 08008092 mov      x8, #-1
0008A534 a88315f8 stur     x8, [x29, #-0xa8]
0008A538 06000014 b        #0x8a550
0008A53C 1f2003d5 nop      
0008A540 94060011 add      w20, w20, #1
0008A544 36008052 mov      w22, #1
0008A548 9f7a0071 cmp      w20, #0x1e
0008A54C c0b8ff54 b.eq     #0x89c64
0008A550 b58312f8 stur     x21, [x29, #-0xd8]
0008A554 b50000b4 cbz      x21, #0x8a568
0008A558 e06740f9 ldr      x0, [sp, #0xc8]
0008A55C 080040f9 ldr      x8, [x0]
0008A560 080940f9 ldr      x8, [x8, #0x10]
0008A564 00013fd6 blr      x8
0008A568 e04340f9 ldr      x0, [sp, #0x80]
0008A56C a16303d1 sub      x1, x29, #0xd8
0008A570 a2a302d1 sub      x2, x29, #0xa8
0008A574 e303142a mov      w3, w20
0008A578 66d90594 bl       #0x200b10
0008A57C a08352f8 ldur     x0, [x29, #-0xd8]
0008A580 a00000b4 cbz      x0, #0x8a594
0008A584 088c44f8 ldr      x8, [x0, #0x48]!
0008A588 080d40f9 ldr      x8, [x8, #0x18]
0008A58C 00013fd6 blr      x8
0008A590 bf8312f8 stur     xzr, [x29, #-0xd8]
0008A594 e003142a mov      w0, w20
0008A598 7b1b0094 bl       #0x91384
0008A59C a08314f8 stur     x0, [x29, #-0xb8]
0008A5A0 a1e302d1 sub      x1, x29, #0xb8
0008A5A4 e00313aa mov      x0, x19
0008A5A8 29200094 bl       #0x9264c
0008A5AC f70300aa mov      x23, x0
0008A5B0 161800b9 str      w22, [x0, #0x18]
0008A5B4 b6036b29 ldp      w22, w0, [x29, #-0xa8]
0008A5B8 731b0094 bl       #0x91384
0008A5BC e86b40f9 ldr      x8, [sp, #0xd0]
0008A5C0 3f070071 cmp      w25, #1
0008A5C4 e07300f9 str      x0, [sp, #0xe0]
0008A5C8 e85b1b29 stp      w8, w22, [sp, #0xd8]
0008A5CC e86f40f9 ldr      x8, [sp, #0xd8]
0008A5D0 e88200a9 stp      x8, x0, [x23, #8]
0008A5D4 61fbff54 b.ne     #0x8a540
0008A5D8 b50312f8 stur     x21, [x29, #-0xe0]
0008A5DC b50000b4 cbz      x21, #0x8a5f0
0008A5E0 e06740f9 ldr      x0, [sp, #0xc8]
0008A5E4 080040f9 ldr      x8, [x0]
0008A5E8 080940f9 ldr      x8, [x8, #0x10]
0008A5EC 00013fd6 blr      x8
0008A5F0 a18303d1 sub      x1, x29, #0xe0
0008A5F4 e2630391 add      x2, sp, #0xd8
0008A5F8 e00318aa mov      x0, x24
0008A5FC 73290094 bl       #0x94bc8
0008A600 a00352f8 ldur     x0, [x29, #-0xe0]
0008A604 a00000b4 cbz      x0, #0x8a618
0008A608 088c44f8 ldr      x8, [x0, #0x48]!
0008A60C 080d40f9 ldr      x8, [x8, #0x18]
0008A610 00013fd6 blr      x8
0008A614 bf0312f8 stur     xzr, [x29, #-0xe0]
0008A618 e00315aa mov      x0, x21
0008A61C dbef0594 bl       #0x206588
0008A620 00f90736 tbz      w0, #0, #0x8a540
0008A624 ff1a00b9 str      wzr, [x23, #0x18]
0008A628 c6ffff17 b        #0x8a540
0008A62C b50000b4 cbz      x21, #0x8a640
0008A630 e06740f9 ldr      x0, [sp, #0xc8]
0008A634 080040f9 ldr      x8, [x0]
0008A638 080d40f9 ldr      x8, [x8, #0x18]
0008A63C 00013fd6 blr      x8
0008A640 b73800b0 adrp     x23, #0x79f000
0008A644 01a08052 mov      w1, #0x500
0008A648 f7ee41f9 ldr      x23, [x23, #0x3d8]
0008A64C 82008052 mov      w2, #4
0008A650 e80240f9 ldr      x8, [x23]
0008A654 141541f9 ldr      x20, [x8, #0x228]
0008A658 880240f9 ldr      x8, [x20]
0008A65C e00314aa mov      x0, x20
0008A660 080940f9 ldr      x8, [x8, #0x10]
0008A664 00013fd6 blr      x8
0008A668 f61740f9 ldr      x22, [sp, #0x28]
0008A66C fa2740f9 ldr      x26, [sp, #0x48]
0008A670 fb1f40f9 ldr      x27, [sp, #0x38]
0008A674 f93740b9 ldr      w25, [sp, #0x34]
0008A678 c84e40f9 ldr      x8, [x22, #0x98]
0008A67C 1f4100f1 cmp      x8, #0x10
0008A680 a07a0054 b.eq     #0x8b5d4
0008A684 e91340f9 ldr      x9, [sp, #0x20]
0008A688 02a08052 mov      w2, #0x500
0008A68C e1031f2a mov      w1, wzr
0008A690 f30300aa mov      x19, x0
0008A694 347928f8 str      x20, [x9, x8, lsl #3]
0008A698 c84e40f9 ldr      x8, [x22, #0x98]
0008A69C 08050091 add      x8, x8, #1
0008A6A0 c84e00f9 str      x8, [x22, #0x98]
0008A6A4 abae1594 bl       #0x5f6150
0008A6A8 c84e40f9 ldr      x8, [x22, #0x98]
0008A6AC 080500d1 sub      x8, x8, #1
0008A6B0 c84e00f9 str      x8, [x22, #0x98]
0008A6B4 617741f9 ldr      x1, [x27, #0x2e8]
0008A6B8 737701f9 str      x19, [x27, #0x2e8]
0008A6BC 010100b4 cbz      x1, #0x8a6dc
0008A6C0 607b41f9 ldr      x0, [x27, #0x2f0]
0008A6C4 627f41f9 ldr      x2, [x27, #0x2f8]
0008A6C8 638341f9 ldr      x3, [x27, #0x300]
0008A6CC 080040f9 ldr      x8, [x0]
0008A6D0 080d40f9 ldr      x8, [x8, #0x18]
0008A6D4 00013fd6 blr      x8
0008A6D8 737741f9 ldr      x19, [x27, #0x2e8]
0008A6DC 747b01f9 str      x20, [x27, #0x2f0]
0008A6E0 746741f9 ldr      x20, [x27, #0x2c8]
0008A6E4 08a08052 mov      w8, #0x500
0008A6E8 687f01f9 str      x8, [x27, #0x2f8]
0008A6EC 88008052 mov      w8, #4
0008A6F0 688301f9 str      x8, [x27, #0x300]
0008A6F4 b50000b4 cbz      x21, #0x8a708
0008A6F8 e06740f9 ldr      x0, [sp, #0xc8]
0008A6FC 080040f9 ldr      x8, [x0]
0008A700 080940f9 ldr      x8, [x8, #0x10]
0008A704 00013fd6 blr      x8
0008A708 e86740b9 ldr      w8, [sp, #0x64]
0008A70C 18ca8852 mov      w24, #0x4650
0008A710 e20314aa mov      x2, x20
0008A714 e103182a mov      w1, w24
0008A718 e30313aa mov      x3, x19
0008A71C 1f010071 cmp      w8, #0
0008A720 e80240f9 ldr      x8, [x23]
0008A724 f6179f1a cset     w22, eq
0008A728 e403162a mov      w4, w22
0008A72C 171541f9 ldr      x23, [x8, #0x228]
0008A730 e8630391 add      x8, sp, #0xd8
0008A734 e00317aa mov      x0, x23
0008A738 b4310094 bl       #0x96e08
0008A73C e0630391 add      x0, sp, #0xd8
0008A740 a14302d1 sub      x1, x29, #0x90
0008A744 12320094 bl       #0x96f8c
0008A748 a8a302d1 sub      x8, x29, #0xa8
0008A74C e00317aa mov      x0, x23
0008A750 e103182a mov      w1, w24
0008A754 e20314aa mov      x2, x20
0008A758 e30313aa mov      x3, x19
0008A75C e403162a mov      w4, w22
0008A760 aa310094 bl       #0x96e08
0008A764 a0a302d1 sub      x0, x29, #0xa8
0008A768 a14302d1 sub      x1, x29, #0x90
0008A76C 08320094 bl       #0x96f8c
0008A770 b58314f8 stur     x21, [x29, #-0xb8]
0008A774 b50000b4 cbz      x21, #0x8a788
0008A778 e06740f9 ldr      x0, [sp, #0xc8]
0008A77C 080040f9 ldr      x8, [x0]
0008A780 080940f9 ldr      x8, [x8, #0x10]
0008A784 00013fd6 blr      x8
0008A788 a0e302d1 sub      x0, x29, #0xb8
0008A78C e1630391 add      x1, sp, #0xd8
0008A790 0b320094 bl       #0x96fbc
0008A794 a08354f8 ldur     x0, [x29, #-0xb8]
0008A798 a00000b4 cbz      x0, #0x8a7ac
0008A79C 088c44f8 ldr      x8, [x0, #0x48]!
0008A7A0 080d40f9 ldr      x8, [x8, #0x18]
0008A7A4 00013fd6 blr      x8
0008A7A8 bf8314f8 stur     xzr, [x29, #-0xb8]
0008A7AC e06f40f9 ldr      x0, [sp, #0xd8]
0008A7B0 a08316f8 stur     x0, [x29, #-0x98]
0008A7B4 800000b4 cbz      x0, #0x8a7c4
0008A7B8 088c44f8 ldr      x8, [x0, #0x48]!
0008A7BC 080940f9 ldr      x8, [x8, #0x10]
0008A7C0 00013fd6 blr      x8
0008A7C4 a06302d1 sub      x0, x29, #0x98
0008A7C8 a1a302d1 sub      x1, x29, #0xa8
0008A7CC 1d330094 bl       #0x97440
0008A7D0 a08356f8 ldur     x0, [x29, #-0x98]
0008A7D4 800000b4 cbz      x0, #0x8a7e4
0008A7D8 088c44f8 ldr      x8, [x0, #0x48]!
0008A7DC 080d40f9 ldr      x8, [x8, #0x18]
0008A7E0 00013fd6 blr      x8
0008A7E4 f36f40f9 ldr      x19, [sp, #0xd8]
0008A7E8 b30000b4 cbz      x19, #0x8a7fc
0008A7EC e00313aa mov      x0, x19
0008A7F0 088c44f8 ldr      x8, [x0, #0x48]!
0008A7F4 080940f9 ldr      x8, [x8, #0x10]
0008A7F8 00013fd6 blr      x8
0008A7FC 608741f9 ldr      x0, [x27, #0x308]
0008A800 738701f9 str      x19, [x27, #0x308]
0008A804 800000b4 cbz      x0, #0x8a814
0008A808 088c44f8 ldr      x8, [x0, #0x48]!
0008A80C 080d40f9 ldr      x8, [x8, #0x18]
0008A810 00013fd6 blr      x8
0008A814 b38355f8 ldur     x19, [x29, #-0xa8]
0008A818 b30000b4 cbz      x19, #0x8a82c
0008A81C e00313aa mov      x0, x19
0008A820 088c44f8 ldr      x8, [x0, #0x48]!
0008A824 080940f9 ldr      x8, [x8, #0x10]
0008A828 00013fd6 blr      x8
0008A82C 608b41f9 ldr      x0, [x27, #0x310]
0008A830 738b01f9 str      x19, [x27, #0x310]
0008A834 800000b4 cbz      x0, #0x8a844
0008A838 088c44f8 ldr      x8, [x0, #0x48]!
0008A83C 080d40f9 ldr      x8, [x8, #0x18]
0008A840 00013fd6 blr      x8
0008A844 a08355f8 ldur     x0, [x29, #-0xa8]
0008A848 800000b4 cbz      x0, #0x8a858
0008A84C 088c44f8 ldr      x8, [x0, #0x48]!
0008A850 080d40f9 ldr      x8, [x8, #0x18]
0008A854 00013fd6 blr      x8
0008A858 e06f40f9 ldr      x0, [sp, #0xd8]
0008A85C 800000b4 cbz      x0, #0x8a86c
0008A860 088c44f8 ldr      x8, [x0, #0x48]!
0008A864 080d40f9 ldr      x8, [x8, #0x18]
0008A868 00013fd6 blr      x8
0008A86C b50000b4 cbz      x21, #0x8a880
0008A870 e06740f9 ldr      x0, [sp, #0xc8]
0008A874 080040f9 ldr      x8, [x0]
0008A878 080d40f9 ldr      x8, [x8, #0x18]
0008A87C 00013fd6 blr      x8
0008A880 e86740b9 ldr      w8, [sp, #0x64]
0008A884 1f050071 cmp      w8, #1
0008A888 68008052 mov      w8, #3
0008A88C 09059f1a csinc    w9, w8, wzr, eq
0008A890 691f00b9 str      w9, [x27, #0x1c]
0008A894 59000037 tbnz     w25, #0, #0x8a89c
0008A898 682300b9 str      w8, [x27, #0x20]
0008A89C 2800c0d2 mov      x8, #0x100000000
0008A8A0 684302f8 stur     x8, [x27, #0x24]
0008A8A4 e86740b9 ldr      w8, [sp, #0x64]
0008A8A8 1f050071 cmp      w8, #1
0008A8AC a1000054 b.ne     #0x8a8c0
0008A8B0 38640694 bl       #0x223990
0008A8B4 711a0094 bl       #0x91278
0008A8B8 60c302f8 stur     x0, [x27, #0x2c]
0008A8BC 613700b9 str      w1, [x27, #0x34]
0008A8C0 b50000b4 cbz      x21, #0x8a8d4
0008A8C4 a88e44f8 ldr      x8, [x21, #0x48]!
0008A8C8 e00315aa mov      x0, x21
0008A8CC 080d40f9 ldr      x8, [x8, #0x18]
0008A8D0 00013fd6 blr      x8
0008A8D4 686741f9 ldr      x8, [x27, #0x2c8]
0008A8D8 483b00f9 str      x8, [x26, #0x70]
0008A8DC 687741f9 ldr      x8, [x27, #0x2e8]
0008A8E0 483f00f9 str      x8, [x26, #0x78]
0008A8E4 688741f9 ldr      x8, [x27, #0x308]
0008A8E8 484300f9 str      x8, [x26, #0x80]
0008A8EC 688b41f9 ldr      x8, [x27, #0x310]
0008A8F0 484700f9 str      x8, [x26, #0x88]
0008A8F4 d35c0694 bl       #0x221c40
0008A8F8 f3031aaa mov      x19, x26
0008A8FC a13800d0 adrp     x1, #0x7a0000
0008A900 e8630391 add      x8, sp, #0xd8
0008A904 608e09b8 str      w0, [x19, #0x98]!
0008A908 a08351f8 ldur     x0, [x29, #-0xe8]
0008A90C 21c842f9 ldr      x1, [x1, #0x590]
0008A910 2d47ff97 bl       #0x5c5c4
0008A914 60ee40f9 ldr      x0, [x19, #0x1d8]
0008A918 800000b4 cbz      x0, #0x8a928
0008A91C 088c44f8 ldr      x8, [x0, #0x48]!
0008A920 080d40f9 ldr      x8, [x8, #0x18]
0008A924 00013fd6 blr      x8
0008A928 e86f40f9 ldr      x8, [sp, #0xd8]
0008A92C a13800d0 adrp     x1, #0x7a0000
0008A930 483b01f9 str      x8, [x26, #0x270]
0008A934 a08351f8 ldur     x0, [x29, #-0xe8]
0008A938 e8630391 add      x8, sp, #0xd8
0008A93C 21c842f9 ldr      x1, [x1, #0x590]
0008A940 2147ff97 bl       #0x5c5c4
0008A944 403f41f9 ldr      x0, [x26, #0x278]
0008A948 800000b4 cbz      x0, #0x8a958
0008A94C 088c44f8 ldr      x8, [x0, #0x48]!
0008A950 080d40f9 ldr      x8, [x8, #0x18]
0008A954 00013fd6 blr      x8
0008A958 e86f40f9 ldr      x8, [sp, #0xd8]
0008A95C 483f01f9 str      x8, [x26, #0x278]
0008A960 e82b40f9 ldr      x8, [sp, #0x50]
0008A964 17c97392 and      x23, x8, #0xffffffffffffe000
0008A968 e84e40f9 ldr      x8, [x23, #0x98]
0008A96C 1f4100f1 cmp      x8, #0x10
0008A970 20630054 b.eq     #0x8b5d4
0008A974 b48351f8 ldur     x20, [x29, #-0xe8]
0008A978 f8620091 add      x24, x23, #0x18
0008A97C 014a8052 mov      w1, #0x250
0008A980 02028052 mov      w2, #0x10
0008A984 f36b00f9 str      x19, [sp, #0xd0]
0008A988 e00314aa mov      x0, x20
0008A98C 147b28f8 str      x20, [x24, x8, lsl #3]
0008A990 e84e40f9 ldr      x8, [x23, #0x98]
0008A994 08050091 add      x8, x8, #1
0008A998 e84e00f9 str      x8, [x23, #0x98]
0008A99C 880240f9 ldr      x8, [x20]
0008A9A0 080940f9 ldr      x8, [x8, #0x10]
0008A9A4 00013fd6 blr      x8
0008A9A8 f30300aa mov      x19, x0
0008A9AC a00000b5 cbnz     x0, #0x8a9c0
0008A9B0 880240f9 ldr      x8, [x20]
0008A9B4 e00314aa mov      x0, x20
0008A9B8 085d40f9 ldr      x8, [x8, #0xb8]
0008A9BC 00013fd6 blr      x8
0008A9C0 a38351f8 ldur     x3, [x29, #-0xe8]
0008A9C4 e00313aa mov      x0, x19
0008A9C8 21008052 mov      w1, #1
0008A9CC 02088052 mov      w2, #0x40
0008A9D0 1564ff97 bl       #0x63a24
0008A9D4 084a8052 mov      w8, #0x250
0008A9D8 09028052 mov      w9, #0x10
0008A9DC e00313aa mov      x0, x19
0008A9E0 74ce00a9 stp      x20, x19, [x19, #8]
0008A9E4 68a601a9 stp      x8, x9, [x19, #0x18]
0008A9E8 e84e40f9 ldr      x8, [x23, #0x98]
0008A9EC 080500d1 sub      x8, x8, #1
0008A9F0 e84e00f9 str      x8, [x23, #0x98]
0008A9F4 088c44f8 ldr      x8, [x0, #0x48]!
0008A9F8 080940f9 ldr      x8, [x8, #0x10]
0008A9FC 00013fd6 blr      x8
0008AA00 404341f9 ldr      x0, [x26, #0x280]
0008AA04 800000b4 cbz      x0, #0x8aa14
0008AA08 088c44f8 ldr      x8, [x0, #0x48]!
0008AA0C 080d40f9 ldr      x8, [x8, #0x18]
0008AA10 00013fd6 blr      x8
0008AA14 a08351f8 ldur     x0, [x29, #-0xe8]
0008AA18 e8630391 add      x8, sp, #0xd8
0008AA1C a1a303d1 sub      x1, x29, #0xe8
0008AA20 534301f9 str      x19, [x26, #0x280]
0008AA24 530a0094 bl       #0x8d370
0008AA28 404741f9 ldr      x0, [x26, #0x288]
0008AA2C 800000b4 cbz      x0, #0x8aa3c
0008AA30 088c44f8 ldr      x8, [x0, #0x48]!
0008AA34 080d40f9 ldr      x8, [x8, #0x18]
0008AA38 00013fd6 blr      x8
0008AA3C e06f40f9 ldr      x0, [sp, #0xd8]
0008AA40 404701f9 str      x0, [x26, #0x288]
0008AA44 78ef0594 bl       #0x206824
0008AA48 b30351f8 ldur     x19, [x29, #-0xf0]
0008AA4C b30000b4 cbz      x19, #0x8aa60
0008AA50 e00313aa mov      x0, x19
0008AA54 088c44f8 ldr      x8, [x0, #0x48]!
0008AA58 080940f9 ldr      x8, [x8, #0x10]
0008AA5C 00013fd6 blr      x8
0008AA60 404b41f9 ldr      x0, [x26, #0x290]
0008AA64 534b01f9 str      x19, [x26, #0x290]
0008AA68 800000b4 cbz      x0, #0x8aa78
0008AA6C 088c44f8 ldr      x8, [x0, #0x48]!
0008AA70 080d40f9 ldr      x8, [x8, #0x18]
0008AA74 00013fd6 blr      x8
0008AA78 f9031faa mov      x25, xzr
0008AA7C 5a630a91 add      x26, x26, #0x298
0008AA80 13168052 mov      w19, #0xb0
0008AA84 1b018052 mov      w27, #8
0008AA88 1c048052 mov      w28, #0x20
0008AA8C 05000014 b        #0x8aaa0
0008AA90 39070091 add      x25, x25, #1
0008AA94 5a230091 add      x26, x26, #8
0008AA98 3f1700f1 cmp      x25, #5
0008AA9C a0070054 b.eq     #0x8ab90
0008AAA0 f6031faa mov      x22, xzr
0008AAA4 1c000014 b        #0x8ab14
0008AAA8 1f2003d5 nop      
0008AAAC 1f2003d5 nop      
0008AAB0 a80240f9 ldr      x8, [x21]
0008AAB4 e00315aa mov      x0, x21
0008AAB8 085d40f9 ldr      x8, [x8, #0xb8]
0008AABC 00013fd6 blr      x8
0008AAC0 a18351f8 ldur     x1, [x29, #-0xe8]
0008AAC4 e0031faa mov      x0, xzr
0008AAC8 c8ed0594 bl       #0x2061e8
0008AACC 08028052 mov      w8, #0x10
0008AAD0 750300f9 str      x21, [x27]
0008AAD4 1f0100f9 str      xzr, [x8]
0008AAD8 08038052 mov      w8, #0x18
0008AADC 130100f9 str      x19, [x8]
0008AAE0 9b0300f9 str      x27, [x28]
0008AAE4 e84e40f9 ldr      x8, [x23, #0x98]
0008AAE8 080500d1 sub      x8, x8, #1
0008AAEC e84e00f9 str      x8, [x23, #0x98]
0008AAF0 406b76f8 ldr      x0, [x26, x22]
0008AAF4 800000b4 cbz      x0, #0x8ab04
0008AAF8 088c44f8 ldr      x8, [x0, #0x48]!
0008AAFC 080d40f9 ldr      x8, [x8, #0x18]
0008AB00 00013fd6 blr      x8
0008AB04 546b36f8 str      x20, [x26, x22]
0008AB08 d6a20091 add      x22, x22, #0x28
0008AB0C dfc203f1 cmp      x22, #0xf0
0008AB10 00fcff54 b.eq     #0x8aa90
0008AB14 e84e40f9 ldr      x8, [x23, #0x98]
0008AB18 1f4100f1 cmp      x8, #0x10
0008AB1C c0550054 b.eq     #0x8b5d4
0008AB20 b58351f8 ldur     x21, [x29, #-0xe8]
0008AB24 e10313aa mov      x1, x19
0008AB28 02018052 mov      w2, #8
0008AB2C 157b28f8 str      x21, [x24, x8, lsl #3]
0008AB30 e00315aa mov      x0, x21
0008AB34 e84e40f9 ldr      x8, [x23, #0x98]
0008AB38 08050091 add      x8, x8, #1
0008AB3C e84e00f9 str      x8, [x23, #0x98]
0008AB40 a80240f9 ldr      x8, [x21]
0008AB44 080940f9 ldr      x8, [x8, #0x10]
0008AB48 00013fd6 blr      x8
0008AB4C f40300aa mov      x20, x0
0008AB50 00fbffb4 cbz      x0, #0x8aab0
0008AB54 a18351f8 ldur     x1, [x29, #-0xe8]
0008AB58 e00314aa mov      x0, x20
0008AB5C a3ed0594 bl       #0x2061e8
0008AB60 95d200a9 stp      x21, x20, [x20, #8]
0008AB64 e00314aa mov      x0, x20
0008AB68 93ee01a9 stp      x19, x27, [x20, #0x18]
0008AB6C e84e40f9 ldr      x8, [x23, #0x98]
0008AB70 080500d1 sub      x8, x8, #1
0008AB74 e84e00f9 str      x8, [x23, #0x98]
0008AB78 088c44f8 ldr      x8, [x0, #0x48]!
0008AB7C 080940f9 ldr      x8, [x8, #0x10]
0008AB80 00013fd6 blr      x8
0008AB84 406b76f8 ldr      x0, [x26, x22]
0008AB88 80fbffb5 cbnz     x0, #0x8aaf8
0008AB8C deffff17 b        #0x8ab04
0008AB90 a08351f8 ldur     x0, [x29, #-0xe8]
0008AB94 e8630391 add      x8, sp, #0xd8
0008AB98 a1a303d1 sub      x1, x29, #0xe8
0008AB9C f5090094 bl       #0x8d370
0008ABA0 fa2740f9 ldr      x26, [sp, #0x48]
0008ABA4 40c741f9 ldr      x0, [x26, #0x388]
0008ABA8 800000b4 cbz      x0, #0x8abb8
0008ABAC 088c44f8 ldr      x8, [x0, #0x48]!
0008ABB0 080d40f9 ldr      x8, [x8, #0x18]
0008ABB4 00013fd6 blr      x8
0008ABB8 e86f40f9 ldr      x8, [sp, #0xd8]
0008ABBC 4a930291 add      x10, x26, #0xa4
0008ABC0 4b530391 add      x11, x26, #0xd4
0008ABC4 493340f9 ldr      x9, [x26, #0x60]
0008ABC8 4d630391 add      x13, x26, #0xd8
0008ABCC 4eb30391 add      x14, x26, #0xec
0008ABD0 f42340f9 ldr      x20, [sp, #0x40]
0008ABD4 54cb01f9 str      x20, [x26, #0x390]
0008ABD8 48c701f9 str      x8, [x26, #0x388]
0008ABDC 890200f9 str      x9, [x20]
0008ABE0 ef0740f9 ldr      x15, [sp, #8]
0008ABE4 49430291 add      x9, x26, #0x90
0008ABE8 f90f40f9 ldr      x25, [sp, #0x18]
0008ABEC 483740f9 ldr      x8, [x26, #0x68]
0008ABF0 880600f9 str      x8, [x20, #8]
0008ABF4 483b40f9 ldr      x8, [x26, #0x70]
0008ABF8 880a00f9 str      x8, [x20, #0x10]
0008ABFC 483f40f9 ldr      x8, [x26, #0x78]
0008AC00 880e00f9 str      x8, [x20, #0x18]
0008AC04 48e30291 add      x8, x26, #0xb8
0008AC08 4c4340f9 ldr      x12, [x26, #0x80]
0008AC0C 8c1200f9 str      x12, [x20, #0x20]
0008AC10 4c4740f9 ldr      x12, [x26, #0x88]
0008AC14 8c1600f9 str      x12, [x20, #0x28]
0008AC18 893e03a9 stp      x9, x15, [x20, #0x30]
0008AC1C ef6b40f9 ldr      x15, [sp, #0xd0]
0008AC20 8f2a04a9 stp      x15, x10, [x20, #0x40]
0008AC24 4f030491 add      x15, x26, #0x100
0008AC28 882e05a9 stp      x8, x11, [x20, #0x50]
0008AC2C 48430491 add      x8, x26, #0x110
0008AC30 49e30591 add      x9, x26, #0x178
0008AC34 4a530491 add      x10, x26, #0x114
0008AC38 4b630491 add      x11, x26, #0x118
0008AC3C 8d3a06a9 stp      x13, x14, [x20, #0x60]
0008AC40 8f2207a9 stp      x15, x8, [x20, #0x70]
0008AC44 48c30591 add      x8, x26, #0x170
0008AC48 8a2e08a9 stp      x10, x11, [x20, #0x80]
0008AC4C 884a00f9 str      x8, [x20, #0x90]
0008AC50 48d30591 add      x8, x26, #0x174
0008AC54 88a609a9 stp      x8, x9, [x20, #0x98]
0008AC58 48030691 add      x8, x26, #0x180
0008AC5C 49330691 add      x9, x26, #0x18c
0008AC60 88a60aa9 stp      x8, x9, [x20, #0xa8]
0008AC64 48930691 add      x8, x26, #0x1a4
0008AC68 49a30691 add      x9, x26, #0x1a8
0008AC6C 88a60ba9 stp      x8, x9, [x20, #0xb8]
0008AC70 48a70691 add      x8, x26, #0x1a9
0008AC74 49ab0691 add      x9, x26, #0x1aa
0008AC78 88a60ca9 stp      x8, x9, [x20, #0xc8]
0008AC7C 48b30691 add      x8, x26, #0x1ac
0008AC80 886e00f9 str      x8, [x20, #0xd8]
0008AC84 530b41f9 ldr      x19, [x26, #0x210]
0008AC88 b30000b4 cbz      x19, #0x8ac9c
0008AC8C e00313aa mov      x0, x19
0008AC90 088c44f8 ldr      x8, [x0, #0x48]!
0008AC94 080940f9 ldr      x8, [x8, #0x10]
0008AC98 00013fd6 blr      x8
0008AC9C 807240f9 ldr      x0, [x20, #0xe0]
0008ACA0 937200f9 str      x19, [x20, #0xe0]
0008ACA4 800000b4 cbz      x0, #0x8acb4
0008ACA8 088c44f8 ldr      x8, [x0, #0x48]!
0008ACAC 080d40f9 ldr      x8, [x8, #0x18]
0008ACB0 00013fd6 blr      x8
0008ACB4 530f41f9 ldr      x19, [x26, #0x218]
0008ACB8 b30000b4 cbz      x19, #0x8accc
0008ACBC e00313aa mov      x0, x19
0008ACC0 088c44f8 ldr      x8, [x0, #0x48]!
0008ACC4 080940f9 ldr      x8, [x8, #0x10]
0008ACC8 00013fd6 blr      x8
0008ACCC 807640f9 ldr      x0, [x20, #0xe8]
0008ACD0 937600f9 str      x19, [x20, #0xe8]
0008ACD4 800000b4 cbz      x0, #0x8ace4
0008ACD8 088c44f8 ldr      x8, [x0, #0x48]!
0008ACDC 080d40f9 ldr      x8, [x8, #0x18]
0008ACE0 00013fd6 blr      x8
0008ACE4 531341f9 ldr      x19, [x26, #0x220]
0008ACE8 b30000b4 cbz      x19, #0x8acfc
0008ACEC e00313aa mov      x0, x19
0008ACF0 088c44f8 ldr      x8, [x0, #0x48]!
0008ACF4 080940f9 ldr      x8, [x8, #0x10]
0008ACF8 00013fd6 blr      x8
0008ACFC 807a40f9 ldr      x0, [x20, #0xf0]
0008AD00 937a00f9 str      x19, [x20, #0xf0]
0008AD04 800000b4 cbz      x0, #0x8ad14
0008AD08 088c44f8 ldr      x8, [x0, #0x48]!
0008AD0C 080d40f9 ldr      x8, [x8, #0x18]
0008AD10 00013fd6 blr      x8
0008AD14 531741f9 ldr      x19, [x26, #0x228]
0008AD18 b30000b4 cbz      x19, #0x8ad2c
0008AD1C e00313aa mov      x0, x19
0008AD20 088c44f8 ldr      x8, [x0, #0x48]!
0008AD24 080940f9 ldr      x8, [x8, #0x10]
0008AD28 00013fd6 blr      x8
0008AD2C 807e40f9 ldr      x0, [x20, #0xf8]
0008AD30 937e00f9 str      x19, [x20, #0xf8]
0008AD34 800000b4 cbz      x0, #0x8ad44
0008AD38 088c44f8 ldr      x8, [x0, #0x48]!
0008AD3C 080d40f9 ldr      x8, [x8, #0x18]
0008AD40 00013fd6 blr      x8
0008AD44 531b41f9 ldr      x19, [x26, #0x230]
0008AD48 b30000b4 cbz      x19, #0x8ad5c
0008AD4C e00313aa mov      x0, x19
0008AD50 088c44f8 ldr      x8, [x0, #0x48]!
0008AD54 080940f9 ldr      x8, [x8, #0x10]
0008AD58 00013fd6 blr      x8
0008AD5C 808240f9 ldr      x0, [x20, #0x100]
0008AD60 938200f9 str      x19, [x20, #0x100]
0008AD64 800000b4 cbz      x0, #0x8ad74
0008AD68 088c44f8 ldr      x8, [x0, #0x48]!
0008AD6C 080d40f9 ldr      x8, [x8, #0x18]
0008AD70 00013fd6 blr      x8
0008AD74 531f41f9 ldr      x19, [x26, #0x238]
0008AD78 b30000b4 cbz      x19, #0x8ad8c
0008AD7C e00313aa mov      x0, x19
0008AD80 088c44f8 ldr      x8, [x0, #0x48]!
0008AD84 080940f9 ldr      x8, [x8, #0x10]
0008AD88 00013fd6 blr      x8
0008AD8C 808640f9 ldr      x0, [x20, #0x108]
0008AD90 938600f9 str      x19, [x20, #0x108]
0008AD94 800000b4 cbz      x0, #0x8ada4
0008AD98 088c44f8 ldr      x8, [x0, #0x48]!
0008AD9C 080d40f9 ldr      x8, [x8, #0x18]
0008ADA0 00013fd6 blr      x8
0008ADA4 532341f9 ldr      x19, [x26, #0x240]
0008ADA8 b30000b4 cbz      x19, #0x8adbc
0008ADAC e00313aa mov      x0, x19
0008ADB0 088c44f8 ldr      x8, [x0, #0x48]!
0008ADB4 080940f9 ldr      x8, [x8, #0x10]
0008ADB8 00013fd6 blr      x8
0008ADBC 808a40f9 ldr      x0, [x20, #0x110]
0008ADC0 938a00f9 str      x19, [x20, #0x110]
0008ADC4 800000b4 cbz      x0, #0x8add4
0008ADC8 088c44f8 ldr      x8, [x0, #0x48]!
0008ADCC 080d40f9 ldr      x8, [x8, #0x18]
0008ADD0 00013fd6 blr      x8
0008ADD4 532741f9 ldr      x19, [x26, #0x248]
0008ADD8 b30000b4 cbz      x19, #0x8adec
0008ADDC e00313aa mov      x0, x19
0008ADE0 088c44f8 ldr      x8, [x0, #0x48]!
0008ADE4 080940f9 ldr      x8, [x8, #0x10]
0008ADE8 00013fd6 blr      x8
0008ADEC 808e40f9 ldr      x0, [x20, #0x118]
0008ADF0 938e00f9 str      x19, [x20, #0x118]
0008ADF4 800000b4 cbz      x0, #0x8ae04
0008ADF8 088c44f8 ldr      x8, [x0, #0x48]!
0008ADFC 080d40f9 ldr      x8, [x8, #0x18]
0008AE00 00013fd6 blr      x8
0008AE04 532b41f9 ldr      x19, [x26, #0x250]
0008AE08 b30000b4 cbz      x19, #0x8ae1c
0008AE0C 68de41f9 ldr      x8, [x19, #0x3b8]
0008AE10 60e20e91 add      x0, x19, #0x3b8
0008AE14 080940f9 ldr      x8, [x8, #0x10]
0008AE18 00013fd6 blr      x8
0008AE1C 889240f9 ldr      x8, [x20, #0x120]
0008AE20 939200f9 str      x19, [x20, #0x120]
0008AE24 a80000b4 cbz      x8, #0x8ae38
0008AE28 00e10e91 add      x0, x8, #0x3b8
0008AE2C 08dd41f9 ldr      x8, [x8, #0x3b8]
0008AE30 080d40f9 ldr      x8, [x8, #0x18]
0008AE34 00013fd6 blr      x8
0008AE38 532f41f9 ldr      x19, [x26, #0x258]
0008AE3C b30000b4 cbz      x19, #0x8ae50
0008AE40 68de41f9 ldr      x8, [x19, #0x3b8]
0008AE44 60e20e91 add      x0, x19, #0x3b8
0008AE48 080940f9 ldr      x8, [x8, #0x10]
0008AE4C 00013fd6 blr      x8
0008AE50 889640f9 ldr      x8, [x20, #0x128]
0008AE54 939600f9 str      x19, [x20, #0x128]
0008AE58 a80000b4 cbz      x8, #0x8ae6c
0008AE5C 00e10e91 add      x0, x8, #0x3b8
0008AE60 08dd41f9 ldr      x8, [x8, #0x3b8]
0008AE64 080d40f9 ldr      x8, [x8, #0x18]
0008AE68 00013fd6 blr      x8
0008AE6C 533341f9 ldr      x19, [x26, #0x260]
0008AE70 b30000b4 cbz      x19, #0x8ae84
0008AE74 68de41f9 ldr      x8, [x19, #0x3b8]
0008AE78 60e20e91 add      x0, x19, #0x3b8
0008AE7C 080940f9 ldr      x8, [x8, #0x10]
0008AE80 00013fd6 blr      x8
0008AE84 889a40f9 ldr      x8, [x20, #0x130]
0008AE88 939a00f9 str      x19, [x20, #0x130]
0008AE8C a80000b4 cbz      x8, #0x8aea0
0008AE90 00e10e91 add      x0, x8, #0x3b8
0008AE94 08dd41f9 ldr      x8, [x8, #0x3b8]
0008AE98 080d40f9 ldr      x8, [x8, #0x18]
0008AE9C 00013fd6 blr      x8
0008AEA0 533741f9 ldr      x19, [x26, #0x268]
0008AEA4 b30000b4 cbz      x19, #0x8aeb8
0008AEA8 e00313aa mov      x0, x19
0008AEAC 088c44f8 ldr      x8, [x0, #0x48]!
0008AEB0 080940f9 ldr      x8, [x8, #0x10]
0008AEB4 00013fd6 blr      x8
0008AEB8 809e40f9 ldr      x0, [x20, #0x138]
0008AEBC 939e00f9 str      x19, [x20, #0x138]
0008AEC0 800000b4 cbz      x0, #0x8aed0
0008AEC4 088c44f8 ldr      x8, [x0, #0x48]!
0008AEC8 080d40f9 ldr      x8, [x8, #0x18]
0008AECC 00013fd6 blr      x8
0008AED0 533b41f9 ldr      x19, [x26, #0x270]
0008AED4 b30000b4 cbz      x19, #0x8aee8
0008AED8 e00313aa mov      x0, x19
0008AEDC 088c44f8 ldr      x8, [x0, #0x48]!
0008AEE0 080940f9 ldr      x8, [x8, #0x10]
0008AEE4 00013fd6 blr      x8
0008AEE8 80a240f9 ldr      x0, [x20, #0x140]
0008AEEC 93a200f9 str      x19, [x20, #0x140]
0008AEF0 800000b4 cbz      x0, #0x8af00
0008AEF4 088c44f8 ldr      x8, [x0, #0x48]!
0008AEF8 080d40f9 ldr      x8, [x8, #0x18]
0008AEFC 00013fd6 blr      x8
0008AF00 533f41f9 ldr      x19, [x26, #0x278]
0008AF04 b30000b4 cbz      x19, #0x8af18
0008AF08 e00313aa mov      x0, x19
0008AF0C 088c44f8 ldr      x8, [x0, #0x48]!
0008AF10 080940f9 ldr      x8, [x8, #0x10]
0008AF14 00013fd6 blr      x8
0008AF18 80a640f9 ldr      x0, [x20, #0x148]
0008AF1C 93a600f9 str      x19, [x20, #0x148]
0008AF20 800000b4 cbz      x0, #0x8af30
0008AF24 088c44f8 ldr      x8, [x0, #0x48]!
0008AF28 080d40f9 ldr      x8, [x8, #0x18]
0008AF2C 00013fd6 blr      x8
0008AF30 534741f9 ldr      x19, [x26, #0x288]
0008AF34 b30000b4 cbz      x19, #0x8af48
0008AF38 e00313aa mov      x0, x19
0008AF3C 088c44f8 ldr      x8, [x0, #0x48]!
0008AF40 080940f9 ldr      x8, [x8, #0x10]
0008AF44 00013fd6 blr      x8
0008AF48 80aa40f9 ldr      x0, [x20, #0x150]
0008AF4C 93aa00f9 str      x19, [x20, #0x150]
0008AF50 800000b4 cbz      x0, #0x8af60
0008AF54 088c44f8 ldr      x8, [x0, #0x48]!
0008AF58 080d40f9 ldr      x8, [x8, #0x18]
0008AF5C 00013fd6 blr      x8
0008AF60 534b41f9 ldr      x19, [x26, #0x290]
0008AF64 b30000b4 cbz      x19, #0x8af78
0008AF68 e00313aa mov      x0, x19
0008AF6C 088c44f8 ldr      x8, [x0, #0x48]!
0008AF70 080940f9 ldr      x8, [x8, #0x10]
0008AF74 00013fd6 blr      x8
0008AF78 80ae40f9 ldr      x0, [x20, #0x158]
0008AF7C 93ae00f9 str      x19, [x20, #0x158]
0008AF80 800000b4 cbz      x0, #0x8af90
0008AF84 088c44f8 ldr      x8, [x0, #0x48]!
0008AF88 080d40f9 ldr      x8, [x8, #0x18]
0008AF8C 00013fd6 blr      x8
0008AF90 f3031faa mov      x19, xzr
0008AF94 94820591 add      x20, x20, #0x160
0008AF98 55830d91 add      x21, x26, #0x360
0008AF9C 04000014 b        #0x8afac
0008AFA0 73220091 add      x19, x19, #8
0008AFA4 7fa200f1 cmp      x19, #0x28
0008AFA8 80090054 b.eq     #0x8b0d8
0008AFAC b702138b add      x23, x21, x19
0008AFB0 f68253f8 ldur     x22, [x23, #-0xc8]
0008AFB4 b60000b4 cbz      x22, #0x8afc8
0008AFB8 e00316aa mov      x0, x22
0008AFBC 088c44f8 ldr      x8, [x0, #0x48]!
0008AFC0 080940f9 ldr      x8, [x8, #0x10]
0008AFC4 00013fd6 blr      x8
0008AFC8 806a73f8 ldr      x0, [x20, x19]
0008AFCC 966a33f8 str      x22, [x20, x19]
0008AFD0 800000b4 cbz      x0, #0x8afe0
0008AFD4 088c44f8 ldr      x8, [x0, #0x48]!
0008AFD8 080d40f9 ldr      x8, [x8, #0x18]
0008AFDC 00013fd6 blr      x8
0008AFE0 f80256f8 ldur     x24, [x23, #-0xa0]
0008AFE4 b80000b4 cbz      x24, #0x8aff8
0008AFE8 e00318aa mov      x0, x24
0008AFEC 088c44f8 ldr      x8, [x0, #0x48]!
0008AFF0 080940f9 ldr      x8, [x8, #0x10]
0008AFF4 00013fd6 blr      x8
0008AFF8 9602138b add      x22, x20, x19
0008AFFC c01640f9 ldr      x0, [x22, #0x28]
0008B000 d81600f9 str      x24, [x22, #0x28]
0008B004 800000b4 cbz      x0, #0x8b014
0008B008 088c44f8 ldr      x8, [x0, #0x48]!
0008B00C 080d40f9 ldr      x8, [x8, #0x18]
0008B010 00013fd6 blr      x8
0008B014 f88258f8 ldur     x24, [x23, #-0x78]
0008B018 b80000b4 cbz      x24, #0x8b02c
0008B01C e00318aa mov      x0, x24
0008B020 088c44f8 ldr      x8, [x0, #0x48]!
0008B024 080940f9 ldr      x8, [x8, #0x10]
0008B028 00013fd6 blr      x8
0008B02C c02a40f9 ldr      x0, [x22, #0x50]
0008B030 d82a00f9 str      x24, [x22, #0x50]
0008B034 800000b4 cbz      x0, #0x8b044
0008B038 088c44f8 ldr      x8, [x0, #0x48]!
0008B03C 080d40f9 ldr      x8, [x8, #0x18]
0008B040 00013fd6 blr      x8
0008B044 f8025bf8 ldur     x24, [x23, #-0x50]
0008B048 b80000b4 cbz      x24, #0x8b05c
0008B04C e00318aa mov      x0, x24
0008B050 088c44f8 ldr      x8, [x0, #0x48]!
0008B054 080940f9 ldr      x8, [x8, #0x10]
0008B058 00013fd6 blr      x8
0008B05C c03e40f9 ldr      x0, [x22, #0x78]
0008B060 d83e00f9 str      x24, [x22, #0x78]
0008B064 800000b4 cbz      x0, #0x8b074
0008B068 088c44f8 ldr      x8, [x0, #0x48]!
0008B06C 080d40f9 ldr      x8, [x8, #0x18]
0008B070 00013fd6 blr      x8
0008B074 f7825df8 ldur     x23, [x23, #-0x28]
0008B078 b70000b4 cbz      x23, #0x8b08c
0008B07C e00317aa mov      x0, x23
0008B080 088c44f8 ldr      x8, [x0, #0x48]!
0008B084 080940f9 ldr      x8, [x8, #0x10]
0008B088 00013fd6 blr      x8
0008B08C c05240f9 ldr      x0, [x22, #0xa0]
0008B090 d75200f9 str      x23, [x22, #0xa0]
0008B094 800000b4 cbz      x0, #0x8b0a4
0008B098 088c44f8 ldr      x8, [x0, #0x48]!
0008B09C 080d40f9 ldr      x8, [x8, #0x18]
0008B0A0 00013fd6 blr      x8
0008B0A4 b76a73f8 ldr      x23, [x21, x19]
0008B0A8 b70000b4 cbz      x23, #0x8b0bc
0008B0AC e00317aa mov      x0, x23
0008B0B0 088c44f8 ldr      x8, [x0, #0x48]!
0008B0B4 080940f9 ldr      x8, [x8, #0x10]
0008B0B8 00013fd6 blr      x8
0008B0BC c06640f9 ldr      x0, [x22, #0xc8]
0008B0C0 d76600f9 str      x23, [x22, #0xc8]
0008B0C4 e0f6ffb4 cbz      x0, #0x8afa0
0008B0C8 088c44f8 ldr      x8, [x0, #0x48]!
0008B0CC 080d40f9 ldr      x8, [x8, #0x18]
0008B0D0 00013fd6 blr      x8
0008B0D4 b3ffff17 b        #0x8afa0
0008B0D8 53c741f9 ldr      x19, [x26, #0x388]
0008B0DC b30000b4 cbz      x19, #0x8b0f0
0008B0E0 e00313aa mov      x0, x19
0008B0E4 088c44f8 ldr      x8, [x0, #0x48]!
0008B0E8 080940f9 ldr      x8, [x8, #0x10]
0008B0EC 00013fd6 blr      x8
0008B0F0 e82340f9 ldr      x8, [sp, #0x40]
0008B0F4 002941f9 ldr      x0, [x8, #0x250]
0008B0F8 132901f9 str      x19, [x8, #0x250]
0008B0FC 800000b4 cbz      x0, #0x8b10c
0008B100 088c44f8 ldr      x8, [x0, #0x48]!
0008B104 080d40f9 ldr      x8, [x8, #0x18]
0008B108 00013fd6 blr      x8
0008B10C a00351f8 ldur     x0, [x29, #-0xf0]
0008B110 800000b4 cbz      x0, #0x8b120
0008B114 088c44f8 ldr      x8, [x0, #0x48]!
0008B118 080d40f9 ldr      x8, [x8, #0x18]
0008B11C 00013fd6 blr      x8
0008B120 482b41f9 ldr      x8, [x26, #0x250]
0008B124 a54302d1 sub      x5, x29, #0x90
0008B128 492f41f9 ldr      x9, [x26, #0x258]
0008B12C a82737a9 stp      x8, x9, [x29, #-0x90]
0008B130 489740b9 ldr      w8, [x26, #0x94]
0008B134 4a3341f9 ldr      x10, [x26, #0x260]
0008B138 209b46f9 ldr      x0, [x25, #0xd30]
0008B13C aa0318f8 stur     x10, [x29, #-0x80]
0008B140 1f010071 cmp      w8, #0
0008B144 420f47a9 ldp      x2, x3, [x26, #0x70]
0008B148 e10b40f9 ldr      x1, [sp, #0x10]
0008B14C e4179f1a cset     w4, eq
0008B150 45460094 bl       #0x9ca64
0008B154 48cb41f9 ldr      x8, [x26, #0x390]
0008B158 008d43f9 ldr      x0, [x8, #0x718]
0008B15C 802400b4 cbz      x0, #0x8b5ec
0008B160 215346f9 ldr      x1, [x25, #0xca0]
0008B164 5d4a0094 bl       #0x9dad8
0008B168 285346f9 ldr      x8, [x25, #0xca0]
0008B16C 080d40b9 ldr      w8, [x8, #0xc]
0008B170 1f050071 cmp      w8, #1
0008B174 a00e0054 b.eq     #0x8b348
0008B178 205f40f9 ldr      x0, [x25, #0xb8]
0008B17C a84302d1 sub      x8, x29, #0x90
0008B180 e1031f2a mov      w1, wzr
0008B184 5329fe97 bl       #0x156d0
0008B188 a00357f8 ldur     x0, [x29, #-0x90]
0008B18C 133040f9 ldr      x19, [x0, #0x60]
0008B190 f30000b4 cbz      x19, #0x8b1ac
0008B194 e00313aa mov      x0, x19
0008B198 088c44f8 ldr      x8, [x0, #0x48]!
0008B19C 080940f9 ldr      x8, [x8, #0x10]
0008B1A0 00013fd6 blr      x8
0008B1A4 a00357f8 ldur     x0, [x29, #-0x90]
0008B1A8 800000b4 cbz      x0, #0x8b1b8
0008B1AC 088c44f8 ldr      x8, [x0, #0x48]!
0008B1B0 080d40f9 ldr      x8, [x8, #0x18]
0008B1B4 00013fd6 blr      x8
0008B1B8 205f40f9 ldr      x0, [x25, #0xb8]
0008B1BC a84302d1 sub      x8, x29, #0x90
0008B1C0 21008052 mov      w1, #1
0008B1C4 4329fe97 bl       #0x156d0
0008B1C8 a00357f8 ldur     x0, [x29, #-0x90]
0008B1CC 143040f9 ldr      x20, [x0, #0x60]
0008B1D0 f40000b4 cbz      x20, #0x8b1ec
0008B1D4 e00314aa mov      x0, x20
0008B1D8 088c44f8 ldr      x8, [x0, #0x48]!
0008B1DC 080940f9 ldr      x8, [x8, #0x10]
0008B1E0 00013fd6 blr      x8
0008B1E4 a00357f8 ldur     x0, [x29, #-0x90]
0008B1E8 800000b4 cbz      x0, #0x8b1f8
0008B1EC 088c44f8 ldr      x8, [x0, #0x48]!
0008B1F0 080d40f9 ldr      x8, [x8, #0x18]
0008B1F4 00013fd6 blr      x8
0008B1F8 483340f9 ldr      x8, [x26, #0x60]
0008B1FC 403b41f9 ldr      x0, [x26, #0x270]
0008B200 150140b9 ldr      w21, [x8]
0008B204 a08310f8 stur     x0, [x29, #-0xf8]
0008B208 800000b4 cbz      x0, #0x8b218
0008B20C 088c44f8 ldr      x8, [x0, #0x48]!
0008B210 080940f9 ldr      x8, [x8, #0x10]
0008B214 00013fd6 blr      x8
0008B218 403f41f9 ldr      x0, [x26, #0x278]
0008B21C a00310f8 stur     x0, [x29, #-0x100]
0008B220 800000b4 cbz      x0, #0x8b230
0008B224 088c44f8 ldr      x8, [x0, #0x48]!
0008B228 080940f9 ldr      x8, [x8, #0x10]
0008B22C 00013fd6 blr      x8
0008B230 404341f9 ldr      x0, [x26, #0x280]
0008B234 e08700f9 str      x0, [sp, #0x108]
0008B238 800000b4 cbz      x0, #0x8b248
0008B23C 088c44f8 ldr      x8, [x0, #0x48]!
0008B240 080940f9 ldr      x8, [x8, #0x10]
0008B244 00013fd6 blr      x8
0008B248 f38300f9 str      x19, [sp, #0x100]
0008B24C b30000b4 cbz      x19, #0x8b260
0008B250 e00313aa mov      x0, x19
0008B254 088c44f8 ldr      x8, [x0, #0x48]!
0008B258 080940f9 ldr      x8, [x8, #0x10]
0008B25C 00013fd6 blr      x8
0008B260 f47f00f9 str      x20, [sp, #0xf8]
0008B264 b40000b4 cbz      x20, #0x8b278
0008B268 e00314aa mov      x0, x20
0008B26C 088c44f8 ldr      x8, [x0, #0x48]!
0008B270 080940f9 ldr      x8, [x8, #0x10]
0008B274 00013fd6 blr      x8
0008B278 253f4db9 ldr      w5, [x25, #0xd3c]
0008B27C bf0a0071 cmp      w21, #2
0008B280 a0e303d1 sub      x0, x29, #0xf8
0008B284 463b40f9 ldr      x6, [x26, #0x70]
0008B288 e8179f1a cset     w8, eq
0008B28C a10304d1 sub      x1, x29, #0x100
0008B290 479740b9 ldr      w7, [x26, #0x94]
0008B294 e2230491 add      x2, sp, #0x108
0008B298 e3030491 add      x3, sp, #0x100
0008B29C e4e30391 add      x4, sp, #0xf8
0008B2A0 e8030039 strb     w8, [sp]
0008B2A4 47250194 bl       #0xd47c0
0008B2A8 e07f40f9 ldr      x0, [sp, #0xf8]
0008B2AC a00000b4 cbz      x0, #0x8b2c0
0008B2B0 088c44f8 ldr      x8, [x0, #0x48]!
0008B2B4 080d40f9 ldr      x8, [x8, #0x18]
0008B2B8 00013fd6 blr      x8
0008B2BC ff7f00f9 str      xzr, [sp, #0xf8]
0008B2C0 e08340f9 ldr      x0, [sp, #0x100]
0008B2C4 a00000b4 cbz      x0, #0x8b2d8
0008B2C8 088c44f8 ldr      x8, [x0, #0x48]!
0008B2CC 080d40f9 ldr      x8, [x8, #0x18]
0008B2D0 00013fd6 blr      x8
0008B2D4 ff8300f9 str      xzr, [sp, #0x100]
0008B2D8 e08740f9 ldr      x0, [sp, #0x108]
0008B2DC a00000b4 cbz      x0, #0x8b2f0
0008B2E0 088c44f8 ldr      x8, [x0, #0x48]!
0008B2E4 080d40f9 ldr      x8, [x8, #0x18]
0008B2E8 00013fd6 blr      x8
0008B2EC ff8700f9 str      xzr, [sp, #0x108]
0008B2F0 a00350f8 ldur     x0, [x29, #-0x100]
0008B2F4 a00000b4 cbz      x0, #0x8b308
0008B2F8 088c44f8 ldr      x8, [x0, #0x48]!
0008B2FC 080d40f9 ldr      x8, [x8, #0x18]
0008B300 00013fd6 blr      x8
0008B304 bf0310f8 stur     xzr, [x29, #-0x100]
0008B308 a08350f8 ldur     x0, [x29, #-0xf8]
0008B30C a00000b4 cbz      x0, #0x8b320
0008B310 088c44f8 ldr      x8, [x0, #0x48]!
0008B314 080d40f9 ldr      x8, [x8, #0x18]
0008B318 00013fd6 blr      x8
0008B31C bf8310f8 stur     xzr, [x29, #-0xf8]
0008B320 b40000b4 cbz      x20, #0x8b334
0008B324 888e44f8 ldr      x8, [x20, #0x48]!
0008B328 e00314aa mov      x0, x20
0008B32C 080d40f9 ldr      x8, [x8, #0x18]
0008B330 00013fd6 blr      x8
0008B334 b30000b4 cbz      x19, #0x8b348
0008B338 688e44f8 ldr      x8, [x19, #0x48]!
0008B33C e00313aa mov      x0, x19
0008B340 080d40f9 ldr      x8, [x8, #0x18]
0008B344 00013fd6 blr      x8
0008B348 f2ac1594 bl       #0x5f6710
0008B34C f5ac1594 bl       #0x5f6720
0008B350 209b46f9 ldr      x0, [x25, #0xd30]
0008B354 812c00b0 adrp     x1, #0x61c000
0008B358 21a83291 add      x1, x1, #0xcaa
0008B35C 02008012 mov      w2, #-1
0008B360 23028052 mov      w3, #0x11
0008B364 080040f9 ldr      x8, [x0]
0008B368 082140f9 ldr      x8, [x8, #0x40]
0008B36C 00013fd6 blr      x8
0008B370 28008052 mov      w8, #1
0008B374 495791d2 mov      x9, #0x8aba
0008B378 e993b5f2 movk     x9, #0xac9f, lsl #16
0008B37C 282f0db9 str      w8, [x25, #0xd2c]
0008B380 a83a00d0 adrp     x8, #0x7e1000
0008B384 08811491 add      x8, x8, #0x520
0008B388 e9f8cef2 movk     x9, #0x77c7, lsl #32
0008B38C e936e2f2 movk     x9, #0x11b7, lsl #48
0008B390 140140f9 ldr      x20, [x8]
0008B394 6a2c00d0 adrp     x10, #0x619000
0008B398 4a1d3591 add      x10, x10, #0xd47
0008B39C a8038052 mov      w8, #0x1d
0008B3A0 e9ab0da9 stp      x9, x10, [sp, #0xd8]
0008B3A4 e00314aa mov      x0, x20
0008B3A8 e8ff0ea9 stp      x8, xzr, [sp, #0xe8]
0008B3AC 1a8e0994 bl       #0x2eec14
0008B3B0 f30300aa mov      x19, x0
0008B3B4 e1630391 add      x1, sp, #0xd8
0008B3B8 e00314aa mov      x0, x20
0008B3BC e20313aa mov      x2, x19
0008B3C0 bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
0008B3C4 e3031f2a mov      w3, wzr
0008B3C8 bf7f3da9 stp      xzr, xzr, [x29, #-0x30]
0008B3CC bf7f3ca9 stp      xzr, xzr, [x29, #-0x40]
0008B3D0 bf7f3ba9 stp      xzr, xzr, [x29, #-0x50]
0008B3D4 bf7f3aa9 stp      xzr, xzr, [x29, #-0x60]
0008B3D8 bf7f39a9 stp      xzr, xzr, [x29, #-0x70]
0008B3DC bf7f38a9 stp      xzr, xzr, [x29, #-0x80]
0008B3E0 bf7f37a9 stp      xzr, xzr, [x29, #-0x90]
0008B3E4 5f900994 bl       #0x2ef560
0008B3E8 00020034 cbz      w0, #0x8b428
0008B3EC e203002a mov      w2, w0
0008B3F0 800a41f9 ldr      x0, [x20, #0x210]
0008B3F4 e1630391 add      x1, sp, #0xd8
0008B3F8 a54302d1 sub      x5, x29, #0x90
0008B3FC e30313aa mov      x3, x19
0008B400 e4031f2a mov      w4, wzr
0008B404 e6031faa mov      x6, xzr
0008B408 b44302d1 sub      x20, x29, #0x90
0008B40C 6c4cff97 bl       #0x5e5bc
0008B410 a88357f8 ldur     x8, [x29, #-0x88]
0008B414 a80000b4 cbz      x8, #0x8b428
0008B418 80820091 add      x0, x20, #0x20
0008B41C bf7f38a9 stp      xzr, xzr, [x29, #-0x80]
0008B420 bf7f37a9 stp      xzr, xzr, [x29, #-0x90]
0008B424 00013fd6 blr      x8
0008B428 e07b40f9 ldr      x0, [sp, #0xf0]
0008B42C 800000b4 cbz      x0, #0x8b43c
0008B430 088c44f8 ldr      x8, [x0, #0x48]!
0008B434 080d40f9 ldr      x8, [x8, #0x18]
0008B438 00013fd6 blr      x8
0008B43C 205f40f9 ldr      x0, [x25, #0xb8]
0008B440 a84302d1 sub      x8, x29, #0x90
0008B444 e1031f2a mov      w1, wzr
0008B448 a228fe97 bl       #0x156d0
0008B44C a00357f8 ldur     x0, [x29, #-0x90]
0008B450 133040f9 ldr      x19, [x0, #0x60]
0008B454 f30000b4 cbz      x19, #0x8b470
0008B458 e00313aa mov      x0, x19
0008B45C 088c44f8 ldr      x8, [x0, #0x48]!
0008B460 080940f9 ldr      x8, [x8, #0x10]
0008B464 00013fd6 blr      x8
0008B468 a00357f8 ldur     x0, [x29, #-0x90]
0008B46C 800000b4 cbz      x0, #0x8b47c
0008B470 088c44f8 ldr      x8, [x0, #0x48]!
0008B474 080d40f9 ldr      x8, [x8, #0x18]
0008B478 00013fd6 blr      x8
0008B47C 20e742f9 ldr      x0, [x25, #0x5c8]
0008B480 48cf94d2 mov      x8, #0xa67a
0008B484 68ffa6f2 movk     x8, #0x37fb, lsl #16
0008B488 e8f5c6f2 movk     x8, #0x37af, lsl #32
0008B48C 483fe5f2 movk     x8, #0x29fa, lsl #48
0008B490 492c0090 adrp     x9, #0x613000
0008B494 29012c91 add      x9, x9, #0xb00
0008B498 a82737a9 stp      x8, x9, [x29, #-0x90]
0008B49C 88028052 mov      w8, #0x14
0008B4A0 a14302d1 sub      x1, x29, #0x90
0008B4A4 a87f38a9 stp      x8, xzr, [x29, #-0x80]
0008B4A8 1e0c0094 bl       #0x8e520
0008B4AC f50300aa mov      x21, x0
0008B4B0 a08358f8 ldur     x0, [x29, #-0x78]
0008B4B4 800000b4 cbz      x0, #0x8b4c4
0008B4B8 088c44f8 ldr      x8, [x0, #0x48]!
0008B4BC 080d40f9 ldr      x8, [x8, #0x18]
0008B4C0 00013fd6 blr      x8
0008B4C4 550900b4 cbz      x21, #0x8b5ec
0008B4C8 f36f00f9 str      x19, [sp, #0xd8]
0008B4CC b30000b4 cbz      x19, #0x8b4e0
0008B4D0 e00313aa mov      x0, x19
0008B4D4 088c44f8 ldr      x8, [x0, #0x48]!
0008B4D8 080940f9 ldr      x8, [x8, #0x10]
0008B4DC 00013fd6 blr      x8
0008B4E0 34630391 add      x20, x25, #0xd8
0008B4E4 e00314aa mov      x0, x20
0008B4E8 2592fe97 bl       #0x2fd7c
0008B4EC e07300f9 str      x0, [sp, #0xe0]
0008B4F0 e1630391 add      x1, sp, #0xd8
0008B4F4 e00315aa mov      x0, x21
0008B4F8 74280194 bl       #0xd56c8
0008B4FC 20e742f9 ldr      x0, [x25, #0x5c8]
0008B500 48168ed2 mov      x8, #0x70b2
0008B504 a8d5b9f2 movk     x8, #0xcead, lsl #16
0008B508 c884dbf2 movk     x8, #0xdc26, lsl #32
0008B50C 4880e1f2 movk     x8, #0xc02, lsl #48
0008B510 092c00f0 adrp     x9, #0x60e000
0008B514 29e50a91 add      x9, x9, #0x2b9
0008B518 a82737a9 stp      x8, x9, [x29, #-0x90]
0008B51C e8028052 mov      w8, #0x17
0008B520 a14302d1 sub      x1, x29, #0x90
0008B524 a87f38a9 stp      x8, xzr, [x29, #-0x80]
0008B528 8a0c0094 bl       #0x8e750
0008B52C f50300aa mov      x21, x0
0008B530 a08358f8 ldur     x0, [x29, #-0x78]
0008B534 800000b4 cbz      x0, #0x8b544
0008B538 088c44f8 ldr      x8, [x0, #0x48]!
0008B53C 080d40f9 ldr      x8, [x8, #0x18]
0008B540 00013fd6 blr      x8
0008B544 550500b4 cbz      x21, #0x8b5ec
0008B548 f60315aa mov      x22, x21
0008B54C c88e44f8 ldr      x8, [x22, #0x48]!
0008B550 e00316aa mov      x0, x22
0008B554 080940f9 ldr      x8, [x8, #0x10]
0008B558 00013fd6 blr      x8
0008B55C e00314aa mov      x0, x20
0008B560 0792fe97 bl       #0x2fd7c
0008B564 a00317f8 stur     x0, [x29, #-0x90]
0008B568 a14302d1 sub      x1, x29, #0x90
0008B56C e00315aa mov      x0, x21
0008B570 ffdcfe97 bl       #0x4296c
0008B574 c80240f9 ldr      x8, [x22]
0008B578 e00316aa mov      x0, x22
0008B57C 080d40f9 ldr      x8, [x8, #0x18]
0008B580 00013fd6 blr      x8
0008B584 e06f40f9 ldr      x0, [sp, #0xd8]
0008B588 800000b4 cbz      x0, #0x8b598
0008B58C 088c44f8 ldr      x8, [x0, #0x48]!
0008B590 080d40f9 ldr      x8, [x8, #0x18]
0008B594 00013fd6 blr      x8
0008B598 b30000b4 cbz      x19, #0x8b5ac
0008B59C 688e44f8 ldr      x8, [x19, #0x48]!
0008B5A0 e00313aa mov      x0, x19
0008B5A4 080d40f9 ldr      x8, [x8, #0x18]
0008B5A8 00013fd6 blr      x8
0008B5AC e0031f2a mov      w0, wzr
0008B5B0 54ac1594 bl       #0x5f6700
0008B5B4 ff430891 add      sp, sp, #0x210
0008B5B8 f44f45a9 ldp      x20, x19, [sp, #0x50]
0008B5BC f65744a9 ldp      x22, x21, [sp, #0x40]
0008B5C0 f85f43a9 ldp      x24, x23, [sp, #0x30]
0008B5C4 fa6742a9 ldp      x26, x25, [sp, #0x20]
0008B5C8 fc6f41a9 ldp      x28, x27, [sp, #0x10]
0008B5CC fd7bc6a8 ldp      x29, x30, [sp], #0x60
0008B5D0 c0035fd6 ret      
0008B5D4 8fddfd97 bl       #0x2c10
0008B5D8 3f0300f9 str      xzr, [x25]
0008B5DC 617741f9 ldr      x1, [x27, #0x2e8]
0008B5E0 7f7701f9 str      xzr, [x27, #0x2e8]
0008B5E4 e127ffb5 cbnz     x1, #0x89ae0
0008B5E8 44f9ff17 b        #0x89af8
0008B5EC 55ab1594 bl       #0x5f6340
~~~
### 0x8c130 (654 slots)
~~~asm
0008C130 ffc301d1 sub      sp, sp, #0x70
0008C134 fd7b03a9 stp      x29, x30, [sp, #0x30]
0008C138 f72300f9 str      x23, [sp, #0x40]
0008C13C f65705a9 stp      x22, x21, [sp, #0x50]
0008C140 f44f06a9 stp      x20, x19, [sp, #0x60]
0008C144 fdc30091 add      x29, sp, #0x30
0008C148 f40300aa mov      x20, x0
0008C14C 00a441f9 ldr      x0, [x0, #0x348]
0008C150 f30308aa mov      x19, x8
0008C154 080040f9 ldr      x8, [x0]
0008C158 090940f9 ldr      x9, [x8, #0x10]
0008C15C e8230091 add      x8, sp, #8
0008C160 20013fd6 blr      x9
0008C164 f60740f9 ldr      x22, [sp, #8]
0008C168 d60b00b4 cbz      x22, #0x8c2e0
0008C16C d53240f9 ldr      x21, [x22, #0x60]
0008C170 f50100b4 cbz      x21, #0x8c1ac
0008C174 a80240f9 ldr      x8, [x21]
0008C178 e00315aa mov      x0, x21
0008C17C 080140f9 ldr      x8, [x8]
0008C180 00013fd6 blr      x8
0008C184 f70300aa mov      x23, x0
0008C188 46050094 bl       #0x8d6a0
0008C18C 1f0017eb cmp      x0, x23
0008C190 c0000054 b.eq     #0x8c1a8
0008C194 f70240f9 ldr      x23, [x23]
0008C198 ff0200eb cmp      x23, x0
0008C19C e41a40fa ccmp     x23, #0, #4, ne
0008C1A0 a1ffff54 b.ne     #0x8c194
0008C1A4 370900b4 cbz      x23, #0x8c2c8
0008C1A8 b54201d1 sub      x21, x21, #0x50
0008C1AC c88e44f8 ldr      x8, [x22, #0x48]!
0008C1B0 e00316aa mov      x0, x22
0008C1B4 080d40f9 ldr      x8, [x8, #0x18]
0008C1B8 00013fd6 blr      x8
0008C1BC 350900b4 cbz      x21, #0x8c2e0
0008C1C0 b6a243b9 ldr      w22, [x21, #0x3a0]
0008C1C4 e00315aa mov      x0, x21
0008C1C8 f6ef0094 bl       #0xc81a0
0008C1CC c8060051 sub      w8, w22, #1
0008C1D0 1f650071 cmp      w8, #0x19
0008C1D4 282d0054 b.hi     #0x8c778
0008C1D8 c92c00b0 adrp     x9, #0x625000
0008C1DC 29e92391 add      x9, x9, #0x8fa
0008C1E0 8a000010 adr      x10, #0x8c1f0
0008C1E4 2b796878 ldrh     w11, [x9, x8, lsl #1]
0008C1E8 4a090b8b add      x10, x10, x11, lsl #2
0008C1EC 40011fd6 br       x10
0008C1F0 80e642f9 ldr      x0, [x20, #0x5c8]
0008C1F4 88539bd2 mov      x8, #0xda9c
0008C1F8 2869b1f2 movk     x8, #0x8b49, lsl #16
0008C1FC e886cef2 movk     x8, #0x7437, lsl #32
0008C200 e8a7eef2 movk     x8, #0x753f, lsl #48
0008C204 492c00d0 adrp     x9, #0x616000
0008C208 29511f91 add      x9, x9, #0x7d4
0008C20C e8a700a9 stp      x8, x9, [sp, #8]
0008C210 08018052 mov      w8, #8
0008C214 e1230091 add      x1, sp, #8
0008C218 e8ff01a9 stp      x8, xzr, [sp, #0x18]
0008C21C d9090094 bl       #0x8e980
0008C220 f60300aa mov      x22, x0
0008C224 e01340f9 ldr      x0, [sp, #0x20]
0008C228 800000b4 cbz      x0, #0x8c238
0008C22C 088c44f8 ldr      x8, [x0, #0x48]!
0008C230 080d40f9 ldr      x8, [x8, #0x18]
0008C234 00013fd6 blr      x8
0008C238 80e642f9 ldr      x0, [x20, #0x5c8]
0008C23C 286496d2 mov      x8, #0xb321
0008C240 888abef2 movk     x8, #0xf454, lsl #16
0008C244 48c3c2f2 movk     x8, #0x161a, lsl #32
0008C248 28e8ecf2 movk     x8, #0x6741, lsl #48
0008C24C 492c00b0 adrp     x9, #0x615000
0008C250 29093191 add      x9, x9, #0xc42
0008C254 e8a700a9 stp      x8, x9, [sp, #8]
0008C258 28018052 mov      w8, #9
0008C25C e1230091 add      x1, sp, #8
0008C260 e8ff01a9 stp      x8, xzr, [sp, #0x18]
0008C264 530a0094 bl       #0x8ebb0
0008C268 f70300aa mov      x23, x0
0008C26C e01340f9 ldr      x0, [sp, #0x20]
0008C270 800000b4 cbz      x0, #0x8c280
0008C274 088c44f8 ldr      x8, [x0, #0x48]!
0008C278 080d40f9 ldr      x8, [x8, #0x18]
0008C27C 00013fd6 blr      x8
0008C280 160300b4 cbz      x22, #0x8c2e0
0008C284 f70200b4 cbz      x23, #0x8c2e0
0008C288 e00316aa mov      x0, x22
0008C28C c2dc0094 bl       #0xc3594
0008C290 885246f9 ldr      x8, [x20, #0xca0]
0008C294 080d40b9 ldr      w8, [x8, #0xc]
0008C298 1f090071 cmp      w8, #2
0008C29C a0440054 b.eq     #0x8cb30
0008C2A0 1f050071 cmp      w8, #1
0008C2A4 a1440054 b.ne     #0x8cb38
0008C2A8 a8a601b9 str      w8, [x21, #0x1a4]
0008C2AC 885246f9 ldr      x8, [x20, #0xca0]
0008C2B0 081940b9 ldr      w8, [x8, #0x18]
0008C2B4 48440034 cbz      w8, #0x8cb3c
0008C2B8 e8230091 add      x8, sp, #8
0008C2BC e00314aa mov      x0, x20
0008C2C0 56020094 bl       #0x8cc18
0008C2C4 21020014 b        #0x8cb48
0008C2C8 f5031faa mov      x21, xzr
0008C2CC c88e44f8 ldr      x8, [x22, #0x48]!
0008C2D0 e00316aa mov      x0, x22
0008C2D4 080d40f9 ldr      x8, [x8, #0x18]
0008C2D8 00013fd6 blr      x8
0008C2DC 3ff7ffb5 cbnz     xzr, #0x8c1c0
0008C2E0 18a81594 bl       #0x5f6340
0008C2E4 e00314aa mov      x0, x20
0008C2E8 ad64fe97 bl       #0x2559c
0008C2EC 880240f9 ldr      x8, [x20]
0008C2F0 f50300aa mov      x21, x0
0008C2F4 e00314aa mov      x0, x20
0008C2F8 090940f9 ldr      x9, [x8, #0x10]
0008C2FC e8230091 add      x8, sp, #8
0008C300 20013fd6 blr      x9
0008C304 80a641f9 ldr      x0, [x20, #0x348]
0008C308 080040f9 ldr      x8, [x0]
0008C30C 090940f9 ldr      x9, [x8, #0x10]
0008C310 a82300d1 sub      x8, x29, #8
0008C314 20013fd6 blr      x9
0008C318 a07f0091 add      x0, x29, #0x1f
0008C31C e2230091 add      x2, sp, #8
0008C320 a32300d1 sub      x3, x29, #8
0008C324 e10315aa mov      x1, x21
0008C328 ad0a0094 bl       #0x8eddc
0008C32C f40300aa mov      x20, x0
0008C330 a00000b4 cbz      x0, #0x8c344
0008C334 e00314aa mov      x0, x20
0008C338 088c44f8 ldr      x8, [x0, #0x48]!
0008C33C 080940f9 ldr      x8, [x8, #0x10]
0008C340 00013fd6 blr      x8
0008C344 a0835ff8 ldur     x0, [x29, #-8]
0008C348 800000b4 cbz      x0, #0x8c358
0008C34C 088c44f8 ldr      x8, [x0, #0x48]!
0008C350 080d40f9 ldr      x8, [x8, #0x18]
0008C354 00013fd6 blr      x8
0008C358 e00740f9 ldr      x0, [sp, #8]
0008C35C 800000b4 cbz      x0, #0x8c36c
0008C360 088c44f8 ldr      x8, [x0, #0x48]!
0008C364 080d40f9 ldr      x8, [x8, #0x18]
0008C368 00013fd6 blr      x8
0008C36C 740200f9 str      x20, [x19]
0008C370 f44f46a9 ldp      x20, x19, [sp, #0x60]
0008C374 f72340f9 ldr      x23, [sp, #0x40]
0008C378 f65745a9 ldp      x22, x21, [sp, #0x50]
0008C37C fd7b43a9 ldp      x29, x30, [sp, #0x30]
0008C380 ffc30191 add      sp, sp, #0x70
0008C384 c0035fd6 ret      
0008C388 e00314aa mov      x0, x20
0008C38C 8464fe97 bl       #0x2559c
0008C390 880240f9 ldr      x8, [x20]
0008C394 f50300aa mov      x21, x0
0008C398 e00314aa mov      x0, x20
0008C39C 090940f9 ldr      x9, [x8, #0x10]
0008C3A0 e8230091 add      x8, sp, #8
0008C3A4 20013fd6 blr      x9
0008C3A8 80a641f9 ldr      x0, [x20, #0x348]
0008C3AC 080040f9 ldr      x8, [x0]
0008C3B0 090940f9 ldr      x9, [x8, #0x10]
0008C3B4 a82300d1 sub      x8, x29, #8
0008C3B8 20013fd6 blr      x9
0008C3BC a07f0091 add      x0, x29, #0x1f
0008C3C0 e2230091 add      x2, sp, #8
0008C3C4 a32300d1 sub      x3, x29, #8
0008C3C8 e10315aa mov      x1, x21
0008C3CC 180b0094 bl       #0x8f02c
0008C3D0 f40300aa mov      x20, x0
0008C3D4 00fbffb5 cbnz     x0, #0x8c334
0008C3D8 dbffff17 b        #0x8c344
0008C3DC e00314aa mov      x0, x20
0008C3E0 6f64fe97 bl       #0x2559c
0008C3E4 880240f9 ldr      x8, [x20]
0008C3E8 f50300aa mov      x21, x0
0008C3EC e00314aa mov      x0, x20
0008C3F0 090940f9 ldr      x9, [x8, #0x10]
0008C3F4 e8230091 add      x8, sp, #8
0008C3F8 20013fd6 blr      x9
0008C3FC 80a641f9 ldr      x0, [x20, #0x348]
0008C400 080040f9 ldr      x8, [x0]
0008C404 090940f9 ldr      x9, [x8, #0x10]
0008C408 a82300d1 sub      x8, x29, #8
0008C40C 20013fd6 blr      x9
0008C410 a07f0091 add      x0, x29, #0x1f
0008C414 e2230091 add      x2, sp, #8
0008C418 a32300d1 sub      x3, x29, #8
0008C41C e10315aa mov      x1, x21
0008C420 4d0b0094 bl       #0x8f154
0008C424 f40300aa mov      x20, x0
0008C428 60f8ffb5 cbnz     x0, #0x8c334
0008C42C c6ffff17 b        #0x8c344
0008C430 e00314aa mov      x0, x20
0008C434 5a64fe97 bl       #0x2559c
0008C438 880240f9 ldr      x8, [x20]
0008C43C f50300aa mov      x21, x0
0008C440 e00314aa mov      x0, x20
0008C444 090940f9 ldr      x9, [x8, #0x10]
0008C448 e8230091 add      x8, sp, #8
0008C44C 20013fd6 blr      x9
0008C450 80a641f9 ldr      x0, [x20, #0x348]
0008C454 080040f9 ldr      x8, [x0]
0008C458 090940f9 ldr      x9, [x8, #0x10]
0008C45C a82300d1 sub      x8, x29, #8
0008C460 20013fd6 blr      x9
0008C464 a07f0091 add      x0, x29, #0x1f
0008C468 e2230091 add      x2, sp, #8
0008C46C a32300d1 sub      x3, x29, #8
0008C470 e10315aa mov      x1, x21
0008C474 a40a0094 bl       #0x8ef04
0008C478 f40300aa mov      x20, x0
0008C47C c0f5ffb5 cbnz     x0, #0x8c334
0008C480 b1ffff17 b        #0x8c344
0008C484 e00314aa mov      x0, x20
0008C488 4564fe97 bl       #0x2559c
0008C48C 880240f9 ldr      x8, [x20]
0008C490 f50300aa mov      x21, x0
0008C494 e00314aa mov      x0, x20
0008C498 090940f9 ldr      x9, [x8, #0x10]
0008C49C e8230091 add      x8, sp, #8
0008C4A0 20013fd6 blr      x9
0008C4A4 80a641f9 ldr      x0, [x20, #0x348]
0008C4A8 080040f9 ldr      x8, [x0]
0008C4AC 090940f9 ldr      x9, [x8, #0x10]
0008C4B0 a82300d1 sub      x8, x29, #8
0008C4B4 20013fd6 blr      x9
0008C4B8 a07f0091 add      x0, x29, #0x1f
0008C4BC e2230091 add      x2, sp, #8
0008C4C0 a32300d1 sub      x3, x29, #8
0008C4C4 e10315aa mov      x1, x21
0008C4C8 6d0b0094 bl       #0x8f27c
0008C4CC f40300aa mov      x20, x0
0008C4D0 20f3ffb5 cbnz     x0, #0x8c334
0008C4D4 9cffff17 b        #0x8c344
0008C4D8 e00314aa mov      x0, x20
0008C4DC 3064fe97 bl       #0x2559c
0008C4E0 880240f9 ldr      x8, [x20]
0008C4E4 f50300aa mov      x21, x0
0008C4E8 e00314aa mov      x0, x20
0008C4EC 090940f9 ldr      x9, [x8, #0x10]
0008C4F0 e8230091 add      x8, sp, #8
0008C4F4 20013fd6 blr      x9
0008C4F8 80a641f9 ldr      x0, [x20, #0x348]
0008C4FC 080040f9 ldr      x8, [x0]
0008C500 090940f9 ldr      x9, [x8, #0x10]
0008C504 a82300d1 sub      x8, x29, #8
0008C508 20013fd6 blr      x9
0008C50C a07f0091 add      x0, x29, #0x1f
0008C510 e2230091 add      x2, sp, #8
0008C514 a32300d1 sub      x3, x29, #8
0008C518 e10315aa mov      x1, x21
0008C51C a20b0094 bl       #0x8f3a4
0008C520 f40300aa mov      x20, x0
0008C524 80f0ffb5 cbnz     x0, #0x8c334
0008C528 87ffff17 b        #0x8c344
0008C52C e00314aa mov      x0, x20
0008C530 1b64fe97 bl       #0x2559c
0008C534 880240f9 ldr      x8, [x20]
0008C538 f50300aa mov      x21, x0
0008C53C e00314aa mov      x0, x20
0008C540 090940f9 ldr      x9, [x8, #0x10]
0008C544 e8230091 add      x8, sp, #8
0008C548 20013fd6 blr      x9
0008C54C 80a641f9 ldr      x0, [x20, #0x348]
0008C550 080040f9 ldr      x8, [x0]
0008C554 090940f9 ldr      x9, [x8, #0x10]
0008C558 a82300d1 sub      x8, x29, #8
0008C55C 20013fd6 blr      x9
0008C560 a07f0091 add      x0, x29, #0x1f
0008C564 e2230091 add      x2, sp, #8
0008C568 a32300d1 sub      x3, x29, #8
0008C56C e10315aa mov      x1, x21
0008C570 d70b0094 bl       #0x8f4cc
0008C574 f40300aa mov      x20, x0
0008C578 e0edffb5 cbnz     x0, #0x8c334
0008C57C 72ffff17 b        #0x8c344
0008C580 e00314aa mov      x0, x20
0008C584 0664fe97 bl       #0x2559c
0008C588 880240f9 ldr      x8, [x20]
0008C58C f50300aa mov      x21, x0
0008C590 e00314aa mov      x0, x20
0008C594 090940f9 ldr      x9, [x8, #0x10]
0008C598 e8230091 add      x8, sp, #8
0008C59C 20013fd6 blr      x9
0008C5A0 80a641f9 ldr      x0, [x20, #0x348]
0008C5A4 080040f9 ldr      x8, [x0]
0008C5A8 090940f9 ldr      x9, [x8, #0x10]
0008C5AC a82300d1 sub      x8, x29, #8
0008C5B0 20013fd6 blr      x9
0008C5B4 a07f0091 add      x0, x29, #0x1f
0008C5B8 e2230091 add      x2, sp, #8
0008C5BC a32300d1 sub      x3, x29, #8
0008C5C0 e10315aa mov      x1, x21
0008C5C4 0c0c0094 bl       #0x8f5f4
0008C5C8 f40300aa mov      x20, x0
0008C5CC 40ebffb5 cbnz     x0, #0x8c334
0008C5D0 5dffff17 b        #0x8c344
0008C5D4 e00314aa mov      x0, x20
0008C5D8 f163fe97 bl       #0x2559c
0008C5DC 880240f9 ldr      x8, [x20]
0008C5E0 f50300aa mov      x21, x0
0008C5E4 e00314aa mov      x0, x20
0008C5E8 090940f9 ldr      x9, [x8, #0x10]
0008C5EC e8230091 add      x8, sp, #8
0008C5F0 20013fd6 blr      x9
0008C5F4 80a641f9 ldr      x0, [x20, #0x348]
0008C5F8 080040f9 ldr      x8, [x0]
0008C5FC 090940f9 ldr      x9, [x8, #0x10]
0008C600 a82300d1 sub      x8, x29, #8
0008C604 20013fd6 blr      x9
0008C608 a07f0091 add      x0, x29, #0x1f
0008C60C e2230091 add      x2, sp, #8
0008C610 a32300d1 sub      x3, x29, #8
0008C614 e10315aa mov      x1, x21
0008C618 410c0094 bl       #0x8f71c
0008C61C f40300aa mov      x20, x0
0008C620 a0e8ffb5 cbnz     x0, #0x8c334
0008C624 48ffff17 b        #0x8c344
0008C628 e00314aa mov      x0, x20
0008C62C dc63fe97 bl       #0x2559c
0008C630 880240f9 ldr      x8, [x20]
0008C634 f50300aa mov      x21, x0
0008C638 e00314aa mov      x0, x20
0008C63C 090940f9 ldr      x9, [x8, #0x10]
0008C640 e8230091 add      x8, sp, #8
0008C644 20013fd6 blr      x9
0008C648 80a641f9 ldr      x0, [x20, #0x348]
0008C64C 080040f9 ldr      x8, [x0]
0008C650 090940f9 ldr      x9, [x8, #0x10]
0008C654 a82300d1 sub      x8, x29, #8
0008C658 20013fd6 blr      x9
0008C65C a07f0091 add      x0, x29, #0x1f
0008C660 e2230091 add      x2, sp, #8
0008C664 a32300d1 sub      x3, x29, #8
0008C668 e10315aa mov      x1, x21
0008C66C 760c0094 bl       #0x8f844
0008C670 f40300aa mov      x20, x0
0008C674 00e6ffb5 cbnz     x0, #0x8c334
0008C678 33ffff17 b        #0x8c344
0008C67C e00314aa mov      x0, x20
0008C680 c763fe97 bl       #0x2559c
0008C684 880240f9 ldr      x8, [x20]
0008C688 f50300aa mov      x21, x0
0008C68C e00314aa mov      x0, x20
0008C690 090940f9 ldr      x9, [x8, #0x10]
0008C694 e8230091 add      x8, sp, #8
0008C698 20013fd6 blr      x9
0008C69C 80a641f9 ldr      x0, [x20, #0x348]
0008C6A0 080040f9 ldr      x8, [x0]
0008C6A4 090940f9 ldr      x9, [x8, #0x10]
0008C6A8 a82300d1 sub      x8, x29, #8
0008C6AC 20013fd6 blr      x9
0008C6B0 a07f0091 add      x0, x29, #0x1f
0008C6B4 e2230091 add      x2, sp, #8
0008C6B8 a32300d1 sub      x3, x29, #8
0008C6BC e10315aa mov      x1, x21
0008C6C0 ab0c0094 bl       #0x8f96c
0008C6C4 f40300aa mov      x20, x0
0008C6C8 60e3ffb5 cbnz     x0, #0x8c334
0008C6CC 1effff17 b        #0x8c344
0008C6D0 e00314aa mov      x0, x20
0008C6D4 b263fe97 bl       #0x2559c
0008C6D8 880240f9 ldr      x8, [x20]
0008C6DC f50300aa mov      x21, x0
0008C6E0 e00314aa mov      x0, x20
0008C6E4 090940f9 ldr      x9, [x8, #0x10]
0008C6E8 e8230091 add      x8, sp, #8
0008C6EC 20013fd6 blr      x9
0008C6F0 80a641f9 ldr      x0, [x20, #0x348]
0008C6F4 080040f9 ldr      x8, [x0]
0008C6F8 090940f9 ldr      x9, [x8, #0x10]
0008C6FC a82300d1 sub      x8, x29, #8
0008C700 20013fd6 blr      x9
0008C704 a07f0091 add      x0, x29, #0x1f
0008C708 e2230091 add      x2, sp, #8
0008C70C a32300d1 sub      x3, x29, #8
0008C710 e10315aa mov      x1, x21
0008C714 e00c0094 bl       #0x8fa94
0008C718 f40300aa mov      x20, x0
0008C71C c0e0ffb5 cbnz     x0, #0x8c334
0008C720 09ffff17 b        #0x8c344
0008C724 e00314aa mov      x0, x20
0008C728 9d63fe97 bl       #0x2559c
0008C72C 880240f9 ldr      x8, [x20]
0008C730 f50300aa mov      x21, x0
0008C734 e00314aa mov      x0, x20
0008C738 090940f9 ldr      x9, [x8, #0x10]
0008C73C e8230091 add      x8, sp, #8
0008C740 20013fd6 blr      x9
0008C744 80a641f9 ldr      x0, [x20, #0x348]
0008C748 080040f9 ldr      x8, [x0]
0008C74C 090940f9 ldr      x9, [x8, #0x10]
0008C750 a82300d1 sub      x8, x29, #8
0008C754 20013fd6 blr      x9
0008C758 a07f0091 add      x0, x29, #0x1f
0008C75C e2230091 add      x2, sp, #8
0008C760 a32300d1 sub      x3, x29, #8
0008C764 e10315aa mov      x1, x21
0008C768 150d0094 bl       #0x8fbbc
0008C76C f40300aa mov      x20, x0
0008C770 20deffb5 cbnz     x0, #0x8c334
0008C774 f4feff17 b        #0x8c344
0008C778 7f0200f9 str      xzr, [x19]
0008C77C f44f46a9 ldp      x20, x19, [sp, #0x60]
0008C780 f72340f9 ldr      x23, [sp, #0x40]
0008C784 f65745a9 ldp      x22, x21, [sp, #0x50]
0008C788 fd7b43a9 ldp      x29, x30, [sp, #0x30]
0008C78C ffc30191 add      sp, sp, #0x70
0008C790 c0035fd6 ret      
0008C794 e00314aa mov      x0, x20
0008C798 8163fe97 bl       #0x2559c
0008C79C 880240f9 ldr      x8, [x20]
0008C7A0 f50300aa mov      x21, x0
0008C7A4 e00314aa mov      x0, x20
0008C7A8 090940f9 ldr      x9, [x8, #0x10]
0008C7AC e8230091 add      x8, sp, #8
0008C7B0 20013fd6 blr      x9
0008C7B4 80a641f9 ldr      x0, [x20, #0x348]
0008C7B8 080040f9 ldr      x8, [x0]
0008C7BC 090940f9 ldr      x9, [x8, #0x10]
0008C7C0 a82300d1 sub      x8, x29, #8
0008C7C4 20013fd6 blr      x9
0008C7C8 a07f0091 add      x0, x29, #0x1f
0008C7CC e2230091 add      x2, sp, #8
0008C7D0 a32300d1 sub      x3, x29, #8
0008C7D4 e10315aa mov      x1, x21
0008C7D8 470d0094 bl       #0x8fcf4
0008C7DC f40300aa mov      x20, x0
0008C7E0 a0daffb5 cbnz     x0, #0x8c334
0008C7E4 d8feff17 b        #0x8c344
0008C7E8 e00314aa mov      x0, x20
0008C7EC 6c63fe97 bl       #0x2559c
0008C7F0 880240f9 ldr      x8, [x20]
0008C7F4 f50300aa mov      x21, x0
0008C7F8 e00314aa mov      x0, x20
0008C7FC 090940f9 ldr      x9, [x8, #0x10]
0008C800 e8230091 add      x8, sp, #8
0008C804 20013fd6 blr      x9
0008C808 80a641f9 ldr      x0, [x20, #0x348]
0008C80C 080040f9 ldr      x8, [x0]
0008C810 090940f9 ldr      x9, [x8, #0x10]
0008C814 a82300d1 sub      x8, x29, #8
0008C818 20013fd6 blr      x9
0008C81C a07f0091 add      x0, x29, #0x1f
0008C820 e2230091 add      x2, sp, #8
0008C824 a32300d1 sub      x3, x29, #8
0008C828 e10315aa mov      x1, x21
0008C82C 960d0094 bl       #0x8fe84
0008C830 f40300aa mov      x20, x0
0008C834 00d8ffb5 cbnz     x0, #0x8c334
0008C838 c3feff17 b        #0x8c344
0008C83C e00314aa mov      x0, x20
0008C840 5763fe97 bl       #0x2559c
0008C844 880240f9 ldr      x8, [x20]
0008C848 f50300aa mov      x21, x0
0008C84C e00314aa mov      x0, x20
0008C850 090940f9 ldr      x9, [x8, #0x10]
0008C854 e8230091 add      x8, sp, #8
0008C858 20013fd6 blr      x9
0008C85C 80a641f9 ldr      x0, [x20, #0x348]
0008C860 080040f9 ldr      x8, [x0]
0008C864 090940f9 ldr      x9, [x8, #0x10]
0008C868 a82300d1 sub      x8, x29, #8
0008C86C 20013fd6 blr      x9
0008C870 a07f0091 add      x0, x29, #0x1f
0008C874 e2230091 add      x2, sp, #8
0008C878 a32300d1 sub      x3, x29, #8
0008C87C e10315aa mov      x1, x21
0008C880 de0d0094 bl       #0x8fff8
0008C884 f40300aa mov      x20, x0
0008C888 60d5ffb5 cbnz     x0, #0x8c334
0008C88C aefeff17 b        #0x8c344
0008C890 e00314aa mov      x0, x20
0008C894 4263fe97 bl       #0x2559c
0008C898 880240f9 ldr      x8, [x20]
0008C89C f50300aa mov      x21, x0
0008C8A0 e00314aa mov      x0, x20
0008C8A4 090940f9 ldr      x9, [x8, #0x10]
0008C8A8 e8230091 add      x8, sp, #8
0008C8AC 20013fd6 blr      x9
0008C8B0 80a641f9 ldr      x0, [x20, #0x348]
0008C8B4 080040f9 ldr      x8, [x0]
0008C8B8 090940f9 ldr      x9, [x8, #0x10]
0008C8BC a82300d1 sub      x8, x29, #8
0008C8C0 20013fd6 blr      x9
0008C8C4 a07f0091 add      x0, x29, #0x1f
0008C8C8 e2230091 add      x2, sp, #8
0008C8CC a32300d1 sub      x3, x29, #8
0008C8D0 e10315aa mov      x1, x21
0008C8D4 170e0094 bl       #0x90130
0008C8D8 f40300aa mov      x20, x0
0008C8DC c0d2ffb5 cbnz     x0, #0x8c334
0008C8E0 99feff17 b        #0x8c344
0008C8E4 e00314aa mov      x0, x20
0008C8E8 2d63fe97 bl       #0x2559c
0008C8EC 880240f9 ldr      x8, [x20]
0008C8F0 f50300aa mov      x21, x0
0008C8F4 e00314aa mov      x0, x20
0008C8F8 090940f9 ldr      x9, [x8, #0x10]
0008C8FC e8230091 add      x8, sp, #8
0008C900 20013fd6 blr      x9
0008C904 80a641f9 ldr      x0, [x20, #0x348]
0008C908 080040f9 ldr      x8, [x0]
0008C90C 090940f9 ldr      x9, [x8, #0x10]
0008C910 a82300d1 sub      x8, x29, #8
0008C914 20013fd6 blr      x9
0008C918 a07f0091 add      x0, x29, #0x1f
0008C91C e2230091 add      x2, sp, #8
0008C920 a32300d1 sub      x3, x29, #8
0008C924 e10315aa mov      x1, x21
0008C928 5b0e0094 bl       #0x90294
0008C92C f40300aa mov      x20, x0
0008C930 20d0ffb5 cbnz     x0, #0x8c334
0008C934 84feff17 b        #0x8c344
0008C938 e00314aa mov      x0, x20
0008C93C 1863fe97 bl       #0x2559c
0008C940 880240f9 ldr      x8, [x20]
0008C944 f50300aa mov      x21, x0
0008C948 e00314aa mov      x0, x20
0008C94C 090940f9 ldr      x9, [x8, #0x10]
0008C950 e8230091 add      x8, sp, #8
0008C954 20013fd6 blr      x9
0008C958 80a641f9 ldr      x0, [x20, #0x348]
0008C95C 080040f9 ldr      x8, [x0]
0008C960 090940f9 ldr      x9, [x8, #0x10]
0008C964 a82300d1 sub      x8, x29, #8
0008C968 20013fd6 blr      x9
0008C96C a07f0091 add      x0, x29, #0x1f
0008C970 e2230091 add      x2, sp, #8
0008C974 a32300d1 sub      x3, x29, #8
0008C978 e10315aa mov      x1, x21
0008C97C 950e0094 bl       #0x903d0
0008C980 f40300aa mov      x20, x0
0008C984 80cdffb5 cbnz     x0, #0x8c334
0008C988 6ffeff17 b        #0x8c344
0008C98C e00314aa mov      x0, x20
0008C990 0363fe97 bl       #0x2559c
0008C994 880240f9 ldr      x8, [x20]
0008C998 f50300aa mov      x21, x0
0008C99C e00314aa mov      x0, x20
0008C9A0 090940f9 ldr      x9, [x8, #0x10]
0008C9A4 e8230091 add      x8, sp, #8
0008C9A8 20013fd6 blr      x9
0008C9AC 80a641f9 ldr      x0, [x20, #0x348]
0008C9B0 080040f9 ldr      x8, [x0]
0008C9B4 090940f9 ldr      x9, [x8, #0x10]
0008C9B8 a82300d1 sub      x8, x29, #8
0008C9BC 20013fd6 blr      x9
0008C9C0 a07f0091 add      x0, x29, #0x1f
0008C9C4 e2230091 add      x2, sp, #8
0008C9C8 a32300d1 sub      x3, x29, #8
0008C9CC e10315aa mov      x1, x21
0008C9D0 df0e0094 bl       #0x9054c
0008C9D4 f40300aa mov      x20, x0
0008C9D8 e0caffb5 cbnz     x0, #0x8c334
0008C9DC 5afeff17 b        #0x8c344
0008C9E0 e00314aa mov      x0, x20
0008C9E4 ee62fe97 bl       #0x2559c
0008C9E8 880240f9 ldr      x8, [x20]
0008C9EC f50300aa mov      x21, x0
0008C9F0 e00314aa mov      x0, x20
0008C9F4 090940f9 ldr      x9, [x8, #0x10]
0008C9F8 e8230091 add      x8, sp, #8
0008C9FC 20013fd6 blr      x9
0008CA00 80a641f9 ldr      x0, [x20, #0x348]
0008CA04 080040f9 ldr      x8, [x0]
0008CA08 090940f9 ldr      x9, [x8, #0x10]
0008CA0C a82300d1 sub      x8, x29, #8
0008CA10 20013fd6 blr      x9
0008CA14 a07f0091 add      x0, x29, #0x1f
0008CA18 e2230091 add      x2, sp, #8
0008CA1C a32300d1 sub      x3, x29, #8
0008CA20 e10315aa mov      x1, x21
0008CA24 180f0094 bl       #0x90684
0008CA28 f40300aa mov      x20, x0
0008CA2C 40c8ffb5 cbnz     x0, #0x8c334
0008CA30 45feff17 b        #0x8c344
0008CA34 e00314aa mov      x0, x20
0008CA38 d962fe97 bl       #0x2559c
0008CA3C 880240f9 ldr      x8, [x20]
0008CA40 f50300aa mov      x21, x0
0008CA44 e00314aa mov      x0, x20
0008CA48 090940f9 ldr      x9, [x8, #0x10]
0008CA4C e8230091 add      x8, sp, #8
0008CA50 20013fd6 blr      x9
0008CA54 80a641f9 ldr      x0, [x20, #0x348]
0008CA58 080040f9 ldr      x8, [x0]
0008CA5C 090940f9 ldr      x9, [x8, #0x10]
0008CA60 a82300d1 sub      x8, x29, #8
0008CA64 20013fd6 blr      x9
0008CA68 a07f0091 add      x0, x29, #0x1f
0008CA6C e2230091 add      x2, sp, #8
0008CA70 a32300d1 sub      x3, x29, #8
0008CA74 e10315aa mov      x1, x21
0008CA78 520f0094 bl       #0x907c0
0008CA7C f40300aa mov      x20, x0
0008CA80 a0c5ffb5 cbnz     x0, #0x8c334
0008CA84 30feff17 b        #0x8c344
0008CA88 e00314aa mov      x0, x20
0008CA8C c462fe97 bl       #0x2559c
0008CA90 880240f9 ldr      x8, [x20]
0008CA94 f50300aa mov      x21, x0
0008CA98 e00314aa mov      x0, x20
0008CA9C 090940f9 ldr      x9, [x8, #0x10]
0008CAA0 e8230091 add      x8, sp, #8
0008CAA4 20013fd6 blr      x9
0008CAA8 80a641f9 ldr      x0, [x20, #0x348]
0008CAAC 080040f9 ldr      x8, [x0]
0008CAB0 090940f9 ldr      x9, [x8, #0x10]
0008CAB4 a82300d1 sub      x8, x29, #8
0008CAB8 20013fd6 blr      x9
0008CABC a07f0091 add      x0, x29, #0x1f
0008CAC0 e2230091 add      x2, sp, #8
0008CAC4 a32300d1 sub      x3, x29, #8
0008CAC8 e10315aa mov      x1, x21
0008CACC da0f0094 bl       #0x90a34
0008CAD0 f40300aa mov      x20, x0
0008CAD4 00c3ffb5 cbnz     x0, #0x8c334
0008CAD8 1bfeff17 b        #0x8c344
0008CADC e00314aa mov      x0, x20
0008CAE0 af62fe97 bl       #0x2559c
0008CAE4 880240f9 ldr      x8, [x20]
0008CAE8 f50300aa mov      x21, x0
0008CAEC e00314aa mov      x0, x20
0008CAF0 090940f9 ldr      x9, [x8, #0x10]
0008CAF4 e8230091 add      x8, sp, #8
0008CAF8 20013fd6 blr      x9
0008CAFC 80a641f9 ldr      x0, [x20, #0x348]
0008CB00 080040f9 ldr      x8, [x0]
0008CB04 090940f9 ldr      x9, [x8, #0x10]
0008CB08 a82300d1 sub      x8, x29, #8
0008CB0C 20013fd6 blr      x9
0008CB10 a07f0091 add      x0, x29, #0x1f
0008CB14 e2230091 add      x2, sp, #8
0008CB18 a32300d1 sub      x3, x29, #8
0008CB1C e10315aa mov      x1, x21
0008CB20 65100094 bl       #0x90cb4
0008CB24 f40300aa mov      x20, x0
0008CB28 60c0ffb5 cbnz     x0, #0x8c334
0008CB2C 06feff17 b        #0x8c344
0008CB30 a8a601b9 str      w8, [x21, #0x1a4]
0008CB34 02000014 b        #0x8cb3c
0008CB38 bfa601b9 str      wzr, [x21, #0x1a4]
0008CB3C e8230091 add      x8, sp, #8
0008CB40 e00314aa mov      x0, x20
0008CB44 09000094 bl       #0x8cb68
0008CB48 e80740f9 ldr      x8, [sp, #8]
0008CB4C 680200f9 str      x8, [x19]
0008CB50 f44f46a9 ldp      x20, x19, [sp, #0x60]
0008CB54 f72340f9 ldr      x23, [sp, #0x40]
0008CB58 f65745a9 ldp      x22, x21, [sp, #0x50]
0008CB5C fd7b43a9 ldp      x29, x30, [sp, #0x30]
0008CB60 ffc30191 add      sp, sp, #0x70
0008CB64 c0035fd6 ret      
~~~
### 0x8e980 (65 slots)
~~~asm
0008E980 ff8301d1 sub      sp, sp, #0x60
0008E984 fd7b02a9 stp      x29, x30, [sp, #0x20]
0008E988 f85f03a9 stp      x24, x23, [sp, #0x30]
0008E98C f65704a9 stp      x22, x21, [sp, #0x40]
0008E990 f44f05a9 stp      x20, x19, [sp, #0x50]
0008E994 fd830091 add      x29, sp, #0x20
0008E998 15d847a9 ldp      x21, x22, [x0, #0x78]
0008E99C f30300aa mov      x19, x0
0008E9A0 370040f9 ldr      x23, [x1]
0008E9A4 340c40f9 ldr      x20, [x1, #0x18]
0008E9A8 b40000b4 cbz      x20, #0x8e9bc
0008E9AC e00314aa mov      x0, x20
0008E9B0 088c44f8 ldr      x8, [x0, #0x48]!
0008E9B4 080940f9 ldr      x8, [x8, #0x10]
0008E9B8 00013fd6 blr      x8
0008E9BC bf0216eb cmp      x21, x22
0008E9C0 20020054 b.eq     #0x8ea04
0008E9C4 a80240f9 ldr      x8, [x21]
0008E9C8 00c11891 add      x0, x8, #0x630
0008E9CC e8030091 mov      x8, sp
0008E9D0 306a1194 bl       #0x4e9290
0008E9D4 f80340f9 ldr      x24, [sp]
0008E9D8 e00f40f9 ldr      x0, [sp, #0x18]
0008E9DC 800000b4 cbz      x0, #0x8e9ec
0008E9E0 088c44f8 ldr      x8, [x0, #0x48]!
0008E9E4 080d40f9 ldr      x8, [x8, #0x18]
0008E9E8 00013fd6 blr      x8
0008E9EC 1f0317eb cmp      x24, x23
0008E9F0 a0000054 b.eq     #0x8ea04
0008E9F4 b5220091 add      x21, x21, #8
0008E9F8 bf0216eb cmp      x21, x22
0008E9FC 41feff54 b.ne     #0x8e9c4
0008EA00 f50316aa mov      x21, x22
0008EA04 b40000b4 cbz      x20, #0x8ea18
0008EA08 888e44f8 ldr      x8, [x20, #0x48]!
0008EA0C e00314aa mov      x0, x20
0008EA10 080d40f9 ldr      x8, [x8, #0x18]
0008EA14 00013fd6 blr      x8
0008EA18 684240f9 ldr      x8, [x19, #0x80]
0008EA1C bf0208eb cmp      x21, x8
0008EA20 20020054 b.eq     #0x8ea64
0008EA24 b30240f9 ldr      x19, [x21]
0008EA28 130200b4 cbz      x19, #0x8ea68
0008EA2C e00313aa mov      x0, x19
0008EA30 080c45f8 ldr      x8, [x0, #0x50]!
0008EA34 080140f9 ldr      x8, [x8]
0008EA38 00013fd6 blr      x8
0008EA3C f40300aa mov      x20, x0
0008EA40 11000094 bl       #0x8ea84
0008EA44 1f0014eb cmp      x0, x20
0008EA48 00010054 b.eq     #0x8ea68
0008EA4C 1f2003d5 nop      
0008EA50 940240f9 ldr      x20, [x20]
0008EA54 9f0200eb cmp      x20, x0
0008EA58 841a40fa ccmp     x20, #0, #4, ne
0008EA5C a1ffff54 b.ne     #0x8ea50
0008EA60 540000b5 cbnz     x20, #0x8ea68
0008EA64 f3031faa mov      x19, xzr
0008EA68 e00313aa mov      x0, x19
0008EA6C f44f45a9 ldp      x20, x19, [sp, #0x50]
0008EA70 f65744a9 ldp      x22, x21, [sp, #0x40]
0008EA74 f85f43a9 ldp      x24, x23, [sp, #0x30]
0008EA78 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0008EA7C ff830191 add      sp, sp, #0x60
0008EA80 c0035fd6 ret      
~~~
### 0x8ea84 (74 slots)
~~~asm
0008EA84 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0008EA88 f65701a9 stp      x22, x21, [sp, #0x10]
0008EA8C f44f02a9 stp      x20, x19, [sp, #0x20]
0008EA90 fd030091 mov      x29, sp
0008EA94 883800d0 adrp     x8, #0x7a0000
0008EA98 08b142f9 ldr      x8, [x8, #0x560]
0008EA9C 08fddf08 ldarb    w8, [x8]
0008EAA0 e8000036 tbz      w8, #0, #0x8eabc
0008EAA4 803800d0 adrp     x0, #0x7a0000
0008EAA8 00b442f9 ldr      x0, [x0, #0x568]
0008EAAC f44f42a9 ldp      x20, x19, [sp, #0x20]
0008EAB0 f65741a9 ldp      x22, x21, [sp, #0x10]
0008EAB4 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0008EAB8 c0035fd6 ret      
0008EABC 803800d0 adrp     x0, #0x7a0000
0008EAC0 00b042f9 ldr      x0, [x0, #0x560]
0008EAC4 c39d1594 bl       #0x5f61d0
0008EAC8 e0feff34 cbz      w0, #0x8eaa4
0008EACC 933800d0 adrp     x19, #0x7a0000
0008EAD0 883800b0 adrp     x8, #0x79f000
0008EAD4 73b642f9 ldr      x19, [x19, #0x568]
0008EAD8 080d45f9 ldr      x8, [x8, #0xa18]
0008EADC 943800b0 adrp     x20, #0x79f000
0008EAE0 08fddf08 ldarb    w8, [x8]
0008EAE4 941245f9 ldr      x20, [x20, #0xa20]
0008EAE8 68010036 tbz      w8, #0, #0x8eb14
0008EAEC 740200f9 str      x20, [x19]
0008EAF0 803800d0 adrp     x0, #0x7a0000
0008EAF4 00b042f9 ldr      x0, [x0, #0x560]
0008EAF8 ba9d1594 bl       #0x5f61e0
0008EAFC 803800d0 adrp     x0, #0x7a0000
0008EB00 00b442f9 ldr      x0, [x0, #0x568]
0008EB04 f44f42a9 ldp      x20, x19, [sp, #0x20]
0008EB08 f65741a9 ldp      x22, x21, [sp, #0x10]
0008EB0C fd7bc3a8 ldp      x29, x30, [sp], #0x30
0008EB10 c0035fd6 ret      
0008EB14 803800b0 adrp     x0, #0x79f000
0008EB18 000c45f9 ldr      x0, [x0, #0xa18]
0008EB1C ad9d1594 bl       #0x5f61d0
0008EB20 60feff34 cbz      w0, #0x8eaec
0008EB24 883800b0 adrp     x8, #0x79f000
0008EB28 953800b0 adrp     x21, #0x79f000
0008EB2C 08c943f9 ldr      x8, [x8, #0x790]
0008EB30 08fddf08 ldarb    w8, [x8]
0008EB34 b5ce43f9 ldr      x21, [x21, #0x798]
0008EB38 c8000036 tbz      w8, #0, #0x8eb50
0008EB3C 950200f9 str      x21, [x20]
0008EB40 803800b0 adrp     x0, #0x79f000
0008EB44 000c45f9 ldr      x0, [x0, #0xa18]
0008EB48 a69d1594 bl       #0x5f61e0
0008EB4C e8ffff17 b        #0x8eaec
0008EB50 803800b0 adrp     x0, #0x79f000
0008EB54 00c843f9 ldr      x0, [x0, #0x790]
0008EB58 9e9d1594 bl       #0x5f61d0
0008EB5C 00ffff34 cbz      w0, #0x8eb3c
0008EB60 883800b0 adrp     x8, #0x79f000
0008EB64 963800b0 adrp     x22, #0x79f000
0008EB68 084d42f9 ldr      x8, [x8, #0x498]
0008EB6C 08fddf08 ldarb    w8, [x8]
0008EB70 d65242f9 ldr      x22, [x22, #0x4a0]
0008EB74 28010037 tbnz     w8, #0, #0x8eb98
0008EB78 803800b0 adrp     x0, #0x79f000
0008EB7C 004c42f9 ldr      x0, [x0, #0x498]
0008EB80 949d1594 bl       #0x5f61d0
0008EB84 a0000034 cbz      w0, #0x8eb98
0008EB88 df0200f9 str      xzr, [x22]
0008EB8C 803800b0 adrp     x0, #0x79f000
0008EB90 004c42f9 ldr      x0, [x0, #0x498]
0008EB94 939d1594 bl       #0x5f61e0
0008EB98 b60200f9 str      x22, [x21]
0008EB9C 803800b0 adrp     x0, #0x79f000
0008EBA0 00c843f9 ldr      x0, [x0, #0x790]
0008EBA4 8f9d1594 bl       #0x5f61e0
0008EBA8 e5ffff17 b        #0x8eb3c
~~~
### 0x8ebb0 (65 slots)
~~~asm
0008EBB0 ff8301d1 sub      sp, sp, #0x60
0008EBB4 fd7b02a9 stp      x29, x30, [sp, #0x20]
0008EBB8 f85f03a9 stp      x24, x23, [sp, #0x30]
0008EBBC f65704a9 stp      x22, x21, [sp, #0x40]
0008EBC0 f44f05a9 stp      x20, x19, [sp, #0x50]
0008EBC4 fd830091 add      x29, sp, #0x20
0008EBC8 15d847a9 ldp      x21, x22, [x0, #0x78]
0008EBCC f30300aa mov      x19, x0
0008EBD0 370040f9 ldr      x23, [x1]
0008EBD4 340c40f9 ldr      x20, [x1, #0x18]
0008EBD8 b40000b4 cbz      x20, #0x8ebec
0008EBDC e00314aa mov      x0, x20
0008EBE0 088c44f8 ldr      x8, [x0, #0x48]!
0008EBE4 080940f9 ldr      x8, [x8, #0x10]
0008EBE8 00013fd6 blr      x8
0008EBEC bf0216eb cmp      x21, x22
0008EBF0 20020054 b.eq     #0x8ec34
0008EBF4 a80240f9 ldr      x8, [x21]
0008EBF8 00c11891 add      x0, x8, #0x630
0008EBFC e8030091 mov      x8, sp
0008EC00 a4691194 bl       #0x4e9290
0008EC04 f80340f9 ldr      x24, [sp]
0008EC08 e00f40f9 ldr      x0, [sp, #0x18]
0008EC0C 800000b4 cbz      x0, #0x8ec1c
0008EC10 088c44f8 ldr      x8, [x0, #0x48]!
0008EC14 080d40f9 ldr      x8, [x8, #0x18]
0008EC18 00013fd6 blr      x8
0008EC1C 1f0317eb cmp      x24, x23
0008EC20 a0000054 b.eq     #0x8ec34
0008EC24 b5220091 add      x21, x21, #8
0008EC28 bf0216eb cmp      x21, x22
0008EC2C 41feff54 b.ne     #0x8ebf4
0008EC30 f50316aa mov      x21, x22
0008EC34 b40000b4 cbz      x20, #0x8ec48
0008EC38 888e44f8 ldr      x8, [x20, #0x48]!
0008EC3C e00314aa mov      x0, x20
0008EC40 080d40f9 ldr      x8, [x8, #0x18]
0008EC44 00013fd6 blr      x8
0008EC48 684240f9 ldr      x8, [x19, #0x80]
0008EC4C bf0208eb cmp      x21, x8
0008EC50 20020054 b.eq     #0x8ec94
0008EC54 b30240f9 ldr      x19, [x21]
0008EC58 130200b4 cbz      x19, #0x8ec98
0008EC5C e00313aa mov      x0, x19
0008EC60 080c45f8 ldr      x8, [x0, #0x50]!
0008EC64 080140f9 ldr      x8, [x8]
0008EC68 00013fd6 blr      x8
0008EC6C f40300aa mov      x20, x0
0008EC70 11000094 bl       #0x8ecb4
0008EC74 1f0014eb cmp      x0, x20
0008EC78 00010054 b.eq     #0x8ec98
0008EC7C 1f2003d5 nop      
0008EC80 940240f9 ldr      x20, [x20]
0008EC84 9f0200eb cmp      x20, x0
0008EC88 841a40fa ccmp     x20, #0, #4, ne
0008EC8C a1ffff54 b.ne     #0x8ec80
0008EC90 540000b5 cbnz     x20, #0x8ec98
0008EC94 f3031faa mov      x19, xzr
0008EC98 e00313aa mov      x0, x19
0008EC9C f44f45a9 ldp      x20, x19, [sp, #0x50]
0008ECA0 f65744a9 ldp      x22, x21, [sp, #0x40]
0008ECA4 f85f43a9 ldp      x24, x23, [sp, #0x30]
0008ECA8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0008ECAC ff830191 add      sp, sp, #0x60
0008ECB0 c0035fd6 ret      
~~~
### 0x8ecb4 (74 slots)
~~~asm
0008ECB4 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0008ECB8 f65701a9 stp      x22, x21, [sp, #0x10]
0008ECBC f44f02a9 stp      x20, x19, [sp, #0x20]
0008ECC0 fd030091 mov      x29, sp
0008ECC4 883800d0 adrp     x8, #0x7a0000
0008ECC8 08b942f9 ldr      x8, [x8, #0x570]
0008ECCC 08fddf08 ldarb    w8, [x8]
0008ECD0 e8000036 tbz      w8, #0, #0x8ecec
0008ECD4 803800d0 adrp     x0, #0x7a0000
0008ECD8 00bc42f9 ldr      x0, [x0, #0x578]
0008ECDC f44f42a9 ldp      x20, x19, [sp, #0x20]
0008ECE0 f65741a9 ldp      x22, x21, [sp, #0x10]
0008ECE4 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0008ECE8 c0035fd6 ret      
0008ECEC 803800d0 adrp     x0, #0x7a0000
0008ECF0 00b842f9 ldr      x0, [x0, #0x570]
0008ECF4 379d1594 bl       #0x5f61d0
0008ECF8 e0feff34 cbz      w0, #0x8ecd4
0008ECFC 933800d0 adrp     x19, #0x7a0000
0008ED00 883800b0 adrp     x8, #0x79f000
0008ED04 73be42f9 ldr      x19, [x19, #0x578]
0008ED08 080d45f9 ldr      x8, [x8, #0xa18]
0008ED0C 943800b0 adrp     x20, #0x79f000
0008ED10 08fddf08 ldarb    w8, [x8]
0008ED14 941245f9 ldr      x20, [x20, #0xa20]
0008ED18 68010036 tbz      w8, #0, #0x8ed44
0008ED1C 740200f9 str      x20, [x19]
0008ED20 803800d0 adrp     x0, #0x7a0000
0008ED24 00b842f9 ldr      x0, [x0, #0x570]
0008ED28 2e9d1594 bl       #0x5f61e0
0008ED2C 803800d0 adrp     x0, #0x7a0000
0008ED30 00bc42f9 ldr      x0, [x0, #0x578]
0008ED34 f44f42a9 ldp      x20, x19, [sp, #0x20]
0008ED38 f65741a9 ldp      x22, x21, [sp, #0x10]
0008ED3C fd7bc3a8 ldp      x29, x30, [sp], #0x30
0008ED40 c0035fd6 ret      
0008ED44 803800b0 adrp     x0, #0x79f000
0008ED48 000c45f9 ldr      x0, [x0, #0xa18]
0008ED4C 219d1594 bl       #0x5f61d0
0008ED50 60feff34 cbz      w0, #0x8ed1c
0008ED54 883800b0 adrp     x8, #0x79f000
0008ED58 953800b0 adrp     x21, #0x79f000
0008ED5C 08c943f9 ldr      x8, [x8, #0x790]
0008ED60 08fddf08 ldarb    w8, [x8]
0008ED64 b5ce43f9 ldr      x21, [x21, #0x798]
0008ED68 c8000036 tbz      w8, #0, #0x8ed80
0008ED6C 950200f9 str      x21, [x20]
0008ED70 803800b0 adrp     x0, #0x79f000
0008ED74 000c45f9 ldr      x0, [x0, #0xa18]
0008ED78 1a9d1594 bl       #0x5f61e0
0008ED7C e8ffff17 b        #0x8ed1c
0008ED80 803800b0 adrp     x0, #0x79f000
0008ED84 00c843f9 ldr      x0, [x0, #0x790]
0008ED88 129d1594 bl       #0x5f61d0
0008ED8C 00ffff34 cbz      w0, #0x8ed6c
0008ED90 883800b0 adrp     x8, #0x79f000
0008ED94 963800b0 adrp     x22, #0x79f000
0008ED98 084d42f9 ldr      x8, [x8, #0x498]
0008ED9C 08fddf08 ldarb    w8, [x8]
0008EDA0 d65242f9 ldr      x22, [x22, #0x4a0]
0008EDA4 28010037 tbnz     w8, #0, #0x8edc8
0008EDA8 803800b0 adrp     x0, #0x79f000
0008EDAC 004c42f9 ldr      x0, [x0, #0x498]
0008EDB0 089d1594 bl       #0x5f61d0
0008EDB4 a0000034 cbz      w0, #0x8edc8
0008EDB8 df0200f9 str      xzr, [x22]
0008EDBC 803800b0 adrp     x0, #0x79f000
0008EDC0 004c42f9 ldr      x0, [x0, #0x498]
0008EDC4 079d1594 bl       #0x5f61e0
0008EDC8 b60200f9 str      x22, [x21]
0008EDCC 803800b0 adrp     x0, #0x79f000
0008EDD0 00c843f9 ldr      x0, [x0, #0x790]
0008EDD4 039d1594 bl       #0x5f61e0
0008EDD8 e5ffff17 b        #0x8ed6c
~~~
### 0x91358 (7 slots)
~~~asm
00091358 0aa04029 ldp      w10, w8, [x0, #4]
0009135C c9008052 mov      w9, #6
00091360 0b0040b9 ldr      w11, [x0]
00091364 0829091b madd     w8, w8, w9, w10
00091368 c9038052 mov      w9, #0x1e
0009136C 6021091b madd     w0, w11, w9, w8
00091370 c0035fd6 ret      
~~~
### 0x91d1c (13 slots)
~~~asm
00091D1C 280040b9 ldr      w8, [x1]
00091D20 1f150071 cmp      w8, #5
00091D24 28010054 b.hi     #0x91d48
00091D28 290440b9 ldr      w9, [x1, #4]
00091D2C 3f110071 cmp      w9, #4
00091D30 c8000054 b.hi     #0x91d48
00091D34 0a148052 mov      w10, #0xa0
00091D38 0801aa9b umaddl   x8, w8, w10, x0
00091D3C 0815098b add      x8, x8, x9, lsl #5
00091D40 001940f9 ldr      x0, [x8, #0x30]
00091D44 c0035fd6 ret      
00091D48 e0031faa mov      x0, xzr
00091D4C c0035fd6 ret      
~~~
### 0x920e4 (13 slots)
~~~asm
000920E4 280040b9 ldr      w8, [x1]
000920E8 1f150071 cmp      w8, #5
000920EC 28010054 b.hi     #0x92110
000920F0 290440b9 ldr      w9, [x1, #4]
000920F4 3f110071 cmp      w9, #4
000920F8 c8000054 b.hi     #0x92110
000920FC 0a148052 mov      w10, #0xa0
00092100 0801aa9b umaddl   x8, w8, w10, x0
00092104 0815098b add      x8, x8, x9, lsl #5
00092108 000940f9 ldr      x0, [x8, #0x10]
0009210C c0035fd6 ret      
00092110 e0031faa mov      x0, xzr
00092114 c0035fd6 ret      
~~~
### 0x9264c (13 slots)
~~~asm
0009264C 280040b9 ldr      w8, [x1]
00092650 1f150071 cmp      w8, #5
00092654 28010054 b.hi     #0x92678
00092658 290440b9 ldr      w9, [x1, #4]
0009265C 3f110071 cmp      w9, #4
00092660 c8000054 b.hi     #0x92678
00092664 0a148052 mov      w10, #0xa0
00092668 0801aa9b umaddl   x8, w8, w10, x0
0009266C 0815098b add      x8, x8, x9, lsl #5
00092670 000d40f9 ldr      x0, [x8, #0x18]
00092674 c0035fd6 ret      
00092678 e0031faa mov      x0, xzr
0009267C c0035fd6 ret      
~~~
### 0x92b40 (9 slots)
~~~asm
00092B40 080840b9 ldr      w8, [x0, #8]
00092B44 1f01016b cmp      w8, w1
00092B48 a9000054 b.ls     #0x92b5c
00092B4C e803012a mov      w8, w1
00092B50 0814088b add      x8, x0, x8, lsl #5
00092B54 000940f9 ldr      x0, [x8, #0x10]
00092B58 c0035fd6 ret      
00092B5C e0031faa mov      x0, xzr
00092B60 c0035fd6 ret      
~~~
### 0x930e0 (9 slots)
~~~asm
000930E0 080840b9 ldr      w8, [x0, #8]
000930E4 1f01016b cmp      w8, w1
000930E8 a9000054 b.ls     #0x930fc
000930EC e803012a mov      w8, w1
000930F0 0814088b add      x8, x0, x8, lsl #5
000930F4 000940f9 ldr      x0, [x8, #0x10]
000930F8 c0035fd6 ret      
000930FC e0031faa mov      x0, xzr
00093100 c0035fd6 ret      
~~~
### 0x94e98 (52 slots)
~~~asm
00094E98 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00094E9C f70b00f9 str      x23, [sp, #0x10]
00094EA0 f65702a9 stp      x22, x21, [sp, #0x20]
00094EA4 f44f03a9 stp      x20, x19, [sp, #0x30]
00094EA8 fd030091 mov      x29, sp
00094EAC 480040b9 ldr      w8, [x2]
00094EB0 092040f9 ldr      x9, [x0, #0x40]
00094EB4 2815088b add      x8, x9, x8, lsl #5
00094EB8 080940f9 ldr      x8, [x8, #0x10]
00094EBC 080940f9 ldr      x8, [x8, #0x10]
00094EC0 140540f9 ldr      x20, [x8, #8]
00094EC4 740400b4 cbz      x20, #0x94f50
00094EC8 f30314aa mov      x19, x20
00094ECC f60302aa mov      x22, x2
00094ED0 f50301aa mov      x21, x1
00094ED4 688e44f8 ldr      x8, [x19, #0x48]!
00094ED8 080940f9 ldr      x8, [x8, #0x10]
00094EDC e00313aa mov      x0, x19
00094EE0 00013fd6 blr      x8
00094EE4 ca224129 ldp      w10, w8, [x22, #8]
00094EE8 c9008052 mov      w9, #6
00094EEC d70640b9 ldr      w23, [x22, #4]
00094EF0 1629091b madd     w22, w8, w9, w10
00094EF4 a00240f9 ldr      x0, [x21]
00094EF8 a00f00f9 str      x0, [x29, #0x18]
00094EFC 800000b4 cbz      x0, #0x94f0c
00094F00 088c44f8 ldr      x8, [x0, #0x48]!
00094F04 080940f9 ldr      x8, [x8, #0x10]
00094F08 00013fd6 blr      x8
00094F0C a3630091 add      x3, x29, #0x18
00094F10 e00314aa mov      x0, x20
00094F14 e103172a mov      w1, w23
00094F18 e203162a mov      w2, w22
00094F1C 24008052 mov      w4, #1
00094F20 fcb00594 bl       #0x201310
00094F24 f403002a mov      w20, w0
00094F28 a00f40f9 ldr      x0, [x29, #0x18]
00094F2C a00000b4 cbz      x0, #0x94f40
00094F30 088c44f8 ldr      x8, [x0, #0x48]!
00094F34 080d40f9 ldr      x8, [x8, #0x18]
00094F38 00013fd6 blr      x8
00094F3C bf0f00f9 str      xzr, [x29, #0x18]
00094F40 680240f9 ldr      x8, [x19]
00094F44 e00313aa mov      x0, x19
00094F48 080d40f9 ldr      x8, [x8, #0x18]
00094F4C 00013fd6 blr      x8
00094F50 80020012 and      w0, w20, #1
00094F54 f44f43a9 ldp      x20, x19, [sp, #0x30]
00094F58 f65742a9 ldp      x22, x21, [sp, #0x20]
00094F5C f70b40f9 ldr      x23, [sp, #0x10]
00094F60 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00094F64 c0035fd6 ret      
~~~
### 0x96fbc (33 slots)
~~~asm
00096FBC ffc300d1 sub      sp, sp, #0x30
00096FC0 fd7b01a9 stp      x29, x30, [sp, #0x10]
00096FC4 f44f02a9 stp      x20, x19, [sp, #0x20]
00096FC8 fd430091 add      x29, sp, #0x10
00096FCC 140040f9 ldr      x20, [x0]
00096FD0 f30301aa mov      x19, x1
00096FD4 f40700f9 str      x20, [sp, #8]
00096FD8 b40100b4 cbz      x20, #0x9700c
00096FDC 888e44f8 ldr      x8, [x20, #0x48]!
00096FE0 e00314aa mov      x0, x20
00096FE4 080940f9 ldr      x8, [x8, #0x10]
00096FE8 00013fd6 blr      x8
00096FEC e0230091 add      x0, sp, #8
00096FF0 e10313aa mov      x1, x19
00096FF4 13000094 bl       #0x97040
00096FF8 880240f9 ldr      x8, [x20]
00096FFC e00314aa mov      x0, x20
00097000 080d40f9 ldr      x8, [x8, #0x18]
00097004 00013fd6 blr      x8
00097008 04000014 b        #0x97018
0009700C e0230091 add      x0, sp, #8
00097010 e10313aa mov      x1, x19
00097014 0b000094 bl       #0x97040
00097018 680240f9 ldr      x8, [x19]
0009701C 083140f9 ldr      x8, [x8, #0x60]
00097020 00210091 add      x0, x8, #8
00097024 f0140094 bl       #0x9c3e4
00097028 600240f9 ldr      x0, [x19]
0009702C e1031f2a mov      w1, wzr
00097030 f44f42a9 ldp      x20, x19, [sp, #0x20]
00097034 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00097038 ffc30091 add      sp, sp, #0x30
0009703C c2120014 b        #0x9bb44
~~~
### 0x97040 (253 slots)
~~~asm
00097040 ff0304d1 sub      sp, sp, #0x100
00097044 fd7b0aa9 stp      x29, x30, [sp, #0xa0]
00097048 fc6f0ba9 stp      x28, x27, [sp, #0xb0]
0009704C fa670ca9 stp      x26, x25, [sp, #0xc0]
00097050 f85f0da9 stp      x24, x23, [sp, #0xd0]
00097054 f6570ea9 stp      x22, x21, [sp, #0xe0]
00097058 f44f0fa9 stp      x20, x19, [sp, #0xf0]
0009705C fd830291 add      x29, sp, #0xa0
00097060 280040f9 ldr      x8, [x1]
00097064 083140f9 ldr      x8, [x8, #0x60]
00097068 1f7d00f9 str      xzr, [x8, #0xf8]
0009706C 280040f9 ldr      x8, [x1]
00097070 083140f9 ldr      x8, [x8, #0x60]
00097074 158940f9 ldr      x21, [x8, #0x110]
00097078 a82240f9 ldr      x8, [x21, #0x40]
0009707C e80f00f9 str      x8, [sp, #0x18]
00097080 080940b9 ldr      w8, [x8, #8]
00097084 e81700b9 str      w8, [sp, #0x14]
00097088 681c0034 cbz      w8, #0x97414
0009708C f30301aa mov      x19, x1
00097090 f40300aa mov      x20, x0
00097094 5ad03bd5 mrs      x26, tpidr_el0
00097098 f7031f2a mov      w23, wzr
0009709C 3c008052 mov      w28, #1
000970A0 05000014 b        #0x970b4
000970A4 e81740b9 ldr      w8, [sp, #0x14]
000970A8 f7060011 add      w23, w23, #1
000970AC ff02086b cmp      w23, w8
000970B0 201b0054 b.eq     #0x97414
000970B4 e00f40f9 ldr      x0, [sp, #0x18]
000970B8 e103172a mov      w1, w23
000970BC 09f0ff97 bl       #0x930e0
000970C0 080c40b9 ldr      w8, [x0, #0xc]
000970C4 08ffff34 cbz      w8, #0x970a4
000970C8 001840f9 ldr      x0, [x0, #0x30]
000970CC 1f050071 cmp      w8, #1
000970D0 a10a0054 b.ne     #0x97224
000970D4 680240f9 ldr      x8, [x19]
000970D8 083140f9 ldr      x8, [x8, #0x60]
000970DC 08814439 ldrb     w8, [x8, #0x120]
000970E0 280a0034 cbz      w8, #0x97224
000970E4 18a840f9 ldr      x24, [x0, #0x150]
000970E8 f6031f2a mov      w22, wzr
000970EC 04000014 b        #0x970fc
000970F0 d6060011 add      w22, w22, #1
000970F4 df160071 cmp      w22, #5
000970F8 60fdff54 b.eq     #0x970a4
000970FC fb031f2a mov      w27, wzr
00097100 0b000014 b        #0x9712c
00097104 00c10291 add      x0, x8, #0xb0
00097108 e8230191 add      x8, sp, #0x48
0009710C a3f300d1 sub      x3, x29, #0x3c
00097110 22008052 mov      w2, #1
00097114 ee0e0094 bl       #0x9accc
00097118 1f2003d5 nop      
0009711C 1f2003d5 nop      
00097120 7b070011 add      w27, w27, #1
00097124 7f1b0071 cmp      w27, #6
00097128 40feff54 b.eq     #0x970f0
0009712C a12300d1 sub      x1, x29, #8
00097130 e00318aa mov      x0, x24
00097134 bb5b3f29 stp      w27, w22, [x29, #-8]
00097138 45edff97 bl       #0x9264c
0009713C 081840b9 ldr      w8, [x0, #0x18]
00097140 08ffff34 cbz      w8, #0x97120
00097144 08a440a9 ldp      x8, x9, [x0, #8]
00097148 800240f9 ldr      x0, [x20]
0009714C a8a73ea9 stp      x8, x9, [x29, #-0x18]
00097150 a0031ef8 stur     x0, [x29, #-0x20]
00097154 800000b4 cbz      x0, #0x97164
00097158 088c44f8 ldr      x8, [x0, #0x48]!
0009715C 080940f9 ldr      x8, [x8, #0x10]
00097160 00013fd6 blr      x8
00097164 a18300d1 sub      x1, x29, #0x20
00097168 a26300d1 sub      x2, x29, #0x18
0009716C e00315aa mov      x0, x21
00097170 4af7ff97 bl       #0x94e98
00097174 f903002a mov      w25, w0
00097178 a0035ef8 ldur     x0, [x29, #-0x20]
0009717C a00000b4 cbz      x0, #0x97190
00097180 088c44f8 ldr      x8, [x0, #0x48]!
00097184 080d40f9 ldr      x8, [x8, #0x18]
00097188 00013fd6 blr      x8
0009718C bf031ef8 stur     xzr, [x29, #-0x20]
00097190 99fc0736 tbz      w25, #0, #0x97120
00097194 a8835ff8 ldur     x8, [x29, #-8]
00097198 8b038052 mov      w11, #0x1c
0009719C bc431c38 sturb    w28, [x29, #-0x3c]
000971A0 b77f3929 stp      w23, wzr, [x29, #-0x38]
000971A4 a87f3da9 stp      x8, xzr, [x29, #-0x30]
000971A8 680240f9 ldr      x8, [x19]
000971AC 083140f9 ldr      x8, [x8, #0x60]
000971B0 09294fa9 ldp      x9, x10, [x8, #0xf0]
000971B4 41250b9b madd     x1, x10, x11, x9
000971B8 098140f9 ldr      x9, [x8, #0x100]
000971BC 5f0109eb cmp      x10, x9
000971C0 20faff54 b.eq     #0x97104
000971C4 49cb7392 and      x9, x26, #0xffffffffffffe000
000971C8 2a4d40f9 ldr      x10, [x9, #0x98]
000971CC 5f4100f1 cmp      x10, #0x10
000971D0 00120054 b.eq     #0x97410
000971D4 0b5940f9 ldr      x11, [x8, #0xb0]
000971D8 2a0d0a8b add      x10, x9, x10, lsl #3
000971DC 4b0d00f9 str      x11, [x10, #0x18]
000971E0 2a4d40f9 ldr      x10, [x9, #0x98]
000971E4 abc35cf8 ldur     x11, [x29, #-0x34]
000971E8 ac435df8 ldur     x12, [x29, #-0x2c]
000971EC adc35db8 ldur     w13, [x29, #-0x24]
000971F0 4a050091 add      x10, x10, #1
000971F4 2a4d00f9 str      x10, [x9, #0x98]
000971F8 aa435cf8 ldur     x10, [x29, #-0x3c]
000971FC 2d1800b9 str      w13, [x1, #0x18]
00097200 2a0000f9 str      x10, [x1]
00097204 2bb000a9 stp      x11, x12, [x1, #8]
00097208 2a4d40f9 ldr      x10, [x9, #0x98]
0009720C 4a0500d1 sub      x10, x10, #1
00097210 2a4d00f9 str      x10, [x9, #0x98]
00097214 097d40f9 ldr      x9, [x8, #0xf8]
00097218 29050091 add      x9, x9, #1
0009721C 097d00f9 str      x9, [x8, #0xf8]
00097220 c0ffff17 b        #0x97120
00097224 080840b9 ldr      w8, [x0, #8]
00097228 e8f3ff34 cbz      w8, #0x970a4
0009722C f6031f2a mov      w22, wzr
00097230 e00700f9 str      x0, [sp, #8]
00097234 e80700b9 str      w8, [sp, #4]
00097238 e103162a mov      w1, w22
0009723C 41eeff97 bl       #0x92b40
00097240 e01700f9 str      x0, [sp, #0x28]
00097244 ff3300b9 str      wzr, [sp, #0x30]
00097248 f62700b9 str      w22, [sp, #0x24]
0009724C f8031f2a mov      w24, wzr
00097250 07000014 b        #0x9726c
00097254 f62740b9 ldr      w22, [sp, #0x24]
00097258 3c008052 mov      w28, #1
0009725C f83740b9 ldr      w24, [sp, #0x34]
00097260 18070011 add      w24, w24, #1
00097264 1f1b0071 cmp      w24, #6
00097268 e00b0054 b.eq     #0x973e4
0009726C e83340b9 ldr      w8, [sp, #0x30]
00097270 a12301d1 sub      x1, x29, #0x48
00097274 b8233729 stp      w24, w8, [x29, #-0x48]
00097278 e01740f9 ldr      x0, [sp, #0x28]
0009727C 9aebff97 bl       #0x920e4
00097280 081840b9 ldr      w8, [x0, #0x18]
00097284 e8feff34 cbz      w8, #0x97260
00097288 a8835bf8 ldur     x8, [x29, #-0x48]
0009728C fb0300aa mov      x27, x0
00097290 e0230191 add      x0, sp, #0x48
00097294 f83700b9 str      w24, [sp, #0x34]
00097298 f64b00b9 str      w22, [sp, #0x48]
0009729C e8c304f8 stur     x8, [sp, #0x4c]
000972A0 2ee8ff97 bl       #0x91358
000972A4 fc03002a mov      w28, w0
000972A8 f9031f2a mov      w25, wzr
000972AC 04000014 b        #0x972bc
000972B0 39070011 add      w25, w25, #1
000972B4 3f170071 cmp      w25, #5
000972B8 e0fcff54 b.eq     #0x97254
000972BC f8031f2a mov      w24, wzr
000972C0 0b000014 b        #0x972ec
000972C4 00c10291 add      x0, x8, #0xb0
000972C8 a82300d1 sub      x8, x29, #8
000972CC a3f300d1 sub      x3, x29, #0x3c
000972D0 22008052 mov      w2, #1
000972D4 7e0e0094 bl       #0x9accc
000972D8 1f2003d5 nop      
000972DC 1f2003d5 nop      
000972E0 18070011 add      w24, w24, #1
000972E4 1f1b0071 cmp      w24, #6
000972E8 40feff54 b.eq     #0x972b0
000972EC e1030191 add      x1, sp, #0x40
000972F0 e0031baa mov      x0, x27
000972F4 f8670829 stp      w24, w25, [sp, #0x40]
000972F8 89eaff97 bl       #0x91d1c
000972FC 081840b9 ldr      w8, [x0, #0x18]
00097300 08ffff34 cbz      w8, #0x972e0
00097304 08a440a9 ldp      x8, x9, [x0, #8]
00097308 800240f9 ldr      x0, [x20]
0009730C a8a73ea9 stp      x8, x9, [x29, #-0x18]
00097310 e01f00f9 str      x0, [sp, #0x38]
00097314 800000b4 cbz      x0, #0x97324
00097318 088c44f8 ldr      x8, [x0, #0x48]!
0009731C 080940f9 ldr      x8, [x8, #0x10]
00097320 00013fd6 blr      x8
00097324 e1e30091 add      x1, sp, #0x38
00097328 a26300d1 sub      x2, x29, #0x18
0009732C e00315aa mov      x0, x21
00097330 daf6ff97 bl       #0x94e98
00097334 f603002a mov      w22, w0
00097338 e01f40f9 ldr      x0, [sp, #0x38]
0009733C a00000b4 cbz      x0, #0x97350
00097340 088c44f8 ldr      x8, [x0, #0x48]!
00097344 080d40f9 ldr      x8, [x8, #0x18]
00097348 00013fd6 blr      x8
0009734C ff1f00f9 str      xzr, [sp, #0x38]
00097350 96fc0736 tbz      w22, #0, #0x972e0
00097354 e82340f9 ldr      x8, [sp, #0x40]
00097358 8b038052 mov      w11, #0x1c
0009735C bf431c38 sturb    wzr, [x29, #-0x3c]
00097360 b7733929 stp      w23, w28, [x29, #-0x38]
00097364 a87f3da9 stp      x8, xzr, [x29, #-0x30]
00097368 680240f9 ldr      x8, [x19]
0009736C 083140f9 ldr      x8, [x8, #0x60]
00097370 09294fa9 ldp      x9, x10, [x8, #0xf0]
00097374 41250b9b madd     x1, x10, x11, x9
00097378 098140f9 ldr      x9, [x8, #0x100]
0009737C 5f0109eb cmp      x10, x9
00097380 20faff54 b.eq     #0x972c4
00097384 49cb7392 and      x9, x26, #0xffffffffffffe000
00097388 2a4d40f9 ldr      x10, [x9, #0x98]
0009738C 5f4100f1 cmp      x10, #0x10
00097390 00040054 b.eq     #0x97410
00097394 0b5940f9 ldr      x11, [x8, #0xb0]
00097398 2a0d0a8b add      x10, x9, x10, lsl #3
0009739C 4b0d00f9 str      x11, [x10, #0x18]
000973A0 2a4d40f9 ldr      x10, [x9, #0x98]
000973A4 abc35cf8 ldur     x11, [x29, #-0x34]
000973A8 ac435df8 ldur     x12, [x29, #-0x2c]
000973AC adc35db8 ldur     w13, [x29, #-0x24]
000973B0 4a050091 add      x10, x10, #1
000973B4 2a4d00f9 str      x10, [x9, #0x98]
000973B8 aa435cf8 ldur     x10, [x29, #-0x3c]
000973BC 2d1800b9 str      w13, [x1, #0x18]
000973C0 2a0000f9 str      x10, [x1]
000973C4 2bb000a9 stp      x11, x12, [x1, #8]
000973C8 2a4d40f9 ldr      x10, [x9, #0x98]
000973CC 4a0500d1 sub      x10, x10, #1
000973D0 2a4d00f9 str      x10, [x9, #0x98]
000973D4 097d40f9 ldr      x9, [x8, #0xf8]
000973D8 29050091 add      x9, x9, #1
000973DC 097d00f9 str      x9, [x8, #0xf8]
000973E0 c0ffff17 b        #0x972e0
000973E4 e83340b9 ldr      w8, [sp, #0x30]
000973E8 08050011 add      w8, w8, #1
000973EC 1f150071 cmp      w8, #5
000973F0 e83300b9 str      w8, [sp, #0x30]
000973F4 c1f2ff54 b.ne     #0x9724c
000973F8 e80740b9 ldr      w8, [sp, #4]
000973FC d6060011 add      w22, w22, #1
00097400 df02086b cmp      w22, w8
00097404 e00740f9 ldr      x0, [sp, #8]
00097408 81f1ff54 b.ne     #0x97238
0009740C 26ffff17 b        #0x970a4
00097410 00aefd97 bl       #0x2c10
00097414 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00097418 f6574ea9 ldp      x22, x21, [sp, #0xe0]
0009741C f85f4da9 ldp      x24, x23, [sp, #0xd0]
00097420 fa674ca9 ldp      x26, x25, [sp, #0xc0]
00097424 fc6f4ba9 ldp      x28, x27, [sp, #0xb0]
00097428 fd7b4aa9 ldp      x29, x30, [sp, #0xa0]
0009742C ff030491 add      sp, sp, #0x100
00097430 c0035fd6 ret      
~~~
### 0x97440 (89 slots)
~~~asm
00097440 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00097444 fb0b00f9 str      x27, [sp, #0x10]
00097448 fa6702a9 stp      x26, x25, [sp, #0x20]
0009744C f85f03a9 stp      x24, x23, [sp, #0x30]
00097450 f65704a9 stp      x22, x21, [sp, #0x40]
00097454 f44f05a9 stp      x20, x19, [sp, #0x50]
00097458 fd030091 mov      x29, sp
0009745C 280040f9 ldr      x8, [x1]
00097460 f40301aa mov      x20, x1
00097464 f30300aa mov      x19, x0
00097468 083140f9 ldr      x8, [x8, #0x60]
0009746C 1f7d00f9 str      xzr, [x8, #0xf8]
00097470 080040f9 ldr      x8, [x0]
00097474 2a0040f9 ldr      x10, [x1]
00097478 083140f9 ldr      x8, [x8, #0x60]
0009747C 573140f9 ldr      x23, [x10, #0x60]
00097480 097d40f9 ldr      x9, [x8, #0xf8]
00097484 e90600b4 cbz      x9, #0x97560
00097488 157940f9 ldr      x21, [x8, #0xf0]
0009748C 28e97bd3 lsl      x8, x9, #5
00097490 f6c20291 add      x22, x23, #0xb0
00097494 180909cb sub      x24, x8, x9, lsl #2
00097498 48d03bd5 mrs      x8, tpidr_el0
0009749C 99038052 mov      w25, #0x1c
000974A0 1ac97392 and      x26, x8, #0xffffffffffffe000
000974A4 fb0315aa mov      x27, x21
000974A8 1f2003d5 nop      
000974AC 1f2003d5 nop      
000974B0 e8264fa9 ldp      x8, x9, [x23, #0xf0]
000974B4 2121199b madd     x1, x9, x25, x8
000974B8 e88240f9 ldr      x8, [x23, #0x100]
000974BC 3f0108eb cmp      x9, x8
000974C0 60030054 b.eq     #0x9752c
000974C4 484f40f9 ldr      x8, [x26, #0x98]
000974C8 1f4100f1 cmp      x8, #0x10
000974CC a0060054 b.eq     #0x975a0
000974D0 e95a40f9 ldr      x9, [x23, #0xb0]
000974D4 480f088b add      x8, x26, x8, lsl #3
000974D8 090d00f9 str      x9, [x8, #0x18]
000974DC 484f40f9 ldr      x8, [x26, #0x98]
000974E0 08050091 add      x8, x8, #1
000974E4 484f00f9 str      x8, [x26, #0x98]
000974E8 682740a9 ldp      x8, x9, [x27]
000974EC 6a0b40f9 ldr      x10, [x27, #0x10]
000974F0 6b1b40b9 ldr      w11, [x27, #0x18]
000974F4 2b1800b9 str      w11, [x1, #0x18]
000974F8 280000f9 str      x8, [x1]
000974FC 29a800a9 stp      x9, x10, [x1, #8]
00097500 484f40f9 ldr      x8, [x26, #0x98]
00097504 080500d1 sub      x8, x8, #1
00097508 484f00f9 str      x8, [x26, #0x98]
0009750C e87e40f9 ldr      x8, [x23, #0xf8]
00097510 08050091 add      x8, x8, #1
00097514 e87e00f9 str      x8, [x23, #0xf8]
00097518 7b730091 add      x27, x27, #0x1c
0009751C b5720091 add      x21, x21, #0x1c
00097520 187300f1 subs     x24, x24, #0x1c
00097524 61fcff54 b.ne     #0x974b0
00097528 0a000014 b        #0x97550
0009752C a8630091 add      x8, x29, #0x18
00097530 e00316aa mov      x0, x22
00097534 22008052 mov      w2, #1
00097538 e30315aa mov      x3, x21
0009753C e40d0094 bl       #0x9accc
00097540 7b730091 add      x27, x27, #0x1c
00097544 b5720091 add      x21, x21, #0x1c
00097548 187300f1 subs     x24, x24, #0x1c
0009754C 21fbff54 b.ne     #0x974b0
00097550 880240f9 ldr      x8, [x20]
00097554 173140f9 ldr      x23, [x8, #0x60]
00097558 680240f9 ldr      x8, [x19]
0009755C 083140f9 ldr      x8, [x8, #0x60]
00097560 e0220091 add      x0, x23, #8
00097564 01210091 add      x1, x8, #8
00097568 b9130094 bl       #0x9c44c
0009756C 600240f9 ldr      x0, [x19]
00097570 940240f9 ldr      x20, [x20]
00097574 71110094 bl       #0x9bb38
00097578 e103002a mov      w1, w0
0009757C e00314aa mov      x0, x20
00097580 71110094 bl       #0x9bb44
00097584 f44f45a9 ldp      x20, x19, [sp, #0x50]
00097588 fb0b40f9 ldr      x27, [sp, #0x10]
0009758C f65744a9 ldp      x22, x21, [sp, #0x40]
00097590 f85f43a9 ldp      x24, x23, [sp, #0x30]
00097594 fa6742a9 ldp      x26, x25, [sp, #0x20]
00097598 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0009759C c0035fd6 ret      
000975A0 9cadfd97 bl       #0x2c10
~~~
### 0x975b0 (101 slots)
~~~asm
000975B0 ffc301d1 sub      sp, sp, #0x70
000975B4 fd7b01a9 stp      x29, x30, [sp, #0x10]
000975B8 fc6f02a9 stp      x28, x27, [sp, #0x20]
000975BC fa6703a9 stp      x26, x25, [sp, #0x30]
000975C0 f85f04a9 stp      x24, x23, [sp, #0x40]
000975C4 f65705a9 stp      x22, x21, [sp, #0x50]
000975C8 f44f06a9 stp      x20, x19, [sp, #0x60]
000975CC fd430091 add      x29, sp, #0x10
000975D0 280040f9 ldr      x8, [x1]
000975D4 f30301aa mov      x19, x1
000975D8 083140f9 ldr      x8, [x8, #0x60]
000975DC 1f7d00f9 str      xzr, [x8, #0xf8]
000975E0 080040f9 ldr      x8, [x0]
000975E4 083140f9 ldr      x8, [x8, #0x60]
000975E8 097d40f9 ldr      x9, [x8, #0xf8]
000975EC a90100b4 cbz      x9, #0x97620
000975F0 157940f9 ldr      x21, [x8, #0xf0]
000975F4 28e97bd3 lsl      x8, x9, #5
000975F8 f40300aa mov      x20, x0
000975FC 190909cb sub      x25, x8, x9, lsl #2
00097600 48d03bd5 mrs      x8, tpidr_el0
00097604 f8031f2a mov      w24, wzr
00097608 f7031f2a mov      w23, wzr
0009760C f6031f2a mov      w22, wzr
00097610 9a038052 mov      w26, #0x1c
00097614 1bc97392 and      x27, x8, #0xffffffffffffe000
00097618 fc0315aa mov      x28, x21
0009761C 0f000014 b        #0x97658
00097620 f6031f2a mov      w22, wzr
00097624 f7031f2a mov      w23, wzr
00097628 32000014 b        #0x976f0
0009762C 00c10291 add      x0, x8, #0xb0
00097630 e8230091 add      x8, sp, #8
00097634 22008052 mov      w2, #1
00097638 e30315aa mov      x3, x21
0009763C a40d0094 bl       #0x9accc
00097640 f7060011 add      w23, w23, #1
00097644 18070011 add      w24, w24, #1
00097648 9c730091 add      x28, x28, #0x1c
0009764C b5720091 add      x21, x21, #0x1c
00097650 397300f1 subs     x25, x25, #0x1c
00097654 a0040054 b.eq     #0x976e8
00097658 800240f9 ldr      x0, [x20]
0009765C 37110094 bl       #0x9bb38
00097660 881740b9 ldr      w8, [x28, #0x14]
00097664 1f03006b cmp      w24, w0
00097668 f602961a csel     w22, w23, w22, eq
0009766C 1f050071 cmp      w8, #1
00097670 a0feff54 b.eq     #0x97644
00097674 680240f9 ldr      x8, [x19]
00097678 083140f9 ldr      x8, [x8, #0x60]
0009767C 09294fa9 ldp      x9, x10, [x8, #0xf0]
00097680 41251a9b madd     x1, x10, x26, x9
00097684 098140f9 ldr      x9, [x8, #0x100]
00097688 5f0109eb cmp      x10, x9
0009768C 00fdff54 b.eq     #0x9762c
00097690 694f40f9 ldr      x9, [x27, #0x98]
00097694 3f4100f1 cmp      x9, #0x10
00097698 40050054 b.eq     #0x97740
0009769C 0a5940f9 ldr      x10, [x8, #0xb0]
000976A0 690f098b add      x9, x27, x9, lsl #3
000976A4 2a0d00f9 str      x10, [x9, #0x18]
000976A8 694f40f9 ldr      x9, [x27, #0x98]
000976AC 29050091 add      x9, x9, #1
000976B0 694f00f9 str      x9, [x27, #0x98]
000976B4 892b40a9 ldp      x9, x10, [x28]
000976B8 8b0b40f9 ldr      x11, [x28, #0x10]
000976BC 8c1b40b9 ldr      w12, [x28, #0x18]
000976C0 2c1800b9 str      w12, [x1, #0x18]
000976C4 290000f9 str      x9, [x1]
000976C8 2aac00a9 stp      x10, x11, [x1, #8]
000976CC 694f40f9 ldr      x9, [x27, #0x98]
000976D0 290500d1 sub      x9, x9, #1
000976D4 694f00f9 str      x9, [x27, #0x98]
000976D8 097d40f9 ldr      x9, [x8, #0xf8]
000976DC 29050091 add      x9, x9, #1
000976E0 097d00f9 str      x9, [x8, #0xf8]
000976E4 d7ffff17 b        #0x97640
000976E8 880240f9 ldr      x8, [x20]
000976EC 083140f9 ldr      x8, [x8, #0x60]
000976F0 e9060071 subs     w9, w23, #1
000976F4 01210091 add      x1, x8, #8
000976F8 e933891a csel     w9, wzr, w9, lo
000976FC df02176b cmp      w22, w23
00097700 d432891a csel     w20, w22, w9, lo
00097704 690240f9 ldr      x9, [x19]
00097708 293140f9 ldr      x9, [x9, #0x60]
0009770C 20210091 add      x0, x9, #8
00097710 4f130094 bl       #0x9c44c
00097714 600240f9 ldr      x0, [x19]
00097718 e103142a mov      w1, w20
0009771C 0a110094 bl       #0x9bb44
00097720 f44f46a9 ldp      x20, x19, [sp, #0x60]
00097724 f65745a9 ldp      x22, x21, [sp, #0x50]
00097728 f85f44a9 ldp      x24, x23, [sp, #0x40]
0009772C fa6743a9 ldp      x26, x25, [sp, #0x30]
00097730 fc6f42a9 ldp      x28, x27, [sp, #0x20]
00097734 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00097738 ffc30191 add      sp, sp, #0x70
0009773C c0035fd6 ret      
00097740 34adfd97 bl       #0x2c10
~~~
### 0x97750 (1031 slots)
~~~asm
00097750 ff0304d1 sub      sp, sp, #0x100
00097754 fd7b0aa9 stp      x29, x30, [sp, #0xa0]
00097758 fc6f0ba9 stp      x28, x27, [sp, #0xb0]
0009775C fa670ca9 stp      x26, x25, [sp, #0xc0]
00097760 f85f0da9 stp      x24, x23, [sp, #0xd0]
00097764 f6570ea9 stp      x22, x21, [sp, #0xe0]
00097768 f44f0fa9 stp      x20, x19, [sp, #0xf0]
0009776C fd830291 add      x29, sp, #0xa0
00097770 480040f9 ldr      x8, [x2]
00097774 f60300aa mov      x22, x0
00097778 f40303aa mov      x20, x3
0009777C f30302aa mov      x19, x2
00097780 f50301aa mov      x21, x1
00097784 083140f9 ldr      x8, [x8, #0x60]
00097788 1f7d00f9 str      xzr, [x8, #0xf8]
0009778C 280040f9 ldr      x8, [x1]
00097790 083140f9 ldr      x8, [x8, #0x60]
00097794 1a6551a9 ldp      x26, x25, [x8, #0x110]
00097798 189d40f9 ldr      x24, [x8, #0x138]
0009779C 09dd52a9 ldp      x9, x23, [x8, #0x128]
000977A0 e0031aaa mov      x0, x26
000977A4 a9831bf8 stur     x9, [x29, #-0x48]
000977A8 7ef4ff97 bl       #0x949a0
000977AC a80240f9 ldr      x8, [x21]
000977B0 083140f9 ldr      x8, [x8, #0x60]
000977B4 097d40f9 ldr      x9, [x8, #0xf8]
000977B8 a97a00b4 cbz      x9, #0x9870c
000977BC 1c7940f9 ldr      x28, [x8, #0xf0]
000977C0 8a038052 mov      w10, #0x1c
000977C4 f32b00f9 str      x19, [sp, #0x50]
000977C8 abe300d1 sub      x11, x29, #0x38
000977CC 68110091 add      x8, x11, #4
000977D0 e02700b9 str      w0, [sp, #0x24]
000977D4 f96303a9 stp      x25, x24, [sp, #0x30]
000977D8 33710a9b madd     x19, x9, x10, x28
000977DC f75704a9 stp      x23, x21, [sp, #0x40]
000977E0 e81700f9 str      x8, [sp, #0x28]
000977E4 0a000014 b        #0x9780c
000977E8 880640b9 ldr      w8, [x20, #4]
000977EC 1f050031 cmn      w8, #1
000977F0 200f0054 b.eq     #0x979d4
000977F4 c00240f9 ldr      x0, [x22]
000977F8 61030012 and      w1, w27, #1
000977FC 87bc0594 bl       #0x206a18
00097800 9c730091 add      x28, x28, #0x1c
00097804 9f0313eb cmp      x28, x19
00097808 c0770054 b.eq     #0x98700
0009780C c00240f9 ldr      x0, [x22]
00097810 bfc31fb8 stur     wzr, [x29, #-4]
00097814 a0031ff8 stur     x0, [x29, #-0x10]
00097818 800000b4 cbz      x0, #0x97828
0009781C 088c44f8 ldr      x8, [x0, #0x48]!
00097820 080940f9 ldr      x8, [x8, #0x10]
00097824 00013fd6 blr      x8
00097828 a14300d1 sub      x1, x29, #0x10
0009782C a21300d1 sub      x2, x29, #4
00097830 e0031aaa mov      x0, x26
00097834 e3031caa mov      x3, x28
00097838 e4031f2a mov      w4, wzr
0009783C 68f4ff97 bl       #0x949dc
00097840 f503002a mov      w21, w0
00097844 a0035ff8 ldur     x0, [x29, #-0x10]
00097848 a00000b4 cbz      x0, #0x9785c
0009784C 088c44f8 ldr      x8, [x0, #0x48]!
00097850 080d40f9 ldr      x8, [x8, #0x18]
00097854 00013fd6 blr      x8
00097858 bf031ff8 stur     xzr, [x29, #-0x10]
0009785C 35fd0736 tbz      w21, #0, #0x97800
00097860 c00240f9 ldr      x0, [x22]
00097864 6bbc0594 bl       #0x206a10
00097868 fb03002a mov      w27, w0
0009786C e00316aa mov      x0, x22
00097870 cde6ff97 bl       #0x913a4
00097874 f903002a mov      w25, w0
00097878 e0010036 tbz      w0, #0, #0x978b4
0009787C c00240f9 ldr      x0, [x22]
00097880 e1031f2a mov      w1, wzr
00097884 61bc0594 bl       #0x206a08
00097888 970240b9 ldr      w23, [x20]
0009788C a0431cb8 stur     w0, [x29, #-0x3c]
00097890 ff060031 cmn      w23, #1
00097894 a0faff54 b.eq     #0x977e8
00097898 f5031f2a mov      w21, wzr
0009789C f8c20011 add      w24, w23, #0x30
000978A0 1fbb0071 cmp      w24, #0x2e
000978A4 e9010054 b.ls     #0x978e0
000978A8 bf02176b cmp      w21, w23
000978AC 41faff54 b.ne     #0x977f4
000978B0 17000014 b        #0x9790c
000978B4 970240b9 ldr      w23, [x20]
000978B8 ff060031 cmn      w23, #1
000978BC 20030054 b.eq     #0x97920
000978C0 c00240f9 ldr      x0, [x22]
000978C4 4dbb0594 bl       #0x2065f8
000978C8 f503002a mov      w21, w0
000978CC 28008052 mov      w8, #1
000978D0 a8431cb8 stur     w8, [x29, #-0x3c]
000978D4 f8c20011 add      w24, w23, #0x30
000978D8 1fbb0071 cmp      w24, #0x2e
000978DC 68feff54 b.hi     #0x978a8
000978E0 a8835bf8 ldur     x8, [x29, #-0x48]
000978E4 88f8ffb4 cbz      x8, #0x977f4
000978E8 a0835bf8 ldur     x0, [x29, #-0x48]
000978EC 84e20894 bl       #0x2d02fc
000978F0 bf02006b cmp      w21, w0
000978F4 02f8ff54 b.hs     #0x977f4
000978F8 a0835bf8 ldur     x0, [x29, #-0x48]
000978FC e103152a mov      w1, w21
00097900 77e20894 bl       #0x2d02dc
00097904 1f00186b cmp      w0, w24
00097908 61f7ff54 b.ne     #0x977f4
0009790C 950640b9 ldr      w21, [x20, #4]
00097910 bf060031 cmn      w21, #1
00097914 80010054 b.eq     #0x97944
00097918 f9f60737 tbnz     w25, #0, #0x977f4
0009791C 06000014 b        #0x97934
00097920 950640b9 ldr      w21, [x20, #4]
00097924 28008052 mov      w8, #1
00097928 a8431cb8 stur     w8, [x29, #-0x3c]
0009792C bf060031 cmn      w21, #1
00097930 a0000054 b.eq     #0x97944
00097934 c00240f9 ldr      x0, [x22]
00097938 b5bb0594 bl       #0x20680c
0009793C bf02006b cmp      w21, w0
00097940 a1f5ff54 b.ne     #0x977f4
00097944 955e4129 ldp      w21, w23, [x20, #8]
00097948 bf060031 cmn      w21, #1
0009794C c1010054 b.ne     #0x97984
00097950 ff060031 cmn      w23, #1
00097954 81010054 b.ne     #0x97984
00097958 951240b9 ldr      w21, [x20, #0x10]
0009795C bf060031 cmn      w21, #1
00097960 60060054 b.eq     #0x97a2c
00097964 99f40737 tbnz     w25, #0, #0x977f4
00097968 bf620071 cmp      w21, #0x18
0009796C 68050054 b.hi     #0x97a18
00097970 c00240f9 ldr      x0, [x22]
00097974 2fbb0594 bl       #0x206630
00097978 1f00156b cmp      w0, w21
0009797C c1f3ff54 b.ne     #0x977f4
00097980 2b000014 b        #0x97a2c
00097984 99f30737 tbnz     w25, #0, #0x977f4
00097988 c00240f9 ldr      x0, [x22]
0009798C 6cbb0594 bl       #0x20673c
00097990 181c0012 and      w24, w0, #0xff
00097994 c00240f9 ldr      x0, [x22]
00097998 81bb0594 bl       #0x20679c
0009799C 081c0012 and      w8, w0, #0xff
000979A0 bf060031 cmn      w21, #1
000979A4 c0020054 b.eq     #0x979fc
000979A8 ff060031 cmn      w23, #1
000979AC 80020054 b.eq     #0x979fc
000979B0 bf02186b cmp      w21, w24
000979B4 61000054 b.ne     #0x979c0
000979B8 ff02086b cmp      w23, w8
000979BC e0fcff54 b.eq     #0x97958
000979C0 ff02186b cmp      w23, w24
000979C4 81f1ff54 b.ne     #0x977f4
000979C8 bf02086b cmp      w21, w8
000979CC 60fcff54 b.eq     #0x97958
000979D0 89ffff17 b        #0x977f4
000979D4 880a40b9 ldr      w8, [x20, #8]
000979D8 1f050031 cmn      w8, #1
000979DC c1f0ff54 b.ne     #0x977f4
000979E0 880e40b9 ldr      w8, [x20, #0xc]
000979E4 1f050031 cmn      w8, #1
000979E8 61f0ff54 b.ne     #0x977f4
000979EC 881240b9 ldr      w8, [x20, #0x10]
000979F0 1f050031 cmn      w8, #1
000979F4 c0010054 b.eq     #0x97a2c
000979F8 7fffff17 b        #0x977f4
000979FC bf060031 cmn      w21, #1
00097A00 a912971a csel     w9, w21, w23, ne
00097A04 3f01186b cmp      w9, w24
00097A08 80faff54 b.eq     #0x97958
00097A0C 3f01086b cmp      w9, w8
00097A10 21efff54 b.ne     #0x977f4
00097A14 d1ffff17 b        #0x97958
00097A18 c00240f9 ldr      x0, [x22]
00097A1C b5660051 sub      w21, w21, #0x19
00097A20 9ebb0594 bl       #0x206898
00097A24 1f00156b cmp      w0, w21
00097A28 61eeff54 b.ne     #0x977f4
00097A2C 954a40b9 ldr      w21, [x20, #0x48]
00097A30 bf060031 cmn      w21, #1
00097A34 20060054 b.eq     #0x97af8
00097A38 a8435cb8 ldur     w8, [x29, #-0x3c]
00097A3C c8ed0736 tbz      w8, #0, #0x977f4
00097A40 c00240f9 ldr      x0, [x22]
00097A44 e1031f2a mov      w1, wzr
00097A48 d8bb0594 bl       #0x2069a8
00097A4C 1f00156b cmp      w0, w21
00097A50 21edff54 b.ne     #0x977f4
00097A54 954e40b9 ldr      w21, [x20, #0x4c]
00097A58 bf060031 cmn      w21, #1
00097A5C c0000054 b.eq     #0x97a74
00097A60 c00240f9 ldr      x0, [x22]
00097A64 21008052 mov      w1, #1
00097A68 d0bb0594 bl       #0x2069a8
00097A6C 1f00156b cmp      w0, w21
00097A70 21ecff54 b.ne     #0x977f4
00097A74 955240b9 ldr      w21, [x20, #0x50]
00097A78 bf060031 cmn      w21, #1
00097A7C c0000054 b.eq     #0x97a94
00097A80 c00240f9 ldr      x0, [x22]
00097A84 41008052 mov      w1, #2
00097A88 c8bb0594 bl       #0x2069a8
00097A8C 1f00156b cmp      w0, w21
00097A90 21ebff54 b.ne     #0x977f4
00097A94 955640b9 ldr      w21, [x20, #0x54]
00097A98 bf060031 cmn      w21, #1
00097A9C c0000054 b.eq     #0x97ab4
00097AA0 c00240f9 ldr      x0, [x22]
00097AA4 61008052 mov      w1, #3
00097AA8 c0bb0594 bl       #0x2069a8
00097AAC 1f00156b cmp      w0, w21
00097AB0 21eaff54 b.ne     #0x977f4
00097AB4 955a40b9 ldr      w21, [x20, #0x58]
00097AB8 bf060031 cmn      w21, #1
00097ABC c0000054 b.eq     #0x97ad4
00097AC0 c00240f9 ldr      x0, [x22]
00097AC4 81008052 mov      w1, #4
00097AC8 b8bb0594 bl       #0x2069a8
00097ACC 1f00156b cmp      w0, w21
00097AD0 21e9ff54 b.ne     #0x977f4
00097AD4 955e40b9 ldr      w21, [x20, #0x5c]
00097AD8 bf060031 cmn      w21, #1
00097ADC c0020054 b.eq     #0x97b34
00097AE0 c00240f9 ldr      x0, [x22]
00097AE4 a1008052 mov      w1, #5
00097AE8 b0bb0594 bl       #0x2069a8
00097AEC 1f00156b cmp      w0, w21
00097AF0 21e8ff54 b.ne     #0x977f4
00097AF4 10000014 b        #0x97b34
00097AF8 884e40b9 ldr      w8, [x20, #0x4c]
00097AFC 1f050031 cmn      w8, #1
00097B00 61070054 b.ne     #0x97bec
00097B04 885240b9 ldr      w8, [x20, #0x50]
00097B08 1f050031 cmn      w8, #1
00097B0C 01070054 b.ne     #0x97bec
00097B10 885640b9 ldr      w8, [x20, #0x54]
00097B14 1f050031 cmn      w8, #1
00097B18 a1060054 b.ne     #0x97bec
00097B1C 885a40b9 ldr      w8, [x20, #0x58]
00097B20 1f050031 cmn      w8, #1
00097B24 41060054 b.ne     #0x97bec
00097B28 885e40b9 ldr      w8, [x20, #0x5c]
00097B2C 1f050031 cmn      w8, #1
00097B30 e1050054 b.ne     #0x97bec
00097B34 951a40b9 ldr      w21, [x20, #0x18]
00097B38 bf060031 cmn      w21, #1
00097B3C 00010054 b.eq     #0x97b5c
00097B40 a8435cb8 ldur     w8, [x29, #-0x3c]
00097B44 88e50736 tbz      w8, #0, #0x977f4
00097B48 c00240f9 ldr      x0, [x22]
00097B4C 99bb0594 bl       #0x2069b0
00097B50 10b70194 bl       #0x105790
00097B54 bf02006b cmp      w21, w0
00097B58 e1e4ff54 b.ne     #0x977f4
00097B5C 8baa4329 ldp      w11, w10, [x20, #0x1c]
00097B60 7f050031 cmn      w11, #1
00097B64 89a24429 ldp      w9, w8, [x20, #0x24]
00097B68 c1040054 b.ne     #0x97c00
00097B6C 5f050031 cmn      w10, #1
00097B70 81040054 b.ne     #0x97c00
00097B74 3f050031 cmn      w9, #1
00097B78 41040054 b.ne     #0x97c00
00097B7C 1f050031 cmn      w8, #1
00097B80 01040054 b.ne     #0x97c00
00097B84 972e40b9 ldr      w23, [x20, #0x2c]
00097B88 ff060031 cmn      w23, #1
00097B8C 403b0054 b.eq     #0x982f4
00097B90 39e30737 tbnz     w25, #0, #0x977f4
00097B94 a1c35fb8 ldur     w1, [x29, #-4]
00097B98 e00316aa mov      x0, x22
00097B9C bef9ff97 bl       #0x96294
00097BA0 a0e20736 tbz      w0, #0, #0x977f4
00097BA4 c00240f9 ldr      x0, [x22]
00097BA8 a4ba0594 bl       #0x206638
00097BAC f8c20011 add      w24, w23, #0x30
00097BB0 f503002a mov      w21, w0
00097BB4 1fbb0071 cmp      w24, #0x2e
00097BB8 28090054 b.hi     #0x97cdc
00097BBC e81f40f9 ldr      x8, [sp, #0x38]
00097BC0 a8e1ffb4 cbz      x8, #0x977f4
00097BC4 e01f40f9 ldr      x0, [sp, #0x38]
00097BC8 cde10894 bl       #0x2d02fc
00097BCC bf02006b cmp      w21, w0
00097BD0 22e1ff54 b.hs     #0x977f4
00097BD4 e01f40f9 ldr      x0, [sp, #0x38]
00097BD8 e103152a mov      w1, w21
00097BDC c0e10894 bl       #0x2d02dc
00097BE0 1f00186b cmp      w0, w24
00097BE4 81e0ff54 b.ne     #0x977f4
00097BE8 c3010014 b        #0x982f4
00097BEC a8435cb8 ldur     w8, [x29, #-0x3c]
00097BF0 28e00736 tbz      w8, #0, #0x977f4
00097BF4 bf060031 cmn      w21, #1
00097BF8 41f2ff54 b.ne     #0x97a40
00097BFC 96ffff17 b        #0x97a54
00097C00 eb1300b9 str      w11, [sp, #0x10]
00097C04 eaa70329 stp      w10, w9, [sp, #0x1c]
00097C08 e81b00b9 str      w8, [sp, #0x18]
00097C0C 59df0737 tbnz     w25, #0, #0x977f4
00097C10 c00240f9 ldr      x0, [x22]
00097C14 c6ba0594 bl       #0x20672c
00097C18 171c0012 and      w23, w0, #0xff
00097C1C c00240f9 ldr      x0, [x22]
00097C20 e1031f2a mov      w1, wzr
00097C24 c0ba0594 bl       #0x206724
00097C28 1f000071 cmp      w0, #0
00097C2C 21008052 mov      w1, #1
00097C30 f8079f1a cset     w24, ne
00097C34 ff02186b cmp      w23, w24
00097C38 f533801a csel     w21, wzr, w0, lo
00097C3C c00240f9 ldr      x0, [x22]
00097C40 b9ba0594 bl       #0x206724
00097C44 1f000071 cmp      w0, #0
00097C48 41008052 mov      w1, #2
00097C4C 1807981a cinc     w24, w24, ne
00097C50 1f03176b cmp      w24, w23
00097C54 e883801a csel     w8, wzr, w0, hi
00097C58 c00240f9 ldr      x0, [x22]
00097C5C e81700b9 str      w8, [sp, #0x14]
00097C60 b1ba0594 bl       #0x206724
00097C64 1f000071 cmp      w0, #0
00097C68 61008052 mov      w1, #3
00097C6C 1807981a cinc     w24, w24, ne
00097C70 1f03176b cmp      w24, w23
00097C74 e883801a csel     w8, wzr, w0, hi
00097C78 c00240f9 ldr      x0, [x22]
00097C7C e80f00b9 str      w8, [sp, #0xc]
00097C80 a9ba0594 bl       #0x206724
00097C84 f01340b9 ldr      w16, [sp, #0x10]
00097C88 1f000071 cmp      w0, #0
00097C8C ec03152a mov      w12, w21
00097C90 eb3f4329 ldp      w11, w15, [sp, #0x18]
00097C94 0807981a cinc     w8, w24, ne
00097C98 ee2340b9 ldr      w14, [sp, #0x20]
00097C9C 1f01176b cmp      w8, w23
00097CA0 bf831cb8 stur     wzr, [x29, #-0x38]
00097CA4 ed83801a csel     w13, wzr, w0, hi
00097CA8 1fc60031 cmn      w16, #0x31
00097CAC 68040054 b.hi     #0x97d38
00097CB0 ac000034 cbz      w12, #0x97cc4
00097CB4 9f01106b cmp      w12, w16
00097CB8 61000054 b.ne     #0x97cc4
00097CBC e8031faa mov      x8, xzr
00097CC0 1a000014 b        #0x97d28
00097CC4 e81740b9 ldr      w8, [sp, #0x14]
00097CC8 68010034 cbz      w8, #0x97cf4
00097CCC 1f01106b cmp      w8, w16
00097CD0 21010054 b.ne     #0x97cf4
00097CD4 28008052 mov      w8, #1
00097CD8 14000014 b        #0x97d28
00097CDC a87a1f12 and      w8, w21, #0xfffffffe
00097CE0 1f290471 cmp      w8, #0x10a
00097CE4 41010054 b.ne     #0x97d0c
00097CE8 ff2a0471 cmp      w23, #0x10a
00097CEC 41d8ff54 b.ne     #0x977f4
00097CF0 81010014 b        #0x982f4
00097CF4 e80f40b9 ldr      w8, [sp, #0xc]
00097CF8 08010034 cbz      w8, #0x97d18
00097CFC 1f01106b cmp      w8, w16
00097D00 c1000054 b.ne     #0x97d18
00097D04 48008052 mov      w8, #2
00097D08 08000014 b        #0x97d28
00097D0C bf02176b cmp      w21, w23
00097D10 21d7ff54 b.ne     #0x977f4
00097D14 78010014 b        #0x982f4
00097D18 edd6ff34 cbz      w13, #0x977f4
00097D1C bf01106b cmp      w13, w16
00097D20 a1d6ff54 b.ne     #0x977f4
00097D24 68008052 mov      w8, #3
00097D28 a9e300d1 sub      x9, x29, #0x38
00097D2C 280108aa orr      x8, x9, x8
00097D30 29008052 mov      w9, #1
00097D34 09010039 strb     w9, [x8]
00097D38 f80f40b9 ldr      w24, [sp, #0xc]
00097D3C ffc50031 cmn      w15, #0x31
00097D40 ea1740b9 ldr      w10, [sp, #0x14]
00097D44 08040054 b.hi     #0x97dc4
00097D48 ec000034 cbz      w12, #0x97d64
00097D4C 9f010f6b cmp      w12, w15
00097D50 a1000054 b.ne     #0x97d64
00097D54 a8835c38 ldurb    w8, [x29, #-0x38]
00097D58 68000035 cbnz     w8, #0x97d64
00097D5C e8031faa mov      x8, xzr
00097D60 15000014 b        #0x97db4
00097D64 ea000034 cbz      w10, #0x97d80
00097D68 5f010f6b cmp      w10, w15
00097D6C a1000054 b.ne     #0x97d80
00097D70 a8935c38 ldurb    w8, [x29, #-0x37]
00097D74 68000035 cbnz     w8, #0x97d80
00097D78 28008052 mov      w8, #1
00097D7C 0e000014 b        #0x97db4
00097D80 f8000034 cbz      w24, #0x97d9c
00097D84 1f030f6b cmp      w24, w15
00097D88 a1000054 b.ne     #0x97d9c
00097D8C a8a35c38 ldurb    w8, [x29, #-0x36]
00097D90 68000035 cbnz     w8, #0x97d9c
00097D94 48008052 mov      w8, #2
00097D98 07000014 b        #0x97db4
00097D9C cdd2ff34 cbz      w13, #0x977f4
00097DA0 bf010f6b cmp      w13, w15
00097DA4 81d2ff54 b.ne     #0x977f4
00097DA8 a8b35c38 ldurb    w8, [x29, #-0x35]
00097DAC 48d2ff35 cbnz     w8, #0x977f4
00097DB0 68008052 mov      w8, #3
00097DB4 a9e300d1 sub      x9, x29, #0x38
00097DB8 280108aa orr      x8, x9, x8
00097DBC 29008052 mov      w9, #1
00097DC0 09010039 strb     w9, [x8]
00097DC4 dfc50031 cmn      w14, #0x31
00097DC8 08040054 b.hi     #0x97e48
00097DCC ec000034 cbz      w12, #0x97de8
00097DD0 9f010e6b cmp      w12, w14
00097DD4 a1000054 b.ne     #0x97de8
00097DD8 a8835c38 ldurb    w8, [x29, #-0x38]
00097DDC 68000035 cbnz     w8, #0x97de8
00097DE0 e8031faa mov      x8, xzr
00097DE4 15000014 b        #0x97e38
00097DE8 ea000034 cbz      w10, #0x97e04
00097DEC 5f010e6b cmp      w10, w14
00097DF0 a1000054 b.ne     #0x97e04
00097DF4 a8935c38 ldurb    w8, [x29, #-0x37]
00097DF8 68000035 cbnz     w8, #0x97e04
00097DFC 28008052 mov      w8, #1
00097E00 0e000014 b        #0x97e38
00097E04 f8000034 cbz      w24, #0x97e20
00097E08 1f030e6b cmp      w24, w14
00097E0C a1000054 b.ne     #0x97e20
00097E10 a8a35c38 ldurb    w8, [x29, #-0x36]
00097E14 68000035 cbnz     w8, #0x97e20
00097E18 48008052 mov      w8, #2
00097E1C 07000014 b        #0x97e38
00097E20 adceff34 cbz      w13, #0x977f4
00097E24 bf010e6b cmp      w13, w14
00097E28 61ceff54 b.ne     #0x977f4
00097E2C a8b35c38 ldurb    w8, [x29, #-0x35]
00097E30 28ceff35 cbnz     w8, #0x977f4
00097E34 68008052 mov      w8, #3
00097E38 a9e300d1 sub      x9, x29, #0x38
00097E3C 280108aa orr      x8, x9, x8
00097E40 29008052 mov      w9, #1
00097E44 09010039 strb     w9, [x8]
00097E48 7fc50031 cmn      w11, #0x31
00097E4C 08040054 b.hi     #0x97ecc
00097E50 ec000034 cbz      w12, #0x97e6c
00097E54 9f010b6b cmp      w12, w11
00097E58 a1000054 b.ne     #0x97e6c
00097E5C a8835c38 ldurb    w8, [x29, #-0x38]
00097E60 68000035 cbnz     w8, #0x97e6c
00097E64 e8031faa mov      x8, xzr
00097E68 15000014 b        #0x97ebc
00097E6C ea000034 cbz      w10, #0x97e88
00097E70 5f010b6b cmp      w10, w11
00097E74 a1000054 b.ne     #0x97e88
00097E78 a8935c38 ldurb    w8, [x29, #-0x37]
00097E7C 68000035 cbnz     w8, #0x97e88
00097E80 28008052 mov      w8, #1
00097E84 0e000014 b        #0x97ebc
00097E88 f8000034 cbz      w24, #0x97ea4
00097E8C 1f030b6b cmp      w24, w11
00097E90 a1000054 b.ne     #0x97ea4
00097E94 a8a35c38 ldurb    w8, [x29, #-0x36]
00097E98 68000035 cbnz     w8, #0x97ea4
00097E9C 48008052 mov      w8, #2
00097EA0 07000014 b        #0x97ebc
00097EA4 8dcaff34 cbz      w13, #0x977f4
00097EA8 bf010b6b cmp      w13, w11
00097EAC 41caff54 b.ne     #0x977f4
00097EB0 a8b35c38 ldurb    w8, [x29, #-0x35]
00097EB4 08caff35 cbnz     w8, #0x977f4
00097EB8 68008052 mov      w8, #3
00097EBC a9e300d1 sub      x9, x29, #0x38
00097EC0 280108aa orr      x8, x9, x8
00097EC4 29008052 mov      w9, #1
00097EC8 09010039 strb     w9, [x8]
00097ECC 15c20011 add      w21, w16, #0x30
00097ED0 f7030c2a mov      w23, w12
00097ED4 ed0b00b9 str      w13, [sp, #8]
00097ED8 bfba0071 cmp      w21, #0x2e
00097EDC 88080054 b.hi     #0x97fec
00097EE0 e82340f9 ldr      x8, [sp, #0x40]
00097EE4 88c8ffb4 cbz      x8, #0x977f4
00097EE8 2c020034 cbz      w12, #0x97f2c
00097EEC a8835c38 ldurb    w8, [x29, #-0x38]
00097EF0 e8010035 cbnz     w8, #0x97f2c
00097EF4 e02340f9 ldr      x0, [sp, #0x40]
00097EF8 01e10894 bl       #0x2d02fc
00097EFC ea1740b9 ldr      w10, [sp, #0x14]
00097F00 ff02006b cmp      w23, w0
00097F04 e803172a mov      w8, w23
00097F08 22010054 b.hs     #0x97f2c
00097F0C e02340f9 ldr      x0, [sp, #0x40]
00097F10 e103172a mov      w1, w23
00097F14 f2e00894 bl       #0x2d02dc
00097F18 ef1f40b9 ldr      w15, [sp, #0x1c]
00097F1C ec03172a mov      w12, w23
00097F20 1f00156b cmp      w0, w21
00097F24 ea1740b9 ldr      w10, [sp, #0x14]
00097F28 20060054 b.eq     #0x97fec
00097F2C 0a020034 cbz      w10, #0x97f6c
00097F30 a8935c38 ldurb    w8, [x29, #-0x37]
00097F34 c8010035 cbnz     w8, #0x97f6c
00097F38 e02340f9 ldr      x0, [sp, #0x40]
00097F3C f0e00894 bl       #0x2d02fc
00097F40 e81740b9 ldr      w8, [sp, #0x14]
00097F44 1f01006b cmp      w8, w0
00097F48 22010054 b.hs     #0x97f6c
00097F4C e02340f9 ldr      x0, [sp, #0x40]
00097F50 e11740b9 ldr      w1, [sp, #0x14]
00097F54 e2e00894 bl       #0x2d02dc
00097F58 ef1f40b9 ldr      w15, [sp, #0x1c]
00097F5C ec03172a mov      w12, w23
00097F60 1f00156b cmp      w0, w21
00097F64 ea1740b9 ldr      w10, [sp, #0x14]
00097F68 20040054 b.eq     #0x97fec
00097F6C f8010034 cbz      w24, #0x97fa8
00097F70 a8a35c38 ldurb    w8, [x29, #-0x36]
00097F74 a8010035 cbnz     w8, #0x97fa8
00097F78 e02340f9 ldr      x0, [sp, #0x40]
00097F7C e0e00894 bl       #0x2d02fc
00097F80 1f03006b cmp      w24, w0
00097F84 22010054 b.hs     #0x97fa8
00097F88 e02340f9 ldr      x0, [sp, #0x40]
00097F8C e103182a mov      w1, w24
00097F90 d3e00894 bl       #0x2d02dc
00097F94 ef1f40b9 ldr      w15, [sp, #0x1c]
00097F98 ec03172a mov      w12, w23
00097F9C 1f00156b cmp      w0, w21
00097FA0 ea1740b9 ldr      w10, [sp, #0x14]
00097FA4 40020054 b.eq     #0x97fec
00097FA8 e80b40b9 ldr      w8, [sp, #8]
00097FAC 48c2ff34 cbz      w8, #0x977f4
00097FB0 a8b35c38 ldurb    w8, [x29, #-0x35]
00097FB4 08c2ff35 cbnz     w8, #0x977f4
00097FB8 e02340f9 ldr      x0, [sp, #0x40]
00097FBC d0e00894 bl       #0x2d02fc
00097FC0 e80b40b9 ldr      w8, [sp, #8]
00097FC4 1f01006b cmp      w8, w0
00097FC8 62c1ff54 b.hs     #0x977f4
00097FCC e02340f9 ldr      x0, [sp, #0x40]
00097FD0 e10b40b9 ldr      w1, [sp, #8]
00097FD4 c2e00894 bl       #0x2d02dc
00097FD8 ef1f40b9 ldr      w15, [sp, #0x1c]
00097FDC ec03172a mov      w12, w23
00097FE0 1f00156b cmp      w0, w21
00097FE4 ea1740b9 ldr      w10, [sp, #0x14]
00097FE8 61c0ff54 b.ne     #0x977f4
00097FEC f5c10011 add      w21, w15, #0x30
00097FF0 bfba0071 cmp      w21, #0x2e
00097FF4 08080054 b.hi     #0x980f4
00097FF8 e82340f9 ldr      x8, [sp, #0x40]
00097FFC c8bfffb4 cbz      x8, #0x977f4
00098000 0c020034 cbz      w12, #0x98040
00098004 a8835c38 ldurb    w8, [x29, #-0x38]
00098008 c8010035 cbnz     w8, #0x98040
0009800C e02340f9 ldr      x0, [sp, #0x40]
00098010 bbe00894 bl       #0x2d02fc
00098014 ea1740b9 ldr      w10, [sp, #0x14]
00098018 ff02006b cmp      w23, w0
0009801C e803172a mov      w8, w23
00098020 02010054 b.hs     #0x98040
00098024 e02340f9 ldr      x0, [sp, #0x40]
00098028 e103172a mov      w1, w23
0009802C ace00894 bl       #0x2d02dc
00098030 ea1740b9 ldr      w10, [sp, #0x14]
00098034 ec03172a mov      w12, w23
00098038 1f00156b cmp      w0, w21
0009803C c0050054 b.eq     #0x980f4
00098040 ea010034 cbz      w10, #0x9807c
00098044 a8935c38 ldurb    w8, [x29, #-0x37]
00098048 a8010035 cbnz     w8, #0x9807c
0009804C e02340f9 ldr      x0, [sp, #0x40]
00098050 abe00894 bl       #0x2d02fc
00098054 e81740b9 ldr      w8, [sp, #0x14]
00098058 1f01006b cmp      w8, w0
0009805C 02010054 b.hs     #0x9807c
00098060 e02340f9 ldr      x0, [sp, #0x40]
00098064 e11740b9 ldr      w1, [sp, #0x14]
00098068 9de00894 bl       #0x2d02dc
0009806C ea1740b9 ldr      w10, [sp, #0x14]
00098070 ec03172a mov      w12, w23
00098074 1f00156b cmp      w0, w21
00098078 e0030054 b.eq     #0x980f4
0009807C d8010034 cbz      w24, #0x980b4
00098080 a8a35c38 ldurb    w8, [x29, #-0x36]
00098084 88010035 cbnz     w8, #0x980b4
00098088 e02340f9 ldr      x0, [sp, #0x40]
0009808C 9ce00894 bl       #0x2d02fc
00098090 1f03006b cmp      w24, w0
00098094 02010054 b.hs     #0x980b4
00098098 e02340f9 ldr      x0, [sp, #0x40]
0009809C e103182a mov      w1, w24
000980A0 8fe00894 bl       #0x2d02dc
000980A4 ea1740b9 ldr      w10, [sp, #0x14]
000980A8 ec03172a mov      w12, w23
000980AC 1f00156b cmp      w0, w21
000980B0 20020054 b.eq     #0x980f4
000980B4 e80b40b9 ldr      w8, [sp, #8]
000980B8 e8b9ff34 cbz      w8, #0x977f4
000980BC a8b35c38 ldurb    w8, [x29, #-0x35]
000980C0 a8b9ff35 cbnz     w8, #0x977f4
000980C4 e02340f9 ldr      x0, [sp, #0x40]
000980C8 8de00894 bl       #0x2d02fc
000980CC e80b40b9 ldr      w8, [sp, #8]
000980D0 1f01006b cmp      w8, w0
000980D4 02b9ff54 b.hs     #0x977f4
000980D8 e02340f9 ldr      x0, [sp, #0x40]
000980DC e10b40b9 ldr      w1, [sp, #8]
000980E0 7fe00894 bl       #0x2d02dc
000980E4 ea1740b9 ldr      w10, [sp, #0x14]
000980E8 ec03172a mov      w12, w23
000980EC 1f00156b cmp      w0, w21
000980F0 21b8ff54 b.ne     #0x977f4
000980F4 e82340b9 ldr      w8, [sp, #0x20]
000980F8 15c10011 add      w21, w8, #0x30
000980FC bfba0071 cmp      w21, #0x2e
00098100 08080054 b.hi     #0x98200
00098104 e82340f9 ldr      x8, [sp, #0x40]
00098108 68b7ffb4 cbz      x8, #0x977f4
0009810C 0c020034 cbz      w12, #0x9814c
00098110 a8835c38 ldurb    w8, [x29, #-0x38]
00098114 c8010035 cbnz     w8, #0x9814c
00098118 e02340f9 ldr      x0, [sp, #0x40]
0009811C 78e00894 bl       #0x2d02fc
00098120 ea1740b9 ldr      w10, [sp, #0x14]
00098124 ff02006b cmp      w23, w0
00098128 e803172a mov      w8, w23
0009812C 02010054 b.hs     #0x9814c
00098130 e02340f9 ldr      x0, [sp, #0x40]
00098134 e103172a mov      w1, w23
00098138 69e00894 bl       #0x2d02dc
0009813C ea1740b9 ldr      w10, [sp, #0x14]
00098140 ec03172a mov      w12, w23
00098144 1f00156b cmp      w0, w21
00098148 c0050054 b.eq     #0x98200
0009814C ea010034 cbz      w10, #0x98188
00098150 a8935c38 ldurb    w8, [x29, #-0x37]
00098154 a8010035 cbnz     w8, #0x98188
00098158 e02340f9 ldr      x0, [sp, #0x40]
0009815C 68e00894 bl       #0x2d02fc
00098160 e81740b9 ldr      w8, [sp, #0x14]
00098164 1f01006b cmp      w8, w0
00098168 02010054 b.hs     #0x98188
0009816C e02340f9 ldr      x0, [sp, #0x40]
00098170 e11740b9 ldr      w1, [sp, #0x14]
00098174 5ae00894 bl       #0x2d02dc
00098178 ea1740b9 ldr      w10, [sp, #0x14]
0009817C ec03172a mov      w12, w23
00098180 1f00156b cmp      w0, w21
00098184 e0030054 b.eq     #0x98200
00098188 d8010034 cbz      w24, #0x981c0
0009818C a8a35c38 ldurb    w8, [x29, #-0x36]
00098190 88010035 cbnz     w8, #0x981c0
00098194 e02340f9 ldr      x0, [sp, #0x40]
00098198 59e00894 bl       #0x2d02fc
0009819C 1f03006b cmp      w24, w0
000981A0 02010054 b.hs     #0x981c0
000981A4 e02340f9 ldr      x0, [sp, #0x40]
000981A8 e103182a mov      w1, w24
000981AC 4ce00894 bl       #0x2d02dc
000981B0 ea1740b9 ldr      w10, [sp, #0x14]
000981B4 ec03172a mov      w12, w23
000981B8 1f00156b cmp      w0, w21
000981BC 20020054 b.eq     #0x98200
000981C0 e80b40b9 ldr      w8, [sp, #8]
000981C4 88b1ff34 cbz      w8, #0x977f4
000981C8 a8b35c38 ldurb    w8, [x29, #-0x35]
000981CC 48b1ff35 cbnz     w8, #0x977f4
000981D0 e02340f9 ldr      x0, [sp, #0x40]
000981D4 4ae00894 bl       #0x2d02fc
000981D8 e80b40b9 ldr      w8, [sp, #8]
000981DC 1f01006b cmp      w8, w0
000981E0 a2b0ff54 b.hs     #0x977f4
000981E4 e02340f9 ldr      x0, [sp, #0x40]
000981E8 e10b40b9 ldr      w1, [sp, #8]
000981EC 3ce00894 bl       #0x2d02dc
000981F0 ea1740b9 ldr      w10, [sp, #0x14]
000981F4 ec03172a mov      w12, w23
000981F8 1f00156b cmp      w0, w21
000981FC c1afff54 b.ne     #0x977f4
00098200 e81b40b9 ldr      w8, [sp, #0x18]
00098204 15c10011 add      w21, w8, #0x30
00098208 bfba0071 cmp      w21, #0x2e
0009820C e8060054 b.hi     #0x982e8
00098210 e82340f9 ldr      x8, [sp, #0x40]
00098214 08afffb4 cbz      x8, #0x977f4
00098218 cc010034 cbz      w12, #0x98250
0009821C a8835c38 ldurb    w8, [x29, #-0x38]
00098220 88010035 cbnz     w8, #0x98250
00098224 e02340f9 ldr      x0, [sp, #0x40]
00098228 35e00894 bl       #0x2d02fc
0009822C ea1740b9 ldr      w10, [sp, #0x14]
00098230 ff02006b cmp      w23, w0
00098234 e2000054 b.hs     #0x98250
00098238 e02340f9 ldr      x0, [sp, #0x40]
0009823C e103172a mov      w1, w23
00098240 27e00894 bl       #0x2d02dc
00098244 ea1740b9 ldr      w10, [sp, #0x14]
00098248 1f00156b cmp      w0, w21
0009824C e0040054 b.eq     #0x982e8
00098250 8a010034 cbz      w10, #0x98280
00098254 a8935c38 ldurb    w8, [x29, #-0x37]
00098258 48010035 cbnz     w8, #0x98280
0009825C e02340f9 ldr      x0, [sp, #0x40]
00098260 27e00894 bl       #0x2d02fc
00098264 e11740b9 ldr      w1, [sp, #0x14]
00098268 3f00006b cmp      w1, w0
0009826C a2000054 b.hs     #0x98280
00098270 e02340f9 ldr      x0, [sp, #0x40]
00098274 1ae00894 bl       #0x2d02dc
00098278 1f00156b cmp      w0, w21
0009827C 60030054 b.eq     #0x982e8
00098280 98010034 cbz      w24, #0x982b0
00098284 a8a35c38 ldurb    w8, [x29, #-0x36]
00098288 48010035 cbnz     w8, #0x982b0
0009828C e02340f9 ldr      x0, [sp, #0x40]
00098290 1be00894 bl       #0x2d02fc
00098294 1f03006b cmp      w24, w0
00098298 c2000054 b.hs     #0x982b0
0009829C e02340f9 ldr      x0, [sp, #0x40]
000982A0 e103182a mov      w1, w24
000982A4 0ee00894 bl       #0x2d02dc
000982A8 1f00156b cmp      w0, w21
000982AC e0010054 b.eq     #0x982e8
000982B0 e80b40b9 ldr      w8, [sp, #8]
000982B4 08aaff34 cbz      w8, #0x977f4
000982B8 a8b35c38 ldurb    w8, [x29, #-0x35]
000982BC c8a9ff35 cbnz     w8, #0x977f4
000982C0 e02340f9 ldr      x0, [sp, #0x40]
000982C4 0ee00894 bl       #0x2d02fc
000982C8 e80b40b9 ldr      w8, [sp, #8]
000982CC 1f01006b cmp      w8, w0
000982D0 22a9ff54 b.hs     #0x977f4
000982D4 e02340f9 ldr      x0, [sp, #0x40]
000982D8 e10b40b9 ldr      w1, [sp, #8]
000982DC 00e00894 bl       #0x2d02dc
000982E0 1f00156b cmp      w0, w21
000982E4 81a8ff54 b.ne     #0x977f4
000982E8 972e40b9 ldr      w23, [x20, #0x2c]
000982EC ff060031 cmn      w23, #1
000982F0 21c5ff54 b.ne     #0x97b94
000982F4 953240b9 ldr      w21, [x20, #0x30]
000982F8 bf060031 cmn      w21, #1
000982FC c0020054 b.eq     #0x98354
00098300 b9a70737 tbnz     w25, #0, #0x977f4
00098304 e81740f9 ldr      x8, [sp, #0x28]
00098308 a0e300d1 sub      x0, x29, #0x38
0009830C e10316aa mov      x1, x22
00098310 bf831c38 sturb    wzr, [x29, #-0x38]
00098314 1f7d00a9 stp      xzr, xzr, [x8]
00098318 1f7d01a9 stp      xzr, xzr, [x8, #0x10]
0009831C 1f2100b9 str      wzr, [x8, #0x20]
00098320 dd100094 bl       #0x9c694
00098324 bf820071 cmp      w21, #0x20
00098328 c2210054 b.hs     #0x98760
0009832C e81b40f9 ldr      x8, [sp, #0x30]
00098330 09058052 mov      w9, #0x28
00098334 a1e300d1 sub      x1, x29, #0x38
00098338 a022a99b umaddl   x0, w21, w9, x8
0009833C be100094 bl       #0x9c634
00098340 a0a50736 tbz      w0, #0, #0x977f4
00098344 883640b9 ldr      w8, [x20, #0x34]
00098348 1f050031 cmn      w8, #1
0009834C c1000054 b.ne     #0x98364
00098350 0f000014 b        #0x9838c
00098354 883640b9 ldr      w8, [x20, #0x34]
00098358 1f050031 cmn      w8, #1
0009835C 80010054 b.eq     #0x9838c
00098360 b9a40737 tbnz     w25, #0, #0x977f4
00098364 1f050071 cmp      w8, #1
00098368 c0000054 b.eq     #0x98380
0009836C 08010035 cbnz     w8, #0x9838c
00098370 c00240f9 ldr      x0, [x22]
00098374 22b90594 bl       #0x2067fc
00098378 e0a30737 tbnz     w0, #0, #0x977f4
0009837C 04000014 b        #0x9838c
00098380 c00240f9 ldr      x0, [x22]
00098384 1eb90594 bl       #0x2067fc
00098388 60a30736 tbz      w0, #0, #0x977f4
0009838C 953a40b9 ldr      w21, [x20, #0x38]
00098390 bf060031 cmn      w21, #1
00098394 a0030054 b.eq     #0x98408
00098398 a0c35fb8 ldur     w0, [x29, #-4]
0009839C 914bff97 bl       #0x6b1e0
000983A0 a8435cb8 ldur     w8, [x29, #-0x3c]
000983A4 0801000a and      w8, w8, w0
000983A8 68a20736 tbz      w8, #0, #0x977f4
000983AC bf0e0071 cmp      w21, #3
000983B0 c8020054 b.hi     #0x98408
000983B4 6a2c00b0 adrp     x10, #0x625000
000983B8 4a512c91 add      x10, x10, #0xb14
000983BC 88000010 adr      x8, #0x983cc
000983C0 49697538 ldrb     w9, [x10, x21]
000983C4 0809098b add      x8, x8, x9, lsl #2
000983C8 00011fd6 br       x8
000983CC c00240f9 ldr      x0, [x22]
000983D0 7ab90594 bl       #0x2069b8
000983D4 00a10737 tbnz     w0, #0, #0x977f4
000983D8 0c000014 b        #0x98408
000983DC c00240f9 ldr      x0, [x22]
000983E0 09b90594 bl       #0x206804
000983E4 80a00736 tbz      w0, #0, #0x977f4
000983E8 08000014 b        #0x98408
000983EC c00240f9 ldr      x0, [x22]
000983F0 72b90594 bl       #0x2069b8
000983F4 00a00736 tbz      w0, #0, #0x977f4
000983F8 04000014 b        #0x98408
000983FC c00240f9 ldr      x0, [x22]
00098400 70b90594 bl       #0x2069c0
00098404 809f0736 tbz      w0, #0, #0x977f4
00098408 953e40b9 ldr      w21, [x20, #0x3c]
0009840C bf060031 cmn      w21, #1
00098410 e0060054 b.eq     #0x984ec
00098414 199f0737 tbnz     w25, #0, #0x977f4
00098418 c00240f9 ldr      x0, [x22]
0009841C 77b80594 bl       #0x2065f8
00098420 bf2a0071 cmp      w21, #0xa
00098424 48060054 b.hi     #0x984ec
00098428 6a2c00b0 adrp     x10, #0x625000
0009842C 4a612c91 add      x10, x10, #0xb18
00098430 88000010 adr      x8, #0x98440
00098434 49697538 ldrb     w9, [x10, x21]
00098438 0809098b add      x8, x8, x9, lsl #2
0009843C 00011fd6 br       x8
00098440 08040051 sub      w8, w0, #1
00098444 1f5d0271 cmp      w8, #0x97
00098448 629dff54 b.hs     #0x977f4
0009844C 28000014 b        #0x984ec
00098450 08600251 sub      w8, w0, #0x98
00098454 1f910171 cmp      w8, #0x64
00098458 e29cff54 b.hs     #0x977f4
0009845C 24000014 b        #0x984ec
00098460 08f00351 sub      w8, w0, #0xfc
00098464 1f1d0271 cmp      w8, #0x87
00098468 629cff54 b.hs     #0x977f4
0009846C 20000014 b        #0x984ec
00098470 080c0651 sub      w8, w0, #0x183
00098474 1fad0171 cmp      w8, #0x6b
00098478 e29bff54 b.hs     #0x977f4
0009847C 1c000014 b        #0x984ec
00098480 08b80751 sub      w8, w0, #0x1ee
00098484 1f710271 cmp      w8, #0x9c
00098488 629bff54 b.hs     #0x977f4
0009848C 18000014 b        #0x984ec
00098490 08280a51 sub      w8, w0, #0x28a
00098494 1f210171 cmp      w8, #0x48
00098498 e29aff54 b.hs     #0x977f4
0009849C 14000014 b        #0x984ec
000984A0 08480b51 sub      w8, w0, #0x2d2
000984A4 1f590171 cmp      w8, #0x56
000984A8 629aff54 b.hs     #0x977f4
000984AC 10000014 b        #0x984ec
000984B0 08a80c51 sub      w8, w0, #0x32a
000984B4 1f650171 cmp      w8, #0x59
000984B8 e299ff54 b.hs     #0x977f4
000984BC 0c000014 b        #0x984ec
000984C0 080c0e51 sub      w8, w0, #0x383
000984C4 1f1d0071 cmp      w8, #7
000984C8 6299ff54 b.hs     #0x977f4
000984CC 08000014 b        #0x984ec
000984D0 08280e51 sub      w8, w0, #0x38a
000984D4 1fe10171 cmp      w8, #0x78
000984D8 e298ff54 b.hs     #0x977f4
000984DC 04000014 b        #0x984ec
000984E0 08781f12 and      w8, w0, #0xfffffffe
000984E4 1fa10c71 cmp      w8, #0x328
000984E8 6198ff54 b.ne     #0x977f4
000984EC 954240b9 ldr      w21, [x20, #0x40]
000984F0 bf060031 cmn      w21, #1
000984F4 60080054 b.eq     #0x98600
000984F8 f9970737 tbnz     w25, #0, #0x977f4
000984FC c00240f9 ldr      x0, [x22]
00098500 b3b90594 bl       #0x206bcc
00098504 80970737 tbnz     w0, #0, #0x977f4
00098508 c00240f9 ldr      x0, [x22]
0009850C a1e300d1 sub      x1, x29, #0x38
00098510 a2018052 mov      w2, #0xd
00098514 1bbb0594 bl       #0x207180
00098518 bf1a0071 cmp      w21, #6
0009851C 28070054 b.hi     #0x98600
00098520 6a2c00b0 adrp     x10, #0x625000
00098524 4a8d2c91 add      x10, x10, #0xb23
00098528 88000010 adr      x8, #0x98538
0009852C 49697538 ldrb     w9, [x10, x21]
00098530 0809098b add      x8, x8, x9, lsl #2
00098534 00011fd6 br       x8
00098538 880740b9 ldr      w8, [x28, #4]
0009853C e92740b9 ldr      w9, [sp, #0x24]
00098540 1f01096b cmp      w8, w9
00098544 8195ff54 b.ne     #0x977f4
00098548 a8935c38 ldurb    w8, [x29, #-0x37]
0009854C 4895ff35 cbnz     w8, #0x977f4
00098550 a8a35c38 ldurb    w8, [x29, #-0x36]
00098554 0895ff35 cbnz     w8, #0x977f4
00098558 a8b35c38 ldurb    w8, [x29, #-0x35]
0009855C c894ff35 cbnz     w8, #0x977f4
00098560 a8c35c38 ldurb    w8, [x29, #-0x34]
00098564 8894ff35 cbnz     w8, #0x977f4
00098568 a8f35c38 ldurb    w8, [x29, #-0x31]
0009856C 4894ff35 cbnz     w8, #0x977f4
00098570 a8d35c38 ldurb    w8, [x29, #-0x33]
00098574 0894ff35 cbnz     w8, #0x977f4
00098578 a8e35c38 ldurb    w8, [x29, #-0x32]
0009857C c893ff35 cbnz     w8, #0x977f4
00098580 a8035d38 ldurb    w8, [x29, #-0x30]
00098584 8893ff35 cbnz     w8, #0x977f4
00098588 a8135d38 ldurb    w8, [x29, #-0x2f]
0009858C 4893ff35 cbnz     w8, #0x977f4
00098590 a8235d38 ldurb    w8, [x29, #-0x2e]
00098594 68030034 cbz      w8, #0x98600
00098598 97fcff17 b        #0x977f4
0009859C a8935c38 ldurb    w8, [x29, #-0x37]
000985A0 a892ff34 cbz      w8, #0x977f4
000985A4 a8a35c38 ldurb    w8, [x29, #-0x36]
000985A8 c8020035 cbnz     w8, #0x98600
000985AC 92fcff17 b        #0x977f4
000985B0 a8b35c38 ldurb    w8, [x29, #-0x35]
000985B4 0892ff34 cbz      w8, #0x977f4
000985B8 a8c35c38 ldurb    w8, [x29, #-0x34]
000985BC 28020035 cbnz     w8, #0x98600
000985C0 8dfcff17 b        #0x977f4
000985C4 a8d35c38 ldurb    w8, [x29, #-0x33]
000985C8 6891ff34 cbz      w8, #0x977f4
000985CC a8e35c38 ldurb    w8, [x29, #-0x32]
000985D0 88010035 cbnz     w8, #0x98600
000985D4 88fcff17 b        #0x977f4
000985D8 a8f35c38 ldurb    w8, [x29, #-0x31]
000985DC 28010035 cbnz     w8, #0x98600
000985E0 85fcff17 b        #0x977f4
000985E4 a8035d38 ldurb    w8, [x29, #-0x30]
000985E8 6890ff34 cbz      w8, #0x977f4
000985EC a8135d38 ldurb    w8, [x29, #-0x2f]
000985F0 88000035 cbnz     w8, #0x98600
000985F4 80fcff17 b        #0x977f4
000985F8 a8235d38 ldurb    w8, [x29, #-0x2e]
000985FC c88fff34 cbz      w8, #0x977f4
00098600 994640b9 ldr      w25, [x20, #0x44]
00098604 3f070031 cmn      w25, #1
00098608 40010054 b.eq     #0x98630
0009860C c00240f9 ldr      x0, [x22]
00098610 3bb90594 bl       #0x206afc
00098614 008fff34 cbz      w0, #0x977f4
00098618 f803002a mov      w24, w0
0009861C c00240f9 ldr      x0, [x22]
00098620 e1031f2a mov      w1, wzr
00098624 33b90594 bl       #0x206af0
00098628 3f03006b cmp      w25, w0
0009862C 41040054 b.ne     #0x986b4
00098630 e82b40f9 ldr      x8, [sp, #0x50]
00098634 8b038052 mov      w11, #0x1c
00098638 080140f9 ldr      x8, [x8]
0009863C 083140f9 ldr      x8, [x8, #0x60]
00098640 09294fa9 ldp      x9, x10, [x8, #0xf0]
00098644 41250b9b madd     x1, x10, x11, x9
00098648 098140f9 ldr      x9, [x8, #0x100]
0009864C 5f0109eb cmp      x10, x9
00098650 c0040054 b.eq     #0x986e8
00098654 49d03bd5 mrs      x9, tpidr_el0
00098658 29c97392 and      x9, x9, #0xffffffffffffe000
0009865C 2a4d40f9 ldr      x10, [x9, #0x98]
00098660 5f4100f1 cmp      x10, #0x10
00098664 c0070054 b.eq     #0x9875c
00098668 0b5940f9 ldr      x11, [x8, #0xb0]
0009866C 2a0d0a8b add      x10, x9, x10, lsl #3
00098670 4b0d00f9 str      x11, [x10, #0x18]
00098674 2a4d40f9 ldr      x10, [x9, #0x98]
00098678 4a050091 add      x10, x10, #1
0009867C 2a4d00f9 str      x10, [x9, #0x98]
00098680 8a2f40a9 ldp      x10, x11, [x28]
00098684 8c0b40f9 ldr      x12, [x28, #0x10]
00098688 8d1b40b9 ldr      w13, [x28, #0x18]
0009868C 2d1800b9 str      w13, [x1, #0x18]
00098690 2a0000f9 str      x10, [x1]
00098694 2bb000a9 stp      x11, x12, [x1, #8]
00098698 2a4d40f9 ldr      x10, [x9, #0x98]
0009869C 4a0500d1 sub      x10, x10, #1
000986A0 2a4d00f9 str      x10, [x9, #0x98]
000986A4 097d40f9 ldr      x9, [x8, #0xf8]
000986A8 29050091 add      x9, x9, #1
000986AC 097d00f9 str      x9, [x8, #0xf8]
000986B0 51fcff17 b        #0x977f4
000986B4 35008052 mov      w21, #1
000986B8 1f03156b cmp      w24, w21
000986BC c089ff54 b.eq     #0x977f4
000986C0 c00240f9 ldr      x0, [x22]
000986C4 e103152a mov      w1, w21
000986C8 0ab90594 bl       #0x206af0
000986CC b5060011 add      w21, w21, #1
000986D0 3f03006b cmp      w25, w0
000986D4 21ffff54 b.ne     #0x986b8
000986D8 a8060051 sub      w8, w21, #1
000986DC 1f01186b cmp      w8, w24
000986E0 a288ff54 b.hs     #0x977f4
000986E4 d3ffff17 b        #0x98630
000986E8 00c10291 add      x0, x8, #0xb0
000986EC a8e300d1 sub      x8, x29, #0x38
000986F0 22008052 mov      w2, #1
000986F4 e3031caa mov      x3, x28
000986F8 75090094 bl       #0x9accc
000986FC 3efcff17 b        #0x977f4
00098700 e8cf44a9 ldp      x8, x19, [sp, #0x48]
00098704 080140f9 ldr      x8, [x8]
00098708 083140f9 ldr      x8, [x8, #0x60]
0009870C 690240f9 ldr      x9, [x19]
00098710 e10314aa mov      x1, x20
00098714 080940b9 ldr      w8, [x8, #8]
00098718 293140f9 ldr      x9, [x9, #0x60]
0009871C 280900b9 str      w8, [x9, #8]
00098720 680240f9 ldr      x8, [x19]
00098724 083140f9 ldr      x8, [x8, #0x60]
00098728 00310091 add      x0, x8, #0xc
0009872C 7a0e0094 bl       #0x9c114
00098730 600240f9 ldr      x0, [x19]
00098734 e1031f2a mov      w1, wzr
00098738 030d0094 bl       #0x9bb44
0009873C f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00098740 f6574ea9 ldp      x22, x21, [sp, #0xe0]
00098744 f85f4da9 ldp      x24, x23, [sp, #0xd0]
00098748 fa674ca9 ldp      x26, x25, [sp, #0xc0]
0009874C fc6f4ba9 ldp      x28, x27, [sp, #0xb0]
00098750 fd7b4aa9 ldp      x29, x30, [sp, #0xa0]
00098754 ff030491 add      sp, sp, #0x100
00098758 c0035fd6 ret      
0009875C 2da9fd97 bl       #0x2c10
00098760 e02b00f0 adrp     x0, #0x617000
00098764 00942d91 add      x0, x0, #0xb65
00098768 8606fe97 bl       #0x1a180
~~~
### 0x98770 (253 slots)
~~~asm
00098770 ff4304d1 sub      sp, sp, #0x110
00098774 fd7b0ba9 stp      x29, x30, [sp, #0xb0]
00098778 fc6f0ca9 stp      x28, x27, [sp, #0xc0]
0009877C fa670da9 stp      x26, x25, [sp, #0xd0]
00098780 f85f0ea9 stp      x24, x23, [sp, #0xe0]
00098784 f6570fa9 stp      x22, x21, [sp, #0xf0]
00098788 f44f10a9 stp      x20, x19, [sp, #0x100]
0009878C fdc30291 add      x29, sp, #0xb0
00098790 290040f9 ldr      x9, [x1]
00098794 aaa300d1 sub      x10, x29, #0x28
00098798 e2130329 stp      w2, w4, [sp, #0x18]
0009879C 4b210091 add      x11, x10, #8
000987A0 aae300d1 sub      x10, x29, #0x38
000987A4 e31300f9 str      x3, [sp, #0x20]
000987A8 4a110091 add      x10, x10, #4
000987AC f90305aa mov      x25, x5
000987B0 f30301aa mov      x19, x1
000987B4 eaaf00a9 stp      x10, x11, [sp, #8]
000987B8 f80300aa mov      x24, x0
000987BC 293140f9 ldr      x9, [x9, #0x60]
000987C0 e8031f2a mov      w8, wzr
000987C4 3f7d00f9 str      xzr, [x9, #0xf8]
000987C8 290040f9 ldr      x9, [x1]
000987CC 293140f9 ldr      x9, [x9, #0x60]
000987D0 3a8940f9 ldr      x26, [x9, #0x110]
000987D4 54d03bd5 mrs      x20, tpidr_el0
000987D8 29008052 mov      w9, #1
000987DC e50300f9 str      x5, [sp]
000987E0 96ca7392 and      x22, x20, #0xffffffffffffe000
000987E4 08000014 b        #0x98804
000987E8 1f2003d5 nop      
000987EC 1f2003d5 nop      
000987F0 f90340f9 ldr      x25, [sp]
000987F4 ea2f40b9 ldr      w10, [sp, #0x2c]
000987F8 e9031f2a mov      w9, wzr
000987FC 28008052 mov      w8, #1
00098800 4a190036 tbz      w10, #0, #0x98b28
00098804 eb1340f9 ldr      x11, [sp, #0x20]
00098808 e92f00b9 str      w9, [sp, #0x2c]
0009880C 692940a9 ldp      x9, x10, [x11]
00098810 a9ab3da9 stp      x9, x10, [x29, #-0x28]
00098814 691140b9 ldr      w9, [x11, #0x10]
00098818 a9831eb8 stur     w9, [x29, #-0x18]
0009881C 28010036 tbz      w8, #0, #0x98840
00098820 282740a9 ldp      x8, x9, [x25]
00098824 a8a73da9 stp      x8, x9, [x29, #-0x28]
00098828 281340b9 ldr      w8, [x25, #0x10]
0009882C a8831eb8 stur     w8, [x29, #-0x18]
00098830 e81f40b9 ldr      w8, [sp, #0x1c]
00098834 a8000037 tbnz     w8, #0, #0x98848
00098838 bc000014 b        #0x98b28
0009883C 1f2003d5 nop      
00098840 e81b40b9 ldr      w8, [sp, #0x18]
00098844 88fd0736 tbz      w8, #0, #0x987f4
00098848 a8835d38 ldurb    w8, [x29, #-0x28]
0009884C 280b0034 cbz      w8, #0x989b0
00098850 a1c35db8 ldur     w1, [x29, #-0x24]
00098854 e0031aaa mov      x0, x26
00098858 6af6ff97 bl       #0x96200
0009885C fb0300aa mov      x27, x0
00098860 f5031f2a mov      w21, wzr
00098864 06000014 b        #0x9887c
00098868 1f2003d5 nop      
0009886C 1f2003d5 nop      
00098870 b5060011 add      w21, w21, #1
00098874 bf160071 cmp      w21, #5
00098878 e0fbff54 b.eq     #0x987f4
0009887C f7031f2a mov      w23, wzr
00098880 0b000014 b        #0x988ac
00098884 00c10291 add      x0, x8, #0xb0
00098888 e8e30091 add      x8, sp, #0x38
0009888C e3530191 add      x3, sp, #0x54
00098890 22008052 mov      w2, #1
00098894 0e090094 bl       #0x9accc
00098898 1f2003d5 nop      
0009889C 1f2003d5 nop      
000988A0 f7060011 add      w23, w23, #1
000988A4 ff1a0071 cmp      w23, #6
000988A8 40feff54 b.eq     #0x98870
000988AC a14300d1 sub      x1, x29, #0x10
000988B0 e0031baa mov      x0, x27
000988B4 b7573e29 stp      w23, w21, [x29, #-0x10]
000988B8 65e7ff97 bl       #0x9264c
000988BC 081840b9 ldr      w8, [x0, #0x18]
000988C0 08ffff34 cbz      w8, #0x988a0
000988C4 08a440a9 ldp      x8, x9, [x0, #8]
000988C8 000340f9 ldr      x0, [x24]
000988CC a8a73ca9 stp      x8, x9, [x29, #-0x38]
000988D0 a0031cf8 stur     x0, [x29, #-0x40]
000988D4 800000b4 cbz      x0, #0x988e4
000988D8 088c44f8 ldr      x8, [x0, #0x48]!
000988DC 080940f9 ldr      x8, [x8, #0x10]
000988E0 00013fd6 blr      x8
000988E4 a10301d1 sub      x1, x29, #0x40
000988E8 a2e300d1 sub      x2, x29, #0x38
000988EC e0031aaa mov      x0, x26
000988F0 6af1ff97 bl       #0x94e98
000988F4 fc03002a mov      w28, w0
000988F8 a0035cf8 ldur     x0, [x29, #-0x40]
000988FC a00000b4 cbz      x0, #0x98910
00098900 088c44f8 ldr      x8, [x0, #0x48]!
00098904 080d40f9 ldr      x8, [x8, #0x18]
00098908 00013fd6 blr      x8
0009890C bf031cf8 stur     xzr, [x29, #-0x40]
00098910 9cfc0736 tbz      w28, #0, #0x988a0
00098914 a8c35db8 ldur     w8, [x29, #-0x24]
00098918 2a008052 mov      w10, #1
0009891C 8b038052 mov      w11, #0x1c
00098920 a9035ff8 ldur     x9, [x29, #-0x10]
00098924 ea530139 strb     w10, [sp, #0x54]
00098928 e87f0b29 stp      w8, wzr, [sp, #0x58]
0009892C 680240f9 ldr      x8, [x19]
00098930 e97f06a9 stp      x9, xzr, [sp, #0x60]
00098934 083140f9 ldr      x8, [x8, #0x60]
00098938 09294fa9 ldp      x9, x10, [x8, #0xf0]
0009893C 41250b9b madd     x1, x10, x11, x9
00098940 098140f9 ldr      x9, [x8, #0x100]
00098944 5f0109eb cmp      x10, x9
00098948 e0f9ff54 b.eq     #0x98884
0009894C 89ca7392 and      x9, x20, #0xffffffffffffe000
00098950 2a4d40f9 ldr      x10, [x9, #0x98]
00098954 5f4100f1 cmp      x10, #0x10
00098958 600e0054 b.eq     #0x98b24
0009895C 0b5940f9 ldr      x11, [x8, #0xb0]
00098960 2a0d0a8b add      x10, x9, x10, lsl #3
00098964 4b0d00f9 str      x11, [x10, #0x18]
00098968 2a4d40f9 ldr      x10, [x9, #0x98]
0009896C ebc345f8 ldur     x11, [sp, #0x5c]
00098970 ec4346f8 ldur     x12, [sp, #0x64]
00098974 ed6f40b9 ldr      w13, [sp, #0x6c]
00098978 4a050091 add      x10, x10, #1
0009897C 2a4d00f9 str      x10, [x9, #0x98]
00098980 ea4345f8 ldur     x10, [sp, #0x54]
00098984 2d1800b9 str      w13, [x1, #0x18]
00098988 2a0000f9 str      x10, [x1]
0009898C 2bb000a9 stp      x11, x12, [x1, #8]
00098990 2a4d40f9 ldr      x10, [x9, #0x98]
00098994 4a0500d1 sub      x10, x10, #1
00098998 2a4d00f9 str      x10, [x9, #0x98]
0009899C 097d40f9 ldr      x9, [x8, #0xf8]
000989A0 29050091 add      x9, x9, #1
000989A4 097d00f9 str      x9, [x8, #0xf8]
000989A8 beffff17 b        #0x988a0
000989AC 1f2003d5 nop      
000989B0 a8c35db8 ldur     w8, [x29, #-0x24]
000989B4 a1e300d1 sub      x1, x29, #0x38
000989B8 e0031aaa mov      x0, x26
000989BC ebab40a9 ldp      x11, x10, [sp, #8]
000989C0 a8831cb8 stur     w8, [x29, #-0x38]
000989C4 490140f9 ldr      x9, [x10]
000989C8 480940b9 ldr      w8, [x10, #8]
000989CC 690100f9 str      x9, [x11]
000989D0 680900b9 str      w8, [x11, #8]
000989D4 f5f5ff97 bl       #0x961a8
000989D8 c0f0ffb4 cbz      x0, #0x987f0
000989DC fb0300aa mov      x27, x0
000989E0 e00b40f9 ldr      x0, [sp, #0x10]
000989E4 5de2ff97 bl       #0x91358
000989E8 fc03002a mov      w28, w0
000989EC f7031f2a mov      w23, wzr
000989F0 04000014 b        #0x98a00
000989F4 f7060011 add      w23, w23, #1
000989F8 ff160071 cmp      w23, #5
000989FC a0efff54 b.eq     #0x987f0
00098A00 f9031f2a mov      w25, wzr
00098A04 0a000014 b        #0x98a2c
00098A08 00c10291 add      x0, x8, #0xb0
00098A0C a84300d1 sub      x8, x29, #0x10
00098A10 e3530191 add      x3, sp, #0x54
00098A14 22008052 mov      w2, #1
00098A18 ad080094 bl       #0x9accc
00098A1C 1f2003d5 nop      
00098A20 39070011 add      w25, w25, #1
00098A24 3f1b0071 cmp      w25, #6
00098A28 60feff54 b.eq     #0x989f4
00098A2C e1230191 add      x1, sp, #0x48
00098A30 e0031baa mov      x0, x27
00098A34 f95f0929 stp      w25, w23, [sp, #0x48]
00098A38 b9e4ff97 bl       #0x91d1c
00098A3C 081840b9 ldr      w8, [x0, #0x18]
00098A40 08ffff34 cbz      w8, #0x98a20
00098A44 08a440a9 ldp      x8, x9, [x0, #8]
00098A48 000340f9 ldr      x0, [x24]
00098A4C e8a703a9 stp      x8, x9, [sp, #0x38]
00098A50 e01b00f9 str      x0, [sp, #0x30]
00098A54 800000b4 cbz      x0, #0x98a64
00098A58 088c44f8 ldr      x8, [x0, #0x48]!
00098A5C 080940f9 ldr      x8, [x8, #0x10]
00098A60 00013fd6 blr      x8
00098A64 e1c30091 add      x1, sp, #0x30
00098A68 e2e30091 add      x2, sp, #0x38
00098A6C e0031aaa mov      x0, x26
00098A70 0af1ff97 bl       #0x94e98
00098A74 f503002a mov      w21, w0
00098A78 e01b40f9 ldr      x0, [sp, #0x30]
00098A7C a00000b4 cbz      x0, #0x98a90
00098A80 088c44f8 ldr      x8, [x0, #0x48]!
00098A84 080d40f9 ldr      x8, [x8, #0x18]
00098A88 00013fd6 blr      x8
00098A8C ff1b00f9 str      xzr, [sp, #0x30]
00098A90 95fc0736 tbz      w21, #0, #0x98a20
00098A94 a8c35db8 ldur     w8, [x29, #-0x24]
00098A98 8b038052 mov      w11, #0x1c
00098A9C ff530139 strb     wzr, [sp, #0x54]
00098AA0 e92740f9 ldr      x9, [sp, #0x48]
00098AA4 e8730b29 stp      w8, w28, [sp, #0x58]
00098AA8 680240f9 ldr      x8, [x19]
00098AAC e97f06a9 stp      x9, xzr, [sp, #0x60]
00098AB0 083140f9 ldr      x8, [x8, #0x60]
00098AB4 09294fa9 ldp      x9, x10, [x8, #0xf0]
00098AB8 41250b9b madd     x1, x10, x11, x9
00098ABC 098140f9 ldr      x9, [x8, #0x100]
00098AC0 5f0109eb cmp      x10, x9
00098AC4 20faff54 b.eq     #0x98a08
00098AC8 c94e40f9 ldr      x9, [x22, #0x98]
00098ACC 3f4100f1 cmp      x9, #0x10
00098AD0 a0020054 b.eq     #0x98b24
00098AD4 0a5940f9 ldr      x10, [x8, #0xb0]
00098AD8 c90e098b add      x9, x22, x9, lsl #3
00098ADC 2a0d00f9 str      x10, [x9, #0x18]
00098AE0 c94e40f9 ldr      x9, [x22, #0x98]
00098AE4 eac345f8 ldur     x10, [sp, #0x5c]
00098AE8 eb4346f8 ldur     x11, [sp, #0x64]
00098AEC ec6f40b9 ldr      w12, [sp, #0x6c]
00098AF0 29050091 add      x9, x9, #1
00098AF4 c94e00f9 str      x9, [x22, #0x98]
00098AF8 e94345f8 ldur     x9, [sp, #0x54]
00098AFC 2c1800b9 str      w12, [x1, #0x18]
00098B00 290000f9 str      x9, [x1]
00098B04 2aac00a9 stp      x10, x11, [x1, #8]
00098B08 c94e40f9 ldr      x9, [x22, #0x98]
00098B0C 290500d1 sub      x9, x9, #1
00098B10 c94e00f9 str      x9, [x22, #0x98]
00098B14 097d40f9 ldr      x9, [x8, #0xf8]
00098B18 29050091 add      x9, x9, #1
00098B1C 097d00f9 str      x9, [x8, #0xf8]
00098B20 c0ffff17 b        #0x98a20
00098B24 3ba8fd97 bl       #0x2c10
00098B28 680240f9 ldr      x8, [x19]
00098B2C 083140f9 ldr      x8, [x8, #0x60]
00098B30 00210091 add      x0, x8, #8
00098B34 2c0e0094 bl       #0x9c3e4
00098B38 600240f9 ldr      x0, [x19]
00098B3C e1031f2a mov      w1, wzr
00098B40 010c0094 bl       #0x9bb44
00098B44 f44f50a9 ldp      x20, x19, [sp, #0x100]
00098B48 f6574fa9 ldp      x22, x21, [sp, #0xf0]
00098B4C f85f4ea9 ldp      x24, x23, [sp, #0xe0]
00098B50 fa674da9 ldp      x26, x25, [sp, #0xd0]
00098B54 fc6f4ca9 ldp      x28, x27, [sp, #0xc0]
00098B58 fd7b4ba9 ldp      x29, x30, [sp, #0xb0]
00098B5C ff430491 add      sp, sp, #0x110
00098B60 c0035fd6 ret      
~~~
### 0x98b64 (541 slots)
~~~asm
00098B64 ff0302d1 sub      sp, sp, #0x80
00098B68 fd7b05a9 stp      x29, x30, [sp, #0x50]
00098B6C f65706a9 stp      x22, x21, [sp, #0x60]
00098B70 f44f07a9 stp      x20, x19, [sp, #0x70]
00098B74 fd430191 add      x29, sp, #0x50
00098B78 5f4c0071 cmp      w2, #0x13
00098B7C a8340054 b.hi     #0x99210
00098B80 e803022a mov      w8, w2
00098B84 692c00b0 adrp     x9, #0x625000
00098B88 29a92c91 add      x9, x9, #0xb2a
00098B8C ca000010 adr      x10, #0x98ba4
00098B90 2b796878 ldrh     w11, [x9, x8, lsl #1]
00098B94 4a090b8b add      x10, x10, x11, lsl #2
00098B98 f403032a mov      w20, w3
00098B9C f30301aa mov      x19, x1
00098BA0 40011fd6 br       x10
00098BA4 140040f9 ldr      x20, [x0]
00098BA8 b4031ff8 stur     x20, [x29, #-0x10]
00098BAC 142900b4 cbz      x20, #0x990cc
00098BB0 888e44f8 ldr      x8, [x20, #0x48]!
00098BB4 e00314aa mov      x0, x20
00098BB8 080940f9 ldr      x8, [x8, #0x10]
00098BBC 00013fd6 blr      x8
00098BC0 a04300d1 sub      x0, x29, #0x10
00098BC4 e10313aa mov      x1, x19
00098BC8 1ef9ff97 bl       #0x97040
00098BCC 38010014 b        #0x990ac
00098BD0 150040f9 ldr      x21, [x0]
00098BD4 b5831ef8 stur     x21, [x29, #-0x18]
00098BD8 b52800b4 cbz      x21, #0x990ec
00098BDC a88e44f8 ldr      x8, [x21, #0x48]!
00098BE0 e00315aa mov      x0, x21
00098BE4 080940f9 ldr      x8, [x8, #0x10]
00098BE8 00013fd6 blr      x8
00098BEC 83020012 and      w3, w20, #1
00098BF0 a06300d1 sub      x0, x29, #0x18
00098BF4 e10313aa mov      x1, x19
00098BF8 22008052 mov      w2, #1
00098BFC 0c000014 b        #0x98c2c
00098C00 150040f9 ldr      x21, [x0]
00098C04 b5031ef8 stur     x21, [x29, #-0x20]
00098C08 752800b4 cbz      x21, #0x99114
00098C0C a88e44f8 ldr      x8, [x21, #0x48]!
00098C10 e00315aa mov      x0, x21
00098C14 080940f9 ldr      x8, [x8, #0x10]
00098C18 00013fd6 blr      x8
00098C1C 83020012 and      w3, w20, #1
00098C20 a08300d1 sub      x0, x29, #0x20
00098C24 e10313aa mov      x1, x19
00098C28 e2031f2a mov      w2, wzr
00098C2C eb010094 bl       #0x993d8
00098C30 ec000014 b        #0x98fe0
00098C34 150040f9 ldr      x21, [x0]
00098C38 f51700f9 str      x21, [sp, #0x28]
00098C3C 152800b4 cbz      x21, #0x9913c
00098C40 a88e44f8 ldr      x8, [x21, #0x48]!
00098C44 e00315aa mov      x0, x21
00098C48 080940f9 ldr      x8, [x8, #0x10]
00098C4C 00013fd6 blr      x8
00098C50 83020012 and      w3, w20, #1
00098C54 e0a30091 add      x0, sp, #0x28
00098C58 e10313aa mov      x1, x19
00098C5C 22008052 mov      w2, #1
00098C60 35020094 bl       #0x99534
00098C64 df000014 b        #0x98fe0
00098C68 150040f9 ldr      x21, [x0]
00098C6C f51300f9 str      x21, [sp, #0x20]
00098C70 b52700b4 cbz      x21, #0x99164
00098C74 a88e44f8 ldr      x8, [x21, #0x48]!
00098C78 e00315aa mov      x0, x21
00098C7C 080940f9 ldr      x8, [x8, #0x10]
00098C80 00013fd6 blr      x8
00098C84 83020012 and      w3, w20, #1
00098C88 e0830091 add      x0, sp, #0x20
00098C8C e10313aa mov      x1, x19
00098C90 e2031f2a mov      w2, wzr
00098C94 28020094 bl       #0x99534
00098C98 d2000014 b        #0x98fe0
00098C9C 150040f9 ldr      x21, [x0]
00098CA0 f50f00f9 str      x21, [sp, #0x18]
00098CA4 552700b4 cbz      x21, #0x9918c
00098CA8 a88e44f8 ldr      x8, [x21, #0x48]!
00098CAC e00315aa mov      x0, x21
00098CB0 080940f9 ldr      x8, [x8, #0x10]
00098CB4 00013fd6 blr      x8
00098CB8 83020012 and      w3, w20, #1
00098CBC e0630091 add      x0, sp, #0x18
00098CC0 e10313aa mov      x1, x19
00098CC4 22008052 mov      w2, #1
00098CC8 72020094 bl       #0x99690
00098CCC c5000014 b        #0x98fe0
00098CD0 150040f9 ldr      x21, [x0]
00098CD4 f50b00f9 str      x21, [sp, #0x10]
00098CD8 f52600b4 cbz      x21, #0x991b4
00098CDC a88e44f8 ldr      x8, [x21, #0x48]!
00098CE0 e00315aa mov      x0, x21
00098CE4 080940f9 ldr      x8, [x8, #0x10]
00098CE8 00013fd6 blr      x8
00098CEC 83020012 and      w3, w20, #1
00098CF0 e0430091 add      x0, sp, #0x10
00098CF4 e10313aa mov      x1, x19
00098CF8 e2031f2a mov      w2, wzr
00098CFC 65020094 bl       #0x99690
00098D00 b8000014 b        #0x98fe0
00098D04 160040f9 ldr      x22, [x0]
00098D08 b62600b4 cbz      x22, #0x991dc
00098D0C f50316aa mov      x21, x22
00098D10 a88e44f8 ldr      x8, [x21, #0x48]!
00098D14 e00315aa mov      x0, x21
00098D18 080940f9 ldr      x8, [x8, #0x10]
00098D1C 00013fd6 blr      x8
00098D20 a80240f9 ldr      x8, [x21]
00098D24 e00315aa mov      x0, x21
00098D28 b6831ff8 stur     x22, [x29, #-8]
00098D2C 080940f9 ldr      x8, [x8, #0x10]
00098D30 00013fd6 blr      x8
00098D34 83020012 and      w3, w20, #1
00098D38 a02300d1 sub      x0, x29, #8
00098D3C e10313aa mov      x1, x19
00098D40 22008052 mov      w2, #1
00098D44 11000014 b        #0x98d88
00098D48 160040f9 ldr      x22, [x0]
00098D4C 562500b4 cbz      x22, #0x991f4
00098D50 f50316aa mov      x21, x22
00098D54 a88e44f8 ldr      x8, [x21, #0x48]!
00098D58 e00315aa mov      x0, x21
00098D5C 080940f9 ldr      x8, [x8, #0x10]
00098D60 00013fd6 blr      x8
00098D64 a80240f9 ldr      x8, [x21]
00098D68 e00315aa mov      x0, x21
00098D6C b6831ff8 stur     x22, [x29, #-8]
00098D70 080940f9 ldr      x8, [x8, #0x10]
00098D74 00013fd6 blr      x8
00098D78 83020012 and      w3, w20, #1
00098D7C a02300d1 sub      x0, x29, #8
00098D80 e10313aa mov      x1, x19
00098D84 e2031f2a mov      w2, wzr
00098D88 24008052 mov      w4, #1
00098D8C 90000014 b        #0x98fcc
00098D90 160040f9 ldr      x22, [x0]
00098D94 962400b4 cbz      x22, #0x99224
00098D98 f50316aa mov      x21, x22
00098D9C a88e44f8 ldr      x8, [x21, #0x48]!
00098DA0 e00315aa mov      x0, x21
00098DA4 080940f9 ldr      x8, [x8, #0x10]
00098DA8 00013fd6 blr      x8
00098DAC a80240f9 ldr      x8, [x21]
00098DB0 e00315aa mov      x0, x21
00098DB4 b6831ff8 stur     x22, [x29, #-8]
00098DB8 080940f9 ldr      x8, [x8, #0x10]
00098DBC 00013fd6 blr      x8
00098DC0 83020012 and      w3, w20, #1
00098DC4 a02300d1 sub      x0, x29, #8
00098DC8 e10313aa mov      x1, x19
00098DCC 22008052 mov      w2, #1
00098DD0 44008052 mov      w4, #2
00098DD4 7e000014 b        #0x98fcc
00098DD8 160040f9 ldr      x22, [x0]
00098DDC 162300b4 cbz      x22, #0x9923c
00098DE0 f50316aa mov      x21, x22
00098DE4 a88e44f8 ldr      x8, [x21, #0x48]!
00098DE8 e00315aa mov      x0, x21
00098DEC 080940f9 ldr      x8, [x8, #0x10]
00098DF0 00013fd6 blr      x8
00098DF4 a80240f9 ldr      x8, [x21]
00098DF8 e00315aa mov      x0, x21
00098DFC b6831ff8 stur     x22, [x29, #-8]
00098E00 080940f9 ldr      x8, [x8, #0x10]
00098E04 00013fd6 blr      x8
00098E08 83020012 and      w3, w20, #1
00098E0C a02300d1 sub      x0, x29, #8
00098E10 e10313aa mov      x1, x19
00098E14 e2031f2a mov      w2, wzr
00098E18 44008052 mov      w4, #2
00098E1C 6c000014 b        #0x98fcc
00098E20 160040f9 ldr      x22, [x0]
00098E24 562200b4 cbz      x22, #0x9926c
00098E28 f50316aa mov      x21, x22
00098E2C a88e44f8 ldr      x8, [x21, #0x48]!
00098E30 e00315aa mov      x0, x21
00098E34 080940f9 ldr      x8, [x8, #0x10]
00098E38 00013fd6 blr      x8
00098E3C a80240f9 ldr      x8, [x21]
00098E40 e00315aa mov      x0, x21
00098E44 b6831ff8 stur     x22, [x29, #-8]
00098E48 080940f9 ldr      x8, [x8, #0x10]
00098E4C 00013fd6 blr      x8
00098E50 83020012 and      w3, w20, #1
00098E54 a02300d1 sub      x0, x29, #8
00098E58 e10313aa mov      x1, x19
00098E5C 22008052 mov      w2, #1
00098E60 64008052 mov      w4, #3
00098E64 5a000014 b        #0x98fcc
00098E68 160040f9 ldr      x22, [x0]
00098E6C d62000b4 cbz      x22, #0x99284
00098E70 f50316aa mov      x21, x22
00098E74 a88e44f8 ldr      x8, [x21, #0x48]!
00098E78 e00315aa mov      x0, x21
00098E7C 080940f9 ldr      x8, [x8, #0x10]
00098E80 00013fd6 blr      x8
00098E84 a80240f9 ldr      x8, [x21]
00098E88 e00315aa mov      x0, x21
00098E8C b6831ff8 stur     x22, [x29, #-8]
00098E90 080940f9 ldr      x8, [x8, #0x10]
00098E94 00013fd6 blr      x8
00098E98 83020012 and      w3, w20, #1
00098E9C a02300d1 sub      x0, x29, #8
00098EA0 e10313aa mov      x1, x19
00098EA4 e2031f2a mov      w2, wzr
00098EA8 64008052 mov      w4, #3
00098EAC 48000014 b        #0x98fcc
00098EB0 160040f9 ldr      x22, [x0]
00098EB4 162000b4 cbz      x22, #0x992b4
00098EB8 f50316aa mov      x21, x22
00098EBC a88e44f8 ldr      x8, [x21, #0x48]!
00098EC0 e00315aa mov      x0, x21
00098EC4 080940f9 ldr      x8, [x8, #0x10]
00098EC8 00013fd6 blr      x8
00098ECC a80240f9 ldr      x8, [x21]
00098ED0 e00315aa mov      x0, x21
00098ED4 b6831ff8 stur     x22, [x29, #-8]
00098ED8 080940f9 ldr      x8, [x8, #0x10]
00098EDC 00013fd6 blr      x8
00098EE0 83020012 and      w3, w20, #1
00098EE4 a02300d1 sub      x0, x29, #8
00098EE8 e10313aa mov      x1, x19
00098EEC 22008052 mov      w2, #1
00098EF0 84008052 mov      w4, #4
00098EF4 36000014 b        #0x98fcc
00098EF8 160040f9 ldr      x22, [x0]
00098EFC 961e00b4 cbz      x22, #0x992cc
00098F00 f50316aa mov      x21, x22
00098F04 a88e44f8 ldr      x8, [x21, #0x48]!
00098F08 e00315aa mov      x0, x21
00098F0C 080940f9 ldr      x8, [x8, #0x10]
00098F10 00013fd6 blr      x8
00098F14 a80240f9 ldr      x8, [x21]
00098F18 e00315aa mov      x0, x21
00098F1C b6831ff8 stur     x22, [x29, #-8]
00098F20 080940f9 ldr      x8, [x8, #0x10]
00098F24 00013fd6 blr      x8
00098F28 83020012 and      w3, w20, #1
00098F2C a02300d1 sub      x0, x29, #8
00098F30 e10313aa mov      x1, x19
00098F34 e2031f2a mov      w2, wzr
00098F38 84008052 mov      w4, #4
00098F3C 24000014 b        #0x98fcc
00098F40 160040f9 ldr      x22, [x0]
00098F44 d61d00b4 cbz      x22, #0x992fc
00098F48 f50316aa mov      x21, x22
00098F4C a88e44f8 ldr      x8, [x21, #0x48]!
00098F50 e00315aa mov      x0, x21
00098F54 080940f9 ldr      x8, [x8, #0x10]
00098F58 00013fd6 blr      x8
00098F5C a80240f9 ldr      x8, [x21]
00098F60 e00315aa mov      x0, x21
00098F64 b6831ff8 stur     x22, [x29, #-8]
00098F68 080940f9 ldr      x8, [x8, #0x10]
00098F6C 00013fd6 blr      x8
00098F70 83020012 and      w3, w20, #1
00098F74 a4008052 mov      w4, #5
00098F78 a02300d1 sub      x0, x29, #8
00098F7C e10313aa mov      x1, x19
00098F80 22008052 mov      w2, #1
00098F84 12000014 b        #0x98fcc
00098F88 160040f9 ldr      x22, [x0]
00098F8C 161d00b4 cbz      x22, #0x9932c
00098F90 f50316aa mov      x21, x22
00098F94 a88e44f8 ldr      x8, [x21, #0x48]!
00098F98 e00315aa mov      x0, x21
00098F9C 080940f9 ldr      x8, [x8, #0x10]
00098FA0 00013fd6 blr      x8
00098FA4 a80240f9 ldr      x8, [x21]
00098FA8 e00315aa mov      x0, x21
00098FAC b6831ff8 stur     x22, [x29, #-8]
00098FB0 080940f9 ldr      x8, [x8, #0x10]
00098FB4 00013fd6 blr      x8
00098FB8 83020012 and      w3, w20, #1
00098FBC a4008052 mov      w4, #5
00098FC0 a02300d1 sub      x0, x29, #8
00098FC4 e10313aa mov      x1, x19
00098FC8 e2031f2a mov      w2, wzr
00098FCC 02040094 bl       #0x99fd4
00098FD0 a80240f9 ldr      x8, [x21]
00098FD4 e00315aa mov      x0, x21
00098FD8 080d40f9 ldr      x8, [x8, #0x18]
00098FDC 00013fd6 blr      x8
00098FE0 a80240f9 ldr      x8, [x21]
00098FE4 e00315aa mov      x0, x21
00098FE8 010d40f9 ldr      x1, [x8, #0x18]
00098FEC f44f47a9 ldp      x20, x19, [sp, #0x70]
00098FF0 f65746a9 ldp      x22, x21, [sp, #0x60]
00098FF4 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00098FF8 ff030291 add      sp, sp, #0x80
00098FFC 20001fd6 br       x1
00099000 160040f9 ldr      x22, [x0]
00099004 d61a00b4 cbz      x22, #0x9935c
00099008 f50316aa mov      x21, x22
0009900C a88e44f8 ldr      x8, [x21, #0x48]!
00099010 e00315aa mov      x0, x21
00099014 080940f9 ldr      x8, [x8, #0x10]
00099018 00013fd6 blr      x8
0009901C a80240f9 ldr      x8, [x21]
00099020 e00315aa mov      x0, x21
00099024 b6831ff8 stur     x22, [x29, #-8]
00099028 080940f9 ldr      x8, [x8, #0x10]
0009902C 00013fd6 blr      x8
00099030 83020012 and      w3, w20, #1
00099034 a02300d1 sub      x0, x29, #8
00099038 e10313aa mov      x1, x19
0009903C e2031f2a mov      w2, wzr
00099040 8e030094 bl       #0x99e78
00099044 e3ffff17 b        #0x98fd0
00099048 150040f9 ldr      x21, [x0]
0009904C f50700f9 str      x21, [sp, #8]
00099050 d51900b4 cbz      x21, #0x99388
00099054 a88e44f8 ldr      x8, [x21, #0x48]!
00099058 e00315aa mov      x0, x21
0009905C 080940f9 ldr      x8, [x8, #0x10]
00099060 00013fd6 blr      x8
00099064 83020012 and      w3, w20, #1
00099068 e0230091 add      x0, sp, #8
0009906C e10313aa mov      x1, x19
00099070 e2031f2a mov      w2, wzr
00099074 de010094 bl       #0x997ec
00099078 daffff17 b        #0x98fe0
0009907C 140040f9 ldr      x20, [x0]
00099080 f40300f9 str      x20, [sp]
00099084 741900b4 cbz      x20, #0x993b0
00099088 888e44f8 ldr      x8, [x20, #0x48]!
0009908C e00314aa mov      x0, x20
00099090 080940f9 ldr      x8, [x8, #0x10]
00099094 00013fd6 blr      x8
00099098 e0030091 mov      x0, sp
0009909C e10313aa mov      x1, x19
000990A0 e2031f2a mov      w2, wzr
000990A4 e3031f2a mov      w3, wzr
000990A8 2a020094 bl       #0x99950
000990AC 880240f9 ldr      x8, [x20]
000990B0 e00314aa mov      x0, x20
000990B4 010d40f9 ldr      x1, [x8, #0x18]
000990B8 f44f47a9 ldp      x20, x19, [sp, #0x70]
000990BC f65746a9 ldp      x22, x21, [sp, #0x60]
000990C0 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000990C4 ff030291 add      sp, sp, #0x80
000990C8 20001fd6 br       x1
000990CC a04300d1 sub      x0, x29, #0x10
000990D0 e10313aa mov      x1, x19
000990D4 dbf7ff97 bl       #0x97040
000990D8 f44f47a9 ldp      x20, x19, [sp, #0x70]
000990DC f65746a9 ldp      x22, x21, [sp, #0x60]
000990E0 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000990E4 ff030291 add      sp, sp, #0x80
000990E8 c0035fd6 ret      
000990EC 83020012 and      w3, w20, #1
000990F0 a06300d1 sub      x0, x29, #0x18
000990F4 e10313aa mov      x1, x19
000990F8 22008052 mov      w2, #1
000990FC b7000094 bl       #0x993d8
00099100 f44f47a9 ldp      x20, x19, [sp, #0x70]
00099104 f65746a9 ldp      x22, x21, [sp, #0x60]
00099108 fd7b45a9 ldp      x29, x30, [sp, #0x50]
0009910C ff030291 add      sp, sp, #0x80
00099110 c0035fd6 ret      
00099114 83020012 and      w3, w20, #1
00099118 a08300d1 sub      x0, x29, #0x20
0009911C e10313aa mov      x1, x19
00099120 e2031f2a mov      w2, wzr
00099124 ad000094 bl       #0x993d8
00099128 f44f47a9 ldp      x20, x19, [sp, #0x70]
0009912C f65746a9 ldp      x22, x21, [sp, #0x60]
00099130 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00099134 ff030291 add      sp, sp, #0x80
00099138 c0035fd6 ret      
0009913C 83020012 and      w3, w20, #1
00099140 e0a30091 add      x0, sp, #0x28
00099144 e10313aa mov      x1, x19
00099148 22008052 mov      w2, #1
0009914C fa000094 bl       #0x99534
00099150 f44f47a9 ldp      x20, x19, [sp, #0x70]
00099154 f65746a9 ldp      x22, x21, [sp, #0x60]
00099158 fd7b45a9 ldp      x29, x30, [sp, #0x50]
0009915C ff030291 add      sp, sp, #0x80
00099160 c0035fd6 ret      
00099164 83020012 and      w3, w20, #1
00099168 e0830091 add      x0, sp, #0x20
0009916C e10313aa mov      x1, x19
00099170 e2031f2a mov      w2, wzr
00099174 f0000094 bl       #0x99534
00099178 f44f47a9 ldp      x20, x19, [sp, #0x70]
0009917C f65746a9 ldp      x22, x21, [sp, #0x60]
00099180 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00099184 ff030291 add      sp, sp, #0x80
00099188 c0035fd6 ret      
0009918C 83020012 and      w3, w20, #1
00099190 e0630091 add      x0, sp, #0x18
00099194 e10313aa mov      x1, x19
00099198 22008052 mov      w2, #1
0009919C 3d010094 bl       #0x99690
000991A0 f44f47a9 ldp      x20, x19, [sp, #0x70]
000991A4 f65746a9 ldp      x22, x21, [sp, #0x60]
000991A8 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000991AC ff030291 add      sp, sp, #0x80
000991B0 c0035fd6 ret      
000991B4 83020012 and      w3, w20, #1
000991B8 e0430091 add      x0, sp, #0x10
000991BC e10313aa mov      x1, x19
000991C0 e2031f2a mov      w2, wzr
000991C4 33010094 bl       #0x99690
000991C8 f44f47a9 ldp      x20, x19, [sp, #0x70]
000991CC f65746a9 ldp      x22, x21, [sp, #0x60]
000991D0 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000991D4 ff030291 add      sp, sp, #0x80
000991D8 c0035fd6 ret      
000991DC 83020012 and      w3, w20, #1
000991E0 a02300d1 sub      x0, x29, #8
000991E4 bf831ff8 stur     xzr, [x29, #-8]
000991E8 e10313aa mov      x1, x19
000991EC 22008052 mov      w2, #1
000991F0 06000014 b        #0x99208
000991F4 bf831ff8 stur     xzr, [x29, #-8]
000991F8 83020012 and      w3, w20, #1
000991FC a02300d1 sub      x0, x29, #8
00099200 e10313aa mov      x1, x19
00099204 e2031f2a mov      w2, wzr
00099208 24008052 mov      w4, #1
0009920C 72030094 bl       #0x99fd4
00099210 f44f47a9 ldp      x20, x19, [sp, #0x70]
00099214 f65746a9 ldp      x22, x21, [sp, #0x60]
00099218 fd7b45a9 ldp      x29, x30, [sp, #0x50]
0009921C ff030291 add      sp, sp, #0x80
00099220 c0035fd6 ret      
00099224 83020012 and      w3, w20, #1
00099228 a02300d1 sub      x0, x29, #8
0009922C bf831ff8 stur     xzr, [x29, #-8]
00099230 e10313aa mov      x1, x19
00099234 22008052 mov      w2, #1
00099238 06000014 b        #0x99250
0009923C bf831ff8 stur     xzr, [x29, #-8]
00099240 83020012 and      w3, w20, #1
00099244 a02300d1 sub      x0, x29, #8
00099248 e10313aa mov      x1, x19
0009924C e2031f2a mov      w2, wzr
00099250 44008052 mov      w4, #2
00099254 60030094 bl       #0x99fd4
00099258 f44f47a9 ldp      x20, x19, [sp, #0x70]
0009925C f65746a9 ldp      x22, x21, [sp, #0x60]
00099260 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00099264 ff030291 add      sp, sp, #0x80
00099268 c0035fd6 ret      
0009926C 83020012 and      w3, w20, #1
00099270 a02300d1 sub      x0, x29, #8
00099274 bf831ff8 stur     xzr, [x29, #-8]
00099278 e10313aa mov      x1, x19
0009927C 22008052 mov      w2, #1
00099280 06000014 b        #0x99298
00099284 bf831ff8 stur     xzr, [x29, #-8]
00099288 83020012 and      w3, w20, #1
0009928C a02300d1 sub      x0, x29, #8
00099290 e10313aa mov      x1, x19
00099294 e2031f2a mov      w2, wzr
00099298 64008052 mov      w4, #3
0009929C 4e030094 bl       #0x99fd4
000992A0 f44f47a9 ldp      x20, x19, [sp, #0x70]
000992A4 f65746a9 ldp      x22, x21, [sp, #0x60]
000992A8 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000992AC ff030291 add      sp, sp, #0x80
000992B0 c0035fd6 ret      
000992B4 83020012 and      w3, w20, #1
000992B8 a02300d1 sub      x0, x29, #8
000992BC bf831ff8 stur     xzr, [x29, #-8]
000992C0 e10313aa mov      x1, x19
000992C4 22008052 mov      w2, #1
000992C8 06000014 b        #0x992e0
000992CC bf831ff8 stur     xzr, [x29, #-8]
000992D0 83020012 and      w3, w20, #1
000992D4 a02300d1 sub      x0, x29, #8
000992D8 e10313aa mov      x1, x19
000992DC e2031f2a mov      w2, wzr
000992E0 84008052 mov      w4, #4
000992E4 3c030094 bl       #0x99fd4
000992E8 f44f47a9 ldp      x20, x19, [sp, #0x70]
000992EC f65746a9 ldp      x22, x21, [sp, #0x60]
000992F0 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000992F4 ff030291 add      sp, sp, #0x80
000992F8 c0035fd6 ret      
000992FC 83020012 and      w3, w20, #1
00099300 a4008052 mov      w4, #5
00099304 bf831ff8 stur     xzr, [x29, #-8]
00099308 a02300d1 sub      x0, x29, #8
0009930C e10313aa mov      x1, x19
00099310 22008052 mov      w2, #1
00099314 30030094 bl       #0x99fd4
00099318 f44f47a9 ldp      x20, x19, [sp, #0x70]
0009931C f65746a9 ldp      x22, x21, [sp, #0x60]
00099320 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00099324 ff030291 add      sp, sp, #0x80
00099328 c0035fd6 ret      
0009932C 83020012 and      w3, w20, #1
00099330 a4008052 mov      w4, #5
00099334 bf831ff8 stur     xzr, [x29, #-8]
00099338 a02300d1 sub      x0, x29, #8
0009933C e10313aa mov      x1, x19
00099340 e2031f2a mov      w2, wzr
00099344 24030094 bl       #0x99fd4
00099348 f44f47a9 ldp      x20, x19, [sp, #0x70]
0009934C f65746a9 ldp      x22, x21, [sp, #0x60]
00099350 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00099354 ff030291 add      sp, sp, #0x80
00099358 c0035fd6 ret      
0009935C 83020012 and      w3, w20, #1
00099360 a02300d1 sub      x0, x29, #8
00099364 bf831ff8 stur     xzr, [x29, #-8]
00099368 e10313aa mov      x1, x19
0009936C e2031f2a mov      w2, wzr
00099370 c2020094 bl       #0x99e78
00099374 f44f47a9 ldp      x20, x19, [sp, #0x70]
00099378 f65746a9 ldp      x22, x21, [sp, #0x60]
0009937C fd7b45a9 ldp      x29, x30, [sp, #0x50]
00099380 ff030291 add      sp, sp, #0x80
00099384 c0035fd6 ret      
00099388 83020012 and      w3, w20, #1
0009938C e0230091 add      x0, sp, #8
00099390 e10313aa mov      x1, x19
00099394 e2031f2a mov      w2, wzr
00099398 15010094 bl       #0x997ec
0009939C f44f47a9 ldp      x20, x19, [sp, #0x70]
000993A0 f65746a9 ldp      x22, x21, [sp, #0x60]
000993A4 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000993A8 ff030291 add      sp, sp, #0x80
000993AC c0035fd6 ret      
000993B0 e0030091 mov      x0, sp
000993B4 e10313aa mov      x1, x19
000993B8 e2031f2a mov      w2, wzr
000993BC e3031f2a mov      w3, wzr
000993C0 64010094 bl       #0x99950
000993C4 f44f47a9 ldp      x20, x19, [sp, #0x70]
000993C8 f65746a9 ldp      x22, x21, [sp, #0x60]
000993CC fd7b45a9 ldp      x29, x30, [sp, #0x50]
000993D0 ff030291 add      sp, sp, #0x80
000993D4 c0035fd6 ret      
~~~
### 0x993d8 (87 slots)
~~~asm
000993D8 ff0303d1 sub      sp, sp, #0xc0
000993DC fd7b09a9 stp      x29, x30, [sp, #0x90]
000993E0 f55300f9 str      x21, [sp, #0xa0]
000993E4 f44f0ba9 stp      x20, x19, [sp, #0xb0]
000993E8 fd430291 add      x29, sp, #0x90
000993EC f30301aa mov      x19, x1
000993F0 f40300aa mov      x20, x0
000993F4 a2730039 strb     w2, [x29, #0x1c]
000993F8 63020036 tbz      w3, #0, #0x99444
000993FC 950240f9 ldr      x21, [x20]
00099400 b5831ff8 stur     x21, [x29, #-8]
00099404 b50100b4 cbz      x21, #0x99438
00099408 a88e44f8 ldr      x8, [x21, #0x48]!
0009940C e00315aa mov      x0, x21
00099410 080940f9 ldr      x8, [x8, #0x10]
00099414 00013fd6 blr      x8
00099418 a02300d1 sub      x0, x29, #8
0009941C e10313aa mov      x1, x19
00099420 08f7ff97 bl       #0x97040
00099424 a80240f9 ldr      x8, [x21]
00099428 e00315aa mov      x0, x21
0009942C 080d40f9 ldr      x8, [x8, #0x18]
00099430 00013fd6 blr      x8
00099434 04000014 b        #0x99444
00099438 a02300d1 sub      x0, x29, #8
0009943C e10313aa mov      x1, x19
00099440 00f7ff97 bl       #0x97040
00099444 940240f9 ldr      x20, [x20]
00099448 a8730091 add      x8, x29, #0x1c
0009944C 1f2003d5 nop      
00099450 29da0010 adr      x9, #0x9af94
00099454 f32302a9 stp      x19, x8, [sp, #0x20]
00099458 1f2003d5 nop      
0009945C 88e20010 adr      x8, #0x9b0ac
00099460 1f2003d5 nop      
00099464 6ae20010 adr      x10, #0x9b0b0
00099468 e92300a9 stp      x9, x8, [sp]
0009946C 1f2003d5 nop      
00099470 68e20010 adr      x8, #0x9b0bc
00099474 ea2301a9 stp      x10, x8, [sp, #0x10]
00099478 b40400b4 cbz      x20, #0x9950c
0009947C 888e44f8 ldr      x8, [x20, #0x48]!
00099480 e00314aa mov      x0, x20
00099484 080940f9 ldr      x8, [x8, #0x10]
00099488 00013fd6 blr      x8
0009948C 600240f9 ldr      x0, [x19]
00099490 b8080094 bl       #0x9b770
00099494 880240f9 ldr      x8, [x20]
00099498 f503002a mov      w21, w0
0009949C e00314aa mov      x0, x20
000994A0 080940f9 ldr      x8, [x8, #0x10]
000994A4 00013fd6 blr      x8
000994A8 a4060051 sub      w4, w21, #1
000994AC e2030091 mov      x2, sp
000994B0 e10313aa mov      x1, x19
000994B4 e3031f2a mov      w3, wzr
000994B8 8e030094 bl       #0x9a2f0
000994BC 880240f9 ldr      x8, [x20]
000994C0 e00314aa mov      x0, x20
000994C4 080d40f9 ldr      x8, [x8, #0x18]
000994C8 00013fd6 blr      x8
000994CC 880240f9 ldr      x8, [x20]
000994D0 e00314aa mov      x0, x20
000994D4 080d40f9 ldr      x8, [x8, #0x18]
000994D8 00013fd6 blr      x8
000994DC e80740f9 ldr      x8, [sp, #8]
000994E0 c80000b4 cbz      x8, #0x994f8
000994E4 e9030091 mov      x9, sp
000994E8 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
000994EC 20810091 add      x0, x9, #0x20
000994F0 ff7f00a9 stp      xzr, xzr, [sp]
000994F4 00013fd6 blr      x8
000994F8 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
000994FC f55340f9 ldr      x21, [sp, #0xa0]
00099500 fd7b49a9 ldp      x29, x30, [sp, #0x90]
00099504 ff030391 add      sp, sp, #0xc0
00099508 c0035fd6 ret      
0009950C 600240f9 ldr      x0, [x19]
00099510 98080094 bl       #0x9b770
00099514 04040051 sub      w4, w0, #1
00099518 e2030091 mov      x2, sp
0009951C e10313aa mov      x1, x19
00099520 e3031f2a mov      w3, wzr
00099524 73030094 bl       #0x9a2f0
00099528 e80740f9 ldr      x8, [sp, #8]
0009952C c8fdffb5 cbnz     x8, #0x994e4
00099530 f2ffff17 b        #0x994f8
~~~
### 0x99534 (87 slots)
~~~asm
00099534 ff0303d1 sub      sp, sp, #0xc0
00099538 fd7b09a9 stp      x29, x30, [sp, #0x90]
0009953C f55300f9 str      x21, [sp, #0xa0]
00099540 f44f0ba9 stp      x20, x19, [sp, #0xb0]
00099544 fd430291 add      x29, sp, #0x90
00099548 f30301aa mov      x19, x1
0009954C f40300aa mov      x20, x0
00099550 a2730039 strb     w2, [x29, #0x1c]
00099554 63020036 tbz      w3, #0, #0x995a0
00099558 950240f9 ldr      x21, [x20]
0009955C b5831ff8 stur     x21, [x29, #-8]
00099560 b50100b4 cbz      x21, #0x99594
00099564 a88e44f8 ldr      x8, [x21, #0x48]!
00099568 e00315aa mov      x0, x21
0009956C 080940f9 ldr      x8, [x8, #0x10]
00099570 00013fd6 blr      x8
00099574 a02300d1 sub      x0, x29, #8
00099578 e10313aa mov      x1, x19
0009957C b1f6ff97 bl       #0x97040
00099580 a80240f9 ldr      x8, [x21]
00099584 e00315aa mov      x0, x21
00099588 080d40f9 ldr      x8, [x8, #0x18]
0009958C 00013fd6 blr      x8
00099590 04000014 b        #0x995a0
00099594 a02300d1 sub      x0, x29, #8
00099598 e10313aa mov      x1, x19
0009959C a9f6ff97 bl       #0x97040
000995A0 940240f9 ldr      x20, [x20]
000995A4 a8730091 add      x8, x29, #0x1c
000995A8 1f2003d5 nop      
000995AC e9d80010 adr      x9, #0x9b0c8
000995B0 f32302a9 stp      x19, x8, [sp, #0x20]
000995B4 1f2003d5 nop      
000995B8 48e10010 adr      x8, #0x9b1e0
000995BC 1f2003d5 nop      
000995C0 2ae10010 adr      x10, #0x9b1e4
000995C4 e92300a9 stp      x9, x8, [sp]
000995C8 1f2003d5 nop      
000995CC 28e10010 adr      x8, #0x9b1f0
000995D0 ea2301a9 stp      x10, x8, [sp, #0x10]
000995D4 b40400b4 cbz      x20, #0x99668
000995D8 888e44f8 ldr      x8, [x20, #0x48]!
000995DC e00314aa mov      x0, x20
000995E0 080940f9 ldr      x8, [x8, #0x10]
000995E4 00013fd6 blr      x8
000995E8 600240f9 ldr      x0, [x19]
000995EC 61080094 bl       #0x9b770
000995F0 880240f9 ldr      x8, [x20]
000995F4 f503002a mov      w21, w0
000995F8 e00314aa mov      x0, x20
000995FC 080940f9 ldr      x8, [x8, #0x10]
00099600 00013fd6 blr      x8
00099604 a4060051 sub      w4, w21, #1
00099608 e2030091 mov      x2, sp
0009960C e10313aa mov      x1, x19
00099610 e3031f2a mov      w3, wzr
00099614 37030094 bl       #0x9a2f0
00099618 880240f9 ldr      x8, [x20]
0009961C e00314aa mov      x0, x20
00099620 080d40f9 ldr      x8, [x8, #0x18]
00099624 00013fd6 blr      x8
00099628 880240f9 ldr      x8, [x20]
0009962C e00314aa mov      x0, x20
00099630 080d40f9 ldr      x8, [x8, #0x18]
00099634 00013fd6 blr      x8
00099638 e80740f9 ldr      x8, [sp, #8]
0009963C c80000b4 cbz      x8, #0x99654
00099640 e9030091 mov      x9, sp
00099644 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00099648 20810091 add      x0, x9, #0x20
0009964C ff7f00a9 stp      xzr, xzr, [sp]
00099650 00013fd6 blr      x8
00099654 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
00099658 f55340f9 ldr      x21, [sp, #0xa0]
0009965C fd7b49a9 ldp      x29, x30, [sp, #0x90]
00099660 ff030391 add      sp, sp, #0xc0
00099664 c0035fd6 ret      
00099668 600240f9 ldr      x0, [x19]
0009966C 41080094 bl       #0x9b770
00099670 04040051 sub      w4, w0, #1
00099674 e2030091 mov      x2, sp
00099678 e10313aa mov      x1, x19
0009967C e3031f2a mov      w3, wzr
00099680 1c030094 bl       #0x9a2f0
00099684 e80740f9 ldr      x8, [sp, #8]
00099688 c8fdffb5 cbnz     x8, #0x99640
0009968C f2ffff17 b        #0x99654
~~~
### 0x99690 (87 slots)
~~~asm
00099690 ff0303d1 sub      sp, sp, #0xc0
00099694 fd7b09a9 stp      x29, x30, [sp, #0x90]
00099698 f55300f9 str      x21, [sp, #0xa0]
0009969C f44f0ba9 stp      x20, x19, [sp, #0xb0]
000996A0 fd430291 add      x29, sp, #0x90
000996A4 f30301aa mov      x19, x1
000996A8 f40300aa mov      x20, x0
000996AC a2730039 strb     w2, [x29, #0x1c]
000996B0 63020036 tbz      w3, #0, #0x996fc
000996B4 950240f9 ldr      x21, [x20]
000996B8 b5831ff8 stur     x21, [x29, #-8]
000996BC b50100b4 cbz      x21, #0x996f0
000996C0 a88e44f8 ldr      x8, [x21, #0x48]!
000996C4 e00315aa mov      x0, x21
000996C8 080940f9 ldr      x8, [x8, #0x10]
000996CC 00013fd6 blr      x8
000996D0 a02300d1 sub      x0, x29, #8
000996D4 e10313aa mov      x1, x19
000996D8 5af6ff97 bl       #0x97040
000996DC a80240f9 ldr      x8, [x21]
000996E0 e00315aa mov      x0, x21
000996E4 080d40f9 ldr      x8, [x8, #0x18]
000996E8 00013fd6 blr      x8
000996EC 04000014 b        #0x996fc
000996F0 a02300d1 sub      x0, x29, #8
000996F4 e10313aa mov      x1, x19
000996F8 52f6ff97 bl       #0x97040
000996FC 940240f9 ldr      x20, [x20]
00099700 a8730091 add      x8, x29, #0x1c
00099704 1f2003d5 nop      
00099708 a9d70010 adr      x9, #0x9b1fc
0009970C f32302a9 stp      x19, x8, [sp, #0x20]
00099710 1f2003d5 nop      
00099714 c8e00010 adr      x8, #0x9b32c
00099718 1f2003d5 nop      
0009971C aae00010 adr      x10, #0x9b330
00099720 e92300a9 stp      x9, x8, [sp]
00099724 1f2003d5 nop      
00099728 a8e00010 adr      x8, #0x9b33c
0009972C ea2301a9 stp      x10, x8, [sp, #0x10]
00099730 b40400b4 cbz      x20, #0x997c4
00099734 888e44f8 ldr      x8, [x20, #0x48]!
00099738 e00314aa mov      x0, x20
0009973C 080940f9 ldr      x8, [x8, #0x10]
00099740 00013fd6 blr      x8
00099744 600240f9 ldr      x0, [x19]
00099748 0a080094 bl       #0x9b770
0009974C 880240f9 ldr      x8, [x20]
00099750 f503002a mov      w21, w0
00099754 e00314aa mov      x0, x20
00099758 080940f9 ldr      x8, [x8, #0x10]
0009975C 00013fd6 blr      x8
00099760 a4060051 sub      w4, w21, #1
00099764 e2030091 mov      x2, sp
00099768 e10313aa mov      x1, x19
0009976C e3031f2a mov      w3, wzr
00099770 e0020094 bl       #0x9a2f0
00099774 880240f9 ldr      x8, [x20]
00099778 e00314aa mov      x0, x20
0009977C 080d40f9 ldr      x8, [x8, #0x18]
00099780 00013fd6 blr      x8
00099784 880240f9 ldr      x8, [x20]
00099788 e00314aa mov      x0, x20
0009978C 080d40f9 ldr      x8, [x8, #0x18]
00099790 00013fd6 blr      x8
00099794 e80740f9 ldr      x8, [sp, #8]
00099798 c80000b4 cbz      x8, #0x997b0
0009979C e9030091 mov      x9, sp
000997A0 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
000997A4 20810091 add      x0, x9, #0x20
000997A8 ff7f00a9 stp      xzr, xzr, [sp]
000997AC 00013fd6 blr      x8
000997B0 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
000997B4 f55340f9 ldr      x21, [sp, #0xa0]
000997B8 fd7b49a9 ldp      x29, x30, [sp, #0x90]
000997BC ff030391 add      sp, sp, #0xc0
000997C0 c0035fd6 ret      
000997C4 600240f9 ldr      x0, [x19]
000997C8 ea070094 bl       #0x9b770
000997CC 04040051 sub      w4, w0, #1
000997D0 e2030091 mov      x2, sp
000997D4 e10313aa mov      x1, x19
000997D8 e3031f2a mov      w3, wzr
000997DC c5020094 bl       #0x9a2f0
000997E0 e80740f9 ldr      x8, [sp, #8]
000997E4 c8fdffb5 cbnz     x8, #0x9979c
000997E8 f2ffff17 b        #0x997b0
~~~
### 0x997ec (87 slots)
~~~asm
000997EC ff0303d1 sub      sp, sp, #0xc0
000997F0 fd7b09a9 stp      x29, x30, [sp, #0x90]
000997F4 f55300f9 str      x21, [sp, #0xa0]
000997F8 f44f0ba9 stp      x20, x19, [sp, #0xb0]
000997FC fd430291 add      x29, sp, #0x90
00099800 f30301aa mov      x19, x1
00099804 f40300aa mov      x20, x0
00099808 a2730039 strb     w2, [x29, #0x1c]
0009980C 63020036 tbz      w3, #0, #0x99858
00099810 950240f9 ldr      x21, [x20]
00099814 b5831ff8 stur     x21, [x29, #-8]
00099818 b50100b4 cbz      x21, #0x9984c
0009981C a88e44f8 ldr      x8, [x21, #0x48]!
00099820 e00315aa mov      x0, x21
00099824 080940f9 ldr      x8, [x8, #0x10]
00099828 00013fd6 blr      x8
0009982C a02300d1 sub      x0, x29, #8
00099830 e10313aa mov      x1, x19
00099834 03f6ff97 bl       #0x97040
00099838 a80240f9 ldr      x8, [x21]
0009983C e00315aa mov      x0, x21
00099840 080d40f9 ldr      x8, [x8, #0x18]
00099844 00013fd6 blr      x8
00099848 04000014 b        #0x99858
0009984C a02300d1 sub      x0, x29, #8
00099850 e10313aa mov      x1, x19
00099854 fbf5ff97 bl       #0x97040
00099858 940240f9 ldr      x20, [x20]
0009985C a8730091 add      x8, x29, #0x1c
00099860 1f2003d5 nop      
00099864 29d70010 adr      x9, #0x9b348
00099868 f32302a9 stp      x19, x8, [sp, #0x20]
0009986C 1f2003d5 nop      
00099870 88df0010 adr      x8, #0x9b460
00099874 1f2003d5 nop      
00099878 6adf0010 adr      x10, #0x9b464
0009987C e92300a9 stp      x9, x8, [sp]
00099880 1f2003d5 nop      
00099884 68df0010 adr      x8, #0x9b470
00099888 ea2301a9 stp      x10, x8, [sp, #0x10]
0009988C b40400b4 cbz      x20, #0x99920
00099890 888e44f8 ldr      x8, [x20, #0x48]!
00099894 e00314aa mov      x0, x20
00099898 080940f9 ldr      x8, [x8, #0x10]
0009989C 00013fd6 blr      x8
000998A0 600240f9 ldr      x0, [x19]
000998A4 b3070094 bl       #0x9b770
000998A8 880240f9 ldr      x8, [x20]
000998AC f503002a mov      w21, w0
000998B0 e00314aa mov      x0, x20
000998B4 080940f9 ldr      x8, [x8, #0x10]
000998B8 00013fd6 blr      x8
000998BC a4060051 sub      w4, w21, #1
000998C0 e2030091 mov      x2, sp
000998C4 e10313aa mov      x1, x19
000998C8 e3031f2a mov      w3, wzr
000998CC 89020094 bl       #0x9a2f0
000998D0 880240f9 ldr      x8, [x20]
000998D4 e00314aa mov      x0, x20
000998D8 080d40f9 ldr      x8, [x8, #0x18]
000998DC 00013fd6 blr      x8
000998E0 880240f9 ldr      x8, [x20]
000998E4 e00314aa mov      x0, x20
000998E8 080d40f9 ldr      x8, [x8, #0x18]
000998EC 00013fd6 blr      x8
000998F0 e80740f9 ldr      x8, [sp, #8]
000998F4 c80000b4 cbz      x8, #0x9990c
000998F8 e9030091 mov      x9, sp
000998FC ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00099900 20810091 add      x0, x9, #0x20
00099904 ff7f00a9 stp      xzr, xzr, [sp]
00099908 00013fd6 blr      x8
0009990C f44f4ba9 ldp      x20, x19, [sp, #0xb0]
00099910 f55340f9 ldr      x21, [sp, #0xa0]
00099914 fd7b49a9 ldp      x29, x30, [sp, #0x90]
00099918 ff030391 add      sp, sp, #0xc0
0009991C c0035fd6 ret      
00099920 600240f9 ldr      x0, [x19]
00099924 93070094 bl       #0x9b770
00099928 04040051 sub      w4, w0, #1
0009992C e2030091 mov      x2, sp
00099930 e10313aa mov      x1, x19
00099934 e3031f2a mov      w3, wzr
00099938 6e020094 bl       #0x9a2f0
0009993C e80740f9 ldr      x8, [sp, #8]
00099940 c8fdffb5 cbnz     x8, #0x998f8
00099944 f2ffff17 b        #0x9990c
~~~
### 0x99950 (330 slots)
~~~asm
00099950 ff8304d1 sub      sp, sp, #0x120
00099954 fd7b0da9 stp      x29, x30, [sp, #0xd0]
00099958 fc670ea9 stp      x28, x25, [sp, #0xe0]
0009995C f85f0fa9 stp      x24, x23, [sp, #0xf0]
00099960 f65710a9 stp      x22, x21, [sp, #0x100]
00099964 f44f11a9 stp      x20, x19, [sp, #0x110]
00099968 fd430391 add      x29, sp, #0xd0
0009996C 140040f9 ldr      x20, [x0]
00099970 f30301aa mov      x19, x1
00099974 740200b4 cbz      x20, #0x999c0
00099978 f50314aa mov      x21, x20
0009997C a88e44f8 ldr      x8, [x21, #0x48]!
00099980 e00315aa mov      x0, x21
00099984 080940f9 ldr      x8, [x8, #0x10]
00099988 00013fd6 blr      x8
0009998C a80240f9 ldr      x8, [x21]
00099990 e00315aa mov      x0, x21
00099994 f43300f9 str      x20, [sp, #0x60]
00099998 080940f9 ldr      x8, [x8, #0x10]
0009999C 00013fd6 blr      x8
000999A0 e0830191 add      x0, sp, #0x60
000999A4 e10313aa mov      x1, x19
000999A8 a6f5ff97 bl       #0x97040
000999AC a80240f9 ldr      x8, [x21]
000999B0 e00315aa mov      x0, x21
000999B4 080d40f9 ldr      x8, [x8, #0x18]
000999B8 00013fd6 blr      x8
000999BC 05000014 b        #0x999d0
000999C0 e0830191 add      x0, sp, #0x60
000999C4 e10313aa mov      x1, x19
000999C8 ff3300f9 str      xzr, [sp, #0x60]
000999CC 9df5ff97 bl       #0x97040
000999D0 680240f9 ldr      x8, [x19]
000999D4 083140f9 ldr      x8, [x8, #0x60]
000999D8 00210091 add      x0, x8, #8
000999DC 820a0094 bl       #0x9c3e4
000999E0 600240f9 ldr      x0, [x19]
000999E4 e1031f2a mov      w1, wzr
000999E8 57080094 bl       #0x9bb44
000999EC b40000b4 cbz      x20, #0x99a00
000999F0 888e44f8 ldr      x8, [x20, #0x48]!
000999F4 e00314aa mov      x0, x20
000999F8 080d40f9 ldr      x8, [x8, #0x18]
000999FC 00013fd6 blr      x8
00099A00 680240f9 ldr      x8, [x19]
00099A04 e0830191 add      x0, sp, #0x60
00099A08 083140f9 ldr      x8, [x8, #0x60]
00099A0C 01c10291 add      x1, x8, #0xb0
00099A10 06030094 bl       #0x9a628
00099A14 680240f9 ldr      x8, [x19]
00099A18 f7db4aa9 ldp      x23, x22, [sp, #0xa8]
00099A1C 083140f9 ldr      x8, [x8, #0x60]
00099A20 092947a9 ldp      x9, x10, [x8, #0x70]
00099A24 005140f9 ldr      x0, [x8, #0xa0]
00099A28 e92b00a9 stp      x9, x10, [sp]
00099A2C e9030091 mov      x9, sp
00099A30 34410091 add      x20, x9, #0x10
00099A34 800100b4 cbz      x0, #0x99a64
00099A38 08010291 add      x8, x8, #0x80
00099A3C 1f0008eb cmp      x0, x8
00099A40 00020054 b.eq     #0x99a80
00099A44 080040f9 ldr      x8, [x0]
00099A48 080940f9 ldr      x8, [x8, #0x10]
00099A4C 00013fd6 blr      x8
00099A50 e01b00f9 str      x0, [sp, #0x30]
00099A54 ffff04a9 stp      xzr, xzr, [sp, #0x48]
00099A58 ff2300f9 str      xzr, [sp, #0x40]
00099A5C 360200b5 cbnz     x22, #0x99aa0
00099A60 05000014 b        #0x99a74
00099A64 ff1b00f9 str      xzr, [sp, #0x30]
00099A68 ffff04a9 stp      xzr, xzr, [sp, #0x48]
00099A6C ff2300f9 str      xzr, [sp, #0x40]
00099A70 960100b5 cbnz     x22, #0x99aa0
00099A74 e85740f9 ldr      x8, [sp, #0xa8]
00099A78 680500b5 cbnz     x8, #0x99b24
00099A7C b9000014 b        #0x99d60
00099A80 f41b00f9 str      x20, [sp, #0x30]
00099A84 e10314aa mov      x1, x20
00099A88 080040f9 ldr      x8, [x0]
00099A8C 080d40f9 ldr      x8, [x8, #0x18]
00099A90 00013fd6 blr      x8
00099A94 ffff04a9 stp      xzr, xzr, [sp, #0x48]
00099A98 ff2300f9 str      xzr, [sp, #0x40]
00099A9C d6feffb4 cbz      x22, #0x99a74
00099AA0 e80740f9 ldr      x8, [sp, #8]
00099AA4 1f0116eb cmp      x8, x22
00099AA8 231e0054 b.lo     #0x99e6c
00099AAC e00340f9 ldr      x0, [sp]
00099AB0 c8ea7bd3 lsl      x8, x22, #5
00099AB4 82008052 mov      w2, #4
00099AB8 010916cb sub      x1, x8, x22, lsl #2
00099ABC 080040f9 ldr      x8, [x0]
00099AC0 080940f9 ldr      x8, [x8, #0x10]
00099AC4 00013fd6 blr      x8
00099AC8 e12340f9 ldr      x1, [sp, #0x40]
00099ACC f50300aa mov      x21, x0
00099AD0 011d00b4 cbz      x1, #0x99e70
00099AD4 f51c00b4 cbz      x21, #0x99e70
00099AD8 e82740f9 ldr      x8, [sp, #0x48]
00099ADC a81c00b4 cbz      x8, #0x99e70
00099AE0 09e97bd3 lsl      x9, x8, #5
00099AE4 e00315aa mov      x0, x21
00099AE8 220908cb sub      x2, x9, x8, lsl #2
00099AEC a1711594 bl       #0x5f6170
00099AF0 e12340f9 ldr      x1, [sp, #0x40]
00099AF4 e82b40f9 ldr      x8, [sp, #0x50]
00099AF8 83008052 mov      w3, #4
00099AFC 09e97bd3 lsl      x9, x8, #5
00099B00 e00340f9 ldr      x0, [sp]
00099B04 220908cb sub      x2, x9, x8, lsl #2
00099B08 080040f9 ldr      x8, [x0]
00099B0C 080d40f9 ldr      x8, [x8, #0x18]
00099B10 00013fd6 blr      x8
00099B14 f52300f9 str      x21, [sp, #0x40]
00099B18 f62b00f9 str      x22, [sp, #0x50]
00099B1C e85740f9 ldr      x8, [sp, #0xa8]
00099B20 081200b4 cbz      x8, #0x99d60
00099B24 f55340f9 ldr      x21, [sp, #0xa0]
00099B28 58d03bd5 mrs      x24, tpidr_el0
00099B2C 96038052 mov      w22, #0x1c
00099B30 19cb7392 and      x25, x24, #0xffffffffffffe000
00099B34 08000014 b        #0x99b54
00099B38 1f2003d5 nop      
00099B3C 1f2003d5 nop      
00099B40 b5720091 add      x21, x21, #0x1c
00099B44 e9234aa9 ldp      x9, x8, [sp, #0xa0]
00099B48 0925169b madd     x9, x8, x22, x9
00099B4C bf0209eb cmp      x21, x9
00099B50 e0070054 b.eq     #0x99c4c
00099B54 680240f9 ldr      x8, [x19]
00099B58 e10315aa mov      x1, x21
00099B5C 083140f9 ldr      x8, [x8, #0x60]
00099B60 008940f9 ldr      x0, [x8, #0x110]
00099B64 fdedff97 bl       #0x95358
00099B68 55dfff97 bl       #0x918bc
00099B6C c0feffb4 cbz      x0, #0x99b44
00099B70 3bdfff97 bl       #0x9185c
00099B74 60fe0736 tbz      w0, #0, #0x99b40
00099B78 e82744a9 ldp      x8, x9, [sp, #0x40]
00099B7C 2121169b madd     x1, x9, x22, x8
00099B80 e82b40f9 ldr      x8, [sp, #0x50]
00099B84 3f0108eb cmp      x9, x8
00099B88 c0040054 b.eq     #0x99c20
00099B8C 284f40f9 ldr      x8, [x25, #0x98]
00099B90 1f4100f1 cmp      x8, #0x10
00099B94 a0160054 b.eq     #0x99e68
00099B98 e90340f9 ldr      x9, [sp]
00099B9C 280f088b add      x8, x25, x8, lsl #3
00099BA0 090d00f9 str      x9, [x8, #0x18]
00099BA4 284f40f9 ldr      x8, [x25, #0x98]
00099BA8 08050091 add      x8, x8, #1
00099BAC 284f00f9 str      x8, [x25, #0x98]
00099BB0 a82640a9 ldp      x8, x9, [x21]
00099BB4 aa0a40f9 ldr      x10, [x21, #0x10]
00099BB8 ab1a40b9 ldr      w11, [x21, #0x18]
00099BBC 2b1800b9 str      w11, [x1, #0x18]
00099BC0 280000f9 str      x8, [x1]
00099BC4 29a800a9 stp      x9, x10, [x1, #8]
00099BC8 284f40f9 ldr      x8, [x25, #0x98]
00099BCC 080500d1 sub      x8, x8, #1
00099BD0 284f00f9 str      x8, [x25, #0x98]
00099BD4 e82740f9 ldr      x8, [sp, #0x48]
00099BD8 08050091 add      x8, x8, #1
00099BDC e82700f9 str      x8, [sp, #0x48]
00099BE0 e9234aa9 ldp      x9, x8, [sp, #0xa0]
00099BE4 a1720091 add      x1, x21, #0x1c
00099BE8 0925169b madd     x9, x8, x22, x9
00099BEC 3f0009eb cmp      x1, x9
00099BF0 a0000054 b.eq     #0x99c04
00099BF4 220101cb sub      x2, x9, x1
00099BF8 e00315aa mov      x0, x21
00099BFC 5d711594 bl       #0x5f6170
00099C00 e85740f9 ldr      x8, [sp, #0xa8]
00099C04 080500d1 sub      x8, x8, #1
00099C08 e85700f9 str      x8, [sp, #0xa8]
00099C0C e95340f9 ldr      x9, [sp, #0xa0]
00099C10 0925169b madd     x9, x8, x22, x9
00099C14 bf0209eb cmp      x21, x9
00099C18 e1f9ff54 b.ne     #0x99b54
00099C1C 0c000014 b        #0x99c4c
00099C20 a82300d1 sub      x8, x29, #8
00099C24 e0030091 mov      x0, sp
00099C28 22008052 mov      w2, #1
00099C2C e30315aa mov      x3, x21
00099C30 27040094 bl       #0x9accc
00099C34 e9234aa9 ldp      x9, x8, [sp, #0xa0]
00099C38 a1720091 add      x1, x21, #0x1c
00099C3C 0925169b madd     x9, x8, x22, x9
00099C40 3f0009eb cmp      x1, x9
00099C44 81fdff54 b.ne     #0x99bf4
00099C48 efffff17 b        #0x99c04
00099C4C a80800b4 cbz      x8, #0x99d60
00099C50 f55340f9 ldr      x21, [sp, #0xa0]
00099C54 99038052 mov      w25, #0x1c
00099C58 18cb7392 and      x24, x24, #0xffffffffffffe000
00099C5C b6720091 add      x22, x21, #0x1c
00099C60 05000014 b        #0x99c74
00099C64 e9234aa9 ldp      x9, x8, [sp, #0xa0]
00099C68 0925199b madd     x9, x8, x25, x9
00099C6C bf0209eb cmp      x21, x9
00099C70 80070054 b.eq     #0x99d60
00099C74 680240f9 ldr      x8, [x19]
00099C78 e10315aa mov      x1, x21
00099C7C 083140f9 ldr      x8, [x8, #0x60]
00099C80 008940f9 ldr      x0, [x8, #0x110]
00099C84 b5edff97 bl       #0x95358
00099C88 0ddfff97 bl       #0x918bc
00099C8C c0feffb4 cbz      x0, #0x99c64
00099C90 e9a344a9 ldp      x9, x8, [sp, #0x48]
00099C94 3f0108eb cmp      x9, x8
00099C98 ea2340f9 ldr      x10, [sp, #0x40]
00099C9C 2129199b madd     x1, x9, x25, x10
00099CA0 c0040054 b.eq     #0x99d38
00099CA4 084f40f9 ldr      x8, [x24, #0x98]
00099CA8 1f4100f1 cmp      x8, #0x10
00099CAC e00d0054 b.eq     #0x99e68
00099CB0 e90340f9 ldr      x9, [sp]
00099CB4 080f088b add      x8, x24, x8, lsl #3
00099CB8 090d00f9 str      x9, [x8, #0x18]
00099CBC 084f40f9 ldr      x8, [x24, #0x98]
00099CC0 08050091 add      x8, x8, #1
00099CC4 084f00f9 str      x8, [x24, #0x98]
00099CC8 a82640a9 ldp      x8, x9, [x21]
00099CCC aa0a40f9 ldr      x10, [x21, #0x10]
00099CD0 ab1a40b9 ldr      w11, [x21, #0x18]
00099CD4 2b1800b9 str      w11, [x1, #0x18]
00099CD8 280000f9 str      x8, [x1]
00099CDC 29a800a9 stp      x9, x10, [x1, #8]
00099CE0 084f40f9 ldr      x8, [x24, #0x98]
00099CE4 080500d1 sub      x8, x8, #1
00099CE8 084f00f9 str      x8, [x24, #0x98]
00099CEC e82740f9 ldr      x8, [sp, #0x48]
00099CF0 08050091 add      x8, x8, #1
00099CF4 e82700f9 str      x8, [sp, #0x48]
00099CF8 e9234aa9 ldp      x9, x8, [sp, #0xa0]
00099CFC 0925199b madd     x9, x8, x25, x9
00099D00 df0209eb cmp      x22, x9
00099D04 c0000054 b.eq     #0x99d1c
00099D08 220116cb sub      x2, x9, x22
00099D0C e00315aa mov      x0, x21
00099D10 e10316aa mov      x1, x22
00099D14 17711594 bl       #0x5f6170
00099D18 e85740f9 ldr      x8, [sp, #0xa8]
00099D1C 080500d1 sub      x8, x8, #1
00099D20 e85700f9 str      x8, [sp, #0xa8]
00099D24 e95340f9 ldr      x9, [sp, #0xa0]
00099D28 0925199b madd     x9, x8, x25, x9
00099D2C bf0209eb cmp      x21, x9
00099D30 21faff54 b.ne     #0x99c74
00099D34 0b000014 b        #0x99d60
00099D38 a82300d1 sub      x8, x29, #8
00099D3C e0030091 mov      x0, sp
00099D40 22008052 mov      w2, #1
00099D44 e30315aa mov      x3, x21
00099D48 e1030094 bl       #0x9accc
00099D4C e9234aa9 ldp      x9, x8, [sp, #0xa0]
00099D50 0925199b madd     x9, x8, x25, x9
00099D54 df0209eb cmp      x22, x9
00099D58 81fdff54 b.ne     #0x99d08
00099D5C f0ffff17 b        #0x99d1c
00099D60 880100b5 cbnz     x8, #0x99d90
00099D64 e82740f9 ldr      x8, [sp, #0x48]
00099D68 ff0208eb cmp      x23, x8
00099D6C 21010054 b.ne     #0x99d90
00099D70 680240f9 ldr      x8, [x19]
00099D74 083140f9 ldr      x8, [x8, #0x60]
00099D78 00c10291 add      x0, x8, #0xb0
00099D7C e8030091 mov      x8, sp
00099D80 1f0100eb cmp      x8, x0
00099D84 60000054 b.eq     #0x99d90
00099D88 e1030091 mov      x1, sp
00099D8C 9d020094 bl       #0x9a800
00099D90 e82b40f9 ldr      x8, [sp, #0x50]
00099D94 280100b4 cbz      x8, #0x99db8
00099D98 e00340f9 ldr      x0, [sp]
00099D9C 09e97bd3 lsl      x9, x8, #5
00099DA0 83008052 mov      w3, #4
00099DA4 220908cb sub      x2, x9, x8, lsl #2
00099DA8 e12340f9 ldr      x1, [sp, #0x40]
00099DAC 080040f9 ldr      x8, [x0]
00099DB0 080d40f9 ldr      x8, [x8, #0x18]
00099DB4 00013fd6 blr      x8
00099DB8 e81b40f9 ldr      x8, [sp, #0x30]
00099DBC 1f0114eb cmp      x8, x20
00099DC0 c0000054 b.eq     #0x99dd8
00099DC4 480100b4 cbz      x8, #0x99dec
00099DC8 090140f9 ldr      x9, [x8]
00099DCC f40308aa mov      x20, x8
00099DD0 29a10091 add      x9, x9, #0x28
00099DD4 03000014 b        #0x99de0
00099DD8 e80b40f9 ldr      x8, [sp, #0x10]
00099DDC 09810091 add      x9, x8, #0x20
00099DE0 280140f9 ldr      x8, [x9]
00099DE4 e00314aa mov      x0, x20
00099DE8 00013fd6 blr      x8
00099DEC e85b40f9 ldr      x8, [sp, #0xb0]
00099DF0 280100b4 cbz      x8, #0x99e14
00099DF4 e03340f9 ldr      x0, [sp, #0x60]
00099DF8 09e97bd3 lsl      x9, x8, #5
00099DFC 83008052 mov      w3, #4
00099E00 220908cb sub      x2, x9, x8, lsl #2
00099E04 e15340f9 ldr      x1, [sp, #0xa0]
00099E08 080040f9 ldr      x8, [x0]
00099E0C 080d40f9 ldr      x8, [x8, #0x18]
00099E10 00013fd6 blr      x8
00099E14 e04b40f9 ldr      x0, [sp, #0x90]
00099E18 e8830191 add      x8, sp, #0x60
00099E1C 09410091 add      x9, x8, #0x10
00099E20 1f0009eb cmp      x0, x9
00099E24 a0000054 b.eq     #0x99e38
00099E28 200100b4 cbz      x0, #0x99e4c
00099E2C 080040f9 ldr      x8, [x0]
00099E30 08a10091 add      x8, x8, #0x28
00099E34 04000014 b        #0x99e44
00099E38 e83b40f9 ldr      x8, [sp, #0x70]
00099E3C e00309aa mov      x0, x9
00099E40 08810091 add      x8, x8, #0x20
00099E44 080140f9 ldr      x8, [x8]
00099E48 00013fd6 blr      x8
00099E4C f44f51a9 ldp      x20, x19, [sp, #0x110]
00099E50 f65750a9 ldp      x22, x21, [sp, #0x100]
00099E54 f85f4fa9 ldp      x24, x23, [sp, #0xf0]
00099E58 fc674ea9 ldp      x28, x25, [sp, #0xe0]
00099E5C fd7b4da9 ldp      x29, x30, [sp, #0xd0]
00099E60 ff830491 add      sp, sp, #0x120
00099E64 c0035fd6 ret      
00099E68 6aa3fd97 bl       #0x2c10
00099E6C e1701594 bl       #0x5f61f0
00099E70 21e4ffb5 cbnz     x1, #0x99af4
00099E74 28ffff17 b        #0x99b14
~~~
### 0x99e78 (87 slots)
~~~asm
00099E78 ff0303d1 sub      sp, sp, #0xc0
00099E7C fd7b09a9 stp      x29, x30, [sp, #0x90]
00099E80 f55300f9 str      x21, [sp, #0xa0]
00099E84 f44f0ba9 stp      x20, x19, [sp, #0xb0]
00099E88 fd430291 add      x29, sp, #0x90
00099E8C f30301aa mov      x19, x1
00099E90 f40300aa mov      x20, x0
00099E94 a2730039 strb     w2, [x29, #0x1c]
00099E98 63020036 tbz      w3, #0, #0x99ee4
00099E9C 950240f9 ldr      x21, [x20]
00099EA0 b5831ff8 stur     x21, [x29, #-8]
00099EA4 b50100b4 cbz      x21, #0x99ed8
00099EA8 a88e44f8 ldr      x8, [x21, #0x48]!
00099EAC e00315aa mov      x0, x21
00099EB0 080940f9 ldr      x8, [x8, #0x10]
00099EB4 00013fd6 blr      x8
00099EB8 a02300d1 sub      x0, x29, #8
00099EBC e10313aa mov      x1, x19
00099EC0 60f4ff97 bl       #0x97040
00099EC4 a80240f9 ldr      x8, [x21]
00099EC8 e00315aa mov      x0, x21
00099ECC 080d40f9 ldr      x8, [x8, #0x18]
00099ED0 00013fd6 blr      x8
00099ED4 04000014 b        #0x99ee4
00099ED8 a02300d1 sub      x0, x29, #8
00099EDC e10313aa mov      x1, x19
00099EE0 58f4ff97 bl       #0x97040
00099EE4 940240f9 ldr      x20, [x20]
00099EE8 a8730091 add      x8, x29, #0x1c
00099EEC 1f2003d5 nop      
00099EF0 e97e0010 adr      x9, #0x9aecc
00099EF4 f32302a9 stp      x19, x8, [sp, #0x20]
00099EF8 1f2003d5 nop      
00099EFC e8830010 adr      x8, #0x9af78
00099F00 1f2003d5 nop      
00099F04 ca830010 adr      x10, #0x9af7c
00099F08 e92300a9 stp      x9, x8, [sp]
00099F0C 1f2003d5 nop      
00099F10 c8830010 adr      x8, #0x9af88
00099F14 ea2301a9 stp      x10, x8, [sp, #0x10]
00099F18 b40400b4 cbz      x20, #0x99fac
00099F1C 888e44f8 ldr      x8, [x20, #0x48]!
00099F20 e00314aa mov      x0, x20
00099F24 080940f9 ldr      x8, [x8, #0x10]
00099F28 00013fd6 blr      x8
00099F2C 600240f9 ldr      x0, [x19]
00099F30 10060094 bl       #0x9b770
00099F34 880240f9 ldr      x8, [x20]
00099F38 f503002a mov      w21, w0
00099F3C e00314aa mov      x0, x20
00099F40 080940f9 ldr      x8, [x8, #0x10]
00099F44 00013fd6 blr      x8
00099F48 a4060051 sub      w4, w21, #1
00099F4C e2030091 mov      x2, sp
00099F50 e10313aa mov      x1, x19
00099F54 e3031f2a mov      w3, wzr
00099F58 e6000094 bl       #0x9a2f0
00099F5C 880240f9 ldr      x8, [x20]
00099F60 e00314aa mov      x0, x20
00099F64 080d40f9 ldr      x8, [x8, #0x18]
00099F68 00013fd6 blr      x8
00099F6C 880240f9 ldr      x8, [x20]
00099F70 e00314aa mov      x0, x20
00099F74 080d40f9 ldr      x8, [x8, #0x18]
00099F78 00013fd6 blr      x8
00099F7C e80740f9 ldr      x8, [sp, #8]
00099F80 c80000b4 cbz      x8, #0x99f98
00099F84 e9030091 mov      x9, sp
00099F88 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00099F8C 20810091 add      x0, x9, #0x20
00099F90 ff7f00a9 stp      xzr, xzr, [sp]
00099F94 00013fd6 blr      x8
00099F98 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
00099F9C f55340f9 ldr      x21, [sp, #0xa0]
00099FA0 fd7b49a9 ldp      x29, x30, [sp, #0x90]
00099FA4 ff030391 add      sp, sp, #0xc0
00099FA8 c0035fd6 ret      
00099FAC 600240f9 ldr      x0, [x19]
00099FB0 f0050094 bl       #0x9b770
00099FB4 04040051 sub      w4, w0, #1
00099FB8 e2030091 mov      x2, sp
00099FBC e10313aa mov      x1, x19
00099FC0 e3031f2a mov      w3, wzr
00099FC4 cb000094 bl       #0x9a2f0
00099FC8 e80740f9 ldr      x8, [sp, #8]
00099FCC c8fdffb5 cbnz     x8, #0x99f84
00099FD0 f2ffff17 b        #0x99f98
~~~
### 0x99fd4 (90 slots)
~~~asm
00099FD4 ff0303d1 sub      sp, sp, #0xc0
00099FD8 fd7b09a9 stp      x29, x30, [sp, #0x90]
00099FDC f55300f9 str      x21, [sp, #0xa0]
00099FE0 f44f0ba9 stp      x20, x19, [sp, #0xb0]
00099FE4 fd430291 add      x29, sp, #0x90
00099FE8 f30301aa mov      x19, x1
00099FEC f40300aa mov      x20, x0
00099FF0 a2730039 strb     w2, [x29, #0x1c]
00099FF4 a41b00b9 str      w4, [x29, #0x18]
00099FF8 63020036 tbz      w3, #0, #0x9a044
00099FFC 950240f9 ldr      x21, [x20]
0009A000 b5831ff8 stur     x21, [x29, #-8]
0009A004 b50100b4 cbz      x21, #0x9a038
0009A008 a88e44f8 ldr      x8, [x21, #0x48]!
0009A00C e00315aa mov      x0, x21
0009A010 080940f9 ldr      x8, [x8, #0x10]
0009A014 00013fd6 blr      x8
0009A018 a02300d1 sub      x0, x29, #8
0009A01C e10313aa mov      x1, x19
0009A020 08f4ff97 bl       #0x97040
0009A024 a80240f9 ldr      x8, [x21]
0009A028 e00315aa mov      x0, x21
0009A02C 080d40f9 ldr      x8, [x8, #0x18]
0009A030 00013fd6 blr      x8
0009A034 04000014 b        #0x9a044
0009A038 a02300d1 sub      x0, x29, #8
0009A03C e10313aa mov      x1, x19
0009A040 00f4ff97 bl       #0x97040
0009A044 940240f9 ldr      x20, [x20]
0009A048 a8730091 add      x8, x29, #0x1c
0009A04C a9630091 add      x9, x29, #0x18
0009A050 f32302a9 stp      x19, x8, [sp, #0x20]
0009A054 1f2003d5 nop      
0009A058 28a10010 adr      x8, #0x9b47c
0009A05C e91b00f9 str      x9, [sp, #0x30]
0009A060 1f2003d5 nop      
0009A064 69aa0010 adr      x9, #0x9b5b0
0009A068 1f2003d5 nop      
0009A06C 4aaa0010 adr      x10, #0x9b5b4
0009A070 e82700a9 stp      x8, x9, [sp]
0009A074 1f2003d5 nop      
0009A078 88aa0010 adr      x8, #0x9b5c8
0009A07C ea2301a9 stp      x10, x8, [sp, #0x10]
0009A080 b40400b4 cbz      x20, #0x9a114
0009A084 888e44f8 ldr      x8, [x20, #0x48]!
0009A088 e00314aa mov      x0, x20
0009A08C 080940f9 ldr      x8, [x8, #0x10]
0009A090 00013fd6 blr      x8
0009A094 600240f9 ldr      x0, [x19]
0009A098 b6050094 bl       #0x9b770
0009A09C 880240f9 ldr      x8, [x20]
0009A0A0 f503002a mov      w21, w0
0009A0A4 e00314aa mov      x0, x20
0009A0A8 080940f9 ldr      x8, [x8, #0x10]
0009A0AC 00013fd6 blr      x8
0009A0B0 a4060051 sub      w4, w21, #1
0009A0B4 e2030091 mov      x2, sp
0009A0B8 e10313aa mov      x1, x19
0009A0BC e3031f2a mov      w3, wzr
0009A0C0 8c000094 bl       #0x9a2f0
0009A0C4 880240f9 ldr      x8, [x20]
0009A0C8 e00314aa mov      x0, x20
0009A0CC 080d40f9 ldr      x8, [x8, #0x18]
0009A0D0 00013fd6 blr      x8
0009A0D4 880240f9 ldr      x8, [x20]
0009A0D8 e00314aa mov      x0, x20
0009A0DC 080d40f9 ldr      x8, [x8, #0x18]
0009A0E0 00013fd6 blr      x8
0009A0E4 e80740f9 ldr      x8, [sp, #8]
0009A0E8 c80000b4 cbz      x8, #0x9a100
0009A0EC e9030091 mov      x9, sp
0009A0F0 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
0009A0F4 20810091 add      x0, x9, #0x20
0009A0F8 ff7f00a9 stp      xzr, xzr, [sp]
0009A0FC 00013fd6 blr      x8
0009A100 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
0009A104 f55340f9 ldr      x21, [sp, #0xa0]
0009A108 fd7b49a9 ldp      x29, x30, [sp, #0x90]
0009A10C ff030391 add      sp, sp, #0xc0
0009A110 c0035fd6 ret      
0009A114 600240f9 ldr      x0, [x19]
0009A118 96050094 bl       #0x9b770
0009A11C 04040051 sub      w4, w0, #1
0009A120 e2030091 mov      x2, sp
0009A124 e10313aa mov      x1, x19
0009A128 e3031f2a mov      w3, wzr
0009A12C 71000094 bl       #0x9a2f0
0009A130 e80740f9 ldr      x8, [sp, #8]
0009A134 c8fdffb5 cbnz     x8, #0x9a0ec
0009A138 f2ffff17 b        #0x9a100
~~~
### 0x9a14c (6 slots)
~~~asm
0009A14C 090040f9 ldr      x9, [x0]
0009A150 e80301aa mov      x8, x1
0009A154 e00308aa mov      x0, x8
0009A158 293140f9 ldr      x9, [x9, #0x60]
0009A15C 21210091 add      x1, x9, #8
0009A160 bb080014 b        #0x9c44c
~~~
### 0x9accc (128 slots)
~~~asm
0009ACCC ffc301d1 sub      sp, sp, #0x70
0009ACD0 fd7b01a9 stp      x29, x30, [sp, #0x10]
0009ACD4 fc6f02a9 stp      x28, x27, [sp, #0x20]
0009ACD8 fa6703a9 stp      x26, x25, [sp, #0x30]
0009ACDC f85f04a9 stp      x24, x23, [sp, #0x40]
0009ACE0 f65705a9 stp      x22, x21, [sp, #0x50]
0009ACE4 f44f06a9 stp      x20, x19, [sp, #0x60]
0009ACE8 fd430091 add      x29, sp, #0x10
0009ACEC 09a844a9 ldp      x9, x10, [x0, #0x48]
0009ACF0 fa0308aa mov      x26, x8
0009ACF4 080440f9 ldr      x8, [x0, #8]
0009ACF8 4c000acb sub      x12, x2, x10
0009ACFC 0b010acb sub      x11, x8, x10
0009AD00 8c01098b add      x12, x12, x9
0009AD04 7f010ceb cmp      x11, x12
0009AD08 e30d0054 b.lo     #0x9aec4
0009AD0C 4bfd7dd3 lsr      x11, x10, #0x3d
0009AD10 ede702b2 mov      x13, #-0x3333333333333334
0009AD14 4af17dd3 lsl      x10, x10, #3
0009AD18 7f1100f1 cmp      x11, #4
0009AD1C ad9999f2 movk     x13, #0xcccd
0009AD20 2901028b add      x9, x9, x2
0009AD24 4c919fda csinv    x12, x10, xzr, ls
0009AD28 4a7dcd9b umulh    x10, x10, x13
0009AD2C 7f0100f1 cmp      x11, #0
0009AD30 f30302aa mov      x19, x2
0009AD34 4afd42d3 lsr      x10, x10, #2
0009AD38 8a118a9a csel     x10, x12, x10, ne
0009AD3C 5f0108eb cmp      x10, x8
0009AD40 4a31889a csel     x10, x10, x8, lo
0009AD44 3f010aeb cmp      x9, x10
0009AD48 35818a9a csel     x21, x9, x10, hi
0009AD4C 1f0115eb cmp      x8, x21
0009AD50 a30b0054 b.lo     #0x9aec4
0009AD54 f40300aa mov      x20, x0
0009AD58 1c2040f9 ldr      x28, [x0, #0x40]
0009AD5C a8ea7bd3 lsl      x8, x21, #5
0009AD60 000040f9 ldr      x0, [x0]
0009AD64 f60301aa mov      x22, x1
0009AD68 010915cb sub      x1, x8, x21, lsl #2
0009AD6C 82008052 mov      w2, #4
0009AD70 fb0303aa mov      x27, x3
0009AD74 080040f9 ldr      x8, [x0]
0009AD78 080940f9 ldr      x8, [x8, #0x10]
0009AD7C 00013fd6 blr      x8
0009AD80 993a44a9 ldp      x25, x14, [x20, #0x40]
0009AD84 f70300aa mov      x23, x0
0009AD88 e80300aa mov      x8, x0
0009AD8C f90200b4 cbz      x25, #0x9ade8
0009AD90 ff0200f1 cmp      x23, #0
0009AD94 e80317aa mov      x8, x23
0009AD98 241356fa ccmp     x25, x22, #4, ne
0009AD9C 60020054 b.eq     #0x9ade8
0009ADA0 f30700f9 str      x19, [sp, #8]
0009ADA4 f3031caa mov      x19, x28
0009ADA8 fc031aaa mov      x28, x26
0009ADAC da0219cb sub      x26, x22, x25
0009ADB0 e00317aa mov      x0, x23
0009ADB4 e10319aa mov      x1, x25
0009ADB8 e2031aaa mov      x2, x26
0009ADBC f80316aa mov      x24, x22
0009ADC0 f60315aa mov      x22, x21
0009ADC4 f5030eaa mov      x21, x14
0009ADC8 ea6c1594 bl       #0x5f6170
0009ADCC e8021a8b add      x8, x23, x26
0009ADD0 fa031caa mov      x26, x28
0009ADD4 fc0313aa mov      x28, x19
0009ADD8 f30740f9 ldr      x19, [sp, #8]
0009ADDC ee0315aa mov      x14, x21
0009ADE0 f50316aa mov      x21, x22
0009ADE4 f60318aa mov      x22, x24
0009ADE8 49d03bd5 mrs      x9, tpidr_el0
0009ADEC 29c97392 and      x9, x9, #0xffffffffffffe000
0009ADF0 2a4d40f9 ldr      x10, [x9, #0x98]
0009ADF4 5f4100f1 cmp      x10, #0x10
0009ADF8 80060054 b.eq     #0x9aec8
0009ADFC 8b0240f9 ldr      x11, [x20]
0009AE00 2a0d0a8b add      x10, x9, x10, lsl #3
0009AE04 4b0d00f9 str      x11, [x10, #0x18]
0009AE08 2a4d40f9 ldr      x10, [x9, #0x98]
0009AE0C 4a050091 add      x10, x10, #1
0009AE10 2a4d00f9 str      x10, [x9, #0x98]
0009AE14 6a2f40a9 ldp      x10, x11, [x27]
0009AE18 6c0b40f9 ldr      x12, [x27, #0x10]
0009AE1C 6d1b40b9 ldr      w13, [x27, #0x18]
0009AE20 0d1900b9 str      w13, [x8, #0x18]
0009AE24 0a0100f9 str      x10, [x8]
0009AE28 0bb100a9 stp      x11, x12, [x8, #8]
0009AE2C 2a4d40f9 ldr      x10, [x9, #0x98]
0009AE30 4a0500d1 sub      x10, x10, #1
0009AE34 2a4d00f9 str      x10, [x9, #0x98]
0009AE38 560100b4 cbz      x22, #0x9ae60
0009AE3C 89038052 mov      w9, #0x1c
0009AE40 c965099b madd     x9, x14, x9, x25
0009AE44 220116eb subs     x2, x9, x22
0009AE48 c0000054 b.eq     #0x9ae60
0009AE4C a80000b4 cbz      x8, #0x9ae60
0009AE50 89038052 mov      w9, #0x1c
0009AE54 e10316aa mov      x1, x22
0009AE58 6022099b madd     x0, x19, x9, x8
0009AE5C c56c1594 bl       #0x5f6170
0009AE60 590100b4 cbz      x25, #0x9ae88
0009AE64 882a40f9 ldr      x8, [x20, #0x50]
0009AE68 83008052 mov      w3, #4
0009AE6C 09e97bd3 lsl      x9, x8, #5
0009AE70 800240f9 ldr      x0, [x20]
0009AE74 812240f9 ldr      x1, [x20, #0x40]
0009AE78 220908cb sub      x2, x9, x8, lsl #2
0009AE7C 080040f9 ldr      x8, [x0]
0009AE80 080d40f9 ldr      x8, [x8, #0x18]
0009AE84 00013fd6 blr      x8
0009AE88 882640f9 ldr      x8, [x20, #0x48]
0009AE8C c9021ccb sub      x9, x22, x28
0009AE90 952a00f9 str      x21, [x20, #0x50]
0009AE94 f65745a9 ldp      x22, x21, [sp, #0x50]
0009AE98 0801138b add      x8, x8, x19
0009AE9C fc6f42a9 ldp      x28, x27, [sp, #0x20]
0009AEA0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0009AEA4 972204a9 stp      x23, x8, [x20, #0x40]
0009AEA8 e802098b add      x8, x23, x9
0009AEAC f44f46a9 ldp      x20, x19, [sp, #0x60]
0009AEB0 480300f9 str      x8, [x26]
0009AEB4 f85f44a9 ldp      x24, x23, [sp, #0x40]
0009AEB8 fa6743a9 ldp      x26, x25, [sp, #0x30]
0009AEBC ffc30191 add      sp, sp, #0x70
0009AEC0 c0035fd6 ret      
0009AEC4 cb6c1594 bl       #0x5f61f0
0009AEC8 529ffd97 bl       #0x2c10
~~~
### 0x9bb38 (3 slots)
~~~asm
0009BB38 083040f9 ldr      x8, [x0, #0x60]
0009BB3C 006d40b9 ldr      w0, [x8, #0x6c]
0009BB40 c0035fd6 ret      
~~~
### 0x9bb44 (9 slots)
~~~asm
0009BB44 083040f9 ldr      x8, [x0, #0x60]
0009BB48 09f940b9 ldr      w9, [x8, #0xf8]
0009BB4C 89000034 cbz      w9, #0x9bb5c
0009BB50 3f01016b cmp      w9, w1
0009BB54 68000054 b.hi     #0x9bb60
0009BB58 c0035fd6 ret      
0009BB5C e1031f2a mov      w1, wzr
0009BB60 016d00b9 str      w1, [x8, #0x6c]
0009BB64 c0035fd6 ret      
~~~
### 0x9bd54 (72 slots)
~~~asm
0009BD54 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0009BD58 f70b00f9 str      x23, [sp, #0x10]
0009BD5C f65702a9 stp      x22, x21, [sp, #0x20]
0009BD60 f44f03a9 stp      x20, x19, [sp, #0x30]
0009BD64 fd030091 mov      x29, sp
0009BD68 283800b0 adrp     x8, #0x7a0000
0009BD6C f30300aa mov      x19, x0
0009BD70 085143f9 ldr      x8, [x8, #0x6a0]
0009BD74 f40300aa mov      x20, x0
0009BD78 f603022a mov      w22, w2
0009BD7C f50301aa mov      x21, x1
0009BD80 08410091 add      x8, x8, #0x10
0009BD84 688600f8 str      x8, [x19], #8
0009BD88 e00313aa mov      x0, x19
0009BD8C 74010094 bl       #0x9c35c
0009BD90 f70314aa mov      x23, x20
0009BD94 882489d2 mov      x8, #0x4924
0009BD98 4892a4f2 movk     x8, #0x2492, lsl #16
0009BD9C ff0e0ff8 str      xzr, [x23, #0xf0]!
0009BDA0 2849d2f2 movk     x8, #0x9249, lsl #32
0009BDA4 8824e1f2 movk     x8, #0x924, lsl #48
0009BDA8 ffc217b8 stur     wzr, [x23, #-0x84]
0009BDAC f52238a9 stp      x21, x8, [x23, #-0x80]
0009BDB0 ff021bf8 stur     xzr, [x23, #-0x50]
0009BDB4 ff021ff8 stur     xzr, [x23, #-0x10]
0009BDB8 f5223ca9 stp      x21, x8, [x23, #-0x40]
0009BDBC fffe00a9 stp      xzr, xzr, [x23, #8]
0009BDC0 d6030034 cbz      w22, #0x9be38
0009BDC4 f603162a mov      w22, w22
0009BDC8 e00315aa mov      x0, x21
0009BDCC 82008052 mov      w2, #4
0009BDD0 c8ea7bd3 lsl      x8, x22, #5
0009BDD4 010916cb sub      x1, x8, x22, lsl #2
0009BDD8 a80240f9 ldr      x8, [x21]
0009BDDC 080940f9 ldr      x8, [x8, #0x10]
0009BDE0 00013fd6 blr      x8
0009BDE4 817a40f9 ldr      x1, [x20, #0xf0]
0009BDE8 f50300aa mov      x21, x0
0009BDEC 010400b4 cbz      x1, #0x9be6c
0009BDF0 f50300b4 cbz      x21, #0x9be6c
0009BDF4 887e40f9 ldr      x8, [x20, #0xf8]
0009BDF8 a80300b4 cbz      x8, #0x9be6c
0009BDFC 09e97bd3 lsl      x9, x8, #5
0009BE00 e00315aa mov      x0, x21
0009BE04 220908cb sub      x2, x9, x8, lsl #2
0009BE08 da681594 bl       #0x5f6170
0009BE0C e10240f9 ldr      x1, [x23]
0009BE10 888240f9 ldr      x8, [x20, #0x100]
0009BE14 83008052 mov      w3, #4
0009BE18 09e97bd3 lsl      x9, x8, #5
0009BE1C 805a40f9 ldr      x0, [x20, #0xb0]
0009BE20 220908cb sub      x2, x9, x8, lsl #2
0009BE24 080040f9 ldr      x8, [x0]
0009BE28 080d40f9 ldr      x8, [x8, #0x18]
0009BE2C 00013fd6 blr      x8
0009BE30 957a00f9 str      x21, [x20, #0xf0]
0009BE34 968200f9 str      x22, [x20, #0x100]
0009BE38 80a20491 add      x0, x20, #0x128
0009BE3C 02939e52 mov      w2, #0xf498
0009BE40 6200a072 movk     w2, #3, lsl #16
0009BE44 e1031f2a mov      w1, wzr
0009BE48 9f820439 strb     wzr, [x20, #0x120]
0009BE4C 9f7e11a9 stp      xzr, xzr, [x20, #0x110]
0009BE50 c0681594 bl       #0x5f6150
0009BE54 e00313aa mov      x0, x19
0009BE58 f44f43a9 ldp      x20, x19, [sp, #0x30]
0009BE5C f65742a9 ldp      x22, x21, [sp, #0x20]
0009BE60 f70b40f9 ldr      x23, [sp, #0x10]
0009BE64 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0009BE68 5f010014 b        #0x9c3e4
0009BE6C 21fdffb5 cbnz     x1, #0x9be10
0009BE70 f0ffff17 b        #0x9be30
~~~
### 0x9c3e4 (26 slots)
~~~asm
0009C3E4 482c00b0 adrp     x8, #0x625000
0009C3E8 08e12f91 add      x8, x8, #0xbf8
0009C3EC 1f0000b9 str      wzr, [x0]
0009C3F0 090140f9 ldr      x9, [x8]
0009C3F4 094000f8 stur     x9, [x0, #4]
0009C3F8 09294229 ldp      w9, w10, [x8, #0x10]
0009C3FC 09a80229 stp      w9, w10, [x0, #0x14]
0009C400 090540f9 ldr      x9, [x8, #8]
0009C404 09c000f8 stur     x9, [x0, #0xc]
0009C408 090d40f9 ldr      x9, [x8, #0x18]
0009C40C 09c001f8 stur     x9, [x0, #0x1c]
0009C410 091140f9 ldr      x9, [x8, #0x20]
0009C414 094002f8 stur     x9, [x0, #0x24]
0009C418 091540f9 ldr      x9, [x8, #0x28]
0009C41C 09c002f8 stur     x9, [x0, #0x2c]
0009C420 091940f9 ldr      x9, [x8, #0x30]
0009C424 094003f8 stur     x9, [x0, #0x34]
0009C428 09008092 mov      x9, #-1
0009C42C 09c004f8 stur     x9, [x0, #0x4c]
0009C430 094005f8 stur     x9, [x0, #0x54]
0009C434 09c005f8 stur     x9, [x0, #0x5c]
0009C438 091d40f9 ldr      x9, [x8, #0x38]
0009C43C 09c003f8 stur     x9, [x0, #0x3c]
0009C440 09214829 ldp      w9, w8, [x8, #0x40]
0009C444 09a00829 stp      w9, w8, [x0, #0x44]
0009C448 c0035fd6 ret      
~~~
### 0x9c44c (51 slots)
~~~asm
0009C44C 280040b9 ldr      w8, [x1]
0009C450 080000b9 str      w8, [x0]
0009C454 280440b9 ldr      w8, [x1, #4]
0009C458 080400b9 str      w8, [x0, #4]
0009C45C 280840b9 ldr      w8, [x1, #8]
0009C460 080800b9 str      w8, [x0, #8]
0009C464 280c40b9 ldr      w8, [x1, #0xc]
0009C468 080c00b9 str      w8, [x0, #0xc]
0009C46C 281040b9 ldr      w8, [x1, #0x10]
0009C470 081000b9 str      w8, [x0, #0x10]
0009C474 281440b9 ldr      w8, [x1, #0x14]
0009C478 081400b9 str      w8, [x0, #0x14]
0009C47C 281840b9 ldr      w8, [x1, #0x18]
0009C480 081800b9 str      w8, [x0, #0x18]
0009C484 281c40b9 ldr      w8, [x1, #0x1c]
0009C488 081c00b9 str      w8, [x0, #0x1c]
0009C48C 282040b9 ldr      w8, [x1, #0x20]
0009C490 082000b9 str      w8, [x0, #0x20]
0009C494 282440b9 ldr      w8, [x1, #0x24]
0009C498 082400b9 str      w8, [x0, #0x24]
0009C49C 282840b9 ldr      w8, [x1, #0x28]
0009C4A0 082800b9 str      w8, [x0, #0x28]
0009C4A4 282c40b9 ldr      w8, [x1, #0x2c]
0009C4A8 082c00b9 str      w8, [x0, #0x2c]
0009C4AC 283040b9 ldr      w8, [x1, #0x30]
0009C4B0 083000b9 str      w8, [x0, #0x30]
0009C4B4 283440b9 ldr      w8, [x1, #0x34]
0009C4B8 083400b9 str      w8, [x0, #0x34]
0009C4BC 283840b9 ldr      w8, [x1, #0x38]
0009C4C0 083800b9 str      w8, [x0, #0x38]
0009C4C4 283c40b9 ldr      w8, [x1, #0x3c]
0009C4C8 083c00b9 str      w8, [x0, #0x3c]
0009C4CC 284040b9 ldr      w8, [x1, #0x40]
0009C4D0 084000b9 str      w8, [x0, #0x40]
0009C4D4 284440b9 ldr      w8, [x1, #0x44]
0009C4D8 084400b9 str      w8, [x0, #0x44]
0009C4DC 284840b9 ldr      w8, [x1, #0x48]
0009C4E0 084800b9 str      w8, [x0, #0x48]
0009C4E4 284c40b9 ldr      w8, [x1, #0x4c]
0009C4E8 084c00b9 str      w8, [x0, #0x4c]
0009C4EC 285040b9 ldr      w8, [x1, #0x50]
0009C4F0 085000b9 str      w8, [x0, #0x50]
0009C4F4 285440b9 ldr      w8, [x1, #0x54]
0009C4F8 085400b9 str      w8, [x0, #0x54]
0009C4FC 285840b9 ldr      w8, [x1, #0x58]
0009C500 085800b9 str      w8, [x0, #0x58]
0009C504 285c40b9 ldr      w8, [x1, #0x5c]
0009C508 085c00b9 str      w8, [x0, #0x5c]
0009C50C 286040b9 ldr      w8, [x1, #0x60]
0009C510 086000b9 str      w8, [x0, #0x60]
0009C514 c0035fd6 ret      
~~~
### 0x9c824 (141 slots)
~~~asm
0009C824 ff0303d1 sub      sp, sp, #0xc0
0009C828 fd7b08a9 stp      x29, x30, [sp, #0x80]
0009C82C f74b00f9 str      x23, [sp, #0x90]
0009C830 f6570aa9 stp      x22, x21, [sp, #0xa0]
0009C834 f44f0ba9 stp      x20, x19, [sp, #0xb0]
0009C838 fd030291 add      x29, sp, #0x80
0009C83C 13601191 add      x19, x0, #0x458
0009C840 f40300aa mov      x20, x0
0009C844 e00313aa mov      x0, x19
0009C848 82671594 bl       #0x5f6650
0009C84C 88525139 ldrb     w8, [x20, #0x454]
0009C850 e80e0034 cbz      w8, #0x9ca2c
0009C854 881e42f9 ldr      x8, [x20, #0x438]
0009C858 e00313aa mov      x0, x19
0009C85C 96220e91 add      x22, x20, #0x388
0009C860 97565139 ldrb     w23, [x20, #0x455]
0009C864 9faa0879 strh     wzr, [x20, #0x454]
0009C868 88ea01f9 str      x8, [x20, #0x3d0]
0009C86C 882242f9 ldr      x8, [x20, #0x440]
0009C870 88ee01f9 str      x8, [x20, #0x3d8]
0009C874 882642f9 ldr      x8, [x20, #0x448]
0009C878 88f201f9 str      x8, [x20, #0x3e0]
0009C87C 885244b9 ldr      w8, [x20, #0x450]
0009C880 88ea03b9 str      w8, [x20, #0x3e8]
0009C884 880e42f9 ldr      x8, [x20, #0x418]
0009C888 88da01f9 str      x8, [x20, #0x3b0]
0009C88C 881242f9 ldr      x8, [x20, #0x420]
0009C890 88de01f9 str      x8, [x20, #0x3b8]
0009C894 881642f9 ldr      x8, [x20, #0x428]
0009C898 88e201f9 str      x8, [x20, #0x3c0]
0009C89C 881a42f9 ldr      x8, [x20, #0x430]
0009C8A0 88e601f9 str      x8, [x20, #0x3c8]
0009C8A4 88fe41f9 ldr      x8, [x20, #0x3f8]
0009C8A8 88ca01f9 str      x8, [x20, #0x390]
0009C8AC 880242f9 ldr      x8, [x20, #0x400]
0009C8B0 88ce01f9 str      x8, [x20, #0x398]
0009C8B4 880642f9 ldr      x8, [x20, #0x408]
0009C8B8 88d201f9 str      x8, [x20, #0x3a0]
0009C8BC 880a42f9 ldr      x8, [x20, #0x410]
0009C8C0 88d601f9 str      x8, [x20, #0x3a8]
0009C8C4 88fa41f9 ldr      x8, [x20, #0x3f0]
0009C8C8 88c601f9 str      x8, [x20, #0x388]
0009C8CC 28008052 mov      w8, #1
0009C8D0 88b20f39 strb     w8, [x20, #0x3ec]
0009C8D4 63671594 bl       #0x5f6660
0009C8D8 e0730091 add      x0, sp, #0x1c
0009C8DC a0feff97 bl       #0x9c35c
0009C8E0 95e20d91 add      x21, x20, #0x378
0009C8E4 e1730091 add      x1, sp, #0x1c
0009C8E8 e00315aa mov      x0, x21
0009C8EC 18f6ff97 bl       #0x9a14c
0009C8F0 b7000035 cbnz     w23, #0x9c904
0009C8F4 e81f40b9 ldr      w8, [sp, #0x1c]
0009C8F8 c90240b9 ldr      w9, [x22]
0009C8FC 1f01096b cmp      w8, w9
0009C900 a0020054 b.eq     #0x9c954
0009C904 80ba41f9 ldr      x0, [x20, #0x370]
0009C908 a00f00f9 str      x0, [x29, #0x18]
0009C90C 800000b4 cbz      x0, #0x9c91c
0009C910 088c44f8 ldr      x8, [x0, #0x48]!
0009C914 080940f9 ldr      x8, [x8, #0x10]
0009C918 00013fd6 blr      x8
0009C91C c20240b9 ldr      w2, [x22]
0009C920 a0630091 add      x0, x29, #0x18
0009C924 e10315aa mov      x1, x21
0009C928 23008052 mov      w3, #1
0009C92C 8ef0ff97 bl       #0x98b64
0009C930 a00f40f9 ldr      x0, [x29, #0x18]
0009C934 a00000b4 cbz      x0, #0x9c948
0009C938 088c44f8 ldr      x8, [x0, #0x48]!
0009C93C 080d40f9 ldr      x8, [x8, #0x18]
0009C940 00013fd6 blr      x8
0009C944 bf0f00f9 str      xzr, [x29, #0x18]
0009C948 c10240b9 ldr      w1, [x22]
0009C94C e00315aa mov      x0, x21
0009C950 fbf5ff97 bl       #0x9a13c
0009C954 e8730091 add      x8, sp, #0x1c
0009C958 96320e91 add      x22, x20, #0x38c
0009C95C 00110091 add      x0, x8, #4
0009C960 e10316aa mov      x1, x22
0009C964 1dfeff97 bl       #0x9c1d8
0009C968 00020036 tbz      w0, #0, #0x9c9a8
0009C96C a00240f9 ldr      x0, [x21]
0009C970 e00700f9 str      x0, [sp, #8]
0009C974 800000b4 cbz      x0, #0x9c984
0009C978 088c44f8 ldr      x8, [x0, #0x48]!
0009C97C 080940f9 ldr      x8, [x8, #0x10]
0009C980 00013fd6 blr      x8
0009C984 81020e91 add      x1, x20, #0x380
0009C988 e0230091 add      x0, sp, #8
0009C98C adeaff97 bl       #0x97440
0009C990 e00740f9 ldr      x0, [sp, #8]
0009C994 200400b4 cbz      x0, #0x9ca18
0009C998 088c44f8 ldr      x8, [x0, #0x48]!
0009C99C 080d40f9 ldr      x8, [x8, #0x18]
0009C9A0 00013fd6 blr      x8
0009C9A4 1d000014 b        #0x9ca18
0009C9A8 80ba41f9 ldr      x0, [x20, #0x370]
0009C9AC e00b00f9 str      x0, [sp, #0x10]
0009C9B0 800000b4 cbz      x0, #0x9c9c0
0009C9B4 088c44f8 ldr      x8, [x0, #0x48]!
0009C9B8 080940f9 ldr      x8, [x8, #0x10]
0009C9BC 00013fd6 blr      x8
0009C9C0 a00240f9 ldr      x0, [x21]
0009C9C4 e00700f9 str      x0, [sp, #8]
0009C9C8 800000b4 cbz      x0, #0x9c9d8
0009C9CC 088c44f8 ldr      x8, [x0, #0x48]!
0009C9D0 080940f9 ldr      x8, [x8, #0x10]
0009C9D4 00013fd6 blr      x8
0009C9D8 82020e91 add      x2, x20, #0x380
0009C9DC e0430091 add      x0, sp, #0x10
0009C9E0 e1230091 add      x1, sp, #8
0009C9E4 e30316aa mov      x3, x22
0009C9E8 5aebff97 bl       #0x97750
0009C9EC e00740f9 ldr      x0, [sp, #8]
0009C9F0 800000b4 cbz      x0, #0x9ca00
0009C9F4 088c44f8 ldr      x8, [x0, #0x48]!
0009C9F8 080d40f9 ldr      x8, [x8, #0x18]
0009C9FC 00013fd6 blr      x8
0009CA00 e00b40f9 ldr      x0, [sp, #0x10]
0009CA04 a00000b4 cbz      x0, #0x9ca18
0009CA08 088c44f8 ldr      x8, [x0, #0x48]!
0009CA0C 080d40f9 ldr      x8, [x8, #0x18]
0009CA10 00013fd6 blr      x8
0009CA14 ff0b00f9 str      xzr, [sp, #0x10]
0009CA18 e00313aa mov      x0, x19
0009CA1C 0d671594 bl       #0x5f6650
0009CA20 88525139 ldrb     w8, [x20, #0x454]
0009CA24 48000035 cbnz     w8, #0x9ca2c
0009CA28 9fb20f39 strb     wzr, [x20, #0x3ec]
0009CA2C e00313aa mov      x0, x19
0009CA30 0c671594 bl       #0x5f6660
0009CA34 00489152 mov      w0, #0x8a40
0009CA38 e03ea072 movk     w0, #0x1f7, lsl #16
0009CA3C 45661594 bl       #0x5f6350
0009CA40 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
0009CA44 f74b40f9 ldr      x23, [sp, #0x90]
0009CA48 f6574aa9 ldp      x22, x21, [sp, #0xa0]
0009CA4C fd7b48a9 ldp      x29, x30, [sp, #0x80]
0009CA50 ff030391 add      sp, sp, #0xc0
0009CA54 c0035fd6 ret      
~~~
### 0x9ca64 (98 slots)
~~~asm
0009CA64 ff8301d1 sub      sp, sp, #0x60
0009CA68 fd7b02a9 stp      x29, x30, [sp, #0x20]
0009CA6C f85f03a9 stp      x24, x23, [sp, #0x30]
0009CA70 f65704a9 stp      x22, x21, [sp, #0x40]
0009CA74 f44f05a9 stp      x20, x19, [sp, #0x50]
0009CA78 fd830091 add      x29, sp, #0x20
0009CA7C e90301aa mov      x9, x1
0009CA80 f30300aa mov      x19, x0
0009CA84 a1831ff8 stur     x1, [x29, #-8]
0009CA88 e8430091 add      x8, sp, #0x10
0009CA8C a12300d1 sub      x1, x29, #8
0009CA90 e00309aa mov      x0, x9
0009CA94 f40305aa mov      x20, x5
0009CA98 f503042a mov      w21, w4
0009CA9C f60303aa mov      x22, x3
0009CAA0 f70302aa mov      x23, x2
0009CAA4 33c2ff97 bl       #0x8d370
0009CAA8 60ba41f9 ldr      x0, [x19, #0x370]
0009CAAC 800000b4 cbz      x0, #0x9cabc
0009CAB0 088c44f8 ldr      x8, [x0, #0x48]!
0009CAB4 080d40f9 ldr      x8, [x8, #0x18]
0009CAB8 00013fd6 blr      x8
0009CABC e80b40f9 ldr      x8, [sp, #0x10]
0009CAC0 b8020012 and      w24, w21, #1
0009CAC4 01ca8852 mov      w1, #0x4650
0009CAC8 a0835ff8 ldur     x0, [x29, #-8]
0009CACC e20317aa mov      x2, x23
0009CAD0 e30316aa mov      x3, x22
0009CAD4 e403182a mov      w4, w24
0009CAD8 68ba01f9 str      x8, [x19, #0x370]
0009CADC e8430091 add      x8, sp, #0x10
0009CAE0 cae8ff97 bl       #0x96e08
0009CAE4 60be41f9 ldr      x0, [x19, #0x378]
0009CAE8 75e20d91 add      x21, x19, #0x378
0009CAEC 800000b4 cbz      x0, #0x9cafc
0009CAF0 088c44f8 ldr      x8, [x0, #0x48]!
0009CAF4 080d40f9 ldr      x8, [x8, #0x18]
0009CAF8 00013fd6 blr      x8
0009CAFC e80b40f9 ldr      x8, [sp, #0x10]
0009CB00 e00315aa mov      x0, x21
0009CB04 e10314aa mov      x1, x20
0009CB08 68be01f9 str      x8, [x19, #0x378]
0009CB0C 20e9ff97 bl       #0x96f8c
0009CB10 a0835ff8 ldur     x0, [x29, #-8]
0009CB14 01ca8852 mov      w1, #0x4650
0009CB18 e8430091 add      x8, sp, #0x10
0009CB1C e20317aa mov      x2, x23
0009CB20 e30316aa mov      x3, x22
0009CB24 e403182a mov      w4, w24
0009CB28 b8e8ff97 bl       #0x96e08
0009CB2C 60c241f9 ldr      x0, [x19, #0x380]
0009CB30 76020e91 add      x22, x19, #0x380
0009CB34 800000b4 cbz      x0, #0x9cb44
0009CB38 088c44f8 ldr      x8, [x0, #0x48]!
0009CB3C 080d40f9 ldr      x8, [x8, #0x18]
0009CB40 00013fd6 blr      x8
0009CB44 e80b40f9 ldr      x8, [sp, #0x10]
0009CB48 e00316aa mov      x0, x22
0009CB4C e10314aa mov      x1, x20
0009CB50 68c201f9 str      x8, [x19, #0x380]
0009CB54 0ee9ff97 bl       #0x96f8c
0009CB58 60ba41f9 ldr      x0, [x19, #0x370]
0009CB5C e00700f9 str      x0, [sp, #8]
0009CB60 800000b4 cbz      x0, #0x9cb70
0009CB64 088c44f8 ldr      x8, [x0, #0x48]!
0009CB68 080940f9 ldr      x8, [x8, #0x10]
0009CB6C 00013fd6 blr      x8
0009CB70 e0230091 add      x0, sp, #8
0009CB74 e10315aa mov      x1, x21
0009CB78 11e9ff97 bl       #0x96fbc
0009CB7C e00740f9 ldr      x0, [sp, #8]
0009CB80 a00000b4 cbz      x0, #0x9cb94
0009CB84 088c44f8 ldr      x8, [x0, #0x48]!
0009CB88 080d40f9 ldr      x8, [x8, #0x18]
0009CB8C 00013fd6 blr      x8
0009CB90 ff0700f9 str      xzr, [sp, #8]
0009CB94 a00240f9 ldr      x0, [x21]
0009CB98 e00b00f9 str      x0, [sp, #0x10]
0009CB9C 800000b4 cbz      x0, #0x9cbac
0009CBA0 088c44f8 ldr      x8, [x0, #0x48]!
0009CBA4 080940f9 ldr      x8, [x8, #0x10]
0009CBA8 00013fd6 blr      x8
0009CBAC e0430091 add      x0, sp, #0x10
0009CBB0 e10316aa mov      x1, x22
0009CBB4 23eaff97 bl       #0x97440
0009CBB8 e00b40f9 ldr      x0, [sp, #0x10]
0009CBBC 800000b4 cbz      x0, #0x9cbcc
0009CBC0 088c44f8 ldr      x8, [x0, #0x48]!
0009CBC4 080d40f9 ldr      x8, [x8, #0x18]
0009CBC8 00013fd6 blr      x8
0009CBCC 60220e91 add      x0, x19, #0x388
0009CBD0 05feff97 bl       #0x9c3e4
0009CBD4 f44f45a9 ldp      x20, x19, [sp, #0x50]
0009CBD8 f65744a9 ldp      x22, x21, [sp, #0x40]
0009CBDC f85f43a9 ldp      x24, x23, [sp, #0x30]
0009CBE0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0009CBE4 ff830191 add      sp, sp, #0x60
0009CBE8 c0035fd6 ret      
~~~
### 0x9cc24 (57 slots)
~~~asm
0009CC24 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0009CC28 f70b00f9 str      x23, [sp, #0x10]
0009CC2C f65702a9 stp      x22, x21, [sp, #0x20]
0009CC30 f44f03a9 stp      x20, x19, [sp, #0x30]
0009CC34 fd030091 mov      x29, sp
0009CC38 13601191 add      x19, x0, #0x458
0009CC3C f60300aa mov      x22, x0
0009CC40 f50302aa mov      x21, x2
0009CC44 e00313aa mov      x0, x19
0009CC48 f70301aa mov      x23, x1
0009CC4C 81661594 bl       #0x5f6650
0009CC50 c8b24f39 ldrb     w8, [x22, #0x3ec]
0009CC54 c9525139 ldrb     w9, [x22, #0x454]
0009CC58 0801092a orr      w8, w8, w9
0009CC5C 1f010071 cmp      w8, #0
0009CC60 f4179f1a cset     w20, eq
0009CC64 28040035 cbnz     w8, #0x9cce8
0009CC68 e80240f9 ldr      x8, [x23]
0009CC6C e80100b4 cbz      x8, #0x9cca8
0009CC70 c0be41f9 ldr      x0, [x22, #0x378]
0009CC74 a00f00f9 str      x0, [x29, #0x18]
0009CC78 800000b4 cbz      x0, #0x9cc88
0009CC7C 088c44f8 ldr      x8, [x0, #0x48]!
0009CC80 080940f9 ldr      x8, [x8, #0x10]
0009CC84 00013fd6 blr      x8
0009CC88 a0630091 add      x0, x29, #0x18
0009CC8C e10317aa mov      x1, x23
0009CC90 ece9ff97 bl       #0x97440
0009CC94 a00f40f9 ldr      x0, [x29, #0x18]
0009CC98 800000b4 cbz      x0, #0x9cca8
0009CC9C 088c44f8 ldr      x8, [x0, #0x48]!
0009CCA0 080d40f9 ldr      x8, [x8, #0x18]
0009CCA4 00013fd6 blr      x8
0009CCA8 a80240f9 ldr      x8, [x21]
0009CCAC e80100b4 cbz      x8, #0x9cce8
0009CCB0 c0c241f9 ldr      x0, [x22, #0x380]
0009CCB4 a00f00f9 str      x0, [x29, #0x18]
0009CCB8 800000b4 cbz      x0, #0x9ccc8
0009CCBC 088c44f8 ldr      x8, [x0, #0x48]!
0009CCC0 080940f9 ldr      x8, [x8, #0x10]
0009CCC4 00013fd6 blr      x8
0009CCC8 a0630091 add      x0, x29, #0x18
0009CCCC e10315aa mov      x1, x21
0009CCD0 dce9ff97 bl       #0x97440
0009CCD4 a00f40f9 ldr      x0, [x29, #0x18]
0009CCD8 800000b4 cbz      x0, #0x9cce8
0009CCDC 088c44f8 ldr      x8, [x0, #0x48]!
0009CCE0 080d40f9 ldr      x8, [x8, #0x18]
0009CCE4 00013fd6 blr      x8
0009CCE8 e00313aa mov      x0, x19
0009CCEC 5d661594 bl       #0x5f6660
0009CCF0 e003142a mov      w0, w20
0009CCF4 f44f43a9 ldp      x20, x19, [sp, #0x30]
0009CCF8 f65742a9 ldp      x22, x21, [sp, #0x20]
0009CCFC f70b40f9 ldr      x23, [sp, #0x10]
0009CD00 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0009CD04 c0035fd6 ret      
~~~
### 0x9e874 (66 slots)
~~~asm
0009E874 ff8301d1 sub      sp, sp, #0x60
0009E878 fd7b03a9 stp      x29, x30, [sp, #0x30]
0009E87C f52300f9 str      x21, [sp, #0x40]
0009E880 f44f05a9 stp      x20, x19, [sp, #0x50]
0009E884 fdc30091 add      x29, sp, #0x30
0009E888 080c40f9 ldr      x8, [x0, #0x18]
0009E88C 680700b4 cbz      x8, #0x9e978
0009E890 095d40f9 ldr      x9, [x8, #0xb8]
0009E894 f30300aa mov      x19, x0
0009E898 290140b9 ldr      w9, [x9]
0009E89C 3f050071 cmp      w9, #1
0009E8A0 21040054 b.ne     #0x9e924
0009E8A4 141540f9 ldr      x20, [x8, #0x28]
0009E8A8 e00314aa mov      x0, x20
0009E8AC a3f4ff97 bl       #0x9bb38
0009E8B0 f40300f9 str      x20, [sp]
0009E8B4 888e44f8 ldr      x8, [x20, #0x48]!
0009E8B8 ffff01a9 stp      xzr, xzr, [sp, #0x18]
0009E8BC f503002a mov      w21, w0
0009E8C0 e00314aa mov      x0, x20
0009E8C4 ff8302f8 stur     xzr, [sp, #0x28]
0009E8C8 080940f9 ldr      x8, [x8, #0x10]
0009E8CC ff530039 strb     wzr, [sp, #0x14]
0009E8D0 00013fd6 blr      x8
0009E8D4 e0030091 mov      x0, sp
0009E8D8 e2530091 add      x2, sp, #0x14
0009E8DC e103152a mov      w1, w21
0009E8E0 21eeff97 bl       #0x9a164
0009E8E4 e00340f9 ldr      x0, [sp]
0009E8E8 800000b4 cbz      x0, #0x9e8f8
0009E8EC 088c44f8 ldr      x8, [x0, #0x48]!
0009E8F0 080d40f9 ldr      x8, [x8, #0x18]
0009E8F4 00013fd6 blr      x8
0009E8F8 e81b40b9 ldr      w8, [sp, #0x18]
0009E8FC e1030091 mov      x1, sp
0009E900 69b241b9 ldr      w9, [x19, #0x1b0]
0009E904 3f01086b cmp      w9, w8
0009E908 6ab641b9 ldr      w10, [x19, #0x1b4]
0009E90C 4011487a ccmp     w10, w8, #0, ne
0009E910 e8179f1a cset     w8, eq
0009E914 e87f0029 stp      w8, wzr, [sp]
0009E918 e80342f8 ldur     x8, [sp, #0x20]
0009E91C e80700f9 str      x8, [sp, #8]
0009E920 0d000014 b        #0x9e954
0009E924 080540f9 ldr      x8, [x8, #8]
0009E928 292c00b0 adrp     x9, #0x623000
0009E92C 29e12591 add      x9, x9, #0x978
0009E930 2a2c00d0 adrp     x10, #0x624000
0009E934 4a012291 add      x10, x10, #0x880
0009E938 e1530091 add      x1, sp, #0x14
0009E93C 0bb14769 ldpsw    x11, x12, [x8, #0x3c]
0009E940 084144f8 ldur     x8, [x8, #0x44]
0009E944 e8c301f8 stur     x8, [sp, #0x1c]
0009E948 4a796cb8 ldr      w10, [x10, x12, lsl #2]
0009E94C 29796bb8 ldr      w9, [x9, x11, lsl #2]
0009E950 e9ab0229 stp      w9, w10, [sp, #0x14]
0009E954 e00313aa mov      x0, x19
0009E958 22008052 mov      w2, #1
0009E95C 23008052 mov      w3, #1
0009E960 07000094 bl       #0x9e97c
0009E964 f44f45a9 ldp      x20, x19, [sp, #0x50]
0009E968 f52340f9 ldr      x21, [sp, #0x40]
0009E96C fd7b43a9 ldp      x29, x30, [sp, #0x30]
0009E970 ff830191 add      sp, sp, #0x60
0009E974 c0035fd6 ret      
0009E978 725e1594 bl       #0x5f6340
~~~
### 0x9f1b0 (147 slots)
~~~asm
0009F1B0 ffc301d1 sub      sp, sp, #0x70
0009F1B4 fd7b04a9 stp      x29, x30, [sp, #0x40]
0009F1B8 f65705a9 stp      x22, x21, [sp, #0x50]
0009F1BC f44f06a9 stp      x20, x19, [sp, #0x60]
0009F1C0 fd030191 add      x29, sp, #0x40
0009F1C4 09bc41b9 ldr      w9, [x0, #0x1bc]
0009F1C8 f3031f2a mov      w19, wzr
0009F1CC e8630091 add      x8, sp, #0x18
0009F1D0 ff630039 strb     wzr, [sp, #0x18]
0009F1D4 ff7f03a9 stp      xzr, xzr, [sp, #0x30]
0009F1D8 29011e32 orr      w9, w9, #4
0009F1DC ffc301f8 stur     xzr, [sp, #0x1c]
0009F1E0 ff4302f8 stur     xzr, [sp, #0x24]
0009F1E4 3f110071 cmp      w9, #4
0009F1E8 ffb30039 strb     wzr, [sp, #0x2c]
0009F1EC 21080054 b.ne     #0x9f2f0
0009F1F0 14510091 add      x20, x8, #0x14
0009F1F4 08c041b9 ldr      w8, [x0, #0x1c0]
0009F1F8 08011e32 orr      w8, w8, #4
0009F1FC 1f110071 cmp      w8, #4
0009F200 a10c0054 b.ne     #0x9f394
0009F204 f5031f2a mov      w21, wzr
0009F208 160c40f9 ldr      x22, [x0, #0x18]
0009F20C 760f00b4 cbz      x22, #0x9f3f8
0009F210 c0ae40f9 ldr      x0, [x22, #0x158]
0009F214 e00b00f9 str      x0, [sp, #0x10]
0009F218 800000b4 cbz      x0, #0x9f228
0009F21C 088c44f8 ldr      x8, [x0, #0x48]!
0009F220 080940f9 ldr      x8, [x8, #0x10]
0009F224 00013fd6 blr      x8
0009F228 c01640f9 ldr      x0, [x22, #0x28]
0009F22C e00700f9 str      x0, [sp, #8]
0009F230 800000b4 cbz      x0, #0x9f240
0009F234 088c44f8 ldr      x8, [x0, #0x48]!
0009F238 080940f9 ldr      x8, [x8, #0x10]
0009F23C 00013fd6 blr      x8
0009F240 e0430091 add      x0, sp, #0x10
0009F244 e1230091 add      x1, sp, #8
0009F248 e3630091 add      x3, sp, #0x18
0009F24C e203132a mov      w2, w19
0009F250 e403152a mov      w4, w21
0009F254 e50314aa mov      x5, x20
0009F258 46e5ff97 bl       #0x98770
0009F25C e00740f9 ldr      x0, [sp, #8]
0009F260 800000b4 cbz      x0, #0x9f270
0009F264 088c44f8 ldr      x8, [x0, #0x48]!
0009F268 080d40f9 ldr      x8, [x8, #0x18]
0009F26C 00013fd6 blr      x8
0009F270 e00b40f9 ldr      x0, [sp, #0x10]
0009F274 a00000b4 cbz      x0, #0x9f288
0009F278 088c44f8 ldr      x8, [x0, #0x48]!
0009F27C 080d40f9 ldr      x8, [x8, #0x18]
0009F280 00013fd6 blr      x8
0009F284 ff0b00f9 str      xzr, [sp, #0x10]
0009F288 c01640f9 ldr      x0, [x22, #0x28]
0009F28C ff0700b9 str      wzr, [sp, #4]
0009F290 e00700f9 str      x0, [sp, #8]
0009F294 800000b4 cbz      x0, #0x9f2a4
0009F298 088c44f8 ldr      x8, [x0, #0x48]!
0009F29C 080940f9 ldr      x8, [x8, #0x10]
0009F2A0 00013fd6 blr      x8
0009F2A4 c12640f9 ldr      x1, [x22, #0x48]
0009F2A8 e0230091 add      x0, sp, #8
0009F2AC e2130091 add      x2, sp, #4
0009F2B0 e8ebff97 bl       #0x9a250
0009F2B4 f303002a mov      w19, w0
0009F2B8 e00740f9 ldr      x0, [sp, #8]
0009F2BC 800000b4 cbz      x0, #0x9f2cc
0009F2C0 088c44f8 ldr      x8, [x0, #0x48]!
0009F2C4 080d40f9 ldr      x8, [x8, #0x18]
0009F2C8 00013fd6 blr      x8
0009F2CC 93000034 cbz      w19, #0x9f2dc
0009F2D0 c01640f9 ldr      x0, [x22, #0x28]
0009F2D4 e10740b9 ldr      w1, [sp, #4]
0009F2D8 1bf2ff97 bl       #0x9bb44
0009F2DC f44f46a9 ldp      x20, x19, [sp, #0x60]
0009F2E0 f65745a9 ldp      x22, x21, [sp, #0x50]
0009F2E4 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0009F2E8 ffc30191 add      sp, sp, #0x70
0009F2EC c0035fd6 ret      
0009F2F0 093440f9 ldr      x9, [x0, #0x68]
0009F2F4 2acd44b9 ldr      w10, [x9, #0x4cc]
0009F2F8 5f090071 cmp      w10, #2
0009F2FC 22020054 b.hs     #0x9f340
0009F300 09b041b9 ldr      w9, [x0, #0x1b0]
0009F304 33008052 mov      w19, #1
0009F308 f3630039 strb     w19, [sp, #0x18]
0009F30C e91f00b9 str      w9, [sp, #0x1c]
0009F310 292c00d0 adrp     x9, #0x625000
0009F314 29f12491 add      x9, x9, #0x93c
0009F318 2a0140f9 ldr      x10, [x9]
0009F31C 290940b9 ldr      w9, [x9, #8]
0009F320 ea1300f9 str      x10, [sp, #0x20]
0009F324 e92b00b9 str      w9, [sp, #0x28]
0009F328 14510091 add      x20, x8, #0x14
0009F32C 08c041b9 ldr      w8, [x0, #0x1c0]
0009F330 08011e32 orr      w8, w8, #4
0009F334 1f110071 cmp      w8, #4
0009F338 60f6ff54 b.eq     #0x9f204
0009F33C 16000014 b        #0x9f394
0009F340 e1010054 b.ne     #0x9f37c
0009F344 0a4b8b52 mov      w10, #0x5a58
0009F348 2b2d6df9 ldr      x11, [x9, #0x5a58]
0009F34C 33008052 mov      w19, #1
0009F350 2a010a8b add      x10, x9, x10
0009F354 29316df9 ldr      x9, [x9, #0x5a60]
0009F358 eba701a9 stp      x11, x9, [sp, #0x18]
0009F35C 491140b9 ldr      w9, [x10, #0x10]
0009F360 e92b00b9 str      w9, [sp, #0x28]
0009F364 14510091 add      x20, x8, #0x14
0009F368 08c041b9 ldr      w8, [x0, #0x1c0]
0009F36C 08011e32 orr      w8, w8, #4
0009F370 1f110071 cmp      w8, #4
0009F374 80f4ff54 b.eq     #0x9f204
0009F378 07000014 b        #0x9f394
0009F37C f3031f2a mov      w19, wzr
0009F380 14510091 add      x20, x8, #0x14
0009F384 08c041b9 ldr      w8, [x0, #0x1c0]
0009F388 08011e32 orr      w8, w8, #4
0009F38C 1f110071 cmp      w8, #4
0009F390 a0f3ff54 b.eq     #0x9f204
0009F394 084440f9 ldr      x8, [x0, #0x88]
0009F398 09cd44b9 ldr      w9, [x8, #0x4cc]
0009F39C 3f090071 cmp      w9, #2
0009F3A0 82010054 b.hs     #0x9f3d0
0009F3A4 08b441b9 ldr      w8, [x0, #0x1b4]
0009F3A8 35008052 mov      w21, #1
0009F3AC f5b30039 strb     w21, [sp, #0x2c]
0009F3B0 e83300b9 str      w8, [sp, #0x30]
0009F3B4 282c00d0 adrp     x8, #0x625000
0009F3B8 08f12491 add      x8, x8, #0x93c
0009F3BC 090140f9 ldr      x9, [x8]
0009F3C0 080940b9 ldr      w8, [x8, #8]
0009F3C4 e94303f8 stur     x9, [sp, #0x34]
0009F3C8 e83f00b9 str      w8, [sp, #0x3c]
0009F3CC 8fffff17 b        #0x9f208
0009F3D0 a1f1ff54 b.ne     #0x9f204
0009F3D4 094b8b52 mov      w9, #0x5a58
0009F3D8 0a2d6df9 ldr      x10, [x8, #0x5a58]
0009F3DC 35008052 mov      w21, #1
0009F3E0 0901098b add      x9, x8, x9
0009F3E4 08316df9 ldr      x8, [x8, #0x5a60]
0009F3E8 8a2200a9 stp      x10, x8, [x20]
0009F3EC 281140b9 ldr      w8, [x9, #0x10]
0009F3F0 881200b9 str      w8, [x20, #0x10]
0009F3F4 85ffff17 b        #0x9f208
0009F3F8 d25b1594 bl       #0x5f6340
~~~
### 0xa27e0 (1 slots)
~~~asm
000A27E0 c0035fd6 ret      
~~~
### 0xa2f30 (1 slots)
~~~asm
000A2F30 c0035fd6 ret      
~~~
### 0xc2ca0 (1 slots)
~~~asm
000C2CA0 c0035fd6 ret      
~~~
### 0xc2ca4 (62 slots)
~~~asm
000C2CA4 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000C2CA8 f65701a9 stp      x22, x21, [sp, #0x10]
000C2CAC f44f02a9 stp      x20, x19, [sp, #0x20]
000C2CB0 fd030091 mov      x29, sp
000C2CB4 140440f9 ldr      x20, [x0, #8]
000C2CB8 f30300aa mov      x19, x0
000C2CBC 01038052 mov      w1, #0x18
000C2CC0 02018052 mov      w2, #8
000C2CC4 880240f9 ldr      x8, [x20]
000C2CC8 e00314aa mov      x0, x20
000C2CCC 080940f9 ldr      x8, [x8, #0x10]
000C2CD0 00013fd6 blr      x8
000C2CD4 48d03bd5 mrs      x8, tpidr_el0
000C2CD8 16c97392 and      x22, x8, #0xffffffffffffe000
000C2CDC c84e40f9 ldr      x8, [x22, #0x98]
000C2CE0 1f4100f1 cmp      x8, #0x10
000C2CE4 a0050054 b.eq     #0xc2d98
000C2CE8 c80e088b add      x8, x22, x8, lsl #3
000C2CEC 62420491 add      x2, x19, #0x110
000C2CF0 e10314aa mov      x1, x20
000C2CF4 f50300aa mov      x21, x0
000C2CF8 140d00f9 str      x20, [x8, #0x18]
000C2CFC c84e40f9 ldr      x8, [x22, #0x98]
000C2D00 08050091 add      x8, x8, #1
000C2D04 c84e00f9 str      x8, [x22, #0x98]
000C2D08 a09fff97 bl       #0xaab88
000C2D0C c84e40f9 ldr      x8, [x22, #0x98]
000C2D10 080500d1 sub      x8, x8, #1
000C2D14 c84e00f9 str      x8, [x22, #0x98]
000C2D18 762e43f9 ldr      x22, [x19, #0x658]
000C2D1C 752e03f9 str      x21, [x19, #0x658]
000C2D20 960100b4 cbz      x22, #0xc2d50
000C2D24 c80240f9 ldr      x8, [x22]
000C2D28 e00316aa mov      x0, x22
000C2D2C 080140f9 ldr      x8, [x8]
000C2D30 00013fd6 blr      x8
000C2D34 603243f9 ldr      x0, [x19, #0x660]
000C2D38 e10316aa mov      x1, x22
000C2D3C 623643f9 ldr      x2, [x19, #0x668]
000C2D40 633a43f9 ldr      x3, [x19, #0x670]
000C2D44 080040f9 ldr      x8, [x0]
000C2D48 080d40f9 ldr      x8, [x8, #0x18]
000C2D4C 00013fd6 blr      x8
000C2D50 08038052 mov      w8, #0x18
000C2D54 e00313aa mov      x0, x19
000C2D58 743203f9 str      x20, [x19, #0x660]
000C2D5C 683603f9 str      x8, [x19, #0x668]
000C2D60 08018052 mov      w8, #8
000C2D64 683a03f9 str      x8, [x19, #0x670]
000C2D68 0d000094 bl       #0xc2d9c
000C2D6C e00313aa mov      x0, x19
000C2D70 e1031f2a mov      w1, wzr
000C2D74 22008052 mov      w2, #1
000C2D78 0e98fd97 bl       #0x28db0
000C2D7C e00313aa mov      x0, x19
000C2D80 f44f42a9 ldp      x20, x19, [sp, #0x20]
000C2D84 f65741a9 ldp      x22, x21, [sp, #0x10]
000C2D88 e1031f2a mov      w1, wzr
000C2D8C 22008052 mov      w2, #1
000C2D90 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000C2D94 c397fd17 b        #0x28ca0
000C2D98 9efffc97 bl       #0x2c10
~~~
### 0xc3250 (111 slots)
~~~asm
000C3250 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000C3254 f50b00f9 str      x21, [sp, #0x10]
000C3258 f44f02a9 stp      x20, x19, [sp, #0x20]
000C325C fd030091 mov      x29, sp
000C3260 f30300aa mov      x19, x0
000C3264 005c43f9 ldr      x0, [x0, #0x6b8]
000C3268 f40302aa mov      x20, x2
000C326C f50301aa mov      x21, x1
000C3270 080040f9 ldr      x8, [x0]
000C3274 080940f9 ldr      x8, [x8, #0x10]
000C3278 00013fd6 blr      x8
000C327C 604e43f9 ldr      x0, [x19, #0x698]
000C3280 e10315aa mov      x1, x21
000C3284 e20314aa mov      x2, x20
000C3288 080040f9 ldr      x8, [x0]
000C328C 080940f9 ldr      x8, [x8, #0x10]
000C3290 00013fd6 blr      x8
000C3294 684e43f9 ldr      x8, [x19, #0x698]
000C3298 09c144b9 ldr      w9, [x8, #0x4c0]
000C329C 1fc104b9 str      wzr, [x8, #0x4c0]
000C32A0 28050051 sub      w8, w9, #1
000C32A4 1f450071 cmp      w8, #0x11
000C32A8 080a0054 b.hi     #0xc33e8
000C32AC 092b00d0 adrp     x9, #0x625000
000C32B0 29193991 add      x9, x9, #0xe46
000C32B4 8a000010 adr      x10, #0xc32c4
000C32B8 2b696838 ldrb     w11, [x9, x8]
000C32BC 4a090b8b add      x10, x10, x11, lsl #2
000C32C0 40011fd6 br       x10
000C32C4 607e43f9 ldr      x0, [x19, #0x6f8]
000C32C8 4974ff97 bl       #0xa03ec
000C32CC 88008052 mov      w8, #4
000C32D0 45000014 b        #0xc33e4
000C32D4 607e43f9 ldr      x0, [x19, #0x6f8]
000C32D8 c078ff97 bl       #0xa15d8
000C32DC a8008052 mov      w8, #5
000C32E0 41000014 b        #0xc33e4
000C32E4 607e43f9 ldr      x0, [x19, #0x6f8]
000C32E8 7075ff97 bl       #0xa08a8
000C32EC 88008052 mov      w8, #4
000C32F0 3d000014 b        #0xc33e4
000C32F4 607e43f9 ldr      x0, [x19, #0x6f8]
000C32F8 b474ff97 bl       #0xa05c8
000C32FC 0a000014 b        #0xc3324
000C3300 28028052 mov      w8, #0x11
000C3304 38000014 b        #0xc33e4
000C3308 607e43f9 ldr      x0, [x19, #0x6f8]
000C330C e078ff97 bl       #0xa168c
000C3310 a0000034 cbz      w0, #0xc3324
000C3314 08028052 mov      w8, #0x10
000C3318 33000014 b        #0xc33e4
000C331C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3320 e378ff97 bl       #0xa16ac
000C3324 682243f9 ldr      x8, [x19, #0x640]
000C3328 086140f9 ldr      x8, [x8, #0xc0]
000C332C 08014039 ldrb     w8, [x8]
000C3330 c8050035 cbnz     w8, #0xc33e8
000C3334 e00313aa mov      x0, x19
000C3338 21008052 mov      w1, #1
000C333C 22008052 mov      w2, #1
000C3340 5896fd97 bl       #0x28ca0
000C3344 29000014 b        #0xc33e8
000C3348 48028052 mov      w8, #0x12
000C334C 26000014 b        #0xc33e4
000C3350 68028052 mov      w8, #0x13
000C3354 24000014 b        #0xc33e4
000C3358 607e43f9 ldr      x0, [x19, #0x6f8]
000C335C 246fff97 bl       #0x9efec
000C3360 88028052 mov      w8, #0x14
000C3364 20000014 b        #0xc33e4
000C3368 607e43f9 ldr      x0, [x19, #0x6f8]
000C336C 2879ff97 bl       #0xa180c
000C3370 607e43f9 ldr      x0, [x19, #0x6f8]
000C3374 1e6fff97 bl       #0x9efec
000C3378 607e43f9 ldr      x0, [x19, #0x6f8]
000C337C 2070ff97 bl       #0x9f3fc
000C3380 607e43f9 ldr      x0, [x19, #0x6f8]
000C3384 8b6fff97 bl       #0x9f1b0
000C3388 a8028052 mov      w8, #0x15
000C338C 16000014 b        #0xc33e4
000C3390 607e43f9 ldr      x0, [x19, #0x6f8]
000C3394 de73ff97 bl       #0xa030c
000C3398 14000014 b        #0xc33e8
000C339C 607e43f9 ldr      x0, [x19, #0x6f8]
000C33A0 f773ff97 bl       #0xa037c
000C33A4 11000014 b        #0xc33e8
000C33A8 607e43f9 ldr      x0, [x19, #0x6f8]
000C33AC 7278ff97 bl       #0xa1574
000C33B0 0e000014 b        #0xc33e8
000C33B4 607e43f9 ldr      x0, [x19, #0x6f8]
000C33B8 9476ff97 bl       #0xa0e08
000C33BC 60010034 cbz      w0, #0xc33e8
000C33C0 e8028052 mov      w8, #0x17
000C33C4 08000014 b        #0xc33e4
000C33C8 08038052 mov      w8, #0x18
000C33CC 06000014 b        #0xc33e4
000C33D0 e00313aa mov      x0, x19
000C33D4 e1031f2a mov      w1, wzr
000C33D8 22008052 mov      w2, #1
000C33DC 3196fd97 bl       #0x28ca0
000C33E0 c8028052 mov      w8, #0x16
000C33E4 684e06b9 str      w8, [x19, #0x64c]
000C33E8 607e43f9 ldr      x0, [x19, #0x6f8]
000C33EC e10315aa mov      x1, x21
000C33F0 e20314aa mov      x2, x20
000C33F4 d06eff97 bl       #0x9ef34
000C33F8 e00313aa mov      x0, x19
000C33FC f44f42a9 ldp      x20, x19, [sp, #0x20]
000C3400 f50b40f9 ldr      x21, [sp, #0x10]
000C3404 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000C3408 01000014 b        #0xc340c
~~~
### 0xc3754 (102 slots)
~~~asm
000C3754 ffc301d1 sub      sp, sp, #0x70
000C3758 fd7b04a9 stp      x29, x30, [sp, #0x40]
000C375C f65705a9 stp      x22, x21, [sp, #0x50]
000C3760 f44f06a9 stp      x20, x19, [sp, #0x60]
000C3764 fd030191 add      x29, sp, #0x40
000C3768 a82a0090 adrp     x8, #0x617000
000C376C 08a90d91 add      x8, x8, #0x36a
000C3770 a8831ff8 stur     x8, [x29, #-8]
000C3774 e8230091 add      x8, sp, #8
000C3778 a02300d1 sub      x0, x29, #8
000C377C f30302aa mov      x19, x2
000C3780 f40301aa mov      x20, x1
000C3784 b2b3fd97 bl       #0x3064c
000C3788 880e40f9 ldr      x8, [x20, #0x18]
000C378C c80000b4 cbz      x8, #0xc37a4
000C3790 800240f9 ldr      x0, [x20]
000C3794 800000b4 cbz      x0, #0xc37a4
000C3798 088c44f8 ldr      x8, [x0, #0x48]!
000C379C 080d40f9 ldr      x8, [x8, #0x18]
000C37A0 00013fd6 blr      x8
000C37A4 801240f9 ldr      x0, [x20, #0x20]
000C37A8 b5c884d2 mov      x21, #0x2645
000C37AC 5584b0f2 movk     x21, #0x8422, lsl #16
000C37B0 959cd3f2 movk     x21, #0x9ce4, lsl #32
000C37B4 557ef9f2 movk     x21, #0xcbf2, lsl #48
000C37B8 762a0090 adrp     x22, #0x60f000
000C37BC d60e1a91 add      x22, x22, #0x683
000C37C0 9f5600a9 stp      xzr, x21, [x20]
000C37C4 967e01a9 stp      x22, xzr, [x20, #0x10]
000C37C8 800000b4 cbz      x0, #0xc37d8
000C37CC 088c44f8 ldr      x8, [x0, #0x48]!
000C37D0 080d40f9 ldr      x8, [x8, #0x18]
000C37D4 00013fd6 blr      x8
000C37D8 e82742a9 ldp      x8, x9, [sp, #0x20]
000C37DC ff1700f9 str      xzr, [sp, #0x28]
000C37E0 ea2f41a9 ldp      x10, x11, [sp, #0x10]
000C37E4 88a601a9 stp      x8, x9, [x20, #0x18]
000C37E8 e93340b9 ldr      w9, [sp, #0x30]
000C37EC 8aae00a9 stp      x10, x11, [x20, #8]
000C37F0 892a00b9 str      w9, [x20, #0x28]
000C37F4 c80000b4 cbz      x8, #0xc380c
000C37F8 800240f9 ldr      x0, [x20]
000C37FC 800000b4 cbz      x0, #0xc380c
000C3800 088c44f8 ldr      x8, [x0, #0x48]!
000C3804 080d40f9 ldr      x8, [x8, #0x18]
000C3808 00013fd6 blr      x8
000C380C e80740f9 ldr      x8, [sp, #8]
000C3810 ffd700a9 stp      xzr, x21, [sp, #8]
000C3814 e01740f9 ldr      x0, [sp, #0x28]
000C3818 880200f9 str      x8, [x20]
000C381C f6ff01a9 stp      x22, xzr, [sp, #0x18]
000C3820 800000b4 cbz      x0, #0xc3830
000C3824 088c44f8 ldr      x8, [x0, #0x48]!
000C3828 080d40f9 ldr      x8, [x8, #0x18]
000C382C 00013fd6 blr      x8
000C3830 482a00f0 adrp     x8, #0x60e000
000C3834 08e93591 add      x8, x8, #0xd7a
000C3838 a8831ff8 stur     x8, [x29, #-8]
000C383C e8230091 add      x8, sp, #8
000C3840 a02300d1 sub      x0, x29, #8
000C3844 82b3fd97 bl       #0x3064c
000C3848 680e40f9 ldr      x8, [x19, #0x18]
000C384C c80000b4 cbz      x8, #0xc3864
000C3850 600240f9 ldr      x0, [x19]
000C3854 800000b4 cbz      x0, #0xc3864
000C3858 088c44f8 ldr      x8, [x0, #0x48]!
000C385C 080d40f9 ldr      x8, [x8, #0x18]
000C3860 00013fd6 blr      x8
000C3864 601240f9 ldr      x0, [x19, #0x20]
000C3868 7f5600a9 stp      xzr, x21, [x19]
000C386C 767e01a9 stp      x22, xzr, [x19, #0x10]
000C3870 800000b4 cbz      x0, #0xc3880
000C3874 088c44f8 ldr      x8, [x0, #0x48]!
000C3878 080d40f9 ldr      x8, [x8, #0x18]
000C387C 00013fd6 blr      x8
000C3880 e82742a9 ldp      x8, x9, [sp, #0x20]
000C3884 ff1700f9 str      xzr, [sp, #0x28]
000C3888 ea2f41a9 ldp      x10, x11, [sp, #0x10]
000C388C 68a601a9 stp      x8, x9, [x19, #0x18]
000C3890 e93340b9 ldr      w9, [sp, #0x30]
000C3894 6aae00a9 stp      x10, x11, [x19, #8]
000C3898 692a00b9 str      w9, [x19, #0x28]
000C389C c80000b4 cbz      x8, #0xc38b4
000C38A0 600240f9 ldr      x0, [x19]
000C38A4 800000b4 cbz      x0, #0xc38b4
000C38A8 088c44f8 ldr      x8, [x0, #0x48]!
000C38AC 080d40f9 ldr      x8, [x8, #0x18]
000C38B0 00013fd6 blr      x8
000C38B4 e80740f9 ldr      x8, [sp, #8]
000C38B8 ffd700a9 stp      xzr, x21, [sp, #8]
000C38BC e01740f9 ldr      x0, [sp, #0x28]
000C38C0 680200f9 str      x8, [x19]
000C38C4 f6ff01a9 stp      x22, xzr, [sp, #0x18]
000C38C8 800000b4 cbz      x0, #0xc38d8
000C38CC 088c44f8 ldr      x8, [x0, #0x48]!
000C38D0 080d40f9 ldr      x8, [x8, #0x18]
000C38D4 00013fd6 blr      x8
000C38D8 f44f46a9 ldp      x20, x19, [sp, #0x60]
000C38DC f65745a9 ldp      x22, x21, [sp, #0x50]
000C38E0 fd7b44a9 ldp      x29, x30, [sp, #0x40]
000C38E4 ffc30191 add      sp, sp, #0x70
000C38E8 c0035fd6 ret      
~~~
### 0xc38ec (415 slots)
~~~asm
000C38EC ff0302d1 sub      sp, sp, #0x80
000C38F0 fd7b04a9 stp      x29, x30, [sp, #0x40]
000C38F4 f72b00f9 str      x23, [sp, #0x50]
000C38F8 f65706a9 stp      x22, x21, [sp, #0x60]
000C38FC f44f07a9 stp      x20, x19, [sp, #0x70]
000C3900 fd030191 add      x29, sp, #0x40
000C3904 359040f9 ldr      x21, [x1, #0x120]
000C3908 f30300aa mov      x19, x0
000C390C e00315aa mov      x0, x21
000C3910 f25efd97 bl       #0x1b4d8
000C3914 f403002a mov      w20, w0
000C3918 08000012 and      w8, w0, #1
000C391C a8431e38 sturb    w8, [x29, #-0x1c]
000C3920 e00315aa mov      x0, x21
000C3924 ef5efd97 bl       #0x1b4e0
000C3928 08000012 and      w8, w0, #1
000C392C e00315aa mov      x0, x21
000C3930 a8531e38 sturb    w8, [x29, #-0x1b]
000C3934 f15efd97 bl       #0x1b4f8
000C3938 08000012 and      w8, w0, #1
000C393C e00315aa mov      x0, x21
000C3940 a8631e38 sturb    w8, [x29, #-0x1a]
000C3944 f35efd97 bl       #0x1b510
000C3948 08000012 and      w8, w0, #1
000C394C e00315aa mov      x0, x21
000C3950 a8731e38 sturb    w8, [x29, #-0x19]
000C3954 f55efd97 bl       #0x1b528
000C3958 f603002a mov      w22, w0
000C395C e00315aa mov      x0, x21
000C3960 f45efd97 bl       #0x1b530
000C3964 172d8052 mov      w23, #0x168
000C3968 c8020a51 sub      w8, w22, #0x280
000C396C e902004b sub      w9, w23, w0
000C3970 e00315aa mov      x0, x21
000C3974 a8273d29 stp      w8, w9, [x29, #-0x18]
000C3978 f45efd97 bl       #0x1b548
000C397C f603002a mov      w22, w0
000C3980 e00315aa mov      x0, x21
000C3984 f35efd97 bl       #0x1b550
000C3988 c8020a51 sub      w8, w22, #0x280
000C398C e902004b sub      w9, w23, w0
000C3990 a8273e29 stp      w8, w9, [x29, #-0x10]
000C3994 e00315aa mov      x0, x21
000C3998 e85efd97 bl       #0x1b538
000C399C f603002a mov      w22, w0
000C39A0 e00315aa mov      x0, x21
000C39A4 e75efd97 bl       #0x1b540
000C39A8 c8020a51 sub      w8, w22, #0x280
000C39AC e902004b sub      w9, w23, w0
000C39B0 a8273f29 stp      w8, w9, [x29, #-8]
000C39B4 682243f9 ldr      x8, [x19, #0x640]
000C39B8 096140f9 ldr      x9, [x8, #0xc0]
000C39BC 29014039 ldrb     w9, [x9]
000C39C0 e9040034 cbz      w9, #0xc3a5c
000C39C4 94000037 tbnz     w20, #0, #0xc39d4
000C39C8 086540f9 ldr      x8, [x8, #0xc8]
000C39CC 29008052 mov      w9, #1
000C39D0 09010039 strb     w9, [x8]
000C39D4 607e43f9 ldr      x0, [x19, #0x6f8]
000C39D8 cd6fff97 bl       #0x9f90c
000C39DC c0010037 tbnz     w0, #0, #0xc3a14
000C39E0 607e43f9 ldr      x0, [x19, #0x6f8]
000C39E4 3778ff97 bl       #0xa1ac0
000C39E8 60010037 tbnz     w0, #0, #0xc3a14
000C39EC 607e43f9 ldr      x0, [x19, #0x6f8]
000C39F0 416fff97 bl       #0x9f6f4
000C39F4 00010037 tbnz     w0, #0, #0xc3a14
000C39F8 607e43f9 ldr      x0, [x19, #0x6f8]
000C39FC 616fff97 bl       #0x9f780
000C3A00 a0000037 tbnz     w0, #0, #0xc3a14
000C3A04 607242f9 ldr      x0, [x19, #0x4e0]
000C3A08 000500b4 cbz      x0, #0xc3aa8
000C3A0C 24f30794 bl       #0x2c069c
000C3A10 c0040036 tbz      w0, #0, #0xc3aa8
000C3A14 f5031f2a mov      w21, wzr
000C3A18 682243f9 ldr      x8, [x19, #0x640]
000C3A1C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A20 086940f9 ldr      x8, [x8, #0xd0]
000C3A24 14014039 ldrb     w20, [x8]
000C3A28 b96fff97 bl       #0x9f90c
000C3A2C d4040034 cbz      w20, #0xc3ac4
000C3A30 a0050037 tbnz     w0, #0, #0xc3ae4
000C3A34 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A38 2278ff97 bl       #0xa1ac0
000C3A3C 40050037 tbnz     w0, #0, #0xc3ae4
000C3A40 682243f9 ldr      x8, [x19, #0x640]
000C3A44 a17300d1 sub      x1, x29, #0x1c
000C3A48 086940f9 ldr      x8, [x8, #0xd0]
000C3A4C 1f010039 strb     wzr, [x8]
000C3A50 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A54 2d78ff97 bl       #0xa1b08
000C3A58 23000014 b        #0xc3ae4
000C3A5C 607242f9 ldr      x0, [x19, #0x4e0]
000C3A60 600000b4 cbz      x0, #0xc3a6c
000C3A64 0ef30794 bl       #0x2c069c
000C3A68 c0010037 tbnz     w0, #0, #0xc3aa0
000C3A6C 60420491 add      x0, x19, #0x110
000C3A70 15a2fd97 bl       #0x2c2c4
000C3A74 0800140a and      w8, w0, w20
000C3A78 48010036 tbz      w8, #0, #0xc3aa0
000C3A7C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A80 b96eff97 bl       #0x9f564
000C3A84 e0000036 tbz      w0, #0, #0xc3aa0
000C3A88 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A8C d26eff97 bl       #0x9f5d4
000C3A90 80000037 tbnz     w0, #0, #0xc3aa0
000C3A94 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A98 726fff97 bl       #0x9f860
000C3A9C e01a0036 tbz      w0, #0, #0xc3df8
000C3AA0 f4031f2a mov      w20, wzr
000C3AA4 70000014 b        #0xc3c64
000C3AA8 35008052 mov      w21, #1
000C3AAC 682243f9 ldr      x8, [x19, #0x640]
000C3AB0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3AB4 086940f9 ldr      x8, [x8, #0xd0]
000C3AB8 14014039 ldrb     w20, [x8]
000C3ABC 946fff97 bl       #0x9f90c
000C3AC0 94fbff35 cbnz     w20, #0xc3a30
000C3AC4 80000037 tbnz     w0, #0, #0xc3ad4
000C3AC8 607e43f9 ldr      x0, [x19, #0x6f8]
000C3ACC fd77ff97 bl       #0xa1ac0
000C3AD0 a0000036 tbz      w0, #0, #0xc3ae4
000C3AD4 682243f9 ldr      x8, [x19, #0x640]
000C3AD8 29008052 mov      w9, #1
000C3ADC 086940f9 ldr      x8, [x8, #0xd0]
000C3AE0 09010039 strb     w9, [x8]
000C3AE4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3AE8 a17300d1 sub      x1, x29, #0x1c
000C3AEC 1978ff97 bl       #0xa1b50
000C3AF0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3AF4 a1020052 eor      w1, w21, #1
000C3AF8 a27300d1 sub      x2, x29, #0x1c
000C3AFC 2778ff97 bl       #0xa1b98
000C3B00 f403002a mov      w20, w0
000C3B04 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B08 816fff97 bl       #0x9f90c
000C3B0C 00020037 tbnz     w0, #0, #0xc3b4c
000C3B10 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B14 eb77ff97 bl       #0xa1ac0
000C3B18 a0010037 tbnz     w0, #0, #0xc3b4c
000C3B1C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B20 f56eff97 bl       #0x9f6f4
000C3B24 40010037 tbnz     w0, #0, #0xc3b4c
000C3B28 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B2C 156fff97 bl       #0x9f780
000C3B30 e0000037 tbnz     w0, #0, #0xc3b4c
000C3B34 607242f9 ldr      x0, [x19, #0x4e0]
000C3B38 88020052 eor      w8, w20, #1
000C3B3C b402080a and      w20, w21, w8
000C3B40 800000b4 cbz      x0, #0xc3b50
000C3B44 d6f20794 bl       #0x2c069c
000C3B48 40000036 tbz      w0, #0, #0xc3b50
000C3B4C f4031f2a mov      w20, wzr
000C3B50 682243f9 ldr      x8, [x19, #0x640]
000C3B54 096140f9 ldr      x9, [x8, #0xc0]
000C3B58 29014039 ldrb     w9, [x9]
000C3B5C 89000034 cbz      w9, #0xc3b6c
000C3B60 096540f9 ldr      x9, [x8, #0xc8]
000C3B64 29014039 ldrb     w9, [x9]
000C3B68 c9020034 cbz      w9, #0xc3bc0
000C3B6C 086540f9 ldr      x8, [x8, #0xc8]
000C3B70 08014039 ldrb     w8, [x8]
000C3B74 1f010071 cmp      w8, #0
000C3B78 88020052 eor      w8, w20, #1
000C3B7C 08159f1a csinc    w8, w8, wzr, ne
000C3B80 08070037 tbnz     w8, #0, #0xc3c60
000C3B84 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B88 8a6eff97 bl       #0x9f5b0
000C3B8C e803002a mov      w8, w0
000C3B90 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B94 88000036 tbz      w8, #0, #0xc3ba4
000C3B98 1572ff97 bl       #0xa03ec
000C3B9C 88008052 mov      w8, #4
000C3BA0 29000014 b        #0xc3c44
000C3BA4 896eff97 bl       #0x9f5c8
000C3BA8 e803002a mov      w8, w0
000C3BAC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3BB0 e8030036 tbz      w8, #0, #0xc3c2c
000C3BB4 3d73ff97 bl       #0xa08a8
000C3BB8 88008052 mov      w8, #4
000C3BBC 22000014 b        #0xc3c44
000C3BC0 a0077d2d ldp      s0, s1, [x29, #-0x18]
000C3BC4 089ea852 mov      w8, #0x44f00000
000C3BC8 0201271e fmov     s2, w8
000C3BCC 0894a852 mov      w8, #0x44a00000
000C3BD0 e1030091 mov      x1, sp
000C3BD4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3BD8 21d8215e scvtf    s1, s1
000C3BDC 00d8215e scvtf    s0, s0
000C3BE0 0008221e fmul     s0, s0, s2
000C3BE4 0201271e fmov     s2, w8
000C3BE8 e890a852 mov      w8, #0x44870000
000C3BEC 0018221e fdiv     s0, s0, s2
000C3BF0 0201271e fmov     s2, w8
000C3BF4 8886a852 mov      w8, #0x44340000
000C3BF8 2108221e fmul     s1, s1, s2
000C3BFC 0201271e fmov     s2, w8
000C3C00 2118221e fdiv     s1, s1, s2
000C3C04 e007002d stp      s0, s1, [sp]
000C3C08 4371ff97 bl       #0xa0114
000C3C0C 682243f9 ldr      x8, [x19, #0x640]
000C3C10 086540f9 ldr      x8, [x8, #0xc8]
000C3C14 08014039 ldrb     w8, [x8]
000C3C18 1f010071 cmp      w8, #0
000C3C1C 88020052 eor      w8, w20, #1
000C3C20 08159f1a csinc    w8, w8, wzr, ne
000C3C24 08fb0736 tbz      w8, #0, #0xc3b84
000C3C28 0e000014 b        #0xc3c60
000C3C2C 646eff97 bl       #0x9f5bc
000C3C30 e803002a mov      w8, w0
000C3C34 607e43f9 ldr      x0, [x19, #0x6f8]
000C3C38 480a0036 tbz      w8, #0, #0xc3d80
000C3C3C 6776ff97 bl       #0xa15d8
000C3C40 a8008052 mov      w8, #5
000C3C44 684e06b9 str      w8, [x19, #0x64c]
000C3C48 682243f9 ldr      x8, [x19, #0x640]
000C3C4C 086140f9 ldr      x8, [x8, #0xc0]
000C3C50 1f010039 strb     wzr, [x8]
000C3C54 682243f9 ldr      x8, [x19, #0x640]
000C3C58 086540f9 ldr      x8, [x8, #0xc8]
000C3C5C 1f010039 strb     wzr, [x8]
000C3C60 34008052 mov      w20, #1
000C3C64 682243f9 ldr      x8, [x19, #0x640]
000C3C68 607e43f9 ldr      x0, [x19, #0x6f8]
000C3C6C 086140f9 ldr      x8, [x8, #0xc0]
000C3C70 08014039 ldrb     w8, [x8]
000C3C74 1f010071 cmp      w8, #0
000C3C78 e1179f1a cset     w1, eq
000C3C7C 2c77ff97 bl       #0xa192c
000C3C80 e00313aa mov      x0, x19
000C3C84 e2fdff97 bl       #0xc340c
000C3C88 607e43f9 ldr      x0, [x19, #0x6f8]
000C3C8C d46bff97 bl       #0x9ebdc
000C3C90 682243f9 ldr      x8, [x19, #0x640]
000C3C94 096140f9 ldr      x9, [x8, #0xc0]
000C3C98 29014039 ldrb     w9, [x9]
000C3C9C 89000034 cbz      w9, #0xc3cac
000C3CA0 086540f9 ldr      x8, [x8, #0xc8]
000C3CA4 08014039 ldrb     w8, [x8]
000C3CA8 c8000034 cbz      w8, #0xc3cc0
000C3CAC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3CB0 176fff97 bl       #0x9f90c
000C3CB4 20030036 tbz      w0, #0, #0xc3d18
000C3CB8 28008052 mov      w8, #1
000C3CBC 1e000014 b        #0xc3d34
000C3CC0 a0077d2d ldp      s0, s1, [x29, #-0x18]
000C3CC4 089ea852 mov      w8, #0x44f00000
000C3CC8 0201271e fmov     s2, w8
000C3CCC 0894a852 mov      w8, #0x44a00000
000C3CD0 e1030091 mov      x1, sp
000C3CD4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3CD8 21d8215e scvtf    s1, s1
000C3CDC 00d8215e scvtf    s0, s0
000C3CE0 0008221e fmul     s0, s0, s2
000C3CE4 0201271e fmov     s2, w8
000C3CE8 e890a852 mov      w8, #0x44870000
000C3CEC 0018221e fdiv     s0, s0, s2
000C3CF0 0201271e fmov     s2, w8
000C3CF4 8886a852 mov      w8, #0x44340000
000C3CF8 2108221e fmul     s1, s1, s2
000C3CFC 0201271e fmov     s2, w8
000C3D00 2118221e fdiv     s1, s1, s2
000C3D04 e007002d stp      s0, s1, [sp]
000C3D08 0371ff97 bl       #0xa0114
000C3D0C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D10 ff6eff97 bl       #0x9f90c
000C3D14 20fd0737 tbnz     w0, #0, #0xc3cb8
000C3D18 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D1C 766eff97 bl       #0x9f6f4
000C3D20 80000037 tbnz     w0, #0, #0xc3d30
000C3D24 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D28 ab6eff97 bl       #0x9f7d4
000C3D2C 60010036 tbz      w0, #0, #0xc3d58
000C3D30 48008052 mov      w8, #2
000C3D34 34008052 mov      w20, #1
000C3D38 684e06b9 str      w8, [x19, #0x64c]
000C3D3C e003142a mov      w0, w20
000C3D40 f44f47a9 ldp      x20, x19, [sp, #0x70]
000C3D44 f65746a9 ldp      x22, x21, [sp, #0x60]
000C3D48 f72b40f9 ldr      x23, [sp, #0x50]
000C3D4C fd7b44a9 ldp      x29, x30, [sp, #0x40]
000C3D50 ff030291 add      sp, sp, #0x80
000C3D54 c0035fd6 ret      
000C3D58 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D5C 896eff97 bl       #0x9f780
000C3D60 60000036 tbz      w0, #0, #0xc3d6c
000C3D64 68008052 mov      w8, #3
000C3D68 f3ffff17 b        #0xc3d34
000C3D6C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D70 5477ff97 bl       #0xa1ac0
000C3D74 e0020036 tbz      w0, #0, #0xc3dd0
000C3D78 c8008052 mov      w8, #6
000C3D7C eeffff17 b        #0xc3d34
000C3D80 006eff97 bl       #0x9f580
000C3D84 20f60736 tbz      w0, #0, #0xc3c48
000C3D88 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D8C 0f72ff97 bl       #0xa05c8
000C3D90 682243f9 ldr      x8, [x19, #0x640]
000C3D94 086140f9 ldr      x8, [x8, #0xc0]
000C3D98 1f010039 strb     wzr, [x8]
000C3D9C 682243f9 ldr      x8, [x19, #0x640]
000C3DA0 086540f9 ldr      x8, [x8, #0xc8]
000C3DA4 1f010039 strb     wzr, [x8]
000C3DA8 682243f9 ldr      x8, [x19, #0x640]
000C3DAC 086140f9 ldr      x8, [x8, #0xc0]
000C3DB0 08014039 ldrb     w8, [x8]
000C3DB4 68f5ff35 cbnz     w8, #0xc3c60
000C3DB8 e00313aa mov      x0, x19
000C3DBC 21008052 mov      w1, #1
000C3DC0 22008052 mov      w2, #1
000C3DC4 34008052 mov      w20, #1
000C3DC8 b693fd97 bl       #0x28ca0
000C3DCC a6ffff17 b        #0xc3c64
000C3DD0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3DD4 ed6eff97 bl       #0x9f988
000C3DD8 e803002a mov      w8, w0
000C3DDC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3DE0 08060036 tbz      w8, #0, #0xc3ea0
000C3DE4 826cff97 bl       #0x9efec
000C3DE8 607e43f9 ldr      x0, [x19, #0x6f8]
000C3DEC f16cff97 bl       #0x9f1b0
000C3DF0 e8008052 mov      w8, #7
000C3DF4 d0ffff17 b        #0xc3d34
000C3DF8 682243f9 ldr      x8, [x19, #0x640]
000C3DFC 29008052 mov      w9, #1
000C3E00 e00313aa mov      x0, x19
000C3E04 e1031f2a mov      w1, wzr
000C3E08 22008052 mov      w2, #1
000C3E0C 086140f9 ldr      x8, [x8, #0xc0]
000C3E10 09010039 strb     w9, [x8]
000C3E14 682243f9 ldr      x8, [x19, #0x640]
000C3E18 086540f9 ldr      x8, [x8, #0xc8]
000C3E1C 1f010039 strb     wzr, [x8]
000C3E20 a093fd97 bl       #0x28ca0
000C3E24 a0077d2d ldp      s0, s1, [x29, #-0x18]
000C3E28 089ea852 mov      w8, #0x44f00000
000C3E2C 0201271e fmov     s2, w8
000C3E30 0894a852 mov      w8, #0x44a00000
000C3E34 e1030091 mov      x1, sp
000C3E38 607e43f9 ldr      x0, [x19, #0x6f8]
000C3E3C 21d8215e scvtf    s1, s1
000C3E40 00d8215e scvtf    s0, s0
000C3E44 0008221e fmul     s0, s0, s2
000C3E48 0201271e fmov     s2, w8
000C3E4C e890a852 mov      w8, #0x44870000
000C3E50 0018221e fdiv     s0, s0, s2
000C3E54 0201271e fmov     s2, w8
000C3E58 8886a852 mov      w8, #0x44340000
000C3E5C 2108221e fmul     s1, s1, s2
000C3E60 0201271e fmov     s2, w8
000C3E64 2118221e fdiv     s1, s1, s2
000C3E68 e007002d stp      s0, s1, [sp]
000C3E6C aa70ff97 bl       #0xa0114
000C3E70 403500d0 adrp     x0, #0x76d000
000C3E74 00603791 add      x0, x0, #0xdd8
000C3E78 e8030091 mov      x8, sp
000C3E7C 00951094 bl       #0x4e927c
000C3E80 e0030091 mov      x0, sp
000C3E84 f2f70794 bl       #0x2c1e4c
000C3E88 e00f40f9 ldr      x0, [sp, #0x18]
000C3E8C a0eeffb4 cbz      x0, #0xc3c60
000C3E90 088c44f8 ldr      x8, [x0, #0x48]!
000C3E94 080d40f9 ldr      x8, [x8, #0x18]
000C3E98 00013fd6 blr      x8
000C3E9C 71ffff17 b        #0xc3c60
000C3EA0 cf6eff97 bl       #0x9f9dc
000C3EA4 60000036 tbz      w0, #0, #0xc3eb0
000C3EA8 08018052 mov      w8, #8
000C3EAC a2ffff17 b        #0xc3d34
000C3EB0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EB4 df6eff97 bl       #0x9fa30
000C3EB8 60000036 tbz      w0, #0, #0xc3ec4
000C3EBC 28018052 mov      w8, #9
000C3EC0 9dffff17 b        #0xc3d34
000C3EC4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EC8 ef6eff97 bl       #0x9fa84
000C3ECC 60000036 tbz      w0, #0, #0xc3ed8
000C3ED0 48018052 mov      w8, #0xa
000C3ED4 98ffff17 b        #0xc3d34
000C3ED8 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EDC ff6eff97 bl       #0x9fad8
000C3EE0 60000036 tbz      w0, #0, #0xc3eec
000C3EE4 68018052 mov      w8, #0xb
000C3EE8 93ffff17 b        #0xc3d34
000C3EEC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EF0 1d6fff97 bl       #0x9fb64
000C3EF4 60000036 tbz      w0, #0, #0xc3f00
000C3EF8 88018052 mov      w8, #0xc
000C3EFC 8effff17 b        #0xc3d34
000C3F00 e83800f0 adrp     x8, #0x7e2000
000C3F04 08010291 add      x8, x8, #0x80
000C3F08 080140f9 ldr      x8, [x8]
000C3F0C c80200b4 cbz      x8, #0xc3f64
000C3F10 083540f9 ldr      x8, [x8, #0x68]
000C3F14 880200b4 cbz      x8, #0xc3f64
000C3F18 08b14a39 ldrb     w8, [x8, #0x2ac]
000C3F1C c8000837 tbnz     w8, #1, #0xc3f34
000C3F20 607e43f9 ldr      x0, [x19, #0x6f8]
000C3F24 336fff97 bl       #0x9fbf0
000C3F28 a0000036 tbz      w0, #0, #0xc3f3c
000C3F2C c8018052 mov      w8, #0xe
000C3F30 81ffff17 b        #0xc3d34
000C3F34 a8018052 mov      w8, #0xd
000C3F38 7fffff17 b        #0xc3d34
000C3F3C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3F40 4f6fff97 bl       #0x9fc7c
000C3F44 60000036 tbz      w0, #0, #0xc3f50
000C3F48 e8018052 mov      w8, #0xf
000C3F4C 7affff17 b        #0xc3d34
000C3F50 607e43f9 ldr      x0, [x19, #0x6f8]
000C3F54 6d6fff97 bl       #0x9fd08
000C3F58 20ef0736 tbz      w0, #0, #0xc3d3c
000C3F5C 48038052 mov      w8, #0x1a
000C3F60 75ffff17 b        #0xc3d34
000C3F64 f7c81494 bl       #0x5f6340
~~~
### 0xc4190 (10 slots)
~~~asm
000C4190 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C4194 f30b00f9 str      x19, [sp, #0x10]
000C4198 fd030091 mov      x29, sp
000C419C e1031f2a mov      w1, wzr
000C41A0 f30300aa mov      x19, x0
000C41A4 a8c6fd97 bl       #0x35c44
000C41A8 60420491 add      x0, x19, #0x110
000C41AC f30b40f9 ldr      x19, [sp, #0x10]
000C41B0 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C41B4 11a2fd17 b        #0x2c9f8
~~~
### 0xc4318 (10 slots)
~~~asm
000C4318 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C431C f30b00f9 str      x19, [sp, #0x10]
000C4320 fd030091 mov      x29, sp
000C4324 41008052 mov      w1, #2
000C4328 f30300aa mov      x19, x0
000C432C 46c6fd97 bl       #0x35c44
000C4330 60420491 add      x0, x19, #0x110
000C4334 f30b40f9 ldr      x19, [sp, #0x10]
000C4338 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C433C afa1fd17 b        #0x2c9f8
~~~
### 0xc44b8 (92 slots)
~~~asm
000C44B8 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C44BC f44f01a9 stp      x20, x19, [sp, #0x10]
000C44C0 fd030091 mov      x29, sp
000C44C4 147c43f9 ldr      x20, [x0, #0x6f8]
000C44C8 f30300aa mov      x19, x0
000C44CC 1f7c03f9 str      xzr, [x0, #0x6f8]
000C44D0 940100b4 cbz      x20, #0xc4500
000C44D4 880240f9 ldr      x8, [x20]
000C44D8 e00314aa mov      x0, x20
000C44DC 080140f9 ldr      x8, [x8]
000C44E0 00013fd6 blr      x8
000C44E4 608243f9 ldr      x0, [x19, #0x700]
000C44E8 e10314aa mov      x1, x20
000C44EC 628643f9 ldr      x2, [x19, #0x708]
000C44F0 638a43f9 ldr      x3, [x19, #0x710]
000C44F4 080040f9 ldr      x8, [x0]
000C44F8 080d40f9 ldr      x8, [x8, #0x18]
000C44FC 00013fd6 blr      x8
000C4500 746e43f9 ldr      x20, [x19, #0x6d8]
000C4504 7f6e03f9 str      xzr, [x19, #0x6d8]
000C4508 940100b4 cbz      x20, #0xc4538
000C450C 880240f9 ldr      x8, [x20]
000C4510 e00314aa mov      x0, x20
000C4514 080140f9 ldr      x8, [x8]
000C4518 00013fd6 blr      x8
000C451C 607243f9 ldr      x0, [x19, #0x6e0]
000C4520 e10314aa mov      x1, x20
000C4524 627643f9 ldr      x2, [x19, #0x6e8]
000C4528 637a43f9 ldr      x3, [x19, #0x6f0]
000C452C 080040f9 ldr      x8, [x0]
000C4530 080d40f9 ldr      x8, [x8, #0x18]
000C4534 00013fd6 blr      x8
000C4538 745e43f9 ldr      x20, [x19, #0x6b8]
000C453C 7f5e03f9 str      xzr, [x19, #0x6b8]
000C4540 940100b4 cbz      x20, #0xc4570
000C4544 880240f9 ldr      x8, [x20]
000C4548 e00314aa mov      x0, x20
000C454C 080140f9 ldr      x8, [x8]
000C4550 00013fd6 blr      x8
000C4554 606243f9 ldr      x0, [x19, #0x6c0]
000C4558 e10314aa mov      x1, x20
000C455C 626643f9 ldr      x2, [x19, #0x6c8]
000C4560 636a43f9 ldr      x3, [x19, #0x6d0]
000C4564 080040f9 ldr      x8, [x0]
000C4568 080d40f9 ldr      x8, [x8, #0x18]
000C456C 00013fd6 blr      x8
000C4570 744e43f9 ldr      x20, [x19, #0x698]
000C4574 7f4e03f9 str      xzr, [x19, #0x698]
000C4578 940100b4 cbz      x20, #0xc45a8
000C457C 880240f9 ldr      x8, [x20]
000C4580 e00314aa mov      x0, x20
000C4584 080140f9 ldr      x8, [x8]
000C4588 00013fd6 blr      x8
000C458C 605243f9 ldr      x0, [x19, #0x6a0]
000C4590 e10314aa mov      x1, x20
000C4594 625643f9 ldr      x2, [x19, #0x6a8]
000C4598 635a43f9 ldr      x3, [x19, #0x6b0]
000C459C 080040f9 ldr      x8, [x0]
000C45A0 080d40f9 ldr      x8, [x8, #0x18]
000C45A4 00013fd6 blr      x8
000C45A8 743e43f9 ldr      x20, [x19, #0x678]
000C45AC 7f3e03f9 str      xzr, [x19, #0x678]
000C45B0 940100b4 cbz      x20, #0xc45e0
000C45B4 880240f9 ldr      x8, [x20]
000C45B8 e00314aa mov      x0, x20
000C45BC 080140f9 ldr      x8, [x8]
000C45C0 00013fd6 blr      x8
000C45C4 604243f9 ldr      x0, [x19, #0x680]
000C45C8 e10314aa mov      x1, x20
000C45CC 624643f9 ldr      x2, [x19, #0x688]
000C45D0 634a43f9 ldr      x3, [x19, #0x690]
000C45D4 080040f9 ldr      x8, [x0]
000C45D8 080d40f9 ldr      x8, [x8, #0x18]
000C45DC 00013fd6 blr      x8
000C45E0 742e43f9 ldr      x20, [x19, #0x658]
000C45E4 7f2e03f9 str      xzr, [x19, #0x658]
000C45E8 940100b4 cbz      x20, #0xc4618
000C45EC 880240f9 ldr      x8, [x20]
000C45F0 e00314aa mov      x0, x20
000C45F4 080140f9 ldr      x8, [x8]
000C45F8 00013fd6 blr      x8
000C45FC 603243f9 ldr      x0, [x19, #0x660]
000C4600 e10314aa mov      x1, x20
000C4604 623643f9 ldr      x2, [x19, #0x668]
000C4608 633a43f9 ldr      x3, [x19, #0x670]
000C460C 080040f9 ldr      x8, [x0]
000C4610 080d40f9 ldr      x8, [x8, #0x18]
000C4614 00013fd6 blr      x8
000C4618 e00313aa mov      x0, x19
000C461C f44f41a9 ldp      x20, x19, [sp, #0x10]
000C4620 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C4624 ff8ffd17 b        #0x28620
~~~
### 0xc4628 (1 slots)
~~~asm
000C4628 a4ffff17 b        #0xc44b8
~~~
### 0xc462c (1 slots)
~~~asm
000C462C 1629ff17 b        #0x8ea84
~~~
### 0xc4630 (2 slots)
~~~asm
000C4630 002001d1 sub      x0, x0, #0x48
000C4634 a1ffff17 b        #0xc44b8
~~~
### 0xc4638 (2 slots)
~~~asm
000C4638 002001d1 sub      x0, x0, #0x48
000C463C 9fffff17 b        #0xc44b8
~~~
### 0xc4640 (1 slots)
~~~asm
000C4640 1129ff17 b        #0x8ea84
~~~
### 0xc4644 (1 slots)
~~~asm
000C4644 1029ff17 b        #0x8ea84
~~~
### 0xc4648 (2 slots)
~~~asm
000C4648 004001d1 sub      x0, x0, #0x50
000C464C 9bffff17 b        #0xc44b8
~~~
### 0xc4650 (2 slots)
~~~asm
000C4650 004001d1 sub      x0, x0, #0x50
000C4654 99ffff17 b        #0xc44b8
~~~
### 0xc4658 (164 slots)
~~~asm
000C4658 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C465C f44f01a9 stp      x20, x19, [sp, #0x10]
000C4660 fd030091 mov      x29, sp
000C4664 e8360090 adrp     x8, #0x7a0000
000C4668 f30300aa mov      x19, x0
000C466C 086947f9 ldr      x8, [x8, #0xed0]
000C4670 14c440f9 ldr      x20, [x0, #0x188]
000C4674 1fc400f9 str      xzr, [x0, #0x188]
000C4678 08410091 add      x8, x8, #0x10
000C467C 080000f9 str      x8, [x0]
000C4680 740100b4 cbz      x20, #0xc46ac
000C4684 880240f9 ldr      x8, [x20]
000C4688 e00314aa mov      x0, x20
000C468C 080140f9 ldr      x8, [x8]
000C4690 00013fd6 blr      x8
000C4694 600a59a9 ldp      x0, x2, [x19, #0x190]
000C4698 e10314aa mov      x1, x20
000C469C 63d240f9 ldr      x3, [x19, #0x1a0]
000C46A0 080040f9 ldr      x8, [x0]
000C46A4 080d40f9 ldr      x8, [x8, #0x18]
000C46A8 00013fd6 blr      x8
000C46AC 61b640f9 ldr      x1, [x19, #0x168]
000C46B0 7fb600f9 str      xzr, [x19, #0x168]
000C46B4 c10000b4 cbz      x1, #0xc46cc
000C46B8 600a57a9 ldp      x0, x2, [x19, #0x170]
000C46BC 63c240f9 ldr      x3, [x19, #0x180]
000C46C0 080040f9 ldr      x8, [x0]
000C46C4 080d40f9 ldr      x8, [x8, #0x18]
000C46C8 00013fd6 blr      x8
000C46CC 74a640f9 ldr      x20, [x19, #0x148]
000C46D0 7fa600f9 str      xzr, [x19, #0x148]
000C46D4 740100b4 cbz      x20, #0xc4700
000C46D8 880240f9 ldr      x8, [x20]
000C46DC e00314aa mov      x0, x20
000C46E0 080140f9 ldr      x8, [x8]
000C46E4 00013fd6 blr      x8
000C46E8 600a55a9 ldp      x0, x2, [x19, #0x150]
000C46EC e10314aa mov      x1, x20
000C46F0 63b240f9 ldr      x3, [x19, #0x160]
000C46F4 080040f9 ldr      x8, [x0]
000C46F8 080d40f9 ldr      x8, [x8, #0x18]
000C46FC 00013fd6 blr      x8
000C4700 749640f9 ldr      x20, [x19, #0x128]
000C4704 7f9600f9 str      xzr, [x19, #0x128]
000C4708 740100b4 cbz      x20, #0xc4734
000C470C 880240f9 ldr      x8, [x20]
000C4710 e00314aa mov      x0, x20
000C4714 080140f9 ldr      x8, [x8]
000C4718 00013fd6 blr      x8
000C471C 600a53a9 ldp      x0, x2, [x19, #0x130]
000C4720 e10314aa mov      x1, x20
000C4724 63a240f9 ldr      x3, [x19, #0x140]
000C4728 080040f9 ldr      x8, [x0]
000C472C 080d40f9 ldr      x8, [x8, #0x18]
000C4730 00013fd6 blr      x8
000C4734 748640f9 ldr      x20, [x19, #0x108]
000C4738 7f8600f9 str      xzr, [x19, #0x108]
000C473C 740100b4 cbz      x20, #0xc4768
000C4740 880240f9 ldr      x8, [x20]
000C4744 e00314aa mov      x0, x20
000C4748 080140f9 ldr      x8, [x8]
000C474C 00013fd6 blr      x8
000C4750 600a51a9 ldp      x0, x2, [x19, #0x110]
000C4754 e10314aa mov      x1, x20
000C4758 639240f9 ldr      x3, [x19, #0x120]
000C475C 080040f9 ldr      x8, [x0]
000C4760 080d40f9 ldr      x8, [x8, #0x18]
000C4764 00013fd6 blr      x8
000C4768 747640f9 ldr      x20, [x19, #0xe8]
000C476C 7f7600f9 str      xzr, [x19, #0xe8]
000C4770 740100b4 cbz      x20, #0xc479c
000C4774 880240f9 ldr      x8, [x20]
000C4778 e00314aa mov      x0, x20
000C477C 080140f9 ldr      x8, [x8]
000C4780 00013fd6 blr      x8
000C4784 600a4fa9 ldp      x0, x2, [x19, #0xf0]
000C4788 e10314aa mov      x1, x20
000C478C 638240f9 ldr      x3, [x19, #0x100]
000C4790 080040f9 ldr      x8, [x0]
000C4794 080d40f9 ldr      x8, [x8, #0x18]
000C4798 00013fd6 blr      x8
000C479C 746640f9 ldr      x20, [x19, #0xc8]
000C47A0 7f6600f9 str      xzr, [x19, #0xc8]
000C47A4 740100b4 cbz      x20, #0xc47d0
000C47A8 880240f9 ldr      x8, [x20]
000C47AC e00314aa mov      x0, x20
000C47B0 080140f9 ldr      x8, [x8]
000C47B4 00013fd6 blr      x8
000C47B8 600a4da9 ldp      x0, x2, [x19, #0xd0]
000C47BC e10314aa mov      x1, x20
000C47C0 637240f9 ldr      x3, [x19, #0xe0]
000C47C4 080040f9 ldr      x8, [x0]
000C47C8 080d40f9 ldr      x8, [x8, #0x18]
000C47CC 00013fd6 blr      x8
000C47D0 745640f9 ldr      x20, [x19, #0xa8]
000C47D4 7f5600f9 str      xzr, [x19, #0xa8]
000C47D8 740100b4 cbz      x20, #0xc4804
000C47DC 880240f9 ldr      x8, [x20]
000C47E0 e00314aa mov      x0, x20
000C47E4 080140f9 ldr      x8, [x8]
000C47E8 00013fd6 blr      x8
000C47EC 600a4ba9 ldp      x0, x2, [x19, #0xb0]
000C47F0 e10314aa mov      x1, x20
000C47F4 636240f9 ldr      x3, [x19, #0xc0]
000C47F8 080040f9 ldr      x8, [x0]
000C47FC 080d40f9 ldr      x8, [x8, #0x18]
000C4800 00013fd6 blr      x8
000C4804 744640f9 ldr      x20, [x19, #0x88]
000C4808 7f4600f9 str      xzr, [x19, #0x88]
000C480C 740100b4 cbz      x20, #0xc4838
000C4810 880240f9 ldr      x8, [x20]
000C4814 e00314aa mov      x0, x20
000C4818 080140f9 ldr      x8, [x8]
000C481C 00013fd6 blr      x8
000C4820 600a49a9 ldp      x0, x2, [x19, #0x90]
000C4824 e10314aa mov      x1, x20
000C4828 635240f9 ldr      x3, [x19, #0xa0]
000C482C 080040f9 ldr      x8, [x0]
000C4830 080d40f9 ldr      x8, [x8, #0x18]
000C4834 00013fd6 blr      x8
000C4838 743640f9 ldr      x20, [x19, #0x68]
000C483C 7f3600f9 str      xzr, [x19, #0x68]
000C4840 740100b4 cbz      x20, #0xc486c
000C4844 880240f9 ldr      x8, [x20]
000C4848 e00314aa mov      x0, x20
000C484C 080140f9 ldr      x8, [x8]
000C4850 00013fd6 blr      x8
000C4854 600a47a9 ldp      x0, x2, [x19, #0x70]
000C4858 e10314aa mov      x1, x20
000C485C 634240f9 ldr      x3, [x19, #0x80]
000C4860 080040f9 ldr      x8, [x0]
000C4864 080d40f9 ldr      x8, [x8, #0x18]
000C4868 00013fd6 blr      x8
000C486C 742640f9 ldr      x20, [x19, #0x48]
000C4870 7f2600f9 str      xzr, [x19, #0x48]
000C4874 740100b4 cbz      x20, #0xc48a0
000C4878 880240f9 ldr      x8, [x20]
000C487C e00314aa mov      x0, x20
000C4880 080140f9 ldr      x8, [x8]
000C4884 00013fd6 blr      x8
000C4888 600a45a9 ldp      x0, x2, [x19, #0x50]
000C488C e10314aa mov      x1, x20
000C4890 633240f9 ldr      x3, [x19, #0x60]
000C4894 080040f9 ldr      x8, [x0]
000C4898 080d40f9 ldr      x8, [x8, #0x18]
000C489C 00013fd6 blr      x8
000C48A0 741640f9 ldr      x20, [x19, #0x28]
000C48A4 7f1600f9 str      xzr, [x19, #0x28]
000C48A8 b40100b4 cbz      x20, #0xc48dc
000C48AC 880240f9 ldr      x8, [x20]
000C48B0 e00314aa mov      x0, x20
000C48B4 080140f9 ldr      x8, [x8]
000C48B8 00013fd6 blr      x8
000C48BC 600a43a9 ldp      x0, x2, [x19, #0x30]
000C48C0 e10314aa mov      x1, x20
000C48C4 632240f9 ldr      x3, [x19, #0x40]
000C48C8 f44f41a9 ldp      x20, x19, [sp, #0x10]
000C48CC 080040f9 ldr      x8, [x0]
000C48D0 040d40f9 ldr      x4, [x8, #0x18]
000C48D4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C48D8 80001fd6 br       x4
000C48DC f44f41a9 ldp      x20, x19, [sp, #0x10]
000C48E0 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C48E4 c0035fd6 ret      
~~~
### 0xc48e8 (9 slots)
~~~asm
000C48E8 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C48EC f30b00f9 str      x19, [sp, #0x10]
000C48F0 fd030091 mov      x29, sp
000C48F4 f30300aa mov      x19, x0
000C48F8 58ffff97 bl       #0xc4658
000C48FC e00313aa mov      x0, x19
000C4900 f30b40f9 ldr      x19, [sp, #0x10]
000C4904 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C4908 7eeffc17 b        #0x700
~~~
### 0xc490c (1 slots)
~~~asm
000C490C 7deffc17 b        #0x700
~~~
### 0xd60e4 (21 slots)
~~~asm
000D60E4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D60E8 f30b00f9 str      x19, [sp, #0x10]
000D60EC fd030091 mov      x29, sp
000D60F0 483600d0 adrp     x8, #0x7a0000
000D60F4 f30300aa mov      x19, x0
000D60F8 08d947f9 ldr      x8, [x8, #0xfb0]
000D60FC 09410091 add      x9, x8, #0x10
000D6100 0aa10291 add      x10, x8, #0xa8
000D6104 08a10391 add      x8, x8, #0xe8
000D6108 090000f9 str      x9, [x0]
000D610C 0aa004a9 stp      x10, x8, [x0, #0x48]
000D6110 002443f9 ldr      x0, [x0, #0x648]
000D6114 a00000b4 cbz      x0, #0xd6128
000D6118 088c44f8 ldr      x8, [x0, #0x48]!
000D611C 080d40f9 ldr      x8, [x8, #0x18]
000D6120 00013fd6 blr      x8
000D6124 7f2603f9 str      xzr, [x19, #0x648]
000D6128 e00313aa mov      x0, x19
000D612C f30b40f9 ldr      x19, [sp, #0x10]
000D6130 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D6134 3b49fd17 b        #0x28620
~~~
### 0xd6138 (21 slots)
~~~asm
000D6138 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D613C f30b00f9 str      x19, [sp, #0x10]
000D6140 fd030091 mov      x29, sp
000D6144 483600d0 adrp     x8, #0x7a0000
000D6148 f30300aa mov      x19, x0
000D614C 08d947f9 ldr      x8, [x8, #0xfb0]
000D6150 09410091 add      x9, x8, #0x10
000D6154 0aa10291 add      x10, x8, #0xa8
000D6158 08a10391 add      x8, x8, #0xe8
000D615C 090000f9 str      x9, [x0]
000D6160 0aa004a9 stp      x10, x8, [x0, #0x48]
000D6164 002443f9 ldr      x0, [x0, #0x648]
000D6168 a00000b4 cbz      x0, #0xd617c
000D616C 088c44f8 ldr      x8, [x0, #0x48]!
000D6170 080d40f9 ldr      x8, [x8, #0x18]
000D6174 00013fd6 blr      x8
000D6178 7f2603f9 str      xzr, [x19, #0x648]
000D617C e00313aa mov      x0, x19
000D6180 f30b40f9 ldr      x19, [sp, #0x10]
000D6184 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D6188 2649fd17 b        #0x28620
~~~
### 0xd63e0 (1 slots)
~~~asm
000D63E0 c0035fd6 ret      
~~~
### 0xd63e4 (62 slots)
~~~asm
000D63E4 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000D63E8 f65701a9 stp      x22, x21, [sp, #0x10]
000D63EC f44f02a9 stp      x20, x19, [sp, #0x20]
000D63F0 fd030091 mov      x29, sp
000D63F4 140440f9 ldr      x20, [x0, #8]
000D63F8 f30300aa mov      x19, x0
000D63FC 01038052 mov      w1, #0x18
000D6400 02018052 mov      w2, #8
000D6404 880240f9 ldr      x8, [x20]
000D6408 e00314aa mov      x0, x20
000D640C 080940f9 ldr      x8, [x8, #0x10]
000D6410 00013fd6 blr      x8
000D6414 48d03bd5 mrs      x8, tpidr_el0
000D6418 16c97392 and      x22, x8, #0xffffffffffffe000
000D641C c84e40f9 ldr      x8, [x22, #0x98]
000D6420 1f4100f1 cmp      x8, #0x10
000D6424 a0050054 b.eq     #0xd64d8
000D6428 c80e088b add      x8, x22, x8, lsl #3
000D642C 62420491 add      x2, x19, #0x110
000D6430 e10314aa mov      x1, x20
000D6434 f50300aa mov      x21, x0
000D6438 140d00f9 str      x20, [x8, #0x18]
000D643C c84e40f9 ldr      x8, [x22, #0x98]
000D6440 08050091 add      x8, x8, #1
000D6444 c84e00f9 str      x8, [x22, #0x98]
000D6448 d051ff97 bl       #0xaab88
000D644C c84e40f9 ldr      x8, [x22, #0x98]
000D6450 080500d1 sub      x8, x8, #1
000D6454 c84e00f9 str      x8, [x22, #0x98]
000D6458 762a43f9 ldr      x22, [x19, #0x650]
000D645C 752a03f9 str      x21, [x19, #0x650]
000D6460 960100b4 cbz      x22, #0xd6490
000D6464 c80240f9 ldr      x8, [x22]
000D6468 e00316aa mov      x0, x22
000D646C 080140f9 ldr      x8, [x8]
000D6470 00013fd6 blr      x8
000D6474 602e43f9 ldr      x0, [x19, #0x658]
000D6478 e10316aa mov      x1, x22
000D647C 623243f9 ldr      x2, [x19, #0x660]
000D6480 633643f9 ldr      x3, [x19, #0x668]
000D6484 080040f9 ldr      x8, [x0]
000D6488 080d40f9 ldr      x8, [x8, #0x18]
000D648C 00013fd6 blr      x8
000D6490 08038052 mov      w8, #0x18
000D6494 e00313aa mov      x0, x19
000D6498 742e03f9 str      x20, [x19, #0x658]
000D649C 683203f9 str      x8, [x19, #0x660]
000D64A0 08018052 mov      w8, #8
000D64A4 683603f9 str      x8, [x19, #0x668]
000D64A8 0d000094 bl       #0xd64dc
000D64AC e00313aa mov      x0, x19
000D64B0 e1031f2a mov      w1, wzr
000D64B4 22008052 mov      w2, #1
000D64B8 3e4afd97 bl       #0x28db0
000D64BC e00313aa mov      x0, x19
000D64C0 f44f42a9 ldp      x20, x19, [sp, #0x20]
000D64C4 f65741a9 ldp      x22, x21, [sp, #0x10]
000D64C8 e1031f2a mov      w1, wzr
000D64CC 22008052 mov      w2, #1
000D64D0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000D64D4 f349fd17 b        #0x28ca0
000D64D8 ceb1fc97 bl       #0x2c10
~~~
### 0xd64dc (235 slots)
~~~asm
000D64DC ff0302d1 sub      sp, sp, #0x80
000D64E0 fd7b04a9 stp      x29, x30, [sp, #0x40]
000D64E4 f85f05a9 stp      x24, x23, [sp, #0x50]
000D64E8 f65706a9 stp      x22, x21, [sp, #0x60]
000D64EC f44f07a9 stp      x20, x19, [sp, #0x70]
000D64F0 fd030191 add      x29, sp, #0x40
000D64F4 082843f9 ldr      x8, [x0, #0x650]
000D64F8 f30300aa mov      x19, x0
000D64FC 010a8052 mov      w1, #0x50
000D6500 140440f9 ldr      x20, [x0, #8]
000D6504 02018052 mov      w2, #8
000D6508 a0a33ea9 stp      x0, x8, [x29, #-0x18]
000D650C 082043f9 ldr      x8, [x0, #0x640]
000D6510 e00314aa mov      x0, x20
000D6514 a8831ff8 stur     x8, [x29, #-8]
000D6518 880240f9 ldr      x8, [x20]
000D651C 080940f9 ldr      x8, [x8, #0x10]
000D6520 00013fd6 blr      x8
000D6524 48d03bd5 mrs      x8, tpidr_el0
000D6528 17c97392 and      x23, x8, #0xffffffffffffe000
000D652C e84e40f9 ldr      x8, [x23, #0x98]
000D6530 1f4100f1 cmp      x8, #0x10
000D6534 801a0054 b.eq     #0xd6884
000D6538 f8620091 add      x24, x23, #0x18
000D653C 147b28f8 str      x20, [x24, x8, lsl #3]
000D6540 e84e40f9 ldr      x8, [x23, #0x98]
000D6544 08050091 add      x8, x8, #1
000D6548 e84e00f9 str      x8, [x23, #0x98]
000D654C a8835ef8 ldur     x8, [x29, #-0x18]
000D6550 080400f9 str      x8, [x0, #8]
000D6554 a8035ff8 ldur     x8, [x29, #-0x10]
000D6558 080800f9 str      x8, [x0, #0x10]
000D655C a8835ff8 ldur     x8, [x29, #-8]
000D6560 080c00f9 str      x8, [x0, #0x18]
000D6564 28008052 mov      w8, #1
000D6568 08800039 strb     w8, [x0, #0x20]
000D656C c8340090 adrp     x8, #0x76e000
000D6570 08810991 add      x8, x8, #0x260
000D6574 1f2400f9 str      xzr, [x0, #0x48]
000D6578 1f1c00f9 str      xzr, [x0, #0x38]
000D657C 1ffc02a9 stp      xzr, xzr, [x0, #0x28]
000D6580 1fe003f8 stur     xzr, [x0, #0x3e]
000D6584 08410091 add      x8, x8, #0x10
000D6588 080000f9 str      x8, [x0]
000D658C e84e40f9 ldr      x8, [x23, #0x98]
000D6590 080500d1 sub      x8, x8, #1
000D6594 e84e00f9 str      x8, [x23, #0x98]
000D6598 753a43f9 ldr      x21, [x19, #0x670]
000D659C 603a03f9 str      x0, [x19, #0x670]
000D65A0 950100b4 cbz      x21, #0xd65d0
000D65A4 a80240f9 ldr      x8, [x21]
000D65A8 e00315aa mov      x0, x21
000D65AC 080140f9 ldr      x8, [x8]
000D65B0 00013fd6 blr      x8
000D65B4 603e43f9 ldr      x0, [x19, #0x678]
000D65B8 e10315aa mov      x1, x21
000D65BC 624243f9 ldr      x2, [x19, #0x680]
000D65C0 634643f9 ldr      x3, [x19, #0x688]
000D65C4 080040f9 ldr      x8, [x0]
000D65C8 080d40f9 ldr      x8, [x8, #0x18]
000D65CC 00013fd6 blr      x8
000D65D0 080a8052 mov      w8, #0x50
000D65D4 743e03f9 str      x20, [x19, #0x678]
000D65D8 01dd8052 mov      w1, #0x6e8
000D65DC 684203f9 str      x8, [x19, #0x680]
000D65E0 08018052 mov      w8, #8
000D65E4 e00314aa mov      x0, x20
000D65E8 684603f9 str      x8, [x19, #0x688]
000D65EC 02018052 mov      w2, #8
000D65F0 880240f9 ldr      x8, [x20]
000D65F4 080940f9 ldr      x8, [x8, #0x10]
000D65F8 00013fd6 blr      x8
000D65FC e84e40f9 ldr      x8, [x23, #0x98]
000D6600 1f4100f1 cmp      x8, #0x10
000D6604 00140054 b.eq     #0xd6884
000D6608 147b28f8 str      x20, [x24, x8, lsl #3]
000D660C a16300d1 sub      x1, x29, #0x18
000D6610 e84e40f9 ldr      x8, [x23, #0x98]
000D6614 f50300aa mov      x21, x0
000D6618 08050091 add      x8, x8, #1
000D661C e84e00f9 str      x8, [x23, #0x98]
000D6620 0a030094 bl       #0xd7248
000D6624 e84e40f9 ldr      x8, [x23, #0x98]
000D6628 080500d1 sub      x8, x8, #1
000D662C e84e00f9 str      x8, [x23, #0x98]
000D6630 764a43f9 ldr      x22, [x19, #0x690]
000D6634 754a03f9 str      x21, [x19, #0x690]
000D6638 960100b4 cbz      x22, #0xd6668
000D663C c80240f9 ldr      x8, [x22]
000D6640 e00316aa mov      x0, x22
000D6644 080140f9 ldr      x8, [x8]
000D6648 00013fd6 blr      x8
000D664C 604e43f9 ldr      x0, [x19, #0x698]
000D6650 e10316aa mov      x1, x22
000D6654 625243f9 ldr      x2, [x19, #0x6a0]
000D6658 635643f9 ldr      x3, [x19, #0x6a8]
000D665C 080040f9 ldr      x8, [x0]
000D6660 080d40f9 ldr      x8, [x8, #0x18]
000D6664 00013fd6 blr      x8
000D6668 08dd8052 mov      w8, #0x6e8
000D666C 744e03f9 str      x20, [x19, #0x698]
000D6670 019f8052 mov      w1, #0x4f8
000D6674 685203f9 str      x8, [x19, #0x6a0]
000D6678 08018052 mov      w8, #8
000D667C e00314aa mov      x0, x20
000D6680 685603f9 str      x8, [x19, #0x6a8]
000D6684 02018052 mov      w2, #8
000D6688 880240f9 ldr      x8, [x20]
000D668C 080940f9 ldr      x8, [x8, #0x10]
000D6690 00013fd6 blr      x8
000D6694 e84e40f9 ldr      x8, [x23, #0x98]
000D6698 1f4100f1 cmp      x8, #0x10
000D669C 400f0054 b.eq     #0xd6884
000D66A0 147b28f8 str      x20, [x24, x8, lsl #3]
000D66A4 a83400f0 adrp     x8, #0x76d000
000D66A8 08e12691 add      x8, x8, #0x9b8
000D66AC e94e40f9 ldr      x9, [x23, #0x98]
000D66B0 f50300aa mov      x21, x0
000D66B4 22958052 mov      w2, #0x4a9
000D66B8 e1031f2a mov      w1, wzr
000D66BC 29050091 add      x9, x9, #1
000D66C0 08410091 add      x8, x8, #0x10
000D66C4 e94e00f9 str      x9, [x23, #0x98]
000D66C8 080000f9 str      x8, [x0]
000D66CC 493600f0 adrp     x9, #0x7a1000
000D66D0 a8835ef8 ldur     x8, [x29, #-0x18]
000D66D4 080400f9 str      x8, [x0, #8]
000D66D8 a8035ff8 ldur     x8, [x29, #-0x10]
000D66DC 293d40f9 ldr      x9, [x9, #0x78]
000D66E0 080800f9 str      x8, [x0, #0x10]
000D66E4 28008052 mov      w8, #1
000D66E8 1ffc02a9 stp      xzr, xzr, [x0, #0x28]
000D66EC 1ffc03a9 stp      xzr, xzr, [x0, #0x38]
000D66F0 08800039 strb     w8, [x0, #0x20]
000D66F4 a8835ff8 ldur     x8, [x29, #-8]
000D66F8 080c00f9 str      x8, [x0, #0x18]
000D66FC 28410091 add      x8, x9, #0x10
000D6700 088404f8 str      x8, [x0], #0x48
000D6704 937e1494 bl       #0x5f6150
000D6708 e84e40f9 ldr      x8, [x23, #0x98]
000D670C 080500d1 sub      x8, x8, #1
000D6710 e84e00f9 str      x8, [x23, #0x98]
000D6714 765a43f9 ldr      x22, [x19, #0x6b0]
000D6718 755a03f9 str      x21, [x19, #0x6b0]
000D671C 960100b4 cbz      x22, #0xd674c
000D6720 c80240f9 ldr      x8, [x22]
000D6724 e00316aa mov      x0, x22
000D6728 080140f9 ldr      x8, [x8]
000D672C 00013fd6 blr      x8
000D6730 605e43f9 ldr      x0, [x19, #0x6b8]
000D6734 e10316aa mov      x1, x22
000D6738 626243f9 ldr      x2, [x19, #0x6c0]
000D673C 636643f9 ldr      x3, [x19, #0x6c8]
000D6740 080040f9 ldr      x8, [x0]
000D6744 080d40f9 ldr      x8, [x8, #0x18]
000D6748 00013fd6 blr      x8
000D674C 603a43f9 ldr      x0, [x19, #0x670]
000D6750 089f8052 mov      w8, #0x4f8
000D6754 745e03f9 str      x20, [x19, #0x6b8]
000D6758 686203f9 str      x8, [x19, #0x6c0]
000D675C 08018052 mov      w8, #8
000D6760 686603f9 str      x8, [x19, #0x6c8]
000D6764 de030094 bl       #0xd76dc
000D6768 604a43f9 ldr      x0, [x19, #0x690]
000D676C 79050094 bl       #0xd7d50
000D6770 605a43f9 ldr      x0, [x19, #0x6b0]
000D6774 e1031f2a mov      w1, wzr
000D6778 565bff97 bl       #0xad4d0
000D677C 603a43f9 ldr      x0, [x19, #0x670]
000D6780 21008052 mov      w1, #1
000D6784 f06cff97 bl       #0xb1b44
000D6788 604a43f9 ldr      x0, [x19, #0x690]
000D678C 21008052 mov      w1, #1
000D6790 ed6cff97 bl       #0xb1b44
000D6794 605a43f9 ldr      x0, [x19, #0x6b0]
000D6798 21008052 mov      w1, #1
000D679C ea6cff97 bl       #0xb1b44
000D67A0 e8230091 add      x8, sp, #8
000D67A4 a16300d1 sub      x1, x29, #0x18
000D67A8 e00314aa mov      x0, x20
000D67AC d9010094 bl       #0xd6f10
000D67B0 e80740f9 ldr      x8, [sp, #8]
000D67B4 ff0700f9 str      xzr, [sp, #8]
000D67B8 746a43f9 ldr      x20, [x19, #0x6d0]
000D67BC 686a03f9 str      x8, [x19, #0x6d0]
000D67C0 d40300b4 cbz      x20, #0xd6838
000D67C4 880240f9 ldr      x8, [x20]
000D67C8 e00314aa mov      x0, x20
000D67CC 080140f9 ldr      x8, [x8]
000D67D0 00013fd6 blr      x8
000D67D4 606e43f9 ldr      x0, [x19, #0x6d8]
000D67D8 e10314aa mov      x1, x20
000D67DC 627243f9 ldr      x2, [x19, #0x6e0]
000D67E0 637643f9 ldr      x3, [x19, #0x6e8]
000D67E4 080040f9 ldr      x8, [x0]
000D67E8 080d40f9 ldr      x8, [x8, #0x18]
000D67EC 00013fd6 blr      x8
000D67F0 f4a340a9 ldp      x20, x8, [sp, #8]
000D67F4 ff0700f9 str      xzr, [sp, #8]
000D67F8 686e03f9 str      x8, [x19, #0x6d8]
000D67FC e8a741a9 ldp      x8, x9, [sp, #0x18]
000D6800 687203f9 str      x8, [x19, #0x6e0]
000D6804 697603f9 str      x9, [x19, #0x6e8]
000D6808 340200b4 cbz      x20, #0xd684c
000D680C 880240f9 ldr      x8, [x20]
000D6810 e00314aa mov      x0, x20
000D6814 080140f9 ldr      x8, [x8]
000D6818 00013fd6 blr      x8
000D681C e00b41a9 ldp      x0, x2, [sp, #0x10]
000D6820 e10314aa mov      x1, x20
000D6824 e31340f9 ldr      x3, [sp, #0x20]
000D6828 080040f9 ldr      x8, [x0]
000D682C 080d40f9 ldr      x8, [x8, #0x18]
000D6830 00013fd6 blr      x8
000D6834 06000014 b        #0xd684c
000D6838 e82741a9 ldp      x8, x9, [sp, #0x10]
000D683C 686e03f9 str      x8, [x19, #0x6d8]
000D6840 e81340f9 ldr      x8, [sp, #0x20]
000D6844 697203f9 str      x9, [x19, #0x6e0]
000D6848 687603f9 str      x8, [x19, #0x6e8]
000D684C 606a43f9 ldr      x0, [x19, #0x6d0]
000D6850 615a43f9 ldr      x1, [x19, #0x6b0]
000D6854 623a43f9 ldr      x2, [x19, #0x670]
000D6858 634a43f9 ldr      x3, [x19, #0x690]
000D685C e50b0094 bl       #0xd97f0
000D6860 606a43f9 ldr      x0, [x19, #0x6d0]
000D6864 21008052 mov      w1, #1
000D6868 b76cff97 bl       #0xb1b44
000D686C f44f47a9 ldp      x20, x19, [sp, #0x70]
000D6870 f65746a9 ldp      x22, x21, [sp, #0x60]
000D6874 f85f45a9 ldp      x24, x23, [sp, #0x50]
000D6878 fd7b44a9 ldp      x29, x30, [sp, #0x40]
000D687C ff030291 add      sp, sp, #0x80
000D6880 c0035fd6 ret      
000D6884 e3b0fc97 bl       #0x2c10
~~~
### 0xd6888 (71 slots)
~~~asm
000D6888 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D688C f30b00f9 str      x19, [sp, #0x10]
000D6890 fd030091 mov      x29, sp
000D6894 f30300aa mov      x19, x0
000D6898 004843f9 ldr      x0, [x0, #0x690]
000D689C 080040f9 ldr      x8, [x0]
000D68A0 080940f9 ldr      x8, [x8, #0x10]
000D68A4 00013fd6 blr      x8
000D68A8 684a43f9 ldr      x8, [x19, #0x690]
000D68AC 09dd46b9 ldr      w9, [x8, #0x6dc]
000D68B0 1fdd06b9 str      wzr, [x8, #0x6dc]
000D68B4 28050051 sub      w8, w9, #1
000D68B8 1f250071 cmp      w8, #9
000D68BC c8060054 b.hi     #0xd6994
000D68C0 692a00f0 adrp     x9, #0x625000
000D68C4 29c13b91 add      x9, x9, #0xef0
000D68C8 8a000010 adr      x10, #0xd68d8
000D68CC 2b696838 ldrb     w11, [x9, x8]
000D68D0 4a090b8b add      x10, x10, x11, lsl #2
000D68D4 40011fd6 br       x10
000D68D8 28008052 mov      w8, #1
000D68DC 2d000014 b        #0xd6990
000D68E0 c8008052 mov      w8, #6
000D68E4 2b000014 b        #0xd6990
000D68E8 e8008052 mov      w8, #7
000D68EC 29000014 b        #0xd6990
000D68F0 606a43f9 ldr      x0, [x19, #0x6d0]
000D68F4 57160094 bl       #0xdc250
000D68F8 607242f9 ldr      x0, [x19, #0x4e0]
000D68FC 400000b4 cbz      x0, #0xd6904
000D6900 79a60794 bl       #0x2c02e4
000D6904 606a43f9 ldr      x0, [x19, #0x6d0]
000D6908 21008052 mov      w1, #1
000D690C f30b40f9 ldr      x19, [sp, #0x10]
000D6910 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D6914 17140014 b        #0xdb970
000D6918 606a43f9 ldr      x0, [x19, #0x6d0]
000D691C 3d180094 bl       #0xdca10
000D6920 12000014 b        #0xd6968
000D6924 682243f9 ldr      x8, [x19, #0x640]
000D6928 008d43f9 ldr      x0, [x8, #0x718]
000D692C a00300b4 cbz      x0, #0xd69a0
000D6930 3629ff97 bl       #0xa0e08
000D6934 00030034 cbz      w0, #0xd6994
000D6938 68018052 mov      w8, #0xb
000D693C 15000014 b        #0xd6990
000D6940 48008052 mov      w8, #2
000D6944 13000014 b        #0xd6990
000D6948 28018052 mov      w8, #9
000D694C 11000014 b        #0xd6990
000D6950 682243f9 ldr      x8, [x19, #0x640]
000D6954 082940f9 ldr      x8, [x8, #0x50]
000D6958 080140b9 ldr      w8, [x8]
000D695C 68000034 cbz      w8, #0xd6968
000D6960 08018052 mov      w8, #8
000D6964 0b000014 b        #0xd6990
000D6968 607242f9 ldr      x0, [x19, #0x4e0]
000D696C 400100b4 cbz      x0, #0xd6994
000D6970 f30b40f9 ldr      x19, [sp, #0x10]
000D6974 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D6978 5ba60714 b        #0x2c02e4
000D697C 682243f9 ldr      x8, [x19, #0x640]
000D6980 008d43f9 ldr      x0, [x8, #0x718]
000D6984 e00000b4 cbz      x0, #0xd69a0
000D6988 9d22ff97 bl       #0x9f3fc
000D698C 48018052 mov      w8, #0xa
000D6990 684a06b9 str      w8, [x19, #0x648]
000D6994 f30b40f9 ldr      x19, [sp, #0x10]
000D6998 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D699C c0035fd6 ret      
000D69A0 687e1494 bl       #0x5f6340
~~~
### 0xd69a4 (102 slots)
~~~asm
000D69A4 ffc301d1 sub      sp, sp, #0x70
000D69A8 fd7b04a9 stp      x29, x30, [sp, #0x40]
000D69AC f65705a9 stp      x22, x21, [sp, #0x50]
000D69B0 f44f06a9 stp      x20, x19, [sp, #0x60]
000D69B4 fd030191 add      x29, sp, #0x40
000D69B8 e82900d0 adrp     x8, #0x614000
000D69BC 08153d91 add      x8, x8, #0xf45
000D69C0 a8831ff8 stur     x8, [x29, #-8]
000D69C4 e8230091 add      x8, sp, #8
000D69C8 a02300d1 sub      x0, x29, #8
000D69CC f30302aa mov      x19, x2
000D69D0 f40301aa mov      x20, x1
000D69D4 1e67fd97 bl       #0x3064c
000D69D8 880e40f9 ldr      x8, [x20, #0x18]
000D69DC c80000b4 cbz      x8, #0xd69f4
000D69E0 800240f9 ldr      x0, [x20]
000D69E4 800000b4 cbz      x0, #0xd69f4
000D69E8 088c44f8 ldr      x8, [x0, #0x48]!
000D69EC 080d40f9 ldr      x8, [x8, #0x18]
000D69F0 00013fd6 blr      x8
000D69F4 801240f9 ldr      x0, [x20, #0x20]
000D69F8 b5c884d2 mov      x21, #0x2645
000D69FC 5584b0f2 movk     x21, #0x8422, lsl #16
000D6A00 959cd3f2 movk     x21, #0x9ce4, lsl #32
000D6A04 557ef9f2 movk     x21, #0xcbf2, lsl #48
000D6A08 d62900b0 adrp     x22, #0x60f000
000D6A0C d60e1a91 add      x22, x22, #0x683
000D6A10 9f5600a9 stp      xzr, x21, [x20]
000D6A14 967e01a9 stp      x22, xzr, [x20, #0x10]
000D6A18 800000b4 cbz      x0, #0xd6a28
000D6A1C 088c44f8 ldr      x8, [x0, #0x48]!
000D6A20 080d40f9 ldr      x8, [x8, #0x18]
000D6A24 00013fd6 blr      x8
000D6A28 e82742a9 ldp      x8, x9, [sp, #0x20]
000D6A2C ff1700f9 str      xzr, [sp, #0x28]
000D6A30 ea2f41a9 ldp      x10, x11, [sp, #0x10]
000D6A34 88a601a9 stp      x8, x9, [x20, #0x18]
000D6A38 e93340b9 ldr      w9, [sp, #0x30]
000D6A3C 8aae00a9 stp      x10, x11, [x20, #8]
000D6A40 892a00b9 str      w9, [x20, #0x28]
000D6A44 c80000b4 cbz      x8, #0xd6a5c
000D6A48 800240f9 ldr      x0, [x20]
000D6A4C 800000b4 cbz      x0, #0xd6a5c
000D6A50 088c44f8 ldr      x8, [x0, #0x48]!
000D6A54 080d40f9 ldr      x8, [x8, #0x18]
000D6A58 00013fd6 blr      x8
000D6A5C e80740f9 ldr      x8, [sp, #8]
000D6A60 ffd700a9 stp      xzr, x21, [sp, #8]
000D6A64 e01740f9 ldr      x0, [sp, #0x28]
000D6A68 880200f9 str      x8, [x20]
000D6A6C f6ff01a9 stp      x22, xzr, [sp, #0x18]
000D6A70 800000b4 cbz      x0, #0xd6a80
000D6A74 088c44f8 ldr      x8, [x0, #0x48]!
000D6A78 080d40f9 ldr      x8, [x8, #0x18]
000D6A7C 00013fd6 blr      x8
000D6A80 a82900d0 adrp     x8, #0x60c000
000D6A84 083d0e91 add      x8, x8, #0x38f
000D6A88 a8831ff8 stur     x8, [x29, #-8]
000D6A8C e8230091 add      x8, sp, #8
000D6A90 a02300d1 sub      x0, x29, #8
000D6A94 ee66fd97 bl       #0x3064c
000D6A98 680e40f9 ldr      x8, [x19, #0x18]
000D6A9C c80000b4 cbz      x8, #0xd6ab4
000D6AA0 600240f9 ldr      x0, [x19]
000D6AA4 800000b4 cbz      x0, #0xd6ab4
000D6AA8 088c44f8 ldr      x8, [x0, #0x48]!
000D6AAC 080d40f9 ldr      x8, [x8, #0x18]
000D6AB0 00013fd6 blr      x8
000D6AB4 601240f9 ldr      x0, [x19, #0x20]
000D6AB8 7f5600a9 stp      xzr, x21, [x19]
000D6ABC 767e01a9 stp      x22, xzr, [x19, #0x10]
000D6AC0 800000b4 cbz      x0, #0xd6ad0
000D6AC4 088c44f8 ldr      x8, [x0, #0x48]!
000D6AC8 080d40f9 ldr      x8, [x8, #0x18]
000D6ACC 00013fd6 blr      x8
000D6AD0 e82742a9 ldp      x8, x9, [sp, #0x20]
000D6AD4 ff1700f9 str      xzr, [sp, #0x28]
000D6AD8 ea2f41a9 ldp      x10, x11, [sp, #0x10]
000D6ADC 68a601a9 stp      x8, x9, [x19, #0x18]
000D6AE0 e93340b9 ldr      w9, [sp, #0x30]
000D6AE4 6aae00a9 stp      x10, x11, [x19, #8]
000D6AE8 692a00b9 str      w9, [x19, #0x28]
000D6AEC c80000b4 cbz      x8, #0xd6b04
000D6AF0 600240f9 ldr      x0, [x19]
000D6AF4 800000b4 cbz      x0, #0xd6b04
000D6AF8 088c44f8 ldr      x8, [x0, #0x48]!
000D6AFC 080d40f9 ldr      x8, [x8, #0x18]
000D6B00 00013fd6 blr      x8
000D6B04 e80740f9 ldr      x8, [sp, #8]
000D6B08 ffd700a9 stp      xzr, x21, [sp, #8]
000D6B0C e01740f9 ldr      x0, [sp, #0x28]
000D6B10 680200f9 str      x8, [x19]
000D6B14 f6ff01a9 stp      x22, xzr, [sp, #0x18]
000D6B18 800000b4 cbz      x0, #0xd6b28
000D6B1C 088c44f8 ldr      x8, [x0, #0x48]!
000D6B20 080d40f9 ldr      x8, [x8, #0x18]
000D6B24 00013fd6 blr      x8
000D6B28 f44f46a9 ldp      x20, x19, [sp, #0x60]
000D6B2C f65745a9 ldp      x22, x21, [sp, #0x50]
000D6B30 fd7b44a9 ldp      x29, x30, [sp, #0x40]
000D6B34 ffc30191 add      sp, sp, #0x70
000D6B38 c0035fd6 ret      
~~~
### 0xd6b3c (25 slots)
~~~asm
000D6B3C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D6B40 f30b00f9 str      x19, [sp, #0x10]
000D6B44 fd030091 mov      x29, sp
000D6B48 f30300aa mov      x19, x0
000D6B4C 006843f9 ldr      x0, [x0, #0x6d0]
000D6B50 30120094 bl       #0xdb410
000D6B54 605a43f9 ldr      x0, [x19, #0x6b0]
000D6B58 080040f9 ldr      x8, [x0]
000D6B5C 080d40f9 ldr      x8, [x8, #0x18]
000D6B60 00013fd6 blr      x8
000D6B64 604a43f9 ldr      x0, [x19, #0x690]
000D6B68 11080094 bl       #0xd8bac
000D6B6C 606a43f9 ldr      x0, [x19, #0x6d0]
000D6B70 e8160094 bl       #0xdc710
000D6B74 08040051 sub      w8, w0, #1
000D6B78 1f0d0071 cmp      w8, #3
000D6B7C a8000054 b.hi     #0xd6b90
000D6B80 692a00d0 adrp     x9, #0x624000
000D6B84 29812791 add      x9, x9, #0x9e0
000D6B88 28d968b8 ldr      w8, [x9, w8, sxtw #2]
000D6B8C 684a06b9 str      w8, [x19, #0x648]
000D6B90 f30b40f9 ldr      x19, [sp, #0x10]
000D6B94 e0031f2a mov      w0, wzr
000D6B98 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D6B9C c0035fd6 ret      
~~~
### 0xd6cdc (10 slots)
~~~asm
000D6CDC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D6CE0 f30b00f9 str      x19, [sp, #0x10]
000D6CE4 fd030091 mov      x29, sp
000D6CE8 41008052 mov      w1, #2
000D6CEC f30300aa mov      x19, x0
000D6CF0 d57bfd97 bl       #0x35c44
000D6CF4 60420491 add      x0, x19, #0x110
000D6CF8 f30b40f9 ldr      x19, [sp, #0x10]
000D6CFC fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D6D00 3e57fd17 b        #0x2c9f8
~~~
### 0xd70dc (78 slots)
~~~asm
000D70DC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D70E0 f44f01a9 stp      x20, x19, [sp, #0x10]
000D70E4 fd030091 mov      x29, sp
000D70E8 146843f9 ldr      x20, [x0, #0x6d0]
000D70EC f30300aa mov      x19, x0
000D70F0 1f6803f9 str      xzr, [x0, #0x6d0]
000D70F4 940100b4 cbz      x20, #0xd7124
000D70F8 880240f9 ldr      x8, [x20]
000D70FC e00314aa mov      x0, x20
000D7100 080140f9 ldr      x8, [x8]
000D7104 00013fd6 blr      x8
000D7108 606e43f9 ldr      x0, [x19, #0x6d8]
000D710C e10314aa mov      x1, x20
000D7110 627243f9 ldr      x2, [x19, #0x6e0]
000D7114 637643f9 ldr      x3, [x19, #0x6e8]
000D7118 080040f9 ldr      x8, [x0]
000D711C 080d40f9 ldr      x8, [x8, #0x18]
000D7120 00013fd6 blr      x8
000D7124 745a43f9 ldr      x20, [x19, #0x6b0]
000D7128 7f5a03f9 str      xzr, [x19, #0x6b0]
000D712C 940100b4 cbz      x20, #0xd715c
000D7130 880240f9 ldr      x8, [x20]
000D7134 e00314aa mov      x0, x20
000D7138 080140f9 ldr      x8, [x8]
000D713C 00013fd6 blr      x8
000D7140 605e43f9 ldr      x0, [x19, #0x6b8]
000D7144 e10314aa mov      x1, x20
000D7148 626243f9 ldr      x2, [x19, #0x6c0]
000D714C 636643f9 ldr      x3, [x19, #0x6c8]
000D7150 080040f9 ldr      x8, [x0]
000D7154 080d40f9 ldr      x8, [x8, #0x18]
000D7158 00013fd6 blr      x8
000D715C 744a43f9 ldr      x20, [x19, #0x690]
000D7160 7f4a03f9 str      xzr, [x19, #0x690]
000D7164 940100b4 cbz      x20, #0xd7194
000D7168 880240f9 ldr      x8, [x20]
000D716C e00314aa mov      x0, x20
000D7170 080140f9 ldr      x8, [x8]
000D7174 00013fd6 blr      x8
000D7178 604e43f9 ldr      x0, [x19, #0x698]
000D717C e10314aa mov      x1, x20
000D7180 625243f9 ldr      x2, [x19, #0x6a0]
000D7184 635643f9 ldr      x3, [x19, #0x6a8]
000D7188 080040f9 ldr      x8, [x0]
000D718C 080d40f9 ldr      x8, [x8, #0x18]
000D7190 00013fd6 blr      x8
000D7194 743a43f9 ldr      x20, [x19, #0x670]
000D7198 7f3a03f9 str      xzr, [x19, #0x670]
000D719C 940100b4 cbz      x20, #0xd71cc
000D71A0 880240f9 ldr      x8, [x20]
000D71A4 e00314aa mov      x0, x20
000D71A8 080140f9 ldr      x8, [x8]
000D71AC 00013fd6 blr      x8
000D71B0 603e43f9 ldr      x0, [x19, #0x678]
000D71B4 e10314aa mov      x1, x20
000D71B8 624243f9 ldr      x2, [x19, #0x680]
000D71BC 634643f9 ldr      x3, [x19, #0x688]
000D71C0 080040f9 ldr      x8, [x0]
000D71C4 080d40f9 ldr      x8, [x8, #0x18]
000D71C8 00013fd6 blr      x8
000D71CC 742a43f9 ldr      x20, [x19, #0x650]
000D71D0 7f2a03f9 str      xzr, [x19, #0x650]
000D71D4 940100b4 cbz      x20, #0xd7204
000D71D8 880240f9 ldr      x8, [x20]
000D71DC e00314aa mov      x0, x20
000D71E0 080140f9 ldr      x8, [x8]
000D71E4 00013fd6 blr      x8
000D71E8 602e43f9 ldr      x0, [x19, #0x658]
000D71EC e10314aa mov      x1, x20
000D71F0 623243f9 ldr      x2, [x19, #0x660]
000D71F4 633643f9 ldr      x3, [x19, #0x668]
000D71F8 080040f9 ldr      x8, [x0]
000D71FC 080d40f9 ldr      x8, [x8, #0x18]
000D7200 00013fd6 blr      x8
000D7204 e00313aa mov      x0, x19
000D7208 f44f41a9 ldp      x20, x19, [sp, #0x10]
000D720C fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D7210 0445fd17 b        #0x28620
~~~
### 0xd7214 (1 slots)
~~~asm
000D7214 b2ffff17 b        #0xd70dc
~~~
### 0xd7218 (1 slots)
~~~asm
000D7218 a7defe17 b        #0x8ecb4
~~~
### 0xd721c (2 slots)
~~~asm
000D721C 002001d1 sub      x0, x0, #0x48
000D7220 afffff17 b        #0xd70dc
~~~
### 0xd7224 (2 slots)
~~~asm
000D7224 002001d1 sub      x0, x0, #0x48
000D7228 adffff17 b        #0xd70dc
~~~
### 0xd722c (1 slots)
~~~asm
000D722C a2defe17 b        #0x8ecb4
~~~
### 0xd7230 (1 slots)
~~~asm
000D7230 a1defe17 b        #0x8ecb4
~~~
### 0xd7234 (2 slots)
~~~asm
000D7234 004001d1 sub      x0, x0, #0x50
000D7238 a9ffff17 b        #0xd70dc
~~~
### 0xd723c (2 slots)
~~~asm
000D723C 004001d1 sub      x0, x0, #0x50
000D7240 a7ffff17 b        #0xd70dc
~~~
### 0xd7244 (1 slots)
~~~asm
000D7244 2fa5fc17 b        #0x700
~~~
### 0xd75a0 (39 slots)
~~~asm
000D75A0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D75A4 f30b00f9 str      x19, [sp, #0x10]
000D75A8 fd030091 mov      x29, sp
000D75AC 083a9152 mov      w8, #0x89d0
000D75B0 1300088b add      x19, x0, x8
000D75B4 a83400f0 adrp     x8, #0x76e000
000D75B8 08810a91 add      x8, x8, #0x2a0
000D75BC 612240f9 ldr      x1, [x19, #0x40]
000D75C0 08410091 add      x8, x8, #0x10
000D75C4 080000f9 str      x8, [x0]
000D75C8 010100b4 cbz      x1, #0xd75e8
000D75CC 680245a9 ldp      x8, x0, [x19, #0x50]
000D75D0 612600f9 str      x1, [x19, #0x48]
000D75D4 03018052 mov      w3, #8
000D75D8 020101cb sub      x2, x8, x1
000D75DC 080040f9 ldr      x8, [x0]
000D75E0 080d40f9 ldr      x8, [x8, #0x18]
000D75E4 00013fd6 blr      x8
000D75E8 601240f9 ldr      x0, [x19, #0x20]
000D75EC a00000b4 cbz      x0, #0xd7600
000D75F0 088c44f8 ldr      x8, [x0, #0x48]!
000D75F4 080d40f9 ldr      x8, [x8, #0x18]
000D75F8 00013fd6 blr      x8
000D75FC 7f1200f9 str      xzr, [x19, #0x20]
000D7600 600e40f9 ldr      x0, [x19, #0x18]
000D7604 a00000b4 cbz      x0, #0xd7618
000D7608 088c44f8 ldr      x8, [x0, #0x48]!
000D760C 080d40f9 ldr      x8, [x8, #0x18]
000D7610 00013fd6 blr      x8
000D7614 7f0e00f9 str      xzr, [x19, #0x18]
000D7618 600240f9 ldr      x0, [x19]
000D761C a00000b4 cbz      x0, #0xd7630
000D7620 088c44f8 ldr      x8, [x0, #0x48]!
000D7624 080d40f9 ldr      x8, [x8, #0x18]
000D7628 00013fd6 blr      x8
000D762C 7f0200f9 str      xzr, [x19]
000D7630 f30b40f9 ldr      x19, [sp, #0x10]
000D7634 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D7638 c0035fd6 ret      
~~~
### 0xd763c (40 slots)
~~~asm
000D763C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000D7640 f44f01a9 stp      x20, x19, [sp, #0x10]
000D7644 fd030091 mov      x29, sp
000D7648 083a9152 mov      w8, #0x89d0
000D764C f30300aa mov      x19, x0
000D7650 1400088b add      x20, x0, x8
000D7654 a83400f0 adrp     x8, #0x76e000
000D7658 08810a91 add      x8, x8, #0x2a0
000D765C 812240f9 ldr      x1, [x20, #0x40]
000D7660 08410091 add      x8, x8, #0x10
000D7664 080000f9 str      x8, [x0]
000D7668 010100b4 cbz      x1, #0xd7688
000D766C 880245a9 ldp      x8, x0, [x20, #0x50]
000D7670 812600f9 str      x1, [x20, #0x48]
000D7674 03018052 mov      w3, #8
000D7678 020101cb sub      x2, x8, x1
000D767C 080040f9 ldr      x8, [x0]
000D7680 080d40f9 ldr      x8, [x8, #0x18]
000D7684 00013fd6 blr      x8
000D7688 801240f9 ldr      x0, [x20, #0x20]
000D768C a00000b4 cbz      x0, #0xd76a0
000D7690 088c44f8 ldr      x8, [x0, #0x48]!
000D7694 080d40f9 ldr      x8, [x8, #0x18]
000D7698 00013fd6 blr      x8
000D769C 9f1200f9 str      xzr, [x20, #0x20]
000D76A0 800e40f9 ldr      x0, [x20, #0x18]
000D76A4 a00000b4 cbz      x0, #0xd76b8
000D76A8 088c44f8 ldr      x8, [x0, #0x48]!
000D76AC 080d40f9 ldr      x8, [x8, #0x18]
000D76B0 00013fd6 blr      x8
000D76B4 9f0e00f9 str      xzr, [x20, #0x18]
000D76B8 800240f9 ldr      x0, [x20]
000D76BC 800000b4 cbz      x0, #0xd76cc
000D76C0 088c44f8 ldr      x8, [x0, #0x48]!
000D76C4 080d40f9 ldr      x8, [x8, #0x18]
000D76C8 00013fd6 blr      x8
000D76CC e00313aa mov      x0, x19
000D76D0 f44f41a9 ldp      x20, x19, [sp, #0x10]
000D76D4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000D76D8 0aa4fc17 b        #0x700
~~~
### 0xdba70 (229 slots)
~~~asm
000DBA70 ff0303d1 sub      sp, sp, #0xc0
000DBA74 fd7b07a9 stp      x29, x30, [sp, #0x70]
000DBA78 f94300f9 str      x25, [sp, #0x80]
000DBA7C f85f09a9 stp      x24, x23, [sp, #0x90]
000DBA80 f6570aa9 stp      x22, x21, [sp, #0xa0]
000DBA84 f44f0ba9 stp      x20, x19, [sp, #0xb0]
000DBA88 fdc30191 add      x29, sp, #0x70
000DBA8C 180c40f9 ldr      x24, [x0, #0x18]
000DBA90 981b00b4 cbz      x24, #0xdbe00
000DBA94 08399152 mov      w8, #0x89c8
000DBA98 f30300aa mov      x19, x0
000DBA9C 1700088b add      x23, x0, x8
000DBAA0 e80e40f9 ldr      x8, [x23, #0x18]
000DBAA4 280600b5 cbnz     x8, #0xdbb68
000DBAA8 082752a9 ldp      x8, x9, [x24, #0x120]
000DBAAC 01ca8852 mov      w1, #0x4650
000DBAB0 e8a700a9 stp      x8, x9, [sp, #8]
000DBAB4 089b40f9 ldr      x8, [x24, #0x130]
000DBAB8 e80f00f9 str      x8, [sp, #0x18]
000DBABC 283800d0 adrp     x8, #0x7e1000
000DBAC0 08013a91 add      x8, x8, #0xe80
000DBAC4 080140f9 ldr      x8, [x8]
000DBAC8 004540f9 ldr      x0, [x8, #0x88]
000DBACC e00e00f9 str      x0, [x23, #0x18]
000DBAD0 081f40f9 ldr      x8, [x24, #0x38]
000DBAD4 020f41a9 ldp      x2, x3, [x24, #0x10]
000DBAD8 080140b9 ldr      w8, [x8]
000DBADC 1f010071 cmp      w8, #0
000DBAE0 a8630091 add      x8, x29, #0x18
000DBAE4 e4179f1a cset     w4, eq
000DBAE8 c8ecfe97 bl       #0x96e08
000DBAEC f40317aa mov      x20, x23
000DBAF0 800e42f8 ldr      x0, [x20, #0x20]!
000DBAF4 800000b4 cbz      x0, #0xdbb04
000DBAF8 088c44f8 ldr      x8, [x0, #0x48]!
000DBAFC 080d40f9 ldr      x8, [x8, #0x18]
000DBB00 00013fd6 blr      x8
000DBB04 a80f40f9 ldr      x8, [x29, #0x18]
000DBB08 e1230091 add      x1, sp, #8
000DBB0C e00314aa mov      x0, x20
000DBB10 e81200f9 str      x8, [x23, #0x20]
000DBB14 1eedfe97 bl       #0x96f8c
000DBB18 081f40f9 ldr      x8, [x24, #0x38]
000DBB1C 01ca8852 mov      w1, #0x4650
000DBB20 e00e40f9 ldr      x0, [x23, #0x18]
000DBB24 020f41a9 ldp      x2, x3, [x24, #0x10]
000DBB28 080140b9 ldr      w8, [x8]
000DBB2C 1f010071 cmp      w8, #0
000DBB30 a8630091 add      x8, x29, #0x18
000DBB34 e4179f1a cset     w4, eq
000DBB38 b4ecfe97 bl       #0x96e08
000DBB3C f40317aa mov      x20, x23
000DBB40 808e42f8 ldr      x0, [x20, #0x28]!
000DBB44 800000b4 cbz      x0, #0xdbb54
000DBB48 088c44f8 ldr      x8, [x0, #0x48]!
000DBB4C 080d40f9 ldr      x8, [x8, #0x18]
000DBB50 00013fd6 blr      x8
000DBB54 a80f40f9 ldr      x8, [x29, #0x18]
000DBB58 e1230091 add      x1, sp, #8
000DBB5C e00314aa mov      x0, x20
000DBB60 880200f9 str      x8, [x20]
000DBB64 0aedfe97 bl       #0x96f8c
000DBB68 001340f9 ldr      x0, [x24, #0x20]
000DBB6C 94679152 mov      w20, #0x8b3c
000DBB70 e00700f9 str      x0, [sp, #8]
000DBB74 800000b4 cbz      x0, #0xdbb84
000DBB78 088c44f8 ldr      x8, [x0, #0x48]!
000DBB7C 080940f9 ldr      x8, [x8, #0x10]
000DBB80 00013fd6 blr      x8
000DBB84 e1820091 add      x1, x23, #0x20
000DBB88 e0230091 add      x0, sp, #8
000DBB8C 2deefe97 bl       #0x97440
000DBB90 e00740f9 ldr      x0, [sp, #8]
000DBB94 800000b4 cbz      x0, #0xdbba4
000DBB98 088c44f8 ldr      x8, [x0, #0x48]!
000DBB9C 080d40f9 ldr      x8, [x8, #0x18]
000DBBA0 00013fd6 blr      x8
000DBBA4 001740f9 ldr      x0, [x24, #0x28]
000DBBA8 7402148b add      x20, x19, x20
000DBBAC e00700f9 str      x0, [sp, #8]
000DBBB0 800000b4 cbz      x0, #0xdbbc0
000DBBB4 088c44f8 ldr      x8, [x0, #0x48]!
000DBBB8 080940f9 ldr      x8, [x8, #0x10]
000DBBBC 00013fd6 blr      x8
000DBBC0 f6a20091 add      x22, x23, #0x28
000DBBC4 e0230091 add      x0, sp, #8
000DBBC8 e10316aa mov      x1, x22
000DBBCC 1deefe97 bl       #0x97440
000DBBD0 e00740f9 ldr      x0, [sp, #8]
000DBBD4 800000b4 cbz      x0, #0xdbbe4
000DBBD8 088c44f8 ldr      x8, [x0, #0x48]!
000DBBDC 080d40f9 ldr      x8, [x8, #0x18]
000DBBE0 00013fd6 blr      x8
000DBBE4 e01640f9 ldr      x0, [x23, #0x28]
000DBBE8 d4fffe97 bl       #0x9bb38
000DBBEC 016f40f9 ldr      x1, [x24, #0xd8]
000DBBF0 f503002a mov      w21, w0
000DBBF4 e00316aa mov      x0, x22
000DBBF8 55f9fe97 bl       #0x9a14c
000DBBFC e00316aa mov      x0, x22
000DBC00 e10314aa mov      x1, x20
000DBC04 ffc20039 strb     wzr, [x23, #0x30]
000DBC08 ff3600b9 str      wzr, [x23, #0x34]
000DBC0C 50f9fe97 bl       #0x9a14c
000DBC10 e01240f9 ldr      x0, [x23, #0x20]
000DBC14 08208052 mov      w8, #0x100
000DBC18 2820a072 movk     w8, #0x101, lsl #16
000DBC1C 886600b9 str      w8, [x20, #0x64]
000DBC20 d4fefe97 bl       #0x9b770
000DBC24 806a00b9 str      w0, [x20, #0x68]
000DBC28 e01640f9 ldr      x0, [x23, #0x28]
000DBC2C d1fefe97 bl       #0x9b770
000DBC30 e80640f9 ldr      x8, [x23, #8]
000DBC34 806e00b9 str      w0, [x20, #0x6c]
000DBC38 097540f9 ldr      x9, [x8, #0xe8]
000DBC3C 490000b4 cbz      x9, #0xdbc44
000DBC40 1f7500f9 str      xzr, [x8, #0xe8]
000DBC44 c00240f9 ldr      x0, [x22]
000DBC48 cafefe97 bl       #0x9b770
000DBC4C 40050034 cbz      w0, #0xdbcf4
000DBC50 48d03bd5 mrs      x8, tpidr_el0
000DBC54 f603002a mov      w22, w0
000DBC58 f8031f2a mov      w24, wzr
000DBC5C 19c97392 and      x25, x8, #0xffffffffffffe000
000DBC60 e80640f9 ldr      x8, [x23, #8]
000DBC64 b81b00b9 str      w24, [x29, #0x18]
000DBC68 bf730039 strb     wzr, [x29, #0x1c]
000DBC6C 09294ea9 ldp      x9, x10, [x8, #0xe0]
000DBC70 210d0a8b add      x1, x9, x10, lsl #3
000DBC74 097940f9 ldr      x9, [x8, #0xf0]
000DBC78 5f0109eb cmp      x10, x9
000DBC7C c0020054 b.eq     #0xdbcd4
000DBC80 294f40f9 ldr      x9, [x25, #0x98]
000DBC84 3f4100f1 cmp      x9, #0x10
000DBC88 a00b0054 b.eq     #0xdbdfc
000DBC8C 0a5140f9 ldr      x10, [x8, #0xa0]
000DBC90 290f098b add      x9, x25, x9, lsl #3
000DBC94 2a0d00f9 str      x10, [x9, #0x18]
000DBC98 294f40f9 ldr      x9, [x25, #0x98]
000DBC9C 29050091 add      x9, x9, #1
000DBCA0 294f00f9 str      x9, [x25, #0x98]
000DBCA4 a90f40f9 ldr      x9, [x29, #0x18]
000DBCA8 290000f9 str      x9, [x1]
000DBCAC 294f40f9 ldr      x9, [x25, #0x98]
000DBCB0 290500d1 sub      x9, x9, #1
000DBCB4 294f00f9 str      x9, [x25, #0x98]
000DBCB8 097540f9 ldr      x9, [x8, #0xe8]
000DBCBC 29050091 add      x9, x9, #1
000DBCC0 097500f9 str      x9, [x8, #0xe8]
000DBCC4 18070011 add      w24, w24, #1
000DBCC8 df02186b cmp      w22, w24
000DBCCC a1fcff54 b.ne     #0xdbc60
000DBCD0 09000014 b        #0xdbcf4
000DBCD4 00810291 add      x0, x8, #0xa0
000DBCD8 e8230091 add      x8, sp, #8
000DBCDC a3630091 add      x3, x29, #0x18
000DBCE0 22008052 mov      w2, #1
000DBCE4 230a0094 bl       #0xde570
000DBCE8 18070011 add      w24, w24, #1
000DBCEC df02186b cmp      w22, w24
000DBCF0 81fbff54 b.ne     #0xdbc60
000DBCF4 e00240f9 ldr      x0, [x23]
000DBCF8 e1031f2a mov      w1, wzr
000DBCFC e2031f2a mov      w2, wzr
000DBD00 bb560794 bl       #0x2b17ec
000DBD04 e00240f9 ldr      x0, [x23]
000DBD08 e1031f2a mov      w1, wzr
000DBD0C bb560794 bl       #0x2b17f8
000DBD10 e00240f9 ldr      x0, [x23]
000DBD14 e1031f2a mov      w1, wzr
000DBD18 6e450794 bl       #0x2ad2d0
000DBD1C e00240f9 ldr      x0, [x23]
000DBD20 e103152a mov      w1, w21
000DBD24 e2031f2a mov      w2, wzr
000DBD28 86490794 bl       #0x2ae340
000DBD2C 601e40f9 ldr      x0, [x19, #0x38]
000DBD30 810240b9 ldr      w1, [x20]
000DBD34 bfeeff97 bl       #0xd7830
000DBD38 e0230091 add      x0, sp, #8
000DBD3C 8801ff97 bl       #0x9c35c
000DBD40 880240b9 ldr      w8, [x20]
000DBD44 e90b40b9 ldr      w9, [sp, #8]
000DBD48 1f01096b cmp      w8, w9
000DBD4C 602240f9 ldr      x0, [x19, #0x40]
000DBD50 e1079f1a cset     w1, ne
000DBD54 21f5ff97 bl       #0xd91d8
000DBD58 e00313aa mov      x0, x19
000DBD5C 74feff97 bl       #0xdb72c
000DBD60 886e40b9 ldr      w8, [x20, #0x6c]
000DBD64 1f010071 cmp      w8, #0
000DBD68 602240f9 ldr      x0, [x19, #0x40]
000DBD6C e1079f1a cset     w1, ne
000DBD70 fcf4ff97 bl       #0xd9160
000DBD74 680e40f9 ldr      x8, [x19, #0x18]
000DBD78 480400b4 cbz      x8, #0xdbe00
000DBD7C 088d43f9 ldr      x8, [x8, #0x718]
000DBD80 080400b4 cbz      x8, #0xdbe00
000DBD84 00b540f9 ldr      x0, [x8, #0x168]
000DBD88 c00300b4 cbz      x0, #0xdbe00
000DBD8C ecaaff97 bl       #0xc693c
000DBD90 1f000071 cmp      w0, #0
000DBD94 602240f9 ldr      x0, [x19, #0x40]
000DBD98 e1079f1a cset     w1, ne
000DBD9C e0f4ff97 bl       #0xd911c
000DBDA0 680640f9 ldr      x8, [x19, #8]
000DBDA4 146941f9 ldr      x20, [x8, #0x2d0]
000DBDA8 b40000b4 cbz      x20, #0xdbdbc
000DBDAC e00314aa mov      x0, x20
000DBDB0 088c44f8 ldr      x8, [x0, #0x48]!
000DBDB4 080940f9 ldr      x8, [x8, #0x10]
000DBDB8 00013fd6 blr      x8
000DBDBC 085a9152 mov      w8, #0x8ad0
000DBDC0 e00314aa mov      x0, x20
000DBDC4 e2031f2a mov      w2, wzr
000DBDC8 6102088b add      x1, x19, x8
000DBDCC a5af0794 bl       #0x2c7c60
000DBDD0 888e44f8 ldr      x8, [x20, #0x48]!
000DBDD4 e00314aa mov      x0, x20
000DBDD8 080d40f9 ldr      x8, [x8, #0x18]
000DBDDC 00013fd6 blr      x8
000DBDE0 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
000DBDE4 f94340f9 ldr      x25, [sp, #0x80]
000DBDE8 f6574aa9 ldp      x22, x21, [sp, #0xa0]
000DBDEC f85f49a9 ldp      x24, x23, [sp, #0x90]
000DBDF0 fd7b47a9 ldp      x29, x30, [sp, #0x70]
000DBDF4 ff030391 add      sp, sp, #0xc0
000DBDF8 c0035fd6 ret      
000DBDFC 859bfc97 bl       #0x2c10
000DBE00 50691494 bl       #0x5f6340
~~~
### 0xdbe5c (126 slots)
~~~asm
000DBE5C ff0301d1 sub      sp, sp, #0x40
000DBE60 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DBE64 f44f03a9 stp      x20, x19, [sp, #0x30]
000DBE68 fd830091 add      x29, sp, #0x20
000DBE6C 130c40f9 ldr      x19, [x0, #0x18]
000DBE70 130f00b4 cbz      x19, #0xdc050
000DBE74 685e40f9 ldr      x8, [x19, #0xb8]
000DBE78 080140b9 ldr      w8, [x8]
000DBE7C 1f050071 cmp      w8, #1
000DBE80 a1000054 b.ne     #0xdbe94
000DBE84 083d9152 mov      w8, #0x89e8
000DBE88 1400088b add      x20, x0, x8
000DBE8C 88e24639 ldrb     w8, [x20, #0x1b8]
000DBE90 48070034 cbz      w8, #0xdbf78
000DBE94 60ae40f9 ldr      x0, [x19, #0x158]
000DBE98 e00700f9 str      x0, [sp, #8]
000DBE9C 800000b4 cbz      x0, #0xdbeac
000DBEA0 088c44f8 ldr      x8, [x0, #0x48]!
000DBEA4 080940f9 ldr      x8, [x8, #0x10]
000DBEA8 00013fd6 blr      x8
000DBEAC 601240f9 ldr      x0, [x19, #0x20]
000DBEB0 a0831ff8 stur     x0, [x29, #-8]
000DBEB4 800000b4 cbz      x0, #0xdbec4
000DBEB8 088c44f8 ldr      x8, [x0, #0x48]!
000DBEBC 080940f9 ldr      x8, [x8, #0x10]
000DBEC0 00013fd6 blr      x8
000DBEC4 e0230091 add      x0, sp, #8
000DBEC8 a12300d1 sub      x1, x29, #8
000DBECC 3cecfe97 bl       #0x96fbc
000DBED0 a0835ff8 ldur     x0, [x29, #-8]
000DBED4 800000b4 cbz      x0, #0xdbee4
000DBED8 088c44f8 ldr      x8, [x0, #0x48]!
000DBEDC 080d40f9 ldr      x8, [x8, #0x18]
000DBEE0 00013fd6 blr      x8
000DBEE4 e00740f9 ldr      x0, [sp, #8]
000DBEE8 a00000b4 cbz      x0, #0xdbefc
000DBEEC 088c44f8 ldr      x8, [x0, #0x48]!
000DBEF0 080d40f9 ldr      x8, [x8, #0x18]
000DBEF4 00013fd6 blr      x8
000DBEF8 ff0700f9 str      xzr, [sp, #8]
000DBEFC 601240f9 ldr      x0, [x19, #0x20]
000DBF00 a0831ff8 stur     x0, [x29, #-8]
000DBF04 800000b4 cbz      x0, #0xdbf14
000DBF08 088c44f8 ldr      x8, [x0, #0x48]!
000DBF0C 080940f9 ldr      x8, [x8, #0x10]
000DBF10 00013fd6 blr      x8
000DBF14 601640f9 ldr      x0, [x19, #0x28]
000DBF18 e00b00f9 str      x0, [sp, #0x10]
000DBF1C 800000b4 cbz      x0, #0xdbf2c
000DBF20 088c44f8 ldr      x8, [x0, #0x48]!
000DBF24 080940f9 ldr      x8, [x8, #0x10]
000DBF28 00013fd6 blr      x8
000DBF2C a02300d1 sub      x0, x29, #8
000DBF30 e1430091 add      x1, sp, #0x10
000DBF34 43edfe97 bl       #0x97440
000DBF38 e00b40f9 ldr      x0, [sp, #0x10]
000DBF3C 800000b4 cbz      x0, #0xdbf4c
000DBF40 088c44f8 ldr      x8, [x0, #0x48]!
000DBF44 080d40f9 ldr      x8, [x8, #0x18]
000DBF48 00013fd6 blr      x8
000DBF4C a0835ff8 ldur     x0, [x29, #-8]
000DBF50 800000b4 cbz      x0, #0xdbf60
000DBF54 088c44f8 ldr      x8, [x0, #0x48]!
000DBF58 080d40f9 ldr      x8, [x8, #0x18]
000DBF5C 00013fd6 blr      x8
000DBF60 606e40f9 ldr      x0, [x19, #0xd8]
000DBF64 2001ff97 bl       #0x9c3e4
000DBF68 f44f43a9 ldp      x20, x19, [sp, #0x30]
000DBF6C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DBF70 ff030191 add      sp, sp, #0x40
000DBF74 c0035fd6 ret      
000DBF78 800240f9 ldr      x0, [x20]
000DBF7C a0831ff8 stur     x0, [x29, #-8]
000DBF80 800000b4 cbz      x0, #0xdbf90
000DBF84 088c44f8 ldr      x8, [x0, #0x48]!
000DBF88 080940f9 ldr      x8, [x8, #0x10]
000DBF8C 00013fd6 blr      x8
000DBF90 601240f9 ldr      x0, [x19, #0x20]
000DBF94 e00b00f9 str      x0, [sp, #0x10]
000DBF98 800000b4 cbz      x0, #0xdbfa8
000DBF9C 088c44f8 ldr      x8, [x0, #0x48]!
000DBFA0 080940f9 ldr      x8, [x8, #0x10]
000DBFA4 00013fd6 blr      x8
000DBFA8 a02300d1 sub      x0, x29, #8
000DBFAC e1430091 add      x1, sp, #0x10
000DBFB0 80edfe97 bl       #0x975b0
000DBFB4 e00b40f9 ldr      x0, [sp, #0x10]
000DBFB8 800000b4 cbz      x0, #0xdbfc8
000DBFBC 088c44f8 ldr      x8, [x0, #0x48]!
000DBFC0 080d40f9 ldr      x8, [x8, #0x18]
000DBFC4 00013fd6 blr      x8
000DBFC8 a0835ff8 ldur     x0, [x29, #-8]
000DBFCC 800000b4 cbz      x0, #0xdbfdc
000DBFD0 088c44f8 ldr      x8, [x0, #0x48]!
000DBFD4 080d40f9 ldr      x8, [x8, #0x18]
000DBFD8 00013fd6 blr      x8
000DBFDC 800640f9 ldr      x0, [x20, #8]
000DBFE0 a0831ff8 stur     x0, [x29, #-8]
000DBFE4 800000b4 cbz      x0, #0xdbff4
000DBFE8 088c44f8 ldr      x8, [x0, #0x48]!
000DBFEC 080940f9 ldr      x8, [x8, #0x10]
000DBFF0 00013fd6 blr      x8
000DBFF4 601640f9 ldr      x0, [x19, #0x28]
000DBFF8 e00b00f9 str      x0, [sp, #0x10]
000DBFFC 800000b4 cbz      x0, #0xdc00c
000DC000 088c44f8 ldr      x8, [x0, #0x48]!
000DC004 080940f9 ldr      x8, [x8, #0x10]
000DC008 00013fd6 blr      x8
000DC00C a02300d1 sub      x0, x29, #8
000DC010 e1430091 add      x1, sp, #0x10
000DC014 67edfe97 bl       #0x975b0
000DC018 e00b40f9 ldr      x0, [sp, #0x10]
000DC01C 800000b4 cbz      x0, #0xdc02c
000DC020 088c44f8 ldr      x8, [x0, #0x48]!
000DC024 080d40f9 ldr      x8, [x8, #0x18]
000DC028 00013fd6 blr      x8
000DC02C a0835ff8 ldur     x0, [x29, #-8]
000DC030 c0f9ffb4 cbz      x0, #0xdbf68
000DC034 088c44f8 ldr      x8, [x0, #0x48]!
000DC038 080d40f9 ldr      x8, [x8, #0x18]
000DC03C 00013fd6 blr      x8
000DC040 f44f43a9 ldp      x20, x19, [sp, #0x30]
000DC044 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DC048 ff030191 add      sp, sp, #0x40
000DC04C c0035fd6 ret      
000DC050 bc681494 bl       #0x5f6340
~~~
### 0xdc250 (180 slots)
~~~asm
000DC250 ff0305d1 sub      sp, sp, #0x140
000DC254 fd7b0ea9 stp      x29, x30, [sp, #0xe0]
000DC258 fc7b00f9 str      x28, [sp, #0xf0]
000DC25C fa6710a9 stp      x26, x25, [sp, #0x100]
000DC260 f85f11a9 stp      x24, x23, [sp, #0x110]
000DC264 f65712a9 stp      x22, x21, [sp, #0x120]
000DC268 f44f13a9 stp      x20, x19, [sp, #0x130]
000DC26C fd830391 add      x29, sp, #0xe0
000DC270 88679152 mov      w8, #0x8b3c
000DC274 f30300aa mov      x19, x0
000DC278 1500088b add      x21, x0, x8
000DC27C e0530091 add      x0, sp, #0x14
000DC280 3700ff97 bl       #0x9c35c
000DC284 a8924139 ldrb     w8, [x21, #0x64]
000DC288 c8000035 cbnz     w8, #0xdc2a0
000DC28C 88679152 mov      w8, #0x8b3c
000DC290 e1530091 add      x1, sp, #0x14
000DC294 6002088b add      x0, x19, x8
000DC298 a000ff97 bl       #0x9c518
000DC29C e0120037 tbnz     w0, #0, #0xdc4f8
000DC2A0 770e40f9 ldr      x23, [x19, #0x18]
000DC2A4 d71300b4 cbz      x23, #0xdc51c
000DC2A8 f49e40f9 ldr      x20, [x23, #0x138]
000DC2AC 16399152 mov      w22, #0x89c8
000DC2B0 b40000b4 cbz      x20, #0xdc2c4
000DC2B4 e00314aa mov      x0, x20
000DC2B8 088c44f8 ldr      x8, [x0, #0x48]!
000DC2BC 080940f9 ldr      x8, [x8, #0x10]
000DC2C0 00013fd6 blr      x8
000DC2C4 e00314aa mov      x0, x20
000DC2C8 7802168b add      x24, x19, x22
000DC2CC 4802ff97 bl       #0x9cbec
000DC2D0 e0ae40f9 ldr      x0, [x23, #0x158]
000DC2D4 e00700f9 str      x0, [sp, #8]
000DC2D8 800000b4 cbz      x0, #0xdc2e8
000DC2DC 088c44f8 ldr      x8, [x0, #0x48]!
000DC2E0 080940f9 ldr      x8, [x8, #0x10]
000DC2E4 00013fd6 blr      x8
000DC2E8 16830091 add      x22, x24, #0x20
000DC2EC e0230091 add      x0, sp, #8
000DC2F0 e10316aa mov      x1, x22
000DC2F4 32ebfe97 bl       #0x96fbc
000DC2F8 e00740f9 ldr      x0, [sp, #8]
000DC2FC a00000b4 cbz      x0, #0xdc310
000DC300 088c44f8 ldr      x8, [x0, #0x48]!
000DC304 080d40f9 ldr      x8, [x8, #0x18]
000DC308 00013fd6 blr      x8
000DC30C ff0700f9 str      xzr, [sp, #8]
000DC310 c00240f9 ldr      x0, [x22]
000DC314 a08319f8 stur     x0, [x29, #-0x68]
000DC318 800000b4 cbz      x0, #0xdc328
000DC31C 088c44f8 ldr      x8, [x0, #0x48]!
000DC320 080940f9 ldr      x8, [x8, #0x10]
000DC324 00013fd6 blr      x8
000DC328 16a30091 add      x22, x24, #0x28
000DC32C a0a301d1 sub      x0, x29, #0x68
000DC330 e10316aa mov      x1, x22
000DC334 43ecfe97 bl       #0x97440
000DC338 a08359f8 ldur     x0, [x29, #-0x68]
000DC33C 800000b4 cbz      x0, #0xdc34c
000DC340 088c44f8 ldr      x8, [x0, #0x48]!
000DC344 080d40f9 ldr      x8, [x8, #0x18]
000DC348 00013fd6 blr      x8
000DC34C e00315aa mov      x0, x21
000DC350 2500ff97 bl       #0x9c3e4
000DC354 001340f9 ldr      x0, [x24, #0x20]
000DC358 08208052 mov      w8, #0x100
000DC35C 39008052 mov      w25, #1
000DC360 a8ca0079 strh     w8, [x21, #0x64]
000DC364 b99a0139 strb     w25, [x21, #0x66]
000DC368 02fdfe97 bl       #0x9b770
000DC36C a06a00b9 str      w0, [x21, #0x68]
000DC370 001740f9 ldr      x0, [x24, #0x28]
000DC374 fffcfe97 bl       #0x9b770
000DC378 080740f9 ldr      x8, [x24, #8]
000DC37C a06e00b9 str      w0, [x21, #0x6c]
000DC380 1fc30039 strb     wzr, [x24, #0x30]
000DC384 b99e0139 strb     w25, [x21, #0x67]
000DC388 097540f9 ldr      x9, [x8, #0xe8]
000DC38C 490000b4 cbz      x9, #0xdc394
000DC390 1f7500f9 str      xzr, [x8, #0xe8]
000DC394 c00240f9 ldr      x0, [x22]
000DC398 f6fcfe97 bl       #0x9b770
000DC39C 40050034 cbz      w0, #0xdc444
000DC3A0 48d03bd5 mrs      x8, tpidr_el0
000DC3A4 f603002a mov      w22, w0
000DC3A8 f9031f2a mov      w25, wzr
000DC3AC 1ac97392 and      x26, x8, #0xffffffffffffe000
000DC3B0 080740f9 ldr      x8, [x24, #8]
000DC3B4 b91b00b9 str      w25, [x29, #0x18]
000DC3B8 bf730039 strb     wzr, [x29, #0x1c]
000DC3BC 09294ea9 ldp      x9, x10, [x8, #0xe0]
000DC3C0 210d0a8b add      x1, x9, x10, lsl #3
000DC3C4 097940f9 ldr      x9, [x8, #0xf0]
000DC3C8 5f0109eb cmp      x10, x9
000DC3CC c0020054 b.eq     #0xdc424
000DC3D0 494f40f9 ldr      x9, [x26, #0x98]
000DC3D4 3f4100f1 cmp      x9, #0x10
000DC3D8 000a0054 b.eq     #0xdc518
000DC3DC 0a5140f9 ldr      x10, [x8, #0xa0]
000DC3E0 490f098b add      x9, x26, x9, lsl #3
000DC3E4 2a0d00f9 str      x10, [x9, #0x18]
000DC3E8 494f40f9 ldr      x9, [x26, #0x98]
000DC3EC 29050091 add      x9, x9, #1
000DC3F0 494f00f9 str      x9, [x26, #0x98]
000DC3F4 a90f40f9 ldr      x9, [x29, #0x18]
000DC3F8 290000f9 str      x9, [x1]
000DC3FC 494f40f9 ldr      x9, [x26, #0x98]
000DC400 290500d1 sub      x9, x9, #1
000DC404 494f00f9 str      x9, [x26, #0x98]
000DC408 097540f9 ldr      x9, [x8, #0xe8]
000DC40C 29050091 add      x9, x9, #1
000DC410 097500f9 str      x9, [x8, #0xe8]
000DC414 39070011 add      w25, w25, #1
000DC418 df02196b cmp      w22, w25
000DC41C a1fcff54 b.ne     #0xdc3b0
000DC420 09000014 b        #0xdc444
000DC424 00810291 add      x0, x8, #0xa0
000DC428 a8a301d1 sub      x8, x29, #0x68
000DC42C a3630091 add      x3, x29, #0x18
000DC430 22008052 mov      w2, #1
000DC434 4f080094 bl       #0xde570
000DC438 39070011 add      w25, w25, #1
000DC43C df02196b cmp      w22, w25
000DC440 81fbff54 b.ne     #0xdc3b0
000DC444 000340f9 ldr      x0, [x24]
000DC448 e1031f2a mov      w1, wzr
000DC44C e2031f2a mov      w2, wzr
000DC450 e7540794 bl       #0x2b17ec
000DC454 000340f9 ldr      x0, [x24]
000DC458 e1031f2a mov      w1, wzr
000DC45C e7540794 bl       #0x2b17f8
000DC460 000340f9 ldr      x0, [x24]
000DC464 e1031f2a mov      w1, wzr
000DC468 9a430794 bl       #0x2ad2d0
000DC46C 601e40f9 ldr      x0, [x19, #0x38]
000DC470 a10240b9 ldr      w1, [x21]
000DC474 efecff97 bl       #0xd7830
000DC478 a0a301d1 sub      x0, x29, #0x68
000DC47C b8fffe97 bl       #0x9c35c
000DC480 a80240b9 ldr      w8, [x21]
000DC484 a98359b8 ldur     w9, [x29, #-0x68]
000DC488 1f01096b cmp      w8, w9
000DC48C 602240f9 ldr      x0, [x19, #0x40]
000DC490 e1079f1a cset     w1, ne
000DC494 51f3ff97 bl       #0xd91d8
000DC498 e00313aa mov      x0, x19
000DC49C a4fcff97 bl       #0xdb72c
000DC4A0 a86e40b9 ldr      w8, [x21, #0x6c]
000DC4A4 1f010071 cmp      w8, #0
000DC4A8 602240f9 ldr      x0, [x19, #0x40]
000DC4AC e1079f1a cset     w1, ne
000DC4B0 2cf3ff97 bl       #0xd9160
000DC4B4 680e40f9 ldr      x8, [x19, #0x18]
000DC4B8 280300b4 cbz      x8, #0xdc51c
000DC4BC 088d43f9 ldr      x8, [x8, #0x718]
000DC4C0 e80200b4 cbz      x8, #0xdc51c
000DC4C4 00b540f9 ldr      x0, [x8, #0x168]
000DC4C8 a00200b4 cbz      x0, #0xdc51c
000DC4CC 1ca9ff97 bl       #0xc693c
000DC4D0 1f000071 cmp      w0, #0
000DC4D4 602240f9 ldr      x0, [x19, #0x40]
000DC4D8 e1079f1a cset     w1, ne
000DC4DC 10f3ff97 bl       #0xd911c
000DC4E0 e06e40f9 ldr      x0, [x23, #0xd8]
000DC4E4 c0fffe97 bl       #0x9c3e4
000DC4E8 888e44f8 ldr      x8, [x20, #0x48]!
000DC4EC e00314aa mov      x0, x20
000DC4F0 080d40f9 ldr      x8, [x8, #0x18]
000DC4F4 00013fd6 blr      x8
000DC4F8 f44f53a9 ldp      x20, x19, [sp, #0x130]
000DC4FC fc7b40f9 ldr      x28, [sp, #0xf0]
000DC500 f65752a9 ldp      x22, x21, [sp, #0x120]
000DC504 f85f51a9 ldp      x24, x23, [sp, #0x110]
000DC508 fa6750a9 ldp      x26, x25, [sp, #0x100]
000DC50C fd7b4ea9 ldp      x29, x30, [sp, #0xe0]
000DC510 ff030591 add      sp, sp, #0x140
000DC514 c0035fd6 ret      
000DC518 be99fc97 bl       #0x2c10
000DC51C 89671494 bl       #0x5f6340
~~~
### 0xdd1f4 (628 slots)
~~~asm
000DD1F4 ffc304d1 sub      sp, sp, #0x130
000DD1F8 e86300fd str      d8, [sp, #0xc0]
000DD1FC fd7b0da9 stp      x29, x30, [sp, #0xd0]
000DD200 fc6f0ea9 stp      x28, x27, [sp, #0xe0]
000DD204 fa670fa9 stp      x26, x25, [sp, #0xf0]
000DD208 f85f10a9 stp      x24, x23, [sp, #0x100]
000DD20C f65711a9 stp      x22, x21, [sp, #0x110]
000DD210 f44f12a9 stp      x20, x19, [sp, #0x120]
000DD214 fd430391 add      x29, sp, #0xd0
000DD218 140c40f9 ldr      x20, [x0, #0x18]
000DD21C 344d00b4 cbz      x20, #0xddbc0
000DD220 970a40f9 ldr      x23, [x20, #0x10]
000DD224 fb03012a mov      w27, w1
000DD228 f60300aa mov      x22, x0
000DD22C 93ae40f9 ldr      x19, [x20, #0x158]
000DD230 b30000b4 cbz      x19, #0xdd244
000DD234 e00313aa mov      x0, x19
000DD238 088c44f8 ldr      x8, [x0, #0x48]!
000DD23C 080940f9 ldr      x8, [x8, #0x10]
000DD240 00013fd6 blr      x8
000DD244 9a7240f9 ldr      x26, [x20, #0xe0]
000DD248 153a9152 mov      w21, #0x89d0
000DD24C ba0000b4 cbz      x26, #0xdd260
000DD250 e0031aaa mov      x0, x26
000DD254 088c44f8 ldr      x8, [x0, #0x48]!
000DD258 080940f9 ldr      x8, [x8, #0x10]
000DD25C 00013fd6 blr      x8
000DD260 f71300f9 str      x23, [sp, #0x20]
000DD264 978240f9 ldr      x23, [x20, #0x100]
000DD268 b70000b4 cbz      x23, #0xdd27c
000DD26C e00317aa mov      x0, x23
000DD270 088c44f8 ldr      x8, [x0, #0x48]!
000DD274 080940f9 ldr      x8, [x8, #0x10]
000DD278 00013fd6 blr      x8
000DD27C d802158b add      x24, x22, x21
000DD280 d50640f9 ldr      x21, [x22, #8]
000DD284 f71700f9 str      x23, [sp, #0x28]
000DD288 b76a41f9 ldr      x23, [x21, #0x2d0]
000DD28C e00315aa mov      x0, x21
000DD290 d70000b4 cbz      x23, #0xdd2a8
000DD294 e00317aa mov      x0, x23
000DD298 088c44f8 ldr      x8, [x0, #0x48]!
000DD29C 080940f9 ldr      x8, [x8, #0x10]
000DD2A0 00013fd6 blr      x8
000DD2A4 c00640f9 ldr      x0, [x22, #8]
000DD2A8 cb2bfd97 bl       #0x281d4
000DD2AC a8e300d1 sub      x8, x29, #0x38
000DD2B0 e1031f2a mov      w1, wzr
000DD2B4 07e1fc97 bl       #0x156d0
000DD2B8 a0835cf8 ldur     x0, [x29, #-0x38]
000DD2BC fa0f00f9 str      x26, [sp, #0x18]
000DD2C0 193040f9 ldr      x25, [x0, #0x60]
000DD2C4 f90000b4 cbz      x25, #0xdd2e0
000DD2C8 e00319aa mov      x0, x25
000DD2CC 088c44f8 ldr      x8, [x0, #0x48]!
000DD2D0 080940f9 ldr      x8, [x8, #0x10]
000DD2D4 00013fd6 blr      x8
000DD2D8 a0835cf8 ldur     x0, [x29, #-0x38]
000DD2DC 800000b4 cbz      x0, #0xdd2ec
000DD2E0 088c44f8 ldr      x8, [x0, #0x48]!
000DD2E4 080d40f9 ldr      x8, [x8, #0x18]
000DD2E8 00013fd6 blr      x8
000DD2EC 080340f9 ldr      x8, [x24]
000DD2F0 fc0318aa mov      x28, x24
000DD2F4 697f7dd3 ubfiz    x9, x27, #3, #0x20
000DD2F8 800f42f8 ldr      x0, [x28, #0x20]!
000DD2FC fb0b00f9 str      x27, [sp, #0x10]
000DD300 087140f9 ldr      x8, [x8, #0xe0]
000DD304 1b6969b8 ldr      w27, [x8, x9]
000DD308 1af9fe97 bl       #0x9b770
000DD30C c02b0034 cbz      w0, #0xdd884
000DD310 800340f9 ldr      x0, [x28]
000DD314 e1031b2a mov      w1, w27
000DD318 0bfafe97 bl       #0x9bb44
000DD31C a2e300d1 sub      x2, x29, #0x38
000DD320 e0031caa mov      x0, x28
000DD324 bf831c38 sturb    wzr, [x29, #-0x38]
000DD328 e1031b2a mov      w1, w27
000DD32C bfc31cf8 stur     xzr, [x29, #-0x34]
000DD330 bf431df8 stur     xzr, [x29, #-0x2c]
000DD334 bfc31df8 stur     xzr, [x29, #-0x24]
000DD338 8bf3fe97 bl       #0x9a164
000DD33C a8a77ca9 ldp      x8, x9, [x29, #-0x38]
000DD340 8b759152 mov      w11, #0x8bac
000DD344 aa835db8 ldur     w10, [x29, #-0x28]
000DD348 cb020b8b add      x11, x22, x11
000DD34C a14301d1 sub      x1, x29, #0x50
000DD350 c01a40f9 ldr      x0, [x22, #0x30]
000DD354 a8273ba9 stp      x8, x9, [x29, #-0x50]
000DD358 aa031cb8 stur     w10, [x29, #-0x40]
000DD35C 682500a9 stp      x8, x9, [x11]
000DD360 6a1100b9 str      w10, [x11, #0x10]
000DD364 7049ff97 bl       #0xaf924
000DD368 b3831ff8 stur     x19, [x29, #-8]
000DD36C b30000b4 cbz      x19, #0xdd380
000DD370 e00313aa mov      x0, x19
000DD374 088c44f8 ldr      x8, [x0, #0x48]!
000DD378 080940f9 ldr      x8, [x8, #0x10]
000DD37C 00013fd6 blr      x8
000DD380 e01340f9 ldr      x0, [sp, #0x20]
000DD384 a12300d1 sub      x1, x29, #8
000DD388 a24301d1 sub      x2, x29, #0x50
000DD38C e3031f2a mov      w3, wzr
000DD390 c8d0fe97 bl       #0x916b0
000DD394 a0835ff8 ldur     x0, [x29, #-8]
000DD398 a00000b4 cbz      x0, #0xdd3ac
000DD39C 088c44f8 ldr      x8, [x0, #0x48]!
000DD3A0 080d40f9 ldr      x8, [x8, #0x18]
000DD3A4 00013fd6 blr      x8
000DD3A8 bf831ff8 stur     xzr, [x29, #-8]
000DD3AC 08489152 mov      w8, #0x8a40
000DD3B0 e00317aa mov      x0, x23
000DD3B4 e2031f2a mov      w2, wzr
000DD3B8 c102088b add      x1, x22, x8
000DD3BC 29aa0794 bl       #0x2c7c60
000DD3C0 084b9152 mov      w8, #0x8a58
000DD3C4 e00317aa mov      x0, x23
000DD3C8 e2031f2a mov      w2, wzr
000DD3CC c102088b add      x1, x22, x8
000DD3D0 24aa0794 bl       #0x2c7c60
000DD3D4 084e9152 mov      w8, #0x8a70
000DD3D8 e00317aa mov      x0, x23
000DD3DC e2031f2a mov      w2, wzr
000DD3E0 c102088b add      x1, x22, x8
000DD3E4 1faa0794 bl       #0x2c7c60
000DD3E8 08519152 mov      w8, #0x8a88
000DD3EC e00317aa mov      x0, x23
000DD3F0 e2031f2a mov      w2, wzr
000DD3F4 c102088b add      x1, x22, x8
000DD3F8 1aaa0794 bl       #0x2c7c60
000DD3FC 08549152 mov      w8, #0x8aa0
000DD400 e00317aa mov      x0, x23
000DD404 e2031f2a mov      w2, wzr
000DD408 c102088b add      x1, x22, x8
000DD40C 15aa0794 bl       #0x2c7c60
000DD410 e00313aa mov      x0, x19
000DD414 baa50494 bl       #0x206afc
000DD418 1f140071 cmp      w0, #5
000DD41C a8008052 mov      w8, #5
000DD420 1a30881a csel     w26, w0, w8, lo
000DD424 1a1c0034 cbz      w26, #0xdd7a4
000DD428 08489152 mov      w8, #0x8a40
000DD42C e00317aa mov      x0, x23
000DD430 22008052 mov      w2, #1
000DD434 c102088b add      x1, x22, x8
000DD438 0aaa0794 bl       #0x2c7c60
000DD43C 083f40f9 ldr      x8, [x24, #0x78]
000DD440 a9c884d2 mov      x9, #0x2645
000DD444 4984b0f2 movk     x9, #0x8422, lsl #16
000DD448 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD44C 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD450 fb031faa mov      x27, xzr
000DD454 1f0109eb cmp      x8, x9
000DD458 e0000054 b.eq     #0xdd474
000DD45C c80000b4 cbz      x8, #0xdd474
000DD460 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD464 e1a30191 add      x1, sp, #0x68
000DD468 e83700f9 str      x8, [sp, #0x68]
000DD46C 25dffd97 bl       #0x55100
000DD470 fb0300aa mov      x27, x0
000DD474 084340f9 ldr      x8, [x24, #0x80]
000DD478 a9c884d2 mov      x9, #0x2645
000DD47C 4984b0f2 movk     x9, #0x8422, lsl #16
000DD480 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD484 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD488 fc031faa mov      x28, xzr
000DD48C 1f0109eb cmp      x8, x9
000DD490 e0000054 b.eq     #0xdd4ac
000DD494 c80000b4 cbz      x8, #0xdd4ac
000DD498 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD49C e1a30191 add      x1, sp, #0x68
000DD4A0 e83700f9 str      x8, [sp, #0x68]
000DD4A4 17dffd97 bl       #0x55100
000DD4A8 fc0300aa mov      x28, x0
000DD4AC e00313aa mov      x0, x19
000DD4B0 e1031f2a mov      w1, wzr
000DD4B4 8fa50494 bl       #0x206af0
000DD4B8 e103002a mov      w1, w0
000DD4BC e01740f9 ldr      x0, [sp, #0x28]
000DD4C0 e2031baa mov      x2, x27
000DD4C4 e3031caa mov      x3, x28
000DD4C8 e4031f2a mov      w4, wzr
000DD4CC e5031f2a mov      w5, wzr
000DD4D0 3aa30794 bl       #0x2c61b8
000DD4D4 5f070071 cmp      w26, #1
000DD4D8 60160054 b.eq     #0xdd7a4
000DD4DC 084b9152 mov      w8, #0x8a58
000DD4E0 e00317aa mov      x0, x23
000DD4E4 22008052 mov      w2, #1
000DD4E8 c102088b add      x1, x22, x8
000DD4EC dda90794 bl       #0x2c7c60
000DD4F0 084b40f9 ldr      x8, [x24, #0x90]
000DD4F4 a9c884d2 mov      x9, #0x2645
000DD4F8 4984b0f2 movk     x9, #0x8422, lsl #16
000DD4FC 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD500 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD504 fb031faa mov      x27, xzr
000DD508 1f0109eb cmp      x8, x9
000DD50C e0000054 b.eq     #0xdd528
000DD510 c80000b4 cbz      x8, #0xdd528
000DD514 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD518 e1a30191 add      x1, sp, #0x68
000DD51C e83700f9 str      x8, [sp, #0x68]
000DD520 f8defd97 bl       #0x55100
000DD524 fb0300aa mov      x27, x0
000DD528 084f40f9 ldr      x8, [x24, #0x98]
000DD52C a9c884d2 mov      x9, #0x2645
000DD530 4984b0f2 movk     x9, #0x8422, lsl #16
000DD534 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD538 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD53C fc031faa mov      x28, xzr
000DD540 1f0109eb cmp      x8, x9
000DD544 e0000054 b.eq     #0xdd560
000DD548 c80000b4 cbz      x8, #0xdd560
000DD54C a06a41f9 ldr      x0, [x21, #0x2d0]
000DD550 e1a30191 add      x1, sp, #0x68
000DD554 e83700f9 str      x8, [sp, #0x68]
000DD558 eadefd97 bl       #0x55100
000DD55C fc0300aa mov      x28, x0
000DD560 e00313aa mov      x0, x19
000DD564 21008052 mov      w1, #1
000DD568 62a50494 bl       #0x206af0
000DD56C e103002a mov      w1, w0
000DD570 e01740f9 ldr      x0, [sp, #0x28]
000DD574 e2031baa mov      x2, x27
000DD578 e3031caa mov      x3, x28
000DD57C e4031f2a mov      w4, wzr
000DD580 e5031f2a mov      w5, wzr
000DD584 0da30794 bl       #0x2c61b8
000DD588 5f0b0071 cmp      w26, #2
000DD58C c0100054 b.eq     #0xdd7a4
000DD590 084e9152 mov      w8, #0x8a70
000DD594 e00317aa mov      x0, x23
000DD598 22008052 mov      w2, #1
000DD59C c102088b add      x1, x22, x8
000DD5A0 b0a90794 bl       #0x2c7c60
000DD5A4 085740f9 ldr      x8, [x24, #0xa8]
000DD5A8 a9c884d2 mov      x9, #0x2645
000DD5AC 4984b0f2 movk     x9, #0x8422, lsl #16
000DD5B0 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD5B4 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD5B8 fb031faa mov      x27, xzr
000DD5BC 1f0109eb cmp      x8, x9
000DD5C0 e0000054 b.eq     #0xdd5dc
000DD5C4 c80000b4 cbz      x8, #0xdd5dc
000DD5C8 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD5CC e1a30191 add      x1, sp, #0x68
000DD5D0 e83700f9 str      x8, [sp, #0x68]
000DD5D4 cbdefd97 bl       #0x55100
000DD5D8 fb0300aa mov      x27, x0
000DD5DC 085b40f9 ldr      x8, [x24, #0xb0]
000DD5E0 a9c884d2 mov      x9, #0x2645
000DD5E4 4984b0f2 movk     x9, #0x8422, lsl #16
000DD5E8 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD5EC 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD5F0 fc031faa mov      x28, xzr
000DD5F4 1f0109eb cmp      x8, x9
000DD5F8 e0000054 b.eq     #0xdd614
000DD5FC c80000b4 cbz      x8, #0xdd614
000DD600 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD604 e1a30191 add      x1, sp, #0x68
000DD608 e83700f9 str      x8, [sp, #0x68]
000DD60C bddefd97 bl       #0x55100
000DD610 fc0300aa mov      x28, x0
000DD614 e00313aa mov      x0, x19
000DD618 41008052 mov      w1, #2
000DD61C 35a50494 bl       #0x206af0
000DD620 e103002a mov      w1, w0
000DD624 e01740f9 ldr      x0, [sp, #0x28]
000DD628 e2031baa mov      x2, x27
000DD62C e3031caa mov      x3, x28
000DD630 e4031f2a mov      w4, wzr
000DD634 e5031f2a mov      w5, wzr
000DD638 e0a20794 bl       #0x2c61b8
000DD63C 5f0f0071 cmp      w26, #3
000DD640 200b0054 b.eq     #0xdd7a4
000DD644 08519152 mov      w8, #0x8a88
000DD648 e00317aa mov      x0, x23
000DD64C 22008052 mov      w2, #1
000DD650 c102088b add      x1, x22, x8
000DD654 83a90794 bl       #0x2c7c60
000DD658 086340f9 ldr      x8, [x24, #0xc0]
000DD65C a9c884d2 mov      x9, #0x2645
000DD660 4984b0f2 movk     x9, #0x8422, lsl #16
000DD664 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD668 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD66C fb031faa mov      x27, xzr
000DD670 1f0109eb cmp      x8, x9
000DD674 e0000054 b.eq     #0xdd690
000DD678 c80000b4 cbz      x8, #0xdd690
000DD67C a06a41f9 ldr      x0, [x21, #0x2d0]
000DD680 e1a30191 add      x1, sp, #0x68
000DD684 e83700f9 str      x8, [sp, #0x68]
000DD688 9edefd97 bl       #0x55100
000DD68C fb0300aa mov      x27, x0
000DD690 086740f9 ldr      x8, [x24, #0xc8]
000DD694 a9c884d2 mov      x9, #0x2645
000DD698 4984b0f2 movk     x9, #0x8422, lsl #16
000DD69C 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD6A0 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD6A4 fc031faa mov      x28, xzr
000DD6A8 1f0109eb cmp      x8, x9
000DD6AC e0000054 b.eq     #0xdd6c8
000DD6B0 c80000b4 cbz      x8, #0xdd6c8
000DD6B4 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD6B8 e1a30191 add      x1, sp, #0x68
000DD6BC e83700f9 str      x8, [sp, #0x68]
000DD6C0 90defd97 bl       #0x55100
000DD6C4 fc0300aa mov      x28, x0
000DD6C8 e00313aa mov      x0, x19
000DD6CC 61008052 mov      w1, #3
000DD6D0 08a50494 bl       #0x206af0
000DD6D4 e103002a mov      w1, w0
000DD6D8 e01740f9 ldr      x0, [sp, #0x28]
000DD6DC e2031baa mov      x2, x27
000DD6E0 e3031caa mov      x3, x28
000DD6E4 e4031f2a mov      w4, wzr
000DD6E8 e5031f2a mov      w5, wzr
000DD6EC b3a20794 bl       #0x2c61b8
000DD6F0 5f130071 cmp      w26, #4
000DD6F4 80050054 b.eq     #0xdd7a4
000DD6F8 08549152 mov      w8, #0x8aa0
000DD6FC e00317aa mov      x0, x23
000DD700 22008052 mov      w2, #1
000DD704 c102088b add      x1, x22, x8
000DD708 56a90794 bl       #0x2c7c60
000DD70C 086f40f9 ldr      x8, [x24, #0xd8]
000DD710 a9c884d2 mov      x9, #0x2645
000DD714 4984b0f2 movk     x9, #0x8422, lsl #16
000DD718 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD71C 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD720 fb031faa mov      x27, xzr
000DD724 1f0109eb cmp      x8, x9
000DD728 e0000054 b.eq     #0xdd744
000DD72C c80000b4 cbz      x8, #0xdd744
000DD730 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD734 e1a30191 add      x1, sp, #0x68
000DD738 e83700f9 str      x8, [sp, #0x68]
000DD73C 71defd97 bl       #0x55100
000DD740 fb0300aa mov      x27, x0
000DD744 087340f9 ldr      x8, [x24, #0xe0]
000DD748 a9c884d2 mov      x9, #0x2645
000DD74C 4984b0f2 movk     x9, #0x8422, lsl #16
000DD750 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD754 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD758 fc031faa mov      x28, xzr
000DD75C 1f0109eb cmp      x8, x9
000DD760 e0000054 b.eq     #0xdd77c
000DD764 c80000b4 cbz      x8, #0xdd77c
000DD768 a06a41f9 ldr      x0, [x21, #0x2d0]
000DD76C e1a30191 add      x1, sp, #0x68
000DD770 e83700f9 str      x8, [sp, #0x68]
000DD774 63defd97 bl       #0x55100
000DD778 fc0300aa mov      x28, x0
000DD77C e00313aa mov      x0, x19
000DD780 81008052 mov      w1, #4
000DD784 dba40494 bl       #0x206af0
000DD788 e103002a mov      w1, w0
000DD78C e01740f9 ldr      x0, [sp, #0x28]
000DD790 e2031baa mov      x2, x27
000DD794 e3031caa mov      x3, x28
000DD798 e4031f2a mov      w4, wzr
000DD79C e5031f2a mov      w5, wzr
000DD7A0 86a20794 bl       #0x2c61b8
000DD7A4 1ba30391 add      x27, x24, #0xe8
000DD7A8 e00317aa mov      x0, x23
000DD7AC f50700f9 str      x21, [sp, #8]
000DD7B0 e1031baa mov      x1, x27
000DD7B4 22008052 mov      w2, #1
000DD7B8 2aa90794 bl       #0x2c7c60
000DD7BC 08589152 mov      w8, #0x8ac0
000DD7C0 e00317aa mov      x0, x23
000DD7C4 22008052 mov      w2, #1
000DD7C8 dc02088b add      x28, x22, x8
000DD7CC e1031caa mov      x1, x28
000DD7D0 24a90794 bl       #0x2c7c60
000DD7D4 f81340f9 ldr      x24, [sp, #0x20]
000DD7D8 e00318aa mov      x0, x24
000DD7DC a1435bb8 ldur     w1, [x29, #-0x4c]
000DD7E0 19e0fe97 bl       #0x95844
000DD7E4 150c80b9 ldrsw    x21, [x0, #0xc]
000DD7E8 a04301d1 sub      x0, x29, #0x50
000DD7EC e1a30191 add      x1, sp, #0x68
000DD7F0 ffa30139 strb     wzr, [sp, #0x68]
000DD7F4 ffc306f8 stur     xzr, [sp, #0x6c]
000DD7F8 ff4307f8 stur     xzr, [sp, #0x74]
000DD7FC b1cefe97 bl       #0x912c0
000DD800 e8a34139 ldrb     w8, [sp, #0x68]
000DD804 e8050034 cbz      w8, #0xdd8c0
000DD808 e16f40b9 ldr      w1, [sp, #0x6c]
000DD80C e00318aa mov      x0, x24
000DD810 7ce2fe97 bl       #0x96200
000DD814 d80a40f9 ldr      x24, [x22, #0x10]
000DD818 581d00b4 cbz      x24, #0xddbc0
000DD81C fa0300aa mov      x26, x0
000DD820 f93300f9 str      x25, [sp, #0x60]
000DD824 b90000b4 cbz      x25, #0xdd838
000DD828 e00319aa mov      x0, x25
000DD82C 088c44f8 ldr      x8, [x0, #0x48]!
000DD830 080940f9 ldr      x8, [x8, #0x10]
000DD834 00013fd6 blr      x8
000DD838 c86a98d2 mov      x8, #0xc356
000DD83C 28e9bbf2 movk     x8, #0xdf49, lsl #16
000DD840 e2830191 add      x2, sp, #0x60
000DD844 2817ccf2 movk     x8, #0x60b9, lsl #32
000DD848 c81ffaf2 movk     x8, #0xd0fe, lsl #48
000DD84C e82b00f9 str      x8, [sp, #0x50]
000DD850 e3430191 add      x3, sp, #0x50
000DD854 e00318aa mov      x0, x24
000DD858 e1031caa mov      x1, x28
000DD85C e4031f2a mov      w4, wzr
000DD860 e5031aaa mov      x5, x26
000DD864 2438ff97 bl       #0xab8f4
000DD868 e03340f9 ldr      x0, [sp, #0x60]
000DD86C 400700b4 cbz      x0, #0xdd954
000DD870 088c44f8 ldr      x8, [x0, #0x48]!
000DD874 080d40f9 ldr      x8, [x8, #0x18]
000DD878 00013fd6 blr      x8
000DD87C ff3300f9 str      xzr, [sp, #0x60]
000DD880 35000014 b        #0xdd954
000DD884 e00316aa mov      x0, x22
000DD888 cf000094 bl       #0xddbc4
000DD88C 085e9152 mov      w8, #0x8af0
000DD890 e00317aa mov      x0, x23
000DD894 e2031f2a mov      w2, wzr
000DD898 c102088b add      x1, x22, x8
000DD89C f1a80794 bl       #0x2c7c60
000DD8A0 08629152 mov      w8, #0x8b10
000DD8A4 e00317aa mov      x0, x23
000DD8A8 e2031f2a mov      w2, wzr
000DD8AC c102088b add      x1, x22, x8
000DD8B0 eca80794 bl       #0x2c7c60
000DD8B4 fc0f40f9 ldr      x28, [sp, #0x18]
000DD8B8 591000b5 cbnz     x25, #0xddac0
000DD8BC 85000014 b        #0xddad0
000DD8C0 e86f40b9 ldr      w8, [sp, #0x6c]
000DD8C4 e1430191 add      x1, sp, #0x50
000DD8C8 e00318aa mov      x0, x24
000DD8CC e93b40f9 ldr      x9, [sp, #0x70]
000DD8D0 e85300b9 str      w8, [sp, #0x50]
000DD8D4 e87b40b9 ldr      w8, [sp, #0x78]
000DD8D8 e94305f8 stur     x9, [sp, #0x54]
000DD8DC e85f00b9 str      w8, [sp, #0x5c]
000DD8E0 32e2fe97 bl       #0x961a8
000DD8E4 800300b4 cbz      x0, #0xdd954
000DD8E8 d80a40f9 ldr      x24, [x22, #0x10]
000DD8EC b81600b4 cbz      x24, #0xddbc0
000DD8F0 fa0300aa mov      x26, x0
000DD8F4 f92700f9 str      x25, [sp, #0x48]
000DD8F8 b90000b4 cbz      x25, #0xdd90c
000DD8FC e00319aa mov      x0, x25
000DD900 088c44f8 ldr      x8, [x0, #0x48]!
000DD904 080940f9 ldr      x8, [x8, #0x10]
000DD908 00013fd6 blr      x8
000DD90C c86a98d2 mov      x8, #0xc356
000DD910 28e9bbf2 movk     x8, #0xdf49, lsl #16
000DD914 e2230191 add      x2, sp, #0x48
000DD918 2817ccf2 movk     x8, #0x60b9, lsl #32
000DD91C c81ffaf2 movk     x8, #0xd0fe, lsl #48
000DD920 e82300f9 str      x8, [sp, #0x40]
000DD924 e3030191 add      x3, sp, #0x40
000DD928 e00318aa mov      x0, x24
000DD92C e1031caa mov      x1, x28
000DD930 e4031f2a mov      w4, wzr
000DD934 e5031aaa mov      x5, x26
000DD938 9637ff97 bl       #0xab790
000DD93C e02740f9 ldr      x0, [sp, #0x48]
000DD940 a00000b4 cbz      x0, #0xdd954
000DD944 088c44f8 ldr      x8, [x0, #0x48]!
000DD948 080d40f9 ldr      x8, [x8, #0x18]
000DD94C 00013fd6 blr      x8
000DD950 ff2700f9 str      xzr, [sp, #0x48]
000DD954 680340f9 ldr      x8, [x27]
000DD958 a9c884d2 mov      x9, #0x2645
000DD95C 4984b0f2 movk     x9, #0x8422, lsl #16
000DD960 fc0f40f9 ldr      x28, [sp, #0x18]
000DD964 899cd3f2 movk     x9, #0x9ce4, lsl #32
000DD968 497ef9f2 movk     x9, #0xcbf2, lsl #48
000DD96C e2031faa mov      x2, xzr
000DD970 1f0109eb cmp      x8, x9
000DD974 00010054 b.eq     #0xdd994
000DD978 e80000b4 cbz      x8, #0xdd994
000DD97C e90740f9 ldr      x9, [sp, #8]
000DD980 e1430191 add      x1, sp, #0x50
000DD984 e82b00f9 str      x8, [sp, #0x50]
000DD988 206941f9 ldr      x0, [x9, #0x2d0]
000DD98C ddddfd97 bl       #0x55100
000DD990 e20300aa mov      x2, x0
000DD994 482a0090 adrp     x8, #0x625000
000DD998 08c13e91 add      x8, x8, #0xfb0
000DD99C e0031caa mov      x0, x28
000DD9A0 017975b8 ldr      w1, [x8, x21, lsl #2]
000DD9A4 e3031f2a mov      w3, wzr
000DD9A8 e4031f2a mov      w4, wzr
000DD9AC eadd0794 bl       #0x2d5154
000DD9B0 085f9152 mov      w8, #0x8af8
000DD9B4 e00317aa mov      x0, x23
000DD9B8 22008052 mov      w2, #1
000DD9BC c102088b add      x1, x22, x8
000DD9C0 a8a80794 bl       #0x2c7c60
000DD9C4 085e9152 mov      w8, #0x8af0
000DD9C8 e00317aa mov      x0, x23
000DD9CC 22008052 mov      w2, #1
000DD9D0 c102088b add      x1, x22, x8
000DD9D4 a3a80794 bl       #0x2c7c60
000DD9D8 08629152 mov      w8, #0x8b10
000DD9DC e00317aa mov      x0, x23
000DD9E0 22008052 mov      w2, #1
000DD9E4 c102088b add      x1, x22, x8
000DD9E8 9ea80794 bl       #0x2c7c60
000DD9EC 802a41f9 ldr      x0, [x20, #0x250]
000DD9F0 000100b4 cbz      x0, #0xdda10
000DD9F4 e5a20494 bl       #0x206588
000DD9F8 c0000037 tbnz     w0, #0, #0xdda10
000DD9FC 9a420991 add      x26, x20, #0x250
000DDA00 41008052 mov      w1, #2
000DDA04 400340f9 ldr      x0, [x26]
000DDA08 00a40494 bl       #0x206a08
000DDA0C c0090036 tbz      w0, #0, #0xddb44
000DDA10 da0a40f9 ldr      x26, [x22, #0x10]
000DDA14 f40740f9 ldr      x20, [sp, #8]
000DDA18 5a0d00b4 cbz      x26, #0xddbc0
000DDA1C 08639152 mov      w8, #0x8b18
000DDA20 f91f00f9 str      x25, [sp, #0x38]
000DDA24 d802088b add      x24, x22, x8
000DDA28 b90000b4 cbz      x25, #0xdda3c
000DDA2C e00319aa mov      x0, x25
000DDA30 088c44f8 ldr      x8, [x0, #0x48]!
000DDA34 080940f9 ldr      x8, [x8, #0x10]
000DDA38 00013fd6 blr      x8
000DDA3C 681d95d2 mov      x8, #0xa8eb
000DDA40 a88da6f2 movk     x8, #0x346d, lsl #16
000DDA44 e2e30091 add      x2, sp, #0x38
000DDA48 0825c2f2 movk     x8, #0x1128, lsl #32
000DDA4C 0835fbf2 movk     x8, #0xd9a8, lsl #48
000DDA50 e83700f9 str      x8, [sp, #0x68]
000DDA54 e3a30191 add      x3, sp, #0x68
000DDA58 e0031aaa mov      x0, x26
000DDA5C e10318aa mov      x1, x24
000DDA60 e4031f2a mov      w4, wzr
000DDA64 e5031f2a mov      w5, wzr
000DDA68 cb3aff97 bl       #0xac594
000DDA6C e01f40f9 ldr      x0, [sp, #0x38]
000DDA70 a00000b4 cbz      x0, #0xdda84
000DDA74 088c44f8 ldr      x8, [x0, #0x48]!
000DDA78 080d40f9 ldr      x8, [x8, #0x18]
000DDA7C 00013fd6 blr      x8
000DDA80 ff1f00f9 str      xzr, [sp, #0x38]
000DDA84 085d9152 mov      w8, #0x8ae8
000DDA88 98420491 add      x24, x20, #0x110
000DDA8C c102088b add      x1, x22, x8
000DDA90 e80b40f9 ldr      x8, [sp, #0x10]
000DDA94 e00318aa mov      x0, x24
000DDA98 080d0012 and      w8, w8, #0xf
000DDA9C 0801231e ucvtf    s8, w8
000DDAA0 0041201e fmov     s0, s8
000DDAA4 b63bfd97 bl       #0x2c97c
000DDAA8 0041201e fmov     s0, s8
000DDAAC 08609152 mov      w8, #0x8b00
000DDAB0 e00318aa mov      x0, x24
000DDAB4 c102088b add      x1, x22, x8
000DDAB8 b13bfd97 bl       #0x2c97c
000DDABC b90000b4 cbz      x25, #0xddad0
000DDAC0 288f44f8 ldr      x8, [x25, #0x48]!
000DDAC4 e00319aa mov      x0, x25
000DDAC8 080d40f9 ldr      x8, [x8, #0x18]
000DDACC 00013fd6 blr      x8
000DDAD0 b70000b4 cbz      x23, #0xddae4
000DDAD4 e88e44f8 ldr      x8, [x23, #0x48]!
000DDAD8 e00317aa mov      x0, x23
000DDADC 080d40f9 ldr      x8, [x8, #0x18]
000DDAE0 00013fd6 blr      x8
000DDAE4 e01740f9 ldr      x0, [sp, #0x28]
000DDAE8 800000b4 cbz      x0, #0xddaf8
000DDAEC 088c44f8 ldr      x8, [x0, #0x48]!
000DDAF0 080d40f9 ldr      x8, [x8, #0x18]
000DDAF4 00013fd6 blr      x8
000DDAF8 bc0000b4 cbz      x28, #0xddb0c
000DDAFC 888f44f8 ldr      x8, [x28, #0x48]!
000DDB00 e0031caa mov      x0, x28
000DDB04 080d40f9 ldr      x8, [x8, #0x18]
000DDB08 00013fd6 blr      x8
000DDB0C b30000b4 cbz      x19, #0xddb20
000DDB10 688e44f8 ldr      x8, [x19, #0x48]!
000DDB14 e00313aa mov      x0, x19
000DDB18 080d40f9 ldr      x8, [x8, #0x18]
000DDB1C 00013fd6 blr      x8
000DDB20 e86340fd ldr      d8, [sp, #0xc0]
000DDB24 f44f52a9 ldp      x20, x19, [sp, #0x120]
000DDB28 f65751a9 ldp      x22, x21, [sp, #0x110]
000DDB2C f85f50a9 ldp      x24, x23, [sp, #0x100]
000DDB30 fa674fa9 ldp      x26, x25, [sp, #0xf0]
000DDB34 fc6f4ea9 ldp      x28, x27, [sp, #0xe0]
000DDB38 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
000DDB3C ffc30491 add      sp, sp, #0x130
000DDB40 c0035fd6 ret      
000DDB44 db0a40f9 ldr      x27, [x22, #0x10]
000DDB48 f40740f9 ldr      x20, [sp, #8]
000DDB4C bb0300b4 cbz      x27, #0xddbc0
000DDB50 08639152 mov      w8, #0x8b18
000DDB54 f91b00f9 str      x25, [sp, #0x30]
000DDB58 d802088b add      x24, x22, x8
000DDB5C b90000b4 cbz      x25, #0xddb70
000DDB60 e00319aa mov      x0, x25
000DDB64 088c44f8 ldr      x8, [x0, #0x48]!
000DDB68 080940f9 ldr      x8, [x8, #0x10]
000DDB6C 00013fd6 blr      x8
000DDB70 08e794d2 mov      x8, #0xa738
000DDB74 a88da6f2 movk     x8, #0x346d, lsl #16
000DDB78 e2c30091 add      x2, sp, #0x30
000DDB7C 0805c2f2 movk     x8, #0x1028, lsl #32
000DDB80 0835fbf2 movk     x8, #0xd9a8, lsl #48
000DDB84 e83700f9 str      x8, [sp, #0x68]
000DDB88 e3a30191 add      x3, sp, #0x68
000DDB8C e0031baa mov      x0, x27
000DDB90 e10318aa mov      x1, x24
000DDB94 e4031f2a mov      w4, wzr
000DDB98 25008052 mov      w5, #1
000DDB9C e6031aaa mov      x6, x26
000DDBA0 1634ff97 bl       #0xaabf8
000DDBA4 e01b40f9 ldr      x0, [sp, #0x30]
000DDBA8 e0f6ffb4 cbz      x0, #0xdda84
000DDBAC 088c44f8 ldr      x8, [x0, #0x48]!
000DDBB0 080d40f9 ldr      x8, [x8, #0x18]
000DDBB4 00013fd6 blr      x8
000DDBB8 ff1b00f9 str      xzr, [sp, #0x30]
000DDBBC b2ffff17 b        #0xdda84
000DDBC0 e0611494 bl       #0x5f6340
~~~
### 0xdea80 (116 slots)
~~~asm
000DEA80 ff4301d1 sub      sp, sp, #0x50
000DEA84 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DEA88 f51b00f9 str      x21, [sp, #0x30]
000DEA8C f44f04a9 stp      x20, x19, [sp, #0x40]
000DEA90 fd830091 add      x29, sp, #0x20
000DEA94 f40300aa mov      x20, x0
000DEA98 61290090 adrp     x1, #0x60a000
000DEA9C 21b43691 add      x1, x1, #0xdad
000DEAA0 e0030091 mov      x0, sp
000DEAA4 4cadfc97 bl       #0x9fd4
000DEAA8 803a40f9 ldr      x0, [x20, #0x70]
000DEAAC 800000b4 cbz      x0, #0xdeabc
000DEAB0 088c44f8 ldr      x8, [x0, #0x48]!
000DEAB4 080d40f9 ldr      x8, [x8, #0x18]
000DEAB8 00013fd6 blr      x8
000DEABC e80340f9 ldr      x8, [sp]
000DEAC0 883a00f9 str      x8, [x20, #0x70]
000DEAC4 883240f9 ldr      x8, [x20, #0x60]
000DEAC8 133140f9 ldr      x19, [x8, #0x60]
000DEACC 680240f9 ldr      x8, [x19]
000DEAD0 e00313aa mov      x0, x19
000DEAD4 080140f9 ldr      x8, [x8]
000DEAD8 00013fd6 blr      x8
000DEADC f50300aa mov      x21, x0
000DEAE0 9f1dfd97 bl       #0x2615c
000DEAE4 1f0015eb cmp      x0, x21
000DEAE8 c0000054 b.eq     #0xdeb00
000DEAEC 1f2003d5 nop      
000DEAF0 b50240f9 ldr      x21, [x21]
000DEAF4 bf0200eb cmp      x21, x0
000DEAF8 a41a40fa ccmp     x21, #0, #4, ne
000DEAFC a1ffff54 b.ne     #0xdeaf0
000DEB00 60be42f9 ldr      x0, [x19, #0x578]
000DEB04 88539bd2 mov      x8, #0xda9c
000DEB08 2869b1f2 movk     x8, #0x8b49, lsl #16
000DEB0C e886cef2 movk     x8, #0x7437, lsl #32
000DEB10 e8a7eef2 movk     x8, #0x753f, lsl #48
000DEB14 c9290090 adrp     x9, #0x616000
000DEB18 29511f91 add      x9, x9, #0x7d4
000DEB1C e82700a9 stp      x8, x9, [sp]
000DEB20 08018052 mov      w8, #8
000DEB24 e1030091 mov      x1, sp
000DEB28 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DEB2C 95bffe97 bl       #0x8e980
000DEB30 f30300aa mov      x19, x0
000DEB34 e00f40f9 ldr      x0, [sp, #0x18]
000DEB38 800000b4 cbz      x0, #0xdeb48
000DEB3C 088c44f8 ldr      x8, [x0, #0x48]!
000DEB40 080d40f9 ldr      x8, [x8, #0x18]
000DEB44 00013fd6 blr      x8
000DEB48 e00313aa mov      x0, x19
000DEB4C 21008052 mov      w1, #1
000DEB50 22008052 mov      w2, #1
000DEB54 9728fd97 bl       #0x28db0
000DEB58 883640f9 ldr      x8, [x20, #0x68]
000DEB5C 280300b4 cbz      x8, #0xdebc0
000DEB60 143140f9 ldr      x20, [x8, #0x60]
000DEB64 140300b4 cbz      x20, #0xdebc4
000DEB68 880240f9 ldr      x8, [x20]
000DEB6C e00314aa mov      x0, x20
000DEB70 080140f9 ldr      x8, [x8]
000DEB74 00013fd6 blr      x8
000DEB78 f50300aa mov      x21, x0
000DEB7C c9bafe97 bl       #0x8d6a0
000DEB80 1f0015eb cmp      x0, x21
000DEB84 00010054 b.eq     #0xdeba4
000DEB88 1f2003d5 nop      
000DEB8C 1f2003d5 nop      
000DEB90 b50240f9 ldr      x21, [x21]
000DEB94 bf0200eb cmp      x21, x0
000DEB98 a41a40fa ccmp     x21, #0, #4, ne
000DEB9C a1ffff54 b.ne     #0xdeb90
000DEBA0 f50300b4 cbz      x21, #0xdec1c
000DEBA4 944201d1 sub      x20, x20, #0x50
000DEBA8 e00313aa mov      x0, x19
000DEBAC cc92ff97 bl       #0xc36dc
000DEBB0 88a641b9 ldr      w8, [x20, #0x1a4]
000DEBB4 1f090071 cmp      w8, #2
000DEBB8 01010054 b.ne     #0xdebd8
000DEBBC 1e000014 b        #0xdec34
000DEBC0 f4031faa mov      x20, xzr
000DEBC4 e00313aa mov      x0, x19
000DEBC8 c592ff97 bl       #0xc36dc
000DEBCC 88a641b9 ldr      w8, [x20, #0x1a4]
000DEBD0 1f090071 cmp      w8, #2
000DEBD4 00030054 b.eq     #0xdec34
000DEBD8 1f050071 cmp      w8, #1
000DEBDC 20010054 b.eq     #0xdec00
000DEBE0 a8020035 cbnz     w8, #0xdec34
000DEBE4 e00313aa mov      x0, x19
000DEBE8 6a95ff97 bl       #0xc4190
000DEBEC f44f44a9 ldp      x20, x19, [sp, #0x40]
000DEBF0 f51b40f9 ldr      x21, [sp, #0x30]
000DEBF4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DEBF8 ff430191 add      sp, sp, #0x50
000DEBFC c0035fd6 ret      
000DEC00 e00313aa mov      x0, x19
000DEC04 7695ff97 bl       #0xc41dc
000DEC08 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DEC0C f51b40f9 ldr      x21, [sp, #0x30]
000DEC10 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DEC14 ff430191 add      sp, sp, #0x50
000DEC18 c0035fd6 ret      
000DEC1C f4031faa mov      x20, xzr
000DEC20 e00313aa mov      x0, x19
000DEC24 ae92ff97 bl       #0xc36dc
000DEC28 88a641b9 ldr      w8, [x20, #0x1a4]
000DEC2C 1f090071 cmp      w8, #2
000DEC30 41fdff54 b.ne     #0xdebd8
000DEC34 e00313aa mov      x0, x19
000DEC38 b895ff97 bl       #0xc4318
000DEC3C f44f44a9 ldp      x20, x19, [sp, #0x40]
000DEC40 f51b40f9 ldr      x21, [sp, #0x30]
000DEC44 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DEC48 ff430191 add      sp, sp, #0x50
000DEC4C c0035fd6 ret      
~~~
### 0xdec50 (105 slots)
~~~asm
000DEC50 ff4301d1 sub      sp, sp, #0x50
000DEC54 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DEC58 f51b00f9 str      x21, [sp, #0x30]
000DEC5C f44f04a9 stp      x20, x19, [sp, #0x40]
000DEC60 fd830091 add      x29, sp, #0x20
000DEC64 083040f9 ldr      x8, [x0, #0x60]
000DEC68 f40300aa mov      x20, x0
000DEC6C 133140f9 ldr      x19, [x8, #0x60]
000DEC70 680240f9 ldr      x8, [x19]
000DEC74 e00313aa mov      x0, x19
000DEC78 080140f9 ldr      x8, [x8]
000DEC7C 00013fd6 blr      x8
000DEC80 f50300aa mov      x21, x0
000DEC84 361dfd97 bl       #0x2615c
000DEC88 1f0015eb cmp      x0, x21
000DEC8C a0000054 b.eq     #0xdeca0
000DEC90 b50240f9 ldr      x21, [x21]
000DEC94 bf0200eb cmp      x21, x0
000DEC98 a41a40fa ccmp     x21, #0, #4, ne
000DEC9C a1ffff54 b.ne     #0xdec90
000DECA0 60be42f9 ldr      x0, [x19, #0x578]
000DECA4 88539bd2 mov      x8, #0xda9c
000DECA8 2869b1f2 movk     x8, #0x8b49, lsl #16
000DECAC e886cef2 movk     x8, #0x7437, lsl #32
000DECB0 e8a7eef2 movk     x8, #0x753f, lsl #48
000DECB4 c9290090 adrp     x9, #0x616000
000DECB8 29511f91 add      x9, x9, #0x7d4
000DECBC e82700a9 stp      x8, x9, [sp]
000DECC0 08018052 mov      w8, #8
000DECC4 e1030091 mov      x1, sp
000DECC8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DECCC 2dbffe97 bl       #0x8e980
000DECD0 f30300aa mov      x19, x0
000DECD4 e00f40f9 ldr      x0, [sp, #0x18]
000DECD8 800000b4 cbz      x0, #0xdece8
000DECDC 088c44f8 ldr      x8, [x0, #0x48]!
000DECE0 080d40f9 ldr      x8, [x8, #0x18]
000DECE4 00013fd6 blr      x8
000DECE8 883640f9 ldr      x8, [x20, #0x68]
000DECEC 480300b4 cbz      x8, #0xded54
000DECF0 143140f9 ldr      x20, [x8, #0x60]
000DECF4 340300b4 cbz      x20, #0xded58
000DECF8 880240f9 ldr      x8, [x20]
000DECFC e00314aa mov      x0, x20
000DED00 080140f9 ldr      x8, [x8]
000DED04 00013fd6 blr      x8
000DED08 f50300aa mov      x21, x0
000DED0C 65bafe97 bl       #0x8d6a0
000DED10 1f0015eb cmp      x0, x21
000DED14 00010054 b.eq     #0xded34
000DED18 1f2003d5 nop      
000DED1C 1f2003d5 nop      
000DED20 b50240f9 ldr      x21, [x21]
000DED24 bf0200eb cmp      x21, x0
000DED28 a41a40fa ccmp     x21, #0, #4, ne
000DED2C a1ffff54 b.ne     #0xded20
000DED30 d50300b4 cbz      x21, #0xdeda8
000DED34 944201d1 sub      x20, x20, #0x50
000DED38 e00313aa mov      x0, x19
000DED3C 7e92ff97 bl       #0xc3734
000DED40 88a641b9 ldr      w8, [x20, #0x1a4]
000DED44 e00313aa mov      x0, x19
000DED48 1f090071 cmp      w8, #2
000DED4C 21010054 b.ne     #0xded70
000DED50 1d000014 b        #0xdedc4
000DED54 f4031faa mov      x20, xzr
000DED58 e00313aa mov      x0, x19
000DED5C 7692ff97 bl       #0xc3734
000DED60 88a641b9 ldr      w8, [x20, #0x1a4]
000DED64 e00313aa mov      x0, x19
000DED68 1f090071 cmp      w8, #2
000DED6C c0020054 b.eq     #0xdedc4
000DED70 1f050071 cmp      w8, #1
000DED74 40010054 b.eq     #0xded9c
000DED78 68020035 cbnz     w8, #0xdedc4
000DED7C 1195ff97 bl       #0xc41c0
000DED80 60020037 tbnz     w0, #0, #0xdedcc
000DED84 e0031f2a mov      w0, wzr
000DED88 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DED8C f51b40f9 ldr      x21, [sp, #0x30]
000DED90 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DED94 ff430191 add      sp, sp, #0x50
000DED98 c0035fd6 ret      
000DED9C 3795ff97 bl       #0xc4278
000DEDA0 20ff0736 tbz      w0, #0, #0xded84
000DEDA4 0a000014 b        #0xdedcc
000DEDA8 f4031faa mov      x20, xzr
000DEDAC e00313aa mov      x0, x19
000DEDB0 6192ff97 bl       #0xc3734
000DEDB4 88a641b9 ldr      w8, [x20, #0x1a4]
000DEDB8 e00313aa mov      x0, x19
000DEDBC 1f090071 cmp      w8, #2
000DEDC0 81fdff54 b.ne     #0xded70
000DEDC4 6195ff97 bl       #0xc4348
000DEDC8 e0fd0736 tbz      w0, #0, #0xded84
000DEDCC e00313aa mov      x0, x19
000DEDD0 5b92ff97 bl       #0xc373c
000DEDD4 68008052 mov      w8, #3
000DEDD8 20008052 mov      w0, #1
000DEDDC 88a203b9 str      w8, [x20, #0x3a0]
000DEDE0 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DEDE4 f51b40f9 ldr      x21, [sp, #0x30]
000DEDE8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DEDEC ff430191 add      sp, sp, #0x50
000DEDF0 c0035fd6 ret      
~~~
### 0xdee20 (88 slots)
~~~asm
000DEE20 ff4301d1 sub      sp, sp, #0x50
000DEE24 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DEE28 f51b00f9 str      x21, [sp, #0x30]
000DEE2C f44f04a9 stp      x20, x19, [sp, #0x40]
000DEE30 fd830091 add      x29, sp, #0x20
000DEE34 f30300aa mov      x19, x0
000DEE38 012a0090 adrp     x1, #0x61e000
000DEE3C 21101291 add      x1, x1, #0x484
000DEE40 e0030091 mov      x0, sp
000DEE44 64acfc97 bl       #0x9fd4
000DEE48 603a40f9 ldr      x0, [x19, #0x70]
000DEE4C 800000b4 cbz      x0, #0xdee5c
000DEE50 088c44f8 ldr      x8, [x0, #0x48]!
000DEE54 080d40f9 ldr      x8, [x8, #0x18]
000DEE58 00013fd6 blr      x8
000DEE5C e80340f9 ldr      x8, [sp]
000DEE60 683a00f9 str      x8, [x19, #0x70]
000DEE64 683240f9 ldr      x8, [x19, #0x60]
000DEE68 143140f9 ldr      x20, [x8, #0x60]
000DEE6C 880240f9 ldr      x8, [x20]
000DEE70 e00314aa mov      x0, x20
000DEE74 080140f9 ldr      x8, [x8]
000DEE78 00013fd6 blr      x8
000DEE7C f50300aa mov      x21, x0
000DEE80 b71cfd97 bl       #0x2615c
000DEE84 1f0015eb cmp      x0, x21
000DEE88 c0000054 b.eq     #0xdeea0
000DEE8C 1f2003d5 nop      
000DEE90 b50240f9 ldr      x21, [x21]
000DEE94 bf0200eb cmp      x21, x0
000DEE98 a41a40fa ccmp     x21, #0, #4, ne
000DEE9C a1ffff54 b.ne     #0xdee90
000DEEA0 80be42f9 ldr      x0, [x20, #0x578]
000DEEA4 286496d2 mov      x8, #0xb321
000DEEA8 888abef2 movk     x8, #0xf454, lsl #16
000DEEAC 48c3c2f2 movk     x8, #0x161a, lsl #32
000DEEB0 28e8ecf2 movk     x8, #0x6741, lsl #48
000DEEB4 a92900f0 adrp     x9, #0x615000
000DEEB8 29093191 add      x9, x9, #0xc42
000DEEBC e82700a9 stp      x8, x9, [sp]
000DEEC0 28018052 mov      w8, #9
000DEEC4 e1030091 mov      x1, sp
000DEEC8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DEECC 39bffe97 bl       #0x8ebb0
000DEED0 f40300aa mov      x20, x0
000DEED4 e00f40f9 ldr      x0, [sp, #0x18]
000DEED8 800000b4 cbz      x0, #0xdeee8
000DEEDC 088c44f8 ldr      x8, [x0, #0x48]!
000DEEE0 080d40f9 ldr      x8, [x8, #0x18]
000DEEE4 00013fd6 blr      x8
000DEEE8 e00314aa mov      x0, x20
000DEEEC 21008052 mov      w1, #1
000DEEF0 22008052 mov      w2, #1
000DEEF4 af27fd97 bl       #0x28db0
000DEEF8 e00314aa mov      x0, x20
000DEEFC c0dfff97 bl       #0xd6dfc
000DEF00 683640f9 ldr      x8, [x19, #0x68]
000DEF04 133140f9 ldr      x19, [x8, #0x60]
000DEF08 680240f9 ldr      x8, [x19]
000DEF0C e00313aa mov      x0, x19
000DEF10 080140f9 ldr      x8, [x8]
000DEF14 00013fd6 blr      x8
000DEF18 f50300aa mov      x21, x0
000DEF1C e1b9fe97 bl       #0x8d6a0
000DEF20 1f0015eb cmp      x0, x21
000DEF24 e0000054 b.eq     #0xdef40
000DEF28 1f2003d5 nop      
000DEF2C 1f2003d5 nop      
000DEF30 b50240f9 ldr      x21, [x21]
000DEF34 bf0200eb cmp      x21, x0
000DEF38 a41a40fa ccmp     x21, #0, #4, ne
000DEF3C a1ffff54 b.ne     #0xdef30
000DEF40 685641b9 ldr      w8, [x19, #0x154]
000DEF44 e00314aa mov      x0, x20
000DEF48 1f050071 cmp      w8, #1
000DEF4C e1000054 b.ne     #0xdef68
000DEF50 14dfff97 bl       #0xd6ba0
000DEF54 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DEF58 f51b40f9 ldr      x21, [sp, #0x30]
000DEF5C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DEF60 ff430191 add      sp, sp, #0x50
000DEF64 c0035fd6 ret      
000DEF68 5ddfff97 bl       #0xd6cdc
000DEF6C f44f44a9 ldp      x20, x19, [sp, #0x40]
000DEF70 f51b40f9 ldr      x21, [sp, #0x30]
000DEF74 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DEF78 ff430191 add      sp, sp, #0x50
000DEF7C c0035fd6 ret      
~~~
### 0xdef80 (93 slots)
~~~asm
000DEF80 ff4301d1 sub      sp, sp, #0x50
000DEF84 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DEF88 f51b00f9 str      x21, [sp, #0x30]
000DEF8C f44f04a9 stp      x20, x19, [sp, #0x40]
000DEF90 fd830091 add      x29, sp, #0x20
000DEF94 083040f9 ldr      x8, [x0, #0x60]
000DEF98 f40300aa mov      x20, x0
000DEF9C 133140f9 ldr      x19, [x8, #0x60]
000DEFA0 680240f9 ldr      x8, [x19]
000DEFA4 e00313aa mov      x0, x19
000DEFA8 080140f9 ldr      x8, [x8]
000DEFAC 00013fd6 blr      x8
000DEFB0 f50300aa mov      x21, x0
000DEFB4 6a1cfd97 bl       #0x2615c
000DEFB8 1f0015eb cmp      x0, x21
000DEFBC a0000054 b.eq     #0xdefd0
000DEFC0 b50240f9 ldr      x21, [x21]
000DEFC4 bf0200eb cmp      x21, x0
000DEFC8 a41a40fa ccmp     x21, #0, #4, ne
000DEFCC a1ffff54 b.ne     #0xdefc0
000DEFD0 60be42f9 ldr      x0, [x19, #0x578]
000DEFD4 286496d2 mov      x8, #0xb321
000DEFD8 888abef2 movk     x8, #0xf454, lsl #16
000DEFDC 48c3c2f2 movk     x8, #0x161a, lsl #32
000DEFE0 28e8ecf2 movk     x8, #0x6741, lsl #48
000DEFE4 a92900f0 adrp     x9, #0x615000
000DEFE8 29093191 add      x9, x9, #0xc42
000DEFEC e82700a9 stp      x8, x9, [sp]
000DEFF0 28018052 mov      w8, #9
000DEFF4 e1030091 mov      x1, sp
000DEFF8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DEFFC edbefe97 bl       #0x8ebb0
000DF000 f30300aa mov      x19, x0
000DF004 e00f40f9 ldr      x0, [sp, #0x18]
000DF008 800000b4 cbz      x0, #0xdf018
000DF00C 088c44f8 ldr      x8, [x0, #0x48]!
000DF010 080d40f9 ldr      x8, [x8, #0x18]
000DF014 00013fd6 blr      x8
000DF018 883640f9 ldr      x8, [x20, #0x68]
000DF01C 680400b4 cbz      x8, #0xdf0a8
000DF020 143140f9 ldr      x20, [x8, #0x60]
000DF024 540400b4 cbz      x20, #0xdf0ac
000DF028 880240f9 ldr      x8, [x20]
000DF02C e00314aa mov      x0, x20
000DF030 080140f9 ldr      x8, [x8]
000DF034 00013fd6 blr      x8
000DF038 f50300aa mov      x21, x0
000DF03C 99b9fe97 bl       #0x8d6a0
000DF040 1f0015eb cmp      x0, x21
000DF044 00010054 b.eq     #0xdf064
000DF048 1f2003d5 nop      
000DF04C 1f2003d5 nop      
000DF050 b50240f9 ldr      x21, [x21]
000DF054 bf0200eb cmp      x21, x0
000DF058 a41a40fa ccmp     x21, #0, #4, ne
000DF05C a1ffff54 b.ne     #0xdf050
000DF060 f50300b4 cbz      x21, #0xdf0dc
000DF064 944201d1 sub      x20, x20, #0x50
000DF068 88a641b9 ldr      w8, [x20, #0x1a4]
000DF06C e00313aa mov      x0, x19
000DF070 1f050071 cmp      w8, #1
000DF074 40020054 b.eq     #0xdf0bc
000DF078 25dfff97 bl       #0xd6d0c
000DF07C 40020036 tbz      w0, #0, #0xdf0c4
000DF080 e00313aa mov      x0, x19
000DF084 9cdfff97 bl       #0xd6ef4
000DF088 c8008052 mov      w8, #6
000DF08C 20008052 mov      w0, #1
000DF090 88a203b9 str      w8, [x20, #0x3a0]
000DF094 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DF098 f51b40f9 ldr      x21, [sp, #0x30]
000DF09C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DF0A0 ff430191 add      sp, sp, #0x50
000DF0A4 c0035fd6 ret      
000DF0A8 f4031faa mov      x20, xzr
000DF0AC 88a641b9 ldr      w8, [x20, #0x1a4]
000DF0B0 e00313aa mov      x0, x19
000DF0B4 1f050071 cmp      w8, #1
000DF0B8 01feff54 b.ne     #0xdf078
000DF0BC e0deff97 bl       #0xd6c3c
000DF0C0 00fe0737 tbnz     w0, #0, #0xdf080
000DF0C4 e0031f2a mov      w0, wzr
000DF0C8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DF0CC f51b40f9 ldr      x21, [sp, #0x30]
000DF0D0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DF0D4 ff430191 add      sp, sp, #0x50
000DF0D8 c0035fd6 ret      
000DF0DC f4031faa mov      x20, xzr
000DF0E0 88a641b9 ldr      w8, [x20, #0x1a4]
000DF0E4 e00313aa mov      x0, x19
000DF0E8 1f050071 cmp      w8, #1
000DF0EC 80feff54 b.eq     #0xdf0bc
000DF0F0 e2ffff17 b        #0xdf078
~~~
### 0xdf120 (114 slots)
~~~asm
000DF120 ff4301d1 sub      sp, sp, #0x50
000DF124 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DF128 f51b00f9 str      x21, [sp, #0x30]
000DF12C f44f04a9 stp      x20, x19, [sp, #0x40]
000DF130 fd830091 add      x29, sp, #0x20
000DF134 f30300aa mov      x19, x0
000DF138 c12900d0 adrp     x1, #0x619000
000DF13C 21500e91 add      x1, x1, #0x394
000DF140 e0030091 mov      x0, sp
000DF144 a4abfc97 bl       #0x9fd4
000DF148 603a40f9 ldr      x0, [x19, #0x70]
000DF14C 800000b4 cbz      x0, #0xdf15c
000DF150 088c44f8 ldr      x8, [x0, #0x48]!
000DF154 080d40f9 ldr      x8, [x8, #0x18]
000DF158 00013fd6 blr      x8
000DF15C e80340f9 ldr      x8, [sp]
000DF160 683a00f9 str      x8, [x19, #0x70]
000DF164 683640f9 ldr      x8, [x19, #0x68]
000DF168 480200b4 cbz      x8, #0xdf1b0
000DF16C 143140f9 ldr      x20, [x8, #0x60]
000DF170 140200b4 cbz      x20, #0xdf1b0
000DF174 880240f9 ldr      x8, [x20]
000DF178 e00314aa mov      x0, x20
000DF17C 080140f9 ldr      x8, [x8]
000DF180 00013fd6 blr      x8
000DF184 f50300aa mov      x21, x0
000DF188 46b9fe97 bl       #0x8d6a0
000DF18C 1f0015eb cmp      x0, x21
000DF190 c0000054 b.eq     #0xdf1a8
000DF194 b50240f9 ldr      x21, [x21]
000DF198 bf0200eb cmp      x21, x0
000DF19C a41a40fa ccmp     x21, #0, #4, ne
000DF1A0 a1ffff54 b.ne     #0xdf194
000DF1A4 950000b4 cbz      x21, #0xdf1b4
000DF1A8 954201d1 sub      x21, x20, #0x50
000DF1AC 02000014 b        #0xdf1b4
000DF1B0 f5031faa mov      x21, xzr
000DF1B4 683240f9 ldr      x8, [x19, #0x60]
000DF1B8 133140f9 ldr      x19, [x8, #0x60]
000DF1BC 680240f9 ldr      x8, [x19]
000DF1C0 e00313aa mov      x0, x19
000DF1C4 080140f9 ldr      x8, [x8]
000DF1C8 00013fd6 blr      x8
000DF1CC f40300aa mov      x20, x0
000DF1D0 e31bfd97 bl       #0x2615c
000DF1D4 1f0014eb cmp      x0, x20
000DF1D8 c0000054 b.eq     #0xdf1f0
000DF1DC 1f2003d5 nop      
000DF1E0 940240f9 ldr      x20, [x20]
000DF1E4 9f0200eb cmp      x20, x0
000DF1E8 841a40fa ccmp     x20, #0, #4, ne
000DF1EC a1ffff54 b.ne     #0xdf1e0
000DF1F0 60be42f9 ldr      x0, [x19, #0x578]
000DF1F4 88539bd2 mov      x8, #0xda9c
000DF1F8 2869b1f2 movk     x8, #0x8b49, lsl #16
000DF1FC e886cef2 movk     x8, #0x7437, lsl #32
000DF200 e8a7eef2 movk     x8, #0x753f, lsl #48
000DF204 a92900f0 adrp     x9, #0x616000
000DF208 29511f91 add      x9, x9, #0x7d4
000DF20C e82700a9 stp      x8, x9, [sp]
000DF210 08018052 mov      w8, #8
000DF214 e1030091 mov      x1, sp
000DF218 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DF21C d9bdfe97 bl       #0x8e980
000DF220 f30300aa mov      x19, x0
000DF224 e00f40f9 ldr      x0, [sp, #0x18]
000DF228 800000b4 cbz      x0, #0xdf238
000DF22C 088c44f8 ldr      x8, [x0, #0x48]!
000DF230 080d40f9 ldr      x8, [x8, #0x18]
000DF234 00013fd6 blr      x8
000DF238 a9a25929 ldp      w9, w8, [x21, #0xcc]
000DF23C bfc20cf8 stur     xzr, [x21, #0xcc]
000DF240 3f050071 cmp      w9, #1
000DF244 61000054 b.ne     #0xdf250
000DF248 c1008052 mov      w1, #6
000DF24C 06000014 b        #0xdf264
000DF250 a93240f9 ldr      x9, [x21, #0x60]
000DF254 290140b9 ldr      w9, [x9]
000DF258 3f090071 cmp      w9, #2
000DF25C c1010054 b.ne     #0xdf294
000DF260 21018052 mov      w1, #9
000DF264 a19e00b9 str      w1, [x21, #0x9c]
000DF268 e00313aa mov      x0, x19
000DF26C 3691ff97 bl       #0xc3744
000DF270 e00313aa mov      x0, x19
000DF274 21008052 mov      w1, #1
000DF278 bf9e00b9 str      wzr, [x21, #0x9c]
000DF27C 3b93ff97 bl       #0xc3f68
000DF280 f44f44a9 ldp      x20, x19, [sp, #0x40]
000DF284 f51b40f9 ldr      x21, [sp, #0x30]
000DF288 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DF28C ff430191 add      sp, sp, #0x50
000DF290 c0035fd6 ret      
000DF294 08050051 sub      w8, w8, #1
000DF298 1f150071 cmp      w8, #5
000DF29C e8010054 b.hi     #0xdf2d8
000DF2A0 292a00d0 adrp     x9, #0x625000
000DF2A4 29913f91 add      x9, x9, #0xfe4
000DF2A8 8a000010 adr      x10, #0xdf2b8
000DF2AC 2b696838 ldrb     w11, [x9, x8]
000DF2B0 4a090b8b add      x10, x10, x11, lsl #2
000DF2B4 40011fd6 br       x10
000DF2B8 41008052 mov      w1, #2
000DF2BC eaffff17 b        #0xdf264
000DF2C0 a1008052 mov      w1, #5
000DF2C4 e8ffff17 b        #0xdf264
000DF2C8 61008052 mov      w1, #3
000DF2CC e6ffff17 b        #0xdf264
000DF2D0 81008052 mov      w1, #4
000DF2D4 e4ffff17 b        #0xdf264
000DF2D8 a19e40b9 ldr      w1, [x21, #0x9c]
000DF2DC e3ffff17 b        #0xdf268
000DF2E0 01018052 mov      w1, #8
000DF2E4 e0ffff17 b        #0xdf264
~~~
### 0xdf2f0 (636 slots)
~~~asm
000DF2F0 ff0302d1 sub      sp, sp, #0x80
000DF2F4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DF2F8 fb1b00f9 str      x27, [sp, #0x30]
000DF2FC fa6704a9 stp      x26, x25, [sp, #0x40]
000DF300 f85f05a9 stp      x24, x23, [sp, #0x50]
000DF304 f65706a9 stp      x22, x21, [sp, #0x60]
000DF308 f44f07a9 stp      x20, x19, [sp, #0x70]
000DF30C fd830091 add      x29, sp, #0x20
000DF310 083440f9 ldr      x8, [x0, #0x68]
000DF314 f30300aa mov      x19, x0
000DF318 480200b4 cbz      x8, #0xdf360
000DF31C 143140f9 ldr      x20, [x8, #0x60]
000DF320 140200b4 cbz      x20, #0xdf360
000DF324 880240f9 ldr      x8, [x20]
000DF328 e00314aa mov      x0, x20
000DF32C 080140f9 ldr      x8, [x8]
000DF330 00013fd6 blr      x8
000DF334 f50300aa mov      x21, x0
000DF338 dab8fe97 bl       #0x8d6a0
000DF33C 1f0015eb cmp      x0, x21
000DF340 c0000054 b.eq     #0xdf358
000DF344 b50240f9 ldr      x21, [x21]
000DF348 bf0200eb cmp      x21, x0
000DF34C a41a40fa ccmp     x21, #0, #4, ne
000DF350 a1ffff54 b.ne     #0xdf344
000DF354 750000b4 cbz      x21, #0xdf360
000DF358 994201d1 sub      x25, x20, #0x50
000DF35C 02000014 b        #0xdf364
000DF360 f9031faa mov      x25, xzr
000DF364 683240f9 ldr      x8, [x19, #0x60]
000DF368 143140f9 ldr      x20, [x8, #0x60]
000DF36C 880240f9 ldr      x8, [x20]
000DF370 e00314aa mov      x0, x20
000DF374 080140f9 ldr      x8, [x8]
000DF378 00013fd6 blr      x8
000DF37C f50300aa mov      x21, x0
000DF380 771bfd97 bl       #0x2615c
000DF384 1f0015eb cmp      x0, x21
000DF388 c0000054 b.eq     #0xdf3a0
000DF38C 1f2003d5 nop      
000DF390 b50240f9 ldr      x21, [x21]
000DF394 bf0200eb cmp      x21, x0
000DF398 a41a40fa ccmp     x21, #0, #4, ne
000DF39C a1ffff54 b.ne     #0xdf390
000DF3A0 80be42f9 ldr      x0, [x20, #0x578]
000DF3A4 88539bd2 mov      x8, #0xda9c
000DF3A8 2869b1f2 movk     x8, #0x8b49, lsl #16
000DF3AC e886cef2 movk     x8, #0x7437, lsl #32
000DF3B0 e8a7eef2 movk     x8, #0x753f, lsl #48
000DF3B4 a92900f0 adrp     x9, #0x616000
000DF3B8 29511f91 add      x9, x9, #0x7d4
000DF3BC e82700a9 stp      x8, x9, [sp]
000DF3C0 08018052 mov      w8, #8
000DF3C4 e1030091 mov      x1, sp
000DF3C8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DF3CC 6dbdfe97 bl       #0x8e980
000DF3D0 f40300aa mov      x20, x0
000DF3D4 e00f40f9 ldr      x0, [sp, #0x18]
000DF3D8 800000b4 cbz      x0, #0xdf3e8
000DF3DC 088c44f8 ldr      x8, [x0, #0x48]!
000DF3E0 080d40f9 ldr      x8, [x8, #0x18]
000DF3E4 00013fd6 blr      x8
000DF3E8 884e46b9 ldr      w8, [x20, #0x64c]
000DF3EC e0031f2a mov      w0, wzr
000DF3F0 9f4e06b9 str      wzr, [x20, #0x64c]
000DF3F4 08050051 sub      w8, w8, #1
000DF3F8 1f650071 cmp      w8, #0x19
000DF3FC a8300054 b.hi     #0xdfa10
000DF400 292a00d0 adrp     x9, #0x625000
000DF404 29a93f91 add      x9, x9, #0xfea
000DF408 8a000010 adr      x10, #0xdf418
000DF40C 2b796878 ldrh     w11, [x9, x8, lsl #1]
000DF410 4a090b8b add      x10, x10, x11, lsl #2
000DF414 40011fd6 br       x10
000DF418 48018052 mov      w8, #0xa
000DF41C 36010014 b        #0xdf8f4
000DF420 88018052 mov      w8, #0xc
000DF424 34010014 b        #0xdf8f4
000DF428 08018052 mov      w8, #8
000DF42C 32010014 b        #0xdf8f4
000DF430 a8018052 mov      w8, #0xd
000DF434 30010014 b        #0xdf8f4
000DF438 683640f9 ldr      x8, [x19, #0x68]
000DF43C 133140f9 ldr      x19, [x8, #0x60]
000DF440 680240f9 ldr      x8, [x19]
000DF444 e00313aa mov      x0, x19
000DF448 080140f9 ldr      x8, [x8]
000DF44C 00013fd6 blr      x8
000DF450 f40300aa mov      x20, x0
000DF454 93b8fe97 bl       #0x8d6a0
000DF458 1f0014eb cmp      x0, x20
000DF45C a0000054 b.eq     #0xdf470
000DF460 940240f9 ldr      x20, [x20]
000DF464 9f0200eb cmp      x20, x0
000DF468 841a40fa ccmp     x20, #0, #4, ne
000DF46C a1ffff54 b.ne     #0xdf460
000DF470 680080d2 mov      x8, #3
000DF474 20008052 mov      w0, #1
000DF478 8800c0f2 movk     x8, #4, lsl #32
000DF47C 68c206f8 stur     x8, [x19, #0x6c]
000DF480 68018052 mov      w8, #0xb
000DF484 28c700b9 str      w8, [x25, #0xc4]
000DF488 c8018052 mov      w8, #0xe
000DF48C 28a303b9 str      w8, [x25, #0x3a0]
000DF490 60010014 b        #0xdfa10
000DF494 683640f9 ldr      x8, [x19, #0x68]
000DF498 133140f9 ldr      x19, [x8, #0x60]
000DF49C 680240f9 ldr      x8, [x19]
000DF4A0 e00313aa mov      x0, x19
000DF4A4 080140f9 ldr      x8, [x8]
000DF4A8 00013fd6 blr      x8
000DF4AC f40300aa mov      x20, x0
000DF4B0 7cb8fe97 bl       #0x8d6a0
000DF4B4 1f0014eb cmp      x0, x20
000DF4B8 c0000054 b.eq     #0xdf4d0
000DF4BC 1f2003d5 nop      
000DF4C0 940240f9 ldr      x20, [x20]
000DF4C4 9f0200eb cmp      x20, x0
000DF4C8 841a40fa ccmp     x20, #0, #4, ne
000DF4CC a1ffff54 b.ne     #0xdf4c0
000DF4D0 680080d2 mov      x8, #3
000DF4D4 8800c0f2 movk     x8, #4, lsl #32
000DF4D8 68c206f8 stur     x8, [x19, #0x6c]
000DF4DC 68028052 mov      w8, #0x13
000DF4E0 28a303b9 str      w8, [x25, #0x3a0]
000DF4E4 c8008052 mov      w8, #6
000DF4E8 48010014 b        #0xdfa08
000DF4EC 683640f9 ldr      x8, [x19, #0x68]
000DF4F0 133140f9 ldr      x19, [x8, #0x60]
000DF4F4 680240f9 ldr      x8, [x19]
000DF4F8 e00313aa mov      x0, x19
000DF4FC 080140f9 ldr      x8, [x8]
000DF500 00013fd6 blr      x8
000DF504 f40300aa mov      x20, x0
000DF508 66b8fe97 bl       #0x8d6a0
000DF50C 1f0014eb cmp      x0, x20
000DF510 a0000054 b.eq     #0xdf524
000DF514 940240f9 ldr      x20, [x20]
000DF518 9f0200eb cmp      x20, x0
000DF51C 841a40fa ccmp     x20, #0, #4, ne
000DF520 a1ffff54 b.ne     #0xdf514
000DF524 680080d2 mov      x8, #3
000DF528 8800c0f2 movk     x8, #4, lsl #32
000DF52C 68c206f8 stur     x8, [x19, #0x6c]
000DF530 68028052 mov      w8, #0x13
000DF534 28a303b9 str      w8, [x25, #0x3a0]
000DF538 e8008052 mov      w8, #7
000DF53C 33010014 b        #0xdfa08
000DF540 e8028052 mov      w8, #0x17
000DF544 ec000014 b        #0xdf8f4
000DF548 683640f9 ldr      x8, [x19, #0x68]
000DF54C 133140f9 ldr      x19, [x8, #0x60]
000DF550 680240f9 ldr      x8, [x19]
000DF554 e00313aa mov      x0, x19
000DF558 080140f9 ldr      x8, [x8]
000DF55C 00013fd6 blr      x8
000DF560 f40300aa mov      x20, x0
000DF564 4fb8fe97 bl       #0x8d6a0
000DF568 1f0014eb cmp      x0, x20
000DF56C a0000054 b.eq     #0xdf580
000DF570 940240f9 ldr      x20, [x20]
000DF574 9f0200eb cmp      x20, x0
000DF578 841a40fa ccmp     x20, #0, #4, ne
000DF57C a1ffff54 b.ne     #0xdf570
000DF580 680080d2 mov      x8, #3
000DF584 8800c0f2 movk     x8, #4, lsl #32
000DF588 68c206f8 stur     x8, [x19, #0x6c]
000DF58C 68028052 mov      w8, #0x13
000DF590 28a303b9 str      w8, [x25, #0x3a0]
000DF594 08018052 mov      w8, #8
000DF598 1c010014 b        #0xdfa08
000DF59C 683640f9 ldr      x8, [x19, #0x68]
000DF5A0 133140f9 ldr      x19, [x8, #0x60]
000DF5A4 680240f9 ldr      x8, [x19]
000DF5A8 e00313aa mov      x0, x19
000DF5AC 080140f9 ldr      x8, [x8]
000DF5B0 00013fd6 blr      x8
000DF5B4 f40300aa mov      x20, x0
000DF5B8 3ab8fe97 bl       #0x8d6a0
000DF5BC 1f0014eb cmp      x0, x20
000DF5C0 a0000054 b.eq     #0xdf5d4
000DF5C4 940240f9 ldr      x20, [x20]
000DF5C8 9f0200eb cmp      x20, x0
000DF5CC 841a40fa ccmp     x20, #0, #4, ne
000DF5D0 a1ffff54 b.ne     #0xdf5c4
000DF5D4 680080d2 mov      x8, #3
000DF5D8 69028052 mov      w9, #0x13
000DF5DC 8800c0f2 movk     x8, #4, lsl #32
000DF5E0 68c206f8 stur     x8, [x19, #0x6c]
000DF5E4 68008052 mov      w8, #3
000DF5E8 29a303b9 str      w9, [x25, #0x3a0]
000DF5EC 28c700b9 str      w8, [x25, #0xc4]
000DF5F0 68018052 mov      w8, #0xb
000DF5F4 05010014 b        #0xdfa08
000DF5F8 683640f9 ldr      x8, [x19, #0x68]
000DF5FC 133140f9 ldr      x19, [x8, #0x60]
000DF600 680240f9 ldr      x8, [x19]
000DF604 e00313aa mov      x0, x19
000DF608 080140f9 ldr      x8, [x8]
000DF60C 00013fd6 blr      x8
000DF610 f40300aa mov      x20, x0
000DF614 23b8fe97 bl       #0x8d6a0
000DF618 1f0014eb cmp      x0, x20
000DF61C a0000054 b.eq     #0xdf630
000DF620 940240f9 ldr      x20, [x20]
000DF624 9f0200eb cmp      x20, x0
000DF628 841a40fa ccmp     x20, #0, #4, ne
000DF62C a1ffff54 b.ne     #0xdf620
000DF630 680080d2 mov      x8, #3
000DF634 69028052 mov      w9, #0x13
000DF638 8800c0f2 movk     x8, #4, lsl #32
000DF63C 68c206f8 stur     x8, [x19, #0x6c]
000DF640 88018052 mov      w8, #0xc
000DF644 29a303b9 str      w9, [x25, #0x3a0]
000DF648 28c700b9 str      w8, [x25, #0xc4]
000DF64C 48018052 mov      w8, #0xa
000DF650 ee000014 b        #0xdfa08
000DF654 683640f9 ldr      x8, [x19, #0x68]
000DF658 133140f9 ldr      x19, [x8, #0x60]
000DF65C 680240f9 ldr      x8, [x19]
000DF660 e00313aa mov      x0, x19
000DF664 080140f9 ldr      x8, [x8]
000DF668 00013fd6 blr      x8
000DF66C f40300aa mov      x20, x0
000DF670 0cb8fe97 bl       #0x8d6a0
000DF674 1f0014eb cmp      x0, x20
000DF678 c0000054 b.eq     #0xdf690
000DF67C 1f2003d5 nop      
000DF680 940240f9 ldr      x20, [x20]
000DF684 9f0200eb cmp      x20, x0
000DF688 841a40fa ccmp     x20, #0, #4, ne
000DF68C a1ffff54 b.ne     #0xdf680
000DF690 680080d2 mov      x8, #3
000DF694 8800c0f2 movk     x8, #4, lsl #32
000DF698 68c206f8 stur     x8, [x19, #0x6c]
000DF69C 68028052 mov      w8, #0x13
000DF6A0 28a303b9 str      w8, [x25, #0x3a0]
000DF6A4 88018052 mov      w8, #0xc
000DF6A8 d8000014 b        #0xdfa08
000DF6AC 683640f9 ldr      x8, [x19, #0x68]
000DF6B0 133140f9 ldr      x19, [x8, #0x60]
000DF6B4 680240f9 ldr      x8, [x19]
000DF6B8 e00313aa mov      x0, x19
000DF6BC 080140f9 ldr      x8, [x8]
000DF6C0 00013fd6 blr      x8
000DF6C4 f40300aa mov      x20, x0
000DF6C8 f6b7fe97 bl       #0x8d6a0
000DF6CC 1f0014eb cmp      x0, x20
000DF6D0 a0000054 b.eq     #0xdf6e4
000DF6D4 940240f9 ldr      x20, [x20]
000DF6D8 9f0200eb cmp      x20, x0
000DF6DC 841a40fa ccmp     x20, #0, #4, ne
000DF6E0 a1ffff54 b.ne     #0xdf6d4
000DF6E4 680080d2 mov      x8, #3
000DF6E8 69028052 mov      w9, #0x13
000DF6EC 8800c0f2 movk     x8, #4, lsl #32
000DF6F0 68c206f8 stur     x8, [x19, #0x6c]
000DF6F4 68018052 mov      w8, #0xb
000DF6F8 29a303b9 str      w9, [x25, #0x3a0]
000DF6FC 28c700b9 str      w8, [x25, #0xc4]
000DF700 68008052 mov      w8, #3
000DF704 c1000014 b        #0xdfa08
000DF708 683640f9 ldr      x8, [x19, #0x68]
000DF70C 133140f9 ldr      x19, [x8, #0x60]
000DF710 680240f9 ldr      x8, [x19]
000DF714 e00313aa mov      x0, x19
000DF718 080140f9 ldr      x8, [x8]
000DF71C 00013fd6 blr      x8
000DF720 f40300aa mov      x20, x0
000DF724 dfb7fe97 bl       #0x8d6a0
000DF728 1f0014eb cmp      x0, x20
000DF72C a0000054 b.eq     #0xdf740
000DF730 940240f9 ldr      x20, [x20]
000DF734 9f0200eb cmp      x20, x0
000DF738 841a40fa ccmp     x20, #0, #4, ne
000DF73C a1ffff54 b.ne     #0xdf730
000DF740 680080d2 mov      x8, #3
000DF744 8800c0f2 movk     x8, #4, lsl #32
000DF748 68c206f8 stur     x8, [x19, #0x6c]
000DF74C 68028052 mov      w8, #0x13
000DF750 28a303b9 str      w8, [x25, #0x3a0]
000DF754 a8008052 mov      w8, #5
000DF758 ac000014 b        #0xdfa08
000DF75C a8028052 mov      w8, #0x15
000DF760 28a303b9 str      w8, [x25, #0x3a0]
000DF764 283340f9 ldr      x8, [x25, #0x60]
000DF768 080140b9 ldr      w8, [x8]
000DF76C 1f090071 cmp      w8, #2
000DF770 811a0054 b.ne     #0xdfac0
000DF774 c8028052 mov      w8, #0x16
000DF778 3f830639 strb     wzr, [x25, #0x1a0]
000DF77C 20008052 mov      w0, #1
000DF780 28a303b9 str      w8, [x25, #0x3a0]
000DF784 a8008052 mov      w8, #5
000DF788 289f01b9 str      w8, [x25, #0x19c]
000DF78C a1000014 b        #0xdfa10
000DF790 683640f9 ldr      x8, [x19, #0x68]
000DF794 143140f9 ldr      x20, [x8, #0x60]
000DF798 880240f9 ldr      x8, [x20]
000DF79C e00314aa mov      x0, x20
000DF7A0 080140f9 ldr      x8, [x8]
000DF7A4 00013fd6 blr      x8
000DF7A8 f50300aa mov      x21, x0
000DF7AC bdb7fe97 bl       #0x8d6a0
000DF7B0 1f0015eb cmp      x0, x21
000DF7B4 e0000054 b.eq     #0xdf7d0
000DF7B8 1f2003d5 nop      
000DF7BC 1f2003d5 nop      
000DF7C0 b50240f9 ldr      x21, [x21]
000DF7C4 bf0200eb cmp      x21, x0
000DF7C8 a41a40fa ccmp     x21, #0, #4, ne
000DF7CC a1ffff54 b.ne     #0xdf7c0
000DF7D0 680080d2 mov      x8, #3
000DF7D4 bac884d2 mov      x26, #0x2645
000DF7D8 5a84b0f2 movk     x26, #0x8422, lsl #16
000DF7DC 8800c0f2 movk     x8, #4, lsl #32
000DF7E0 88c206f8 stur     x8, [x20, #0x6c]
000DF7E4 68028052 mov      w8, #0x13
000DF7E8 9a9cd3f2 movk     x26, #0x9ce4, lsl #32
000DF7EC 5a7ef9f2 movk     x26, #0xcbf2, lsl #48
000DF7F0 3f1f01b9 str      wzr, [x25, #0x11c]
000DF7F4 28a303b9 str      w8, [x25, #0x3a0]
000DF7F8 28028052 mov      w8, #0x11
000DF7FC 280b01b9 str      w8, [x25, #0x108]
000DF800 e00313aa mov      x0, x19
000DF804 3a6b12a9 stp      x26, x26, [x25, #0x120]
000DF808 3a6b13a9 stp      x26, x26, [x25, #0x130]
000DF80C 3a6b14a9 stp      x26, x26, [x25, #0x140]
000DF810 3a6b15a9 stp      x26, x26, [x25, #0x150]
000DF814 3a6b16a9 stp      x26, x26, [x25, #0x160]
000DF818 32010094 bl       #0xdfce0
000DF81C f503002a mov      w21, w0
000DF820 e00313aa mov      x0, x19
000DF824 43030094 bl       #0xe0530
000DF828 f403002a mov      w20, w0
000DF82C e1030091 mov      x1, sp
000DF830 ff0300b9 str      wzr, [sp]
000DF834 e00313aa mov      x0, x19
000DF838 66050094 bl       #0xe0dd0
000DF83C 683640f9 ldr      x8, [x19, #0x68]
000DF840 f603002a mov      w22, w0
000DF844 173140f9 ldr      x23, [x8, #0x60]
000DF848 e80240f9 ldr      x8, [x23]
000DF84C e00317aa mov      x0, x23
000DF850 080140f9 ldr      x8, [x8]
000DF854 00013fd6 blr      x8
000DF858 f80300aa mov      x24, x0
000DF85C 91b7fe97 bl       #0x8d6a0
000DF860 1f0018eb cmp      x0, x24
000DF864 e0000054 b.eq     #0xdf880
000DF868 1f2003d5 nop      
000DF86C 1f2003d5 nop      
000DF870 180340f9 ldr      x24, [x24]
000DF874 1f0300eb cmp      x24, x0
000DF878 041b40fa ccmp     x24, #0, #4, ne
000DF87C a1ffff54 b.ne     #0xdf870
000DF880 f81240f9 ldr      x24, [x23, #0x20]
000DF884 f72241f9 ldr      x23, [x23, #0x240]
000DF888 b70000b4 cbz      x23, #0xdf89c
000DF88C e00317aa mov      x0, x23
000DF890 088c44f8 ldr      x8, [x0, #0x48]!
000DF894 080940f9 ldr      x8, [x8, #0x10]
000DF898 00013fd6 blr      x8
000DF89C e00318aa mov      x0, x24
000DF8A0 70dafe97 bl       #0x96260
000DF8A4 600c00b4 cbz      x0, #0xdfa30
000DF8A8 080c40b9 ldr      w8, [x0, #0xc]
000DF8AC 1f210071 cmp      w8, #8
000DF8B0 010c0054 b.ne     #0xdfa30
000DF8B4 08834139 ldrb     w8, [x24, #0x60]
000DF8B8 1f010071 cmp      w8, #0
000DF8BC fb079f1a cset     w27, ne
000DF8C0 5d000014 b        #0xdfa34
000DF8C4 88008052 mov      w8, #4
000DF8C8 28a701b9 str      w8, [x25, #0x1a4]
000DF8CC 0a000014 b        #0xdf8f4
000DF8D0 88008052 mov      w8, #4
000DF8D4 20008052 mov      w0, #1
000DF8D8 28a303b9 str      w8, [x25, #0x3a0]
000DF8DC 283740f9 ldr      x8, [x25, #0x68]
000DF8E0 20a701b9 str      w0, [x25, #0x1a4]
000DF8E4 1f0100b9 str      wzr, [x8]
000DF8E8 4a000014 b        #0xdfa10
000DF8EC 88008052 mov      w8, #4
000DF8F0 3fa701b9 str      wzr, [x25, #0x1a4]
000DF8F4 28a303b9 str      w8, [x25, #0x3a0]
000DF8F8 20008052 mov      w0, #1
000DF8FC 45000014 b        #0xdfa10
000DF900 683640f9 ldr      x8, [x19, #0x68]
000DF904 133140f9 ldr      x19, [x8, #0x60]
000DF908 680240f9 ldr      x8, [x19]
000DF90C e00313aa mov      x0, x19
000DF910 080140f9 ldr      x8, [x8]
000DF914 00013fd6 blr      x8
000DF918 f40300aa mov      x20, x0
000DF91C 61b7fe97 bl       #0x8d6a0
000DF920 1f0014eb cmp      x0, x20
000DF924 e0000054 b.eq     #0xdf940
000DF928 1f2003d5 nop      
000DF92C 1f2003d5 nop      
000DF930 940240f9 ldr      x20, [x20]
000DF934 9f0200eb cmp      x20, x0
000DF938 841a40fa ccmp     x20, #0, #4, ne
000DF93C a1ffff54 b.ne     #0xdf930
000DF940 680080d2 mov      x8, #3
000DF944 8800c0f2 movk     x8, #4, lsl #32
000DF948 68c206f8 stur     x8, [x19, #0x6c]
000DF94C 68028052 mov      w8, #0x13
000DF950 28a303b9 str      w8, [x25, #0x3a0]
000DF954 88028052 mov      w8, #0x14
000DF958 2c000014 b        #0xdfa08
000DF95C 683640f9 ldr      x8, [x19, #0x68]
000DF960 133140f9 ldr      x19, [x8, #0x60]
000DF964 680240f9 ldr      x8, [x19]
000DF968 e00313aa mov      x0, x19
000DF96C 080140f9 ldr      x8, [x8]
000DF970 00013fd6 blr      x8
000DF974 f40300aa mov      x20, x0
000DF978 4ab7fe97 bl       #0x8d6a0
000DF97C 1f0014eb cmp      x0, x20
000DF980 a0000054 b.eq     #0xdf994
000DF984 940240f9 ldr      x20, [x20]
000DF988 9f0200eb cmp      x20, x0
000DF98C 841a40fa ccmp     x20, #0, #4, ne
000DF990 a1ffff54 b.ne     #0xdf984
000DF994 680080d2 mov      x8, #3
000DF998 8800c0f2 movk     x8, #4, lsl #32
000DF99C 68c206f8 stur     x8, [x19, #0x6c]
000DF9A0 68028052 mov      w8, #0x13
000DF9A4 28a303b9 str      w8, [x25, #0x3a0]
000DF9A8 e8028052 mov      w8, #0x17
000DF9AC 17000014 b        #0xdfa08
000DF9B0 683640f9 ldr      x8, [x19, #0x68]
000DF9B4 133140f9 ldr      x19, [x8, #0x60]
000DF9B8 680240f9 ldr      x8, [x19]
000DF9BC e00313aa mov      x0, x19
000DF9C0 080140f9 ldr      x8, [x8]
000DF9C4 00013fd6 blr      x8
000DF9C8 f40300aa mov      x20, x0
000DF9CC 35b7fe97 bl       #0x8d6a0
000DF9D0 1f0014eb cmp      x0, x20
000DF9D4 e0000054 b.eq     #0xdf9f0
000DF9D8 1f2003d5 nop      
000DF9DC 1f2003d5 nop      
000DF9E0 940240f9 ldr      x20, [x20]
000DF9E4 9f0200eb cmp      x20, x0
000DF9E8 841a40fa ccmp     x20, #0, #4, ne
000DF9EC a1ffff54 b.ne     #0xdf9e0
000DF9F0 680080d2 mov      x8, #3
000DF9F4 8800c0f2 movk     x8, #4, lsl #32
000DF9F8 68c206f8 stur     x8, [x19, #0x6c]
000DF9FC 68028052 mov      w8, #0x13
000DFA00 28a303b9 str      w8, [x25, #0x3a0]
000DFA04 48038052 mov      w8, #0x1a
000DFA08 20008052 mov      w0, #1
000DFA0C 280b01b9 str      w8, [x25, #0x108]
000DFA10 f44f47a9 ldp      x20, x19, [sp, #0x70]
000DFA14 fb1b40f9 ldr      x27, [sp, #0x30]
000DFA18 f65746a9 ldp      x22, x21, [sp, #0x60]
000DFA1C f85f45a9 ldp      x24, x23, [sp, #0x50]
000DFA20 fa6744a9 ldp      x26, x25, [sp, #0x40]
000DFA24 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DFA28 ff030291 add      sp, sp, #0x80
000DFA2C c0035fd6 ret      
000DFA30 fb031f2a mov      w27, wzr
000DFA34 b70000b4 cbz      x23, #0xdfa48
000DFA38 e88e44f8 ldr      x8, [x23, #0x48]!
000DFA3C e00317aa mov      x0, x23
000DFA40 080d40f9 ldr      x8, [x8, #0x18]
000DFA44 00013fd6 blr      x8
000DFA48 683640f9 ldr      x8, [x19, #0x68]
000DFA4C 173140f9 ldr      x23, [x8, #0x60]
000DFA50 e80240f9 ldr      x8, [x23]
000DFA54 e00317aa mov      x0, x23
000DFA58 080140f9 ldr      x8, [x8]
000DFA5C 00013fd6 blr      x8
000DFA60 f80300aa mov      x24, x0
000DFA64 0fb7fe97 bl       #0x8d6a0
000DFA68 1f0018eb cmp      x0, x24
000DFA6C a0000054 b.eq     #0xdfa80
000DFA70 180340f9 ldr      x24, [x24]
000DFA74 1f0300eb cmp      x24, x0
000DFA78 041b40fa ccmp     x24, #0, #4, ne
000DFA7C a1ffff54 b.ne     #0xdfa70
000DFA80 f81240f9 ldr      x24, [x23, #0x20]
000DFA84 f72241f9 ldr      x23, [x23, #0x240]
000DFA88 b70000b4 cbz      x23, #0xdfa9c
000DFA8C e00317aa mov      x0, x23
000DFA90 088c44f8 ldr      x8, [x0, #0x48]!
000DFA94 080940f9 ldr      x8, [x8, #0x10]
000DFA98 00013fd6 blr      x8
000DFA9C e00318aa mov      x0, x24
000DFAA0 f0d9fe97 bl       #0x96260
000DFAA4 a00000b4 cbz      x0, #0xdfab8
000DFAA8 080c40b9 ldr      w8, [x0, #0xc]
000DFAAC 082d0051 sub      w8, w8, #0xb
000DFAB0 1f090031 cmn      w8, #2
000DFAB4 42010054 b.hs     #0xdfadc
000DFAB8 f8031f2a mov      w24, wzr
000DFABC 0b000014 b        #0xdfae8
000DFAC0 299740b9 ldr      w9, [x25, #0x94]
000DFAC4 890f0034 cbz      w9, #0xdfcb4
000DFAC8 1f050071 cmp      w8, #1
000DFACC 01100054 b.ne     #0xdfccc
000DFAD0 68008052 mov      w8, #3
000DFAD4 289f01b9 str      w8, [x25, #0x19c]
000DFAD8 88ffff17 b        #0xdf8f8
000DFADC 08874139 ldrb     w8, [x24, #0x61]
000DFAE0 1f010071 cmp      w8, #0
000DFAE4 f8079f1a cset     w24, ne
000DFAE8 b70000b4 cbz      x23, #0xdfafc
000DFAEC e88e44f8 ldr      x8, [x23, #0x48]!
000DFAF0 e00317aa mov      x0, x23
000DFAF4 080d40f9 ldr      x8, [x8, #0x18]
000DFAF8 00013fd6 blr      x8
000DFAFC 683640f9 ldr      x8, [x19, #0x68]
000DFB00 133140f9 ldr      x19, [x8, #0x60]
000DFB04 680240f9 ldr      x8, [x19]
000DFB08 e00313aa mov      x0, x19
000DFB0C 080140f9 ldr      x8, [x8]
000DFB10 00013fd6 blr      x8
000DFB14 f70300aa mov      x23, x0
000DFB18 e2b6fe97 bl       #0x8d6a0
000DFB1C 1f0017eb cmp      x0, x23
000DFB20 a0000054 b.eq     #0xdfb34
000DFB24 f70240f9 ldr      x23, [x23]
000DFB28 ff0200eb cmp      x23, x0
000DFB2C e41a40fa ccmp     x23, #0, #4, ne
000DFB30 a1ffff54 b.ne     #0xdfb24
000DFB34 771240f9 ldr      x23, [x19, #0x20]
000DFB38 732241f9 ldr      x19, [x19, #0x240]
000DFB3C b30000b4 cbz      x19, #0xdfb50
000DFB40 e00313aa mov      x0, x19
000DFB44 088c44f8 ldr      x8, [x0, #0x48]!
000DFB48 080940f9 ldr      x8, [x8, #0x10]
000DFB4C 00013fd6 blr      x8
000DFB50 e00317aa mov      x0, x23
000DFB54 c3d9fe97 bl       #0x96260
000DFB58 400100b4 cbz      x0, #0xdfb80
000DFB5C 080c40b9 ldr      w8, [x0, #0xc]
000DFB60 09110051 sub      w9, w8, #4
000DFB64 3f110071 cmp      w9, #4
000DFB68 04294c7a ccmp     w8, #0xc, #4, hs
000DFB6C a1000054 b.ne     #0xdfb80
000DFB70 e88a4139 ldrb     w8, [x23, #0x62]
000DFB74 1f010071 cmp      w8, #0
000DFB78 f7079f1a cset     w23, ne
000DFB7C 02000014 b        #0xdfb84
000DFB80 f7031f2a mov      w23, wzr
000DFB84 b30000b4 cbz      x19, #0xdfb98
000DFB88 688e44f8 ldr      x8, [x19, #0x48]!
000DFB8C e00313aa mov      x0, x19
000DFB90 080d40f9 ldr      x8, [x8, #0x18]
000DFB94 00013fd6 blr      x8
000DFB98 76030036 tbz      w22, #0, #0xdfc04
000DFB9C e80340b9 ldr      w8, [sp]
000DFBA0 1f310071 cmp      w8, #0xc
000DFBA4 88a58fd2 mov      x8, #0x7d2c
000DFBA8 2856acf2 movk     x8, #0x62b1, lsl #16
000DFBAC 88bfdaf2 movk     x8, #0xd5fc, lsl #32
000DFBB0 28b5f1f2 movk     x8, #0x8da9, lsl #48
000DFBB4 08019a9a csel     x8, x8, x26, eq
000DFBB8 291f41b9 ldr      w9, [x25, #0x11c]
000DFBBC 2a050011 add      w10, w9, #1
000DFBC0 290f098b add      x9, x25, x9, lsl #3
000DFBC4 2a1f01b9 str      w10, [x25, #0x11c]
000DFBC8 289100f9 str      x8, [x9, #0x120]
000DFBCC 74030037 tbnz     w20, #0, #0xdfc38
000DFBD0 9b040034 cbz      w27, #0xdfc60
000DFBD4 281f41b9 ldr      w8, [x25, #0x11c]
000DFBD8 09050011 add      w9, w8, #1
000DFBDC 280f088b add      x8, x25, x8, lsl #3
000DFBE0 291f01b9 str      w9, [x25, #0x11c]
000DFBE4 29f994d2 mov      x9, #0xa7c9
000DFBE8 09ababf2 movk     x9, #0x5d58, lsl #16
000DFBEC 89bfd5f2 movk     x9, #0xadfc, lsl #32
000DFBF0 698ff0f2 movk     x9, #0x847b, lsl #48
000DFBF4 099100f9 str      x9, [x8, #0x120]
000DFBF8 78030035 cbnz     w24, #0xdfc64
000DFBFC f7e7ff34 cbz      w23, #0xdf8f8
000DFC00 23000014 b        #0xdfc8c
000DFC04 95010036 tbz      w21, #0, #0xdfc34
000DFC08 a8c094d2 mov      x8, #0xa605
000DFC0C 08afabf2 movk     x8, #0x5d78, lsl #16
000DFC10 885fc6f2 movk     x8, #0x32fc, lsl #32
000DFC14 2894f0f2 movk     x8, #0x84a1, lsl #48
000DFC18 291f41b9 ldr      w9, [x25, #0x11c]
000DFC1C 2a050011 add      w10, w9, #1
000DFC20 290f098b add      x9, x25, x9, lsl #3
000DFC24 2a1f01b9 str      w10, [x25, #0x11c]
000DFC28 289100f9 str      x8, [x9, #0x120]
000DFC2C 34fd0736 tbz      w20, #0, #0xdfbd0
000DFC30 02000014 b        #0xdfc38
000DFC34 f4fc0736 tbz      w20, #0, #0xdfbd0
000DFC38 281f41b9 ldr      w8, [x25, #0x11c]
000DFC3C 09050011 add      w9, w8, #1
000DFC40 280f088b add      x8, x25, x8, lsl #3
000DFC44 291f01b9 str      w9, [x25, #0x11c]
000DFC48 499c95d2 mov      x9, #0xace2
000DFC4C 09ababf2 movk     x9, #0x5d58, lsl #16
000DFC50 891fd6f2 movk     x9, #0xb0fc, lsl #32
000DFC54 698ff0f2 movk     x9, #0x847b, lsl #48
000DFC58 099100f9 str      x9, [x8, #0x120]
000DFC5C dbfbff35 cbnz     w27, #0xdfbd4
000DFC60 f8fcff34 cbz      w24, #0xdfbfc
000DFC64 281f41b9 ldr      w8, [x25, #0x11c]
000DFC68 09050011 add      w9, w8, #1
000DFC6C 280f088b add      x8, x25, x8, lsl #3
000DFC70 291f01b9 str      w9, [x25, #0x11c]
000DFC74 a9d692d2 mov      x9, #0x96b5
000DFC78 8956acf2 movk     x9, #0x62b4, lsl #16
000DFC7C 897fcbf2 movk     x9, #0x5bfc, lsl #32
000DFC80 a9b5f1f2 movk     x9, #0x8dad, lsl #48
000DFC84 099100f9 str      x9, [x8, #0x120]
000DFC88 97e3ff34 cbz      w23, #0xdf8f8
000DFC8C 281f41b9 ldr      w8, [x25, #0x11c]
000DFC90 09050011 add      w9, w8, #1
000DFC94 280f088b add      x8, x25, x8, lsl #3
000DFC98 291f01b9 str      w9, [x25, #0x11c]
000DFC9C 89d29dd2 mov      x9, #0xee94
000DFCA0 2957acf2 movk     x9, #0x62b9, lsl #16
000DFCA4 89dfdcf2 movk     x9, #0xe6fc, lsl #32
000DFCA8 69b6f1f2 movk     x9, #0x8db3, lsl #48
000DFCAC 099100f9 str      x9, [x8, #0x120]
000DFCB0 12ffff17 b        #0xdf8f8
000DFCB4 f7030594 bl       #0x220c90
000DFCB8 1f7c0071 cmp      w0, #0x1f
000DFCBC c3000054 b.lo     #0xdfcd4
000DFCC0 20008052 mov      w0, #1
000DFCC4 209f01b9 str      w0, [x25, #0x19c]
000DFCC8 52ffff17 b        #0xdfa10
000DFCCC 3f9f01b9 str      wzr, [x25, #0x19c]
000DFCD0 0affff17 b        #0xdf8f8
000DFCD4 48008052 mov      w8, #2
000DFCD8 289f01b9 str      w8, [x25, #0x19c]
000DFCDC 07ffff17 b        #0xdf8f8
~~~
### 0xe1450 (91 slots)
~~~asm
000E1450 ff4301d1 sub      sp, sp, #0x50
000E1454 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1458 f51b00f9 str      x21, [sp, #0x30]
000E145C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1460 fd830091 add      x29, sp, #0x20
000E1464 f30300aa mov      x19, x0
000E1468 c1290090 adrp     x1, #0x619000
000E146C 21900e91 add      x1, x1, #0x3a4
000E1470 e0030091 mov      x0, sp
000E1474 d8a2fc97 bl       #0x9fd4
000E1478 603a40f9 ldr      x0, [x19, #0x70]
000E147C 800000b4 cbz      x0, #0xe148c
000E1480 088c44f8 ldr      x8, [x0, #0x48]!
000E1484 080d40f9 ldr      x8, [x8, #0x18]
000E1488 00013fd6 blr      x8
000E148C e80340f9 ldr      x8, [sp]
000E1490 683a00f9 str      x8, [x19, #0x70]
000E1494 683240f9 ldr      x8, [x19, #0x60]
000E1498 143140f9 ldr      x20, [x8, #0x60]
000E149C 880240f9 ldr      x8, [x20]
000E14A0 e00314aa mov      x0, x20
000E14A4 080140f9 ldr      x8, [x8]
000E14A8 00013fd6 blr      x8
000E14AC f50300aa mov      x21, x0
000E14B0 2b13fd97 bl       #0x2615c
000E14B4 1f0015eb cmp      x0, x21
000E14B8 c0000054 b.eq     #0xe14d0
000E14BC 1f2003d5 nop      
000E14C0 b50240f9 ldr      x21, [x21]
000E14C4 bf0200eb cmp      x21, x0
000E14C8 a41a40fa ccmp     x21, #0, #4, ne
000E14CC a1ffff54 b.ne     #0xe14c0
000E14D0 80be42f9 ldr      x0, [x20, #0x578]
000E14D4 88539bd2 mov      x8, #0xda9c
000E14D8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E14DC e886cef2 movk     x8, #0x7437, lsl #32
000E14E0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E14E4 a92900b0 adrp     x9, #0x616000
000E14E8 29511f91 add      x9, x9, #0x7d4
000E14EC e82700a9 stp      x8, x9, [sp]
000E14F0 08018052 mov      w8, #8
000E14F4 e1030091 mov      x1, sp
000E14F8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E14FC 21b5fe97 bl       #0x8e980
000E1500 f40300aa mov      x20, x0
000E1504 e00f40f9 ldr      x0, [sp, #0x18]
000E1508 800000b4 cbz      x0, #0xe1518
000E150C 088c44f8 ldr      x8, [x0, #0x48]!
000E1510 080d40f9 ldr      x8, [x8, #0x18]
000E1514 00013fd6 blr      x8
000E1518 683640f9 ldr      x8, [x19, #0x68]
000E151C 133140f9 ldr      x19, [x8, #0x60]
000E1520 680240f9 ldr      x8, [x19]
000E1524 e00313aa mov      x0, x19
000E1528 080140f9 ldr      x8, [x8]
000E152C 00013fd6 blr      x8
000E1530 f50300aa mov      x21, x0
000E1534 5bb0fe97 bl       #0x8d6a0
000E1538 1f0015eb cmp      x0, x21
000E153C a0000054 b.eq     #0xe1550
000E1540 b50240f9 ldr      x21, [x21]
000E1544 bf0200eb cmp      x21, x0
000E1548 a41a40fa ccmp     x21, #0, #4, ne
000E154C a1ffff54 b.ne     #0xe1540
000E1550 685641b9 ldr      w8, [x19, #0x154]
000E1554 1f090071 cmp      w8, #2
000E1558 60010054 b.eq     #0xe1584
000E155C 1f050071 cmp      w8, #1
000E1560 00020054 b.eq     #0xe15a0
000E1564 08010035 cbnz     w8, #0xe1584
000E1568 e00314aa mov      x0, x20
000E156C 138bff97 bl       #0xc41b8
000E1570 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1574 f51b40f9 ldr      x21, [sp, #0x30]
000E1578 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E157C ff430191 add      sp, sp, #0x50
000E1580 c0035fd6 ret      
000E1584 e00314aa mov      x0, x20
000E1588 6e8bff97 bl       #0xc4340
000E158C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1590 f51b40f9 ldr      x21, [sp, #0x30]
000E1594 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1598 ff430191 add      sp, sp, #0x50
000E159C c0035fd6 ret      
000E15A0 e00314aa mov      x0, x20
000E15A4 278bff97 bl       #0xc4240
000E15A8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E15AC f51b40f9 ldr      x21, [sp, #0x30]
000E15B0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E15B4 ff430191 add      sp, sp, #0x50
000E15B8 c0035fd6 ret      
~~~
### 0xe15c0 (100 slots)
~~~asm
000E15C0 ff4301d1 sub      sp, sp, #0x50
000E15C4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E15C8 f51b00f9 str      x21, [sp, #0x30]
000E15CC f44f04a9 stp      x20, x19, [sp, #0x40]
000E15D0 fd830091 add      x29, sp, #0x20
000E15D4 083040f9 ldr      x8, [x0, #0x60]
000E15D8 f40300aa mov      x20, x0
000E15DC 133140f9 ldr      x19, [x8, #0x60]
000E15E0 680240f9 ldr      x8, [x19]
000E15E4 e00313aa mov      x0, x19
000E15E8 080140f9 ldr      x8, [x8]
000E15EC 00013fd6 blr      x8
000E15F0 f50300aa mov      x21, x0
000E15F4 da12fd97 bl       #0x2615c
000E15F8 1f0015eb cmp      x0, x21
000E15FC a0000054 b.eq     #0xe1610
000E1600 b50240f9 ldr      x21, [x21]
000E1604 bf0200eb cmp      x21, x0
000E1608 a41a40fa ccmp     x21, #0, #4, ne
000E160C a1ffff54 b.ne     #0xe1600
000E1610 60be42f9 ldr      x0, [x19, #0x578]
000E1614 88539bd2 mov      x8, #0xda9c
000E1618 2869b1f2 movk     x8, #0x8b49, lsl #16
000E161C e886cef2 movk     x8, #0x7437, lsl #32
000E1620 e8a7eef2 movk     x8, #0x753f, lsl #48
000E1624 a92900b0 adrp     x9, #0x616000
000E1628 29511f91 add      x9, x9, #0x7d4
000E162C e82700a9 stp      x8, x9, [sp]
000E1630 08018052 mov      w8, #8
000E1634 e1030091 mov      x1, sp
000E1638 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E163C d1b4fe97 bl       #0x8e980
000E1640 f30300aa mov      x19, x0
000E1644 e00f40f9 ldr      x0, [sp, #0x18]
000E1648 800000b4 cbz      x0, #0xe1658
000E164C 088c44f8 ldr      x8, [x0, #0x48]!
000E1650 080d40f9 ldr      x8, [x8, #0x18]
000E1654 00013fd6 blr      x8
000E1658 883640f9 ldr      x8, [x20, #0x68]
000E165C 080300b4 cbz      x8, #0xe16bc
000E1660 143140f9 ldr      x20, [x8, #0x60]
000E1664 f40200b4 cbz      x20, #0xe16c0
000E1668 880240f9 ldr      x8, [x20]
000E166C e00314aa mov      x0, x20
000E1670 080140f9 ldr      x8, [x8]
000E1674 00013fd6 blr      x8
000E1678 f50300aa mov      x21, x0
000E167C 09b0fe97 bl       #0x8d6a0
000E1680 1f0015eb cmp      x0, x21
000E1684 00010054 b.eq     #0xe16a4
000E1688 1f2003d5 nop      
000E168C 1f2003d5 nop      
000E1690 b50240f9 ldr      x21, [x21]
000E1694 bf0200eb cmp      x21, x0
000E1698 a41a40fa ccmp     x21, #0, #4, ne
000E169C a1ffff54 b.ne     #0xe1690
000E16A0 550300b4 cbz      x21, #0xe1708
000E16A4 944201d1 sub      x20, x20, #0x50
000E16A8 88a641b9 ldr      w8, [x20, #0x1a4]
000E16AC e00313aa mov      x0, x19
000E16B0 1f090071 cmp      w8, #2
000E16B4 e1000054 b.ne     #0xe16d0
000E16B8 19000014 b        #0xe171c
000E16BC f4031faa mov      x20, xzr
000E16C0 88a641b9 ldr      w8, [x20, #0x1a4]
000E16C4 e00313aa mov      x0, x19
000E16C8 1f090071 cmp      w8, #2
000E16CC 80020054 b.eq     #0xe171c
000E16D0 1f050071 cmp      w8, #1
000E16D4 40010054 b.eq     #0xe16fc
000E16D8 28020035 cbnz     w8, #0xe171c
000E16DC b98aff97 bl       #0xc41c0
000E16E0 20020037 tbnz     w0, #0, #0xe1724
000E16E4 e0031f2a mov      w0, wzr
000E16E8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E16EC f51b40f9 ldr      x21, [sp, #0x30]
000E16F0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E16F4 ff430191 add      sp, sp, #0x50
000E16F8 c0035fd6 ret      
000E16FC df8aff97 bl       #0xc4278
000E1700 20ff0736 tbz      w0, #0, #0xe16e4
000E1704 08000014 b        #0xe1724
000E1708 f4031faa mov      x20, xzr
000E170C 88a641b9 ldr      w8, [x20, #0x1a4]
000E1710 e00313aa mov      x0, x19
000E1714 1f090071 cmp      w8, #2
000E1718 c1fdff54 b.ne     #0xe16d0
000E171C 0b8bff97 bl       #0xc4348
000E1720 20fe0736 tbz      w0, #0, #0xe16e4
000E1724 88a641b9 ldr      w8, [x20, #0x1a4]
000E1728 1f0d0071 cmp      w8, #3
000E172C 63000054 b.lo     #0xe1738
000E1730 a8008052 mov      w8, #5
000E1734 88a203b9 str      w8, [x20, #0x3a0]
000E1738 20008052 mov      w0, #1
000E173C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1740 f51b40f9 ldr      x21, [sp, #0x30]
000E1744 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1748 ff430191 add      sp, sp, #0x50
000E174C c0035fd6 ret      
~~~
### 0xe1750 (105 slots)
~~~asm
000E1750 ff4301d1 sub      sp, sp, #0x50
000E1754 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1758 f51b00f9 str      x21, [sp, #0x30]
000E175C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1760 fd830091 add      x29, sp, #0x20
000E1764 083040f9 ldr      x8, [x0, #0x60]
000E1768 f30300aa mov      x19, x0
000E176C 143140f9 ldr      x20, [x8, #0x60]
000E1770 880240f9 ldr      x8, [x20]
000E1774 e00314aa mov      x0, x20
000E1778 080140f9 ldr      x8, [x8]
000E177C 00013fd6 blr      x8
000E1780 f50300aa mov      x21, x0
000E1784 7612fd97 bl       #0x2615c
000E1788 1f0015eb cmp      x0, x21
000E178C a0000054 b.eq     #0xe17a0
000E1790 b50240f9 ldr      x21, [x21]
000E1794 bf0200eb cmp      x21, x0
000E1798 a41a40fa ccmp     x21, #0, #4, ne
000E179C a1ffff54 b.ne     #0xe1790
000E17A0 80be42f9 ldr      x0, [x20, #0x578]
000E17A4 88539bd2 mov      x8, #0xda9c
000E17A8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E17AC e886cef2 movk     x8, #0x7437, lsl #32
000E17B0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E17B4 a92900b0 adrp     x9, #0x616000
000E17B8 29511f91 add      x9, x9, #0x7d4
000E17BC e82700a9 stp      x8, x9, [sp]
000E17C0 08018052 mov      w8, #8
000E17C4 e1030091 mov      x1, sp
000E17C8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E17CC 6db4fe97 bl       #0x8e980
000E17D0 f40300aa mov      x20, x0
000E17D4 e00f40f9 ldr      x0, [sp, #0x18]
000E17D8 800000b4 cbz      x0, #0xe17e8
000E17DC 088c44f8 ldr      x8, [x0, #0x48]!
000E17E0 080d40f9 ldr      x8, [x8, #0x18]
000E17E4 00013fd6 blr      x8
000E17E8 e00314aa mov      x0, x20
000E17EC e1031f2a mov      w1, wzr
000E17F0 22008052 mov      w2, #1
000E17F4 6f1dfd97 bl       #0x28db0
000E17F8 683640f9 ldr      x8, [x19, #0x68]
000E17FC e80200b4 cbz      x8, #0xe1858
000E1800 133140f9 ldr      x19, [x8, #0x60]
000E1804 d30200b4 cbz      x19, #0xe185c
000E1808 680240f9 ldr      x8, [x19]
000E180C e00313aa mov      x0, x19
000E1810 080140f9 ldr      x8, [x8]
000E1814 00013fd6 blr      x8
000E1818 f40300aa mov      x20, x0
000E181C a1affe97 bl       #0x8d6a0
000E1820 1f0014eb cmp      x0, x20
000E1824 00010054 b.eq     #0xe1844
000E1828 1f2003d5 nop      
000E182C 1f2003d5 nop      
000E1830 940240f9 ldr      x20, [x20]
000E1834 9f0200eb cmp      x20, x0
000E1838 841a40fa ccmp     x20, #0, #4, ne
000E183C a1ffff54 b.ne     #0xe1830
000E1840 140500b4 cbz      x20, #0xe18e0
000E1844 734201d1 sub      x19, x19, #0x50
000E1848 68a641b9 ldr      w8, [x19, #0x1a4]
000E184C 1f110071 cmp      w8, #4
000E1850 c0000054 b.eq     #0xe1868
000E1854 1e000014 b        #0xe18cc
000E1858 f3031faa mov      x19, xzr
000E185C 68a641b9 ldr      w8, [x19, #0x1a4]
000E1860 1f110071 cmp      w8, #4
000E1864 41030054 b.ne     #0xe18cc
000E1868 604a41f9 ldr      x0, [x19, #0x290]
000E186C a00f00f9 str      x0, [x29, #0x18]
000E1870 800000b4 cbz      x0, #0xe1880
000E1874 088c44f8 ldr      x8, [x0, #0x48]!
000E1878 080940f9 ldr      x8, [x8, #0x10]
000E187C 00013fd6 blr      x8
000E1880 604640f9 ldr      x0, [x19, #0x88]
000E1884 e00300f9 str      x0, [sp]
000E1888 800000b4 cbz      x0, #0xe1898
000E188C 088c44f8 ldr      x8, [x0, #0x48]!
000E1890 080940f9 ldr      x8, [x8, #0x10]
000E1894 00013fd6 blr      x8
000E1898 a0630091 add      x0, x29, #0x18
000E189C e1030091 mov      x1, sp
000E18A0 c7d5fe97 bl       #0x96fbc
000E18A4 e00340f9 ldr      x0, [sp]
000E18A8 800000b4 cbz      x0, #0xe18b8
000E18AC 088c44f8 ldr      x8, [x0, #0x48]!
000E18B0 080d40f9 ldr      x8, [x8, #0x18]
000E18B4 00013fd6 blr      x8
000E18B8 a00f40f9 ldr      x0, [x29, #0x18]
000E18BC 800000b4 cbz      x0, #0xe18cc
000E18C0 088c44f8 ldr      x8, [x0, #0x48]!
000E18C4 080d40f9 ldr      x8, [x8, #0x18]
000E18C8 00013fd6 blr      x8
000E18CC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E18D0 f51b40f9 ldr      x21, [sp, #0x30]
000E18D4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E18D8 ff430191 add      sp, sp, #0x50
000E18DC c0035fd6 ret      
000E18E0 f3031faa mov      x19, xzr
000E18E4 68a641b9 ldr      w8, [x19, #0x1a4]
000E18E8 1f110071 cmp      w8, #4
000E18EC e0fbff54 b.eq     #0xe1868
000E18F0 f7ffff17 b        #0xe18cc
~~~
### 0xe1920 (83 slots)
~~~asm
000E1920 ff4301d1 sub      sp, sp, #0x50
000E1924 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1928 f51b00f9 str      x21, [sp, #0x30]
000E192C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1930 fd830091 add      x29, sp, #0x20
000E1934 f30300aa mov      x19, x0
000E1938 812900d0 adrp     x1, #0x613000
000E193C 21c42f91 add      x1, x1, #0xbf1
000E1940 e0030091 mov      x0, sp
000E1944 a4a1fc97 bl       #0x9fd4
000E1948 603a40f9 ldr      x0, [x19, #0x70]
000E194C 800000b4 cbz      x0, #0xe195c
000E1950 088c44f8 ldr      x8, [x0, #0x48]!
000E1954 080d40f9 ldr      x8, [x8, #0x18]
000E1958 00013fd6 blr      x8
000E195C e80340f9 ldr      x8, [sp]
000E1960 683a00f9 str      x8, [x19, #0x70]
000E1964 683640f9 ldr      x8, [x19, #0x68]
000E1968 480200b4 cbz      x8, #0xe19b0
000E196C 143140f9 ldr      x20, [x8, #0x60]
000E1970 140200b4 cbz      x20, #0xe19b0
000E1974 880240f9 ldr      x8, [x20]
000E1978 e00314aa mov      x0, x20
000E197C 080140f9 ldr      x8, [x8]
000E1980 00013fd6 blr      x8
000E1984 f50300aa mov      x21, x0
000E1988 46affe97 bl       #0x8d6a0
000E198C 1f0015eb cmp      x0, x21
000E1990 c0000054 b.eq     #0xe19a8
000E1994 b50240f9 ldr      x21, [x21]
000E1998 bf0200eb cmp      x21, x0
000E199C a41a40fa ccmp     x21, #0, #4, ne
000E19A0 a1ffff54 b.ne     #0xe1994
000E19A4 950000b4 cbz      x21, #0xe19b4
000E19A8 954201d1 sub      x21, x20, #0x50
000E19AC 02000014 b        #0xe19b4
000E19B0 f5031faa mov      x21, xzr
000E19B4 683240f9 ldr      x8, [x19, #0x60]
000E19B8 133140f9 ldr      x19, [x8, #0x60]
000E19BC 680240f9 ldr      x8, [x19]
000E19C0 e00313aa mov      x0, x19
000E19C4 080140f9 ldr      x8, [x8]
000E19C8 00013fd6 blr      x8
000E19CC f40300aa mov      x20, x0
000E19D0 e311fd97 bl       #0x2615c
000E19D4 1f0014eb cmp      x0, x20
000E19D8 c0000054 b.eq     #0xe19f0
000E19DC 1f2003d5 nop      
000E19E0 940240f9 ldr      x20, [x20]
000E19E4 9f0200eb cmp      x20, x0
000E19E8 841a40fa ccmp     x20, #0, #4, ne
000E19EC a1ffff54 b.ne     #0xe19e0
000E19F0 60be42f9 ldr      x0, [x19, #0x578]
000E19F4 286496d2 mov      x8, #0xb321
000E19F8 888abef2 movk     x8, #0xf454, lsl #16
000E19FC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E1A00 28e8ecf2 movk     x8, #0x6741, lsl #48
000E1A04 a9290090 adrp     x9, #0x615000
000E1A08 29093191 add      x9, x9, #0xc42
000E1A0C e82700a9 stp      x8, x9, [sp]
000E1A10 28018052 mov      w8, #9
000E1A14 e1030091 mov      x1, sp
000E1A18 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E1A1C 65b4fe97 bl       #0x8ebb0
000E1A20 f30300aa mov      x19, x0
000E1A24 e00f40f9 ldr      x0, [sp, #0x18]
000E1A28 800000b4 cbz      x0, #0xe1a38
000E1A2C 088c44f8 ldr      x8, [x0, #0x48]!
000E1A30 080d40f9 ldr      x8, [x8, #0x18]
000E1A34 00013fd6 blr      x8
000E1A38 a8d240b9 ldr      w8, [x21, #0xd0]
000E1A3C e00313aa mov      x0, x19
000E1A40 bfc20cf8 stur     xzr, [x21, #0xcc]
000E1A44 09050051 sub      w9, w8, #1
000E1A48 3f110071 cmp      w9, #4
000E1A4C 08319f1a csel     w8, w8, wzr, lo
000E1A50 684e06b9 str      w8, [x19, #0x64c]
000E1A54 b5d4ff97 bl       #0xd6d28
000E1A58 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1A5C f51b40f9 ldr      x21, [sp, #0x30]
000E1A60 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1A64 ff430191 add      sp, sp, #0x50
000E1A68 c0035fd6 ret      
~~~
### 0xe1a70 (306 slots)
~~~asm
000E1A70 ff4301d1 sub      sp, sp, #0x50
000E1A74 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1A78 f65703a9 stp      x22, x21, [sp, #0x30]
000E1A7C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1A80 fd830091 add      x29, sp, #0x20
000E1A84 083040f9 ldr      x8, [x0, #0x60]
000E1A88 f30300aa mov      x19, x0
000E1A8C 143140f9 ldr      x20, [x8, #0x60]
000E1A90 880240f9 ldr      x8, [x20]
000E1A94 e00314aa mov      x0, x20
000E1A98 080140f9 ldr      x8, [x8]
000E1A9C 00013fd6 blr      x8
000E1AA0 f50300aa mov      x21, x0
000E1AA4 ae11fd97 bl       #0x2615c
000E1AA8 1f0015eb cmp      x0, x21
000E1AAC a0000054 b.eq     #0xe1ac0
000E1AB0 b50240f9 ldr      x21, [x21]
000E1AB4 bf0200eb cmp      x21, x0
000E1AB8 a41a40fa ccmp     x21, #0, #4, ne
000E1ABC a1ffff54 b.ne     #0xe1ab0
000E1AC0 80be42f9 ldr      x0, [x20, #0x578]
000E1AC4 286496d2 mov      x8, #0xb321
000E1AC8 888abef2 movk     x8, #0xf454, lsl #16
000E1ACC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E1AD0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E1AD4 a9290090 adrp     x9, #0x615000
000E1AD8 29093191 add      x9, x9, #0xc42
000E1ADC e82700a9 stp      x8, x9, [sp]
000E1AE0 28018052 mov      w8, #9
000E1AE4 e1030091 mov      x1, sp
000E1AE8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E1AEC 31b4fe97 bl       #0x8ebb0
000E1AF0 f40300aa mov      x20, x0
000E1AF4 e00f40f9 ldr      x0, [sp, #0x18]
000E1AF8 800000b4 cbz      x0, #0xe1b08
000E1AFC 088c44f8 ldr      x8, [x0, #0x48]!
000E1B00 080d40f9 ldr      x8, [x8, #0x18]
000E1B04 00013fd6 blr      x8
000E1B08 964a46b9 ldr      w22, [x20, #0x648]
000E1B0C 683640f9 ldr      x8, [x19, #0x68]
000E1B10 c80200b4 cbz      x8, #0xe1b68
000E1B14 143140f9 ldr      x20, [x8, #0x60]
000E1B18 140400b4 cbz      x20, #0xe1b98
000E1B1C 880240f9 ldr      x8, [x20]
000E1B20 e00314aa mov      x0, x20
000E1B24 080140f9 ldr      x8, [x8]
000E1B28 00013fd6 blr      x8
000E1B2C f50300aa mov      x21, x0
000E1B30 dcaefe97 bl       #0x8d6a0
000E1B34 1f0015eb cmp      x0, x21
000E1B38 e0000054 b.eq     #0xe1b54
000E1B3C 1f2003d5 nop      
000E1B40 b50240f9 ldr      x21, [x21]
000E1B44 bf0200eb cmp      x21, x0
000E1B48 a41a40fa ccmp     x21, #0, #4, ne
000E1B4C a1ffff54 b.ne     #0xe1b40
000E1B50 f50000b4 cbz      x21, #0xe1b6c
000E1B54 954201d1 sub      x21, x20, #0x50
000E1B58 c8060051 sub      w8, w22, #1
000E1B5C 1f2d0071 cmp      w8, #0xb
000E1B60 c9000054 b.ls     #0xe1b78
000E1B64 11000014 b        #0xe1ba8
000E1B68 f5031faa mov      x21, xzr
000E1B6C c8060051 sub      w8, w22, #1
000E1B70 1f2d0071 cmp      w8, #0xb
000E1B74 a8010054 b.hi     #0xe1ba8
000E1B78 292a00b0 adrp     x9, #0x626000
000E1B7C 29790091 add      x9, x9, #0x1e
000E1B80 8a000010 adr      x10, #0xe1b90
000E1B84 2b696838 ldrb     w11, [x9, x8]
000E1B88 4a090b8b add      x10, x10, x11, lsl #2
000E1B8C 40011fd6 br       x10
000E1B90 08028052 mov      w8, #0x10
000E1B94 a9000014 b        #0xe1e38
000E1B98 f5031faa mov      x21, xzr
000E1B9C c8060051 sub      w8, w22, #1
000E1BA0 1f2d0071 cmp      w8, #0xb
000E1BA4 a9feff54 b.ls     #0xe1b78
000E1BA8 e0031f2a mov      w0, wzr
000E1BAC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1BB0 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1BB4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1BB8 ff430191 add      sp, sp, #0x50
000E1BBC c0035fd6 ret      
000E1BC0 28028052 mov      w8, #0x11
000E1BC4 9d000014 b        #0xe1e38
000E1BC8 683640f9 ldr      x8, [x19, #0x68]
000E1BCC 133140f9 ldr      x19, [x8, #0x60]
000E1BD0 680240f9 ldr      x8, [x19]
000E1BD4 e00313aa mov      x0, x19
000E1BD8 080140f9 ldr      x8, [x8]
000E1BDC 00013fd6 blr      x8
000E1BE0 f40300aa mov      x20, x0
000E1BE4 afaefe97 bl       #0x8d6a0
000E1BE8 1f0014eb cmp      x0, x20
000E1BEC a0000054 b.eq     #0xe1c00
000E1BF0 940240f9 ldr      x20, [x20]
000E1BF4 9f0200eb cmp      x20, x0
000E1BF8 841a40fa ccmp     x20, #0, #4, ne
000E1BFC a1ffff54 b.ne     #0xe1bf0
000E1C00 c80080d2 mov      x8, #6
000E1C04 20008052 mov      w0, #1
000E1C08 e800c0f2 movk     x8, #7, lsl #32
000E1C0C 68c206f8 stur     x8, [x19, #0x6c]
000E1C10 c8008052 mov      w8, #6
000E1C14 a8c600b9 str      w8, [x21, #0xc4]
000E1C18 48028052 mov      w8, #0x12
000E1C1C a8a203b9 str      w8, [x21, #0x3a0]
000E1C20 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1C24 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1C28 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1C2C ff430191 add      sp, sp, #0x50
000E1C30 c0035fd6 ret      
000E1C34 683640f9 ldr      x8, [x19, #0x68]
000E1C38 133140f9 ldr      x19, [x8, #0x60]
000E1C3C 680240f9 ldr      x8, [x19]
000E1C40 e00313aa mov      x0, x19
000E1C44 080140f9 ldr      x8, [x8]
000E1C48 00013fd6 blr      x8
000E1C4C f40300aa mov      x20, x0
000E1C50 94aefe97 bl       #0x8d6a0
000E1C54 1f0014eb cmp      x0, x20
000E1C58 c0000054 b.eq     #0xe1c70
000E1C5C 1f2003d5 nop      
000E1C60 940240f9 ldr      x20, [x20]
000E1C64 9f0200eb cmp      x20, x0
000E1C68 841a40fa ccmp     x20, #0, #4, ne
000E1C6C a1ffff54 b.ne     #0xe1c60
000E1C70 c80080d2 mov      x8, #6
000E1C74 e800c0f2 movk     x8, #7, lsl #32
000E1C78 68c206f8 stur     x8, [x19, #0x6c]
000E1C7C 68028052 mov      w8, #0x13
000E1C80 a8a203b9 str      w8, [x21, #0x3a0]
000E1C84 c8008052 mov      w8, #6
000E1C88 9d000014 b        #0xe1efc
000E1C8C 683640f9 ldr      x8, [x19, #0x68]
000E1C90 133140f9 ldr      x19, [x8, #0x60]
000E1C94 680240f9 ldr      x8, [x19]
000E1C98 e00313aa mov      x0, x19
000E1C9C 080140f9 ldr      x8, [x8]
000E1CA0 00013fd6 blr      x8
000E1CA4 f40300aa mov      x20, x0
000E1CA8 7eaefe97 bl       #0x8d6a0
000E1CAC 1f0014eb cmp      x0, x20
000E1CB0 a0000054 b.eq     #0xe1cc4
000E1CB4 940240f9 ldr      x20, [x20]
000E1CB8 9f0200eb cmp      x20, x0
000E1CBC 841a40fa ccmp     x20, #0, #4, ne
000E1CC0 a1ffff54 b.ne     #0xe1cb4
000E1CC4 c80080d2 mov      x8, #6
000E1CC8 e800c0f2 movk     x8, #7, lsl #32
000E1CCC 68c206f8 stur     x8, [x19, #0x6c]
000E1CD0 68028052 mov      w8, #0x13
000E1CD4 a8a203b9 str      w8, [x21, #0x3a0]
000E1CD8 e8008052 mov      w8, #7
000E1CDC 88000014 b        #0xe1efc
000E1CE0 a8028052 mov      w8, #0x15
000E1CE4 a8a203b9 str      w8, [x21, #0x3a0]
000E1CE8 a83240f9 ldr      x8, [x21, #0x60]
000E1CEC 080140b9 ldr      w8, [x8]
000E1CF0 1f090071 cmp      w8, #2
000E1CF4 21110054 b.ne     #0xe1f18
000E1CF8 c8008052 mov      w8, #6
000E1CFC 88000014 b        #0xe1f1c
000E1D00 683640f9 ldr      x8, [x19, #0x68]
000E1D04 133140f9 ldr      x19, [x8, #0x60]
000E1D08 680240f9 ldr      x8, [x19]
000E1D0C e00313aa mov      x0, x19
000E1D10 080140f9 ldr      x8, [x8]
000E1D14 00013fd6 blr      x8
000E1D18 f40300aa mov      x20, x0
000E1D1C 61aefe97 bl       #0x8d6a0
000E1D20 1f0014eb cmp      x0, x20
000E1D24 e0000054 b.eq     #0xe1d40
000E1D28 1f2003d5 nop      
000E1D2C 1f2003d5 nop      
000E1D30 940240f9 ldr      x20, [x20]
000E1D34 9f0200eb cmp      x20, x0
000E1D38 841a40fa ccmp     x20, #0, #4, ne
000E1D3C a1ffff54 b.ne     #0xe1d30
000E1D40 c80080d2 mov      x8, #6
000E1D44 69028052 mov      w9, #0x13
000E1D48 e800c0f2 movk     x8, #7, lsl #32
000E1D4C 68c206f8 stur     x8, [x19, #0x6c]
000E1D50 c8008052 mov      w8, #6
000E1D54 a9a203b9 str      w9, [x21, #0x3a0]
000E1D58 a8c600b9 str      w8, [x21, #0xc4]
000E1D5C 68008052 mov      w8, #3
000E1D60 67000014 b        #0xe1efc
000E1D64 683640f9 ldr      x8, [x19, #0x68]
000E1D68 133140f9 ldr      x19, [x8, #0x60]
000E1D6C 680240f9 ldr      x8, [x19]
000E1D70 e00313aa mov      x0, x19
000E1D74 080140f9 ldr      x8, [x8]
000E1D78 00013fd6 blr      x8
000E1D7C f40300aa mov      x20, x0
000E1D80 48aefe97 bl       #0x8d6a0
000E1D84 1f0014eb cmp      x0, x20
000E1D88 c0000054 b.eq     #0xe1da0
000E1D8C 1f2003d5 nop      
000E1D90 940240f9 ldr      x20, [x20]
000E1D94 9f0200eb cmp      x20, x0
000E1D98 841a40fa ccmp     x20, #0, #4, ne
000E1D9C a1ffff54 b.ne     #0xe1d90
000E1DA0 c80080d2 mov      x8, #6
000E1DA4 20008052 mov      w0, #1
000E1DA8 e800c0f2 movk     x8, #7, lsl #32
000E1DAC 68c206f8 stur     x8, [x19, #0x6c]
000E1DB0 e8008052 mov      w8, #7
000E1DB4 a0a601b9 str      w0, [x21, #0x1a4]
000E1DB8 a8a203b9 str      w8, [x21, #0x3a0]
000E1DBC a83640f9 ldr      x8, [x21, #0x68]
000E1DC0 000100b9 str      w0, [x8]
000E1DC4 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1DC8 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1DCC fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1DD0 ff430191 add      sp, sp, #0x50
000E1DD4 c0035fd6 ret      
000E1DD8 683640f9 ldr      x8, [x19, #0x68]
000E1DDC 133140f9 ldr      x19, [x8, #0x60]
000E1DE0 680240f9 ldr      x8, [x19]
000E1DE4 e00313aa mov      x0, x19
000E1DE8 080140f9 ldr      x8, [x8]
000E1DEC 00013fd6 blr      x8
000E1DF0 f40300aa mov      x20, x0
000E1DF4 2baefe97 bl       #0x8d6a0
000E1DF8 1f0014eb cmp      x0, x20
000E1DFC a0000054 b.eq     #0xe1e10
000E1E00 940240f9 ldr      x20, [x20]
000E1E04 9f0200eb cmp      x20, x0
000E1E08 841a40fa ccmp     x20, #0, #4, ne
000E1E0C a1ffff54 b.ne     #0xe1e00
000E1E10 c80080d2 mov      x8, #6
000E1E14 e800c0f2 movk     x8, #7, lsl #32
000E1E18 68c206f8 stur     x8, [x19, #0x6c]
000E1E1C 68028052 mov      w8, #0x13
000E1E20 a8a203b9 str      w8, [x21, #0x3a0]
000E1E24 48038052 mov      w8, #0x1a
000E1E28 35000014 b        #0xe1efc
000E1E2C 68008052 mov      w8, #3
000E1E30 a8a601b9 str      w8, [x21, #0x1a4]
000E1E34 e8008052 mov      w8, #7
000E1E38 a8a203b9 str      w8, [x21, #0x3a0]
000E1E3C 20008052 mov      w0, #1
000E1E40 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1E44 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1E48 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1E4C ff430191 add      sp, sp, #0x50
000E1E50 c0035fd6 ret      
000E1E54 683640f9 ldr      x8, [x19, #0x68]
000E1E58 133140f9 ldr      x19, [x8, #0x60]
000E1E5C 680240f9 ldr      x8, [x19]
000E1E60 e00313aa mov      x0, x19
000E1E64 080140f9 ldr      x8, [x8]
000E1E68 00013fd6 blr      x8
000E1E6C f40300aa mov      x20, x0
000E1E70 0caefe97 bl       #0x8d6a0
000E1E74 1f0014eb cmp      x0, x20
000E1E78 c0000054 b.eq     #0xe1e90
000E1E7C 1f2003d5 nop      
000E1E80 940240f9 ldr      x20, [x20]
000E1E84 9f0200eb cmp      x20, x0
000E1E88 841a40fa ccmp     x20, #0, #4, ne
000E1E8C a1ffff54 b.ne     #0xe1e80
000E1E90 c80080d2 mov      x8, #6
000E1E94 e800c0f2 movk     x8, #7, lsl #32
000E1E98 68c206f8 stur     x8, [x19, #0x6c]
000E1E9C 68028052 mov      w8, #0x13
000E1EA0 a8a203b9 str      w8, [x21, #0x3a0]
000E1EA4 a8008052 mov      w8, #5
000E1EA8 15000014 b        #0xe1efc
000E1EAC 683640f9 ldr      x8, [x19, #0x68]
000E1EB0 133140f9 ldr      x19, [x8, #0x60]
000E1EB4 680240f9 ldr      x8, [x19]
000E1EB8 e00313aa mov      x0, x19
000E1EBC 080140f9 ldr      x8, [x8]
000E1EC0 00013fd6 blr      x8
000E1EC4 f40300aa mov      x20, x0
000E1EC8 f6adfe97 bl       #0x8d6a0
000E1ECC 1f0014eb cmp      x0, x20
000E1ED0 a0000054 b.eq     #0xe1ee4
000E1ED4 940240f9 ldr      x20, [x20]
000E1ED8 9f0200eb cmp      x20, x0
000E1EDC 841a40fa ccmp     x20, #0, #4, ne
000E1EE0 a1ffff54 b.ne     #0xe1ed4
000E1EE4 c80080d2 mov      x8, #6
000E1EE8 e800c0f2 movk     x8, #7, lsl #32
000E1EEC 68c206f8 stur     x8, [x19, #0x6c]
000E1EF0 68028052 mov      w8, #0x13
000E1EF4 a8a203b9 str      w8, [x21, #0x3a0]
000E1EF8 88028052 mov      w8, #0x14
000E1EFC 20008052 mov      w0, #1
000E1F00 a80a01b9 str      w8, [x21, #0x108]
000E1F04 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1F08 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1F0C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1F10 ff430191 add      sp, sp, #0x50
000E1F14 c0035fd6 ret      
000E1F18 88008052 mov      w8, #4
000E1F1C a89e01b9 str      w8, [x21, #0x19c]
000E1F20 20008052 mov      w0, #1
000E1F24 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1F28 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1F2C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1F30 ff430191 add      sp, sp, #0x50
000E1F34 c0035fd6 ret      
~~~
### 0xe1f60 (84 slots)
~~~asm
000E1F60 ff4301d1 sub      sp, sp, #0x50
000E1F64 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1F68 f51b00f9 str      x21, [sp, #0x30]
000E1F6C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1F70 fd830091 add      x29, sp, #0x20
000E1F74 f30300aa mov      x19, x0
000E1F78 412900f0 adrp     x1, #0x60c000
000E1F7C 21203d91 add      x1, x1, #0xf48
000E1F80 e0030091 mov      x0, sp
000E1F84 14a0fc97 bl       #0x9fd4
000E1F88 603a40f9 ldr      x0, [x19, #0x70]
000E1F8C 800000b4 cbz      x0, #0xe1f9c
000E1F90 088c44f8 ldr      x8, [x0, #0x48]!
000E1F94 080d40f9 ldr      x8, [x8, #0x18]
000E1F98 00013fd6 blr      x8
000E1F9C e80340f9 ldr      x8, [sp]
000E1FA0 683a00f9 str      x8, [x19, #0x70]
000E1FA4 683240f9 ldr      x8, [x19, #0x60]
000E1FA8 143140f9 ldr      x20, [x8, #0x60]
000E1FAC 880240f9 ldr      x8, [x20]
000E1FB0 e00314aa mov      x0, x20
000E1FB4 080140f9 ldr      x8, [x8]
000E1FB8 00013fd6 blr      x8
000E1FBC f50300aa mov      x21, x0
000E1FC0 6710fd97 bl       #0x2615c
000E1FC4 1f0015eb cmp      x0, x21
000E1FC8 c0000054 b.eq     #0xe1fe0
000E1FCC 1f2003d5 nop      
000E1FD0 b50240f9 ldr      x21, [x21]
000E1FD4 bf0200eb cmp      x21, x0
000E1FD8 a41a40fa ccmp     x21, #0, #4, ne
000E1FDC a1ffff54 b.ne     #0xe1fd0
000E1FE0 80be42f9 ldr      x0, [x20, #0x578]
000E1FE4 286496d2 mov      x8, #0xb321
000E1FE8 888abef2 movk     x8, #0xf454, lsl #16
000E1FEC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E1FF0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E1FF4 a9290090 adrp     x9, #0x615000
000E1FF8 29093191 add      x9, x9, #0xc42
000E1FFC e82700a9 stp      x8, x9, [sp]
000E2000 28018052 mov      w8, #9
000E2004 e1030091 mov      x1, sp
000E2008 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E200C e9b2fe97 bl       #0x8ebb0
000E2010 f40300aa mov      x20, x0
000E2014 e00f40f9 ldr      x0, [sp, #0x18]
000E2018 800000b4 cbz      x0, #0xe2028
000E201C 088c44f8 ldr      x8, [x0, #0x48]!
000E2020 080d40f9 ldr      x8, [x8, #0x18]
000E2024 00013fd6 blr      x8
000E2028 e00314aa mov      x0, x20
000E202C e1031f2a mov      w1, wzr
000E2030 22008052 mov      w2, #1
000E2034 1b1bfd97 bl       #0x28ca0
000E2038 683640f9 ldr      x8, [x19, #0x68]
000E203C 133140f9 ldr      x19, [x8, #0x60]
000E2040 680240f9 ldr      x8, [x19]
000E2044 e00313aa mov      x0, x19
000E2048 080140f9 ldr      x8, [x8]
000E204C 00013fd6 blr      x8
000E2050 f50300aa mov      x21, x0
000E2054 93adfe97 bl       #0x8d6a0
000E2058 1f0015eb cmp      x0, x21
000E205C a0000054 b.eq     #0xe2070
000E2060 b50240f9 ldr      x21, [x21]
000E2064 bf0200eb cmp      x21, x0
000E2068 a41a40fa ccmp     x21, #0, #4, ne
000E206C a1ffff54 b.ne     #0xe2060
000E2070 685641b9 ldr      w8, [x19, #0x154]
000E2074 e00314aa mov      x0, x20
000E2078 1f050071 cmp      w8, #1
000E207C e1000054 b.ne     #0xe2098
000E2080 e1d2ff97 bl       #0xd6c04
000E2084 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2088 f51b40f9 ldr      x21, [sp, #0x30]
000E208C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2090 ff430191 add      sp, sp, #0x50
000E2094 c0035fd6 ret      
000E2098 1bd3ff97 bl       #0xd6d04
000E209C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E20A0 f51b40f9 ldr      x21, [sp, #0x30]
000E20A4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E20A8 ff430191 add      sp, sp, #0x50
000E20AC c0035fd6 ret      
~~~
### 0xe20b0 (108 slots)
~~~asm
000E20B0 ff4301d1 sub      sp, sp, #0x50
000E20B4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E20B8 f65703a9 stp      x22, x21, [sp, #0x30]
000E20BC f44f04a9 stp      x20, x19, [sp, #0x40]
000E20C0 fd830091 add      x29, sp, #0x20
000E20C4 083040f9 ldr      x8, [x0, #0x60]
000E20C8 f30300aa mov      x19, x0
000E20CC 143140f9 ldr      x20, [x8, #0x60]
000E20D0 880240f9 ldr      x8, [x20]
000E20D4 e00314aa mov      x0, x20
000E20D8 080140f9 ldr      x8, [x8]
000E20DC 00013fd6 blr      x8
000E20E0 f50300aa mov      x21, x0
000E20E4 1e10fd97 bl       #0x2615c
000E20E8 1f0015eb cmp      x0, x21
000E20EC a0000054 b.eq     #0xe2100
000E20F0 b50240f9 ldr      x21, [x21]
000E20F4 bf0200eb cmp      x21, x0
000E20F8 a41a40fa ccmp     x21, #0, #4, ne
000E20FC a1ffff54 b.ne     #0xe20f0
000E2100 80be42f9 ldr      x0, [x20, #0x578]
000E2104 286496d2 mov      x8, #0xb321
000E2108 888abef2 movk     x8, #0xf454, lsl #16
000E210C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E2110 28e8ecf2 movk     x8, #0x6741, lsl #48
000E2114 892900f0 adrp     x9, #0x615000
000E2118 29093191 add      x9, x9, #0xc42
000E211C e82700a9 stp      x8, x9, [sp]
000E2120 28018052 mov      w8, #9
000E2124 e1030091 mov      x1, sp
000E2128 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E212C a1b2fe97 bl       #0x8ebb0
000E2130 f40300aa mov      x20, x0
000E2134 e00f40f9 ldr      x0, [sp, #0x18]
000E2138 800000b4 cbz      x0, #0xe2148
000E213C 088c44f8 ldr      x8, [x0, #0x48]!
000E2140 080d40f9 ldr      x8, [x8, #0x18]
000E2144 00013fd6 blr      x8
000E2148 683640f9 ldr      x8, [x19, #0x68]
000E214C 480600b4 cbz      x8, #0xe2214
000E2150 153140f9 ldr      x21, [x8, #0x60]
000E2154 350600b4 cbz      x21, #0xe2218
000E2158 a80240f9 ldr      x8, [x21]
000E215C e00315aa mov      x0, x21
000E2160 080140f9 ldr      x8, [x8]
000E2164 00013fd6 blr      x8
000E2168 f60300aa mov      x22, x0
000E216C 4dadfe97 bl       #0x8d6a0
000E2170 1f0016eb cmp      x0, x22
000E2174 00010054 b.eq     #0xe2194
000E2178 1f2003d5 nop      
000E217C 1f2003d5 nop      
000E2180 d60240f9 ldr      x22, [x22]
000E2184 df0200eb cmp      x22, x0
000E2188 c41a40fa ccmp     x22, #0, #4, ne
000E218C a1ffff54 b.ne     #0xe2180
000E2190 d60500b4 cbz      x22, #0xe2248
000E2194 b54201d1 sub      x21, x21, #0x50
000E2198 a8a641b9 ldr      w8, [x21, #0x1a4]
000E219C e00314aa mov      x0, x20
000E21A0 1f050071 cmp      w8, #1
000E21A4 20040054 b.eq     #0xe2228
000E21A8 d9d2ff97 bl       #0xd6d0c
000E21AC 20040036 tbz      w0, #0, #0xe2230
000E21B0 a8a641b9 ldr      w8, [x21, #0x1a4]
000E21B4 1f090071 cmp      w8, #2
000E21B8 23020054 b.lo     #0xe21fc
000E21BC 683640f9 ldr      x8, [x19, #0x68]
000E21C0 133140f9 ldr      x19, [x8, #0x60]
000E21C4 680240f9 ldr      x8, [x19]
000E21C8 e00313aa mov      x0, x19
000E21CC 080140f9 ldr      x8, [x8]
000E21D0 00013fd6 blr      x8
000E21D4 f40300aa mov      x20, x0
000E21D8 32adfe97 bl       #0x8d6a0
000E21DC 1f0014eb cmp      x0, x20
000E21E0 a0000054 b.eq     #0xe21f4
000E21E4 940240f9 ldr      x20, [x20]
000E21E8 9f0200eb cmp      x20, x0
000E21EC 841a40fa ccmp     x20, #0, #4, ne
000E21F0 a1ffff54 b.ne     #0xe21e4
000E21F4 48008052 mov      w8, #2
000E21F8 685203b9 str      w8, [x19, #0x350]
000E21FC 20008052 mov      w0, #1
000E2200 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2204 f65743a9 ldp      x22, x21, [sp, #0x30]
000E2208 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E220C ff430191 add      sp, sp, #0x50
000E2210 c0035fd6 ret      
000E2214 f5031faa mov      x21, xzr
000E2218 a8a641b9 ldr      w8, [x21, #0x1a4]
000E221C e00314aa mov      x0, x20
000E2220 1f050071 cmp      w8, #1
000E2224 21fcff54 b.ne     #0xe21a8
000E2228 85d2ff97 bl       #0xd6c3c
000E222C 20fc0737 tbnz     w0, #0, #0xe21b0
000E2230 e0031f2a mov      w0, wzr
000E2234 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2238 f65743a9 ldp      x22, x21, [sp, #0x30]
000E223C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2240 ff430191 add      sp, sp, #0x50
000E2244 c0035fd6 ret      
000E2248 f5031faa mov      x21, xzr
000E224C a8a641b9 ldr      w8, [x21, #0x1a4]
000E2250 e00314aa mov      x0, x20
000E2254 1f050071 cmp      w8, #1
000E2258 80feff54 b.eq     #0xe2228
000E225C d3ffff17 b        #0xe21a8
~~~
### 0xe2260 (48 slots)
~~~asm
000E2260 ff0301d1 sub      sp, sp, #0x40
000E2264 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2268 f44f03a9 stp      x20, x19, [sp, #0x30]
000E226C fd830091 add      x29, sp, #0x20
000E2270 083040f9 ldr      x8, [x0, #0x60]
000E2274 133140f9 ldr      x19, [x8, #0x60]
000E2278 680240f9 ldr      x8, [x19]
000E227C e00313aa mov      x0, x19
000E2280 080140f9 ldr      x8, [x8]
000E2284 00013fd6 blr      x8
000E2288 f40300aa mov      x20, x0
000E228C b40ffd97 bl       #0x2615c
000E2290 1f0014eb cmp      x0, x20
000E2294 e0000054 b.eq     #0xe22b0
000E2298 1f2003d5 nop      
000E229C 1f2003d5 nop      
000E22A0 940240f9 ldr      x20, [x20]
000E22A4 9f0200eb cmp      x20, x0
000E22A8 841a40fa ccmp     x20, #0, #4, ne
000E22AC a1ffff54 b.ne     #0xe22a0
000E22B0 60be42f9 ldr      x0, [x19, #0x578]
000E22B4 286496d2 mov      x8, #0xb321
000E22B8 888abef2 movk     x8, #0xf454, lsl #16
000E22BC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E22C0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E22C4 892900f0 adrp     x9, #0x615000
000E22C8 29093191 add      x9, x9, #0xc42
000E22CC e82700a9 stp      x8, x9, [sp]
000E22D0 28018052 mov      w8, #9
000E22D4 e1030091 mov      x1, sp
000E22D8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E22DC 35b2fe97 bl       #0x8ebb0
000E22E0 f30300aa mov      x19, x0
000E22E4 e00f40f9 ldr      x0, [sp, #0x18]
000E22E8 800000b4 cbz      x0, #0xe22f8
000E22EC 088c44f8 ldr      x8, [x0, #0x48]!
000E22F0 080d40f9 ldr      x8, [x8, #0x18]
000E22F4 00013fd6 blr      x8
000E22F8 e00313aa mov      x0, x19
000E22FC e1031f2a mov      w1, wzr
000E2300 22008052 mov      w2, #1
000E2304 ab1afd97 bl       #0x28db0
000E2308 e00313aa mov      x0, x19
000E230C fcd2ff97 bl       #0xd6efc
000E2310 f44f43a9 ldp      x20, x19, [sp, #0x30]
000E2314 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2318 ff030191 add      sp, sp, #0x40
000E231C c0035fd6 ret      
~~~
### 0xe2390 (65 slots)
~~~asm
000E2390 ff4301d1 sub      sp, sp, #0x50
000E2394 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2398 f51b00f9 str      x21, [sp, #0x30]
000E239C f44f04a9 stp      x20, x19, [sp, #0x40]
000E23A0 fd830091 add      x29, sp, #0x20
000E23A4 083040f9 ldr      x8, [x0, #0x60]
000E23A8 f30300aa mov      x19, x0
000E23AC 143140f9 ldr      x20, [x8, #0x60]
000E23B0 880240f9 ldr      x8, [x20]
000E23B4 e00314aa mov      x0, x20
000E23B8 080140f9 ldr      x8, [x8]
000E23BC 00013fd6 blr      x8
000E23C0 f50300aa mov      x21, x0
000E23C4 660ffd97 bl       #0x2615c
000E23C8 1f0015eb cmp      x0, x21
000E23CC a0000054 b.eq     #0xe23e0
000E23D0 b50240f9 ldr      x21, [x21]
000E23D4 bf0200eb cmp      x21, x0
000E23D8 a41a40fa ccmp     x21, #0, #4, ne
000E23DC a1ffff54 b.ne     #0xe23d0
000E23E0 80be42f9 ldr      x0, [x20, #0x578]
000E23E4 88539bd2 mov      x8, #0xda9c
000E23E8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E23EC e886cef2 movk     x8, #0x7437, lsl #32
000E23F0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E23F4 a9290090 adrp     x9, #0x616000
000E23F8 29511f91 add      x9, x9, #0x7d4
000E23FC e82700a9 stp      x8, x9, [sp]
000E2400 08018052 mov      w8, #8
000E2404 e1030091 mov      x1, sp
000E2408 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E240C 5db1fe97 bl       #0x8e980
000E2410 f40300aa mov      x20, x0
000E2414 e00f40f9 ldr      x0, [sp, #0x18]
000E2418 800000b4 cbz      x0, #0xe2428
000E241C 088c44f8 ldr      x8, [x0, #0x48]!
000E2420 080d40f9 ldr      x8, [x8, #0x18]
000E2424 00013fd6 blr      x8
000E2428 e00314aa mov      x0, x20
000E242C 2b87ff97 bl       #0xc40d8
000E2430 f403002a mov      w20, w0
000E2434 20020037 tbnz     w0, #0, #0xe2478
000E2438 683640f9 ldr      x8, [x19, #0x68]
000E243C 133140f9 ldr      x19, [x8, #0x60]
000E2440 680240f9 ldr      x8, [x19]
000E2444 e00313aa mov      x0, x19
000E2448 080140f9 ldr      x8, [x8]
000E244C 00013fd6 blr      x8
000E2450 f50300aa mov      x21, x0
000E2454 93acfe97 bl       #0x8d6a0
000E2458 1f0015eb cmp      x0, x21
000E245C a0000054 b.eq     #0xe2470
000E2460 b50240f9 ldr      x21, [x21]
000E2464 bf0200eb cmp      x21, x0
000E2468 a41a40fa ccmp     x21, #0, #4, ne
000E246C a1ffff54 b.ne     #0xe2460
000E2470 68008052 mov      w8, #3
000E2474 685203b9 str      w8, [x19, #0x350]
000E2478 28008052 mov      w8, #1
000E247C f51b40f9 ldr      x21, [sp, #0x30]
000E2480 0001340a bic      w0, w8, w20
000E2484 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2488 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E248C ff430191 add      sp, sp, #0x50
000E2490 c0035fd6 ret      
~~~
### 0xe2510 (65 slots)
~~~asm
000E2510 ff4301d1 sub      sp, sp, #0x50
000E2514 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2518 f51b00f9 str      x21, [sp, #0x30]
000E251C f44f04a9 stp      x20, x19, [sp, #0x40]
000E2520 fd830091 add      x29, sp, #0x20
000E2524 083040f9 ldr      x8, [x0, #0x60]
000E2528 f30300aa mov      x19, x0
000E252C 143140f9 ldr      x20, [x8, #0x60]
000E2530 880240f9 ldr      x8, [x20]
000E2534 e00314aa mov      x0, x20
000E2538 080140f9 ldr      x8, [x8]
000E253C 00013fd6 blr      x8
000E2540 f50300aa mov      x21, x0
000E2544 060ffd97 bl       #0x2615c
000E2548 1f0015eb cmp      x0, x21
000E254C a0000054 b.eq     #0xe2560
000E2550 b50240f9 ldr      x21, [x21]
000E2554 bf0200eb cmp      x21, x0
000E2558 a41a40fa ccmp     x21, #0, #4, ne
000E255C a1ffff54 b.ne     #0xe2550
000E2560 80be42f9 ldr      x0, [x20, #0x578]
000E2564 88539bd2 mov      x8, #0xda9c
000E2568 2869b1f2 movk     x8, #0x8b49, lsl #16
000E256C e886cef2 movk     x8, #0x7437, lsl #32
000E2570 e8a7eef2 movk     x8, #0x753f, lsl #48
000E2574 a9290090 adrp     x9, #0x616000
000E2578 29511f91 add      x9, x9, #0x7d4
000E257C e82700a9 stp      x8, x9, [sp]
000E2580 08018052 mov      w8, #8
000E2584 e1030091 mov      x1, sp
000E2588 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E258C fdb0fe97 bl       #0x8e980
000E2590 f40300aa mov      x20, x0
000E2594 e00f40f9 ldr      x0, [sp, #0x18]
000E2598 800000b4 cbz      x0, #0xe25a8
000E259C 088c44f8 ldr      x8, [x0, #0x48]!
000E25A0 080d40f9 ldr      x8, [x8, #0x18]
000E25A4 00013fd6 blr      x8
000E25A8 e00314aa mov      x0, x20
000E25AC cd86ff97 bl       #0xc40e0
000E25B0 f403002a mov      w20, w0
000E25B4 20020037 tbnz     w0, #0, #0xe25f8
000E25B8 683640f9 ldr      x8, [x19, #0x68]
000E25BC 133140f9 ldr      x19, [x8, #0x60]
000E25C0 680240f9 ldr      x8, [x19]
000E25C4 e00313aa mov      x0, x19
000E25C8 080140f9 ldr      x8, [x8]
000E25CC 00013fd6 blr      x8
000E25D0 f50300aa mov      x21, x0
000E25D4 33acfe97 bl       #0x8d6a0
000E25D8 1f0015eb cmp      x0, x21
000E25DC a0000054 b.eq     #0xe25f0
000E25E0 b50240f9 ldr      x21, [x21]
000E25E4 bf0200eb cmp      x21, x0
000E25E8 a41a40fa ccmp     x21, #0, #4, ne
000E25EC a1ffff54 b.ne     #0xe25e0
000E25F0 68008052 mov      w8, #3
000E25F4 685203b9 str      w8, [x19, #0x350]
000E25F8 28008052 mov      w8, #1
000E25FC f51b40f9 ldr      x21, [sp, #0x30]
000E2600 0001340a bic      w0, w8, w20
000E2604 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2608 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E260C ff430191 add      sp, sp, #0x50
000E2610 c0035fd6 ret      
~~~
### 0xe2690 (110 slots)
~~~asm
000E2690 ff4301d1 sub      sp, sp, #0x50
000E2694 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2698 f51b00f9 str      x21, [sp, #0x30]
000E269C f44f04a9 stp      x20, x19, [sp, #0x40]
000E26A0 fd830091 add      x29, sp, #0x20
000E26A4 083040f9 ldr      x8, [x0, #0x60]
000E26A8 f40300aa mov      x20, x0
000E26AC 133140f9 ldr      x19, [x8, #0x60]
000E26B0 680240f9 ldr      x8, [x19]
000E26B4 e00313aa mov      x0, x19
000E26B8 080140f9 ldr      x8, [x8]
000E26BC 00013fd6 blr      x8
000E26C0 f50300aa mov      x21, x0
000E26C4 a60efd97 bl       #0x2615c
000E26C8 1f0015eb cmp      x0, x21
000E26CC a0000054 b.eq     #0xe26e0
000E26D0 b50240f9 ldr      x21, [x21]
000E26D4 bf0200eb cmp      x21, x0
000E26D8 a41a40fa ccmp     x21, #0, #4, ne
000E26DC a1ffff54 b.ne     #0xe26d0
000E26E0 60be42f9 ldr      x0, [x19, #0x578]
000E26E4 88539bd2 mov      x8, #0xda9c
000E26E8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E26EC e886cef2 movk     x8, #0x7437, lsl #32
000E26F0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E26F4 a9290090 adrp     x9, #0x616000
000E26F8 29511f91 add      x9, x9, #0x7d4
000E26FC e82700a9 stp      x8, x9, [sp]
000E2700 08018052 mov      w8, #8
000E2704 e1030091 mov      x1, sp
000E2708 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E270C 9db0fe97 bl       #0x8e980
000E2710 f30300aa mov      x19, x0
000E2714 e00f40f9 ldr      x0, [sp, #0x18]
000E2718 800000b4 cbz      x0, #0xe2728
000E271C 088c44f8 ldr      x8, [x0, #0x48]!
000E2720 080d40f9 ldr      x8, [x8, #0x18]
000E2724 00013fd6 blr      x8
000E2728 883640f9 ldr      x8, [x20, #0x68]
000E272C e80200b4 cbz      x8, #0xe2788
000E2730 143140f9 ldr      x20, [x8, #0x60]
000E2734 d40200b4 cbz      x20, #0xe278c
000E2738 880240f9 ldr      x8, [x20]
000E273C e00314aa mov      x0, x20
000E2740 080140f9 ldr      x8, [x8]
000E2744 00013fd6 blr      x8
000E2748 f50300aa mov      x21, x0
000E274C d5abfe97 bl       #0x8d6a0
000E2750 1f0015eb cmp      x0, x21
000E2754 00010054 b.eq     #0xe2774
000E2758 1f2003d5 nop      
000E275C 1f2003d5 nop      
000E2760 b50240f9 ldr      x21, [x21]
000E2764 bf0200eb cmp      x21, x0
000E2768 a41a40fa ccmp     x21, #0, #4, ne
000E276C a1ffff54 b.ne     #0xe2760
000E2770 350500b4 cbz      x21, #0xe2814
000E2774 944201d1 sub      x20, x20, #0x50
000E2778 e00313aa mov      x0, x19
000E277C 5b86ff97 bl       #0xc40e8
000E2780 20010037 tbnz     w0, #0, #0xe27a4
000E2784 05000014 b        #0xe2798
000E2788 f4031faa mov      x20, xzr
000E278C e00313aa mov      x0, x19
000E2790 5686ff97 bl       #0xc40e8
000E2794 80000037 tbnz     w0, #0, #0xe27a4
000E2798 e00313aa mov      x0, x19
000E279C 6286ff97 bl       #0xc4124
000E27A0 e0000036 tbz      w0, #0, #0xe27bc
000E27A4 e0031f2a mov      w0, wzr
000E27A8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E27AC f51b40f9 ldr      x21, [sp, #0x30]
000E27B0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E27B4 ff430191 add      sp, sp, #0x50
000E27B8 c0035fd6 ret      
000E27BC 684e46b9 ldr      w8, [x19, #0x64c]
000E27C0 7f4e06b9 str      wzr, [x19, #0x64c]
000E27C4 1f310071 cmp      w8, #0xc
000E27C8 c1010054 b.ne     #0xe2800
000E27CC 680080d2 mov      x8, #3
000E27D0 e00313aa mov      x0, x19
000E27D4 8800c0f2 movk     x8, #4, lsl #32
000E27D8 88c20bf8 stur     x8, [x20, #0xbc]
000E27DC 4186ff97 bl       #0xc40e0
000E27E0 68008052 mov      w8, #3
000E27E4 29018052 mov      w9, #9
000E27E8 890a01b9 str      w9, [x20, #0x108]
000E27EC 1f000072 tst      w0, #1
000E27F0 2811881a csel     w8, w9, w8, ne
000E27F4 88c600b9 str      w8, [x20, #0xc4]
000E27F8 68028052 mov      w8, #0x13
000E27FC 0c000014 b        #0xe282c
000E2800 e00313aa mov      x0, x19
000E2804 3786ff97 bl       #0xc40e0
000E2808 00010036 tbz      w0, #0, #0xe2828
000E280C 28018052 mov      w8, #9
000E2810 07000014 b        #0xe282c
000E2814 f4031faa mov      x20, xzr
000E2818 e00313aa mov      x0, x19
000E281C 3386ff97 bl       #0xc40e8
000E2820 20fc0737 tbnz     w0, #0, #0xe27a4
000E2824 ddffff17 b        #0xe2798
000E2828 68008052 mov      w8, #3
000E282C 88a203b9 str      w8, [x20, #0x3a0]
000E2830 20008052 mov      w0, #1
000E2834 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2838 f51b40f9 ldr      x21, [sp, #0x30]
000E283C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2840 ff430191 add      sp, sp, #0x50
000E2844 c0035fd6 ret      
~~~
### 0xe2870 (93 slots)
~~~asm
000E2870 ff4301d1 sub      sp, sp, #0x50
000E2874 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2878 f51b00f9 str      x21, [sp, #0x30]
000E287C f44f04a9 stp      x20, x19, [sp, #0x40]
000E2880 fd830091 add      x29, sp, #0x20
000E2884 f30300aa mov      x19, x0
000E2888 812900b0 adrp     x1, #0x613000
000E288C 21640391 add      x1, x1, #0xd9
000E2890 e0030091 mov      x0, sp
000E2894 d09dfc97 bl       #0x9fd4
000E2898 603a40f9 ldr      x0, [x19, #0x70]
000E289C 800000b4 cbz      x0, #0xe28ac
000E28A0 088c44f8 ldr      x8, [x0, #0x48]!
000E28A4 080d40f9 ldr      x8, [x8, #0x18]
000E28A8 00013fd6 blr      x8
000E28AC e80340f9 ldr      x8, [sp]
000E28B0 683a00f9 str      x8, [x19, #0x70]
000E28B4 683640f9 ldr      x8, [x19, #0x68]
000E28B8 480200b4 cbz      x8, #0xe2900
000E28BC 143140f9 ldr      x20, [x8, #0x60]
000E28C0 140200b4 cbz      x20, #0xe2900
000E28C4 880240f9 ldr      x8, [x20]
000E28C8 e00314aa mov      x0, x20
000E28CC 080140f9 ldr      x8, [x8]
000E28D0 00013fd6 blr      x8
000E28D4 f50300aa mov      x21, x0
000E28D8 72abfe97 bl       #0x8d6a0
000E28DC 1f0015eb cmp      x0, x21
000E28E0 c0000054 b.eq     #0xe28f8
000E28E4 b50240f9 ldr      x21, [x21]
000E28E8 bf0200eb cmp      x21, x0
000E28EC a41a40fa ccmp     x21, #0, #4, ne
000E28F0 a1ffff54 b.ne     #0xe28e4
000E28F4 950000b4 cbz      x21, #0xe2904
000E28F8 954201d1 sub      x21, x20, #0x50
000E28FC 02000014 b        #0xe2904
000E2900 f5031faa mov      x21, xzr
000E2904 683240f9 ldr      x8, [x19, #0x60]
000E2908 133140f9 ldr      x19, [x8, #0x60]
000E290C 680240f9 ldr      x8, [x19]
000E2910 e00313aa mov      x0, x19
000E2914 080140f9 ldr      x8, [x8]
000E2918 00013fd6 blr      x8
000E291C f40300aa mov      x20, x0
000E2920 0f0efd97 bl       #0x2615c
000E2924 1f0014eb cmp      x0, x20
000E2928 c0000054 b.eq     #0xe2940
000E292C 1f2003d5 nop      
000E2930 940240f9 ldr      x20, [x20]
000E2934 9f0200eb cmp      x20, x0
000E2938 841a40fa ccmp     x20, #0, #4, ne
000E293C a1ffff54 b.ne     #0xe2930
000E2940 60be42f9 ldr      x0, [x19, #0x578]
000E2944 88539bd2 mov      x8, #0xda9c
000E2948 2869b1f2 movk     x8, #0x8b49, lsl #16
000E294C e886cef2 movk     x8, #0x7437, lsl #32
000E2950 e8a7eef2 movk     x8, #0x753f, lsl #48
000E2954 a9290090 adrp     x9, #0x616000
000E2958 29511f91 add      x9, x9, #0x7d4
000E295C e82700a9 stp      x8, x9, [sp]
000E2960 08018052 mov      w8, #8
000E2964 e1030091 mov      x1, sp
000E2968 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E296C 05b0fe97 bl       #0x8e980
000E2970 f30300aa mov      x19, x0
000E2974 e00f40f9 ldr      x0, [sp, #0x18]
000E2978 800000b4 cbz      x0, #0xe2988
000E297C 088c44f8 ldr      x8, [x0, #0x48]!
000E2980 080d40f9 ldr      x8, [x8, #0x18]
000E2984 00013fd6 blr      x8
000E2988 a8d240b9 ldr      w8, [x21, #0xd0]
000E298C bfd200b9 str      wzr, [x21, #0xd0]
000E2990 1f0d0071 cmp      w8, #3
000E2994 a0000054 b.eq     #0xe29a8
000E2998 1f110071 cmp      w8, #4
000E299C c1000054 b.ne     #0xe29b4
000E29A0 81008052 mov      w1, #4
000E29A4 02000014 b        #0xe29ac
000E29A8 61008052 mov      w1, #3
000E29AC a19e00b9 str      w1, [x21, #0x9c]
000E29B0 02000014 b        #0xe29b8
000E29B4 a19e40b9 ldr      w1, [x21, #0x9c]
000E29B8 e00313aa mov      x0, x19
000E29BC 6283ff97 bl       #0xc3744
000E29C0 e00313aa mov      x0, x19
000E29C4 e1031f2a mov      w1, wzr
000E29C8 bf9e00b9 str      wzr, [x21, #0x9c]
000E29CC 6785ff97 bl       #0xc3f68
000E29D0 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E29D4 f51b40f9 ldr      x21, [sp, #0x30]
000E29D8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E29DC ff430191 add      sp, sp, #0x50
000E29E0 c0035fd6 ret      
~~~
### 0xe29f0 (80 slots)
~~~asm
000E29F0 ff4301d1 sub      sp, sp, #0x50
000E29F4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E29F8 f51b00f9 str      x21, [sp, #0x30]
000E29FC f44f04a9 stp      x20, x19, [sp, #0x40]
000E2A00 fd830091 add      x29, sp, #0x20
000E2A04 083040f9 ldr      x8, [x0, #0x60]
000E2A08 f30300aa mov      x19, x0
000E2A0C 143140f9 ldr      x20, [x8, #0x60]
000E2A10 880240f9 ldr      x8, [x20]
000E2A14 e00314aa mov      x0, x20
000E2A18 080140f9 ldr      x8, [x8]
000E2A1C 00013fd6 blr      x8
000E2A20 f50300aa mov      x21, x0
000E2A24 ce0dfd97 bl       #0x2615c
000E2A28 1f0015eb cmp      x0, x21
000E2A2C a0000054 b.eq     #0xe2a40
000E2A30 b50240f9 ldr      x21, [x21]
000E2A34 bf0200eb cmp      x21, x0
000E2A38 a41a40fa ccmp     x21, #0, #4, ne
000E2A3C a1ffff54 b.ne     #0xe2a30
000E2A40 80be42f9 ldr      x0, [x20, #0x578]
000E2A44 88539bd2 mov      x8, #0xda9c
000E2A48 2869b1f2 movk     x8, #0x8b49, lsl #16
000E2A4C e886cef2 movk     x8, #0x7437, lsl #32
000E2A50 e8a7eef2 movk     x8, #0x753f, lsl #48
000E2A54 a9290090 adrp     x9, #0x616000
000E2A58 29511f91 add      x9, x9, #0x7d4
000E2A5C e82700a9 stp      x8, x9, [sp]
000E2A60 08018052 mov      w8, #8
000E2A64 e1030091 mov      x1, sp
000E2A68 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E2A6C c5affe97 bl       #0x8e980
000E2A70 f40300aa mov      x20, x0
000E2A74 e00f40f9 ldr      x0, [sp, #0x18]
000E2A78 800000b4 cbz      x0, #0xe2a88
000E2A7C 088c44f8 ldr      x8, [x0, #0x48]!
000E2A80 080d40f9 ldr      x8, [x8, #0x18]
000E2A84 00013fd6 blr      x8
000E2A88 e00314aa mov      x0, x20
000E2A8C a885ff97 bl       #0xc412c
000E2A90 e0000036 tbz      w0, #0, #0xe2aac
000E2A94 e0031f2a mov      w0, wzr
000E2A98 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2A9C f51b40f9 ldr      x21, [sp, #0x30]
000E2AA0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2AA4 ff430191 add      sp, sp, #0x50
000E2AA8 c0035fd6 ret      
000E2AAC e00314aa mov      x0, x20
000E2AB0 a185ff97 bl       #0xc4134
000E2AB4 e0000036 tbz      w0, #0, #0xe2ad0
000E2AB8 e0031f2a mov      w0, wzr
000E2ABC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2AC0 f51b40f9 ldr      x21, [sp, #0x30]
000E2AC4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2AC8 ff430191 add      sp, sp, #0x50
000E2ACC c0035fd6 ret      
000E2AD0 683640f9 ldr      x8, [x19, #0x68]
000E2AD4 133140f9 ldr      x19, [x8, #0x60]
000E2AD8 680240f9 ldr      x8, [x19]
000E2ADC e00313aa mov      x0, x19
000E2AE0 080140f9 ldr      x8, [x8]
000E2AE4 00013fd6 blr      x8
000E2AE8 f40300aa mov      x20, x0
000E2AEC edaafe97 bl       #0x8d6a0
000E2AF0 1f0014eb cmp      x0, x20
000E2AF4 e0000054 b.eq     #0xe2b10
000E2AF8 1f2003d5 nop      
000E2AFC 1f2003d5 nop      
000E2B00 940240f9 ldr      x20, [x20]
000E2B04 9f0200eb cmp      x20, x0
000E2B08 841a40fa ccmp     x20, #0, #4, ne
000E2B0C a1ffff54 b.ne     #0xe2b00
000E2B10 68008052 mov      w8, #3
000E2B14 20008052 mov      w0, #1
000E2B18 685203b9 str      w8, [x19, #0x350]
000E2B1C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2B20 f51b40f9 ldr      x21, [sp, #0x30]
000E2B24 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2B28 ff430191 add      sp, sp, #0x50
000E2B2C c0035fd6 ret      
~~~
### 0xe2b60 (89 slots)
~~~asm
000E2B60 ff4301d1 sub      sp, sp, #0x50
000E2B64 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2B68 f51b00f9 str      x21, [sp, #0x30]
000E2B6C f44f04a9 stp      x20, x19, [sp, #0x40]
000E2B70 fd830091 add      x29, sp, #0x20
000E2B74 f30300aa mov      x19, x0
000E2B78 e12900d0 adrp     x1, #0x620000
000E2B7C 21783591 add      x1, x1, #0xd5e
000E2B80 e0030091 mov      x0, sp
000E2B84 149dfc97 bl       #0x9fd4
000E2B88 603a40f9 ldr      x0, [x19, #0x70]
000E2B8C 800000b4 cbz      x0, #0xe2b9c
000E2B90 088c44f8 ldr      x8, [x0, #0x48]!
000E2B94 080d40f9 ldr      x8, [x8, #0x18]
000E2B98 00013fd6 blr      x8
000E2B9C e80340f9 ldr      x8, [sp]
000E2BA0 683a00f9 str      x8, [x19, #0x70]
000E2BA4 683640f9 ldr      x8, [x19, #0x68]
000E2BA8 480200b4 cbz      x8, #0xe2bf0
000E2BAC 143140f9 ldr      x20, [x8, #0x60]
000E2BB0 140200b4 cbz      x20, #0xe2bf0
000E2BB4 880240f9 ldr      x8, [x20]
000E2BB8 e00314aa mov      x0, x20
000E2BBC 080140f9 ldr      x8, [x8]
000E2BC0 00013fd6 blr      x8
000E2BC4 f50300aa mov      x21, x0
000E2BC8 b6aafe97 bl       #0x8d6a0
000E2BCC 1f0015eb cmp      x0, x21
000E2BD0 c0000054 b.eq     #0xe2be8
000E2BD4 b50240f9 ldr      x21, [x21]
000E2BD8 bf0200eb cmp      x21, x0
000E2BDC a41a40fa ccmp     x21, #0, #4, ne
000E2BE0 a1ffff54 b.ne     #0xe2bd4
000E2BE4 950000b4 cbz      x21, #0xe2bf4
000E2BE8 954201d1 sub      x21, x20, #0x50
000E2BEC 02000014 b        #0xe2bf4
000E2BF0 f5031faa mov      x21, xzr
000E2BF4 683240f9 ldr      x8, [x19, #0x60]
000E2BF8 133140f9 ldr      x19, [x8, #0x60]
000E2BFC 680240f9 ldr      x8, [x19]
000E2C00 e00313aa mov      x0, x19
000E2C04 080140f9 ldr      x8, [x8]
000E2C08 00013fd6 blr      x8
000E2C0C f40300aa mov      x20, x0
000E2C10 530dfd97 bl       #0x2615c
000E2C14 1f0014eb cmp      x0, x20
000E2C18 c0000054 b.eq     #0xe2c30
000E2C1C 1f2003d5 nop      
000E2C20 940240f9 ldr      x20, [x20]
000E2C24 9f0200eb cmp      x20, x0
000E2C28 841a40fa ccmp     x20, #0, #4, ne
000E2C2C a1ffff54 b.ne     #0xe2c20
000E2C30 60be42f9 ldr      x0, [x19, #0x578]
000E2C34 88539bd2 mov      x8, #0xda9c
000E2C38 2869b1f2 movk     x8, #0x8b49, lsl #16
000E2C3C e886cef2 movk     x8, #0x7437, lsl #32
000E2C40 e8a7eef2 movk     x8, #0x753f, lsl #48
000E2C44 a9290090 adrp     x9, #0x616000
000E2C48 29511f91 add      x9, x9, #0x7d4
000E2C4C e82700a9 stp      x8, x9, [sp]
000E2C50 08018052 mov      w8, #8
000E2C54 e1030091 mov      x1, sp
000E2C58 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E2C5C 49affe97 bl       #0x8e980
000E2C60 f30300aa mov      x19, x0
000E2C64 e00f40f9 ldr      x0, [sp, #0x18]
000E2C68 800000b4 cbz      x0, #0xe2c78
000E2C6C 088c44f8 ldr      x8, [x0, #0x48]!
000E2C70 080d40f9 ldr      x8, [x8, #0x18]
000E2C74 00013fd6 blr      x8
000E2C78 a8d240b9 ldr      w8, [x21, #0xd0]
000E2C7C bfd200b9 str      wzr, [x21, #0xd0]
000E2C80 1f150071 cmp      w8, #5
000E2C84 81000054 b.ne     #0xe2c94
000E2C88 e1008052 mov      w1, #7
000E2C8C a19e00b9 str      w1, [x21, #0x9c]
000E2C90 02000014 b        #0xe2c98
000E2C94 a19e40b9 ldr      w1, [x21, #0x9c]
000E2C98 e00313aa mov      x0, x19
000E2C9C aa82ff97 bl       #0xc3744
000E2CA0 e00313aa mov      x0, x19
000E2CA4 e1031f2a mov      w1, wzr
000E2CA8 bf9e00b9 str      wzr, [x21, #0x9c]
000E2CAC af84ff97 bl       #0xc3f68
000E2CB0 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2CB4 f51b40f9 ldr      x21, [sp, #0x30]
000E2CB8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2CBC ff430191 add      sp, sp, #0x50
000E2CC0 c0035fd6 ret      
~~~
### 0xe2cd0 (80 slots)
~~~asm
000E2CD0 ff4301d1 sub      sp, sp, #0x50
000E2CD4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2CD8 f51b00f9 str      x21, [sp, #0x30]
000E2CDC f44f04a9 stp      x20, x19, [sp, #0x40]
000E2CE0 fd830091 add      x29, sp, #0x20
000E2CE4 083040f9 ldr      x8, [x0, #0x60]
000E2CE8 f30300aa mov      x19, x0
000E2CEC 143140f9 ldr      x20, [x8, #0x60]
000E2CF0 880240f9 ldr      x8, [x20]
000E2CF4 e00314aa mov      x0, x20
000E2CF8 080140f9 ldr      x8, [x8]
000E2CFC 00013fd6 blr      x8
000E2D00 f50300aa mov      x21, x0
000E2D04 160dfd97 bl       #0x2615c
000E2D08 1f0015eb cmp      x0, x21
000E2D0C a0000054 b.eq     #0xe2d20
000E2D10 b50240f9 ldr      x21, [x21]
000E2D14 bf0200eb cmp      x21, x0
000E2D18 a41a40fa ccmp     x21, #0, #4, ne
000E2D1C a1ffff54 b.ne     #0xe2d10
000E2D20 80be42f9 ldr      x0, [x20, #0x578]
000E2D24 88539bd2 mov      x8, #0xda9c
000E2D28 2869b1f2 movk     x8, #0x8b49, lsl #16
000E2D2C e886cef2 movk     x8, #0x7437, lsl #32
000E2D30 e8a7eef2 movk     x8, #0x753f, lsl #48
000E2D34 a9290090 adrp     x9, #0x616000
000E2D38 29511f91 add      x9, x9, #0x7d4
000E2D3C e82700a9 stp      x8, x9, [sp]
000E2D40 08018052 mov      w8, #8
000E2D44 e1030091 mov      x1, sp
000E2D48 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E2D4C 0daffe97 bl       #0x8e980
000E2D50 f40300aa mov      x20, x0
000E2D54 e00f40f9 ldr      x0, [sp, #0x18]
000E2D58 800000b4 cbz      x0, #0xe2d68
000E2D5C 088c44f8 ldr      x8, [x0, #0x48]!
000E2D60 080d40f9 ldr      x8, [x8, #0x18]
000E2D64 00013fd6 blr      x8
000E2D68 e00314aa mov      x0, x20
000E2D6C f484ff97 bl       #0xc413c
000E2D70 e0000036 tbz      w0, #0, #0xe2d8c
000E2D74 e0031f2a mov      w0, wzr
000E2D78 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2D7C f51b40f9 ldr      x21, [sp, #0x30]
000E2D80 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2D84 ff430191 add      sp, sp, #0x50
000E2D88 c0035fd6 ret      
000E2D8C e00314aa mov      x0, x20
000E2D90 fa84ff97 bl       #0xc4178
000E2D94 e0000036 tbz      w0, #0, #0xe2db0
000E2D98 e0031f2a mov      w0, wzr
000E2D9C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2DA0 f51b40f9 ldr      x21, [sp, #0x30]
000E2DA4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2DA8 ff430191 add      sp, sp, #0x50
000E2DAC c0035fd6 ret      
000E2DB0 683640f9 ldr      x8, [x19, #0x68]
000E2DB4 133140f9 ldr      x19, [x8, #0x60]
000E2DB8 680240f9 ldr      x8, [x19]
000E2DBC e00313aa mov      x0, x19
000E2DC0 080140f9 ldr      x8, [x8]
000E2DC4 00013fd6 blr      x8
000E2DC8 f40300aa mov      x20, x0
000E2DCC 35aafe97 bl       #0x8d6a0
000E2DD0 1f0014eb cmp      x0, x20
000E2DD4 e0000054 b.eq     #0xe2df0
000E2DD8 1f2003d5 nop      
000E2DDC 1f2003d5 nop      
000E2DE0 940240f9 ldr      x20, [x20]
000E2DE4 9f0200eb cmp      x20, x0
000E2DE8 841a40fa ccmp     x20, #0, #4, ne
000E2DEC a1ffff54 b.ne     #0xe2de0
000E2DF0 68008052 mov      w8, #3
000E2DF4 20008052 mov      w0, #1
000E2DF8 685203b9 str      w8, [x19, #0x350]
000E2DFC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2E00 f51b40f9 ldr      x21, [sp, #0x30]
000E2E04 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2E08 ff430191 add      sp, sp, #0x50
000E2E0C c0035fd6 ret      
~~~
### 0xe2e80 (80 slots)
~~~asm
000E2E80 ff4301d1 sub      sp, sp, #0x50
000E2E84 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2E88 f51b00f9 str      x21, [sp, #0x30]
000E2E8C f44f04a9 stp      x20, x19, [sp, #0x40]
000E2E90 fd830091 add      x29, sp, #0x20
000E2E94 083040f9 ldr      x8, [x0, #0x60]
000E2E98 f30300aa mov      x19, x0
000E2E9C 143140f9 ldr      x20, [x8, #0x60]
000E2EA0 880240f9 ldr      x8, [x20]
000E2EA4 e00314aa mov      x0, x20
000E2EA8 080140f9 ldr      x8, [x8]
000E2EAC 00013fd6 blr      x8
000E2EB0 f50300aa mov      x21, x0
000E2EB4 aa0cfd97 bl       #0x2615c
000E2EB8 1f0015eb cmp      x0, x21
000E2EBC a0000054 b.eq     #0xe2ed0
000E2EC0 b50240f9 ldr      x21, [x21]
000E2EC4 bf0200eb cmp      x21, x0
000E2EC8 a41a40fa ccmp     x21, #0, #4, ne
000E2ECC a1ffff54 b.ne     #0xe2ec0
000E2ED0 80be42f9 ldr      x0, [x20, #0x578]
000E2ED4 88539bd2 mov      x8, #0xda9c
000E2ED8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E2EDC e886cef2 movk     x8, #0x7437, lsl #32
000E2EE0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E2EE4 a9290090 adrp     x9, #0x616000
000E2EE8 29511f91 add      x9, x9, #0x7d4
000E2EEC e82700a9 stp      x8, x9, [sp]
000E2EF0 08018052 mov      w8, #8
000E2EF4 e1030091 mov      x1, sp
000E2EF8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E2EFC a1aefe97 bl       #0x8e980
000E2F00 f40300aa mov      x20, x0
000E2F04 e00f40f9 ldr      x0, [sp, #0x18]
000E2F08 800000b4 cbz      x0, #0xe2f18
000E2F0C 088c44f8 ldr      x8, [x0, #0x48]!
000E2F10 080d40f9 ldr      x8, [x8, #0x18]
000E2F14 00013fd6 blr      x8
000E2F18 e00314aa mov      x0, x20
000E2F1C 9984ff97 bl       #0xc4180
000E2F20 e0000036 tbz      w0, #0, #0xe2f3c
000E2F24 e0031f2a mov      w0, wzr
000E2F28 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2F2C f51b40f9 ldr      x21, [sp, #0x30]
000E2F30 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2F34 ff430191 add      sp, sp, #0x50
000E2F38 c0035fd6 ret      
000E2F3C e00314aa mov      x0, x20
000E2F40 9284ff97 bl       #0xc4188
000E2F44 e0000036 tbz      w0, #0, #0xe2f60
000E2F48 e0031f2a mov      w0, wzr
000E2F4C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2F50 f51b40f9 ldr      x21, [sp, #0x30]
000E2F54 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2F58 ff430191 add      sp, sp, #0x50
000E2F5C c0035fd6 ret      
000E2F60 683640f9 ldr      x8, [x19, #0x68]
000E2F64 133140f9 ldr      x19, [x8, #0x60]
000E2F68 680240f9 ldr      x8, [x19]
000E2F6C e00313aa mov      x0, x19
000E2F70 080140f9 ldr      x8, [x8]
000E2F74 00013fd6 blr      x8
000E2F78 f40300aa mov      x20, x0
000E2F7C c9a9fe97 bl       #0x8d6a0
000E2F80 1f0014eb cmp      x0, x20
000E2F84 e0000054 b.eq     #0xe2fa0
000E2F88 1f2003d5 nop      
000E2F8C 1f2003d5 nop      
000E2F90 940240f9 ldr      x20, [x20]
000E2F94 9f0200eb cmp      x20, x0
000E2F98 841a40fa ccmp     x20, #0, #4, ne
000E2F9C a1ffff54 b.ne     #0xe2f90
000E2FA0 68008052 mov      w8, #3
000E2FA4 20008052 mov      w0, #1
000E2FA8 685203b9 str      w8, [x19, #0x350]
000E2FAC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2FB0 f51b40f9 ldr      x21, [sp, #0x30]
000E2FB4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2FB8 ff430191 add      sp, sp, #0x50
000E2FBC c0035fd6 ret      
~~~
### 0xe38c0 (243 slots)
~~~asm
000E38C0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000E38C4 fc5701a9 stp      x28, x21, [sp, #0x10]
000E38C8 fd030091 mov      x29, sp
000E38CC f44f02a9 stp      x20, x19, [sp, #0x20]
000E38D0 ff0318d1 sub      sp, sp, #0x600
000E38D4 f30300aa mov      x19, x0
000E38D8 c12900d0 adrp     x1, #0x61d000
000E38DC 21b42591 add      x1, x1, #0x96d
000E38E0 e0030091 mov      x0, sp
000E38E4 bc99fc97 bl       #0x9fd4
000E38E8 603a40f9 ldr      x0, [x19, #0x70]
000E38EC 800000b4 cbz      x0, #0xe38fc
000E38F0 088c44f8 ldr      x8, [x0, #0x48]!
000E38F4 080d40f9 ldr      x8, [x8, #0x18]
000E38F8 00013fd6 blr      x8
000E38FC e80340f9 ldr      x8, [sp]
000E3900 683a00f9 str      x8, [x19, #0x70]
000E3904 683240f9 ldr      x8, [x19, #0x60]
000E3908 143140f9 ldr      x20, [x8, #0x60]
000E390C 880240f9 ldr      x8, [x20]
000E3910 e00314aa mov      x0, x20
000E3914 080140f9 ldr      x8, [x8]
000E3918 00013fd6 blr      x8
000E391C f50300aa mov      x21, x0
000E3920 0f0afd97 bl       #0x2615c
000E3924 1f0015eb cmp      x0, x21
000E3928 c0000054 b.eq     #0xe3940
000E392C 1f2003d5 nop      
000E3930 b50240f9 ldr      x21, [x21]
000E3934 bf0200eb cmp      x21, x0
000E3938 a41a40fa ccmp     x21, #0, #4, ne
000E393C a1ffff54 b.ne     #0xe3930
000E3940 803640f9 ldr      x0, [x20, #0x68]
000E3944 e8030091 mov      x8, sp
000E3948 e1031f2a mov      w1, wzr
000E394C 61c7fc97 bl       #0x156d0
000E3950 603e40f9 ldr      x0, [x19, #0x78]
000E3954 800000b4 cbz      x0, #0xe3964
000E3958 088c44f8 ldr      x8, [x0, #0x48]!
000E395C 080d40f9 ldr      x8, [x8, #0x18]
000E3960 00013fd6 blr      x8
000E3964 e80340f9 ldr      x8, [sp]
000E3968 683e00f9 str      x8, [x19, #0x78]
000E396C 683640f9 ldr      x8, [x19, #0x68]
000E3970 143140f9 ldr      x20, [x8, #0x60]
000E3974 880240f9 ldr      x8, [x20]
000E3978 e00314aa mov      x0, x20
000E397C 080140f9 ldr      x8, [x8]
000E3980 00013fd6 blr      x8
000E3984 f50300aa mov      x21, x0
000E3988 46a7fe97 bl       #0x8d6a0
000E398C 1f0015eb cmp      x0, x21
000E3990 a0000054 b.eq     #0xe39a4
000E3994 b50240f9 ldr      x21, [x21]
000E3998 bf0200eb cmp      x21, x0
000E399C a41a40fa ccmp     x21, #0, #4, ne
000E39A0 a1ffff54 b.ne     #0xe3994
000E39A4 885e41b9 ldr      w8, [x20, #0x15c]
000E39A8 e00313aa mov      x0, x19
000E39AC 68a21029 stp      w8, w8, [x19, #0x84]
000E39B0 b8000094 bl       #0xe3c90
000E39B4 28008052 mov      w8, #1
000E39B8 698640b9 ldr      w9, [x19, #0x84]
000E39BC ff4301f9 str      xzr, [sp, #0x280]
000E39C0 68020639 strb     w8, [x19, #0x180]
000E39C4 e8e19cd2 mov      x8, #0xe70f
000E39C8 288fb3f2 movk     x8, #0x9c79, lsl #16
000E39CC e8a5d7f2 movk     x8, #0xbd2f, lsl #32
000E39D0 08d3e1f2 movk     x8, #0xe98, lsl #48
000E39D4 743e40f9 ldr      x20, [x19, #0x78]
000E39D8 e80b02f9 str      x8, [sp, #0x410]
000E39DC a8c884d2 mov      x8, #0x2645
000E39E0 4884b0f2 movk     x8, #0x8422, lsl #16
000E39E4 889cd3f2 movk     x8, #0x9ce4, lsl #32
000E39E8 487ef9f2 movk     x8, #0xcbf2, lsl #48
000E39EC 698601b9 str      w9, [x19, #0x184]
000E39F0 e85b02f9 str      x8, [sp, #0x4b0]
000E39F4 e8a302f9 str      x8, [sp, #0x540]
000E39F8 08008012 mov      w8, #-1
000E39FC e8d305b9 str      w8, [sp, #0x5d0]
000E3A00 1f2003d5 nop      
000E3A04 e8370010 adr      x8, #0xe4100
000E3A08 1f2003d5 nop      
000E3A0C 293e0010 adr      x9, #0xe41d0
000E3A10 ff4701f9 str      xzr, [sp, #0x288]
000E3A14 e82700a9 stp      x8, x9, [sp]
000E3A18 1f2003d5 nop      
000E3A1C c83d0010 adr      x8, #0xe41d4
000E3A20 1f2003d5 nop      
000E3A24 e93d0010 adr      x9, #0xe41e0
000E3A28 e82701a9 stp      x8, x9, [sp, #0x10]
000E3A2C 1f2003d5 nop      
000E3A30 083e0010 adr      x8, #0xe41f0
000E3A34 1f2003d5 nop      
000E3A38 29450010 adr      x9, #0xe42dc
000E3A3C e82708a9 stp      x8, x9, [sp, #0x80]
000E3A40 080000b0 adrp     x8, #0xe4000
000E3A44 0a810b91 add      x10, x8, #0x2e0
000E3A48 1f2003d5 nop      
000E3A4C 08450010 adr      x8, #0xe42ec
000E3A50 ea2309a9 stp      x10, x8, [sp, #0x90]
000E3A54 1f2003d5 nop      
000E3A58 48450010 adr      x8, #0xe4300
000E3A5C 1f2003d5 nop      
000E3A60 894b0010 adr      x9, #0xe43d0
000E3A64 e82710a9 stp      x8, x9, [sp, #0x100]
000E3A68 1f2003d5 nop      
000E3A6C 484b0010 adr      x8, #0xe43d4
000E3A70 1f2003d5 nop      
000E3A74 694b0010 adr      x9, #0xe43e0
000E3A78 e88b00f9 str      x8, [sp, #0x110]
000E3A7C 1f2003d5 nop      
000E3A80 684b0010 adr      x8, #0xe43ec
000E3A84 e80301f9 str      x8, [sp, #0x200]
000E3A88 1f2003d5 nop      
000E3A8C 884b0010 adr      x8, #0xe43fc
000E3A90 e80701f9 str      x8, [sp, #0x208]
000E3A94 1f2003d5 nop      
000E3A98 484b0010 adr      x8, #0xe4400
000E3A9C e80b01f9 str      x8, [sp, #0x210]
000E3AA0 1f2003d5 nop      
000E3AA4 484b0010 adr      x8, #0xe440c
000E3AA8 ffff18a9 stp      xzr, xzr, [sp, #0x188]
000E3AAC ff4b01f9 str      xzr, [sp, #0x290]
000E3AB0 ff4f01f9 str      xzr, [sp, #0x298]
000E3AB4 ff8301f9 str      xzr, [sp, #0x300]
000E3AB8 ff8701f9 str      xzr, [sp, #0x308]
000E3ABC ff8b01f9 str      xzr, [sp, #0x310]
000E3AC0 ff8f01f9 str      xzr, [sp, #0x318]
000E3AC4 ffc301f9 str      xzr, [sp, #0x380]
000E3AC8 ffc701f9 str      xzr, [sp, #0x388]
000E3ACC ffcb01f9 str      xzr, [sp, #0x390]
000E3AD0 ffcf01f9 str      xzr, [sp, #0x398]
000E3AD4 ff0702f9 str      xzr, [sp, #0x408]
000E3AD8 ff0302f9 str      xzr, [sp, #0x400]
000E3ADC ff1b02f9 str      xzr, [sp, #0x430]
000E3AE0 ff1f02f9 str      xzr, [sp, #0x438]
000E3AE4 ff2302f9 str      xzr, [sp, #0x440]
000E3AE8 ff2702f9 str      xzr, [sp, #0x448]
000E3AEC ff0f02f9 str      xzr, [sp, #0x418]
000E3AF0 ff1302f9 str      xzr, [sp, #0x420]
000E3AF4 ff2b04b9 str      wzr, [sp, #0x428]
000E3AF8 ff6302f9 str      xzr, [sp, #0x4c0]
000E3AFC ff6702f9 str      xzr, [sp, #0x4c8]
000E3B00 ff6b02f9 str      xzr, [sp, #0x4d0]
000E3B04 ff6f02f9 str      xzr, [sp, #0x4d8]
000E3B08 ffab02f9 str      xzr, [sp, #0x550]
000E3B0C ffaf02f9 str      xzr, [sp, #0x558]
000E3B10 ffb302f9 str      xzr, [sp, #0x560]
000E3B14 ffb702f9 str      xzr, [sp, #0x568]
000E3B18 ff531739 strb     wzr, [sp, #0x5d4]
000E3B1C f31300f9 str      x19, [sp, #0x20]
000E3B20 ffef02f9 str      xzr, [sp, #0x5d8]
000E3B24 f35300f9 str      x19, [sp, #0xa0]
000E3B28 ffc300f9 str      xzr, [sp, #0x180]
000E3B2C f31301f9 str      x19, [sp, #0x220]
000E3B30 ffcf00f9 str      xzr, [sp, #0x198]
000E3B34 e80f01f9 str      x8, [sp, #0x218]
000E3B38 e9cf11a9 stp      x9, x19, [sp, #0x118]
000E3B3C 940100b4 cbz      x20, #0xe3b6c
000E3B40 e00314aa mov      x0, x20
000E3B44 088c44f8 ldr      x8, [x0, #0x48]!
000E3B48 080940f9 ldr      x8, [x8, #0x10]
000E3B4C 00013fd6 blr      x8
000E3B50 e00342f9 ldr      x0, [sp, #0x400]
000E3B54 f40302f9 str      x20, [sp, #0x400]
000E3B58 c00000b4 cbz      x0, #0xe3b70
000E3B5C 088c44f8 ldr      x8, [x0, #0x48]!
000E3B60 080d40f9 ldr      x8, [x8, #0x18]
000E3B64 00013fd6 blr      x8
000E3B68 02000014 b        #0xe3b70
000E3B6C f40302f9 str      x20, [sp, #0x400]
000E3B70 c8e195d2 mov      x8, #0xaf0e
000E3B74 88d8a7f2 movk     x8, #0x3ec4, lsl #16
000E3B78 e888d1f2 movk     x8, #0x8c47, lsl #32
000E3B7C 68d0f7f2 movk     x8, #0xbe83, lsl #48
000E3B80 e80b02f9 str      x8, [sp, #0x410]
000E3B84 68820391 add      x8, x19, #0xe0
000E3B88 e80f02f9 str      x8, [sp, #0x418]
000E3B8C 68724339 ldrb     w8, [x19, #0xdc]
000E3B90 e82b04b9 str      w8, [sp, #0x428]
000E3B94 688640b9 ldr      w8, [x19, #0x84]
000E3B98 e8d305b9 str      w8, [sp, #0x5d0]
000E3B9C 683240f9 ldr      x8, [x19, #0x60]
000E3BA0 143140f9 ldr      x20, [x8, #0x60]
000E3BA4 880240f9 ldr      x8, [x20]
000E3BA8 e00314aa mov      x0, x20
000E3BAC 080140f9 ldr      x8, [x8]
000E3BB0 00013fd6 blr      x8
000E3BB4 f50300aa mov      x21, x0
000E3BB8 6909fd97 bl       #0x2615c
000E3BBC 1f0015eb cmp      x0, x21
000E3BC0 a0000054 b.eq     #0xe3bd4
000E3BC4 b50240f9 ldr      x21, [x21]
000E3BC8 bf0200eb cmp      x21, x0
000E3BCC a41a40fa ccmp     x21, #0, #4, ne
000E3BD0 a1ffff54 b.ne     #0xe3bc4
000E3BD4 81be42f9 ldr      x1, [x20, #0x578]
000E3BD8 202900f0 adrp     x0, #0x60a000
000E3BDC 00d43491 add      x0, x0, #0xd35
000E3BE0 e2030091 mov      x2, sp
000E3BE4 d34ffd97 bl       #0x37b30
000E3BE8 683240f9 ldr      x8, [x19, #0x60]
000E3BEC 133140f9 ldr      x19, [x8, #0x60]
000E3BF0 680240f9 ldr      x8, [x19]
000E3BF4 e00313aa mov      x0, x19
000E3BF8 080140f9 ldr      x8, [x8]
000E3BFC 00013fd6 blr      x8
000E3C00 f40300aa mov      x20, x0
000E3C04 5609fd97 bl       #0x2615c
000E3C08 1f0014eb cmp      x0, x20
000E3C0C a0000054 b.eq     #0xe3c20
000E3C10 940240f9 ldr      x20, [x20]
000E3C14 9f0200eb cmp      x20, x0
000E3C18 841a40fa ccmp     x20, #0, #4, ne
000E3C1C a1ffff54 b.ne     #0xe3c10
000E3C20 60be42f9 ldr      x0, [x19, #0x578]
000E3C24 286496d2 mov      x8, #0xb321
000E3C28 888abef2 movk     x8, #0xf454, lsl #16
000E3C2C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E3C30 28e8ecf2 movk     x8, #0x6741, lsl #48
000E3C34 892900d0 adrp     x9, #0x615000
000E3C38 29093191 add      x9, x9, #0xc42
000E3C3C a8273ea9 stp      x8, x9, [x29, #-0x20]
000E3C40 28018052 mov      w8, #9
000E3C44 a18300d1 sub      x1, x29, #0x20
000E3C48 a87f3fa9 stp      x8, xzr, [x29, #-0x10]
000E3C4C d9abfe97 bl       #0x8ebb0
000E3C50 f30300aa mov      x19, x0
000E3C54 a0835ff8 ldur     x0, [x29, #-8]
000E3C58 800000b4 cbz      x0, #0xe3c68
000E3C5C 088c44f8 ldr      x8, [x0, #0x48]!
000E3C60 080d40f9 ldr      x8, [x8, #0x18]
000E3C64 00013fd6 blr      x8
000E3C68 606a43f9 ldr      x0, [x19, #0x6d0]
000E3C6C fae0ff97 bl       #0xdc054
000E3C70 e0030091 mov      x0, sp
000E3C74 6e5bfd97 bl       #0x3aa2c
000E3C78 ff031891 add      sp, sp, #0x600
000E3C7C f44f42a9 ldp      x20, x19, [sp, #0x20]
000E3C80 fc5741a9 ldp      x28, x21, [sp, #0x10]
000E3C84 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000E3C88 c0035fd6 ret      
~~~
### 0xe4100 (52 slots)
~~~asm
000E4100 080040f9 ldr      x8, [x0]
000E4104 290040b9 ldr      w9, [x1]
000E4108 0a714339 ldrb     w10, [x8, #0xdc]
000E410C 3f010a6b cmp      w9, w10
000E4110 82000054 b.hs     #0xe4120
000E4114 0909098b add      x9, x8, x9, lsl #2
000E4118 298d40b9 ldr      w9, [x9, #0x8c]
000E411C 098500b9 str      w9, [x8, #0x84]
000E4120 ff0301d1 sub      sp, sp, #0x40
000E4124 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E4128 f44f03a9 stp      x20, x19, [sp, #0x30]
000E412C fd830091 add      x29, sp, #0x20
000E4130 083140f9 ldr      x8, [x8, #0x60]
000E4134 133140f9 ldr      x19, [x8, #0x60]
000E4138 680240f9 ldr      x8, [x19]
000E413C e00313aa mov      x0, x19
000E4140 080140f9 ldr      x8, [x8]
000E4144 00013fd6 blr      x8
000E4148 f40300aa mov      x20, x0
000E414C 0408fd97 bl       #0x2615c
000E4150 1f0014eb cmp      x0, x20
000E4154 e0000054 b.eq     #0xe4170
000E4158 1f2003d5 nop      
000E415C 1f2003d5 nop      
000E4160 940240f9 ldr      x20, [x20]
000E4164 9f0200eb cmp      x20, x0
000E4168 841a40fa ccmp     x20, #0, #4, ne
000E416C a1ffff54 b.ne     #0xe4160
000E4170 60be42f9 ldr      x0, [x19, #0x578]
000E4174 286496d2 mov      x8, #0xb321
000E4178 888abef2 movk     x8, #0xf454, lsl #16
000E417C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E4180 28e8ecf2 movk     x8, #0x6741, lsl #48
000E4184 892900b0 adrp     x9, #0x615000
000E4188 29093191 add      x9, x9, #0xc42
000E418C e82700a9 stp      x8, x9, [sp]
000E4190 28018052 mov      w8, #9
000E4194 e1030091 mov      x1, sp
000E4198 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E419C 85aafe97 bl       #0x8ebb0
000E41A0 f30300aa mov      x19, x0
000E41A4 e00f40f9 ldr      x0, [sp, #0x18]
000E41A8 800000b4 cbz      x0, #0xe41b8
000E41AC 088c44f8 ldr      x8, [x0, #0x48]!
000E41B0 080d40f9 ldr      x8, [x8, #0x18]
000E41B4 00013fd6 blr      x8
000E41B8 606a43f9 ldr      x0, [x19, #0x6d0]
000E41BC 54e1ff97 bl       #0xdc70c
000E41C0 f44f43a9 ldp      x20, x19, [sp, #0x30]
000E41C4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E41C8 ff030191 add      sp, sp, #0x40
000E41CC c0035fd6 ret      
~~~
### 0xe41f0 (59 slots)
~~~asm
000E41F0 ff4301d1 sub      sp, sp, #0x50
000E41F4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E41F8 f51b00f9 str      x21, [sp, #0x30]
000E41FC f44f04a9 stp      x20, x19, [sp, #0x40]
000E4200 fd830091 add      x29, sp, #0x20
000E4204 150040f9 ldr      x21, [x0]
000E4208 280040b9 ldr      w8, [x1]
000E420C a9024639 ldrb     w9, [x21, #0x180]
000E4210 89000034 cbz      w9, #0xe4220
000E4214 a98641b9 ldr      w9, [x21, #0x184]
000E4218 3f01086b cmp      w9, w8
000E421C 61050054 b.ne     #0xe42c8
000E4220 a9724339 ldrb     w9, [x21, #0xdc]
000E4224 bf020639 strb     wzr, [x21, #0x180]
000E4228 1f01096b cmp      w8, w9
000E422C 82000054 b.hs     #0xe423c
000E4230 a80a088b add      x8, x21, x8, lsl #2
000E4234 088d40b9 ldr      w8, [x8, #0x8c]
000E4238 a88600b9 str      w8, [x21, #0x84]
000E423C a83240f9 ldr      x8, [x21, #0x60]
000E4240 133140f9 ldr      x19, [x8, #0x60]
000E4244 680240f9 ldr      x8, [x19]
000E4248 e00313aa mov      x0, x19
000E424C 080140f9 ldr      x8, [x8]
000E4250 00013fd6 blr      x8
000E4254 f40300aa mov      x20, x0
000E4258 c107fd97 bl       #0x2615c
000E425C 1f0014eb cmp      x0, x20
000E4260 a0000054 b.eq     #0xe4274
000E4264 940240f9 ldr      x20, [x20]
000E4268 9f0200eb cmp      x20, x0
000E426C 841a40fa ccmp     x20, #0, #4, ne
000E4270 a1ffff54 b.ne     #0xe4264
000E4274 60be42f9 ldr      x0, [x19, #0x578]
000E4278 286496d2 mov      x8, #0xb321
000E427C 888abef2 movk     x8, #0xf454, lsl #16
000E4280 48c3c2f2 movk     x8, #0x161a, lsl #32
000E4284 28e8ecf2 movk     x8, #0x6741, lsl #48
000E4288 892900b0 adrp     x9, #0x615000
000E428C 29093191 add      x9, x9, #0xc42
000E4290 e82700a9 stp      x8, x9, [sp]
000E4294 28018052 mov      w8, #9
000E4298 e1030091 mov      x1, sp
000E429C e87f01a9 stp      x8, xzr, [sp, #0x10]
000E42A0 44aafe97 bl       #0x8ebb0
000E42A4 f30300aa mov      x19, x0
000E42A8 e00f40f9 ldr      x0, [sp, #0x18]
000E42AC 800000b4 cbz      x0, #0xe42bc
000E42B0 088c44f8 ldr      x8, [x0, #0x48]!
000E42B4 080d40f9 ldr      x8, [x8, #0x18]
000E42B8 00013fd6 blr      x8
000E42BC a18640b9 ldr      w1, [x21, #0x84]
000E42C0 606a43f9 ldr      x0, [x19, #0x6d0]
000E42C4 7fdfff97 bl       #0xdc0c0
000E42C8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E42CC f51b40f9 ldr      x21, [sp, #0x30]
000E42D0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E42D4 ff430191 add      sp, sp, #0x50
000E42D8 c0035fd6 ret      
~~~
### 0xe4300 (52 slots)
~~~asm
000E4300 ff4301d1 sub      sp, sp, #0x50
000E4304 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E4308 f51b00f9 str      x21, [sp, #0x30]
000E430C f44f04a9 stp      x20, x19, [sp, #0x40]
000E4310 fd830091 add      x29, sp, #0x20
000E4314 150040f9 ldr      x21, [x0]
000E4318 a88a40b9 ldr      w8, [x21, #0x88]
000E431C a88600b9 str      w8, [x21, #0x84]
000E4320 a83240f9 ldr      x8, [x21, #0x60]
000E4324 133140f9 ldr      x19, [x8, #0x60]
000E4328 680240f9 ldr      x8, [x19]
000E432C e00313aa mov      x0, x19
000E4330 080140f9 ldr      x8, [x8]
000E4334 00013fd6 blr      x8
000E4338 f40300aa mov      x20, x0
000E433C 8807fd97 bl       #0x2615c
000E4340 1f0014eb cmp      x0, x20
000E4344 e0000054 b.eq     #0xe4360
000E4348 1f2003d5 nop      
000E434C 1f2003d5 nop      
000E4350 940240f9 ldr      x20, [x20]
000E4354 9f0200eb cmp      x20, x0
000E4358 841a40fa ccmp     x20, #0, #4, ne
000E435C a1ffff54 b.ne     #0xe4350
000E4360 60be42f9 ldr      x0, [x19, #0x578]
000E4364 286496d2 mov      x8, #0xb321
000E4368 888abef2 movk     x8, #0xf454, lsl #16
000E436C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E4370 28e8ecf2 movk     x8, #0x6741, lsl #48
000E4374 892900b0 adrp     x9, #0x615000
000E4378 29093191 add      x9, x9, #0xc42
000E437C e82700a9 stp      x8, x9, [sp]
000E4380 28018052 mov      w8, #9
000E4384 e1030091 mov      x1, sp
000E4388 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E438C 09aafe97 bl       #0x8ebb0
000E4390 f30300aa mov      x19, x0
000E4394 e00f40f9 ldr      x0, [sp, #0x18]
000E4398 800000b4 cbz      x0, #0xe43a8
000E439C 088c44f8 ldr      x8, [x0, #0x48]!
000E43A0 080d40f9 ldr      x8, [x8, #0x18]
000E43A4 00013fd6 blr      x8
000E43A8 a18640b9 ldr      w1, [x21, #0x84]
000E43AC 606a43f9 ldr      x0, [x19, #0x6d0]
000E43B0 44dfff97 bl       #0xdc0c0
000E43B4 606a43f9 ldr      x0, [x19, #0x6d0]
000E43B8 d5e0ff97 bl       #0xdc70c
000E43BC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E43C0 f51b40f9 ldr      x21, [sp, #0x30]
000E43C4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E43C8 ff430191 add      sp, sp, #0x50
000E43CC c0035fd6 ret      
~~~
### 0xe4420 (205 slots)
~~~asm
000E4420 ff4301d1 sub      sp, sp, #0x50
000E4424 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E4428 f65703a9 stp      x22, x21, [sp, #0x30]
000E442C f44f04a9 stp      x20, x19, [sp, #0x40]
000E4430 fd830091 add      x29, sp, #0x20
000E4434 f30300aa mov      x19, x0
000E4438 e1290090 adrp     x1, #0x620000
000E443C 21d43591 add      x1, x1, #0xd75
000E4440 e0030091 mov      x0, sp
000E4444 e496fc97 bl       #0x9fd4
000E4448 603a40f9 ldr      x0, [x19, #0x70]
000E444C 800000b4 cbz      x0, #0xe445c
000E4450 088c44f8 ldr      x8, [x0, #0x48]!
000E4454 080d40f9 ldr      x8, [x8, #0x18]
000E4458 00013fd6 blr      x8
000E445C e80340f9 ldr      x8, [sp]
000E4460 683a00f9 str      x8, [x19, #0x70]
000E4464 91c9fe97 bl       #0x96aa8
000E4468 e8350090 adrp     x8, #0x7a0000
000E446C 01038052 mov      w1, #0x18
000E4470 088942f9 ldr      x8, [x8, #0x510]
000E4474 02018052 mov      w2, #8
000E4478 080140f9 ldr      x8, [x8]
000E447C 143540f9 ldr      x20, [x8, #0x68]
000E4480 880240f9 ldr      x8, [x20]
000E4484 e00314aa mov      x0, x20
000E4488 080940f9 ldr      x8, [x8, #0x10]
000E448C 00013fd6 blr      x8
000E4490 48d03bd5 mrs      x8, tpidr_el0
000E4494 16c97392 and      x22, x8, #0xffffffffffffe000
000E4498 c84e40f9 ldr      x8, [x22, #0x98]
000E449C 1f4100f1 cmp      x8, #0x10
000E44A0 80150054 b.eq     #0xe4750
000E44A4 c80e088b add      x8, x22, x8, lsl #3
000E44A8 e10314aa mov      x1, x20
000E44AC e2031faa mov      x2, xzr
000E44B0 f50300aa mov      x21, x0
000E44B4 140d00f9 str      x20, [x8, #0x18]
000E44B8 c84e40f9 ldr      x8, [x22, #0x98]
000E44BC 08050091 add      x8, x8, #1
000E44C0 c84e00f9 str      x8, [x22, #0x98]
000E44C4 b119ff97 bl       #0xaab88
000E44C8 c84e40f9 ldr      x8, [x22, #0x98]
000E44CC 080500d1 sub      x8, x8, #1
000E44D0 c84e00f9 str      x8, [x22, #0x98]
000E44D4 763e40f9 ldr      x22, [x19, #0x78]
000E44D8 753e00f9 str      x21, [x19, #0x78]
000E44DC 760100b4 cbz      x22, #0xe4508
000E44E0 c80240f9 ldr      x8, [x22]
000E44E4 e00316aa mov      x0, x22
000E44E8 080140f9 ldr      x8, [x8]
000E44EC 00013fd6 blr      x8
000E44F0 600a48a9 ldp      x0, x2, [x19, #0x80]
000E44F4 e10316aa mov      x1, x22
000E44F8 634a40f9 ldr      x3, [x19, #0x90]
000E44FC 080040f9 ldr      x8, [x0]
000E4500 080d40f9 ldr      x8, [x8, #0x18]
000E4504 00013fd6 blr      x8
000E4508 08038052 mov      w8, #0x18
000E450C 742208a9 stp      x20, x8, [x19, #0x80]
000E4510 08018052 mov      w8, #8
000E4514 684a00f9 str      x8, [x19, #0x90]
000E4518 683240f9 ldr      x8, [x19, #0x60]
000E451C 153140f9 ldr      x21, [x8, #0x60]
000E4520 a80240f9 ldr      x8, [x21]
000E4524 e00315aa mov      x0, x21
000E4528 080140f9 ldr      x8, [x8]
000E452C 00013fd6 blr      x8
000E4530 f60300aa mov      x22, x0
000E4534 0a07fd97 bl       #0x2615c
000E4538 1f0016eb cmp      x0, x22
000E453C a0000054 b.eq     #0xe4550
000E4540 d60240f9 ldr      x22, [x22]
000E4544 df0200eb cmp      x22, x0
000E4548 c41a40fa ccmp     x22, #0, #4, ne
000E454C a1ffff54 b.ne     #0xe4540
000E4550 a03640f9 ldr      x0, [x21, #0x68]
000E4554 e8030091 mov      x8, sp
000E4558 e1031f2a mov      w1, wzr
000E455C 5dc4fc97 bl       #0x156d0
000E4560 605640f9 ldr      x0, [x19, #0xa8]
000E4564 800000b4 cbz      x0, #0xe4574
000E4568 088c44f8 ldr      x8, [x0, #0x48]!
000E456C 080d40f9 ldr      x8, [x8, #0x18]
000E4570 00013fd6 blr      x8
000E4574 e80340f9 ldr      x8, [sp]
000E4578 685600f9 str      x8, [x19, #0xa8]
000E457C 683240f9 ldr      x8, [x19, #0x60]
000E4580 153140f9 ldr      x21, [x8, #0x60]
000E4584 a80240f9 ldr      x8, [x21]
000E4588 e00315aa mov      x0, x21
000E458C 080140f9 ldr      x8, [x8]
000E4590 00013fd6 blr      x8
000E4594 f60300aa mov      x22, x0
000E4598 f106fd97 bl       #0x2615c
000E459C 1f0016eb cmp      x0, x22
000E45A0 a0000054 b.eq     #0xe45b4
000E45A4 d60240f9 ldr      x22, [x22]
000E45A8 df0200eb cmp      x22, x0
000E45AC c41a40fa ccmp     x22, #0, #4, ne
000E45B0 a1ffff54 b.ne     #0xe45a4
000E45B4 a03640f9 ldr      x0, [x21, #0x68]
000E45B8 e8030091 mov      x8, sp
000E45BC 41008052 mov      w1, #2
000E45C0 44c4fc97 bl       #0x156d0
000E45C4 605a40f9 ldr      x0, [x19, #0xb0]
000E45C8 800000b4 cbz      x0, #0xe45d8
000E45CC 088c44f8 ldr      x8, [x0, #0x48]!
000E45D0 080d40f9 ldr      x8, [x8, #0x18]
000E45D4 00013fd6 blr      x8
000E45D8 e80340f9 ldr      x8, [sp]
000E45DC 685a00f9 str      x8, [x19, #0xb0]
000E45E0 683640f9 ldr      x8, [x19, #0x68]
000E45E4 680200b4 cbz      x8, #0xe4630
000E45E8 153140f9 ldr      x21, [x8, #0x60]
000E45EC 150200b4 cbz      x21, #0xe462c
000E45F0 a80240f9 ldr      x8, [x21]
000E45F4 e00315aa mov      x0, x21
000E45F8 080140f9 ldr      x8, [x8]
000E45FC 00013fd6 blr      x8
000E4600 f60300aa mov      x22, x0
000E4604 27a4fe97 bl       #0x8d6a0
000E4608 1f0016eb cmp      x0, x22
000E460C c0000054 b.eq     #0xe4624
000E4610 d60240f9 ldr      x22, [x22]
000E4614 df0200eb cmp      x22, x0
000E4618 c41a40fa ccmp     x22, #0, #4, ne
000E461C a1ffff54 b.ne     #0xe4610
000E4620 760000b4 cbz      x22, #0xe462c
000E4624 a84201d1 sub      x8, x21, #0x50
000E4628 02000014 b        #0xe4630
000E462C e8031faa mov      x8, xzr
000E4630 75f20291 add      x21, x19, #0xbc
000E4634 01c10691 add      x1, x8, #0x1b0
000E4638 e00315aa mov      x0, x21
000E463C b6defe97 bl       #0x9c114
000E4640 60720491 add      x0, x19, #0x11c
000E4644 e10315aa mov      x1, x21
000E4648 b3defe97 bl       #0x9c114
000E464C 683240f9 ldr      x8, [x19, #0x60]
000E4650 153140f9 ldr      x21, [x8, #0x60]
000E4654 a80240f9 ldr      x8, [x21]
000E4658 e00315aa mov      x0, x21
000E465C 080140f9 ldr      x8, [x8]
000E4660 00013fd6 blr      x8
000E4664 f60300aa mov      x22, x0
000E4668 bd06fd97 bl       #0x2615c
000E466C 1f0016eb cmp      x0, x22
000E4670 a0000054 b.eq     #0xe4684
000E4674 d60240f9 ldr      x22, [x22]
000E4678 df0200eb cmp      x22, x0
000E467C c41a40fa ccmp     x22, #0, #4, ne
000E4680 a1ffff54 b.ne     #0xe4674
000E4684 a0be42f9 ldr      x0, [x21, #0x578]
000E4688 286496d2 mov      x8, #0xb321
000E468C 888abef2 movk     x8, #0xf454, lsl #16
000E4690 48c3c2f2 movk     x8, #0x161a, lsl #32
000E4694 28e8ecf2 movk     x8, #0x6741, lsl #48
000E4698 892900b0 adrp     x9, #0x615000
000E469C 29093191 add      x9, x9, #0xc42
000E46A0 e82700a9 stp      x8, x9, [sp]
000E46A4 28018052 mov      w8, #9
000E46A8 e1030091 mov      x1, sp
000E46AC e87f01a9 stp      x8, xzr, [sp, #0x10]
000E46B0 40a9fe97 bl       #0x8ebb0
000E46B4 f50300aa mov      x21, x0
000E46B8 e00f40f9 ldr      x0, [sp, #0x18]
000E46BC 800000b4 cbz      x0, #0xe46cc
000E46C0 088c44f8 ldr      x8, [x0, #0x48]!
000E46C4 080d40f9 ldr      x8, [x8, #0x18]
000E46C8 00013fd6 blr      x8
000E46CC e00315aa mov      x0, x21
000E46D0 e1031f2a mov      w1, wzr
000E46D4 0ccaff97 bl       #0xd6f04
000E46D8 a06a43f9 ldr      x0, [x21, #0x6d0]
000E46DC 5edeff97 bl       #0xdc054
000E46E0 e00313aa mov      x0, x19
000E46E4 1c000094 bl       #0xe4754
000E46E8 e00313aa mov      x0, x19
000E46EC 71000094 bl       #0xe48b0
000E46F0 e1350090 adrp     x1, #0x7a0000
000E46F4 e8030091 mov      x8, sp
000E46F8 21f442f9 ldr      x1, [x1, #0x5e8]
000E46FC e00314aa mov      x0, x20
000E4700 b1dffd97 bl       #0x5c5c4
000E4704 60ee40f9 ldr      x0, [x19, #0x1d8]
000E4708 800000b4 cbz      x0, #0xe4718
000E470C 088c44f8 ldr      x8, [x0, #0x48]!
000E4710 080d40f9 ldr      x8, [x8, #0x18]
000E4714 00013fd6 blr      x8
000E4718 e80340f9 ldr      x8, [sp]
000E471C 68ee00f9 str      x8, [x19, #0x1d8]
000E4720 04d9fd97 bl       #0x5ab30
000E4724 082a00d0 adrp     x8, #0x626000
000E4728 08710691 add      x8, x8, #0x19c
000E472C 08d960b8 ldr      w8, [x8, w0, sxtw #2]
000E4730 e00313aa mov      x0, x19
000E4734 68ba00b9 str      w8, [x19, #0xb8]
000E4738 6a010094 bl       #0xe4ce0
000E473C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E4740 f65743a9 ldp      x22, x21, [sp, #0x30]
000E4744 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E4748 ff430191 add      sp, sp, #0x50
000E474C c0035fd6 ret      
000E4750 3079fc97 bl       #0x2c10
~~~
### 0xe51e0 (71 slots)
~~~asm
000E51E0 ff4301d1 sub      sp, sp, #0x50
000E51E4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E51E8 f51b00f9 str      x21, [sp, #0x30]
000E51EC f44f04a9 stp      x20, x19, [sp, #0x40]
000E51F0 fd830091 add      x29, sp, #0x20
000E51F4 083440f9 ldr      x8, [x0, #0x68]
000E51F8 f30300aa mov      x19, x0
000E51FC a80200b4 cbz      x8, #0xe5250
000E5200 143140f9 ldr      x20, [x8, #0x60]
000E5204 540200b4 cbz      x20, #0xe524c
000E5208 880240f9 ldr      x8, [x20]
000E520C e00314aa mov      x0, x20
000E5210 080140f9 ldr      x8, [x8]
000E5214 00013fd6 blr      x8
000E5218 f50300aa mov      x21, x0
000E521C 21a1fe97 bl       #0x8d6a0
000E5220 1f0015eb cmp      x0, x21
000E5224 00010054 b.eq     #0xe5244
000E5228 1f2003d5 nop      
000E522C 1f2003d5 nop      
000E5230 b50240f9 ldr      x21, [x21]
000E5234 bf0200eb cmp      x21, x0
000E5238 a41a40fa ccmp     x21, #0, #4, ne
000E523C a1ffff54 b.ne     #0xe5230
000E5240 750000b4 cbz      x21, #0xe524c
000E5244 884201d1 sub      x8, x20, #0x50
000E5248 02000014 b        #0xe5250
000E524C e8031faa mov      x8, xzr
000E5250 00c10691 add      x0, x8, #0x1b0
000E5254 61f20291 add      x1, x19, #0xbc
000E5258 afdbfe97 bl       #0x9c114
000E525C 683240f9 ldr      x8, [x19, #0x60]
000E5260 133140f9 ldr      x19, [x8, #0x60]
000E5264 680240f9 ldr      x8, [x19]
000E5268 e00313aa mov      x0, x19
000E526C 080140f9 ldr      x8, [x8]
000E5270 00013fd6 blr      x8
000E5274 f40300aa mov      x20, x0
000E5278 b903fd97 bl       #0x2615c
000E527C 1f0014eb cmp      x0, x20
000E5280 a0000054 b.eq     #0xe5294
000E5284 940240f9 ldr      x20, [x20]
000E5288 9f0200eb cmp      x20, x0
000E528C 841a40fa ccmp     x20, #0, #4, ne
000E5290 a1ffff54 b.ne     #0xe5284
000E5294 60be42f9 ldr      x0, [x19, #0x578]
000E5298 286496d2 mov      x8, #0xb321
000E529C 888abef2 movk     x8, #0xf454, lsl #16
000E52A0 48c3c2f2 movk     x8, #0x161a, lsl #32
000E52A4 28e8ecf2 movk     x8, #0x6741, lsl #48
000E52A8 89290090 adrp     x9, #0x615000
000E52AC 29093191 add      x9, x9, #0xc42
000E52B0 e82700a9 stp      x8, x9, [sp]
000E52B4 28018052 mov      w8, #9
000E52B8 e1030091 mov      x1, sp
000E52BC e87f01a9 stp      x8, xzr, [sp, #0x10]
000E52C0 3ca6fe97 bl       #0x8ebb0
000E52C4 f30300aa mov      x19, x0
000E52C8 e00f40f9 ldr      x0, [sp, #0x18]
000E52CC 800000b4 cbz      x0, #0xe52dc
000E52D0 088c44f8 ldr      x8, [x0, #0x48]!
000E52D4 080d40f9 ldr      x8, [x8, #0x18]
000E52D8 00013fd6 blr      x8
000E52DC e00313aa mov      x0, x19
000E52E0 21008052 mov      w1, #1
000E52E4 08c7ff97 bl       #0xd6f04
000E52E8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E52EC f51b40f9 ldr      x21, [sp, #0x30]
000E52F0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E52F4 ff430191 add      sp, sp, #0x50
000E52F8 c0035fd6 ret      
~~~
### 0xe5320 (44 slots)
~~~asm
000E5320 ff0301d1 sub      sp, sp, #0x40
000E5324 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E5328 f44f03a9 stp      x20, x19, [sp, #0x30]
000E532C fd830091 add      x29, sp, #0x20
000E5330 083040f9 ldr      x8, [x0, #0x60]
000E5334 133140f9 ldr      x19, [x8, #0x60]
000E5338 680240f9 ldr      x8, [x19]
000E533C e00313aa mov      x0, x19
000E5340 080140f9 ldr      x8, [x8]
000E5344 00013fd6 blr      x8
000E5348 f40300aa mov      x20, x0
000E534C 8403fd97 bl       #0x2615c
000E5350 1f0014eb cmp      x0, x20
000E5354 e0000054 b.eq     #0xe5370
000E5358 1f2003d5 nop      
000E535C 1f2003d5 nop      
000E5360 940240f9 ldr      x20, [x20]
000E5364 9f0200eb cmp      x20, x0
000E5368 841a40fa ccmp     x20, #0, #4, ne
000E536C a1ffff54 b.ne     #0xe5360
000E5370 60be42f9 ldr      x0, [x19, #0x578]
000E5374 286496d2 mov      x8, #0xb321
000E5378 888abef2 movk     x8, #0xf454, lsl #16
000E537C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E5380 28e8ecf2 movk     x8, #0x6741, lsl #48
000E5384 89290090 adrp     x9, #0x615000
000E5388 29093191 add      x9, x9, #0xc42
000E538C e82700a9 stp      x8, x9, [sp]
000E5390 28018052 mov      w8, #9
000E5394 e1030091 mov      x1, sp
000E5398 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E539C 05a6fe97 bl       #0x8ebb0
000E53A0 f30300aa mov      x19, x0
000E53A4 e00f40f9 ldr      x0, [sp, #0x18]
000E53A8 800000b4 cbz      x0, #0xe53b8
000E53AC 088c44f8 ldr      x8, [x0, #0x48]!
000E53B0 080d40f9 ldr      x8, [x8, #0x18]
000E53B4 00013fd6 blr      x8
000E53B8 606a43f9 ldr      x0, [x19, #0x6d0]
000E53BC d4dcff97 bl       #0xdc70c
000E53C0 f44f43a9 ldp      x20, x19, [sp, #0x30]
000E53C4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E53C8 ff030191 add      sp, sp, #0x40
000E53CC c0035fd6 ret      
~~~
### 0xe5550 (53 slots)
~~~asm
000E5550 ff4301d1 sub      sp, sp, #0x50
000E5554 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E5558 f65703a9 stp      x22, x21, [sp, #0x30]
000E555C f44f04a9 stp      x20, x19, [sp, #0x40]
000E5560 fd830091 add      x29, sp, #0x20
000E5564 13f00291 add      x19, x0, #0xbc
000E5568 f40300aa mov      x20, x0
000E556C e00313aa mov      x0, x19
000E5570 dedafe97 bl       #0x9c0e8
000E5574 883240f9 ldr      x8, [x20, #0x60]
000E5578 153140f9 ldr      x21, [x8, #0x60]
000E557C a80240f9 ldr      x8, [x21]
000E5580 e00315aa mov      x0, x21
000E5584 080140f9 ldr      x8, [x8]
000E5588 00013fd6 blr      x8
000E558C f60300aa mov      x22, x0
000E5590 f302fd97 bl       #0x2615c
000E5594 1f0016eb cmp      x0, x22
000E5598 c0000054 b.eq     #0xe55b0
000E559C 1f2003d5 nop      
000E55A0 d60240f9 ldr      x22, [x22]
000E55A4 df0200eb cmp      x22, x0
000E55A8 c41a40fa ccmp     x22, #0, #4, ne
000E55AC a1ffff54 b.ne     #0xe55a0
000E55B0 a0be42f9 ldr      x0, [x21, #0x578]
000E55B4 286496d2 mov      x8, #0xb321
000E55B8 888abef2 movk     x8, #0xf454, lsl #16
000E55BC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E55C0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E55C4 89290090 adrp     x9, #0x615000
000E55C8 29093191 add      x9, x9, #0xc42
000E55CC e82700a9 stp      x8, x9, [sp]
000E55D0 28018052 mov      w8, #9
000E55D4 e1030091 mov      x1, sp
000E55D8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E55DC 75a5fe97 bl       #0x8ebb0
000E55E0 f50300aa mov      x21, x0
000E55E4 e00f40f9 ldr      x0, [sp, #0x18]
000E55E8 800000b4 cbz      x0, #0xe55f8
000E55EC 088c44f8 ldr      x8, [x0, #0x48]!
000E55F0 080d40f9 ldr      x8, [x8, #0x18]
000E55F4 00013fd6 blr      x8
000E55F8 a06a43f9 ldr      x0, [x21, #0x6d0]
000E55FC e10313aa mov      x1, x19
000E5600 c8dbff97 bl       #0xdc520
000E5604 80720491 add      x0, x20, #0x11c
000E5608 e10313aa mov      x1, x19
000E560C c2dafe97 bl       #0x9c114
000E5610 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E5614 f65743a9 ldp      x22, x21, [sp, #0x30]
000E5618 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E561C ff430191 add      sp, sp, #0x50
000E5620 c0035fd6 ret      
~~~
### 0xe5630 (53 slots)
~~~asm
000E5630 ff4301d1 sub      sp, sp, #0x50
000E5634 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E5638 f65703a9 stp      x22, x21, [sp, #0x30]
000E563C f44f04a9 stp      x20, x19, [sp, #0x40]
000E5640 fd830091 add      x29, sp, #0x20
000E5644 13f00291 add      x19, x0, #0xbc
000E5648 f40300aa mov      x20, x0
000E564C e00313aa mov      x0, x19
000E5650 8edafe97 bl       #0x9c088
000E5654 883240f9 ldr      x8, [x20, #0x60]
000E5658 153140f9 ldr      x21, [x8, #0x60]
000E565C a80240f9 ldr      x8, [x21]
000E5660 e00315aa mov      x0, x21
000E5664 080140f9 ldr      x8, [x8]
000E5668 00013fd6 blr      x8
000E566C f60300aa mov      x22, x0
000E5670 bb02fd97 bl       #0x2615c
000E5674 1f0016eb cmp      x0, x22
000E5678 c0000054 b.eq     #0xe5690
000E567C 1f2003d5 nop      
000E5680 d60240f9 ldr      x22, [x22]
000E5684 df0200eb cmp      x22, x0
000E5688 c41a40fa ccmp     x22, #0, #4, ne
000E568C a1ffff54 b.ne     #0xe5680
000E5690 a0be42f9 ldr      x0, [x21, #0x578]
000E5694 286496d2 mov      x8, #0xb321
000E5698 888abef2 movk     x8, #0xf454, lsl #16
000E569C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E56A0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E56A4 89290090 adrp     x9, #0x615000
000E56A8 29093191 add      x9, x9, #0xc42
000E56AC e82700a9 stp      x8, x9, [sp]
000E56B0 28018052 mov      w8, #9
000E56B4 e1030091 mov      x1, sp
000E56B8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E56BC 3da5fe97 bl       #0x8ebb0
000E56C0 f50300aa mov      x21, x0
000E56C4 e00f40f9 ldr      x0, [sp, #0x18]
000E56C8 800000b4 cbz      x0, #0xe56d8
000E56CC 088c44f8 ldr      x8, [x0, #0x48]!
000E56D0 080d40f9 ldr      x8, [x8, #0x18]
000E56D4 00013fd6 blr      x8
000E56D8 a06a43f9 ldr      x0, [x21, #0x6d0]
000E56DC e10313aa mov      x1, x19
000E56E0 90dbff97 bl       #0xdc520
000E56E4 80720491 add      x0, x20, #0x11c
000E56E8 e10313aa mov      x1, x19
000E56EC 8adafe97 bl       #0x9c114
000E56F0 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E56F4 f65743a9 ldp      x22, x21, [sp, #0x30]
000E56F8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E56FC ff430191 add      sp, sp, #0x50
000E5700 c0035fd6 ret      
~~~
### 0xe6130 (46 slots)
~~~asm
000E6130 ff4301d1 sub      sp, sp, #0x50
000E6134 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E6138 f51b00f9 str      x21, [sp, #0x30]
000E613C f44f04a9 stp      x20, x19, [sp, #0x40]
000E6140 fd830091 add      x29, sp, #0x20
000E6144 083040f9 ldr      x8, [x0, #0x60]
000E6148 f30300aa mov      x19, x0
000E614C 143140f9 ldr      x20, [x8, #0x60]
000E6150 880240f9 ldr      x8, [x20]
000E6154 e00314aa mov      x0, x20
000E6158 080140f9 ldr      x8, [x8]
000E615C 00013fd6 blr      x8
000E6160 f50300aa mov      x21, x0
000E6164 fefffc97 bl       #0x2615c
000E6168 1f0015eb cmp      x0, x21
000E616C a0000054 b.eq     #0xe6180
000E6170 b50240f9 ldr      x21, [x21]
000E6174 bf0200eb cmp      x21, x0
000E6178 a41a40fa ccmp     x21, #0, #4, ne
000E617C a1ffff54 b.ne     #0xe6170
000E6180 80be42f9 ldr      x0, [x20, #0x578]
000E6184 286496d2 mov      x8, #0xb321
000E6188 888abef2 movk     x8, #0xf454, lsl #16
000E618C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E6190 28e8ecf2 movk     x8, #0x6741, lsl #48
000E6194 692900f0 adrp     x9, #0x615000
000E6198 29093191 add      x9, x9, #0xc42
000E619C e82700a9 stp      x8, x9, [sp]
000E61A0 28018052 mov      w8, #9
000E61A4 e1030091 mov      x1, sp
000E61A8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E61AC 81a2fe97 bl       #0x8ebb0
000E61B0 f40300aa mov      x20, x0
000E61B4 e00f40f9 ldr      x0, [sp, #0x18]
000E61B8 800000b4 cbz      x0, #0xe61c8
000E61BC 088c44f8 ldr      x8, [x0, #0x48]!
000E61C0 080d40f9 ldr      x8, [x8, #0x18]
000E61C4 00013fd6 blr      x8
000E61C8 806a43f9 ldr      x0, [x20, #0x6d0]
000E61CC 61f20291 add      x1, x19, #0xbc
000E61D0 d4d8ff97 bl       #0xdc520
000E61D4 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E61D8 f51b40f9 ldr      x21, [sp, #0x30]
000E61DC fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E61E0 ff430191 add      sp, sp, #0x50
000E61E4 c0035fd6 ret      
~~~
### 0xe63e0 (92 slots)
~~~asm
000E63E0 ff4301d1 sub      sp, sp, #0x50
000E63E4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E63E8 f65703a9 stp      x22, x21, [sp, #0x30]
000E63EC f44f04a9 stp      x20, x19, [sp, #0x40]
000E63F0 fd830091 add      x29, sp, #0x20
000E63F4 087c81b9 ldrsw    x8, [x0, #0x17c]
000E63F8 14f00291 add      x20, x0, #0xbc
000E63FC f30300aa mov      x19, x0
000E6400 08f57ed3 lsl      x8, x8, #2
000E6404 0900088b add      x9, x0, x8
000E6408 291d41b9 ldr      w9, [x9, #0x11c]
000E640C 896a28b8 str      w9, [x20, x8]
000E6410 083040f9 ldr      x8, [x0, #0x60]
000E6414 153140f9 ldr      x21, [x8, #0x60]
000E6418 a80240f9 ldr      x8, [x21]
000E641C e00315aa mov      x0, x21
000E6420 080140f9 ldr      x8, [x8]
000E6424 00013fd6 blr      x8
000E6428 f60300aa mov      x22, x0
000E642C 4cfffc97 bl       #0x2615c
000E6430 1f0016eb cmp      x0, x22
000E6434 e0000054 b.eq     #0xe6450
000E6438 1f2003d5 nop      
000E643C 1f2003d5 nop      
000E6440 d60240f9 ldr      x22, [x22]
000E6444 df0200eb cmp      x22, x0
000E6448 c41a40fa ccmp     x22, #0, #4, ne
000E644C a1ffff54 b.ne     #0xe6440
000E6450 a0be42f9 ldr      x0, [x21, #0x578]
000E6454 286496d2 mov      x8, #0xb321
000E6458 888abef2 movk     x8, #0xf454, lsl #16
000E645C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E6460 28e8ecf2 movk     x8, #0x6741, lsl #48
000E6464 692900f0 adrp     x9, #0x615000
000E6468 29093191 add      x9, x9, #0xc42
000E646C e82700a9 stp      x8, x9, [sp]
000E6470 28018052 mov      w8, #9
000E6474 e1030091 mov      x1, sp
000E6478 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E647C cda1fe97 bl       #0x8ebb0
000E6480 f50300aa mov      x21, x0
000E6484 e00f40f9 ldr      x0, [sp, #0x18]
000E6488 800000b4 cbz      x0, #0xe6498
000E648C 088c44f8 ldr      x8, [x0, #0x48]!
000E6490 080d40f9 ldr      x8, [x8, #0x18]
000E6494 00013fd6 blr      x8
000E6498 a06a43f9 ldr      x0, [x21, #0x6d0]
000E649C e10314aa mov      x1, x20
000E64A0 20d8ff97 bl       #0xdc520
000E64A4 683240f9 ldr      x8, [x19, #0x60]
000E64A8 143140f9 ldr      x20, [x8, #0x60]
000E64AC 880240f9 ldr      x8, [x20]
000E64B0 e00314aa mov      x0, x20
000E64B4 080140f9 ldr      x8, [x8]
000E64B8 00013fd6 blr      x8
000E64BC f50300aa mov      x21, x0
000E64C0 27fffc97 bl       #0x2615c
000E64C4 1f0015eb cmp      x0, x21
000E64C8 c0000054 b.eq     #0xe64e0
000E64CC 1f2003d5 nop      
000E64D0 b50240f9 ldr      x21, [x21]
000E64D4 bf0200eb cmp      x21, x0
000E64D8 a41a40fa ccmp     x21, #0, #4, ne
000E64DC a1ffff54 b.ne     #0xe64d0
000E64E0 80be42f9 ldr      x0, [x20, #0x578]
000E64E4 888c96d2 mov      x8, #0xb464
000E64E8 08dba2f2 movk     x8, #0x16d8, lsl #16
000E64EC 2857cbf2 movk     x8, #0x5ab9, lsl #32
000E64F0 a896eaf2 movk     x8, #0x54b5, lsl #48
000E64F4 892900b0 adrp     x9, #0x617000
000E64F8 29492f91 add      x9, x9, #0xbd2
000E64FC e82700a9 stp      x8, x9, [sp]
000E6500 68038052 mov      w8, #0x1b
000E6504 e1030091 mov      x1, sp
000E6508 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E650C c145fd97 bl       #0x37c10
000E6510 f40300aa mov      x20, x0
000E6514 e00f40f9 ldr      x0, [sp, #0x18]
000E6518 800000b4 cbz      x0, #0xe6528
000E651C 088c44f8 ldr      x8, [x0, #0x48]!
000E6520 080d40f9 ldr      x8, [x8, #0x18]
000E6524 00013fd6 blr      x8
000E6528 880240f9 ldr      x8, [x20]
000E652C e00314aa mov      x0, x20
000E6530 084940f9 ldr      x8, [x8, #0x90]
000E6534 00013fd6 blr      x8
000E6538 7f9a00b9 str      wzr, [x19, #0x98]
000E653C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E6540 f65743a9 ldp      x22, x21, [sp, #0x30]
000E6544 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E6548 ff430191 add      sp, sp, #0x50
000E654C c0035fd6 ret      
~~~
### 0xe7000 (54 slots)
~~~asm
000E7000 ff4301d1 sub      sp, sp, #0x50
000E7004 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E7008 f51b00f9 str      x21, [sp, #0x30]
000E700C f44f04a9 stp      x20, x19, [sp, #0x40]
000E7010 fd830091 add      x29, sp, #0x20
000E7014 08c8218b add      x8, x0, w1, sxtw #2
000E7018 0a008012 mov      w10, #-1
000E701C f30300aa mov      x19, x0
000E7020 090541b9 ldr      w9, [x8, #0x104]
000E7024 3f050071 cmp      w9, #1
000E7028 49c5891a csinc    w9, w10, w9, gt
000E702C 090501b9 str      w9, [x8, #0x104]
000E7030 083040f9 ldr      x8, [x0, #0x60]
000E7034 143140f9 ldr      x20, [x8, #0x60]
000E7038 880240f9 ldr      x8, [x20]
000E703C e00314aa mov      x0, x20
000E7040 080140f9 ldr      x8, [x8]
000E7044 00013fd6 blr      x8
000E7048 f50300aa mov      x21, x0
000E704C 44fcfc97 bl       #0x2615c
000E7050 1f0015eb cmp      x0, x21
000E7054 e0000054 b.eq     #0xe7070
000E7058 1f2003d5 nop      
000E705C 1f2003d5 nop      
000E7060 b50240f9 ldr      x21, [x21]
000E7064 bf0200eb cmp      x21, x0
000E7068 a41a40fa ccmp     x21, #0, #4, ne
000E706C a1ffff54 b.ne     #0xe7060
000E7070 80be42f9 ldr      x0, [x20, #0x578]
000E7074 286496d2 mov      x8, #0xb321
000E7078 888abef2 movk     x8, #0xf454, lsl #16
000E707C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E7080 28e8ecf2 movk     x8, #0x6741, lsl #48
000E7084 692900d0 adrp     x9, #0x615000
000E7088 29093191 add      x9, x9, #0xc42
000E708C e82700a9 stp      x8, x9, [sp]
000E7090 28018052 mov      w8, #9
000E7094 e1030091 mov      x1, sp
000E7098 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E709C c59efe97 bl       #0x8ebb0
000E70A0 f40300aa mov      x20, x0
000E70A4 e00f40f9 ldr      x0, [sp, #0x18]
000E70A8 800000b4 cbz      x0, #0xe70b8
000E70AC 088c44f8 ldr      x8, [x0, #0x48]!
000E70B0 080d40f9 ldr      x8, [x8, #0x18]
000E70B4 00013fd6 blr      x8
000E70B8 806a43f9 ldr      x0, [x20, #0x6d0]
000E70BC 61f20291 add      x1, x19, #0xbc
000E70C0 18d5ff97 bl       #0xdc520
000E70C4 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E70C8 f51b40f9 ldr      x21, [sp, #0x30]
000E70CC fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E70D0 ff430191 add      sp, sp, #0x50
000E70D4 c0035fd6 ret      
~~~
### 0xe71d0 (92 slots)
~~~asm
000E71D0 ff4301d1 sub      sp, sp, #0x50
000E71D4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E71D8 f51b00f9 str      x21, [sp, #0x30]
000E71DC f44f04a9 stp      x20, x19, [sp, #0x40]
000E71E0 fd830091 add      x29, sp, #0x20
000E71E4 09900591 add      x9, x0, #0x164
000E71E8 08100491 add      x8, x0, #0x104
000E71EC f30300aa mov      x19, x0
000E71F0 2a2d40a9 ldp      x10, x11, [x9]
000E71F4 290940f9 ldr      x9, [x9, #0x10]
000E71F8 0a2d00a9 stp      x10, x11, [x8]
000E71FC 090900f9 str      x9, [x8, #0x10]
000E7200 083040f9 ldr      x8, [x0, #0x60]
000E7204 143140f9 ldr      x20, [x8, #0x60]
000E7208 880240f9 ldr      x8, [x20]
000E720C e00314aa mov      x0, x20
000E7210 080140f9 ldr      x8, [x8]
000E7214 00013fd6 blr      x8
000E7218 f50300aa mov      x21, x0
000E721C d0fbfc97 bl       #0x2615c
000E7220 1f0015eb cmp      x0, x21
000E7224 e0000054 b.eq     #0xe7240
000E7228 1f2003d5 nop      
000E722C 1f2003d5 nop      
000E7230 b50240f9 ldr      x21, [x21]
000E7234 bf0200eb cmp      x21, x0
000E7238 a41a40fa ccmp     x21, #0, #4, ne
000E723C a1ffff54 b.ne     #0xe7230
000E7240 80be42f9 ldr      x0, [x20, #0x578]
000E7244 286496d2 mov      x8, #0xb321
000E7248 888abef2 movk     x8, #0xf454, lsl #16
000E724C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E7250 28e8ecf2 movk     x8, #0x6741, lsl #48
000E7254 692900d0 adrp     x9, #0x615000
000E7258 29093191 add      x9, x9, #0xc42
000E725C e82700a9 stp      x8, x9, [sp]
000E7260 28018052 mov      w8, #9
000E7264 e1030091 mov      x1, sp
000E7268 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E726C 519efe97 bl       #0x8ebb0
000E7270 f40300aa mov      x20, x0
000E7274 e00f40f9 ldr      x0, [sp, #0x18]
000E7278 800000b4 cbz      x0, #0xe7288
000E727C 088c44f8 ldr      x8, [x0, #0x48]!
000E7280 080d40f9 ldr      x8, [x8, #0x18]
000E7284 00013fd6 blr      x8
000E7288 806a43f9 ldr      x0, [x20, #0x6d0]
000E728C 61f20291 add      x1, x19, #0xbc
000E7290 a4d4ff97 bl       #0xdc520
000E7294 683240f9 ldr      x8, [x19, #0x60]
000E7298 143140f9 ldr      x20, [x8, #0x60]
000E729C 880240f9 ldr      x8, [x20]
000E72A0 e00314aa mov      x0, x20
000E72A4 080140f9 ldr      x8, [x8]
000E72A8 00013fd6 blr      x8
000E72AC f50300aa mov      x21, x0
000E72B0 abfbfc97 bl       #0x2615c
000E72B4 1f0015eb cmp      x0, x21
000E72B8 c0000054 b.eq     #0xe72d0
000E72BC 1f2003d5 nop      
000E72C0 b50240f9 ldr      x21, [x21]
000E72C4 bf0200eb cmp      x21, x0
000E72C8 a41a40fa ccmp     x21, #0, #4, ne
000E72CC a1ffff54 b.ne     #0xe72c0
000E72D0 80be42f9 ldr      x0, [x20, #0x578]
000E72D4 888c96d2 mov      x8, #0xb464
000E72D8 08dba2f2 movk     x8, #0x16d8, lsl #16
000E72DC 2857cbf2 movk     x8, #0x5ab9, lsl #32
000E72E0 a896eaf2 movk     x8, #0x54b5, lsl #48
000E72E4 89290090 adrp     x9, #0x617000
000E72E8 29492f91 add      x9, x9, #0xbd2
000E72EC e82700a9 stp      x8, x9, [sp]
000E72F0 68038052 mov      w8, #0x1b
000E72F4 e1030091 mov      x1, sp
000E72F8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E72FC 4542fd97 bl       #0x37c10
000E7300 f40300aa mov      x20, x0
000E7304 e00f40f9 ldr      x0, [sp, #0x18]
000E7308 800000b4 cbz      x0, #0xe7318
000E730C 088c44f8 ldr      x8, [x0, #0x48]!
000E7310 080d40f9 ldr      x8, [x8, #0x18]
000E7314 00013fd6 blr      x8
000E7318 880240f9 ldr      x8, [x20]
000E731C e00314aa mov      x0, x20
000E7320 084940f9 ldr      x8, [x8, #0x90]
000E7324 00013fd6 blr      x8
000E7328 7f9a00b9 str      wzr, [x19, #0x98]
000E732C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E7330 f51b40f9 ldr      x21, [sp, #0x30]
000E7334 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E7338 ff430191 add      sp, sp, #0x50
000E733C c0035fd6 ret      
~~~
### 0xe9340 (62 slots)
~~~asm
000E9340 ff4301d1 sub      sp, sp, #0x50
000E9344 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E9348 f51b00f9 str      x21, [sp, #0x30]
000E934C f44f04a9 stp      x20, x19, [sp, #0x40]
000E9350 fd830091 add      x29, sp, #0x20
000E9354 08804239 ldrb     w8, [x0, #0xa0]
000E9358 1f010071 cmp      w8, #0
000E935C 09a440b9 ldr      w9, [x0, #0xa4]
000E9360 2411417a ccmp     w9, w1, #4, ne
000E9364 a1050054 b.ne     #0xe9418
000E9368 287c0453 lsr      w8, w1, #4
000E936C 1f800239 strb     wzr, [x0, #0xa0]
000E9370 1f951171 cmp      w8, #0x465
000E9374 c2050054 b.hs     #0xe942c
000E9378 08c040f9 ldr      x8, [x0, #0x180]
000E937C 13f00291 add      x19, x0, #0xbc
000E9380 097c81b9 ldrsw    x9, [x0, #0x17c]
000E9384 085961b8 ldr      w8, [x8, w1, uxtw #2]
000E9388 687a29b8 str      w8, [x19, x9, lsl #2]
000E938C 083040f9 ldr      x8, [x0, #0x60]
000E9390 143140f9 ldr      x20, [x8, #0x60]
000E9394 880240f9 ldr      x8, [x20]
000E9398 e00314aa mov      x0, x20
000E939C 080140f9 ldr      x8, [x8]
000E93A0 00013fd6 blr      x8
000E93A4 f50300aa mov      x21, x0
000E93A8 6df3fc97 bl       #0x2615c
000E93AC 1f0015eb cmp      x0, x21
000E93B0 a0000054 b.eq     #0xe93c4
000E93B4 b50240f9 ldr      x21, [x21]
000E93B8 bf0200eb cmp      x21, x0
000E93BC a41a40fa ccmp     x21, #0, #4, ne
000E93C0 a1ffff54 b.ne     #0xe93b4
000E93C4 80be42f9 ldr      x0, [x20, #0x578]
000E93C8 286496d2 mov      x8, #0xb321
000E93CC 888abef2 movk     x8, #0xf454, lsl #16
000E93D0 48c3c2f2 movk     x8, #0x161a, lsl #32
000E93D4 28e8ecf2 movk     x8, #0x6741, lsl #48
000E93D8 69290090 adrp     x9, #0x615000
000E93DC 29093191 add      x9, x9, #0xc42
000E93E0 e82700a9 stp      x8, x9, [sp]
000E93E4 28018052 mov      w8, #9
000E93E8 e1030091 mov      x1, sp
000E93EC e87f01a9 stp      x8, xzr, [sp, #0x10]
000E93F0 f095fe97 bl       #0x8ebb0
000E93F4 f40300aa mov      x20, x0
000E93F8 e00f40f9 ldr      x0, [sp, #0x18]
000E93FC 800000b4 cbz      x0, #0xe940c
000E9400 088c44f8 ldr      x8, [x0, #0x48]!
000E9404 080d40f9 ldr      x8, [x8, #0x18]
000E9408 00013fd6 blr      x8
000E940C 806a43f9 ldr      x0, [x20, #0x6d0]
000E9410 e10313aa mov      x1, x19
000E9414 43ccff97 bl       #0xdc520
000E9418 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E941C f51b40f9 ldr      x21, [sp, #0x30]
000E9420 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E9424 ff430191 add      sp, sp, #0x50
000E9428 c0035fd6 ret      
000E942C 602900d0 adrp     x0, #0x617000
000E9430 00942d91 add      x0, x0, #0xb65
000E9434 53c3fc97 bl       #0x1a180
~~~
### 0xe9690 (62 slots)
~~~asm
000E9690 ff4301d1 sub      sp, sp, #0x50
000E9694 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E9698 f51b00f9 str      x21, [sp, #0x30]
000E969C f44f04a9 stp      x20, x19, [sp, #0x40]
000E96A0 fd830091 add      x29, sp, #0x20
000E96A4 08804239 ldrb     w8, [x0, #0xa0]
000E96A8 1f010071 cmp      w8, #0
000E96AC 09a440b9 ldr      w9, [x0, #0xa4]
000E96B0 2411417a ccmp     w9, w1, #4, ne
000E96B4 a1050054 b.ne     #0xe9768
000E96B8 287c0453 lsr      w8, w1, #4
000E96BC 1f800239 strb     wzr, [x0, #0xa0]
000E96C0 1f951171 cmp      w8, #0x465
000E96C4 c2050054 b.hs     #0xe977c
000E96C8 08d040f9 ldr      x8, [x0, #0x1a0]
000E96CC 13f00291 add      x19, x0, #0xbc
000E96D0 097c81b9 ldrsw    x9, [x0, #0x17c]
000E96D4 085961b8 ldr      w8, [x8, w1, uxtw #2]
000E96D8 687a29b8 str      w8, [x19, x9, lsl #2]
000E96DC 083040f9 ldr      x8, [x0, #0x60]
000E96E0 143140f9 ldr      x20, [x8, #0x60]
000E96E4 880240f9 ldr      x8, [x20]
000E96E8 e00314aa mov      x0, x20
000E96EC 080140f9 ldr      x8, [x8]
000E96F0 00013fd6 blr      x8
000E96F4 f50300aa mov      x21, x0
000E96F8 99f2fc97 bl       #0x2615c
000E96FC 1f0015eb cmp      x0, x21
000E9700 a0000054 b.eq     #0xe9714
000E9704 b50240f9 ldr      x21, [x21]
000E9708 bf0200eb cmp      x21, x0
000E970C a41a40fa ccmp     x21, #0, #4, ne
000E9710 a1ffff54 b.ne     #0xe9704
000E9714 80be42f9 ldr      x0, [x20, #0x578]
000E9718 286496d2 mov      x8, #0xb321
000E971C 888abef2 movk     x8, #0xf454, lsl #16
000E9720 48c3c2f2 movk     x8, #0x161a, lsl #32
000E9724 28e8ecf2 movk     x8, #0x6741, lsl #48
000E9728 69290090 adrp     x9, #0x615000
000E972C 29093191 add      x9, x9, #0xc42
000E9730 e82700a9 stp      x8, x9, [sp]
000E9734 28018052 mov      w8, #9
000E9738 e1030091 mov      x1, sp
000E973C e87f01a9 stp      x8, xzr, [sp, #0x10]
000E9740 1c95fe97 bl       #0x8ebb0
000E9744 f40300aa mov      x20, x0
000E9748 e00f40f9 ldr      x0, [sp, #0x18]
000E974C 800000b4 cbz      x0, #0xe975c
000E9750 088c44f8 ldr      x8, [x0, #0x48]!
000E9754 080d40f9 ldr      x8, [x8, #0x18]
000E9758 00013fd6 blr      x8
000E975C 806a43f9 ldr      x0, [x20, #0x6d0]
000E9760 e10313aa mov      x1, x19
000E9764 6fcbff97 bl       #0xdc520
000E9768 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E976C f51b40f9 ldr      x21, [sp, #0x30]
000E9770 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E9774 ff430191 add      sp, sp, #0x50
000E9778 c0035fd6 ret      
000E977C 602900d0 adrp     x0, #0x617000
000E9780 00942d91 add      x0, x0, #0xb65
000E9784 7fc2fc97 bl       #0x1a180
~~~
### 0xf9cf0 (161 slots)
~~~asm
000F9CF0 ffc301d1 sub      sp, sp, #0x70
000F9CF4 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F9CF8 f72300f9 str      x23, [sp, #0x40]
000F9CFC f65705a9 stp      x22, x21, [sp, #0x50]
000F9D00 f44f06a9 stp      x20, x19, [sp, #0x60]
000F9D04 fdc30091 add      x29, sp, #0x30
000F9D08 083440f9 ldr      x8, [x0, #0x68]
000F9D0C f30300aa mov      x19, x0
000F9D10 c80200b4 cbz      x8, #0xf9d68
000F9D14 143140f9 ldr      x20, [x8, #0x60]
000F9D18 940200b4 cbz      x20, #0xf9d68
000F9D1C 880240f9 ldr      x8, [x20]
000F9D20 e00314aa mov      x0, x20
000F9D24 080140f9 ldr      x8, [x8]
000F9D28 00013fd6 blr      x8
000F9D2C f50300aa mov      x21, x0
000F9D30 5c4efe97 bl       #0x8d6a0
000F9D34 1f0015eb cmp      x0, x21
000F9D38 e0000054 b.eq     #0xf9d54
000F9D3C 1f2003d5 nop      
000F9D40 b50240f9 ldr      x21, [x21]
000F9D44 bf0200eb cmp      x21, x0
000F9D48 a41a40fa ccmp     x21, #0, #4, ne
000F9D4C a1ffff54 b.ne     #0xf9d40
000F9D50 d50000b4 cbz      x21, #0xf9d68
000F9D54 974201d1 sub      x23, x20, #0x50
000F9D58 689240b9 ldr      w8, [x19, #0x90]
000F9D5C 1f0d0071 cmp      w8, #3
000F9D60 c9000054 b.ls     #0xf9d78
000F9D64 2d000014 b        #0xf9e18
000F9D68 f7031faa mov      x23, xzr
000F9D6C 689240b9 ldr      w8, [x19, #0x90]
000F9D70 1f0d0071 cmp      w8, #3
000F9D74 28050054 b.hi     #0xf9e18
000F9D78 692900b0 adrp     x9, #0x626000
000F9D7C 29553c91 add      x9, x9, #0xf15
000F9D80 8a000010 adr      x10, #0xf9d90
000F9D84 2b696838 ldrb     w11, [x9, x8]
000F9D88 4a090b8b add      x10, x10, x11, lsl #2
000F9D8C 40011fd6 br       x10
000F9D90 604640f9 ldr      x0, [x19, #0x88]
000F9D94 c326fd97 bl       #0x438a0
000F9D98 00040036 tbz      w0, #0, #0xf9e18
000F9D9C 689240b9 ldr      w8, [x19, #0x90]
000F9DA0 08050011 add      w8, w8, #1
000F9DA4 689200b9 str      w8, [x19, #0x90]
000F9DA8 744640f9 ldr      x20, [x19, #0x88]
000F9DAC 603e40f9 ldr      x0, [x19, #0x78]
000F9DB0 a00f00f9 str      x0, [x29, #0x18]
000F9DB4 800000b4 cbz      x0, #0xf9dc4
000F9DB8 088c44f8 ldr      x8, [x0, #0x48]!
000F9DBC 080940f9 ldr      x8, [x8, #0x10]
000F9DC0 00013fd6 blr      x8
000F9DC4 a1630091 add      x1, x29, #0x18
000F9DC8 e00314aa mov      x0, x20
000F9DCC ed27fd97 bl       #0x43d80
000F9DD0 f40300aa mov      x20, x0
000F9DD4 a00f40f9 ldr      x0, [x29, #0x18]
000F9DD8 a00000b4 cbz      x0, #0xf9dec
000F9DDC 088c44f8 ldr      x8, [x0, #0x48]!
000F9DE0 080d40f9 ldr      x8, [x8, #0x18]
000F9DE4 00013fd6 blr      x8
000F9DE8 bf0f00f9 str      xzr, [x29, #0x18]
000F9DEC 88066192 and      x8, x20, #0x180000000
000F9DF0 2900c0d2 mov      x9, #0x100000000
000F9DF4 1f0109eb cmp      x8, x9
000F9DF8 e1010054 b.ne     #0xf9e34
000F9DFC 603e40f9 ldr      x0, [x19, #0x78]
000F9E00 13e50f94 bl       #0x4f324c
000F9E04 80010034 cbz      w0, #0xf9e34
000F9E08 689240b9 ldr      w8, [x19, #0x90]
000F9E0C e0031f2a mov      w0, wzr
000F9E10 08050011 add      w8, w8, #1
000F9E14 0a000014 b        #0xf9e3c
000F9E18 e0031f2a mov      w0, wzr
000F9E1C f44f46a9 ldp      x20, x19, [sp, #0x60]
000F9E20 f72340f9 ldr      x23, [sp, #0x40]
000F9E24 f65745a9 ldp      x22, x21, [sp, #0x50]
000F9E28 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F9E2C ffc30191 add      sp, sp, #0x70
000F9E30 c0035fd6 ret      
000F9E34 68008052 mov      w8, #3
000F9E38 e0031f2a mov      w0, wzr
000F9E3C 689200b9 str      w8, [x19, #0x90]
000F9E40 f44f46a9 ldp      x20, x19, [sp, #0x60]
000F9E44 f72340f9 ldr      x23, [sp, #0x40]
000F9E48 f65745a9 ldp      x22, x21, [sp, #0x50]
000F9E4C fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F9E50 ffc30191 add      sp, sp, #0x70
000F9E54 c0035fd6 ret      
000F9E58 e03a40f9 ldr      x0, [x23, #0x70]
000F9E5C f4320691 add      x20, x23, #0x18c
000F9E60 e10314aa mov      x1, x20
000F9E64 d170fe97 bl       #0x961a8
000F9E68 600200b4 cbz      x0, #0xf9eb4
000F9E6C f50300aa mov      x21, x0
000F9E70 603e40f9 ldr      x0, [x19, #0x78]
000F9E74 e00700f9 str      x0, [sp, #8]
000F9E78 800000b4 cbz      x0, #0xf9e88
000F9E7C 088c44f8 ldr      x8, [x0, #0x48]!
000F9E80 080940f9 ldr      x8, [x8, #0x10]
000F9E84 00013fd6 blr      x8
000F9E88 e33a40f9 ldr      x3, [x23, #0x70]
000F9E8C e0230091 add      x0, sp, #8
000F9E90 e20315aa mov      x2, x21
000F9E94 61024239 ldrb     w1, [x19, #0x80]
000F9E98 b86cff97 bl       #0xd5178
000F9E9C e00740f9 ldr      x0, [sp, #8]
000F9EA0 a00000b4 cbz      x0, #0xf9eb4
000F9EA4 088c44f8 ldr      x8, [x0, #0x48]!
000F9EA8 080d40f9 ldr      x8, [x8, #0x18]
000F9EAC 00013fd6 blr      x8
000F9EB0 ff0700f9 str      xzr, [sp, #8]
000F9EB4 683240f9 ldr      x8, [x19, #0x60]
000F9EB8 153140f9 ldr      x21, [x8, #0x60]
000F9EBC a80240f9 ldr      x8, [x21]
000F9EC0 e00315aa mov      x0, x21
000F9EC4 080140f9 ldr      x8, [x8]
000F9EC8 00013fd6 blr      x8
000F9ECC f60300aa mov      x22, x0
000F9ED0 a3b0fc97 bl       #0x2615c
000F9ED4 1f0016eb cmp      x0, x22
000F9ED8 c0000054 b.eq     #0xf9ef0
000F9EDC 1f2003d5 nop      
000F9EE0 d60240f9 ldr      x22, [x22]
000F9EE4 df0200eb cmp      x22, x0
000F9EE8 c41a40fa ccmp     x22, #0, #4, ne
000F9EEC a1ffff54 b.ne     #0xf9ee0
000F9EF0 a0be42f9 ldr      x0, [x21, #0x578]
000F9EF4 88539bd2 mov      x8, #0xda9c
000F9EF8 2869b1f2 movk     x8, #0x8b49, lsl #16
000F9EFC e886cef2 movk     x8, #0x7437, lsl #32
000F9F00 e8a7eef2 movk     x8, #0x753f, lsl #48
000F9F04 e92800b0 adrp     x9, #0x616000
000F9F08 29511f91 add      x9, x9, #0x7d4
000F9F0C e82701a9 stp      x8, x9, [sp, #0x10]
000F9F10 08018052 mov      w8, #8
000F9F14 e1430091 add      x1, sp, #0x10
000F9F18 e87f02a9 stp      x8, xzr, [sp, #0x20]
000F9F1C 9952fe97 bl       #0x8e980
000F9F20 f50300aa mov      x21, x0
000F9F24 e01740f9 ldr      x0, [sp, #0x28]
000F9F28 800000b4 cbz      x0, #0xf9f38
000F9F2C 088c44f8 ldr      x8, [x0, #0x48]!
000F9F30 080d40f9 ldr      x8, [x8, #0x18]
000F9F34 00013fd6 blr      x8
000F9F38 810240b9 ldr      w1, [x20]
000F9F3C e00315aa mov      x0, x21
000F9F40 0326ff97 bl       #0xc374c
000F9F44 689240b9 ldr      w8, [x19, #0x90]
000F9F48 08050011 add      w8, w8, #1
000F9F4C 689200b9 str      w8, [x19, #0x90]
000F9F50 68008052 mov      w8, #3
000F9F54 20008052 mov      w0, #1
000F9F58 e8a203b9 str      w8, [x23, #0x3a0]
000F9F5C f44f46a9 ldp      x20, x19, [sp, #0x60]
000F9F60 f72340f9 ldr      x23, [sp, #0x40]
000F9F64 f65745a9 ldp      x22, x21, [sp, #0x50]
000F9F68 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F9F6C ffc30191 add      sp, sp, #0x70
000F9F70 c0035fd6 ret      
~~~
### 0xfa1b0 (292 slots)
~~~asm
000FA1B0 ff8301d1 sub      sp, sp, #0x60
000FA1B4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000FA1B8 f71b00f9 str      x23, [sp, #0x30]
000FA1BC f65704a9 stp      x22, x21, [sp, #0x40]
000FA1C0 f44f05a9 stp      x20, x19, [sp, #0x50]
000FA1C4 fd830091 add      x29, sp, #0x20
000FA1C8 083040f9 ldr      x8, [x0, #0x60]
000FA1CC f30300aa mov      x19, x0
000FA1D0 143140f9 ldr      x20, [x8, #0x60]
000FA1D4 880240f9 ldr      x8, [x20]
000FA1D8 e00314aa mov      x0, x20
000FA1DC 080140f9 ldr      x8, [x8]
000FA1E0 00013fd6 blr      x8
000FA1E4 f50300aa mov      x21, x0
000FA1E8 ddaffc97 bl       #0x2615c
000FA1EC 1f0015eb cmp      x0, x21
000FA1F0 a0000054 b.eq     #0xfa204
000FA1F4 b50240f9 ldr      x21, [x21]
000FA1F8 bf0200eb cmp      x21, x0
000FA1FC a41a40fa ccmp     x21, #0, #4, ne
000FA200 a1ffff54 b.ne     #0xfa1f4
000FA204 80be42f9 ldr      x0, [x20, #0x578]
000FA208 88539bd2 mov      x8, #0xda9c
000FA20C 2869b1f2 movk     x8, #0x8b49, lsl #16
000FA210 e886cef2 movk     x8, #0x7437, lsl #32
000FA214 e8a7eef2 movk     x8, #0x753f, lsl #48
000FA218 e9280090 adrp     x9, #0x616000
000FA21C 29511f91 add      x9, x9, #0x7d4
000FA220 e82700a9 stp      x8, x9, [sp]
000FA224 08018052 mov      w8, #8
000FA228 e1030091 mov      x1, sp
000FA22C e87f01a9 stp      x8, xzr, [sp, #0x10]
000FA230 d451fe97 bl       #0x8e980
000FA234 f40300aa mov      x20, x0
000FA238 e00f40f9 ldr      x0, [sp, #0x18]
000FA23C 800000b4 cbz      x0, #0xfa24c
000FA240 088c44f8 ldr      x8, [x0, #0x48]!
000FA244 080d40f9 ldr      x8, [x8, #0x18]
000FA248 00013fd6 blr      x8
000FA24C 746600f9 str      x20, [x19, #0xc8]
000FA250 741f00b4 cbz      x20, #0xfa63c
000FA254 804e43f9 ldr      x0, [x20, #0x698]
000FA258 e1031f2a mov      w1, wzr
000FA25C 3adefe97 bl       #0xb1b44
000FA260 683240f9 ldr      x8, [x19, #0x60]
000FA264 143140f9 ldr      x20, [x8, #0x60]
000FA268 880240f9 ldr      x8, [x20]
000FA26C e00314aa mov      x0, x20
000FA270 080140f9 ldr      x8, [x8]
000FA274 00013fd6 blr      x8
000FA278 f50300aa mov      x21, x0
000FA27C b8affc97 bl       #0x2615c
000FA280 1f0015eb cmp      x0, x21
000FA284 e0000054 b.eq     #0xfa2a0
000FA288 1f2003d5 nop      
000FA28C 1f2003d5 nop      
000FA290 b50240f9 ldr      x21, [x21]
000FA294 bf0200eb cmp      x21, x0
000FA298 a41a40fa ccmp     x21, #0, #4, ne
000FA29C a1ffff54 b.ne     #0xfa290
000FA2A0 80be42f9 ldr      x0, [x20, #0x578]
000FA2A4 48d199d2 mov      x8, #0xce8a
000FA2A8 6807b4f2 movk     x8, #0xa03b, lsl #16
000FA2AC a844c9f2 movk     x8, #0x4a25, lsl #32
000FA2B0 2860eff2 movk     x8, #0x7b01, lsl #48
000FA2B4 89280090 adrp     x9, #0x60a000
000FA2B8 29953491 add      x9, x9, #0xd25
000FA2BC e82700a9 stp      x8, x9, [sp]
000FA2C0 e8018052 mov      w8, #0xf
000FA2C4 e1030091 mov      x1, sp
000FA2C8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000FA2CC 3106fd97 bl       #0x3bb90
000FA2D0 f40300aa mov      x20, x0
000FA2D4 e00f40f9 ldr      x0, [sp, #0x18]
000FA2D8 800000b4 cbz      x0, #0xfa2e8
000FA2DC 088c44f8 ldr      x8, [x0, #0x48]!
000FA2E0 080d40f9 ldr      x8, [x8, #0x18]
000FA2E4 00013fd6 blr      x8
000FA2E8 746a00f9 str      x20, [x19, #0xd0]
000FA2EC 941a00b4 cbz      x20, #0xfa63c
000FA2F0 683240f9 ldr      x8, [x19, #0x60]
000FA2F4 143140f9 ldr      x20, [x8, #0x60]
000FA2F8 880240f9 ldr      x8, [x20]
000FA2FC e00314aa mov      x0, x20
000FA300 080140f9 ldr      x8, [x8]
000FA304 00013fd6 blr      x8
000FA308 f50300aa mov      x21, x0
000FA30C 94affc97 bl       #0x2615c
000FA310 1f0015eb cmp      x0, x21
000FA314 e0000054 b.eq     #0xfa330
000FA318 1f2003d5 nop      
000FA31C 1f2003d5 nop      
000FA320 b50240f9 ldr      x21, [x21]
000FA324 bf0200eb cmp      x21, x0
000FA328 a41a40fa ccmp     x21, #0, #4, ne
000FA32C a1ffff54 b.ne     #0xfa320
000FA330 80be42f9 ldr      x0, [x20, #0x578]
000FA334 488083d2 mov      x8, #0x1c02
000FA338 c81cb4f2 movk     x8, #0xa0e6, lsl #16
000FA33C 486dd7f2 movk     x8, #0xbb6a, lsl #32
000FA340 08a4f7f2 movk     x8, #0xbd20, lsl #48
000FA344 a92800d0 adrp     x9, #0x610000
000FA348 29e13791 add      x9, x9, #0xdf8
000FA34C e82700a9 stp      x8, x9, [sp]
000FA350 48028052 mov      w8, #0x12
000FA354 e1030091 mov      x1, sp
000FA358 e87f01a9 stp      x8, xzr, [sp, #0x10]
000FA35C 49140094 bl       #0xff480
000FA360 f40300aa mov      x20, x0
000FA364 e00f40f9 ldr      x0, [sp, #0x18]
000FA368 800000b4 cbz      x0, #0xfa378
000FA36C 088c44f8 ldr      x8, [x0, #0x48]!
000FA370 080d40f9 ldr      x8, [x8, #0x18]
000FA374 00013fd6 blr      x8
000FA378 746e00f9 str      x20, [x19, #0xd8]
000FA37C 141600b4 cbz      x20, #0xfa63c
000FA380 ca71fe97 bl       #0x96aa8
000FA384 283500d0 adrp     x8, #0x7a0000
000FA388 01038052 mov      w1, #0x18
000FA38C 088942f9 ldr      x8, [x8, #0x510]
000FA390 02018052 mov      w2, #8
000FA394 080140f9 ldr      x8, [x8]
000FA398 143540f9 ldr      x20, [x8, #0x68]
000FA39C 880240f9 ldr      x8, [x20]
000FA3A0 e00314aa mov      x0, x20
000FA3A4 080940f9 ldr      x8, [x8, #0x10]
000FA3A8 00013fd6 blr      x8
000FA3AC 48d03bd5 mrs      x8, tpidr_el0
000FA3B0 16c97392 and      x22, x8, #0xffffffffffffe000
000FA3B4 c84e40f9 ldr      x8, [x22, #0x98]
000FA3B8 1f4100f1 cmp      x8, #0x10
000FA3BC e0130054 b.eq     #0xfa638
000FA3C0 c80e088b add      x8, x22, x8, lsl #3
000FA3C4 e10314aa mov      x1, x20
000FA3C8 e2031faa mov      x2, xzr
000FA3CC f50300aa mov      x21, x0
000FA3D0 140d00f9 str      x20, [x8, #0x18]
000FA3D4 c84e40f9 ldr      x8, [x22, #0x98]
000FA3D8 08050091 add      x8, x8, #1
000FA3DC c84e00f9 str      x8, [x22, #0x98]
000FA3E0 eac1fe97 bl       #0xaab88
000FA3E4 c84e40f9 ldr      x8, [x22, #0x98]
000FA3E8 080500d1 sub      x8, x8, #1
000FA3EC c84e00f9 str      x8, [x22, #0x98]
000FA3F0 764240f9 ldr      x22, [x19, #0x80]
000FA3F4 754200f9 str      x21, [x19, #0x80]
000FA3F8 760100b4 cbz      x22, #0xfa424
000FA3FC c80240f9 ldr      x8, [x22]
000FA400 e00316aa mov      x0, x22
000FA404 080140f9 ldr      x8, [x8]
000FA408 00013fd6 blr      x8
000FA40C 608a48a9 ldp      x0, x2, [x19, #0x88]
000FA410 e10316aa mov      x1, x22
000FA414 634e40f9 ldr      x3, [x19, #0x98]
000FA418 080040f9 ldr      x8, [x0]
000FA41C 080d40f9 ldr      x8, [x8, #0x18]
000FA420 00013fd6 blr      x8
000FA424 08038052 mov      w8, #0x18
000FA428 74a208a9 stp      x20, x8, [x19, #0x88]
000FA42C 08018052 mov      w8, #8
000FA430 684e00f9 str      x8, [x19, #0x98]
000FA434 683240f9 ldr      x8, [x19, #0x60]
000FA438 143140f9 ldr      x20, [x8, #0x60]
000FA43C 880240f9 ldr      x8, [x20]
000FA440 e00314aa mov      x0, x20
000FA444 080140f9 ldr      x8, [x8]
000FA448 00013fd6 blr      x8
000FA44C f50300aa mov      x21, x0
000FA450 43affc97 bl       #0x2615c
000FA454 1f0015eb cmp      x0, x21
000FA458 c0000054 b.eq     #0xfa470
000FA45C 1f2003d5 nop      
000FA460 b50240f9 ldr      x21, [x21]
000FA464 bf0200eb cmp      x21, x0
000FA468 a41a40fa ccmp     x21, #0, #4, ne
000FA46C a1ffff54 b.ne     #0xfa460
000FA470 88be42f9 ldr      x8, [x20, #0x578]
000FA474 e1031f2a mov      w1, wzr
000FA478 005940f9 ldr      x0, [x8, #0xb0]
000FA47C e8030091 mov      x8, sp
000FA480 946cfc97 bl       #0x156d0
000FA484 605240f9 ldr      x0, [x19, #0xa0]
000FA488 800000b4 cbz      x0, #0xfa498
000FA48C 088c44f8 ldr      x8, [x0, #0x48]!
000FA490 080d40f9 ldr      x8, [x8, #0x18]
000FA494 00013fd6 blr      x8
000FA498 e80340f9 ldr      x8, [sp]
000FA49C 685200f9 str      x8, [x19, #0xa0]
000FA4A0 683640f9 ldr      x8, [x19, #0x68]
000FA4A4 c80200b4 cbz      x8, #0xfa4fc
000FA4A8 143140f9 ldr      x20, [x8, #0x60]
000FA4AC 940200b4 cbz      x20, #0xfa4fc
000FA4B0 880240f9 ldr      x8, [x20]
000FA4B4 e00314aa mov      x0, x20
000FA4B8 080140f9 ldr      x8, [x8]
000FA4BC 00013fd6 blr      x8
000FA4C0 f50300aa mov      x21, x0
000FA4C4 774cfe97 bl       #0x8d6a0
000FA4C8 1f0015eb cmp      x0, x21
000FA4CC c0000054 b.eq     #0xfa4e4
000FA4D0 b50240f9 ldr      x21, [x21]
000FA4D4 bf0200eb cmp      x21, x0
000FA4D8 a41a40fa ccmp     x21, #0, #4, ne
000FA4DC a1ffff54 b.ne     #0xfa4d0
000FA4E0 f50000b4 cbz      x21, #0xfa4fc
000FA4E4 974201d1 sub      x23, x20, #0x50
000FA4E8 f53a40f9 ldr      x21, [x23, #0x70]
000FA4EC f44a41f9 ldr      x20, [x23, #0x290]
000FA4F0 f40000b5 cbnz     x20, #0xfa50c
000FA4F4 bf0f00f9 str      xzr, [x29, #0x18]
000FA4F8 0f000014 b        #0xfa534
000FA4FC f7031faa mov      x23, xzr
000FA500 f53a40f9 ldr      x21, [x23, #0x70]
000FA504 f44a41f9 ldr      x20, [x23, #0x290]
000FA508 74ffffb4 cbz      x20, #0xfa4f4
000FA50C f60314aa mov      x22, x20
000FA510 c88e44f8 ldr      x8, [x22, #0x48]!
000FA514 e00316aa mov      x0, x22
000FA518 080940f9 ldr      x8, [x8, #0x10]
000FA51C 00013fd6 blr      x8
000FA520 c80240f9 ldr      x8, [x22]
000FA524 e00316aa mov      x0, x22
000FA528 b40f00f9 str      x20, [x29, #0x18]
000FA52C 080940f9 ldr      x8, [x8, #0x10]
000FA530 00013fd6 blr      x8
000FA534 e2920291 add      x2, x23, #0xa4
000FA538 a1630091 add      x1, x29, #0x18
000FA53C e00315aa mov      x0, x21
000FA540 e3031f2a mov      w3, wzr
000FA544 5b5cfe97 bl       #0x916b0
000FA548 a00f40f9 ldr      x0, [x29, #0x18]
000FA54C a00000b4 cbz      x0, #0xfa560
000FA550 088c44f8 ldr      x8, [x0, #0x48]!
000FA554 080d40f9 ldr      x8, [x8, #0x18]
000FA558 00013fd6 blr      x8
000FA55C bf0f00f9 str      xzr, [x29, #0x18]
000FA560 e00314aa mov      x0, x20
000FA564 72300494 bl       #0x20672c
000FA568 f603002a mov      w22, w0
000FA56C 171c0012 and      w23, w0, #0xff
000FA570 e00314aa mov      x0, x20
000FA574 94310494 bl       #0x206bc4
000FA578 37030034 cbz      w23, #0xfa5dc
000FA57C e1031f2a mov      w1, wzr
000FA580 f50300aa mov      x21, x0
000FA584 d4e11094 bl       #0x532cd4
000FA588 ff060071 cmp      w23, #1
000FA58C 60aa00b9 str      w0, [x19, #0xa8]
000FA590 60ba00b9 str      w0, [x19, #0xb8]
000FA594 80020054 b.eq     #0xfa5e4
000FA598 e00315aa mov      x0, x21
000FA59C 21008052 mov      w1, #1
000FA5A0 cde11094 bl       #0x532cd4
000FA5A4 d61e0012 and      w22, w22, #0xff
000FA5A8 60ae00b9 str      w0, [x19, #0xac]
000FA5AC df0a0071 cmp      w22, #2
000FA5B0 60be00b9 str      w0, [x19, #0xbc]
000FA5B4 c9010054 b.ls     #0xfa5ec
000FA5B8 e00315aa mov      x0, x21
000FA5BC 41008052 mov      w1, #2
000FA5C0 c5e11094 bl       #0x532cd4
000FA5C4 df0e0071 cmp      w22, #3
000FA5C8 60b200b9 str      w0, [x19, #0xb0]
000FA5CC 60c200b9 str      w0, [x19, #0xc0]
000FA5D0 c1020054 b.ne     #0xfa628
000FA5D4 e0031f2a mov      w0, wzr
000FA5D8 08000014 b        #0xfa5f8
000FA5DC 7faa00b9 str      wzr, [x19, #0xa8]
000FA5E0 7fba00b9 str      wzr, [x19, #0xb8]
000FA5E4 7fae00b9 str      wzr, [x19, #0xac]
000FA5E8 7fbe00b9 str      wzr, [x19, #0xbc]
000FA5EC e0031f2a mov      w0, wzr
000FA5F0 7fb200b9 str      wzr, [x19, #0xb0]
000FA5F4 7fc200b9 str      wzr, [x19, #0xc0]
000FA5F8 60b600b9 str      w0, [x19, #0xb4]
000FA5FC 60c600b9 str      w0, [x19, #0xc4]
000FA600 888e44f8 ldr      x8, [x20, #0x48]!
000FA604 e00314aa mov      x0, x20
000FA608 080d40f9 ldr      x8, [x8, #0x18]
000FA60C 00013fd6 blr      x8
000FA610 f44f45a9 ldp      x20, x19, [sp, #0x50]
000FA614 f71b40f9 ldr      x23, [sp, #0x30]
000FA618 f65744a9 ldp      x22, x21, [sp, #0x40]
000FA61C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000FA620 ff830191 add      sp, sp, #0x60
000FA624 c0035fd6 ret      
000FA628 e00315aa mov      x0, x21
000FA62C 61008052 mov      w1, #3
000FA630 a9e11094 bl       #0x532cd4
000FA634 f1ffff17 b        #0xfa5f8
000FA638 7621fc97 bl       #0x2c10
000FA63C 41ef1394 bl       #0x5f6340
~~~
### 0x105130 (107 slots)
~~~asm
00105130 ff4301d1 sub      sp, sp, #0x50
00105134 fd7b02a9 stp      x29, x30, [sp, #0x20]
00105138 f51b00f9 str      x21, [sp, #0x30]
0010513C f44f04a9 stp      x20, x19, [sp, #0x40]
00105140 fd830091 add      x29, sp, #0x20
00105144 280040b9 ldr      w8, [x1]
00105148 29008052 mov      w9, #1
0010514C f30300aa mov      x19, x0
00105150 140040f9 ldr      x20, [x0]
00105154 89220f29 stp      w9, w8, [x20, #0x78]
00105158 080440f9 ldr      x8, [x0, #8]
0010515C 000840f9 ldr      x0, [x0, #0x10]
00105160 01910291 add      x1, x8, #0xa4
00105164 463cfe97 bl       #0x9427c
00105168 887e40b9 ldr      w8, [x20, #0x7c]
0010516C 08050051 sub      w8, w8, #1
00105170 1f110071 cmp      w8, #4
00105174 68010054 b.hi     #0x1051a0
00105178 092900d0 adrp     x9, #0x627000
0010517C 29e10091 add      x9, x9, #0x38
00105180 22d968b8 ldr      w2, [x9, w8, sxtw #2]
00105184 1f00026b cmp      w0, w2
00105188 21010054 b.ne     #0x1051ac
0010518C f44f44a9 ldp      x20, x19, [sp, #0x40]
00105190 f51b40f9 ldr      x21, [sp, #0x30]
00105194 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00105198 ff430191 add      sp, sp, #0x50
0010519C c0035fd6 ret      
001051A0 c2008052 mov      w2, #6
001051A4 1f00026b cmp      w0, w2
001051A8 20ffff54 b.eq     #0x10518c
001051AC 688240a9 ldp      x8, x0, [x19, #8]
001051B0 01910291 add      x1, x8, #0xa4
001051B4 013cfe97 bl       #0x941b8
001051B8 688240a9 ldp      x8, x0, [x19, #8]
001051BC 01910291 add      x1, x8, #0xa4
001051C0 b440fe97 bl       #0x95490
001051C4 680640f9 ldr      x8, [x19, #8]
001051C8 09c941f9 ldr      x9, [x8, #0x390]
001051CC 690800b4 cbz      x9, #0x1052d8
001051D0 298d43f9 ldr      x9, [x9, #0x718]
001051D4 290800b4 cbz      x9, #0x1052d8
001051D8 202540f9 ldr      x0, [x9, #0x48]
001051DC e00700b4 cbz      x0, #0x1052d8
001051E0 01910291 add      x1, x8, #0xa4
001051E4 a9a0fe97 bl       #0xad488
001051E8 680640f9 ldr      x8, [x19, #8]
001051EC 09c941f9 ldr      x9, [x8, #0x390]
001051F0 490700b4 cbz      x9, #0x1052d8
001051F4 358d43f9 ldr      x21, [x9, #0x718]
001051F8 150700b4 cbz      x21, #0x1052d8
001051FC 004941f9 ldr      x0, [x8, #0x290]
00105200 640c0494 bl       #0x208390
00105204 1f080071 cmp      w0, #2
00105208 82060054 b.hs     #0x1052d8
0010520C 1f040071 cmp      w0, #1
00105210 e8079f1a cset     w8, ne
00105214 a816088b add      x8, x21, x8, lsl #5
00105218 003540f9 ldr      x0, [x8, #0x68]
0010521C e00500b4 cbz      x0, #0x1052d8
00105220 680640f9 ldr      x8, [x19, #8]
00105224 21008052 mov      w1, #1
00105228 020d5629 ldp      w2, w3, [x8, #0xb0]
0010522C 9ddcfe97 bl       #0xbc4a0
00105230 883240f9 ldr      x8, [x20, #0x60]
00105234 133140f9 ldr      x19, [x8, #0x60]
00105238 680240f9 ldr      x8, [x19]
0010523C e00313aa mov      x0, x19
00105240 080140f9 ldr      x8, [x8]
00105244 00013fd6 blr      x8
00105248 f40300aa mov      x20, x0
0010524C c483fc97 bl       #0x2615c
00105250 1f0014eb cmp      x0, x20
00105254 e0000054 b.eq     #0x105270
00105258 1f2003d5 nop      
0010525C 1f2003d5 nop      
00105260 940240f9 ldr      x20, [x20]
00105264 9f0200eb cmp      x20, x0
00105268 841a40fa ccmp     x20, #0, #4, ne
0010526C a1ffff54 b.ne     #0x105260
00105270 60be42f9 ldr      x0, [x19, #0x578]
00105274 286496d2 mov      x8, #0xb321
00105278 888abef2 movk     x8, #0xf454, lsl #16
0010527C 48c3c2f2 movk     x8, #0x161a, lsl #32
00105280 28e8ecf2 movk     x8, #0x6741, lsl #48
00105284 89280090 adrp     x9, #0x615000
00105288 29093191 add      x9, x9, #0xc42
0010528C e82700a9 stp      x8, x9, [sp]
00105290 28018052 mov      w8, #9
00105294 e1030091 mov      x1, sp
00105298 e87f01a9 stp      x8, xzr, [sp, #0x10]
0010529C 4526fe97 bl       #0x8ebb0
001052A0 f30300aa mov      x19, x0
001052A4 e00f40f9 ldr      x0, [sp, #0x18]
001052A8 800000b4 cbz      x0, #0x1052b8
001052AC 088c44f8 ldr      x8, [x0, #0x48]!
001052B0 080d40f9 ldr      x8, [x8, #0x18]
001052B4 00013fd6 blr      x8
001052B8 b3f6ffb4 cbz      x19, #0x10518c
001052BC e00313aa mov      x0, x19
001052C0 8547ff97 bl       #0xd70d4
001052C4 f44f44a9 ldp      x20, x19, [sp, #0x40]
001052C8 f51b40f9 ldr      x21, [sp, #0x30]
001052CC fd7b42a9 ldp      x29, x30, [sp, #0x20]
001052D0 ff430191 add      sp, sp, #0x50
001052D4 c0035fd6 ret      
001052D8 1ac41394 bl       #0x5f6340
~~~
### 0x14ca30 (356 slots)
~~~asm
0014CA30 ff0302d1 sub      sp, sp, #0x80
0014CA34 fd7b04a9 stp      x29, x30, [sp, #0x40]
0014CA38 f72b00f9 str      x23, [sp, #0x50]
0014CA3C f65706a9 stp      x22, x21, [sp, #0x60]
0014CA40 f44f07a9 stp      x20, x19, [sp, #0x70]
0014CA44 fd030191 add      x29, sp, #0x40
0014CA48 15401791 add      x21, x0, #0x5d0
0014CA4C 0240a052 mov      w2, #0x2000000
0014CA50 f30300aa mov      x19, x0
0014CA54 e10315aa mov      x1, x21
0014CA58 bc62fb97 bl       #0x25548
0014CA5C f40300aa mov      x20, x0
0014CA60 28008052 mov      w8, #1
0014CA64 e82300b9 str      w8, [sp, #0x20]
0014CA68 a1260090 adrp     x1, #0x620000
0014CA6C 21d80591 add      x1, x1, #0x176
0014CA70 e2830091 add      x2, sp, #0x20
0014CA74 e00315aa mov      x0, x21
0014CA78 0302a052 mov      w3, #0x100000
0014CA7C 51010094 bl       #0x14cfc0
0014CA80 e00313aa mov      x0, x19
0014CA84 c662fb97 bl       #0x2559c
0014CA88 e8830091 add      x8, sp, #0x20
0014CA8C 91d5fc97 bl       #0x820d0
0014CA90 60e642f9 ldr      x0, [x19, #0x5c8]
0014CA94 800000b4 cbz      x0, #0x14caa4
0014CA98 088c44f8 ldr      x8, [x0, #0x48]!
0014CA9C 080d40f9 ldr      x8, [x8, #0x18]
0014CAA0 00013fd6 blr      x8
0014CAA4 f71340f9 ldr      x23, [sp, #0x20]
0014CAA8 77e602f9 str      x23, [x19, #0x5c8]
0014CAAC 759e41f9 ldr      x21, [x19, #0x338]
0014CAB0 550100b4 cbz      x21, #0x14cad8
0014CAB4 f60315aa mov      x22, x21
0014CAB8 c88e44f8 ldr      x8, [x22, #0x48]!
0014CABC e00316aa mov      x0, x22
0014CAC0 080940f9 ldr      x8, [x8, #0x10]
0014CAC4 00013fd6 blr      x8
0014CAC8 c80240f9 ldr      x8, [x22]
0014CACC e00316aa mov      x0, x22
0014CAD0 080940f9 ldr      x8, [x8, #0x10]
0014CAD4 00013fd6 blr      x8
0014CAD8 e02e40f9 ldr      x0, [x23, #0x58]
0014CADC f52e00f9 str      x21, [x23, #0x58]
0014CAE0 800000b4 cbz      x0, #0x14caf0
0014CAE4 088c44f8 ldr      x8, [x0, #0x48]!
0014CAE8 080d40f9 ldr      x8, [x8, #0x18]
0014CAEC 00013fd6 blr      x8
0014CAF0 b50000b4 cbz      x21, #0x14cb04
0014CAF4 a88e44f8 ldr      x8, [x21, #0x48]!
0014CAF8 e00315aa mov      x0, x21
0014CAFC 080d40f9 ldr      x8, [x8, #0x18]
0014CB00 00013fd6 blr      x8
0014CB04 75e642f9 ldr      x21, [x19, #0x5c8]
0014CB08 350100b4 cbz      x21, #0x14cb2c
0014CB0C a88e44f8 ldr      x8, [x21, #0x48]!
0014CB10 e00315aa mov      x0, x21
0014CB14 080940f9 ldr      x8, [x8, #0x10]
0014CB18 00013fd6 blr      x8
0014CB1C a80240f9 ldr      x8, [x21]
0014CB20 e00315aa mov      x0, x21
0014CB24 080d40f9 ldr      x8, [x8, #0x18]
0014CB28 00013fd6 blr      x8
0014CB2C e00313aa mov      x0, x19
0014CB30 bc010094 bl       #0x14d220
0014CB34 683245f9 ldr      x8, [x19, #0xa60]
0014CB38 a80500b4 cbz      x8, #0x14cbec
0014CB3C 60a641f9 ldr      x0, [x19, #0x348]
0014CB40 080040f9 ldr      x8, [x0]
0014CB44 090940f9 ldr      x9, [x8, #0x10]
0014CB48 e8830091 add      x8, sp, #0x20
0014CB4C 20013fd6 blr      x9
0014CB50 f51340f9 ldr      x21, [sp, #0x20]
0014CB54 552300b4 cbz      x21, #0x14cfbc
0014CB58 b63240f9 ldr      x22, [x21, #0x60]
0014CB5C f60100b4 cbz      x22, #0x14cb98
0014CB60 c80240f9 ldr      x8, [x22]
0014CB64 e00316aa mov      x0, x22
0014CB68 080140f9 ldr      x8, [x8]
0014CB6C 00013fd6 blr      x8
0014CB70 f70300aa mov      x23, x0
0014CB74 dd030094 bl       #0x14dae8
0014CB78 1f0017eb cmp      x0, x23
0014CB7C c0000054 b.eq     #0x14cb94
0014CB80 f70240f9 ldr      x23, [x23]
0014CB84 ff0200eb cmp      x23, x0
0014CB88 e41a40fa ccmp     x23, #0, #4, ne
0014CB8C a1ffff54 b.ne     #0x14cb80
0014CB90 b72000b4 cbz      x23, #0x14cfa4
0014CB94 d64201d1 sub      x22, x22, #0x50
0014CB98 a88e44f8 ldr      x8, [x21, #0x48]!
0014CB9C e00315aa mov      x0, x21
0014CBA0 080d40f9 ldr      x8, [x8, #0x18]
0014CBA4 00013fd6 blr      x8
0014CBA8 b62000b4 cbz      x22, #0x14cfbc
0014CBAC 603245f9 ldr      x0, [x19, #0xa60]
0014CBB0 a00f00f9 str      x0, [x29, #0x18]
0014CBB4 800000b4 cbz      x0, #0x14cbc4
0014CBB8 088c44f8 ldr      x8, [x0, #0x48]!
0014CBBC 080940f9 ldr      x8, [x8, #0x10]
0014CBC0 00013fd6 blr      x8
0014CBC4 626a4ab9 ldr      w2, [x19, #0xa68]
0014CBC8 a1630091 add      x1, x29, #0x18
0014CBCC e00316aa mov      x0, x22
0014CBD0 6d080094 bl       #0x14ed84
0014CBD4 a00f40f9 ldr      x0, [x29, #0x18]
0014CBD8 a00000b4 cbz      x0, #0x14cbec
0014CBDC 088c44f8 ldr      x8, [x0, #0x48]!
0014CBE0 080d40f9 ldr      x8, [x8, #0x18]
0014CBE4 00013fd6 blr      x8
0014CBE8 bf0f00f9 str      xzr, [x29, #0x18]
0014CBEC e00313aa mov      x0, x19
0014CBF0 abd3fc97 bl       #0x81a9c
0014CBF4 e00313aa mov      x0, x19
0014CBF8 36d4fc97 bl       #0x81cd0
0014CBFC 605e40f9 ldr      x0, [x19, #0xb8]
0014CC00 e88795d2 mov      x8, #0xac3f
0014CC04 e81caef2 movk     x8, #0x70e7, lsl #16
0014CC08 686dd5f2 movk     x8, #0xab6b, lsl #32
0014CC0C 089ef2f2 movk     x8, #0x94f0, lsl #48
0014CC10 692600b0 adrp     x9, #0x619000
0014CC14 29753d91 add      x9, x9, #0xf5d
0014CC18 e82702a9 stp      x8, x9, [sp, #0x20]
0014CC1C 88038052 mov      w8, #0x1c
0014CC20 e87f03a9 stp      x8, xzr, [sp, #0x30]
0014CC24 200100b4 cbz      x0, #0x14cc48
0014CC28 62018052 mov      w2, #0xb
0014CC2C e1830091 add      x1, sp, #0x20
0014CC30 0922fb97 bl       #0x15454
0014CC34 e01f40f9 ldr      x0, [sp, #0x38]
0014CC38 800000b4 cbz      x0, #0x14cc48
0014CC3C 088c44f8 ldr      x8, [x0, #0x48]!
0014CC40 080d40f9 ldr      x8, [x8, #0x18]
0014CC44 00013fd6 blr      x8
0014CC48 605e40f9 ldr      x0, [x19, #0xb8]
0014CC4C c8789ad2 mov      x8, #0xd3c6
0014CC50 68dbb4f2 movk     x8, #0xa6db, lsl #16
0014CC54 2828caf2 movk     x8, #0x5141, lsl #32
0014CC58 a89de9f2 movk     x8, #0x4ced, lsl #48
0014CC5C 892600f0 adrp     x9, #0x61f000
0014CC60 29e10891 add      x9, x9, #0x238
0014CC64 e82702a9 stp      x8, x9, [sp, #0x20]
0014CC68 48038052 mov      w8, #0x1a
0014CC6C e87f03a9 stp      x8, xzr, [sp, #0x30]
0014CC70 200100b4 cbz      x0, #0x14cc94
0014CC74 62018052 mov      w2, #0xb
0014CC78 e1830091 add      x1, sp, #0x20
0014CC7C f621fb97 bl       #0x15454
0014CC80 e01f40f9 ldr      x0, [sp, #0x38]
0014CC84 800000b4 cbz      x0, #0x14cc94
0014CC88 088c44f8 ldr      x8, [x0, #0x48]!
0014CC8C 080d40f9 ldr      x8, [x8, #0x18]
0014CC90 00013fd6 blr      x8
0014CC94 e00314aa mov      x0, x20
0014CC98 26e2fe97 bl       #0x105530
0014CC9C 74e642f9 ldr      x20, [x19, #0x5c8]
0014CCA0 802e40f9 ldr      x0, [x20, #0x58]
0014CCA4 e01300f9 str      x0, [sp, #0x20]
0014CCA8 800000b4 cbz      x0, #0x14ccb8
0014CCAC 088c44f8 ldr      x8, [x0, #0x48]!
0014CCB0 080940f9 ldr      x8, [x8, #0x10]
0014CCB4 00013fd6 blr      x8
0014CCB8 432600d0 adrp     x3, #0x616000
0014CCBC 63501f91 add      x3, x3, #0x7d4
0014CCC0 e8630091 add      x8, sp, #0x18
0014CCC4 e1830091 add      x1, sp, #0x20
0014CCC8 e00314aa mov      x0, x20
0014CCCC e2031faa mov      x2, xzr
0014CCD0 d0030094 bl       #0x14dc10
0014CCD4 e01340f9 ldr      x0, [sp, #0x20]
0014CCD8 800000b4 cbz      x0, #0x14cce8
0014CCDC 088c44f8 ldr      x8, [x0, #0x48]!
0014CCE0 080d40f9 ldr      x8, [x8, #0x18]
0014CCE4 00013fd6 blr      x8
0014CCE8 74e642f9 ldr      x20, [x19, #0x5c8]
0014CCEC f50f40f9 ldr      x21, [sp, #0x18]
0014CCF0 802e40f9 ldr      x0, [x20, #0x58]
0014CCF4 e01300f9 str      x0, [sp, #0x20]
0014CCF8 800000b4 cbz      x0, #0x14cd08
0014CCFC 088c44f8 ldr      x8, [x0, #0x48]!
0014CD00 080940f9 ldr      x8, [x8, #0x10]
0014CD04 00013fd6 blr      x8
0014CD08 e32500d0 adrp     x3, #0x60a000
0014CD0C 63a43891 add      x3, x3, #0xe29
0014CD10 e8430091 add      x8, sp, #0x10
0014CD14 e1830091 add      x1, sp, #0x20
0014CD18 e00314aa mov      x0, x20
0014CD1C e2031faa mov      x2, xzr
0014CD20 cf040094 bl       #0x14e05c
0014CD24 e01340f9 ldr      x0, [sp, #0x20]
0014CD28 800000b4 cbz      x0, #0x14cd38
0014CD2C 088c44f8 ldr      x8, [x0, #0x48]!
0014CD30 080d40f9 ldr      x8, [x8, #0x18]
0014CD34 00013fd6 blr      x8
0014CD38 f40b40f9 ldr      x20, [sp, #0x10]
0014CD3C b40000b4 cbz      x20, #0x14cd50
0014CD40 e00314aa mov      x0, x20
0014CD44 088c44f8 ldr      x8, [x0, #0x48]!
0014CD48 080940f9 ldr      x8, [x8, #0x10]
0014CD4C 00013fd6 blr      x8
0014CD50 a03e43f9 ldr      x0, [x21, #0x678]
0014CD54 b43e03f9 str      x20, [x21, #0x678]
0014CD58 800000b4 cbz      x0, #0x14cd68
0014CD5C 088c44f8 ldr      x8, [x0, #0x48]!
0014CD60 080d40f9 ldr      x8, [x8, #0x18]
0014CD64 00013fd6 blr      x8
0014CD68 e00b40f9 ldr      x0, [sp, #0x10]
0014CD6C a00000b4 cbz      x0, #0x14cd80
0014CD70 088c44f8 ldr      x8, [x0, #0x48]!
0014CD74 080d40f9 ldr      x8, [x8, #0x18]
0014CD78 00013fd6 blr      x8
0014CD7C ff0b00f9 str      xzr, [sp, #0x10]
0014CD80 60a641f9 ldr      x0, [x19, #0x348]
0014CD84 f70f40f9 ldr      x23, [sp, #0x18]
0014CD88 080040f9 ldr      x8, [x0]
0014CD8C 090940f9 ldr      x9, [x8, #0x10]
0014CD90 e8830091 add      x8, sp, #0x20
0014CD94 20013fd6 blr      x9
0014CD98 f41340f9 ldr      x20, [sp, #0x20]
0014CD9C 141100b4 cbz      x20, #0x14cfbc
0014CDA0 953240f9 ldr      x21, [x20, #0x60]
0014CDA4 350200b4 cbz      x21, #0x14cde8
0014CDA8 a80240f9 ldr      x8, [x21]
0014CDAC e00315aa mov      x0, x21
0014CDB0 080140f9 ldr      x8, [x8]
0014CDB4 00013fd6 blr      x8
0014CDB8 f60300aa mov      x22, x0
0014CDBC 4b030094 bl       #0x14dae8
0014CDC0 1f0016eb cmp      x0, x22
0014CDC4 00010054 b.eq     #0x14cde4
0014CDC8 1f2003d5 nop      
0014CDCC 1f2003d5 nop      
0014CDD0 d60240f9 ldr      x22, [x22]
0014CDD4 df0200eb cmp      x22, x0
0014CDD8 c41a40fa ccmp     x22, #0, #4, ne
0014CDDC a1ffff54 b.ne     #0x14cdd0
0014CDE0 760c00b4 cbz      x22, #0x14cf6c
0014CDE4 b54201d1 sub      x21, x21, #0x50
0014CDE8 888e44f8 ldr      x8, [x20, #0x48]!
0014CDEC e00314aa mov      x0, x20
0014CDF0 080d40f9 ldr      x8, [x8, #0x18]
0014CDF4 00013fd6 blr      x8
0014CDF8 350e00b4 cbz      x21, #0x14cfbc
0014CDFC f52203f9 str      x21, [x23, #0x640]
0014CE00 603245f9 ldr      x0, [x19, #0xa60]
0014CE04 400000b4 cbz      x0, #0x14ce0c
0014CE08 4c3bfd97 bl       #0x9bb38
0014CE0C e80f40f9 ldr      x8, [sp, #0x18]
0014CE10 00ed06b9 str      w0, [x8, #0x6ec]
0014CE14 a83200b0 adrp     x8, #0x7a1000
0014CE18 802600d0 adrp     x0, #0x61e000
0014CE1C 00e80e91 add      x0, x0, #0x3ba
0014CE20 083943f9 ldr      x8, [x8, #0x670]
0014CE24 61e642f9 ldr      x1, [x19, #0x5c8]
0014CE28 080140f9 ldr      x8, [x8]
0014CE2C 021540f9 ldr      x2, [x8, #0x28]
0014CE30 c6cffb97 bl       #0x40d48
0014CE34 74e642f9 ldr      x20, [x19, #0x5c8]
0014CE38 802e40f9 ldr      x0, [x20, #0x58]
0014CE3C e01300f9 str      x0, [sp, #0x20]
0014CE40 800000b4 cbz      x0, #0x14ce50
0014CE44 088c44f8 ldr      x8, [x0, #0x48]!
0014CE48 080940f9 ldr      x8, [x8, #0x10]
0014CE4C 00013fd6 blr      x8
0014CE50 032600f0 adrp     x3, #0x60f000
0014CE54 635c2291 add      x3, x3, #0x897
0014CE58 e8230091 add      x8, sp, #8
0014CE5C e1830091 add      x1, sp, #0x20
0014CE60 e00314aa mov      x0, x20
0014CE64 e2031faa mov      x2, xzr
0014CE68 3d050094 bl       #0x14e35c
0014CE6C e01340f9 ldr      x0, [sp, #0x20]
0014CE70 800000b4 cbz      x0, #0x14ce80
0014CE74 088c44f8 ldr      x8, [x0, #0x48]!
0014CE78 080d40f9 ldr      x8, [x8, #0x18]
0014CE7C 00013fd6 blr      x8
0014CE80 60a641f9 ldr      x0, [x19, #0x348]
0014CE84 f70740f9 ldr      x23, [sp, #8]
0014CE88 080040f9 ldr      x8, [x0]
0014CE8C 090940f9 ldr      x9, [x8, #0x10]
0014CE90 e8830091 add      x8, sp, #0x20
0014CE94 20013fd6 blr      x9
0014CE98 f41340f9 ldr      x20, [sp, #0x20]
0014CE9C 140900b4 cbz      x20, #0x14cfbc
0014CEA0 953240f9 ldr      x21, [x20, #0x60]
0014CEA4 350200b4 cbz      x21, #0x14cee8
0014CEA8 a80240f9 ldr      x8, [x21]
0014CEAC e00315aa mov      x0, x21
0014CEB0 080140f9 ldr      x8, [x8]
0014CEB4 00013fd6 blr      x8
0014CEB8 f60300aa mov      x22, x0
0014CEBC 0b030094 bl       #0x14dae8
0014CEC0 1f0016eb cmp      x0, x22
0014CEC4 00010054 b.eq     #0x14cee4
0014CEC8 1f2003d5 nop      
0014CECC 1f2003d5 nop      
0014CED0 d60240f9 ldr      x22, [x22]
0014CED4 df0200eb cmp      x22, x0
0014CED8 c41a40fa ccmp     x22, #0, #4, ne
0014CEDC a1ffff54 b.ne     #0x14ced0
0014CEE0 560500b4 cbz      x22, #0x14cf88
0014CEE4 b54201d1 sub      x21, x21, #0x50
0014CEE8 888e44f8 ldr      x8, [x20, #0x48]!
0014CEEC e00314aa mov      x0, x20
0014CEF0 080d40f9 ldr      x8, [x8, #0x18]
0014CEF4 00013fd6 blr      x8
0014CEF8 350600b4 cbz      x21, #0x14cfbc
0014CEFC e00740f9 ldr      x0, [sp, #8]
0014CF00 f58203f9 str      x21, [x23, #0x700]
0014CF04 800000b4 cbz      x0, #0x14cf14
0014CF08 088c44f8 ldr      x8, [x0, #0x48]!
0014CF0C 080d40f9 ldr      x8, [x8, #0x18]
0014CF10 00013fd6 blr      x8
0014CF14 61e642f9 ldr      x1, [x19, #0x5c8]
0014CF18 402600d0 adrp     x0, #0x616000
0014CF1C 00741f91 add      x0, x0, #0x7dd
0014CF20 e2031faa mov      x2, xzr
0014CF24 05a5fb97 bl       #0x36338
0014CF28 e00f40f9 ldr      x0, [sp, #0x18]
0014CF2C 800000b4 cbz      x0, #0x14cf3c
0014CF30 088c44f8 ldr      x8, [x0, #0x48]!
0014CF34 080d40f9 ldr      x8, [x8, #0x18]
0014CF38 00013fd6 blr      x8
0014CF3C 883200f0 adrp     x8, #0x79f000
0014CF40 c1008052 mov      w1, #6
0014CF44 08d142f9 ldr      x8, [x8, #0x5a0]
0014CF48 e2031f2a mov      w2, wzr
0014CF4C 000140f9 ldr      x0, [x8]
0014CF50 cf04fb97 bl       #0xe28c
0014CF54 f44f47a9 ldp      x20, x19, [sp, #0x70]
0014CF58 f72b40f9 ldr      x23, [sp, #0x50]
0014CF5C f65746a9 ldp      x22, x21, [sp, #0x60]
0014CF60 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0014CF64 ff030291 add      sp, sp, #0x80
0014CF68 c0035fd6 ret      
0014CF6C f5031faa mov      x21, xzr
0014CF70 888e44f8 ldr      x8, [x20, #0x48]!
0014CF74 e00314aa mov      x0, x20
0014CF78 080d40f9 ldr      x8, [x8, #0x18]
0014CF7C 00013fd6 blr      x8
0014CF80 fff3ffb5 cbnz     xzr, #0x14cdfc
0014CF84 0e000014 b        #0x14cfbc
0014CF88 f5031faa mov      x21, xzr
0014CF8C 888e44f8 ldr      x8, [x20, #0x48]!
0014CF90 e00314aa mov      x0, x20
0014CF94 080d40f9 ldr      x8, [x8, #0x18]
0014CF98 00013fd6 blr      x8
0014CF9C 1ffbffb5 cbnz     xzr, #0x14cefc
0014CFA0 07000014 b        #0x14cfbc
0014CFA4 f6031faa mov      x22, xzr
0014CFA8 a88e44f8 ldr      x8, [x21, #0x48]!
0014CFAC e00315aa mov      x0, x21
0014CFB0 080d40f9 ldr      x8, [x8, #0x18]
0014CFB4 00013fd6 blr      x8
0014CFB8 bfdfffb5 cbnz     xzr, #0x14cbac
0014CFBC e1a41294 bl       #0x5f6340
~~~
### 0x14d584 (43 slots)
~~~asm
0014D584 ff0301d1 sub      sp, sp, #0x40
0014D588 fd7b02a9 stp      x29, x30, [sp, #0x20]
0014D58C f44f03a9 stp      x20, x19, [sp, #0x30]
0014D590 fd830091 add      x29, sp, #0x20
0014D594 083045f9 ldr      x8, [x0, #0xa60]
0014D598 080400b4 cbz      x8, #0x14d618
0014D59C f30300aa mov      x19, x0
0014D5A0 00e442f9 ldr      x0, [x0, #0x5c8]
0014D5A4 88539bd2 mov      x8, #0xda9c
0014D5A8 2869b1f2 movk     x8, #0x8b49, lsl #16
0014D5AC e886cef2 movk     x8, #0x7437, lsl #32
0014D5B0 e8a7eef2 movk     x8, #0x753f, lsl #48
0014D5B4 492600b0 adrp     x9, #0x616000
0014D5B8 29511f91 add      x9, x9, #0x7d4
0014D5BC e1030091 mov      x1, sp
0014D5C0 e82700a9 stp      x8, x9, [sp]
0014D5C4 08018052 mov      w8, #8
0014D5C8 e87f01a9 stp      x8, xzr, [sp, #0x10]
0014D5CC fd040094 bl       #0x14e9c0
0014D5D0 f40300aa mov      x20, x0
0014D5D4 e00f40f9 ldr      x0, [sp, #0x18]
0014D5D8 800000b4 cbz      x0, #0x14d5e8
0014D5DC 088c44f8 ldr      x8, [x0, #0x48]!
0014D5E0 080d40f9 ldr      x8, [x8, #0x18]
0014D5E4 00013fd6 blr      x8
0014D5E8 b40000b4 cbz      x20, #0x14d5fc
0014D5EC e00314aa mov      x0, x20
0014D5F0 088c44f8 ldr      x8, [x0, #0x48]!
0014D5F4 080940f9 ldr      x8, [x8, #0x10]
0014D5F8 00013fd6 blr      x8
0014D5FC 603245f9 ldr      x0, [x19, #0xa60]
0014D600 81ee46b9 ldr      w1, [x20, #0x6ec]
0014D604 5039fd97 bl       #0x9bb44
0014D608 888e44f8 ldr      x8, [x20, #0x48]!
0014D60C e00314aa mov      x0, x20
0014D610 080d40f9 ldr      x8, [x8, #0x18]
0014D614 00013fd6 blr      x8
0014D618 eadffe97 bl       #0x1055c0
0014D61C f44f43a9 ldp      x20, x19, [sp, #0x30]
0014D620 20008052 mov      w0, #1
0014D624 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0014D628 ff030191 add      sp, sp, #0x40
0014D62C c0035fd6 ret      
~~~
### 0x201310 (92 slots)
~~~asm
00201310 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
00201314 f90b00f9 str      x25, [sp, #0x10]
00201318 f85f02a9 stp      x24, x23, [sp, #0x20]
0020131C f65703a9 stp      x22, x21, [sp, #0x30]
00201320 f44f04a9 stp      x20, x19, [sp, #0x40]
00201324 fd030091 mov      x29, sp
00201328 08f48b52 mov      w8, #0x5fa0
0020132C f403042a mov      w20, w4
00201330 2800a89b umaddl   x8, w1, w8, x0
00201334 f30303aa mov      x19, x3
00201338 f603022a mov      w22, w2
0020133C f703012a mov      w23, w1
00201340 19610191 add      x25, x8, #0x58
00201344 08668052 mov      w8, #0x330
00201348 4864a89b umaddl   x8, w2, w8, x25
0020134C 08e942b9 ldr      w8, [x8, #0x2e8]
00201350 4801f837 tbnz     w8, #0x1f, #0x201378
00201354 34010036 tbz      w20, #0, #0x201378
00201358 1f010071 cmp      w8, #0
0020135C e0079f1a cset     w0, ne
00201360 f44f44a9 ldp      x20, x19, [sp, #0x40]
00201364 f90b40f9 ldr      x25, [sp, #0x10]
00201368 f65743a9 ldp      x22, x21, [sp, #0x30]
0020136C f85f42a9 ldp      x24, x23, [sp, #0x20]
00201370 fd7bc5a8 ldp      x29, x30, [sp], #0x50
00201374 c0035fd6 ret      
00201378 750240f9 ldr      x21, [x19]
0020137C d50100b4 cbz      x21, #0x2013b4
00201380 f80315aa mov      x24, x21
00201384 088f44f8 ldr      x8, [x24, #0x48]!
00201388 e00318aa mov      x0, x24
0020138C 080940f9 ldr      x8, [x8, #0x10]
00201390 00013fd6 blr      x8
00201394 ffae0471 cmp      w23, #0x12b
00201398 08040054 b.hi     #0x201418
0020139C df760071 cmp      w22, #0x1d
002013A0 c8030054 b.hi     #0x201418
002013A4 080340f9 ldr      x8, [x24]
002013A8 e00318aa mov      x0, x24
002013AC 080940f9 ldr      x8, [x8, #0x10]
002013B0 00013fd6 blr      x8
002013B4 e803162a mov      w8, w22
002013B8 09668052 mov      w9, #0x330
002013BC 1665a99b umaddl   x22, w8, w9, x25
002013C0 e00315aa mov      x0, x21
002013C4 e10316aa mov      x1, x22
002013C8 cf150094 bl       #0x206b04
002013CC c84e41f9 ldr      x8, [x22, #0x298]
002013D0 e00315aa mov      x0, x21
002013D4 c95241f9 ldr      x9, [x22, #0x2a0]
002013D8 a82606a9 stp      x8, x9, [x21, #0x60]
002013DC c85641f9 ldr      x8, [x22, #0x2a8]
002013E0 c95a41f9 ldr      x9, [x22, #0x2b0]
002013E4 ca5e41f9 ldr      x10, [x22, #0x2b8]
002013E8 cb6241f9 ldr      x11, [x22, #0x2c0]
002013EC aa2e08a9 stp      x10, x11, [x21, #0x80]
002013F0 a82607a9 stp      x8, x9, [x21, #0x70]
002013F4 c86641f9 ldr      x8, [x22, #0x2c8]
002013F8 c96a41f9 ldr      x9, [x22, #0x2d0]
002013FC ca6e41f9 ldr      x10, [x22, #0x2d8]
00201400 cb7241f9 ldr      x11, [x22, #0x2e0]
00201404 a82609a9 stp      x8, x9, [x21, #0x90]
00201408 088c44f8 ldr      x8, [x0, #0x48]!
0020140C aa2e0aa9 stp      x10, x11, [x21, #0xa0]
00201410 080d40f9 ldr      x8, [x8, #0x18]
00201414 00013fd6 blr      x8
00201418 a88e44f8 ldr      x8, [x21, #0x48]!
0020141C e00315aa mov      x0, x21
00201420 080d40f9 ldr      x8, [x8, #0x18]
00201424 00013fd6 blr      x8
00201428 600240f9 ldr      x0, [x19]
0020142C 57140094 bl       #0x206588
00201430 c0000037 tbnz     w0, #0, #0x201448
00201434 94010037 tbnz     w20, #0, #0x201464
00201438 600240f9 ldr      x0, [x19]
0020143C 41008052 mov      w1, #2
00201440 72150094 bl       #0x206a08
00201444 00010036 tbz      w0, #0, #0x201464
00201448 e0031f2a mov      w0, wzr
0020144C f44f44a9 ldp      x20, x19, [sp, #0x40]
00201450 f90b40f9 ldr      x25, [sp, #0x10]
00201454 f65743a9 ldp      x22, x21, [sp, #0x30]
00201458 f85f42a9 ldp      x24, x23, [sp, #0x20]
0020145C fd7bc5a8 ldp      x29, x30, [sp], #0x50
00201460 c0035fd6 ret      
00201464 20008052 mov      w0, #1
00201468 f44f44a9 ldp      x20, x19, [sp, #0x40]
0020146C f90b40f9 ldr      x25, [sp, #0x10]
00201470 f65743a9 ldp      x22, x21, [sp, #0x30]
00201474 f85f42a9 ldp      x24, x23, [sp, #0x20]
00201478 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0020147C c0035fd6 ret      
~~~
### 0x24c470 (2093 slots)
~~~asm
0024C470 081440b9 ldr      w8, [x0, #0x14]
0024C474 1f290071 cmp      w8, #0xa
0024C478 c8030054 b.hi     #0x24c4f0
0024C47C fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0024C480 fc6f01a9 stp      x28, x27, [sp, #0x10]
0024C484 fd030091 mov      x29, sp
0024C488 fa6702a9 stp      x26, x25, [sp, #0x20]
0024C48C f85f03a9 stp      x24, x23, [sp, #0x30]
0024C490 f65704a9 stp      x22, x21, [sp, #0x40]
0024C494 f44f05a9 stp      x20, x19, [sp, #0x50]
0024C498 ff1b40d1 sub      sp, sp, #6, lsl #12
0024C49C ff030ed1 sub      sp, sp, #0x380
0024C4A0 09ba8452 mov      w9, #0x25d0
0024C4A4 09a3a072 movk     w9, #0x518, lsl #16
0024C4A8 0a858452 mov      w10, #0x2428
0024C4AC ea5fa072 movk     w10, #0x2ff, lsl #16
0024C4B0 1300098b add      x19, x0, x9
0024C4B4 098e8252 mov      w9, #0x1470
0024C4B8 8972a072 movk     w9, #0x394, lsl #16
0024C4BC 1900098b add      x25, x0, x9
0024C4C0 491f0090 adrp     x9, #0x634000
0024C4C4 29813391 add      x9, x9, #0xce0
0024C4C8 eb000010 adr      x11, #0x24c4e4
0024C4CC 2c796878 ldrh     w12, [x9, x8, lsl #1]
0024C4D0 6b090c8b add      x11, x11, x12, lsl #2
0024C4D4 e08b00f9 str      x0, [sp, #0x110]
0024C4D8 f40300aa mov      x20, x0
0024C4DC 1a000a8b add      x26, x0, x10
0024C4E0 60011fd6 br       x11
0024C4E4 e0031f2a mov      w0, wzr
0024C4E8 28008052 mov      w8, #1
0024C4EC 52030014 b        #0x24d234
0024C4F0 e0031f2a mov      w0, wzr
0024C4F4 c0035fd6 ret      
0024C4F8 88888452 mov      w8, #0x2444
0024C4FC 08a3a072 movk     w8, #0x518, lsl #16
0024C500 09b89c52 mov      w9, #0xe5c0
0024C504 e9a2a072 movk     w9, #0x517, lsl #16
0024C508 8802088b add      x8, x20, x8
0024C50C e82f00f9 str      x8, [sp, #0x58]
0024C510 8802098b add      x8, x20, x9
0024C514 f32310a9 stp      x19, x8, [sp, #0x100]
0024C518 08e89452 mov      w8, #0xa740
0024C51C e8a2a072 movk     w8, #0x517, lsl #16
0024C520 e01b4091 add      x0, sp, #6, lsl #12
0024C524 8802088b add      x8, x20, x8
0024C528 fa6709a9 stp      x26, x25, [sp, #0x90]
0024C52C e86b00f9 str      x8, [sp, #0xd0]
0024C530 08409352 mov      w8, #0x9a00
0024C534 88a2a072 movk     w8, #0x514, lsl #16
0024C538 8802088b add      x8, x20, x8
0024C53C f31b4091 add      x19, sp, #6, lsl #12
0024C540 e83b00f9 str      x8, [sp, #0x70]
0024C544 08989152 mov      w8, #0x8cc0
0024C548 28a2a072 movk     w8, #0x511, lsl #16
0024C54C 611e00b0 adrp     x1, #0x619000
0024C550 21781591 add      x1, x1, #0x55e
0024C554 8802088b add      x8, x20, x8
0024C558 e85b00f9 str      x8, [sp, #0xb0]
0024C55C 08508952 mov      w8, #0x4a80
0024C560 48a0a072 movk     w8, #0x502, lsl #16
0024C564 00e00991 add      x0, x0, #0x278
0024C568 8802088b add      x8, x20, x8
0024C56C e85300f9 str      x8, [sp, #0xa0]
0024C570 08549c52 mov      w8, #0xe2a0
0024C574 8899a072 movk     w8, #0x4cc, lsl #16
0024C578 73220991 add      x19, x19, #0x248
0024C57C 8802088b add      x8, x20, x8
0024C580 e86300f9 str      x8, [sp, #0xc0]
0024C584 080c9452 mov      w8, #0xa060
0024C588 a897a072 movk     w8, #0x4bd, lsl #16
0024C58C 8802088b add      x8, x20, x8
0024C590 e87b00f9 str      x8, [sp, #0xf0]
0024C594 08c48b52 mov      w8, #0x5e20
0024C598 c895a072 movk     w8, #0x4ae, lsl #16
0024C59C 8802088b add      x8, x20, x8
0024C5A0 e86700f9 str      x8, [sp, #0xc8]
0024C5A4 087c8352 mov      w8, #0x1be0
0024C5A8 e893a072 movk     w8, #0x49f, lsl #16
0024C5AC 8802088b add      x8, x20, x8
0024C5B0 e87300f9 str      x8, [sp, #0xe0]
0024C5B4 08349b52 mov      w8, #0xd9a0
0024C5B8 e891a072 movk     w8, #0x48f, lsl #16
0024C5BC 8802088b add      x8, x20, x8
0024C5C0 e87700f9 str      x8, [sp, #0xe8]
0024C5C4 08ec9252 mov      w8, #0x9760
0024C5C8 0890a072 movk     w8, #0x480, lsl #16
0024C5CC 8802088b add      x8, x20, x8
0024C5D0 e86f00f9 str      x8, [sp, #0xd8]
0024C5D4 08a48a52 mov      w8, #0x5520
0024C5D8 288ea072 movk     w8, #0x471, lsl #16
0024C5DC 8802088b add      x8, x20, x8
0024C5E0 e85700f9 str      x8, [sp, #0xa8]
0024C5E4 085c8252 mov      w8, #0x12e0
0024C5E8 488ca072 movk     w8, #0x462, lsl #16
0024C5EC 8802088b add      x8, x20, x8
0024C5F0 e87f00f9 str      x8, [sp, #0xf8]
0024C5F4 fa6cff97 bl       #0x2279dc
0024C5F8 e01b4091 add      x0, sp, #6, lsl #12
0024C5FC 00e00991 add      x0, x0, #0x278
0024C600 0e6dff97 bl       #0x227a38
0024C604 e05f00f9 str      x0, [sp, #0xb8]
0024C608 16ff0b94 bl       #0x54c260
0024C60C fb0300aa mov      x27, x0
0024C610 6c65ff97 bl       #0x225bc0
0024C614 082441a9 ldp      x8, x9, [x0, #0x10]
0024C618 e82f31f9 str      x8, [sp, #0x6258]
0024C61C e93331f9 str      x9, [sp, #0x6260]
0024C620 082440a9 ldp      x8, x9, [x0]
0024C624 0a1040f9 ldr      x10, [x0, #0x20]
0024C628 0b304529 ldp      w11, w12, [x0, #0x28]
0024C62C ea3731f9 str      x10, [sp, #0x6268]
0024C630 0a6040b9 ldr      w10, [x0, #0x60]
0024C634 8c7d4093 sxtw     x12, w12
0024C638 ec9300f9 str      x12, [sp, #0x120]
0024C63C 6b2a00b9 str      w11, [x19, #0x28]
0024C640 e82731f9 str      x8, [sp, #0x6248]
0024C644 084440b9 ldr      w8, [x0, #0x44]
0024C648 e92b31f9 str      x9, [sp, #0x6250]
0024C64C 09fa8052 mov      w9, #0x7d0
0024C650 ea6f00b9 str      w10, [sp, #0x6c]
0024C654 e84300f9 str      x8, [sp, #0x80]
0024C658 08204139 ldrb     w8, [x0, #0x48]
0024C65C e88f00b9 str      w8, [sp, #0x8c]
0024C660 08244139 ldrb     w8, [x0, #0x49]
0024C664 e87f00b9 str      w8, [sp, #0x7c]
0024C668 e8231291 add      x8, sp, #0x488
0024C66C 08310091 add      x8, x8, #0xc
0024C670 1f411fb8 stur     wzr, [x8, #-0xc]
0024C674 290900f1 subs     x9, x9, #2
0024C678 1f811f78 sturh    wzr, [x8, #-8]
0024C67C 1fc11ff8 stur     xzr, [x8, #-4]
0024C680 1f090079 strh     wzr, [x8, #4]
0024C684 1f0900b9 str      wzr, [x8, #8]
0024C688 08610091 add      x8, x8, #0x18
0024C68C 21ffff54 b.ne     #0x24c670
0024C690 a82c00b0 adrp     x8, #0x7e1000
0024C694 08411891 add      x8, x8, #0x610
0024C698 000140f9 ldr      x0, [x8]
0024C69C e8030591 add      x8, sp, #0x140
0024C6A0 6796fd97 bl       #0x1b203c
0024C6A4 f9031f2a mov      w25, wzr
0024C6A8 13e89452 mov      w19, #0xa740
0024C6AC f3a2a072 movk     w19, #0x517, lsl #16
0024C6B0 1cb89c52 mov      w28, #0xe5c0
0024C6B4 fca2a072 movk     w28, #0x517, lsl #16
0024C6B8 ff9700f9 str      xzr, [sp, #0x128]
0024C6BC 1aa08052 mov      w26, #0x500
0024C6C0 1aa3a072 movk     w26, #0x518, lsl #16
0024C6C4 ff1f01b9 str      wzr, [sp, #0x11c]
0024C6C8 05000014 b        #0x24c6dc
0024C6CC 1f2003d5 nop      
0024C6D0 39070011 add      w25, w25, #1
0024C6D4 3fb30471 cmp      w25, #0x12c
0024C6D8 e02d0054 b.eq     #0x24cc94
0024C6DC f6031f2a mov      w22, wzr
0024C6E0 04000014 b        #0x24c6f0
0024C6E4 d6060011 add      w22, w22, #1
0024C6E8 df7a0071 cmp      w22, #0x1e
0024C6EC 20ffff54 b.eq     #0x24c6d0
0024C6F0 e8c30791 add      x8, sp, #0x1f0
0024C6F4 774fff97 bl       #0x2204d0
0024C6F8 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C6FC e8a30691 add      x8, sp, #0x1a8
0024C700 e103192a mov      w1, w25
0024C704 e203162a mov      w2, w22
0024C708 e3031baa mov      x3, x27
0024C70C 4fcffe97 bl       #0x200448
0024C710 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C714 800000b4 cbz      x0, #0x24c724
0024C718 088c44f8 ldr      x8, [x0, #0x48]!
0024C71C 080d40f9 ldr      x8, [x8, #0x18]
0024C720 00013fd6 blr      x8
0024C724 e0d740f9 ldr      x0, [sp, #0x1a8]
0024C728 98e7fe97 bl       #0x206588
0024C72C c0090037 tbnz     w0, #0, #0x24c864
0024C730 e8d740f9 ldr      x8, [sp, #0x1a8]
0024C734 002d40f9 ldr      x0, [x8, #0x58]
0024C738 33ab0b94 bl       #0x537404
0024C73C 600300b4 cbz      x0, #0x24c7a8
0024C740 e8d740f9 ldr      x8, [sp, #0x1a8]
0024C744 15810191 add      x21, x8, #0x60
0024C748 e8c30791 add      x8, sp, #0x1f0
0024C74C 2158ff97 bl       #0x2227d0
0024C750 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C754 e10315aa mov      x1, x21
0024C758 5bd8fe97 bl       #0x2028c4
0024C75C f703002a mov      w23, w0
0024C760 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C764 800000b4 cbz      x0, #0x24c774
0024C768 088c44f8 ldr      x8, [x0, #0x48]!
0024C76C 080d40f9 ldr      x8, [x8, #0x18]
0024C770 00013fd6 blr      x8
0024C774 97070037 tbnz     w23, #0, #0x24c864
0024C778 e8c30791 add      x8, sp, #0x1f0
0024C77C 614fff97 bl       #0x220500
0024C780 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C784 e10315aa mov      x1, x21
0024C788 4fd8fe97 bl       #0x2028c4
0024C78C f503002a mov      w21, w0
0024C790 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C794 800000b4 cbz      x0, #0x24c7a4
0024C798 088c44f8 ldr      x8, [x0, #0x48]!
0024C79C 080d40f9 ldr      x8, [x8, #0x18]
0024C7A0 00013fd6 blr      x8
0024C7A4 15060037 tbnz     w21, #0, #0x24c864
0024C7A8 f5d740f9 ldr      x21, [sp, #0x1a8]
0024C7AC b50000b4 cbz      x21, #0x24c7c0
0024C7B0 e00315aa mov      x0, x21
0024C7B4 088c44f8 ldr      x8, [x0, #0x48]!
0024C7B8 080940f9 ldr      x8, [x8, #0x10]
0024C7BC 00013fd6 blr      x8
0024C7C0 e89740f9 ldr      x8, [sp, #0x128]
0024C7C4 882e288b add      x8, x20, w8, uxth #3
0024C7C8 0801138b add      x8, x8, x19
0024C7CC 000140f9 ldr      x0, [x8]
0024C7D0 150100f9 str      x21, [x8]
0024C7D4 800000b4 cbz      x0, #0x24c7e4
0024C7D8 088c44f8 ldr      x8, [x0, #0x48]!
0024C7DC 080d40f9 ldr      x8, [x8, #0x18]
0024C7E0 00013fd6 blr      x8
0024C7E4 e99740f9 ldr      x9, [sp, #0x128]
0024C7E8 283d4092 and      x8, x9, #0xffff
0024C7EC 29050011 add      w9, w9, #1
0024C7F0 880a088b add      x8, x20, x8, lsl #2
0024C7F4 e99700f9 str      x9, [sp, #0x128]
0024C7F8 19693cb8 str      w25, [x8, x28]
0024C7FC 16693ab8 str      w22, [x8, x26]
0024C800 e89340f9 ldr      x8, [sp, #0x120]
0024C804 1f1d0071 cmp      w8, #7
0024C808 e1020054 b.ne     #0x24c864
0024C80C e0d740f9 ldr      x0, [sp, #0x1a8]
0024C810 7ae7fe97 bl       #0x2065f8
0024C814 f503002a mov      w21, w0
0024C818 e0a340f9 ldr      x0, [sp, #0x140]
0024C81C e103152a mov      w1, w21
0024C820 16d2fd97 bl       #0x1c1078
0024C824 f81f41b9 ldr      w24, [sp, #0x11c]
0024C828 173c0012 and      w23, w0, #0xffff
0024C82C 88018052 mov      w8, #0xc
0024C830 e9231291 add      x9, sp, #0x488
0024C834 e0d740f9 ldr      x0, [sp, #0x1a8]
0024C838 1427289b smaddl   x20, w24, w8, x9
0024C83C 950200b9 str      w21, [x20]
0024C840 70e7fe97 bl       #0x206600
0024C844 ff8e0171 cmp      w23, #0x63
0024C848 28008052 mov      w8, #1
0024C84C 800a0079 strh     w0, [x20, #4]
0024C850 0895881a cinc     w8, w8, hi
0024C854 18070011 add      w24, w24, #1
0024C858 f81f01b9 str      w24, [sp, #0x11c]
0024C85C 880a00b9 str      w8, [x20, #8]
0024C860 f48b40f9 ldr      x20, [sp, #0x110]
0024C864 e0d740f9 ldr      x0, [sp, #0x1a8]
0024C868 e0f3ffb4 cbz      x0, #0x24c6e4
0024C86C 088c44f8 ldr      x8, [x0, #0x48]!
0024C870 080d40f9 ldr      x8, [x8, #0x18]
0024C874 00013fd6 blr      x8
0024C878 9bffff17 b        #0x24c6e4
0024C87C e0031f2a mov      w0, wzr
0024C880 8065ff97 bl       #0x225e80
0024C884 e0031f2a mov      w0, wzr
0024C888 68008052 mov      w8, #3
0024C88C 6a020014 b        #0x24d234
0024C890 e466ff97 bl       #0x226420
0024C894 c0e00034 cbz      w0, #0x24e4ac
0024C898 1f080071 cmp      w0, #2
0024C89C 41490054 b.ne     #0x24d1c4
0024C8A0 28008052 mov      w8, #1
0024C8A4 e0031f2a mov      w0, wzr
0024C8A8 68ca1279 strh     w8, [x19, #0x964]
0024C8AC 5f020014 b        #0x24d228
0024C8B0 3c68ff97 bl       #0x2269a0
0024C8B4 801a0037 tbnz     w0, #0, #0x24cc04
0024C8B8 a668ff97 bl       #0x226b50
0024C8BC 28008052 mov      w8, #1
0024C8C0 68962539 strb     w8, [x19, #0x965]
0024C8C4 e04a0036 tbz      w0, #0, #0x24d220
0024C8C8 611e00d0 adrp     x1, #0x61a000
0024C8CC 21cc3391 add      x1, x1, #0xcf3
0024C8D0 e0231291 add      x0, sp, #0x488
0024C8D4 426cff97 bl       #0x2279dc
0024C8D8 e0231291 add      x0, sp, #0x488
0024C8DC 576cff97 bl       #0x227a38
0024C8E0 f30314aa mov      x19, x20
0024C8E4 08908252 mov      w8, #0x1480
0024C8E8 8872a072 movk     w8, #0x394, lsl #16
0024C8EC 9502088b add      x21, x20, x8
0024C8F0 881e00b0 adrp     x8, #0x61d000
0024C8F4 08812f91 add      x8, x8, #0xbe0
0024C8F8 090140f9 ldr      x9, [x8]
0024C8FC 086140f8 ldur     x8, [x8, #6]
0024C900 a90200f9 str      x9, [x21]
0024C904 16688952 mov      w22, #0x4b40
0024C908 9609a072 movk     w22, #0x4c, lsl #16
0024C90C f40300aa mov      x20, x0
0024C910 e00313aa mov      x0, x19
0024C914 e10315aa mov      x1, x21
0024C918 e203162a mov      w2, w22
0024C91C a86200f8 stur     x8, [x21, #6]
0024C920 e022ff97 bl       #0x2154a0
0024C924 08f88b52 mov      w8, #0x5fc0
0024C928 087ca072 movk     w8, #0x3e0, lsl #16
0024C92C 7702088b add      x23, x19, x8
0024C930 6454ff97 bl       #0x221ac0
0024C934 f80300aa mov      x24, x0
0024C938 2e03ff97 bl       #0x20d5f0
0024C93C 28548252 mov      w8, #0x12a1
0024C940 421e00f0 adrp     x2, #0x617000
0024C944 42383891 add      x2, x2, #0xe0e
0024C948 0400088b add      x4, x0, x8
0024C94C e00317aa mov      x0, x23
0024C950 e10316aa mov      x1, x22
0024C954 e30318aa mov      x3, x24
0024C958 e50315aa mov      x5, x21
0024C95C 65a70e94 bl       #0x5f66f0
0024C960 a8008052 mov      w8, #5
0024C964 e00313aa mov      x0, x19
0024C968 e8f301b9 str      w8, [sp, #0x1f0]
0024C96C a82a00d0 adrp     x8, #0x7a2000
0024C970 e10317aa mov      x1, x23
0024C974 082145f9 ldr      x8, [x8, #0xa40]
0024C978 ff1301f9 str      xzr, [sp, #0x220]
0024C97C ff1701f9 str      xzr, [sp, #0x228]
0024C980 ff1b01f9 str      xzr, [sp, #0x230]
0024C984 092940a9 ldp      x9, x10, [x8]
0024C988 e9ab1fa9 stp      x9, x10, [sp, #0x1f8]
0024C98C 092941a9 ldp      x9, x10, [x8, #0x10]
0024C990 081140f9 ldr      x8, [x8, #0x20]
0024C994 e90701f9 str      x9, [sp, #0x208]
0024C998 ea0b01f9 str      x10, [sp, #0x210]
0024C99C e80f01f9 str      x8, [sp, #0x218]
0024C9A0 b43bff97 bl       #0x21b870
0024C9A4 4754ff97 bl       #0x221ac0
0024C9A8 88a58652 mov      w8, #0x352c
0024C9AC 2803a072 movk     w8, #0x19, lsl #16
0024C9B0 0a848452 mov      w10, #0x2420
0024C9B4 ea5fa072 movk     w10, #0x2ff, lsl #16
0024C9B8 096868b8 ldr      w9, [x0, x8]
0024C9BC 75020a8b add      x21, x19, x10
0024C9C0 e3c30791 add      x3, sp, #0x1f0
0024C9C4 e10314aa mov      x1, x20
0024C9C8 29050011 add      w9, w9, #1
0024C9CC 096828b8 str      w9, [x0, x8]
0024C9D0 68326791 add      x8, x19, #0x9cc, lsl #12
0024C9D4 e00315aa mov      x0, x21
0024C9D8 02812891 add      x2, x8, #0xa20
0024C9DC f5fa0b94 bl       #0x54b5b0
0024C9E0 00490036 tbz      w0, #0, #0x24d300
0024C9E4 88008052 mov      w8, #4
0024C9E8 52000014 b        #0x24cb30
0024C9EC 7f962539 strb     wzr, [x19, #0x965]
0024C9F0 cc68ff97 bl       #0x226d20
0024C9F4 e0031f2a mov      w0, wzr
0024C9F8 7f922539 strb     wzr, [x19, #0x964]
0024C9FC c8008052 mov      w8, #6
0024CA00 0d020014 b        #0x24d234
0024CA04 6369ff97 bl       #0x226f90
0024CA08 e00f0037 tbnz     w0, #0, #0x24cc04
0024CA0C 411e00d0 adrp     x1, #0x616000
0024CA10 218c0091 add      x1, x1, #0x23
0024CA14 e0231291 add      x0, sp, #0x488
0024CA18 f16bff97 bl       #0x2279dc
0024CA1C e0231291 add      x0, sp, #0x488
0024CA20 066cff97 bl       #0x227a38
0024CA24 f30314aa mov      x19, x20
0024CA28 08908252 mov      w8, #0x1480
0024CA2C 8872a072 movk     w8, #0x394, lsl #16
0024CA30 f40300aa mov      x20, x0
0024CA34 7502088b add      x21, x19, x8
0024CA38 2254ff97 bl       #0x221ac0
0024CA3C 16688952 mov      w22, #0x4b40
0024CA40 9609a072 movk     w22, #0x4c, lsl #16
0024CA44 03a00f91 add      x3, x0, #0x3e8
0024CA48 221e0090 adrp     x2, #0x610000
0024CA4C 42e41791 add      x2, x2, #0x5f9
0024CA50 e00315aa mov      x0, x21
0024CA54 e10316aa mov      x1, x22
0024CA58 26a70e94 bl       #0x5f66f0
0024CA5C e00313aa mov      x0, x19
0024CA60 e10315aa mov      x1, x21
0024CA64 e203162a mov      w2, w22
0024CA68 8e22ff97 bl       #0x2154a0
0024CA6C 08f88b52 mov      w8, #0x5fc0
0024CA70 087ca072 movk     w8, #0x3e0, lsl #16
0024CA74 7702088b add      x23, x19, x8
0024CA78 1254ff97 bl       #0x221ac0
0024CA7C f80300aa mov      x24, x0
0024CA80 dc02ff97 bl       #0x20d5f0
0024CA84 28548252 mov      w8, #0x12a1
0024CA88 421e00f0 adrp     x2, #0x617000
0024CA8C 42383891 add      x2, x2, #0xe0e
0024CA90 0400088b add      x4, x0, x8
0024CA94 e00317aa mov      x0, x23
0024CA98 e10316aa mov      x1, x22
0024CA9C e30318aa mov      x3, x24
0024CAA0 e50315aa mov      x5, x21
0024CAA4 13a70e94 bl       #0x5f66f0
0024CAA8 a8008052 mov      w8, #5
0024CAAC e00313aa mov      x0, x19
0024CAB0 e8f301b9 str      w8, [sp, #0x1f0]
0024CAB4 a82a00d0 adrp     x8, #0x7a2000
0024CAB8 e10317aa mov      x1, x23
0024CABC 082145f9 ldr      x8, [x8, #0xa40]
0024CAC0 ff1301f9 str      xzr, [sp, #0x220]
0024CAC4 ff1701f9 str      xzr, [sp, #0x228]
0024CAC8 ff1b01f9 str      xzr, [sp, #0x230]
0024CACC 092940a9 ldp      x9, x10, [x8]
0024CAD0 e9ab1fa9 stp      x9, x10, [sp, #0x1f8]
0024CAD4 092941a9 ldp      x9, x10, [x8, #0x10]
0024CAD8 081140f9 ldr      x8, [x8, #0x20]
0024CADC e90701f9 str      x9, [sp, #0x208]
0024CAE0 ea0b01f9 str      x10, [sp, #0x210]
0024CAE4 e80f01f9 str      x8, [sp, #0x218]
0024CAE8 623bff97 bl       #0x21b870
0024CAEC f553ff97 bl       #0x221ac0
0024CAF0 88a58652 mov      w8, #0x352c
0024CAF4 2803a072 movk     w8, #0x19, lsl #16
0024CAF8 0a848452 mov      w10, #0x2420
0024CAFC ea5fa072 movk     w10, #0x2ff, lsl #16
0024CB00 096868b8 ldr      w9, [x0, x8]
0024CB04 75020a8b add      x21, x19, x10
0024CB08 e3c30791 add      x3, sp, #0x1f0
0024CB0C e10314aa mov      x1, x20
0024CB10 29050011 add      w9, w9, #1
0024CB14 096828b8 str      w9, [x0, x8]
0024CB18 68326791 add      x8, x19, #0x9cc, lsl #12
0024CB1C e00315aa mov      x0, x21
0024CB20 02812891 add      x2, x8, #0xa20
0024CB24 a3fa0b94 bl       #0x54b5b0
0024CB28 a0380036 tbz      w0, #0, #0x24d23c
0024CB2C c8008052 mov      w8, #6
0024CB30 280f00b9 str      w8, [x25, #0xc]
0024CB34 e8008052 mov      w8, #7
0024CB38 fc010014 b        #0x24d328
0024CB3C 08848452 mov      w8, #0x2420
0024CB40 e85fa072 movk     w8, #0x2ff, lsl #16
0024CB44 9402088b add      x20, x20, x8
0024CB48 e00314aa mov      x0, x20
0024CB4C c0fb0b94 bl       #0x54ba4c
0024CB50 a0050037 tbnz     w0, #0, #0x24cc04
0024CB54 e00314aa mov      x0, x20
0024CB58 d8fb0b94 bl       #0x54bab8
0024CB5C c0370036 tbz      w0, #0, #0x24d254
0024CB60 e00314aa mov      x0, x20
0024CB64 dbfb0b94 bl       #0x54bad0
0024CB68 80c800b4 cbz      x0, #0x24e478
0024CB6C f38b40f9 ldr      x19, [sp, #0x110]
0024CB70 e00313aa mov      x0, x19
0024CB74 b1060094 bl       #0x24e638
0024CB78 200b00b9 str      w0, [x25, #8]
0024CB7C 60000035 cbnz     w0, #0x24cb88
0024CB80 280740b9 ldr      w8, [x25, #4]
0024CB84 68ca0034 cbz      w8, #0x24e4d0
0024CB88 28018052 mov      w8, #9
0024CB8C e0031f2a mov      w0, wzr
0024CB90 681600b9 str      w8, [x19, #0x14]
0024CB94 46060014 b        #0x24e4ac
0024CB98 e0031faa mov      x0, xzr
0024CB9C 2100ff97 bl       #0x20cc20
0024CBA0 20030037 tbnz     w0, #0, #0x24cc04
0024CBA4 a82c00b0 adrp     x8, #0x7e1000
0024CBA8 08011891 add      x8, x8, #0x600
0024CBAC 000140f9 ldr      x0, [x8]
0024CBB0 7a46fd97 bl       #0x19e598
0024CBB4 80020036 tbz      w0, #0, #0x24cc04
0024CBB8 880e40f9 ldr      x8, [x20, #0x18]
0024CBBC 480100b4 cbz      x8, #0x24cbe4
0024CBC0 08510191 add      x8, x8, #0x54
0024CBC4 1ffddf88 ldar     wzr, [x8]
0024CBC8 880e40f9 ldr      x8, [x20, #0x18]
0024CBCC c80000b4 cbz      x8, #0x24cbe4
0024CBD0 08510191 add      x8, x8, #0x54
0024CBD4 08fddf88 ldar     w8, [x8]
0024CBD8 891240f9 ldr      x9, [x20, #0x20]
0024CBDC 1f010071 cmp      w8, #0
0024CBE0 e803899a csel     x8, xzr, x9, eq
0024CBE4 89c20091 add      x9, x20, #0x30
0024CBE8 1f0100f1 cmp      x8, #0
0024CBEC 2001889a csel     x0, x9, x8, eq
0024CBF0 080040f9 ldr      x8, [x0]
0024CBF4 080140f9 ldr      x8, [x8]
0024CBF8 00013fd6 blr      x8
0024CBFC 20008052 mov      w0, #1
0024CC00 2b060014 b        #0x24e4ac
0024CC04 e0031f2a mov      w0, wzr
0024CC08 29060014 b        #0x24e4ac
0024CC0C 200340b9 ldr      w0, [x25]
0024CC10 601e0034 cbz      w0, #0x24cfdc
0024CC14 1b99ff97 bl       #0x233080
0024CC18 9b010014 b        #0x24d284
0024CC1C 200b40b9 ldr      w0, [x25, #8]
0024CC20 e1031f2a mov      w1, wzr
0024CC24 2f99ff97 bl       #0x2330e0
0024CC28 68966539 ldrb     w8, [x19, #0x965]
0024CC2C 3f0b00b9 str      wzr, [x25, #8]
0024CC30 48000034 cbz      w8, #0x24cc38
0024CC34 eb68ff97 bl       #0x226fe0
0024CC38 68926539 ldrb     w8, [x19, #0x964]
0024CC3C 48000034 cbz      w8, #0x24cc44
0024CC40 0c56ff97 bl       #0x222470
0024CC44 0b57ff97 bl       #0x222870
0024CC48 40000036 tbz      w0, #0, #0x24cc50
0024CC4C 8957ff97 bl       #0x222a70
0024CC50 880e40f9 ldr      x8, [x20, #0x18]
0024CC54 480100b4 cbz      x8, #0x24cc7c
0024CC58 08510191 add      x8, x8, #0x54
0024CC5C 1ffddf88 ldar     wzr, [x8]
0024CC60 880e40f9 ldr      x8, [x20, #0x18]
0024CC64 c80000b4 cbz      x8, #0x24cc7c
0024CC68 08510191 add      x8, x8, #0x54
0024CC6C 08fddf88 ldar     w8, [x8]
0024CC70 891240f9 ldr      x9, [x20, #0x20]
0024CC74 1f010071 cmp      w8, #0
0024CC78 e803899a csel     x8, xzr, x9, eq
0024CC7C 89c20091 add      x9, x20, #0x30
0024CC80 1f0100f1 cmp      x8, #0
0024CC84 ffc30439 strb     wzr, [sp, #0x130]
0024CC88 2001889a csel     x0, x9, x8, eq
0024CC8C e1c30491 add      x1, sp, #0x130
0024CC90 97010014 b        #0x24d2ec
0024CC94 fc2352a9 ldp      x28, x8, [sp, #0x120]
0024CC98 1f3d0072 tst      w8, #0xffff
0024CC9C a0090054 b.eq     #0x24cdd0
0024CCA0 e99740f9 ldr      x9, [sp, #0x128]
0024CCA4 d5528052 mov      w21, #0x296
0024CCA8 e803092a mov      w8, w9
0024CCAC f37f40f9 ldr      x19, [sp, #0xf8]
0024CCB0 1a3d4092 and      x26, x8, #0xffff
0024CCB4 e86b40f9 ldr      x8, [sp, #0xd0]
0024CCB8 69260078 strh     w9, [x19], #2
0024CCBC 24000014 b        #0x24cd4c
0024CCC0 f88740f9 ldr      x24, [sp, #0x108]
0024CCC4 e0c30791 add      x0, sp, #0x1f0
0024CCC8 e1031f2a mov      w1, wzr
0024CCCC e20315aa mov      x2, x21
0024CCD0 08034079 ldrh     w8, [x24]
0024CCD4 14050011 add      w20, w8, #1
0024CCD8 08837e79 ldrh     w8, [x24, #0x1f40]
0024CCDC 17050011 add      w23, w8, #1
0024CCE0 1ca50e94 bl       #0x5f6150
0024CCE4 c12e40f9 ldr      x1, [x22, #0x58]
0024CCE8 e0c30791 add      x0, sp, #0x1f0
0024CCEC dfbc0a94 bl       #0x4fc068
0024CCF0 77320078 sturh    w23, [x19, #3]
0024CCF4 77220091 add      x23, x19, #8
0024CCF8 193c4092 and      x25, x0, #0xffff
0024CCFC 600e0079 strh     w0, [x19, #6]
0024CD00 e1c30791 add      x1, sp, #0x1f0
0024CD04 e00317aa mov      x0, x23
0024CD08 e20319aa mov      x2, x25
0024CD0C 7f020039 strb     wzr, [x19]
0024CD10 74120078 sturh    w20, [x19, #1]
0024CD14 7f160039 strb     wzr, [x19, #5]
0024CD18 32a60e94 bl       #0x5f65e0
0024CD1C f302198b add      x19, x23, x25
0024CD20 7f260078 strh     wzr, [x19], #2
0024CD24 c88e44f8 ldr      x8, [x22, #0x48]!
0024CD28 e00316aa mov      x0, x22
0024CD2C 080d40f9 ldr      x8, [x8, #0x18]
0024CD30 00013fd6 blr      x8
0024CD34 e8031caa mov      x8, x28
0024CD38 88230091 add      x8, x28, #8
0024CD3C 18130091 add      x24, x24, #4
0024CD40 5a0700f1 subs     x26, x26, #1
0024CD44 f88700f9 str      x24, [sp, #0x108]
0024CD48 20010054 b.eq     #0x24cd6c
0024CD4C 160140f9 ldr      x22, [x8]
0024CD50 fc0308aa mov      x28, x8
0024CD54 76fbffb4 cbz      x22, #0x24ccc0
0024CD58 e00316aa mov      x0, x22
0024CD5C 088c44f8 ldr      x8, [x0, #0x48]!
0024CD60 080940f9 ldr      x8, [x8, #0x10]
0024CD64 00013fd6 blr      x8
0024CD68 d6ffff17 b        #0x24ccc0
0024CD6C f48b40f9 ldr      x20, [sp, #0x110]
0024CD70 08609552 mov      w8, #0xab00
0024CD74 8885a072 movk     w8, #0x42c, lsl #16
0024CD78 f67f40f9 ldr      x22, [sp, #0xf8]
0024CD7C 02fc8c52 mov      w2, #0x67e0
0024CD80 a206a072 movk     w2, #0x35, lsl #16
0024CD84 e1031f2a mov      w1, wzr
0024CD88 9502088b add      x21, x20, x8
0024CD8C 7302164b sub      w19, w19, w22
0024CD90 e00315aa mov      x0, x21
0024CD94 efa40e94 bl       #0x5f6150
0024CD98 637e4093 sxtw     x3, w19
0024CD9C e00315aa mov      x0, x21
0024CDA0 01fc8c52 mov      w1, #0x67e0
0024CDA4 a106a072 movk     w1, #0x35, lsl #16
0024CDA8 e20316aa mov      x2, x22
0024CDAC e4031f2a mov      w4, wzr
0024CDB0 e5031f2a mov      w5, wzr
0024CDB4 bd240294 bl       #0x2d60a8
0024CDB8 02488852 mov      w2, #0x4240
0024CDBC e201a072 movk     w2, #0xf, lsl #16
0024CDC0 e00316aa mov      x0, x22
0024CDC4 e10315aa mov      x1, x21
0024CDC8 06a60e94 bl       #0x5f65e0
0024CDCC fc9340f9 ldr      x28, [sp, #0x120]
0024CDD0 e0a340f9 ldr      x0, [sp, #0x140]
0024CDD4 800000b4 cbz      x0, #0x24cde4
0024CDD8 088c44f8 ldr      x8, [x0, #0x48]!
0024CDDC 080d40f9 ldr      x8, [x8, #0x18]
0024CDE0 00013fd6 blr      x8
0024CDE4 f96f40f9 ldr      x25, [sp, #0xd8]
0024CDE8 fa031f2a mov      w26, wzr
0024CDEC f6031f2a mov      w22, wzr
0024CDF0 f88340f9 ldr      x24, [sp, #0x100]
0024CDF4 13ba8452 mov      w19, #0x25d0
0024CDF8 13a3a072 movk     w19, #0x518, lsl #16
0024CDFC 151e00b0 adrp     x21, #0x60d000
0024CE00 b5063191 add      x21, x21, #0xc41
0024CE04 06000014 b        #0x24ce1c
0024CE08 1f2003d5 nop      
0024CE0C 1f2003d5 nop      
0024CE10 d6060011 add      w22, w22, #1
0024CE14 dfb20471 cmp      w22, #0x12c
0024CE18 c00c0054 b.eq     #0x24cfb0
0024CE1C f7031f2a mov      w23, wzr
0024CE20 14000014 b        #0x24ce70
0024CE24 e8a340f9 ldr      x8, [sp, #0x140]
0024CE28 002d40f9 ldr      x0, [x8, #0x58]
0024CE2C 76a90b94 bl       #0x537404
0024CE30 086389b9 ldrsw    x8, [x24, #0x960]
0024CE34 880e088b add      x8, x20, x8, lsl #3
0024CE38 006933f8 str      x0, [x8, x19]
0024CE3C 086349b9 ldr      w8, [x24, #0x960]
0024CE40 08050011 add      w8, w8, #1
0024CE44 086309b9 str      w8, [x24, #0x960]
0024CE48 1f2003d5 nop      
0024CE4C 1f2003d5 nop      
0024CE50 e0a340f9 ldr      x0, [sp, #0x140]
0024CE54 800000b4 cbz      x0, #0x24ce64
0024CE58 088c44f8 ldr      x8, [x0, #0x48]!
0024CE5C 080d40f9 ldr      x8, [x8, #0x18]
0024CE60 00013fd6 blr      x8
0024CE64 f7060011 add      w23, w23, #1
0024CE68 ff7a0071 cmp      w23, #0x1e
0024CE6C 20fdff54 b.eq     #0x24ce10
0024CE70 e8c30791 add      x8, sp, #0x1f0
0024CE74 5756ff97 bl       #0x2227d0
0024CE78 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024CE7C e8030591 add      x8, sp, #0x140
0024CE80 e103162a mov      w1, w22
0024CE84 e203172a mov      w2, w23
0024CE88 e3031baa mov      x3, x27
0024CE8C 6fcdfe97 bl       #0x200448
0024CE90 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024CE94 800000b4 cbz      x0, #0x24cea4
0024CE98 088c44f8 ldr      x8, [x0, #0x48]!
0024CE9C 080d40f9 ldr      x8, [x8, #0x18]
0024CEA0 00013fd6 blr      x8
0024CEA4 e0a340f9 ldr      x0, [sp, #0x140]
0024CEA8 b8e5fe97 bl       #0x206588
0024CEAC 20fd0737 tbnz     w0, #0, #0x24ce50
0024CEB0 e8a340f9 ldr      x8, [sp, #0x140]
0024CEB4 01810191 add      x1, x8, #0x60
0024CEB8 9b050094 bl       #0x24e524
0024CEBC 1f080071 cmp      w0, #2
0024CEC0 20fbff54 b.eq     #0x24ce24
0024CEC4 1f040071 cmp      w0, #1
0024CEC8 41fcff54 b.ne     #0x24ce50
0024CECC ff7701f9 str      xzr, [sp, #0x2e8]
0024CED0 ff7301f9 str      xzr, [sp, #0x2e0]
0024CED4 ff6f01f9 str      xzr, [sp, #0x2d8]
0024CED8 ff6b01f9 str      xzr, [sp, #0x2d0]
0024CEDC ff6701f9 str      xzr, [sp, #0x2c8]
0024CEE0 ff6301f9 str      xzr, [sp, #0x2c0]
0024CEE4 ff5f01f9 str      xzr, [sp, #0x2b8]
0024CEE8 ff5b01f9 str      xzr, [sp, #0x2b0]
0024CEEC ff5701f9 str      xzr, [sp, #0x2a8]
0024CEF0 ff5301f9 str      xzr, [sp, #0x2a0]
0024CEF4 ff4f01f9 str      xzr, [sp, #0x298]
0024CEF8 ff4b01f9 str      xzr, [sp, #0x290]
0024CEFC ff4701f9 str      xzr, [sp, #0x288]
0024CF00 ff4301f9 str      xzr, [sp, #0x280]
0024CF04 ff3f01f9 str      xzr, [sp, #0x278]
0024CF08 ff3b01f9 str      xzr, [sp, #0x270]
0024CF0C ff3701f9 str      xzr, [sp, #0x268]
0024CF10 ff3301f9 str      xzr, [sp, #0x260]
0024CF14 ff2f01f9 str      xzr, [sp, #0x258]
0024CF18 ff2b01f9 str      xzr, [sp, #0x250]
0024CF1C ff2701f9 str      xzr, [sp, #0x248]
0024CF20 ff2301f9 str      xzr, [sp, #0x240]
0024CF24 ff1f01f9 str      xzr, [sp, #0x238]
0024CF28 ff1b01f9 str      xzr, [sp, #0x230]
0024CF2C ff1701f9 str      xzr, [sp, #0x228]
0024CF30 ff1301f9 str      xzr, [sp, #0x220]
0024CF34 ff0f01f9 str      xzr, [sp, #0x218]
0024CF38 ff0b01f9 str      xzr, [sp, #0x210]
0024CF3C ff0701f9 str      xzr, [sp, #0x208]
0024CF40 fffb00f9 str      xzr, [sp, #0x1f0]
0024CF44 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024CF48 7a000035 cbnz     w26, #0x24cf54
0024CF4C 680f8052 mov      w8, #0x7b
0024CF50 28170038 strb     w8, [x25], #1
0024CF54 e8a340f9 ldr      x8, [sp, #0x140]
0024CF58 002d40f9 ldr      x0, [x8, #0x58]
0024CF5C 2aa90b94 bl       #0x537404
0024CF60 e30300aa mov      x3, x0
0024CF64 e0c30791 add      x0, sp, #0x1f0
0024CF68 01208052 mov      w1, #0x100
0024CF6C e20315aa mov      x2, x21
0024CF70 e0a50e94 bl       #0x5f66f0
0024CF74 e1c30791 add      x1, sp, #0x1f0
0024CF78 e00319aa mov      x0, x25
0024CF7C 02208052 mov      w2, #0x100
0024CF80 e8a40e94 bl       #0x5f6320
0024CF84 e0c30791 add      x0, sp, #0x1f0
0024CF88 baa40e94 bl       #0x5f6270
0024CF8C e8a340f9 ldr      x8, [sp, #0x140]
0024CF90 3903008b add      x25, x25, x0
0024CF94 e1031faa mov      x1, xzr
0024CF98 5a070011 add      w26, w26, #1
0024CF9C 002d40f9 ldr      x0, [x8, #0x58]
0024CFA0 17a90b94 bl       #0x5373fc
0024CFA4 e0a340f9 ldr      x0, [sp, #0x140]
0024CFA8 1f5000f9 str      xzr, [x0, #0xa0]
0024CFAC abffff17 b        #0x24ce58
0024CFB0 8a4b8452 mov      w10, #0x225c
0024CFB4 8a4ba472 movk     w10, #0x225c, lsl #16
0024CFB8 a80f8052 mov      w8, #0x7d
0024CFBC 9a010034 cbz      w26, #0x24cfec
0024CFC0 28f31f38 sturb    w8, [x25, #-1]
0024CFC4 e97740f9 ldr      x9, [sp, #0xe8]
0024CFC8 f50309aa mov      x21, x9
0024CFCC 086349b9 ldr      w8, [x24, #0x960]
0024CFD0 1f050071 cmp      w8, #1
0024CFD4 8a010054 b.ge     #0x24d004
0024CFD8 d8000014 b        #0x24d338
0024CFDC 200740b9 ldr      w0, [x25, #4]
0024CFE0 60140034 cbz      w0, #0x24d26c
0024CFE4 f398ff97 bl       #0x2333b0
0024CFE8 a7000014 b        #0x24d284
0024CFEC 2a0300b9 str      w10, [x25]
0024CFF0 e97740f9 ldr      x9, [sp, #0xe8]
0024CFF4 f50309aa mov      x21, x9
0024CFF8 086349b9 ldr      w8, [x24, #0x960]
0024CFFC 1f050071 cmp      w8, #1
0024D000 cb190054 b.lt     #0x24d338
0024D004 030340f9 ldr      x3, [x24]
0024D008 28349b52 mov      w8, #0xd9a1
0024D00C e891a072 movk     w8, #0x48f, lsl #16
0024D010 9502088b add      x21, x20, x8
0024D014 680f8052 mov      w8, #0x7b
0024D018 ff7701f9 str      xzr, [sp, #0x2e8]
0024D01C 021e0090 adrp     x2, #0x60d000
0024D020 42043191 add      x2, x2, #0xc41
0024D024 ff7301f9 str      xzr, [sp, #0x2e0]
0024D028 e0c30791 add      x0, sp, #0x1f0
0024D02C 01208052 mov      w1, #0x100
0024D030 ff6f01f9 str      xzr, [sp, #0x2d8]
0024D034 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D038 ff6701f9 str      xzr, [sp, #0x2c8]
0024D03C ff6301f9 str      xzr, [sp, #0x2c0]
0024D040 ff5f01f9 str      xzr, [sp, #0x2b8]
0024D044 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D048 ff5701f9 str      xzr, [sp, #0x2a8]
0024D04C ff5301f9 str      xzr, [sp, #0x2a0]
0024D050 ff4f01f9 str      xzr, [sp, #0x298]
0024D054 ff4b01f9 str      xzr, [sp, #0x290]
0024D058 ff4701f9 str      xzr, [sp, #0x288]
0024D05C ff4301f9 str      xzr, [sp, #0x280]
0024D060 ff3f01f9 str      xzr, [sp, #0x278]
0024D064 ff3b01f9 str      xzr, [sp, #0x270]
0024D068 ff3701f9 str      xzr, [sp, #0x268]
0024D06C ff3301f9 str      xzr, [sp, #0x260]
0024D070 ff2f01f9 str      xzr, [sp, #0x258]
0024D074 ff2b01f9 str      xzr, [sp, #0x250]
0024D078 ff2701f9 str      xzr, [sp, #0x248]
0024D07C ff2301f9 str      xzr, [sp, #0x240]
0024D080 ff1f01f9 str      xzr, [sp, #0x238]
0024D084 ff1b01f9 str      xzr, [sp, #0x230]
0024D088 ff1701f9 str      xzr, [sp, #0x228]
0024D08C ff1301f9 str      xzr, [sp, #0x220]
0024D090 ff0f01f9 str      xzr, [sp, #0x218]
0024D094 ff0b01f9 str      xzr, [sp, #0x210]
0024D098 ff0701f9 str      xzr, [sp, #0x208]
0024D09C fffb00f9 str      xzr, [sp, #0x1f0]
0024D0A0 28010039 strb     w8, [x9]
0024D0A4 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D0A8 92a50e94 bl       #0x5f66f0
0024D0AC e1c30791 add      x1, sp, #0x1f0
0024D0B0 e00315aa mov      x0, x21
0024D0B4 02208052 mov      w2, #0x100
0024D0B8 9aa40e94 bl       #0x5f6320
0024D0BC e0c30791 add      x0, sp, #0x1f0
0024D0C0 6ca40e94 bl       #0x5f6270
0024D0C4 086349b9 ldr      w8, [x24, #0x960]
0024D0C8 b502008b add      x21, x21, x0
0024D0CC 1f090071 cmp      w8, #2
0024D0D0 0b0a0054 b.lt     #0x24d210
0024D0D4 09bb8452 mov      w9, #0x25d8
0024D0D8 09a3a072 movk     w9, #0x518, lsl #16
0024D0DC e8031faa mov      x8, xzr
0024D0E0 9302098b add      x19, x20, x9
0024D0E4 161e0090 adrp     x22, #0x60d000
0024D0E8 d6063191 add      x22, x22, #0xc41
0024D0EC 1f2003d5 nop      
0024D0F0 637a68f8 ldr      x3, [x19, x8, lsl #3]
0024D0F4 e0c30791 add      x0, sp, #0x1f0
0024D0F8 01208052 mov      w1, #0x100
0024D0FC e20316aa mov      x2, x22
0024D100 ff7701f9 str      xzr, [sp, #0x2e8]
0024D104 f40308aa mov      x20, x8
0024D108 ff7301f9 str      xzr, [sp, #0x2e0]
0024D10C ff6f01f9 str      xzr, [sp, #0x2d8]
0024D110 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D114 ff6701f9 str      xzr, [sp, #0x2c8]
0024D118 ff6301f9 str      xzr, [sp, #0x2c0]
0024D11C ff5f01f9 str      xzr, [sp, #0x2b8]
0024D120 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D124 ff5701f9 str      xzr, [sp, #0x2a8]
0024D128 ff5301f9 str      xzr, [sp, #0x2a0]
0024D12C ff4f01f9 str      xzr, [sp, #0x298]
0024D130 ff4b01f9 str      xzr, [sp, #0x290]
0024D134 ff4701f9 str      xzr, [sp, #0x288]
0024D138 ff4301f9 str      xzr, [sp, #0x280]
0024D13C ff3f01f9 str      xzr, [sp, #0x278]
0024D140 ff3b01f9 str      xzr, [sp, #0x270]
0024D144 ff3701f9 str      xzr, [sp, #0x268]
0024D148 ff3301f9 str      xzr, [sp, #0x260]
0024D14C ff2f01f9 str      xzr, [sp, #0x258]
0024D150 ff2b01f9 str      xzr, [sp, #0x250]
0024D154 ff2701f9 str      xzr, [sp, #0x248]
0024D158 ff2301f9 str      xzr, [sp, #0x240]
0024D15C ff1f01f9 str      xzr, [sp, #0x238]
0024D160 ff1b01f9 str      xzr, [sp, #0x230]
0024D164 ff1701f9 str      xzr, [sp, #0x228]
0024D168 ff1301f9 str      xzr, [sp, #0x220]
0024D16C ff0f01f9 str      xzr, [sp, #0x218]
0024D170 ff0b01f9 str      xzr, [sp, #0x210]
0024D174 ff0701f9 str      xzr, [sp, #0x208]
0024D178 fffb00f9 str      xzr, [sp, #0x1f0]
0024D17C ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D180 5ca50e94 bl       #0x5f66f0
0024D184 e1c30791 add      x1, sp, #0x1f0
0024D188 e00315aa mov      x0, x21
0024D18C 02208052 mov      w2, #0x100
0024D190 64a40e94 bl       #0x5f6320
0024D194 e0c30791 add      x0, sp, #0x1f0
0024D198 36a40e94 bl       #0x5f6270
0024D19C 096389b9 ldrsw    x9, [x24, #0x960]
0024D1A0 8a0a0091 add      x10, x20, #2
0024D1A4 b502008b add      x21, x21, x0
0024D1A8 88060091 add      x8, x20, #1
0024D1AC 5f0109eb cmp      x10, x9
0024D1B0 0bfaff54 b.lt     #0x24d0f0
0024D1B4 1f050031 cmn      w8, #1
0024D1B8 c00b0054 b.eq     #0x24d330
0024D1BC 16050091 add      x22, x8, #1
0024D1C0 15000014 b        #0x24d214
0024D1C4 e0031f2a mov      w0, wzr
0024D1C8 7a65ff97 bl       #0x2267b0
0024D1CC 3d52ff97 bl       #0x221ac0
0024D1D0 882c9352 mov      w8, #0x9964
0024D1D4 f30314aa mov      x19, x20
0024D1D8 146868b8 ldr      w20, [x0, x8]
0024D1DC 3952ff97 bl       #0x221ac0
0024D1E0 08209352 mov      w8, #0x9900
0024D1E4 e1231291 add      x1, sp, #0x488
0024D1E8 0800088b add      x8, x0, x8
0024D1EC e003142a mov      w0, w20
0024D1F0 092145a9 ldp      x9, x8, [x8, #0x50]
0024D1F4 e94702f9 str      x9, [sp, #0x488]
0024D1F8 e84b02f9 str      x8, [sp, #0x490]
0024D1FC 715dff97 bl       #0x2247c0
0024D200 88008052 mov      w8, #4
0024D204 e0031f2a mov      w0, wzr
0024D208 681600b9 str      w8, [x19, #0x14]
0024D20C a8040014 b        #0x24e4ac
0024D210 36008052 mov      w22, #1
0024D214 a80f8052 mov      w8, #0x7d
0024D218 a8f21f38 sturb    w8, [x21, #-1]
0024D21C 49000014 b        #0x24d340
0024D220 e0031f2a mov      w0, wzr
0024D224 68922539 strb     w8, [x19, #0x964]
0024D228 08c48952 mov      w8, #0x4e20
0024D22C 280b00b9 str      w8, [x25, #8]
0024D230 48018052 mov      w8, #0xa
0024D234 881600b9 str      w8, [x20, #0x14]
0024D238 9d040014 b        #0x24e4ac
0024D23C e00315aa mov      x0, x21
0024D240 29fa0b94 bl       #0x54bae4
0024D244 080040b9 ldr      w8, [x0]
0024D248 401e00d0 adrp     x0, #0x617000
0024D24C 00803b91 add      x0, x0, #0xee0
0024D250 31000014 b        #0x24d314
0024D254 e00314aa mov      x0, x20
0024D258 23fa0b94 bl       #0x54bae4
0024D25C 080040b9 ldr      w8, [x0]
0024D260 601e00b0 adrp     x0, #0x61a000
0024D264 008c3391 add      x0, x0, #0xce3
0024D268 89040014 b        #0x24e48c
0024D26C 08178e52 mov      w8, #0x70b8
0024D270 4862a072 movk     w8, #0x312, lsl #16
0024D274 200b40b9 ldr      w0, [x25, #8]
0024D278 8802088b add      x8, x20, x8
0024D27C 010140b9 ldr      w1, [x8]
0024D280 9897ff97 bl       #0x2330e0
0024D284 68966539 ldrb     w8, [x19, #0x965]
0024D288 3f0b00b9 str      wzr, [x25, #8]
0024D28C 48000034 cbz      w8, #0x24d294
0024D290 5467ff97 bl       #0x226fe0
0024D294 68926539 ldrb     w8, [x19, #0x964]
0024D298 48000034 cbz      w8, #0x24d2a0
0024D29C 7554ff97 bl       #0x222470
0024D2A0 7455ff97 bl       #0x222870
0024D2A4 40000036 tbz      w0, #0, #0x24d2ac
0024D2A8 f255ff97 bl       #0x222a70
0024D2AC 880e40f9 ldr      x8, [x20, #0x18]
0024D2B0 480100b4 cbz      x8, #0x24d2d8
0024D2B4 08510191 add      x8, x8, #0x54
0024D2B8 1ffddf88 ldar     wzr, [x8]
0024D2BC 880e40f9 ldr      x8, [x20, #0x18]
0024D2C0 c80000b4 cbz      x8, #0x24d2d8
0024D2C4 08510191 add      x8, x8, #0x54
0024D2C8 08fddf88 ldar     w8, [x8]
0024D2CC 891240f9 ldr      x9, [x20, #0x20]
0024D2D0 1f010071 cmp      w8, #0
0024D2D4 e803899a csel     x8, xzr, x9, eq
0024D2D8 89c20091 add      x9, x20, #0x30
0024D2DC 1f0100f1 cmp      x8, #0
0024D2E0 ffe30439 strb     wzr, [sp, #0x138]
0024D2E4 2001889a csel     x0, x9, x8, eq
0024D2E8 e1e30491 add      x1, sp, #0x138
0024D2EC 080040f9 ldr      x8, [x0]
0024D2F0 080540f9 ldr      x8, [x8, #8]
0024D2F4 00013fd6 blr      x8
0024D2F8 20008052 mov      w0, #1
0024D2FC 6c040014 b        #0x24e4ac
0024D300 e00315aa mov      x0, x21
0024D304 f8f90b94 bl       #0x54bae4
0024D308 080040b9 ldr      w8, [x0]
0024D30C 001e00b0 adrp     x0, #0x60e000
0024D310 00581591 add      x0, x0, #0x556
0024D314 420340b9 ldr      w2, [x26]
0024D318 01550012 and      w1, w8, #0x3fffff
0024D31C e3031faa mov      x3, xzr
0024D320 604bff97 bl       #0x2200a0
0024D324 28018052 mov      w8, #9
0024D328 e0031f2a mov      w0, wzr
0024D32C 5e040014 b        #0x24e4a4
0024D330 8a4b8452 mov      w10, #0x225c
0024D334 8a4ba472 movk     w10, #0x225c, lsl #16
0024D338 f6031f2a mov      w22, wzr
0024D33C aa0200b9 str      w10, [x21]
0024D340 e051ff97 bl       #0x221ac0
0024D344 08939652 mov      w8, #0xb498
0024D348 e800a072 movk     w8, #7, lsl #16
0024D34C fa0b01b9 str      w26, [sp, #0x108]
0024D350 086868f8 ldr      x8, [x0, x8]
0024D354 093d0072 ands     w9, w8, #0xffff
0024D358 e9d300b9 str      w9, [sp, #0xd0]
0024D35C e0120054 b.eq     #0x24d5b8
0024D360 f56740f9 ldr      x21, [sp, #0xc8]
0024D364 9f2b0071 cmp      w28, #0xa
0024D368 f63300f9 str      x22, [sp, #0x60]
0024D36C a8260078 strh     w8, [x21], #2
0024D370 a8000054 b.hi     #0x24d384
0024D374 291f00f0 adrp     x9, #0x634000
0024D378 29e13391 add      x9, x9, #0xcf8
0024D37C 37797c78 ldrh     w23, [x9, x28, lsl #1]
0024D380 02000014 b        #0x24d388
0024D384 97058052 mov      w23, #0x2c
0024D388 f3031f2a mov      w19, wzr
0024D38C 183d4092 and      x24, x8, #0xffff
0024D390 5600c0d2 mov      x22, #0x200000000
0024D394 19f89652 mov      w25, #0xb7c0
0024D398 f900a072 movk     w25, #7, lsl #16
0024D39C 5a068052 mov      w26, #0x32
0024D3A0 1c888452 mov      w28, #0x2440
0024D3A4 1ca3a072 movk     w28, #0x518, lsl #16
0024D3A8 9406c0d2 mov      x20, #0x3400000000
0024D3AC 0e000014 b        #0x24d3e4
0024D3B0 e98b40f9 ldr      x9, [sp, #0x110]
0024D3B4 2929338b add      x9, x9, w19, uxth #2
0024D3B8 083140b9 ldr      w8, [x8, #0x30]
0024D3BC 28693cb8 str      w8, [x9, x28]
0024D3C0 69060011 add      w9, w19, #1
0024D3C4 e803132a mov      w8, w19
0024D3C8 f303092a mov      w19, w9
0024D3CC a8660079 strh     w8, [x21, #0x32]
0024D3D0 b5d20091 add      x21, x21, #0x34
0024D3D4 180700f1 subs     x24, x24, #1
0024D3D8 d602148b add      x22, x22, x20
0024D3DC 39e30091 add      x25, x25, #0x38
0024D3E0 00050054 b.eq     #0x24d480
0024D3E4 b751ff97 bl       #0x221ac0
0024D3E8 0800198b add      x8, x0, x25
0024D3EC ba020079 strh     w26, [x21]
0024D3F0 090140f9 ldr      x9, [x8]
0024D3F4 b7160079 strh     w23, [x21, #0xa]
0024D3F8 a92200f8 stur     x9, [x21, #2]
0024D3FC 09154079 ldrh     w9, [x8, #0xa]
0024D400 a91a0079 strh     w9, [x21, #0xc]
0024D404 09194079 ldrh     w9, [x8, #0xc]
0024D408 a91e0079 strh     w9, [x21, #0xe]
0024D40C 09394039 ldrb     w9, [x8, #0xe]
0024D410 a9420039 strb     w9, [x21, #0x10]
0024D414 09214079 ldrh     w9, [x8, #0x10]
0024D418 a9120178 sturh    w9, [x21, #0x11]
0024D41C 09494039 ldrb     w9, [x8, #0x12]
0024D420 a94e0039 strb     w9, [x21, #0x13]
0024D424 094d4039 ldrb     w9, [x8, #0x13]
0024D428 a9520039 strb     w9, [x21, #0x14]
0024D42C 09c141f8 ldur     x9, [x8, #0x1c]
0024D430 0a4142f8 ldur     x10, [x8, #0x24]
0024D434 0b594079 ldrh     w11, [x8, #0x2c]
0024D438 0c4141f8 ldur     x12, [x8, #0x14]
0024D43C bff20278 sturh    wzr, [x21, #0x2f]
0024D440 ac5201f8 stur     x12, [x21, #0x15]
0024D444 abd20278 sturh    w11, [x21, #0x2d]
0024D448 aa5202f8 stur     x10, [x21, #0x25]
0024D44C a9d201f8 stur     x9, [x21, #0x1d]
0024D450 09b94039 ldrb     w9, [x8, #0x2e]
0024D454 a9c60039 strb     w9, [x21, #0x31]
0024D458 09154079 ldrh     w9, [x8, #0xa]
0024D45C 3f950d71 cmp      w9, #0x365
0024D460 80faff54 b.eq     #0x24d3b0
0024D464 e8ff9f52 mov      w8, #0xffff
0024D468 a8660079 strh     w8, [x21, #0x32]
0024D46C b5d20091 add      x21, x21, #0x34
0024D470 180700f1 subs     x24, x24, #1
0024D474 d602148b add      x22, x22, x20
0024D478 39e30091 add      x25, x25, #0x38
0024D47C 41fbff54 b.ne     #0x24d3e4
0024D480 f48b40f9 ldr      x20, [sp, #0x110]
0024D484 08609552 mov      w8, #0xab00
0024D488 8885a072 movk     w8, #0x42c, lsl #16
0024D48C 02fc8c52 mov      w2, #0x67e0
0024D490 a206a072 movk     w2, #0x35, lsl #16
0024D494 e1031f2a mov      w1, wzr
0024D498 9502088b add      x21, x20, x8
0024D49C e00315aa mov      x0, x21
0024D4A0 2ca30e94 bl       #0x5f6150
0024D4A4 c3fe6093 asr      x3, x22, #0x20
0024D4A8 f66740f9 ldr      x22, [sp, #0xc8]
0024D4AC e00315aa mov      x0, x21
0024D4B0 01fc8c52 mov      w1, #0x67e0
0024D4B4 a106a072 movk     w1, #0x35, lsl #16
0024D4B8 e4031f2a mov      w4, wzr
0024D4BC e5031f2a mov      w5, wzr
0024D4C0 e20316aa mov      x2, x22
0024D4C4 f9220294 bl       #0x2d60a8
0024D4C8 02488852 mov      w2, #0x4240
0024D4CC e201a072 movk     w2, #0xf, lsl #16
0024D4D0 e00316aa mov      x0, x22
0024D4D4 e10315aa mov      x1, x21
0024D4D8 42a40e94 bl       #0x5f65e0
0024D4DC 7951ff97 bl       #0x221ac0
0024D4E0 fa0b41b9 ldr      w26, [sp, #0x108]
0024D4E4 08939652 mov      w8, #0xb498
0024D4E8 e800a072 movk     w8, #7, lsl #16
0024D4EC fc9340f9 ldr      x28, [sp, #0x120]
0024D4F0 7f3e0072 tst      w19, #0xffff
0024D4F4 f63340f9 ldr      x22, [sp, #0x60]
0024D4F8 1f6828f8 str      xzr, [x0, x8]
0024D4FC e0050054 b.eq     #0x24d5b8
0024D500 e85340f9 ldr      x8, [sp, #0xa0]
0024D504 693e0012 and      w9, w19, #0xffff
0024D508 ea03132a mov      w10, w19
0024D50C 4a3d4092 and      x10, x10, #0xffff
0024D510 3f050071 cmp      w9, #1
0024D514 c9008052 mov      w9, #6
0024D518 2980a072 movk     w9, #0x401, lsl #16
0024D51C eb031faa mov      x11, xzr
0024D520 13250078 strh     w19, [x8], #2
0024D524 60010054 b.eq     #0x24d550
0024D528 ee2f40f9 ldr      x14, [sp, #0x58]
0024D52C 4c397f92 and      x12, x10, #0xfffe
0024D530 cdc15fb8 ldur     w13, [x14, #-4]
0024D534 6b090091 add      x11, x11, #2
0024D538 9f010beb cmp      x12, x11
0024D53C 09350029 stp      w9, w13, [x8]
0024D540 cd8540b8 ldr      w13, [x14], #8
0024D544 09350129 stp      w9, w13, [x8, #8]
0024D548 08410091 add      x8, x8, #0x10
0024D54C 21ffff54 b.ne     #0x24d530
0024D550 ca000036 tbz      w10, #0, #0x24d568
0024D554 8a0a0b8b add      x10, x20, x11, lsl #2
0024D558 0b888452 mov      w11, #0x2440
0024D55C 0ba3a072 movk     w11, #0x518, lsl #16
0024D560 4a696bb8 ldr      w10, [x10, x11]
0024D564 09298128 stp      w9, w10, [x8], #8
0024D568 f45340f9 ldr      x20, [sp, #0xa0]
0024D56C 02fc8c52 mov      w2, #0x67e0
0024D570 a206a072 movk     w2, #0x35, lsl #16
0024D574 e00315aa mov      x0, x21
0024D578 e1031f2a mov      w1, wzr
0024D57C 1301144b sub      w19, w8, w20
0024D580 f4a20e94 bl       #0x5f6150
0024D584 637e4093 sxtw     x3, w19
0024D588 e00315aa mov      x0, x21
0024D58C 01fc8c52 mov      w1, #0x67e0
0024D590 a106a072 movk     w1, #0x35, lsl #16
0024D594 e20314aa mov      x2, x20
0024D598 e4031f2a mov      w4, wzr
0024D59C e5031f2a mov      w5, wzr
0024D5A0 c2220294 bl       #0x2d60a8
0024D5A4 02488852 mov      w2, #0x4240
0024D5A8 e201a072 movk     w2, #0xf, lsl #16
0024D5AC e00314aa mov      x0, x20
0024D5B0 e10315aa mov      x1, x21
0024D5B4 0ba40e94 bl       #0x5f65e0
0024D5B8 e89740f9 ldr      x8, [sp, #0x128]
0024D5BC 1f3d0072 tst      w8, #0xffff
0024D5C0 c1000054 b.ne     #0x24d5d8
0024D5C4 5f030071 cmp      w26, #0
0024D5C8 8c000054 b.gt     #0x24d5d8
0024D5CC e8d340b9 ldr      w8, [sp, #0xd0]
0024D5D0 0801162a orr      w8, w8, w22
0024D5D4 c8080034 cbz      w8, #0x24d6ec
0024D5D8 e95740f9 ldr      x9, [sp, #0xa8]
0024D5DC 28008052 mov      w8, #1
0024D5E0 9f2b0071 cmp      w28, #0xa
0024D5E4 f48b40f9 ldr      x20, [sp, #0x110]
0024D5E8 28010079 strh     w8, [x9]
0024D5EC a8000054 b.hi     #0x24d600
0024D5F0 281f00f0 adrp     x8, #0x634000
0024D5F4 08e13391 add      x8, x8, #0xcf8
0024D5F8 08797c78 ldrh     w8, [x8, x28, lsl #1]
0024D5FC 02000014 b        #0x24d604
0024D600 88058052 mov      w8, #0x2c
0024D604 f55740f9 ldr      x21, [sp, #0xa8]
0024D608 e0030591 add      x0, sp, #0x140
0024D60C ff430839 strb     wzr, [sp, #0x210]
0024D610 e92771f9 ldr      x9, [sp, #0x6248]
0024D614 ff0701f9 str      xzr, [sp, #0x208]
0024D618 fffb00f9 str      xzr, [sp, #0x1f0]
0024D61C ea2b71f9 ldr      x10, [sp, #0x6250]
0024D620 a8060079 strh     w8, [x21, #2]
0024D624 e87f40b9 ldr      w8, [sp, #0x7c]
0024D628 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D62C a8120039 strb     w8, [x21, #4]
0024D630 e84340f9 ldr      x8, [sp, #0x80]
0024D634 a85200f8 stur     x8, [x21, #5]
0024D638 08a48a52 mov      w8, #0x5520
0024D63C 288ea072 movk     w8, #0x471, lsl #16
0024D640 9302088b add      x19, x20, x8
0024D644 e82f71f9 ldr      x8, [sp, #0x6258]
0024D648 69d200f8 stur     x9, [x19, #0xd]
0024D64C 6a5201f8 stur     x10, [x19, #0x15]
0024D650 68d201f8 stur     x8, [x19, #0x1d]
0024D654 e81b4091 add      x8, sp, #6, lsl #12
0024D658 08210991 add      x8, x8, #0x248
0024D65C 08314079 ldrh     w8, [x8, #0x18]
0024D660 68520278 sturh    w8, [x19, #0x25]
0024D664 e88f40b9 ldr      w8, [sp, #0x8c]
0024D668 a89e0039 strb     w8, [x21, #0x27]
0024D66C e5a30e94 bl       #0x5f6600
0024D670 e0c30791 add      x0, sp, #0x1f0
0024D674 e1030591 add      x1, sp, #0x140
0024D678 bea30e94 bl       #0x5f6570
0024D67C e80341f9 ldr      x8, [sp, #0x200]
0024D680 02fc8c52 mov      w2, #0x67e0
0024D684 a206a072 movk     w2, #0x35, lsl #16
0024D688 e90741f9 ldr      x9, [sp, #0x208]
0024D68C e1031f2a mov      w1, wzr
0024D690 ea434839 ldrb     w10, [sp, #0x210]
0024D694 68a603a9 stp      x8, x9, [x19, #0x38]
0024D698 6a220139 strb     w10, [x19, #0x48]
0024D69C e9235fa9 ldp      x9, x8, [sp, #0x1f0]
0024D6A0 69a202a9 stp      x9, x8, [x19, #0x28]
0024D6A4 08609552 mov      w8, #0xab00
0024D6A8 8885a072 movk     w8, #0x42c, lsl #16
0024D6AC 9402088b add      x20, x20, x8
0024D6B0 e00314aa mov      x0, x20
0024D6B4 a7a20e94 bl       #0x5f6150
0024D6B8 23098052 mov      w3, #0x49
0024D6BC e00314aa mov      x0, x20
0024D6C0 01fc8c52 mov      w1, #0x67e0
0024D6C4 a106a072 movk     w1, #0x35, lsl #16
0024D6C8 e20315aa mov      x2, x21
0024D6CC e4031f2a mov      w4, wzr
0024D6D0 e5031f2a mov      w5, wzr
0024D6D4 75220294 bl       #0x2d60a8
0024D6D8 02488852 mov      w2, #0x4240
0024D6DC e201a072 movk     w2, #0xf, lsl #16
0024D6E0 e00315aa mov      x0, x21
0024D6E4 e10314aa mov      x1, x20
0024D6E8 bea30e94 bl       #0x5f65e0
0024D6EC f47340f9 ldr      x20, [sp, #0xe0]
0024D6F0 f3031f2a mov      w19, wzr
0024D6F4 f8031f2a mov      w24, wzr
0024D6F8 7c1e00f0 adrp     x28, #0x61c000
0024D6FC 9cbb0d91 add      x28, x28, #0x36e
0024D700 04000014 b        #0x24d710
0024D704 3fb30471 cmp      w25, #0x12c
0024D708 f803192a mov      w24, w25
0024D70C c00e0054 b.eq     #0x24d8e4
0024D710 19070011 add      w25, w24, #1
0024D714 36008052 mov      w22, #1
0024D718 05000014 b        #0x24d72c
0024D71C 1f2003d5 nop      
0024D720 d6060011 add      w22, w22, #1
0024D724 df7e0071 cmp      w22, #0x1f
0024D728 e0feff54 b.eq     #0x24d704
0024D72C e8c30791 add      x8, sp, #0x1f0
0024D730 d5060051 sub      w21, w22, #1
0024D734 674bff97 bl       #0x2204d0
0024D738 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D73C e8030591 add      x8, sp, #0x140
0024D740 e103182a mov      w1, w24
0024D744 e203152a mov      w2, w21
0024D748 e3031baa mov      x3, x27
0024D74C 3fcbfe97 bl       #0x200448
0024D750 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D754 800000b4 cbz      x0, #0x24d764
0024D758 088c44f8 ldr      x8, [x0, #0x48]!
0024D75C 080d40f9 ldr      x8, [x8, #0x18]
0024D760 00013fd6 blr      x8
0024D764 e0a340f9 ldr      x0, [sp, #0x140]
0024D768 88e3fe97 bl       #0x206588
0024D76C 000b0037 tbnz     w0, #0, #0x24d8cc
0024D770 e8a340f9 ldr      x8, [sp, #0x140]
0024D774 17810191 add      x23, x8, #0x60
0024D778 e8c30791 add      x8, sp, #0x1f0
0024D77C 1554ff97 bl       #0x2227d0
0024D780 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D784 e10317aa mov      x1, x23
0024D788 4fd4fe97 bl       #0x2028c4
0024D78C fa03002a mov      w26, w0
0024D790 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D794 800000b4 cbz      x0, #0x24d7a4
0024D798 088c44f8 ldr      x8, [x0, #0x48]!
0024D79C 080d40f9 ldr      x8, [x8, #0x18]
0024D7A0 00013fd6 blr      x8
0024D7A4 ba010037 tbnz     w26, #0, #0x24d7d8
0024D7A8 e8c30791 add      x8, sp, #0x1f0
0024D7AC 554bff97 bl       #0x220500
0024D7B0 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D7B4 e10317aa mov      x1, x23
0024D7B8 43d4fe97 bl       #0x2028c4
0024D7BC f703002a mov      w23, w0
0024D7C0 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D7C4 800000b4 cbz      x0, #0x24d7d4
0024D7C8 088c44f8 ldr      x8, [x0, #0x48]!
0024D7CC 080d40f9 ldr      x8, [x8, #0x18]
0024D7D0 00013fd6 blr      x8
0024D7D4 d7070036 tbz      w23, #0, #0x24d8cc
0024D7D8 e8a340f9 ldr      x8, [sp, #0x140]
0024D7DC 096940b9 ldr      w9, [x8, #0x68]
0024D7E0 29050051 sub      w9, w9, #1
0024D7E4 3f01186b cmp      w9, w24
0024D7E8 a1000054 b.ne     #0x24d7fc
0024D7EC 096d40b9 ldr      w9, [x8, #0x6c]
0024D7F0 29050051 sub      w9, w9, #1
0024D7F4 bf02096b cmp      w21, w9
0024D7F8 a0060054 b.eq     #0x24d8cc
0024D7FC ff7701f9 str      xzr, [sp, #0x2e8]
0024D800 ff7301f9 str      xzr, [sp, #0x2e0]
0024D804 ff6f01f9 str      xzr, [sp, #0x2d8]
0024D808 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D80C ff6701f9 str      xzr, [sp, #0x2c8]
0024D810 ff6301f9 str      xzr, [sp, #0x2c0]
0024D814 ff5f01f9 str      xzr, [sp, #0x2b8]
0024D818 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D81C ff5701f9 str      xzr, [sp, #0x2a8]
0024D820 ff5301f9 str      xzr, [sp, #0x2a0]
0024D824 ff4f01f9 str      xzr, [sp, #0x298]
0024D828 ff4b01f9 str      xzr, [sp, #0x290]
0024D82C ff4701f9 str      xzr, [sp, #0x288]
0024D830 ff4301f9 str      xzr, [sp, #0x280]
0024D834 ff3f01f9 str      xzr, [sp, #0x278]
0024D838 ff3b01f9 str      xzr, [sp, #0x270]
0024D83C ff3701f9 str      xzr, [sp, #0x268]
0024D840 ff3301f9 str      xzr, [sp, #0x260]
0024D844 ff2f01f9 str      xzr, [sp, #0x258]
0024D848 ff2b01f9 str      xzr, [sp, #0x250]
0024D84C ff2701f9 str      xzr, [sp, #0x248]
0024D850 ff2301f9 str      xzr, [sp, #0x240]
0024D854 ff1f01f9 str      xzr, [sp, #0x238]
0024D858 ff1b01f9 str      xzr, [sp, #0x230]
0024D85C ff1701f9 str      xzr, [sp, #0x228]
0024D860 ff1301f9 str      xzr, [sp, #0x220]
0024D864 ff0f01f9 str      xzr, [sp, #0x218]
0024D868 ff0b01f9 str      xzr, [sp, #0x210]
0024D86C ff0701f9 str      xzr, [sp, #0x208]
0024D870 fffb00f9 str      xzr, [sp, #0x1f0]
0024D874 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D878 93000035 cbnz     w19, #0x24d888
0024D87C 680f8052 mov      w8, #0x7b
0024D880 88160038 strb     w8, [x20], #1
0024D884 e8a340f9 ldr      x8, [sp, #0x140]
0024D888 002d40f9 ldr      x0, [x8, #0x58]
0024D88C dea60b94 bl       #0x537404
0024D890 e30300aa mov      x3, x0
0024D894 e0c30791 add      x0, sp, #0x1f0
0024D898 01208052 mov      w1, #0x100
0024D89C e2031caa mov      x2, x28
0024D8A0 e403192a mov      w4, w25
0024D8A4 e503162a mov      w5, w22
0024D8A8 92a30e94 bl       #0x5f66f0
0024D8AC e1c30791 add      x1, sp, #0x1f0
0024D8B0 e00314aa mov      x0, x20
0024D8B4 02208052 mov      w2, #0x100
0024D8B8 9aa20e94 bl       #0x5f6320
0024D8BC e0c30791 add      x0, sp, #0x1f0
0024D8C0 6ca20e94 bl       #0x5f6270
0024D8C4 9402008b add      x20, x20, x0
0024D8C8 73060011 add      w19, w19, #1
0024D8CC e0a340f9 ldr      x0, [sp, #0x140]
0024D8D0 80f2ffb4 cbz      x0, #0x24d720
0024D8D4 088c44f8 ldr      x8, [x0, #0x48]!
0024D8D8 080d40f9 ldr      x8, [x8, #0x18]
0024D8DC 00013fd6 blr      x8
0024D8E0 90ffff17 b        #0x24d720
0024D8E4 93000034 cbz      w19, #0x24d8f4
0024D8E8 a80f8052 mov      w8, #0x7d
0024D8EC 88f21f38 sturb    w8, [x20, #-1]
0024D8F0 04000014 b        #0x24d900
0024D8F4 884b8452 mov      w8, #0x225c
0024D8F8 884ba472 movk     w8, #0x225c, lsl #16
0024D8FC 880200b9 str      w8, [x20]
0024D900 e98b40f9 ldr      x9, [sp, #0x110]
0024D904 280c9452 mov      w8, #0xa061
0024D908 a897a072 movk     w8, #0x4bd, lsl #16
0024D90C ff7701f9 str      xzr, [sp, #0x2e8]
0024D910 ff7301f9 str      xzr, [sp, #0x2e0]
0024D914 3401088b add      x20, x9, x8
0024D918 e87b40f9 ldr      x8, [sp, #0xf0]
0024D91C 690f8052 mov      w9, #0x7b
0024D920 ff6f01f9 str      xzr, [sp, #0x2d8]
0024D924 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D928 ff6701f9 str      xzr, [sp, #0x2c8]
0024D92C ff6301f9 str      xzr, [sp, #0x2c0]
0024D930 ff5f01f9 str      xzr, [sp, #0x2b8]
0024D934 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D938 ff5701f9 str      xzr, [sp, #0x2a8]
0024D93C ff5301f9 str      xzr, [sp, #0x2a0]
0024D940 ff4f01f9 str      xzr, [sp, #0x298]
0024D944 ff4b01f9 str      xzr, [sp, #0x290]
0024D948 ff4701f9 str      xzr, [sp, #0x288]
0024D94C ff4301f9 str      xzr, [sp, #0x280]
0024D950 ff3f01f9 str      xzr, [sp, #0x278]
0024D954 ff3b01f9 str      xzr, [sp, #0x270]
0024D958 ff3701f9 str      xzr, [sp, #0x268]
0024D95C ff3301f9 str      xzr, [sp, #0x260]
0024D960 ff2f01f9 str      xzr, [sp, #0x258]
0024D964 ff2b01f9 str      xzr, [sp, #0x250]
0024D968 ff2701f9 str      xzr, [sp, #0x248]
0024D96C ff2301f9 str      xzr, [sp, #0x240]
0024D970 ff1f01f9 str      xzr, [sp, #0x238]
0024D974 ff1b01f9 str      xzr, [sp, #0x230]
0024D978 ff1701f9 str      xzr, [sp, #0x228]
0024D97C ff1301f9 str      xzr, [sp, #0x220]
0024D980 ff0f01f9 str      xzr, [sp, #0x218]
0024D984 ff0b01f9 str      xzr, [sp, #0x210]
0024D988 ff0701f9 str      xzr, [sp, #0x208]
0024D98C fffb00f9 str      xzr, [sp, #0x1f0]
0024D990 09010039 strb     w9, [x8]
0024D994 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D998 7edcfe97 bl       #0x204b90
0024D99C 08fc6491 add      x8, x0, #0x93f, lsl #12
0024D9A0 16c10c91 add      x22, x8, #0x330
0024D9A4 c8024039 ldrb     w8, [x22]
0024D9A8 1f050071 cmp      w8, #1
0024D9AC 81030054 b.ne     #0x24da1c
0024D9B0 08fc6491 add      x8, x0, #0x93f, lsl #12
0024D9B4 e0030591 add      x0, sp, #0x140
0024D9B8 e1078052 mov      w1, #0x3f
0024D9BC 02c90c91 add      x2, x8, #0x332
0024D9C0 ff7f17a9 stp      xzr, xzr, [sp, #0x170]
0024D9C4 03028052 mov      w3, #0x10
0024D9C8 ff7f16a9 stp      xzr, xzr, [sp, #0x160]
0024D9CC ff7f15a9 stp      xzr, xzr, [sp, #0x150]
0024D9D0 ff7f14a9 stp      xzr, xzr, [sp, #0x140]
0024D9D4 43980a94 bl       #0x4f3ae0
0024D9D8 c5064039 ldrb     w5, [x22, #1]
0024D9DC 821e00f0 adrp     x2, #0x620000
0024D9E0 427c0a91 add      x2, x2, #0x29f
0024D9E4 e0c30791 add      x0, sp, #0x1f0
0024D9E8 e4030591 add      x4, sp, #0x140
0024D9EC 01208052 mov      w1, #0x100
0024D9F0 23008052 mov      w3, #1
0024D9F4 33008052 mov      w19, #1
0024D9F8 3ea30e94 bl       #0x5f66f0
0024D9FC e1c30791 add      x1, sp, #0x1f0
0024DA00 e00314aa mov      x0, x20
0024DA04 02208052 mov      w2, #0x100
0024DA08 46a20e94 bl       #0x5f6320
0024DA0C e0c30791 add      x0, sp, #0x1f0
0024DA10 18a20e94 bl       #0x5f6270
0024DA14 9402008b add      x20, x20, x0
0024DA18 02000014 b        #0x24da20
0024DA1C f3031f2a mov      w19, wzr
0024DA20 57008052 mov      w23, #2
0024DA24 35008052 mov      w21, #1
0024DA28 d7020039 strb     w23, [x22]
0024DA2C 98048052 mov      w24, #0x24
0024DA30 19669e52 mov      w25, #0xf330
0024DA34 7912a072 movk     w25, #0x93, lsl #16
0024DA38 3b669e52 mov      w27, #0xf331
0024DA3C 7b12a072 movk     w27, #0x93, lsl #16
0024DA40 961e00f0 adrp     x22, #0x620000
0024DA44 d67e0a91 add      x22, x22, #0x29f
0024DA48 21000014 b        #0x24dacc
0024DA4C 1f2003d5 nop      
0024DA50 ba02189b madd     x26, x21, x24, x0
0024DA54 48669e52 mov      w8, #0xf332
0024DA58 6812a072 movk     w8, #0x93, lsl #16
0024DA5C e0030591 add      x0, sp, #0x140
0024DA60 e1078052 mov      w1, #0x3f
0024DA64 03028052 mov      w3, #0x10
0024DA68 73060011 add      w19, w19, #1
0024DA6C ff7f17a9 stp      xzr, xzr, [sp, #0x170]
0024DA70 ff7f16a9 stp      xzr, xzr, [sp, #0x160]
0024DA74 4203088b add      x2, x26, x8
0024DA78 ff7f15a9 stp      xzr, xzr, [sp, #0x150]
0024DA7C ff7f14a9 stp      xzr, xzr, [sp, #0x140]
0024DA80 18980a94 bl       #0x4f3ae0
0024DA84 456b7b38 ldrb     w5, [x26, x27]
0024DA88 b5060091 add      x21, x21, #1
0024DA8C e0c30791 add      x0, sp, #0x1f0
0024DA90 e4030591 add      x4, sp, #0x140
0024DA94 01208052 mov      w1, #0x100
0024DA98 e20316aa mov      x2, x22
0024DA9C e303152a mov      w3, w21
0024DAA0 14a30e94 bl       #0x5f66f0
0024DAA4 e1c30791 add      x1, sp, #0x1f0
0024DAA8 e00314aa mov      x0, x20
0024DAAC 02208052 mov      w2, #0x100
0024DAB0 1ca20e94 bl       #0x5f6320
0024DAB4 e0c30791 add      x0, sp, #0x1f0
0024DAB8 eea10e94 bl       #0x5f6270
0024DABC 9402008b add      x20, x20, x0
0024DAC0 bfb204f1 cmp      x21, #0x12c
0024DAC4 97030039 strb     w23, [x28]
0024DAC8 40050054 b.eq     #0x24db70
0024DACC ff7701f9 str      xzr, [sp, #0x2e8]
0024DAD0 ff7301f9 str      xzr, [sp, #0x2e0]
0024DAD4 ff6f01f9 str      xzr, [sp, #0x2d8]
0024DAD8 ff6b01f9 str      xzr, [sp, #0x2d0]
0024DADC ff6701f9 str      xzr, [sp, #0x2c8]
0024DAE0 ff6301f9 str      xzr, [sp, #0x2c0]
0024DAE4 ff5f01f9 str      xzr, [sp, #0x2b8]
0024DAE8 ff5b01f9 str      xzr, [sp, #0x2b0]
0024DAEC ff5701f9 str      xzr, [sp, #0x2a8]
0024DAF0 ff5301f9 str      xzr, [sp, #0x2a0]
0024DAF4 ff4f01f9 str      xzr, [sp, #0x298]
0024DAF8 ff4b01f9 str      xzr, [sp, #0x290]
0024DAFC ff4701f9 str      xzr, [sp, #0x288]
0024DB00 ff4301f9 str      xzr, [sp, #0x280]
0024DB04 ff3f01f9 str      xzr, [sp, #0x278]
0024DB08 ff3b01f9 str      xzr, [sp, #0x270]
0024DB0C ff3701f9 str      xzr, [sp, #0x268]
0024DB10 ff3301f9 str      xzr, [sp, #0x260]
0024DB14 ff2f01f9 str      xzr, [sp, #0x258]
0024DB18 ff2b01f9 str      xzr, [sp, #0x250]
0024DB1C ff2701f9 str      xzr, [sp, #0x248]
0024DB20 ff2301f9 str      xzr, [sp, #0x240]
0024DB24 ff1f01f9 str      xzr, [sp, #0x238]
0024DB28 ff1b01f9 str      xzr, [sp, #0x230]
0024DB2C ff1701f9 str      xzr, [sp, #0x228]
0024DB30 ff1301f9 str      xzr, [sp, #0x220]
0024DB34 ff0f01f9 str      xzr, [sp, #0x218]
0024DB38 ff0b01f9 str      xzr, [sp, #0x210]
0024DB3C ff0701f9 str      xzr, [sp, #0x208]
0024DB40 fffb00f9 str      xzr, [sp, #0x1f0]
0024DB44 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024DB48 12dcfe97 bl       #0x204b90
0024DB4C a802189b madd     x8, x21, x24, x0
0024DB50 1c01198b add      x28, x8, x25
0024DB54 88034039 ldrb     w8, [x28]
0024DB58 1f050071 cmp      w8, #1
0024DB5C a0f7ff54 b.eq     #0x24da50
0024DB60 b5060091 add      x21, x21, #1
0024DB64 bfb204f1 cmp      x21, #0x12c
0024DB68 97030039 strb     w23, [x28]
0024DB6C 01fbff54 b.ne     #0x24dacc
0024DB70 93000034 cbz      w19, #0x24db80
0024DB74 a80f8052 mov      w8, #0x7d
0024DB78 88f21f38 sturb    w8, [x20, #-1]
0024DB7C 04000014 b        #0x24db8c
0024DB80 884b8452 mov      w8, #0x225c
0024DB84 884ba472 movk     w8, #0x225c, lsl #16
0024DB88 88f21fb8 stur     w8, [x20, #-1]
0024DB8C fb0b41b9 ldr      w27, [sp, #0x108]
0024DB90 fa9340f9 ldr      x26, [sp, #0x120]
0024DB94 fc1f41b9 ldr      w28, [sp, #0x11c]
0024DB98 ca4fff97 bl       #0x221ac0
0024DB9C 08938652 mov      w8, #0x3498
0024DBA0 2801a072 movk     w8, #9, lsl #16
0024DBA4 13686878 ldrh     w19, [x0, x8]
0024DBA8 930e0034 cbz      w19, #0x24dd78
0024DBAC e86340f9 ldr      x8, [sp, #0xc0]
0024DBB0 f7031f2a mov      w23, wzr
0024DBB4 19839f52 mov      w25, #0xfc18
0024DBB8 f900a072 movk     w25, #7, lsl #16
0024DBBC d4528052 mov      w20, #0x296
0024DBC0 18090091 add      x24, x8, #2
0024DBC4 06000014 b        #0x24dbdc
0024DBC8 1f2003d5 nop      
0024DBCC 1f2003d5 nop      
0024DBD0 730600f1 subs     x19, x19, #1
0024DBD4 39230091 add      x25, x25, #8
0024DBD8 20090054 b.eq     #0x24dcfc
0024DBDC b94fff97 bl       #0x221ac0
0024DBE0 086879f8 ldr      x8, [x0, x25]
0024DBE4 e0c30791 add      x0, sp, #0x1f0
0024DBE8 e1031f2a mov      w1, wzr
0024DBEC e20314aa mov      x2, x20
0024DBF0 e8d700f9 str      x8, [sp, #0x1a8]
0024DBF4 57a10e94 bl       #0x5f6150
0024DBF8 e8a30791 add      x8, sp, #0x1e8
0024DBFC 354aff97 bl       #0x2204d0
0024DC00 e0f740f9 ldr      x0, [sp, #0x1e8]
0024DC04 e8830791 add      x8, sp, #0x1e0
0024DC08 e1a30691 add      x1, sp, #0x1a8
0024DC0C f9d9fe97 bl       #0x2043f0
0024DC10 e0f340f9 ldr      x0, [sp, #0x1e0]
0024DC14 5de2fe97 bl       #0x206588
0024DC18 c0050037 tbnz     w0, #0, #0x24dcd0
0024DC1C e8f340f9 ldr      x8, [sp, #0x1e0]
0024DC20 15810191 add      x21, x8, #0x60
0024DC24 e8030591 add      x8, sp, #0x140
0024DC28 ea52ff97 bl       #0x2227d0
0024DC2C e0a340f9 ldr      x0, [sp, #0x140]
0024DC30 e10315aa mov      x1, x21
0024DC34 24d3fe97 bl       #0x2028c4
0024DC38 f603002a mov      w22, w0
0024DC3C e0a340f9 ldr      x0, [sp, #0x140]
0024DC40 800000b4 cbz      x0, #0x24dc50
0024DC44 088c44f8 ldr      x8, [x0, #0x48]!
0024DC48 080d40f9 ldr      x8, [x8, #0x18]
0024DC4C 00013fd6 blr      x8
0024DC50 b6010037 tbnz     w22, #0, #0x24dc84
0024DC54 e8030591 add      x8, sp, #0x140
0024DC58 2a4aff97 bl       #0x220500
0024DC5C e0a340f9 ldr      x0, [sp, #0x140]
0024DC60 e10315aa mov      x1, x21
0024DC64 18d3fe97 bl       #0x2028c4
0024DC68 f503002a mov      w21, w0
0024DC6C e0a340f9 ldr      x0, [sp, #0x140]
0024DC70 800000b4 cbz      x0, #0x24dc80
0024DC74 088c44f8 ldr      x8, [x0, #0x48]!
0024DC78 080d40f9 ldr      x8, [x8, #0x18]
0024DC7C 00013fd6 blr      x8
0024DC80 95020036 tbz      w21, #0, #0x24dcd0
0024DC84 e8f340f9 ldr      x8, [sp, #0x1e0]
0024DC88 e0c30791 add      x0, sp, #0x1f0
0024DC8C f7060011 add      w23, w23, #1
0024DC90 012d40f9 ldr      x1, [x8, #0x58]
0024DC94 f5b80a94 bl       #0x4fc068
0024DC98 1f030039 strb     wzr, [x24]
0024DC9C f503002a mov      w21, w0
0024DCA0 e8f340f9 ldr      x8, [sp, #0x1e0]
0024DCA4 002d40f9 ldr      x0, [x8, #0x58]
0024DCA8 d7a50b94 bl       #0x537404
0024DCAC 15930078 sturh    w21, [x24, #9]
0024DCB0 162f0091 add      x22, x24, #0xb
0024DCB4 b53e0012 and      w21, w21, #0xffff
0024DCB8 001300f8 stur     x0, [x24, #1]
0024DCBC e1c30791 add      x1, sp, #0x1f0
0024DCC0 e00316aa mov      x0, x22
0024DCC4 e20315aa mov      x2, x21
0024DCC8 46a20e94 bl       #0x5f65e0
0024DCCC d802158b add      x24, x22, x21
0024DCD0 e0f340f9 ldr      x0, [sp, #0x1e0]
0024DCD4 800000b4 cbz      x0, #0x24dce4
0024DCD8 088c44f8 ldr      x8, [x0, #0x48]!
0024DCDC 080d40f9 ldr      x8, [x8, #0x18]
0024DCE0 00013fd6 blr      x8
0024DCE4 e0f740f9 ldr      x0, [sp, #0x1e8]
0024DCE8 40f7ffb4 cbz      x0, #0x24dbd0
0024DCEC 088c44f8 ldr      x8, [x0, #0x48]!
0024DCF0 080d40f9 ldr      x8, [x8, #0x18]
0024DCF4 00013fd6 blr      x8
0024DCF8 b6ffff17 b        #0x24dbd0
0024DCFC ff3e0072 tst      w23, #0xffff
0024DD00 40030054 b.eq     #0x24dd68
0024DD04 e98b40f9 ldr      x9, [sp, #0x110]
0024DD08 08609552 mov      w8, #0xab00
0024DD0C 8885a072 movk     w8, #0x42c, lsl #16
0024DD10 f66340f9 ldr      x22, [sp, #0xc0]
0024DD14 15fc8c52 mov      w21, #0x67e0
0024DD18 b506a072 movk     w21, #0x35, lsl #16
0024DD1C e1031f2a mov      w1, wzr
0024DD20 e20315aa mov      x2, x21
0024DD24 d7020079 strh     w23, [x22]
0024DD28 3401088b add      x20, x9, x8
0024DD2C 1303164b sub      w19, w24, w22
0024DD30 e00314aa mov      x0, x20
0024DD34 07a10e94 bl       #0x5f6150
0024DD38 637e4093 sxtw     x3, w19
0024DD3C e00314aa mov      x0, x20
0024DD40 01fc8c52 mov      w1, #0x67e0
0024DD44 a106a072 movk     w1, #0x35, lsl #16
0024DD48 e20316aa mov      x2, x22
0024DD4C e4031f2a mov      w4, wzr
0024DD50 e5031f2a mov      w5, wzr
0024DD54 d5200294 bl       #0x2d60a8
0024DD58 e00316aa mov      x0, x22
0024DD5C e10314aa mov      x1, x20
0024DD60 e20315aa mov      x2, x21
0024DD64 1fa20e94 bl       #0x5f65e0
0024DD68 564fff97 bl       #0x221ac0
0024DD6C 08938652 mov      w8, #0x3498
0024DD70 2801a072 movk     w8, #9, lsl #16
0024DD74 1f6828b8 str      wzr, [x0, x8]
0024DD78 5f1f0071 cmp      w26, #7
0024DD7C 81050054 b.ne     #0x24de2c
0024DD80 a82c0090 adrp     x8, #0x7e1000
0024DD84 08411891 add      x8, x8, #0x610
0024DD88 000140f9 ldr      x0, [x8]
0024DD8C e8c30791 add      x8, sp, #0x1f0
0024DD90 ab90fd97 bl       #0x1b203c
0024DD94 34008052 mov      w20, #1
0024DD98 93018052 mov      w19, #0xc
0024DD9C f7231291 add      x23, sp, #0x488
0024DDA0 58008052 mov      w24, #2
0024DDA4 06000014 b        #0x24ddbc
0024DDA8 1f2003d5 nop      
0024DDAC 1f2003d5 nop      
0024DDB0 94060011 add      w20, w20, #1
0024DDB4 9f0e1071 cmp      w20, #0x403
0024DDB8 e0030054 b.eq     #0x24de34
0024DDBC f5031f2a mov      w21, wzr
0024DDC0 04000014 b        #0x24ddd0
0024DDC4 b5060011 add      w21, w21, #1
0024DDC8 bf720071 cmp      w21, #0x1c
0024DDCC 20ffff54 b.eq     #0x24ddb0
0024DDD0 e003142a mov      w0, w20
0024DDD4 e103152a mov      w1, w21
0024DDD8 8e5fff97 bl       #0x225c10
0024DDDC f60300aa mov      x22, x0
0024DDE0 e003142a mov      w0, w20
0024DDE4 e103152a mov      w1, w21
0024DDE8 925fff97 bl       #0x225c30
0024DDEC d6fe0736 tbz      w22, #0, #0x24ddc4
0024DDF0 a0fe2737 tbnz     w0, #4, #0x24ddc4
0024DDF4 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024DDF8 e103142a mov      w1, w20
0024DDFC 9fccfd97 bl       #0x1c1078
0024DE00 083c0012 and      w8, w0, #0xffff
0024DE04 1f910171 cmp      w8, #0x64
0024DE08 e3fdff54 b.lo     #0x24ddc4
0024DE0C 9f3f1f71 cmp      w28, #0x7cf
0024DE10 a8fdff54 b.hi     #0x24ddc4
0024DE14 885fb39b umaddl   x8, w28, w19, x23
0024DE18 9c070011 add      w28, w28, #1
0024DE1C 140100b9 str      w20, [x8]
0024DE20 15090079 strh     w21, [x8, #4]
0024DE24 180900b9 str      w24, [x8, #8]
0024DE28 e7ffff17 b        #0x24ddc4
0024DE2C f48b40f9 ldr      x20, [sp, #0x110]
0024DE30 07000014 b        #0x24de4c
0024DE34 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024DE38 f48b40f9 ldr      x20, [sp, #0x110]
0024DE3C 800000b4 cbz      x0, #0x24de4c
0024DE40 088c44f8 ldr      x8, [x0, #0x48]!
0024DE44 080d40f9 ldr      x8, [x8, #0x18]
0024DE48 00013fd6 blr      x8
0024DE4C e95b40f9 ldr      x9, [sp, #0xb0]
0024DE50 9f070071 cmp      w28, #1
0024DE54 8b050054 b.lt     #0x24df04
0024DE58 6a0f8052 mov      w10, #0x7b
0024DE5C 28989152 mov      w8, #0x8cc1
0024DE60 28a2a072 movk     w8, #0x511, lsl #16
0024DE64 2a010039 strb     w10, [x9]
0024DE68 e9231291 add      x9, sp, #0x488
0024DE6C f3031c2a mov      w19, w28
0024DE70 9402088b add      x20, x20, x8
0024DE74 37210091 add      x23, x9, #8
0024DE78 950c8052 mov      w21, #0x64
0024DE7C 161e00d0 adrp     x22, #0x60f000
0024DE80 d68a2991 add      x22, x22, #0xa62
0024DE84 e3825fb8 ldur     w3, [x23, #-8]
0024DE88 e0c30791 add      x0, sp, #0x1f0
0024DE8C e10315aa mov      x1, x21
0024DE90 e4c25f78 ldurh    w4, [x23, #-4]
0024DE94 e20316aa mov      x2, x22
0024DE98 ff5302b9 str      wzr, [sp, #0x250]
0024DE9C e5c640b8 ldr      w5, [x23], #0xc
0024DEA0 ff2701f9 str      xzr, [sp, #0x248]
0024DEA4 ff2301f9 str      xzr, [sp, #0x240]
0024DEA8 ff1f01f9 str      xzr, [sp, #0x238]
0024DEAC ff1b01f9 str      xzr, [sp, #0x230]
0024DEB0 ff1701f9 str      xzr, [sp, #0x228]
0024DEB4 ff1301f9 str      xzr, [sp, #0x220]
0024DEB8 ff0f01f9 str      xzr, [sp, #0x218]
0024DEBC ff0b01f9 str      xzr, [sp, #0x210]
0024DEC0 ff0701f9 str      xzr, [sp, #0x208]
0024DEC4 fffb00f9 str      xzr, [sp, #0x1f0]
0024DEC8 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024DECC 09a20e94 bl       #0x5f66f0
0024DED0 e1c30791 add      x1, sp, #0x1f0
0024DED4 e00314aa mov      x0, x20
0024DED8 e20315aa mov      x2, x21
0024DEDC 11a10e94 bl       #0x5f6320
0024DEE0 e0c30791 add      x0, sp, #0x1f0
0024DEE4 e3a00e94 bl       #0x5f6270
0024DEE8 9402008b add      x20, x20, x0
0024DEEC 730600f1 subs     x19, x19, #1
0024DEF0 a1fcff54 b.ne     #0x24de84
0024DEF4 a80f8052 mov      w8, #0x7d
0024DEF8 88f21f38 sturb    w8, [x20, #-1]
0024DEFC f48b40f9 ldr      x20, [sp, #0x110]
0024DF00 03000014 b        #0x24df0c
0024DF04 68af8f52 mov      w8, #0x7d7b
0024DF08 28010079 strh     w8, [x9]
0024DF0C 48170051 sub      w8, w26, #5
0024DF10 ff5302b9 str      wzr, [sp, #0x250]
0024DF14 1f050071 cmp      w8, #1
0024DF18 ff2701f9 str      xzr, [sp, #0x248]
0024DF1C ff2301f9 str      xzr, [sp, #0x240]
0024DF20 ff1f01f9 str      xzr, [sp, #0x238]
0024DF24 ff1b01f9 str      xzr, [sp, #0x230]
0024DF28 ff1701f9 str      xzr, [sp, #0x228]
0024DF2C ff1301f9 str      xzr, [sp, #0x220]
0024DF30 ff0f01f9 str      xzr, [sp, #0x218]
0024DF34 ff0b01f9 str      xzr, [sp, #0x210]
0024DF38 ff0701f9 str      xzr, [sp, #0x208]
0024DF3C fffb00f9 str      xzr, [sp, #0x1f0]
0024DF40 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024DF44 28030054 b.hi     #0x24dfa8
0024DF48 5f170071 cmp      w26, #5
0024DF4C 08068052 mov      w8, #0x30
0024DF50 1805881a cinc     w24, w8, ne
0024DF54 a82c0090 adrp     x8, #0x7e1000
0024DF58 08011891 add      x8, x8, #0x600
0024DF5C 000140f9 ldr      x0, [x8]
0024DF60 e8030591 add      x8, sp, #0x140
0024DF64 5842fd97 bl       #0x19e8c4
0024DF68 f3a340f9 ldr      x19, [sp, #0x140]
0024DF6C b30000b4 cbz      x19, #0x24df80
0024DF70 e00313aa mov      x0, x19
0024DF74 088c44f8 ldr      x8, [x0, #0x48]!
0024DF78 080d40f9 ldr      x8, [x8, #0x18]
0024DF7C 00013fd6 blr      x8
0024DF80 687640f9 ldr      x8, [x19, #0xe8]
0024DF84 810c8052 mov      w1, #0x64
0024DF88 e0c30791 add      x0, sp, #0x1f0
0024DF8C e2030591 add      x2, sp, #0x140
0024DF90 03018052 mov      w3, #8
0024DF94 e8a300f9 str      x8, [sp, #0x140]
0024DF98 e4031f2a mov      w4, wzr
0024DF9C 25008052 mov      w5, #1
0024DFA0 42200294 bl       #0x2d60a8
0024DFA4 9f000014 b        #0x24e220
0024DFA8 5f2b0071 cmp      w26, #0xa
0024DFAC 81130054 b.ne     #0x24e21c
0024DFB0 e93b40f9 ldr      x9, [sp, #0x70]
0024DFB4 28409352 mov      w8, #0x9a01
0024DFB8 88a2a072 movk     w8, #0x514, lsl #16
0024DFBC f3031f2a mov      w19, wzr
0024DFC0 6a0f8052 mov      w10, #0x7b
0024DFC4 2a010039 strb     w10, [x9]
0024DFC8 9402088b add      x20, x20, x8
0024DFCC 151e00d0 adrp     x21, #0x60f000
0024DFD0 b5ea2991 add      x21, x21, #0xa7a
0024DFD4 36008052 mov      w22, #1
0024DFD8 371e0090 adrp     x23, #0x611000
0024DFDC f7fe3191 add      x23, x23, #0xc7f
0024DFE0 980c8052 mov      w24, #0x64
0024DFE4 f91d00b0 adrp     x25, #0x60a000
0024DFE8 395b3f91 add      x25, x25, #0xfd6
0024DFEC 14000014 b        #0x24e03c
0024DFF0 e4534379 ldrh     w4, [sp, #0x1a8]
0024DFF4 e0030591 add      x0, sp, #0x140
0024DFF8 e10318aa mov      x1, x24
0024DFFC e5574379 ldrh     w5, [sp, #0x1aa]
0024E000 e20315aa mov      x2, x21
0024E004 e303162a mov      w3, w22
0024E008 e65b4379 ldrh     w6, [sp, #0x1ac]
0024E00C b9a10e94 bl       #0x5f66f0
0024E010 e1030591 add      x1, sp, #0x140
0024E014 e00314aa mov      x0, x20
0024E018 e20318aa mov      x2, x24
0024E01C c1a00e94 bl       #0x5f6320
0024E020 e0030591 add      x0, sp, #0x140
0024E024 93a00e94 bl       #0x5f6270
0024E028 9402008b add      x20, x20, x0
0024E02C 33008052 mov      w19, #1
0024E030 d6060011 add      w22, w22, #1
0024E034 df0e1071 cmp      w22, #0x403
0024E038 20050054 b.eq     #0x24e0dc
0024E03C ff7f1da9 stp      xzr, xzr, [sp, #0x1d0]
0024E040 ffd700f9 str      xzr, [sp, #0x1a8]
0024E044 ffeb01b9 str      wzr, [sp, #0x1e8]
0024E048 ff7f1ca9 stp      xzr, xzr, [sp, #0x1c0]
0024E04C ff7f1ba9 stp      xzr, xzr, [sp, #0x1b0]
0024E050 b08bfe97 bl       #0x1f0f10
0024E054 e2a30691 add      x2, sp, #0x1a8
0024E058 e3a30791 add      x3, sp, #0x1e8
0024E05C e103162a mov      w1, w22
0024E060 5410fe97 bl       #0x1d21b0
0024E064 e8eb41b9 ldr      w8, [sp, #0x1e8]
0024E068 48feff34 cbz      w8, #0x24e030
0024E06C 1f0d0071 cmp      w8, #3
0024E070 ffa301b9 str      wzr, [sp, #0x1a0]
0024E074 ff7f19a9 stp      xzr, xzr, [sp, #0x190]
0024E078 ff7f18a9 stp      xzr, xzr, [sp, #0x180]
0024E07C ff7f17a9 stp      xzr, xzr, [sp, #0x170]
0024E080 ff7f16a9 stp      xzr, xzr, [sp, #0x160]
0024E084 ff7f15a9 stp      xzr, xzr, [sp, #0x150]
0024E088 ff7f14a9 stp      xzr, xzr, [sp, #0x140]
0024E08C 20fbff54 b.eq     #0x24dff0
0024E090 1f090071 cmp      w8, #2
0024E094 40010054 b.eq     #0x24e0bc
0024E098 1f050071 cmp      w8, #1
0024E09C a1fcff54 b.ne     #0x24e030
0024E0A0 e4534379 ldrh     w4, [sp, #0x1a8]
0024E0A4 e0030591 add      x0, sp, #0x140
0024E0A8 e10318aa mov      x1, x24
0024E0AC e20319aa mov      x2, x25
0024E0B0 e303162a mov      w3, w22
0024E0B4 8fa10e94 bl       #0x5f66f0
0024E0B8 d6ffff17 b        #0x24e010
0024E0BC e4534379 ldrh     w4, [sp, #0x1a8]
0024E0C0 e0030591 add      x0, sp, #0x140
0024E0C4 e10318aa mov      x1, x24
0024E0C8 e5574379 ldrh     w5, [sp, #0x1aa]
0024E0CC e20317aa mov      x2, x23
0024E0D0 e303162a mov      w3, w22
0024E0D4 87a10e94 bl       #0x5f66f0
0024E0D8 ceffff17 b        #0x24e010
0024E0DC a80f8052 mov      w8, #0x7d
0024E0E0 53090036 tbz      w19, #0, #0x24e208
0024E0E4 88f21f38 sturb    w8, [x20, #-1]
0024E0E8 882a00b0 adrp     x8, #0x79f000
0024E0EC f93b40f9 ldr      x25, [sp, #0x70]
0024E0F0 08ed41f9 ldr      x8, [x8, #0x3d8]
0024E0F4 16e88252 mov      w22, #0x1740
0024E0F8 9600a072 movk     w22, #4, lsl #16
0024E0FC e10316aa mov      x1, x22
0024E100 02018052 mov      w2, #8
0024E104 15a88152 mov      w21, #0xd40
0024E108 7500a072 movk     w21, #3, lsl #16
0024E10C 9302194b sub      w19, w20, w25
0024E110 080140f9 ldr      x8, [x8]
0024E114 145541f9 ldr      x20, [x8, #0x2a8]
0024E118 880240f9 ldr      x8, [x20]
0024E11C e00314aa mov      x0, x20
0024E120 080940f9 ldr      x8, [x8, #0x10]
0024E124 00013fd6 blr      x8
0024E128 880240f9 ldr      x8, [x20]
0024E12C f70300aa mov      x23, x0
0024E130 e00314aa mov      x0, x20
0024E134 e10315aa mov      x1, x21
0024E138 02018052 mov      w2, #8
0024E13C 080940f9 ldr      x8, [x8, #0x10]
0024E140 00013fd6 blr      x8
0024E144 f80300aa mov      x24, x0
0024E148 647e4093 sxtw     x4, w19
0024E14C ffa300f9 str      xzr, [sp, #0x140]
0024E150 e0030591 add      x0, sp, #0x140
0024E154 e10318aa mov      x1, x24
0024E158 e20315aa mov      x2, x21
0024E15C e30319aa mov      x3, x25
0024E160 e50317aa mov      x5, x23
0024E164 e60316aa mov      x6, x22
0024E168 f30319aa mov      x19, x25
0024E16C d9a20e94 bl       #0x5f6cd0
0024E170 e0020036 tbz      w0, #0, #0x24e1cc
0024E174 e98b40f9 ldr      x9, [sp, #0x110]
0024E178 08609552 mov      w8, #0xab00
0024E17C 8885a072 movk     w8, #0x42c, lsl #16
0024E180 02fc8c52 mov      w2, #0x67e0
0024E184 a206a072 movk     w2, #0x35, lsl #16
0024E188 e1031f2a mov      w1, wzr
0024E18C 3901088b add      x25, x9, x8
0024E190 e00319aa mov      x0, x25
0024E194 ef9f0e94 bl       #0x5f6150
0024E198 e3a340f9 ldr      x3, [sp, #0x140]
0024E19C e00319aa mov      x0, x25
0024E1A0 01fc8c52 mov      w1, #0x67e0
0024E1A4 a106a072 movk     w1, #0x35, lsl #16
0024E1A8 e20318aa mov      x2, x24
0024E1AC e4031f2a mov      w4, wzr
0024E1B0 e5031f2a mov      w5, wzr
0024E1B4 bd1f0294 bl       #0x2d60a8
0024E1B8 02a88152 mov      w2, #0xd40
0024E1BC 6200a072 movk     w2, #3, lsl #16
0024E1C0 e00313aa mov      x0, x19
0024E1C4 e10319aa mov      x1, x25
0024E1C8 06a10e94 bl       #0x5f65e0
0024E1CC 880240f9 ldr      x8, [x20]
0024E1D0 e00314aa mov      x0, x20
0024E1D4 e10317aa mov      x1, x23
0024E1D8 e20316aa mov      x2, x22
0024E1DC 03018052 mov      w3, #8
0024E1E0 080d40f9 ldr      x8, [x8, #0x18]
0024E1E4 00013fd6 blr      x8
0024E1E8 880240f9 ldr      x8, [x20]
0024E1EC e00314aa mov      x0, x20
0024E1F0 e10318aa mov      x1, x24
0024E1F4 e20315aa mov      x2, x21
0024E1F8 03018052 mov      w3, #8
0024E1FC 080d40f9 ldr      x8, [x8, #0x18]
0024E200 00013fd6 blr      x8
0024E204 06000014 b        #0x24e21c
0024E208 e03b40f9 ldr      x0, [sp, #0x70]
0024E20C 02a88152 mov      w2, #0xd40
0024E210 6200a072 movk     w2, #3, lsl #16
0024E214 e1031f2a mov      w1, wzr
0024E218 ce9f0e94 bl       #0x5f6150
0024E21C f8031f2a mov      w24, wzr
0024E220 14688952 mov      w20, #0x4b40
0024E224 9409a072 movk     w20, #0x4c, lsl #16
0024E228 7665ff97 bl       #0x227800
0024E22C 254eff97 bl       #0x221ac0
0024E230 c8469352 mov      w8, #0x9a36
0024E234 fa8b40f9 ldr      x26, [sp, #0x110]
0024E238 13686838 ldrb     w19, [x0, x8]
0024E23C 08908252 mov      w8, #0x1480
0024E240 8872a072 movk     w8, #0x394, lsl #16
0024E244 5503088b add      x21, x26, x8
0024E248 f3000034 cbz      w19, #0x24e264
0024E24C e11d00f0 adrp     x1, #0x60d000
0024E250 21603191 add      x1, x1, #0xc58
0024E254 e00315aa mov      x0, x21
0024E258 e20314aa mov      x2, x20
0024E25C 31a00e94 bl       #0x5f6320
0024E260 28000014 b        #0x24e300
0024E264 08c48b52 mov      w8, #0x5e20
0024E268 c895a072 movk     w8, #0x4ae, lsl #16
0024E26C 09508952 mov      w9, #0x4a80
0024E270 49a0a072 movk     w9, #0x502, lsl #16
0024E274 5603088b add      x22, x26, x8
0024E278 08a48a52 mov      w8, #0x5520
0024E27C 288ea072 movk     w8, #0x471, lsl #16
0024E280 5703098b add      x23, x26, x9
0024E284 5903088b add      x25, x26, x8
0024E288 a270f897 bl       #0x6a510
0024E28C 0b409352 mov      w11, #0x9a00
0024E290 8ba2a072 movk     w11, #0x514, lsl #16
0024E294 e57740f9 ldr      x5, [sp, #0xe8]
0024E298 4b030b8b add      x11, x26, x11
0024E29C 0a989152 mov      w10, #0x8cc0
0024E2A0 2aa2a072 movk     w10, #0x511, lsl #16
0024E2A4 eb2700f9 str      x11, [sp, #0x48]
0024E2A8 eb6f40b9 ldr      w11, [sp, #0x6c]
0024E2AC 4a030a8b add      x10, x26, x10
0024E2B0 08549c52 mov      w8, #0xe2a0
0024E2B4 8899a072 movk     w8, #0x4cc, lsl #16
0024E2B8 f83b00b9 str      w24, [sp, #0x38]
0024E2BC 4803088b add      x8, x26, x8
0024E2C0 091c0012 and      w9, w0, #0xff
0024E2C4 e91300b9 str      w9, [sp, #0x10]
0024E2C8 e21d00d0 adrp     x2, #0x60c000
0024E2CC 42601891 add      x2, x2, #0x618
0024E2D0 eb4300b9 str      w11, [sp, #0x40]
0024E2D4 ebc30791 add      x11, sp, #0x1f0
0024E2D8 e00315aa mov      x0, x21
0024E2DC e10314aa mov      x1, x20
0024E2E0 eaaf02a9 stp      x10, x11, [sp, #0x28]
0024E2E4 e60316aa mov      x6, x22
0024E2E8 e4ab4da9 ldp      x4, x10, [sp, #0xd8]
0024E2EC e70317aa mov      x7, x23
0024E2F0 e8ab01a9 stp      x8, x10, [sp, #0x18]
0024E2F4 e80f4fa9 ldp      x8, x3, [sp, #0xf0]
0024E2F8 f92300a9 stp      x25, x8, [sp]
0024E2FC fda00e94 bl       #0x5f66f0
0024E300 f88340f9 ldr      x24, [sp, #0x100]
0024E304 08908252 mov      w8, #0x1480
0024E308 8872a072 movk     w8, #0x394, lsl #16
0024E30C 5503088b add      x21, x26, x8
0024E310 02688952 mov      w2, #0x4b40
0024E314 8209a072 movk     w2, #0x4c, lsl #16
0024E318 e0031aaa mov      x0, x26
0024E31C e10315aa mov      x1, x21
0024E320 601cff97 bl       #0x2154a0
0024E324 08f88b52 mov      w8, #0x5fc0
0024E328 087ca072 movk     w8, #0x3e0, lsl #16
0024E32C 5603088b add      x22, x26, x8
0024E330 e44dff97 bl       #0x221ac0
0024E334 f70300aa mov      x23, x0
0024E338 aefcfe97 bl       #0x20d5f0
0024E33C 28548252 mov      w8, #0x12a1
0024E340 421e00b0 adrp     x2, #0x617000
0024E344 42383891 add      x2, x2, #0xe0e
0024E348 0400088b add      x4, x0, x8
0024E34C e00316aa mov      x0, x22
0024E350 e10314aa mov      x1, x20
0024E354 e30317aa mov      x3, x23
0024E358 e50315aa mov      x5, x21
0024E35C e5a00e94 bl       #0x5f66f0
0024E360 a8008052 mov      w8, #5
0024E364 e0031aaa mov      x0, x26
0024E368 e84301b9 str      w8, [sp, #0x140]
0024E36C a82a0090 adrp     x8, #0x7a2000
0024E370 e10316aa mov      x1, x22
0024E374 082145f9 ldr      x8, [x8, #0xa40]
0024E378 ffff17a9 stp      xzr, xzr, [sp, #0x178]
0024E37C 092940a9 ldp      x9, x10, [x8]
0024E380 e9ab14a9 stp      x9, x10, [sp, #0x148]
0024E384 092941a9 ldp      x9, x10, [x8, #0x10]
0024E388 081140f9 ldr      x8, [x8, #0x20]
0024E38C e9ab15a9 stp      x9, x10, [sp, #0x158]
0024E390 e8ff16a9 stp      x8, xzr, [sp, #0x168]
0024E394 3735ff97 bl       #0x21b870
0024E398 ca4dff97 bl       #0x221ac0
0024E39C 88a58652 mov      w8, #0x352c
0024E3A0 2803a072 movk     w8, #0x19, lsl #16
0024E3A4 e15f40f9 ldr      x1, [sp, #0xb8]
0024E3A8 096868b8 ldr      w9, [x0, x8]
0024E3AC 0a848452 mov      w10, #0x2420
0024E3B0 ea5fa072 movk     w10, #0x2ff, lsl #16
0024E3B4 54030a8b add      x20, x26, x10
0024E3B8 e3030591 add      x3, sp, #0x140
0024E3BC 29050011 add      w9, w9, #1
0024E3C0 096828b8 str      w9, [x0, x8]
0024E3C4 48336791 add      x8, x26, #0x9cc, lsl #12
0024E3C8 e00314aa mov      x0, x20
0024E3CC 02812891 add      x2, x8, #0xa20
0024E3D0 78f40b94 bl       #0x54b5b0
0024E3D4 c0010036 tbz      w0, #0, #0x24e40c
0024E3D8 e89740f9 ldr      x8, [sp, #0x128]
0024E3DC 083d0012 and      w8, w8, #0xffff
0024E3E0 e9d340b9 ldr      w9, [sp, #0xd0]
0024E3E4 f44f40f9 ldr      x20, [sp, #0x98]
0024E3E8 29011b2a orr      w9, w9, w27
0024E3EC 0801092a orr      w8, w8, w9
0024E3F0 29008052 mov      w9, #1
0024E3F4 890e00b9 str      w9, [x20, #0xc]
0024E3F8 68020034 cbz      w8, #0x24e444
0024E3FC 53020035 cbnz     w19, #0x24e444
0024E400 e98b40f9 ldr      x9, [sp, #0x110]
0024E404 e8008052 mov      w8, #7
0024E408 0d000014 b        #0x24e43c
0024E40C e00314aa mov      x0, x20
0024E410 b5f50b94 bl       #0x54bae4
0024E414 080040b9 ldr      w8, [x0]
0024E418 201e00f0 adrp     x0, #0x615000
0024E41C 006c0791 add      x0, x0, #0x1db
0024E420 e3031faa mov      x3, xzr
0024E424 01550012 and      w1, w8, #0x3fffff
0024E428 e84b40f9 ldr      x8, [sp, #0x90]
0024E42C 020140b9 ldr      w2, [x8]
0024E430 1c47ff97 bl       #0x2200a0
0024E434 e98b40f9 ldr      x9, [sp, #0x110]
0024E438 28018052 mov      w8, #9
0024E43C e0031f2a mov      w0, wzr
0024E440 1a000014 b        #0x24e4a8
0024E444 335eff97 bl       #0x225d10
0024E448 e98b40f9 ldr      x9, [sp, #0x110]
0024E44C a0000036 tbz      w0, #0, #0x24e460
0024E450 c8008052 mov      w8, #6
0024E454 880e00b9 str      w8, [x20, #0xc]
0024E458 e8008052 mov      w8, #7
0024E45C f8ffff17 b        #0x24e43c
0024E460 28008052 mov      w8, #1
0024E464 08cb1279 strh     w8, [x24, #0x964]
0024E468 08c48952 mov      w8, #0x4e20
0024E46C 880a00b9 str      w8, [x20, #8]
0024E470 48018052 mov      w8, #0xa
0024E474 f2ffff17 b        #0x24e43c
0024E478 e00314aa mov      x0, x20
0024E47C 9af50b94 bl       #0x54bae4
0024E480 080040b9 ldr      w8, [x0]
0024E484 201e0090 adrp     x0, #0x612000
0024E488 00942891 add      x0, x0, #0xa25
0024E48C 420340b9 ldr      w2, [x26]
0024E490 01550012 and      w1, w8, #0x3fffff
0024E494 e3031faa mov      x3, xzr
0024E498 0247ff97 bl       #0x2200a0
0024E49C e0031f2a mov      w0, wzr
0024E4A0 28018052 mov      w8, #9
0024E4A4 e98b40f9 ldr      x9, [sp, #0x110]
0024E4A8 281500b9 str      w8, [x9, #0x14]
0024E4AC ff1b4091 add      sp, sp, #6, lsl #12
0024E4B0 ff030e91 add      sp, sp, #0x380
0024E4B4 f44f45a9 ldp      x20, x19, [sp, #0x50]
0024E4B8 f65744a9 ldp      x22, x21, [sp, #0x40]
0024E4BC f85f43a9 ldp      x24, x23, [sp, #0x30]
0024E4C0 fa6742a9 ldp      x26, x25, [sp, #0x20]
0024E4C4 fc6f41a9 ldp      x28, x27, [sp, #0x10]
0024E4C8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0024E4CC c0035fd6 ret      
0024E4D0 280f40b9 ldr      w8, [x25, #0xc]
0024E4D4 08050011 add      w8, w8, #1
0024E4D8 1f1d0071 cmp      w8, #7
0024E4DC 280f00b9 str      w8, [x25, #0xc]
0024E4E0 e1000054 b.ne     #0x24e4fc
0024E4E4 774dff97 bl       #0x221ac0
0024E4E8 c8469352 mov      w8, #0x9a36
0024E4EC 08686838 ldrb     w8, [x0, x8]
0024E4F0 c8000034 cbz      w8, #0x24e508
0024E4F4 df4fff97 bl       #0x222470
0024E4F8 05000014 b        #0x24e50c
0024E4FC e0031f2a mov      w0, wzr
0024E500 681600b9 str      w8, [x19, #0x14]
0024E504 eaffff17 b        #0x24e4ac
0024E508 5a51ff97 bl       #0x222a70
0024E50C 20008052 mov      w0, #1
0024E510 ccf8fe97 bl       #0x20c840
0024E514 08018052 mov      w8, #8
0024E518 e0031f2a mov      w0, wzr
0024E51C 681600b9 str      w8, [x19, #0x14]
0024E520 e3ffff17 b        #0x24e4ac
~~~
