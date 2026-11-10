/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ad4d0; name: FUN_.text__001ad4d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001ad4d0(long param_1,undefined1 param_2)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  byte local_268 [520];
  
  uVar15 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x68) = 0xf1645b6ca0f382ee;
  *(undefined1 *)(param_1 + 0x4f0) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0x7accddbe99ad6664;
  *(undefined8 *)(param_1 + 0x48) = 0xbcb63c0eb1509dc5;
  *(undefined8 *)(param_1 + 0x50) = 0x145519509e1a938d;
  *(undefined8 *)(param_1 + 0x58) = 0x3a054e23c712829;
  *(undefined8 *)(param_1 + 0x60) = 0xb1c1a92d8aaf141a;
  *(undefined8 *)(param_1 + 0x78) = 0x64cde5ca776ff533;
  *(undefined8 *)(param_1 + 0x70) = 0xcf9a730a17bbf677;
  *(undefined8 *)(param_1 + 0x80) = 0xb7a374dc58173926;
  uVar8 = _DAT_00725d00;
  *(undefined8 *)(param_1 + 0x88) = _DAT_00725cf8;
  uVar5 = _DAT_00725d20;
  uVar4 = _DAT_00725d18;
  uVar3 = _DAT_00725d08;
  *(undefined8 *)(param_1 + 0xa0) = _DAT_00725d10;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar6 = _DAT_00725d50;
  uVar8 = _DAT_00725d48;
  uVar4 = _DAT_00725d38;
  *(undefined8 *)(param_1 + 0xd0) = _DAT_00725d40;
  *(undefined8 *)(param_1 + 0xd8) = uVar8;
  uVar3 = _DAT_00725d30;
  uVar8 = _DAT_00725d28;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar8;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar4;
  uVar3 = _DAT_00724f58;
  uVar8 = _DAT_00724f50;
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  *(undefined8 *)(param_1 + 0xe8) = uVar8;
  uVar4 = _DAT_00724f68;
  uVar8 = _DAT_00724f60;
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar8;
  uVar7 = _DAT_007250c8;
  uVar5 = _DAT_007250c0;
  uVar3 = _DAT_007250b8;
  uVar8 = _DAT_007250b0;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  *(undefined8 *)(param_1 + 0x108) = uVar8;
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  uVar6 = _DAT_00724f88;
  uVar4 = _DAT_00724f80;
  uVar3 = _DAT_00724f78;
  uVar8 = _DAT_00724f70;
  *(undefined8 *)(param_1 + 0x120) = uVar7;
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  uVar5 = _DAT_00724f28;
  uVar4 = _DAT_00724f20;
  uVar3 = _DAT_00724f18;
  uVar8 = _DAT_00724f10;
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  *(undefined8 *)(param_1 + 0x148) = uVar8;
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  *(undefined8 *)(param_1 + 0x158) = uVar4;
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  *(undefined8 *)(param_1 + 0x168) = 0xba82bc4a24747378;
  *(undefined8 *)(param_1 + 0x170) = 0xa84f3244da98876b;
  *(undefined8 *)(param_1 + 0x178) = 0xa84f3144da9885b8;
  *(undefined8 *)(param_1 + 0x180) = 0x1bcadf80f576d9e3;
  *(undefined8 *)(param_1 + 0x188) = 0x3ed4a400930b6c46;
  *(undefined8 *)(param_1 + 400) = 0x3f70896410434edc;
  *(undefined8 *)(param_1 + 0x198) = 0x27c20a23ad62213d;
  *(undefined8 *)(param_1 + 0x1a0) = 0xefca7c895e9e17cf;
  *(undefined8 *)(param_1 + 0x1a8) = 0x97bd79629db17d55;
  *(undefined8 *)(param_1 + 0x1b0) = 0x895f8f01e20d76cf;
  *(undefined8 *)(param_1 + 0x1b8) = 0x895f8e01e20d751c;
  *(undefined8 *)(param_1 + 0x1c0) = 0xa25c3088d0b9a478;
  *(undefined8 *)(param_1 + 0x1c8) = 0xac575fbe2cb0ad99;
  *(undefined8 *)(param_1 + 0x1d0) = 0xf12bf7996ae4c557;
  memset(local_268,0,0x200);
  uVar12 = 0;
  do {
    snprintf((char *)local_268,0x200,(char *)0x71d87a,0,uVar12 & 0xffffffff);
    uVar9 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar9 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)local_268 | 1);
      bVar2 = local_268[0];
      do {
        uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
    lVar11 = uVar12 * 8;
    uVar12 = uVar12 + 1;
    *(ulong *)(param_1 + lVar11 + 0x1d8) = uVar9;
  } while (uVar12 != 0x12);
  snprintf((char *)local_268,0x200,(char *)0x70ceda,0);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x268) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71b69d,0);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  uVar9 = 0;
  *(ulong *)(param_1 + 0x270) = uVar12;
  do {
    snprintf((char *)local_268,0x200,(char *)0x71d87a,1,uVar9 & 0xffffffff);
    uVar12 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar12 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)local_268 | 1);
      bVar2 = local_268[0];
      do {
        uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
    lVar11 = uVar9 * 8;
    uVar9 = uVar9 + 1;
    *(ulong *)(param_1 + lVar11 + 0x278) = uVar12;
  } while (uVar9 != 0x12);
  snprintf((char *)local_268,0x200,(char *)0x70ceda,1);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x308) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71b69d,1);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  uVar9 = 0;
  *(ulong *)(param_1 + 0x310) = uVar12;
  do {
    snprintf((char *)local_268,0x200,(char *)0x71d87a,2,uVar9 & 0xffffffff);
    uVar12 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar12 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)local_268 | 1);
      bVar2 = local_268[0];
      do {
        uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
    lVar11 = uVar9 * 8;
    uVar9 = uVar9 + 1;
    *(ulong *)(param_1 + lVar11 + 0x318) = uVar12;
  } while (uVar9 != 0x12);
  snprintf((char *)local_268,0x200,(char *)0x70ceda,2);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x3a8) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71b69d,2);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  uVar9 = 0;
  *(ulong *)(param_1 + 0x3b0) = uVar12;
  do {
    snprintf((char *)local_268,0x200,(char *)0x71d87a,3,uVar9 & 0xffffffff);
    uVar12 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar12 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)local_268 | 1);
      bVar2 = local_268[0];
      do {
        uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
    lVar11 = uVar9 * 8;
    uVar9 = uVar9 + 1;
    *(ulong *)(param_1 + lVar11 + 0x3b8) = uVar12;
  } while (uVar9 != 0x12);
  snprintf((char *)local_268,0x200,(char *)0x70ceda,3);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x448) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71b69d,3);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x450) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,0,0x71735f);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x458) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,0,0x71c20a);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x460) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,0,0x714ec4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x468) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,1,0x71735f);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x470) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,1,0x71c20a);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x478) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,1,0x714ec4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x480) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,2,0x71735f);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x488) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,2,0x71c20a);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x490) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,2,0x714ec4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x498) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,3,0x71735f);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4a0) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,3,0x71c20a);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4a8) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,3,0x714ec4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4b0) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,4,0x71735f);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4b8) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,4,0x71c20a);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4c0) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,4,0x714ec4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4c8) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,5,0x71735f);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4d0) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,5,0x71c20a);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)local_268 | 1);
    bVar2 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x4d8) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70f81d,5,0x714ec4);
  if (local_268[0] != 0) {
    pbVar10 = (byte *)((ulong)local_268 | 1);
    do {
      uVar15 = (uVar15 ^ local_268[0]) * 0x100000001b3;
      local_268[0] = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (local_268[0] != 0);
  }
  *(ulong *)(param_1 + 0x4e0) = uVar15;
  *(undefined8 *)(param_1 + 0x4e8) = 0xedc5a924b1edccca;
  if (*(char *)(param_1 + 0x4f0) != '\0') {
    *(undefined8 *)(param_1 + 0x38) = 0xe5ce2d5eb97fab6;
    *(undefined8 *)(param_1 + 0x40) = 0xed84ef7f489bf477;
  }
  uVar8 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_270,uVar8,0);
  lVar11 = *(long *)(local_270 + 0x60);
  if ((lVar11 == 0) || ((**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(), local_270 != 0)) {
    (**(code **)(*(long *)(local_270 + 0x48) + 0x18))();
    lVar13 = *(long *)(param_1 + 0x10);
    if (lVar13 == 0) goto LAB__text__001ae5f0;
    local_278 = lVar11;
    if (lVar11 != 0) goto LAB__text__001ae214;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x10);
    if (lVar13 == 0) goto LAB__text__001ae5f0;
LAB__text__001ae214:
    local_278 = lVar11;
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  plVar14 = (long *)(param_1 + 0x10);
  local_270 = 0x785920448022b148;
  FUN__text__001ac1fc(lVar13,(undefined8 *)(param_1 + 0x68),&local_278,&local_270);
  if (local_278 != 0) {
    (**(code **)(*(long *)(local_278 + 0x48) + 0x18))();
    local_278 = 0;
  }
  lVar13 = *plVar14;
  if (lVar13 != 0) {
    local_280 = lVar11;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    local_270 = 0x785ca6448025cad1;
    FUN__text__001ac1fc(lVar13,(undefined8 *)(param_1 + 0x78),&local_280,&local_270);
    if (local_280 != 0) {
      (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
      local_280 = 0;
    }
    lVar13 = *plVar14;
    if (lVar13 != 0) {
      plVar1 = (long *)(lVar11 + 0x48);
      local_288 = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      FUN__text__001ac1fc(lVar13,(undefined8 *)(param_1 + 0x88),&local_288,0x725d58);
      if (local_288 != 0) {
        (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
        local_288 = 0;
      }
      lVar13 = *plVar14;
      if (lVar13 != 0) {
        local_288 = lVar11;
        if (lVar11 != 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        FUN__text__001ac1fc(lVar13,param_1 + 0x90,&local_288,0x725d60);
        if (local_288 != 0) {
          (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
          local_288 = 0;
        }
        lVar13 = *plVar14;
        if (lVar13 != 0) {
          local_288 = lVar11;
          if (lVar11 != 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
          FUN__text__001ac1fc(lVar13,param_1 + 0x98,&local_288,0x725d68);
          if (local_288 != 0) {
            (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
            local_288 = 0;
          }
          lVar13 = *plVar14;
          if (lVar13 != 0) {
            local_288 = lVar11;
            if (lVar11 != 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
            FUN__text__001ac1fc(lVar13,param_1 + 0xa0,&local_288,0x725d70);
            if (local_288 != 0) {
              (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
              local_288 = 0;
            }
            lVar13 = *plVar14;
            if (lVar13 != 0) {
              local_288 = lVar11;
              if (lVar11 != 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
              FUN__text__001ac1fc(lVar13,param_1 + 0xa8,&local_288,0x725d78);
              if (local_288 != 0) {
                (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
                local_288 = 0;
              }
              lVar13 = *plVar14;
              if (lVar13 != 0) {
                local_288 = lVar11;
                if (lVar11 != 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
                FUN__text__001ac1fc(lVar13,param_1 + 0xb0,&local_288,0x725d80);
                if (local_288 != 0) {
                  (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
                  local_288 = 0;
                }
                lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
                if (lVar13 != 0) {
                  (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
                }
                FUN__text__003c7c60(lVar13,param_1 + 0x108,1);
                FUN__text__003c7c60(lVar13,param_1 + 0x128,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x148,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x110,1);
                FUN__text__003c7c60(lVar13,param_1 + 0x130,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x150,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x118,1);
                FUN__text__003c7c60(lVar13,param_1 + 0x138,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x158,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x120,1);
                FUN__text__003c7c60(lVar13,param_1 + 0x140,0);
                FUN__text__003c7c60(lVar13,param_1 + 0x160,0);
                if (*(char *)(param_1 + 0x4f0) != '\0') {
                  FUN__text__001b0494(param_1);
                }
                if (lVar13 != 0) {
                  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
                }
                if (lVar11 != 0) {
                  (**(code **)(*plVar1 + 0x18))(plVar1);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB__text__001ae5f0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


