/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c8e50; name: FUN_.text__001c8e50
 */


void FUN__text__001c8e50(long param_1,int param_2,byte param_3,undefined4 param_4,undefined8 param_5
                        )

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_2a8;
  ulong local_298 [3];
  long local_280;
  ulong local_278;
  ulong local_270;
  byte local_268 [520];
  
  lVar7 = *(long *)(param_1 + 8);
  *(int *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  lVar9 = *(long *)(lVar7 + 0x2d0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    param_2 = *(int *)(param_1 + 0x30);
  }
  lVar7 = lVar7 + 0x110;
  uVar15 = 0xcbf29ce484222645;
  memset(local_268,0,0x200);
  local_278 = 0;
  if (param_2 == 0) {
    bVar2 = (param_3 & 1) == 0;
    uVar8 = 0x70bdbbeb7d14c3b7;
    if (bVar2) {
      uVar8 = 0x398f8f85ac324a19;
    }
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    local_2a8 = 0x720cef;
    if (bVar2) {
      local_2a8 = 0x71e452;
    }
    uVar8 = 0x71e45d;
    if (bVar2) {
      uVar8 = 0x710e23;
    }
    *(byte *)(param_1 + 0x280) = (param_3 ^ 0xff) & 1;
    uVar13 = 0x70c357;
    if (bVar2) {
      uVar13 = 0x70e33b;
    }
    snprintf((char *)local_268,0x200,(char *)0x72003d,uVar8);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x2f8) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x71b6e9,uVar8);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x300) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x72005b,uVar8);
    if (local_268[0] == 0) {
      local_270 = 0xcbf29ce484222645;
      uVar10 = 0x70e349;
    }
    else {
      local_270 = 0xcbf29ce484222645;
      uVar10 = 0x70e349;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        local_270 = (local_270 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x280) = 0;
    bVar2 = (param_3 & 1) == 0;
    uVar8 = 0xb58d50bc988b9d81;
    if (bVar2) {
      uVar8 = 0xab83cc283af8f17f;
    }
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    local_2a8 = 0x70f883;
    if (bVar2) {
      local_2a8 = 0x70b7fb;
    }
    uVar8 = 0x70c37a;
    if (bVar2) {
      uVar8 = 0x70c364;
    }
    uVar13 = 0x71686f;
    if (bVar2) {
      uVar13 = 0x70edcd;
    }
    snprintf((char *)local_268,0x200,(char *)0x70da90,uVar8);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x2f8) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x713b18,uVar8);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x300) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x71682e,uVar8);
    if (local_268[0] == 0) {
      local_270 = 0xcbf29ce484222645;
      uVar10 = 0x70eddb;
    }
    else {
      local_270 = 0xcbf29ce484222645;
      uVar10 = 0x70eddb;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        local_270 = (local_270 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
  }
  snprintf((char *)local_268,0x200,(char *)0x720075,uVar13);
  local_298[0] = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    local_298[0] = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      local_298[0] = (local_298[0] ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  uVar3 = FUN__text__0012cce4(lVar7,local_298);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  snprintf((char *)local_268,0x200,(char *)0x714f17,uVar13);
  local_298[0] = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    local_298[0] = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      local_298[0] = (local_298[0] ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  uVar3 = FUN__text__0012cce4(lVar7,local_298);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  if (*(char *)(param_1 + 0x280) != '\0') {
    snprintf((char *)local_268,0x200,(char *)0x7119e3,uVar13);
    local_298[0] = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      local_298[0] = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        local_298[0] = (local_298[0] ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    uVar3 = FUN__text__0012cce4(lVar7,local_298);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    *(undefined1 *)(param_1 + 0x4c9) = 1;
  }
  snprintf((char *)local_268,0x200,(char *)0x713b39,uVar13);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x60) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x719e93,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x78) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x715c6b,uVar13);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0xd0) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x7130a2,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0xd8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71e42b,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0xe0) = uVar6;
  *(undefined1 *)(param_1 + 0xfd) = 1;
  *(undefined8 *)(param_1 + 0x130) = 0x14;
  *(undefined8 *)(param_1 + 0x120) = 0x5bc125a52c49fdd7;
  *(undefined8 *)(param_1 + 0x128) = 0x70ac9c;
  snprintf((char *)local_268,0x200,(char *)0x7119f3,uVar13);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x140) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71d8bd,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x148) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71046c,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x150) = uVar6;
  *(undefined1 *)(param_1 + 0x16d) = 1;
  *(undefined8 *)(param_1 + 400) = 0x5bc125a52c49fdd7;
  *(undefined8 *)(param_1 + 0x198) = 0x70ac9c;
  *(undefined8 *)(param_1 + 0x1a0) = 0x14;
  uVar3 = FUN__text__0012cb14(lVar7,(ulong *)(param_1 + 0xd0));
  FUN__text__005e927c(local_298,0x86df90);
  FUN__text__003a1de4(uVar3,local_298);
  if (local_280 != 0) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
  }
  uVar3 = FUN__text__0012cb14(lVar7,param_1 + 0x140);
  FUN__text__005e927c(local_298,0x86df90);
  FUN__text__003a1de4(uVar3,local_298);
  if (local_280 != 0) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
  }
  snprintf((char *)local_268,0x200,(char *)0x715c7a,uVar13);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1b0) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x716848,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1b8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71f128,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1c8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71d8d6,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1d0) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70ad6e,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1d8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x7126be,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1e0) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70b7be,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1e8) = uVar6;
  *(undefined8 *)(param_1 + 0x210) = 0x4dbd8c0fc57aeee7;
  *(undefined8 *)(param_1 + 0x218) = 0x71cb95;
  *(undefined8 *)(param_1 + 0x220) = 0x18;
  snprintf((char *)local_268,0x200,(char *)0x71874e,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x230) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70b7da,uVar8,uVar10);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x238) = uVar6;
  *(undefined8 *)(param_1 + 0x270) = 0x18;
  *(undefined8 *)(param_1 + 0x260) = 0x89be9c53e7c747e5;
  *(undefined8 *)(param_1 + 0x268) = 0x71f07b;
  if (*(char *)(param_1 + 0x280) == '\0') {
    snprintf((char *)local_268,0x200,(char *)0x716848,uVar8,0x7126e6);
    local_278 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      local_278 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        local_278 = (local_278 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
  }
  else {
    snprintf((char *)local_268,0x200,(char *)0x70e2f7,uVar13);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x288) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x716848,uVar8,0x7126e6);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x290) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x70ad6e,uVar8,0x7126e6);
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar11 = (byte *)((ulong)local_268 | 1);
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(param_1 + 0x2a0) = uVar6;
    *(undefined8 *)(param_1 + 0x2d8) = 0x89be9c53e7c747e5;
    *(undefined8 *)(param_1 + 0x2e0) = 0x71f07b;
    *(undefined8 *)(param_1 + 0x2e8) = 0x18;
  }
  lVar7 = 0;
  uVar12 = 0;
  pbVar11 = (byte *)((ulong)local_268 | 1);
  do {
    snprintf((char *)local_268,0x200,(char *)0x70edae,uVar8,(ulong)uVar12);
    uVar6 = 0xcbf29ce484222645;
    pbVar5 = pbVar11;
    bVar1 = local_268[0];
    while (bVar1 != 0) {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    lVar4 = param_1 + lVar7 * 8;
    *(ulong *)(lVar4 + 0x308) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x70edae,uVar8,(ulong)(uVar12 | 1));
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar5 = pbVar11;
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar4 + 0x330) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x70edae,uVar8,(ulong)(uVar12 + 2));
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar5 = pbVar11;
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar4 + 0x358) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x70edae,uVar8,(ulong)(uVar12 + 3));
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar5 = pbVar11;
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar4 + 0x380) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x70edae,uVar8,(ulong)(uVar12 + 4));
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar5 = pbVar11;
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar4 + 0x3a8) = uVar6;
    snprintf((char *)local_268,0x200,(char *)0x70edae,uVar8,(ulong)(uVar12 + 5));
    uVar6 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar5 = pbVar11;
      bVar1 = local_268[0];
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    lVar7 = lVar7 + 1;
    uVar12 = uVar12 + 6;
    *(ulong *)(lVar4 + 0x3d0) = uVar6;
  } while (lVar7 != 5);
  snprintf((char *)local_268,0x200,(char *)0x70c322,uVar8,0x7130bb);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x408) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x720084,uVar8,0x7130bb);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x410) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71b70a,uVar8,0x7130bb);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x3f8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70daae,uVar8,0x7130bb);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x400) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70c322,uVar8,0x70cf2c);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x428) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x720084,uVar8,0x70cf2c);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x430) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71b70a,uVar8,0x70cf2c);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x418) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70daae,uVar8,0x70cf2c);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x420) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70c322,uVar8,0x71735f);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x448) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x720084,uVar8,0x71735f);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x450) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71b70a,uVar8,0x71735f);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x438) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70daae,uVar8,0x71735f);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x440) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70ad8f,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x468) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70c338,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x470) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70e308,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x458) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x7192ee,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x460) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x719ec1,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x478) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x714f23,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x480) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x716853,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x488) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x713b49,uVar8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x490) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x7126da,local_2a8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x4a8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71c219,local_2a8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x4b0) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x71c226,local_2a8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x498) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x7130c7,local_2a8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x4a0) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x713b66,local_2a8);
  uVar6 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar11 = (byte *)((ulong)local_268 | 1);
    bVar1 = local_268[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x4b8) = uVar6;
  snprintf((char *)local_268,0x200,(char *)0x70e32b,local_2a8);
  if (local_268[0] != 0) {
    pbVar11 = (byte *)((ulong)local_268 | 1);
    do {
      uVar15 = (uVar15 ^ local_268[0]) * 0x100000001b3;
      local_268[0] = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (local_268[0] != 0);
  }
  *(ulong *)(param_1 + 0x4c0) = uVar15;
  FUN__text__003c7c60(lVar9,&local_270,0);
  if (*(char *)(param_1 + 0x280) == '\0') {
    FUN__text__003c7c60(lVar9,&local_278,0);
    lVar4 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(lVar4 + 0x2d0);
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(lVar4 + 0x2d0);
  }
  if (lVar7 == 0) {
    lVar7 = FUN__text__0012cb14(lVar4 + 0x110,param_1 + 0x1b0);
    *(undefined8 *)(lVar7 + 0x108) = 0;
    *(undefined1 *)(lVar7 + 0x110) = 0;
    FUN__text__003c7c60(0,param_1 + 0x1e8,0);
    FUN__text__003c7c60(0,param_1 + 0x1e0,1);
  }
  else {
    plVar14 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar4 = FUN__text__0012cb14(lVar4 + 0x110,param_1 + 0x1b0);
    *(undefined8 *)(lVar4 + 0x108) = 0;
    *(undefined1 *)(lVar4 + 0x110) = 0;
    FUN__text__003c7c60(lVar7,param_1 + 0x1e8,0);
    FUN__text__003c7c60(lVar7,param_1 + 0x1e0,1);
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  *(undefined1 *)(param_1 + 0x4ca) = 1;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}


