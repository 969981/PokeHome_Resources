/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b80f0; name: FUN_.text__001b80f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b80f0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long local_570;
  long local_568;
  long local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  long local_538;
  long local_530;
  long local_528;
  long local_520;
  long local_518;
  long local_510;
  long local_508;
  code *local_4f0;
  code *local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  long lStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  char acStack_468 [512];
  byte local_268 [520];
  
  FUN__text__001c8e50(param_1,param_2,0,param_3,param_4);
  *(undefined8 *)(param_1 + 0x4d0) = param_5;
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  memset(local_268,0,0x200);
  memset(acStack_468,0,0x200);
  if (*(int *)(param_1 + 0x30) == 0) {
    local_4f0 = (code *)0xe29868124ef08d07;
    uVar6 = FUN__text__0012cce4(lVar1,&local_4f0);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    uVar6 = 0x3b0dedd0197c9c7d;
    uVar10 = 0xd267b36f8208fba8;
    uVar13 = 0x64653275a1d928b7;
    uVar14 = 0x71e411;
    uVar15 = 0x2dace7f64758fc82;
    uVar16 = 0x70da82;
  }
  else {
    local_4f0 = (code *)0xa8b2756d4409287d;
    uVar6 = FUN__text__0012cce4(lVar1,&local_4f0);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    uVar6 = 0xff53750d078f38e0;
    uVar10 = 0x66eaaf6d9e1d5985;
    uVar13 = 0x619644d8a779d530;
    uVar14 = 0x71450d;
    uVar15 = 0x7842fd9c0b6801ef;
    uVar16 = 0x710e11;
  }
  *(undefined8 *)(param_1 + 0x4d8) = uVar16;
  *(undefined8 *)(param_1 + 0x4e0) = uVar15;
  lVar20 = 0;
  *(undefined8 *)(param_1 + 0x4e8) = uVar14;
  *(undefined8 *)(param_1 + 0x5a40) = uVar13;
  *(undefined8 *)(param_1 + 0x5a48) = uVar10;
  *(undefined8 *)(param_1 + 0x5a50) = uVar6;
  do {
    lVar18 = 0;
    do {
      uVar2 = (int)lVar18 + (int)lVar20 * 6;
      snprintf((char *)local_268,0x200,(char *)0x71c212,*(undefined8 *)(param_1 + 0x4e8),
               (ulong)uVar2);
      uVar7 = 0xcbf29ce484222645;
      if (local_268[0] != 0) {
        uVar7 = 0xcbf29ce484222645;
        pbVar12 = (byte *)((ulong)local_268 | 1);
        bVar5 = local_268[0];
        do {
          uVar7 = (uVar7 ^ bVar5) * 0x100000001b3;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 != 0);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x4d8);
      lVar21 = param_1 + lVar18 * 0x230 + lVar20 * 0x70;
      *(ulong *)(lVar21 + 0x4f0) = uVar7;
      snprintf((char *)local_268,0x200,(char *)0x7103e4,uVar6,(ulong)uVar2);
      uVar7 = 0xcbf29ce484222645;
      if (local_268[0] != 0) {
        uVar7 = 0xcbf29ce484222645;
        pbVar12 = (byte *)((ulong)local_268 | 1);
        bVar5 = local_268[0];
        do {
          uVar7 = (uVar7 ^ bVar5) * 0x100000001b3;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 != 0);
      }
      lVar11 = param_1 + lVar18 * 0x230 + lVar20 * 0x70;
      *(ulong *)(lVar11 + 0x4f8) = uVar7;
      *(undefined8 *)(lVar11 + 0x520) = 0x179844386f2820d1;
      *(undefined8 *)(lVar11 + 0x528) = 0x719e7a;
      *(undefined8 *)(lVar11 + 0x530) = 0x18;
      uVar6 = FUN__text__0012cb14(lVar1,lVar21 + 0x4f0);
      FUN__text__005e927c(&local_4f0,0x86dcc0);
      FUN__text__003a1de4(uVar6,&local_4f0);
      if (local_4d8 != (undefined1 *)0x0) {
        (**(code **)(*(long *)((long)local_4d8 + 0x48) + 0x18))();
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 6);
    lVar20 = lVar20 + 1;
  } while (lVar20 != 5);
  lVar20 = 0;
  do {
    lVar18 = 0;
    do {
      uVar7 = lVar18 + lVar20 * 6;
      snprintf((char *)local_268,0x200,(char *)0x71308a,*(undefined8 *)(param_1 + 0x4d8),
               uVar7 & 0xffffffff);
      uVar8 = 0xcbf29ce484222645;
      if (local_268[0] != 0) {
        uVar8 = 0xcbf29ce484222645;
        pbVar12 = (byte *)((ulong)local_268 | 1);
        bVar5 = local_268[0];
        do {
          uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 != 0);
      }
      uVar22 = (ulong)((int)uVar7 + 0x1e);
      *(ulong *)(param_1 + lVar18 * 0x28 + lVar20 * 8 + 0x1210) = uVar8;
      snprintf((char *)local_268,0x200,(char *)0x71308a,*(undefined8 *)(param_1 + 0x4d8),uVar22);
      uVar8 = 0xcbf29ce484222645;
      if (local_268[0] != 0) {
        uVar8 = 0xcbf29ce484222645;
        pbVar12 = (byte *)((ulong)local_268 | 1);
        bVar5 = local_268[0];
        do {
          uVar8 = (uVar8 ^ bVar5) * 0x100000001b3;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 != 0);
      }
      *(ulong *)(param_1 + lVar18 * 0x28 + lVar20 * 8 + 0x1300) = uVar8;
      snprintf((char *)local_268,0x200,(char *)0x71ccd6,*(undefined8 *)(param_1 + 0x4d8),
               uVar7 & 0xffffffff);
      snprintf(acStack_468,0x200,(char *)0x718721,*(undefined8 *)(param_1 + 0x4d8));
      lVar21 = param_1 + lVar18 * 1000 + lVar20 * 200;
      FUN__text__001b90f0(param_1,lVar21 + 0x13f0,local_268,acStack_468);
      snprintf((char *)local_268,0x200,(char *)0x71ccd6,*(undefined8 *)(param_1 + 0x4d8),uVar22);
      snprintf(acStack_468,0x200,(char *)0x71ffff,*(undefined8 *)(param_1 + 0x4d8));
      FUN__text__001b90f0(param_1,lVar21 + 0x2b60,local_268,acStack_468);
      snprintf((char *)local_268,0x200,(char *)0x71ccd6,*(undefined8 *)(param_1 + 0x4d8),
               (ulong)((int)uVar7 + 0x3c));
      snprintf(acStack_468,0x200,(char *)0x71f111,*(undefined8 *)(param_1 + 0x4d8));
      FUN__text__001b90f0(param_1,lVar21 + 0x42d0,local_268,acStack_468);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 6);
    lVar20 = lVar20 + 1;
  } while (lVar20 != 5);
  pcVar9 = *(code **)(param_1 + 0x5a98);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5aa0) = 0;
    *(undefined8 *)(param_1 + 0x5aa8) = 0;
    *(undefined8 *)(param_1 + 0x5a90) = 0;
    *(undefined8 *)(param_1 + 0x5a98) = 0;
    (*pcVar9)(param_1 + 0x5ab0);
  }
  uVar14 = _DAT_008a0fe8;
  uVar13 = _DAT_008a0fe0;
  uVar10 = _DAT_008a0fd8;
  uVar6 = _DAT_008a0fd0;
  lVar11 = 0x1210;
  local_538 = 0x1328;
  *(undefined8 *)(param_1 + 0x5ab8) = _DAT_008a0fc8;
  *(undefined8 *)(param_1 + 0x5a90) = uVar6;
  local_510 = 0x1350;
  local_508 = 0x1260;
  local_518 = 0x4aa8;
  local_528 = 0x1238;
  local_520 = 0x1288;
  local_530 = 0x1378;
  lVar21 = 0;
  local_548 = 0x13a0;
  local_540 = 0x12b0;
  local_558 = 0x5278;
  local_550 = 0x23b0;
  lVar20 = 0x1300;
  lVar18 = 0x4e90;
  local_568 = 0x13c8;
  local_560 = 0x12d8;
  *(long *)(param_1 + 0x5ab0) = param_1;
  *(undefined8 *)(param_1 + 0x5ac0) = 0;
  *(undefined8 *)(param_1 + 0x5a98) = uVar10;
  *(undefined8 *)(param_1 + 0x5aa0) = uVar13;
  *(undefined8 *)(param_1 + 0x5aa8) = uVar14;
  local_570 = 0x5660;
  do {
    FUN__text__003c7c60(lVar17,param_1 + lVar11,1);
    FUN__text__003c7c60(lVar17,param_1 + lVar20,1);
    lVar3 = param_1 + 0x1210 + lVar21;
    FUN__text__003c7c60(lVar17,lVar3 + 0x200,1);
    lVar4 = param_1 + 0x3738 + lVar21;
    FUN__text__003c7c60(lVar17,lVar4 + -3000,1);
    FUN__text__003c7c60(lVar17,lVar4 + 0xba0,0);
    FUN__text__003c7c60(lVar17,param_1 + local_528,1);
    FUN__text__003c7c60(lVar17,param_1 + local_538,1);
    FUN__text__003c7c60(lVar17,lVar3 + 0x5e8,1);
    FUN__text__003c7c60(lVar17,lVar4 + -2000,1);
    FUN__text__003c7c60(lVar17,lVar4 + 0xf88,0);
    FUN__text__003c7c60(lVar17,param_1 + local_508,1);
    FUN__text__003c7c60(lVar17,param_1 + local_510,1);
    FUN__text__003c7c60(lVar17,lVar3 + 0x9d0,1);
    FUN__text__003c7c60(lVar17,lVar4 + -1000,1);
    FUN__text__003c7c60(lVar17,param_1 + local_518,0);
    FUN__text__003c7c60(lVar17,param_1 + local_520,1);
    FUN__text__003c7c60(lVar17,param_1 + local_530,1);
    FUN__text__003c7c60(lVar17,lVar3 + 0xdb8,1);
    FUN__text__003c7c60(lVar17,lVar4,1);
    FUN__text__003c7c60(lVar17,param_1 + lVar18,0);
    FUN__text__003c7c60(lVar17,param_1 + local_540,1);
    FUN__text__003c7c60(lVar17,param_1 + local_548,1);
    FUN__text__003c7c60(lVar17,param_1 + local_550,1);
    FUN__text__003c7c60(lVar17,lVar4 + 1000,1);
    FUN__text__003c7c60(lVar17,param_1 + local_558,0);
    FUN__text__003c7c60(lVar17,param_1 + local_560,1);
    FUN__text__003c7c60(lVar17,param_1 + local_568,1);
    FUN__text__003c7c60(lVar17,lVar4 + -4000,1);
    FUN__text__003c7c60(lVar17,lVar4 + 2000,1);
    FUN__text__003c7c60(lVar17,param_1 + local_570,0);
    lVar20 = lVar20 + 8;
    lVar18 = lVar18 + 200;
    local_548 = local_548 + 8;
    local_550 = local_550 + 200;
    local_558 = local_558 + 200;
    local_560 = local_560 + 8;
    local_568 = local_568 + 8;
    local_570 = local_570 + 200;
    lVar21 = lVar21 + 200;
    lVar11 = lVar11 + 8;
    local_528 = local_528 + 8;
    local_530 = local_530 + 8;
    local_538 = local_538 + 8;
    local_508 = local_508 + 8;
    local_540 = local_540 + 8;
    local_510 = local_510 + 8;
    local_518 = local_518 + 200;
    local_520 = local_520 + 8;
  } while (lVar21 != 1000);
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0xd0);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4e0 = FUN__text__001c19a8;
  local_4f0 = FUN__text__001c1934;
  local_4e8 = FUN__text__001c19a4;
  local_4d8 = &LAB__text__001c19b4;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001b8a34:
    (*local_4e0)(&lStack_4d0,lVar20 + 0x4a0);
    *(undefined8 *)(lVar20 + 0x480) = local_4f0;
    *(code **)(lVar20 + 0x488) = local_4e8;
    *(code **)(lVar20 + 0x490) = local_4e0;
    *(undefined1 **)(lVar20 + 0x498) = local_4d8;
  }
  else {
    *(undefined8 *)(lVar20 + 0x490) = 0;
    *(undefined8 *)(lVar20 + 0x498) = 0;
    *(undefined8 *)(lVar20 + 0x480) = 0;
    *(undefined8 *)(lVar20 + 0x488) = 0;
    (*pcVar9)(lVar20 + 0x4a0);
    if (local_4e0 != (code *)0x0) goto LAB__text__001b8a34;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0x140);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4d8 = &LAB__text__001c19b4;
  local_4e0 = FUN__text__001c19a8;
  local_4f0 = FUN__text__001c1934;
  local_4e8 = FUN__text__001c19a4;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001b8ab4:
    (*local_4e0)(&lStack_4d0,lVar20 + 0x4a0);
    *(undefined8 *)(lVar20 + 0x480) = local_4f0;
    *(code **)(lVar20 + 0x488) = local_4e8;
    *(code **)(lVar20 + 0x490) = local_4e0;
    *(undefined1 **)(lVar20 + 0x498) = local_4d8;
  }
  else {
    *(undefined8 *)(lVar20 + 0x490) = 0;
    *(undefined8 *)(lVar20 + 0x498) = 0;
    *(undefined8 *)(lVar20 + 0x480) = 0;
    *(undefined8 *)(lVar20 + 0x488) = 0;
    (*pcVar9)(lVar20 + 0x4a0);
    if (local_4e0 != (code *)0x0) goto LAB__text__001b8ab4;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0x60);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4f0 = FUN__text__001c19c0;
  local_4e8 = FUN__text__001c1a24;
  local_4e0 = FUN__text__001c1a28;
  local_4d8 = &LAB__text__001c1a34;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001b8b50:
    (*local_4e0)(&lStack_4d0,lVar20 + 0x4a0);
    *(undefined8 *)(lVar20 + 0x480) = local_4f0;
    *(code **)(lVar20 + 0x488) = local_4e8;
    *(code **)(lVar20 + 0x490) = local_4e0;
    *(undefined1 **)(lVar20 + 0x498) = local_4d8;
  }
  else {
    *(undefined8 *)(lVar20 + 0x490) = 0;
    *(undefined8 *)(lVar20 + 0x498) = 0;
    *(undefined8 *)(lVar20 + 0x480) = 0;
    *(undefined8 *)(lVar20 + 0x488) = 0;
    (*pcVar9)(lVar20 + 0x4a0);
    if (local_4e0 != (code *)0x0) goto LAB__text__001b8b50;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0x1b0);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4f0 = FUN__text__001c1a40;
  local_4e8 = FUN__text__001c1aa4;
  local_4e0 = FUN__text__001c1aa8;
  local_4d8 = &LAB__text__001c1ab4;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001b8bec:
    (*local_4e0)(&lStack_4d0,lVar20 + 0x4a0);
    *(undefined8 *)(lVar20 + 0x480) = local_4f0;
    *(code **)(lVar20 + 0x488) = local_4e8;
    *(code **)(lVar20 + 0x490) = local_4e0;
    *(undefined1 **)(lVar20 + 0x498) = local_4d8;
  }
  else {
    *(undefined8 *)(lVar20 + 0x490) = 0;
    *(undefined8 *)(lVar20 + 0x498) = 0;
    *(undefined8 *)(lVar20 + 0x480) = 0;
    *(undefined8 *)(lVar20 + 0x488) = 0;
    (*pcVar9)(lVar20 + 0x4a0);
    if (local_4e0 != (code *)0x0) goto LAB__text__001b8bec;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
  if (*(char *)(param_1 + 0x280) == '\0') goto LAB__text__001b8cc4;
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0x288);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4f0 = FUN__text__001c1ac0;
  local_4e8 = FUN__text__001c1b24;
  local_4e0 = FUN__text__001c1b28;
  local_4d8 = &LAB__text__001c1b34;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001b8c90:
    (*local_4e0)(&lStack_4d0,lVar20 + 0x4a0);
    *(undefined8 *)(lVar20 + 0x480) = local_4f0;
    *(code **)(lVar20 + 0x488) = local_4e8;
    *(code **)(lVar20 + 0x490) = local_4e0;
    *(undefined1 **)(lVar20 + 0x498) = local_4d8;
  }
  else {
    *(undefined8 *)(lVar20 + 0x490) = 0;
    *(undefined8 *)(lVar20 + 0x498) = 0;
    *(undefined8 *)(lVar20 + 0x480) = 0;
    *(undefined8 *)(lVar20 + 0x488) = 0;
    (*pcVar9)(lVar20 + 0x4a0);
    if (local_4e0 != (code *)0x0) goto LAB__text__001b8c90;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
LAB__text__001b8cc4:
  lVar20 = 0;
  lVar18 = 0x720;
  do {
    lVar21 = param_1 + lVar18;
    lVar11 = FUN__text__0012cb14(lVar1,lVar21 + -0x230);
    pcVar9 = *(code **)(lVar11 + 0x488);
    uVar19 = (undefined4)lVar20;
    local_4c8 = 0;
    local_4e0 = FUN__text__001c1ba4;
    local_4d8 = &LAB__text__001c1bb0;
    local_4f0 = FUN__text__001c1b40;
    local_4e8 = FUN__text__001c1ba0;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001b8f98:
      (*local_4e0)(&lStack_4d0,lVar11 + 0x4a0);
      *(undefined8 *)(lVar11 + 0x480) = local_4f0;
      *(code **)(lVar11 + 0x488) = local_4e8;
      *(code **)(lVar11 + 0x490) = local_4e0;
      *(undefined1 **)(lVar11 + 0x498) = local_4d8;
      pcVar9 = local_4e8;
    }
    else {
      *(undefined8 *)(lVar11 + 0x490) = 0;
      *(undefined8 *)(lVar11 + 0x498) = 0;
      *(undefined8 *)(lVar11 + 0x480) = 0;
      *(undefined8 *)(lVar11 + 0x488) = 0;
      (*pcVar9)(lVar11 + 0x4a0);
      pcVar9 = local_4e8;
      if (local_4e0 != (code *)0x0) goto LAB__text__001b8f98;
    }
    local_4e8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_4e0 = (code *)0x0;
      local_4d8 = (undefined1 *)0x0;
      local_4f0 = (code *)0x0;
      local_4e8 = (code *)0x0;
      (*pcVar9)(&lStack_4d0);
    }
    lVar11 = FUN__text__0012cb14(lVar1,lVar21);
    pcVar9 = *(code **)(lVar11 + 0x488);
    local_4c8 = 1;
    local_4d8 = &LAB__text__001c1bb0;
    local_4e0 = FUN__text__001c1ba4;
    local_4f0 = FUN__text__001c1b40;
    local_4e8 = FUN__text__001c1ba0;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001b8fc4:
      (*local_4e0)(&lStack_4d0,lVar11 + 0x4a0);
      *(undefined8 *)(lVar11 + 0x480) = local_4f0;
      *(code **)(lVar11 + 0x488) = local_4e8;
      *(code **)(lVar11 + 0x490) = local_4e0;
      *(undefined1 **)(lVar11 + 0x498) = local_4d8;
      pcVar9 = local_4e8;
    }
    else {
      *(undefined8 *)(lVar11 + 0x490) = 0;
      *(undefined8 *)(lVar11 + 0x498) = 0;
      *(undefined8 *)(lVar11 + 0x480) = 0;
      *(undefined8 *)(lVar11 + 0x488) = 0;
      (*pcVar9)(lVar11 + 0x4a0);
      pcVar9 = local_4e8;
      if (local_4e0 != (code *)0x0) goto LAB__text__001b8fc4;
    }
    local_4e8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_4e0 = (code *)0x0;
      local_4d8 = (undefined1 *)0x0;
      local_4f0 = (code *)0x0;
      local_4e8 = (code *)0x0;
      (*pcVar9)(&lStack_4d0);
    }
    lVar11 = FUN__text__0012cb14(lVar1,lVar21 + 0x230);
    pcVar9 = *(code **)(lVar11 + 0x488);
    local_4c8 = 2;
    local_4d8 = &LAB__text__001c1bb0;
    local_4e0 = FUN__text__001c1ba4;
    local_4f0 = FUN__text__001c1b40;
    local_4e8 = FUN__text__001c1ba0;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001b8ff4:
      (*local_4e0)(&lStack_4d0,lVar11 + 0x4a0);
      *(undefined8 *)(lVar11 + 0x480) = local_4f0;
      *(code **)(lVar11 + 0x488) = local_4e8;
      *(code **)(lVar11 + 0x490) = local_4e0;
      *(undefined1 **)(lVar11 + 0x498) = local_4d8;
      pcVar9 = local_4e8;
    }
    else {
      *(undefined8 *)(lVar11 + 0x490) = 0;
      *(undefined8 *)(lVar11 + 0x498) = 0;
      *(undefined8 *)(lVar11 + 0x480) = 0;
      *(undefined8 *)(lVar11 + 0x488) = 0;
      (*pcVar9)(lVar11 + 0x4a0);
      pcVar9 = local_4e8;
      if (local_4e0 != (code *)0x0) goto LAB__text__001b8ff4;
    }
    local_4e8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_4e0 = (code *)0x0;
      local_4d8 = (undefined1 *)0x0;
      local_4f0 = (code *)0x0;
      local_4e8 = (code *)0x0;
      (*pcVar9)(&lStack_4d0);
    }
    lVar11 = FUN__text__0012cb14(lVar1,lVar21 + 0x460);
    pcVar9 = *(code **)(lVar11 + 0x488);
    local_4c8 = 3;
    local_4d8 = &LAB__text__001c1bb0;
    local_4e0 = FUN__text__001c1ba4;
    local_4f0 = FUN__text__001c1b40;
    local_4e8 = FUN__text__001c1ba0;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001b9024:
      (*local_4e0)(&lStack_4d0,lVar11 + 0x4a0);
      *(undefined8 *)(lVar11 + 0x480) = local_4f0;
      *(code **)(lVar11 + 0x488) = local_4e8;
      *(code **)(lVar11 + 0x490) = local_4e0;
      *(undefined1 **)(lVar11 + 0x498) = local_4d8;
      pcVar9 = local_4e8;
    }
    else {
      *(undefined8 *)(lVar11 + 0x490) = 0;
      *(undefined8 *)(lVar11 + 0x498) = 0;
      *(undefined8 *)(lVar11 + 0x480) = 0;
      *(undefined8 *)(lVar11 + 0x488) = 0;
      (*pcVar9)(lVar11 + 0x4a0);
      pcVar9 = local_4e8;
      if (local_4e0 != (code *)0x0) goto LAB__text__001b9024;
    }
    local_4e8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_4e0 = (code *)0x0;
      local_4d8 = (undefined1 *)0x0;
      local_4f0 = (code *)0x0;
      local_4e8 = (code *)0x0;
      (*pcVar9)(&lStack_4d0);
    }
    lVar11 = FUN__text__0012cb14(lVar1,lVar21 + 0x690);
    pcVar9 = *(code **)(lVar11 + 0x488);
    local_4c8 = 4;
    local_4d8 = &LAB__text__001c1bb0;
    local_4e0 = FUN__text__001c1ba4;
    local_4f0 = FUN__text__001c1b40;
    local_4e8 = FUN__text__001c1ba0;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001b9054:
      (*local_4e0)(&lStack_4d0,lVar11 + 0x4a0);
      *(undefined8 *)(lVar11 + 0x480) = local_4f0;
      *(code **)(lVar11 + 0x488) = local_4e8;
      *(code **)(lVar11 + 0x490) = local_4e0;
      *(undefined1 **)(lVar11 + 0x498) = local_4d8;
      pcVar9 = local_4e8;
    }
    else {
      *(undefined8 *)(lVar11 + 0x490) = 0;
      *(undefined8 *)(lVar11 + 0x498) = 0;
      *(undefined8 *)(lVar11 + 0x480) = 0;
      *(undefined8 *)(lVar11 + 0x488) = 0;
      (*pcVar9)(lVar11 + 0x4a0);
      pcVar9 = local_4e8;
      if (local_4e0 != (code *)0x0) goto LAB__text__001b9054;
    }
    local_4e8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_4e0 = (code *)0x0;
      local_4d8 = (undefined1 *)0x0;
      local_4f0 = (code *)0x0;
      local_4e8 = (code *)0x0;
      (*pcVar9)(&lStack_4d0);
    }
    lVar21 = FUN__text__0012cb14(lVar1,lVar21 + 0x8c0);
    pcVar9 = *(code **)(lVar21 + 0x488);
    local_4c8 = 5;
    local_4d8 = &LAB__text__001c1bb0;
    local_4e0 = FUN__text__001c1ba4;
    local_4f0 = FUN__text__001c1b40;
    local_4e8 = FUN__text__001c1ba0;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001b9084:
      (*local_4e0)(&lStack_4d0,lVar21 + 0x4a0);
      *(undefined8 *)(lVar21 + 0x480) = local_4f0;
      *(code **)(lVar21 + 0x488) = local_4e8;
      *(code **)(lVar21 + 0x490) = local_4e0;
      *(undefined1 **)(lVar21 + 0x498) = local_4d8;
      pcVar9 = local_4e8;
    }
    else {
      *(undefined8 *)(lVar21 + 0x490) = 0;
      *(undefined8 *)(lVar21 + 0x498) = 0;
      *(undefined8 *)(lVar21 + 0x480) = 0;
      *(undefined8 *)(lVar21 + 0x488) = 0;
      (*pcVar9)(lVar21 + 0x4a0);
      pcVar9 = local_4e8;
      if (local_4e0 != (code *)0x0) goto LAB__text__001b9084;
    }
    local_4e8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_4e0 = (code *)0x0;
      local_4d8 = (undefined1 *)0x0;
      local_4f0 = (code *)0x0;
      local_4e8 = (code *)0x0;
      (*pcVar9)(&lStack_4d0);
    }
    lVar20 = lVar20 + 1;
    lVar18 = lVar18 + 0x70;
    if (lVar20 == 5) {
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      return;
    }
  } while( true );
}


