/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d97f0; name: FUN_.text__001d97f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001d97f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  code *pcVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  undefined8 local_5b0;
  long local_5a8;
  long local_5a0;
  long local_598;
  long local_590;
  long local_588 [3];
  undefined8 local_570;
  undefined8 uStack_568;
  undefined1 local_560;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_508;
  undefined8 local_500;
  code *local_4f8;
  code *local_4f0;
  undefined8 uStack_4e8;
  long local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_480;
  code *local_478;
  code *local_470;
  undefined8 uStack_468;
  long local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_400;
  code *local_3f8;
  code *local_3f0;
  undefined8 local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_380;
  code *local_378;
  code *local_370;
  undefined8 local_368;
  long local_360;
  undefined8 local_358;
  undefined8 local_350;
  uint5 local_300;
  undefined3 uStack_2fb;
  code *local_2f8;
  code *local_2f0;
  undefined8 local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_278;
  undefined8 local_270;
  byte local_268 [520];
  
  *(undefined8 *)(param_1 + 0x40) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  plVar2 = (long *)(param_1 + 0x89c8);
  memset(local_268,0,0x200);
  *(undefined8 *)(param_1 + 0x28) = 0x3cd0d6bc4fa6990b;
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  local_588[0] = 0x101748e7d39519b2;
  lVar6 = FUN__text__0012cdb0(lVar1,local_588);
  *plVar2 = lVar6;
  local_270 = 0xcc5d5ca46236dc99;
  snprintf((char *)local_268,0x200,(char *)0x70edef,0);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a40) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71876b,0);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a48) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x710493,0);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a50) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70edef,1);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a58) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71876b,1);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a60) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x710493,1);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a68) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70edef,2);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a70) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71876b,2);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a78) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x710493,2);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a80) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70edef,3);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a88) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71876b,3);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a90) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x710493,3);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8a98) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x70edef,4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8aa0) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x71876b,4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  *(ulong *)(param_1 + 0x8aa8) = uVar12;
  snprintf((char *)local_268,0x200,(char *)0x710493,4);
  uVar12 = 0xcbf29ce484222645;
  if (local_268[0] != 0) {
    uVar12 = 0xcbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_268 | 1);
    bVar5 = local_268[0];
    do {
      uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  local_278 = 0x2ba4f67284e3bc95;
  *(ulong *)(param_1 + 0x8ab0) = uVar12;
  *(undefined8 *)(param_1 + 0x8ab8) = 0xdd36ce3675ad8584;
  *(undefined8 *)(param_1 + 0x8ac0) = 0x590e4adb900f27dc;
  *(undefined8 *)(param_1 + 0x8ac8) = 0x55332e3e58d1461b;
  *(undefined8 *)(param_1 + 0x8ad0) = 0x5e272a113a101edd;
  *(undefined8 *)(param_1 + 0x8ad8) = 0xe26fc0cc12057d8c;
  *(undefined8 *)(param_1 + 0x8ae0) = 0x940fbfea97e3aeb7;
  *(undefined8 *)(param_1 + 0x8ae8) = 0x5d79949ad5efb264;
  *(undefined8 *)(param_1 + 0x8af0) = 0x36e86b7e522aff7d;
  *(undefined8 *)(param_1 + 0x8af8) = 0xb7e5a7f8f89c1ae4;
  *(undefined8 *)(param_1 + 0x8b00) = 0x95f7252d01ea3a44;
  *(undefined8 *)(param_1 + 0x8b08) = 0xca089473ac39c328;
  *(undefined8 *)(param_1 + 0x8b10) = 0x8de604cbbab1bce5;
  *(undefined8 *)(param_1 + 0x8b18) = 0x87ab1d5b5968c0ee;
  *(undefined8 *)(param_1 + 0x8b20) = 0x36e86d7e522b02e3;
  *(undefined8 *)(param_1 + 0x8b28) = 0x29ed5eca72c113f3;
  *(undefined8 *)(param_1 + 0x8b30) = 0xa3097788f56e012d;
  local_588[0] = *(long *)(*(long *)(param_1 + 8) + 8);
  lVar6 = FUN__text__001ddcd8(&local_300,local_588[0],_DAT_008a05e0,local_588);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x89d0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x89d0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x89d0) = lVar6;
  uVar4 = *(uint *)(lVar6 + 0xf0);
  if (uVar4 != 0) {
    uVar12 = tpidr_el0;
    uVar13 = 0;
    uVar12 = uVar12 & 0xffffffffffffe000;
    do {
      while( true ) {
        lVar6 = *(long *)(param_1 + 0x89d0);
        local_300 = (uint5)uVar13;
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0xe0) + *(long *)(lVar6 + 0xe8) * 8);
        if (*(long *)(lVar6 + 0xe8) == *(long *)(lVar6 + 0xf0)) break;
        if (*(long *)(uVar12 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)(uVar12 + *(long *)(uVar12 + 0x98) * 8 + 0x18) =
             *(undefined8 *)(lVar6 + 0xa0);
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        *puVar3 = _local_300;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        *(long *)(lVar6 + 0xe8) = *(long *)(lVar6 + 0xe8) + 1;
        uVar13 = uVar13 + 1;
        if (uVar4 == uVar13) goto LAB__text__001d9f94;
      }
      FUN__text__001de570(local_588,lVar6 + 0xa0,puVar3,1,&local_300);
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
LAB__text__001d9f94:
    lVar6 = *(long *)(param_1 + 0x89d0);
  }
  if (*(long *)(lVar6 + 0xe8) != 0) {
    *(undefined8 *)(lVar6 + 0xe8) = 0;
  }
  uVar12 = 0;
  pbVar14 = (byte *)((ulong)local_268 | 1);
  do {
    snprintf((char *)local_268,0x200,(char *)0x713b75,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x50) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x713b8f,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x58) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x710e52,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x60) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x720d2f,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    puVar15 = (ulong *)(param_1 + uVar12 * 200 + 0x68);
    *puVar15 = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x7200ac,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    puVar9 = (ulong *)(param_1 + uVar12 * 200 + 0x70);
    *puVar9 = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x713bc2,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    puVar17 = (ulong *)(param_1 + uVar12 * 200 + 0x78);
    *puVar17 = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x7173b3,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x80) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x718792,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x88) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x719312,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x90) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x70b806,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0x98) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x7187c4,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0xa0) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x71933e,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0xb8) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x71d914,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0xa8) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x70ee06,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0xb0) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x7200dc,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 0xc0) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x71936d,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    *(ulong *)(param_1 + uVar12 * 200 + 200) = uVar8;
    snprintf((char *)local_268,0x200,(char *)0x71d943,uVar12 & 0xffffffff);
    uVar8 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar10 = pbVar14;
      bVar5 = local_268[0];
      do {
        uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 != 0);
    }
    puVar18 = (ulong *)(param_1 + uVar12 * 200 + 0xd0);
    *puVar18 = uVar8;
    FUN__text__003c8320(lVar16,puVar18);
    FUN__text__003c81e0(lVar16,puVar15,puVar18);
    FUN__text__003c7c60(lVar16,puVar15,1);
    FUN__text__003c7c60(lVar16,puVar9,0);
    FUN__text__003c7c60(lVar16,puVar17,0);
    FUN__text__003c7c60(lVar16,puVar18,0);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0xb0);
  local_2d0 = 0;
  local_2d8 = _DAT_008a1080;
  _local_300 = _DAT_008a1088;
  local_2f8 = _DAT_008a1090;
  local_2f0 = _DAT_008a10c0;
  local_2e8 = _DAT_008a1098;
  local_350 = 0;
  local_380 = _DAT_008a1088;
  local_378 = _DAT_008a1090;
  local_370 = _DAT_008a10c0;
  local_368 = _DAT_008a1098;
  local_358 = _DAT_008a10a0;
  local_3d0 = 0;
  local_400 = _DAT_008a1088;
  local_3f8 = _DAT_008a1090;
  local_3f0 = _DAT_008a10c0;
  local_3e8 = _DAT_008a1098;
  local_3d8 = _DAT_008a10c8;
  uStack_458 = _DAT_008a10d0;
  local_450 = 0;
  local_480 = _DAT_008a10a8;
  local_478 = _DAT_008a10d8;
  lVar6 = *plVar2;
  local_470 = _DAT_008a10b0;
  uStack_468 = _DAT_008a10b8;
  pcVar11 = *(code **)(lVar6 + 200);
  local_4d0 = 0;
  local_500 = _DAT_008a1088;
  local_4f8 = _DAT_008a1090;
  local_4f0 = _DAT_008a10c0;
  uStack_4e8 = _DAT_008a1098;
  uStack_4d8 = _DAT_008a10e0;
  local_4e0 = param_1;
  local_460 = param_1;
  local_3e0 = param_1;
  local_360 = param_1;
  local_2e0 = param_1;
  if (pcVar11 == (code *)0x0) {
LAB__text__001da6bc:
    (*local_2f0)(&local_2e0,lVar6 + 0xe0);
    *(undefined8 *)(lVar6 + 0xc0) = _local_300;
    *(code **)(lVar6 + 200) = local_2f8;
    *(code **)(lVar6 + 0xd0) = local_2f0;
    *(undefined8 *)(lVar6 + 0xd8) = local_2e8;
  }
  else {
    *(undefined8 *)(lVar6 + 0xd0) = 0;
    *(undefined8 *)(lVar6 + 0xd8) = 0;
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    *(undefined8 *)(lVar6 + 200) = 0;
    (*pcVar11)(lVar6 + 0xe0);
    if (local_2f0 != (code *)0x0) goto LAB__text__001da6bc;
  }
  lVar6 = *plVar2;
  pcVar11 = *(code **)(lVar6 + 0x1c8);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x1d0) = 0;
    *(undefined8 *)(lVar6 + 0x1d8) = 0;
    *(undefined8 *)(lVar6 + 0x1c0) = 0;
    *(undefined8 *)(lVar6 + 0x1c8) = 0;
    (*pcVar11)(lVar6 + 0x1e0);
  }
  if (local_370 != (code *)0x0) {
    (*local_370)(&local_360,lVar6 + 0x1e0);
    *(undefined8 *)(lVar6 + 0x1c0) = local_380;
    *(code **)(lVar6 + 0x1c8) = local_378;
    *(code **)(lVar6 + 0x1d0) = local_370;
    *(undefined8 *)(lVar6 + 0x1d8) = local_368;
  }
  *(undefined2 *)(lVar6 + 0x852) = 0;
  lVar6 = *plVar2;
  pcVar11 = *(code **)(lVar6 + 0x248);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar11)(lVar6 + 0x260);
  }
  if (local_3f0 != (code *)0x0) {
    (*local_3f0)(&local_3e0,lVar6 + 0x260);
    *(undefined8 *)(lVar6 + 0x240) = local_400;
    *(code **)(lVar6 + 0x248) = local_3f8;
    *(code **)(lVar6 + 0x250) = local_3f0;
    *(undefined8 *)(lVar6 + 600) = local_3e8;
  }
  lVar6 = *plVar2;
  pcVar11 = *(code **)(lVar6 + 0x3c8);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x3d0) = 0;
    *(undefined8 *)(lVar6 + 0x3d8) = 0;
    *(undefined8 *)(lVar6 + 0x3c0) = 0;
    *(undefined8 *)(lVar6 + 0x3c8) = 0;
    (*pcVar11)(lVar6 + 0x3e0);
  }
  if (local_470 != (code *)0x0) {
    (*local_470)(&local_460,lVar6 + 0x3e0);
    *(undefined8 *)(lVar6 + 0x3c0) = local_480;
    *(code **)(lVar6 + 0x3c8) = local_478;
    *(code **)(lVar6 + 0x3d0) = local_470;
    *(undefined8 *)(lVar6 + 0x3d8) = uStack_468;
  }
  lVar6 = *plVar2;
  pcVar11 = *(code **)(lVar6 + 0x448);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x450) = 0;
    *(undefined8 *)(lVar6 + 0x458) = 0;
    *(undefined8 *)(lVar6 + 0x440) = 0;
    *(undefined8 *)(lVar6 + 0x448) = 0;
    (*pcVar11)(lVar6 + 0x460);
  }
  if (local_4f0 != (code *)0x0) {
    (*local_4f0)(&local_4e0,lVar6 + 0x460);
    *(undefined8 *)(lVar6 + 0x440) = local_500;
    *(code **)(lVar6 + 0x448) = local_4f8;
    *(code **)(lVar6 + 0x450) = local_4f0;
    *(undefined8 *)(lVar6 + 0x458) = uStack_4e8;
  }
  lVar6 = *plVar2;
  memcpy(local_588,(void *)(lVar6 + 0x6c0),0x88);
  local_560 = 1;
  local_508 = 1;
  local_570 = 0x4270000041880000;
  uStack_568 = 0x4419000044e7c000;
  local_518 = 0x4282000044670000;
  uStack_510 = 0x4411800042200000;
  FUN__text__003ad1c8(lVar6,local_588);
  lVar6 = *plVar2;
  local_590 = *(long *)(param_1 + 0x89d0);
  if (local_590 != 0) {
    (**(code **)(*(long *)(local_590 + 0x48) + 0x10))();
  }
  FUN__text__003b1808(lVar6,&local_590);
  if (local_590 != 0) {
    (**(code **)(*(long *)(local_590 + 0x48) + 0x18))();
    local_590 = 0;
  }
  FUN__text__003b17ec(*plVar2,0,0);
  FUN__text__003b17f8(*plVar2,0);
  FUN__text__003ad2d0(*plVar2,0);
  FUN__text__003a14e8(*plVar2,1);
  FUN__text__003a14c4(*plVar2,1);
  uVar7 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(local_588,uVar7,0);
  lVar6 = *(long *)(local_588[0] + 0x60);
  if ((lVar6 == 0) || ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(), local_588[0] != 0)) {
    (**(code **)(*(long *)(local_588[0] + 0x48) + 0x18))();
    lVar19 = *(long *)(param_1 + 0x10);
    if (lVar19 == 0) goto LAB__text__001dac14;
    local_598 = lVar6;
    if (lVar6 != 0) goto LAB__text__001da97c;
  }
  else {
    lVar19 = *(long *)(param_1 + 0x10);
    if (lVar19 == 0) goto LAB__text__001dac14;
LAB__text__001da97c:
    local_598 = lVar6;
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_588[0] = -0x73dd375386247345;
  FUN__text__001ac1fc(lVar19,&local_270,&local_598,local_588);
  if (local_598 != 0) {
    (**(code **)(*(long *)(local_598 + 0x48) + 0x18))();
    local_598 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 != 0) {
    local_5a0 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_588[0] = -0x73e74953862ce660;
    FUN__text__001ac1fc(lVar19,&local_278,&local_5a0,local_588);
    if (local_5a0 != 0) {
      (**(code **)(*(long *)(local_5a0 + 0x48) + 0x18))();
      local_5a0 = 0;
    }
    lVar19 = *(long *)(param_1 + 0x10);
    if (lVar19 != 0) {
      local_588[0] = 0x4b7380c20676f26d;
      local_5a8 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      local_5b0 = 0xf13636074bfa870f;
      FUN__text__001ac1fc(lVar19,local_588,&local_5a8,&local_5b0);
      if (local_5a8 != 0) {
        (**(code **)(*(long *)(local_5a8 + 0x48) + 0x18))();
        local_5a8 = 0;
      }
      local_588[0] = 0x7662552595cc8ee2;
      FUN__text__003c7c60(lVar16,local_588,1);
      FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),0);
      FUN__text__001d92c4(*(undefined8 *)(param_1 + 0x40),0);
      FUN__text__003c8320(lVar16,param_1 + 0x8b08);
      FUN__text__003c81e0(lVar16,param_1 + 0x8af8,param_1 + 0x8b08);
      FUN__text__0012c378(lVar1,param_1 + 0x8ad8);
      FUN__text__003c7c60(lVar16,param_1 + 0x8b20,0);
      FUN__text__003c7c60(lVar16,param_1 + 0x8b28,0);
      FUN__text__003c7c60(lVar16,param_1 + 0x8b30,0);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      pcVar11 = local_4f8;
      if (local_4f8 != (code *)0x0) {
        local_4f0 = (code *)0x0;
        uStack_4e8 = 0;
        local_500 = 0;
        local_4f8 = (code *)0x0;
        (*pcVar11)(&local_4e0);
      }
      pcVar11 = local_478;
      if (local_478 != (code *)0x0) {
        local_470 = (code *)0x0;
        uStack_468 = 0;
        local_480 = 0;
        local_478 = (code *)0x0;
        (*pcVar11)(&local_460);
      }
      pcVar11 = local_3f8;
      if (local_3f8 != (code *)0x0) {
        local_3e8 = 0;
        local_3f0 = (code *)0x0;
        local_3f8 = (code *)0x0;
        local_400 = 0;
        (*pcVar11)(&local_3e0);
      }
      pcVar11 = local_378;
      if (local_378 != (code *)0x0) {
        local_368 = 0;
        local_370 = (code *)0x0;
        local_378 = (code *)0x0;
        local_380 = 0;
        (*pcVar11)(&local_360);
      }
      pcVar11 = local_2f8;
      if (local_2f8 != (code *)0x0) {
        local_2e8 = 0;
        local_2f0 = (code *)0x0;
        local_2f8 = (code *)0x0;
        _local_300 = 0;
        (*pcVar11)(&local_2e0);
      }
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      return;
    }
  }
LAB__text__001dac14:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


