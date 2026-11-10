/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cde80; name: FUN_.text__001cde80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001cde80(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
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
  
  FUN__text__001c8e50(param_1,param_2,1,param_3,param_4);
  *(undefined8 *)(param_1 + 0x4d0) = param_5;
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  memset(local_268,0,0x200);
  memset(acStack_468,0,0x200);
  if (*(int *)(param_1 + 0x30) == 0) {
    local_4f0 = (code *)0x6ae0d295ee433055;
    uVar6 = FUN__text__0012cce4(lVar1,&local_4f0);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    uVar6 = 0x14c6648c3f1f50e6;
    uVar10 = 0xee2bbe68d51a1f23;
    uVar13 = 0xaf27495b4e77542e;
    uVar14 = 0x710e39;
    uVar15 = 0x2dace8f64758fe35;
    uVar16 = 0x71d906;
  }
  else {
    local_4f0 = (code *)0x24a562ca190bc0f;
    uVar6 = FUN__text__0012cce4(lVar1,&local_4f0);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    uVar6 = 0xa66bd8a83bff8bd7;
    uVar10 = 0x3827ee84a8b798ba;
    uVar13 = 0x33ba7e4145e69219;
    uVar14 = 0x712722;
    uVar15 = 0x7842fc9c0b68003c;
    uVar16 = 0x71e472;
  }
  *(undefined8 *)(param_1 + 0x4d8) = uVar16;
  *(undefined8 *)(param_1 + 0x4e0) = uVar15;
  lVar20 = 0;
  *(undefined8 *)(param_1 + 0x4e8) = uVar14;
  *(undefined8 *)(param_1 + 0x5770) = uVar13;
  *(undefined8 *)(param_1 + 0x5778) = uVar10;
  *(undefined8 *)(param_1 + 0x5780) = uVar6;
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
      FUN__text__005e927c(&local_4f0,0x86e030);
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
      snprintf((char *)local_268,0x200,(char *)0x71f146,*(undefined8 *)(param_1 + 0x4d8),
               uVar7 & 0xffffffff);
      snprintf(acStack_468,0x200,(char *)0x719ee2,*(undefined8 *)(param_1 + 0x4d8));
      lVar21 = param_1 + lVar18 * 0x3c0 + lVar20 * 0xc0;
      FUN__text__001cee80(param_1,lVar21 + 0x13f0,local_268,acStack_468);
      snprintf((char *)local_268,0x200,(char *)0x71f146,*(undefined8 *)(param_1 + 0x4d8),uVar22);
      snprintf(acStack_468,0x200,(char *)0x71d8f7,*(undefined8 *)(param_1 + 0x4d8));
      FUN__text__001cee80(param_1,lVar21 + 0x2a70,local_268,acStack_468);
      snprintf((char *)local_268,0x200,(char *)0x71f146,*(undefined8 *)(param_1 + 0x4d8),
               (ulong)((int)uVar7 + 0x3c));
      snprintf(acStack_468,0x200,(char *)0x7126fd,*(undefined8 *)(param_1 + 0x4d8));
      FUN__text__001cee80(param_1,lVar21 + 0x40f0,local_268,acStack_468);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 6);
    lVar20 = lVar20 + 1;
  } while (lVar20 != 5);
  pcVar9 = *(code **)(param_1 + 0x57a8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x57b0) = 0;
    *(undefined8 *)(param_1 + 0x57b8) = 0;
    *(undefined8 *)(param_1 + 0x57a0) = 0;
    *(undefined8 *)(param_1 + 0x57a8) = 0;
    (*pcVar9)(param_1 + 0x57c0);
  }
  uVar14 = _DAT_008a0f10;
  uVar13 = _DAT_008a0f08;
  uVar10 = _DAT_008a0f00;
  uVar6 = _DAT_008a0ef8;
  lVar11 = 0x1210;
  local_538 = 0x1328;
  *(undefined8 *)(param_1 + 0x57c8) = _DAT_008a0ef0;
  *(undefined8 *)(param_1 + 0x57a0) = uVar6;
  local_510 = 0x1350;
  local_508 = 0x1260;
  local_518 = 0x4878;
  local_528 = 0x1238;
  local_520 = 0x1288;
  local_530 = 0x1378;
  lVar21 = 0;
  local_548 = 0x13a0;
  local_540 = 0x12b0;
  local_558 = 0x4ff8;
  local_550 = 0x2300;
  lVar20 = 0x1300;
  lVar18 = 0x4c38;
  local_568 = 0x13c8;
  local_560 = 0x12d8;
  *(long *)(param_1 + 0x57c0) = param_1;
  *(undefined8 *)(param_1 + 0x57d0) = 0;
  *(undefined8 *)(param_1 + 0x57a8) = uVar10;
  *(undefined8 *)(param_1 + 0x57b0) = uVar13;
  *(undefined8 *)(param_1 + 0x57b8) = uVar14;
  local_570 = 0x53b8;
  do {
    FUN__text__003c7c60(lVar17,param_1 + lVar11,1);
    FUN__text__003c7c60(lVar17,param_1 + lVar20,1);
    lVar3 = param_1 + 0x1210 + lVar21;
    FUN__text__003c7c60(lVar17,lVar3 + 0x1f0,1);
    lVar4 = param_1 + 0x35c0 + lVar21;
    FUN__text__003c7c60(lVar17,lVar4 + -0xb40,1);
    FUN__text__003c7c60(lVar17,lVar4 + 0xb38,0);
    FUN__text__003c7c60(lVar17,param_1 + local_528,1);
    FUN__text__003c7c60(lVar17,param_1 + local_538,1);
    FUN__text__003c7c60(lVar17,lVar3 + 0x5b0,1);
    FUN__text__003c7c60(lVar17,lVar4 + -0x780,1);
    FUN__text__003c7c60(lVar17,lVar4 + 0xef8,0);
    FUN__text__003c7c60(lVar17,param_1 + local_508,1);
    FUN__text__003c7c60(lVar17,param_1 + local_510,1);
    FUN__text__003c7c60(lVar17,lVar3 + 0x970,1);
    FUN__text__003c7c60(lVar17,lVar4 + -0x3c0,1);
    FUN__text__003c7c60(lVar17,param_1 + local_518,0);
    FUN__text__003c7c60(lVar17,param_1 + local_520,1);
    FUN__text__003c7c60(lVar17,param_1 + local_530,1);
    FUN__text__003c7c60(lVar17,lVar3 + 0xd30,1);
    FUN__text__003c7c60(lVar17,lVar4,1);
    FUN__text__003c7c60(lVar17,param_1 + lVar18,0);
    FUN__text__003c7c60(lVar17,param_1 + local_540,1);
    FUN__text__003c7c60(lVar17,param_1 + local_548,1);
    FUN__text__003c7c60(lVar17,param_1 + local_550,1);
    FUN__text__003c7c60(lVar17,lVar4 + 0x3c0,1);
    FUN__text__003c7c60(lVar17,param_1 + local_558,0);
    FUN__text__003c7c60(lVar17,param_1 + local_560,1);
    FUN__text__003c7c60(lVar17,param_1 + local_568,1);
    FUN__text__003c7c60(lVar17,lVar4 + -0xf00,1);
    FUN__text__003c7c60(lVar17,lVar4 + 0x780,1);
    FUN__text__003c7c60(lVar17,param_1 + local_570,0);
    lVar20 = lVar20 + 8;
    lVar18 = lVar18 + 0xc0;
    local_548 = local_548 + 8;
    local_550 = local_550 + 0xc0;
    local_558 = local_558 + 0xc0;
    local_560 = local_560 + 8;
    local_568 = local_568 + 8;
    local_570 = local_570 + 0xc0;
    lVar21 = lVar21 + 0xc0;
    lVar11 = lVar11 + 8;
    local_528 = local_528 + 8;
    local_530 = local_530 + 8;
    local_538 = local_538 + 8;
    local_508 = local_508 + 8;
    local_540 = local_540 + 8;
    local_510 = local_510 + 8;
    local_518 = local_518 + 0xc0;
    local_520 = local_520 + 8;
  } while (lVar21 != 0x3c0);
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0xd0);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4e0 = FUN__text__001d3308;
  local_4f0 = FUN__text__001d3294;
  local_4e8 = FUN__text__001d3304;
  local_4d8 = &LAB__text__001d3314;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001ce7c4:
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
    if (local_4e0 != (code *)0x0) goto LAB__text__001ce7c4;
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
  local_4d8 = &LAB__text__001d3314;
  local_4e0 = FUN__text__001d3308;
  local_4f0 = FUN__text__001d3294;
  local_4e8 = FUN__text__001d3304;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001ce844:
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
    if (local_4e0 != (code *)0x0) goto LAB__text__001ce844;
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
  local_4f0 = FUN__text__001d3320;
  local_4e8 = FUN__text__001d3384;
  local_4e0 = FUN__text__001d3388;
  local_4d8 = &LAB__text__001d3394;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001ce8e0:
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
    if (local_4e0 != (code *)0x0) goto LAB__text__001ce8e0;
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
  local_4f0 = FUN__text__001d33a0;
  local_4e8 = FUN__text__001d3404;
  local_4e0 = FUN__text__001d3408;
  local_4d8 = &LAB__text__001d3414;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001ce97c:
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
    if (local_4e0 != (code *)0x0) goto LAB__text__001ce97c;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
  if (*(char *)(param_1 + 0x280) == '\0') goto LAB__text__001cea54;
  lVar20 = FUN__text__0012cb14(lVar1,param_1 + 0x288);
  pcVar9 = *(code **)(lVar20 + 0x488);
  local_4f0 = FUN__text__001d3420;
  local_4e8 = FUN__text__001d3484;
  local_4e0 = FUN__text__001d3488;
  local_4d8 = &LAB__text__001d3494;
  lStack_4d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB__text__001cea20:
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
    if (local_4e0 != (code *)0x0) goto LAB__text__001cea20;
  }
  pcVar9 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (undefined1 *)0x0;
    local_4f0 = (code *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar9)(&lStack_4d0);
  }
LAB__text__001cea54:
  lVar20 = 0;
  lVar18 = 0x720;
  do {
    lVar21 = param_1 + lVar18;
    lVar11 = FUN__text__0012cb14(lVar1,lVar21 + -0x230);
    pcVar9 = *(code **)(lVar11 + 0x488);
    uVar19 = (undefined4)lVar20;
    local_4c8 = 0;
    local_4e0 = FUN__text__001d3504;
    local_4d8 = &LAB__text__001d3510;
    local_4f0 = FUN__text__001d34a0;
    local_4e8 = FUN__text__001d3500;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001ced28:
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
      if (local_4e0 != (code *)0x0) goto LAB__text__001ced28;
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
    local_4d8 = &LAB__text__001d3510;
    local_4e0 = FUN__text__001d3504;
    local_4f0 = FUN__text__001d34a0;
    local_4e8 = FUN__text__001d3500;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001ced54:
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
      if (local_4e0 != (code *)0x0) goto LAB__text__001ced54;
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
    local_4d8 = &LAB__text__001d3510;
    local_4e0 = FUN__text__001d3504;
    local_4f0 = FUN__text__001d34a0;
    local_4e8 = FUN__text__001d3500;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001ced84:
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
      if (local_4e0 != (code *)0x0) goto LAB__text__001ced84;
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
    local_4d8 = &LAB__text__001d3510;
    local_4e0 = FUN__text__001d3504;
    local_4f0 = FUN__text__001d34a0;
    local_4e8 = FUN__text__001d3500;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001cedb4:
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
      if (local_4e0 != (code *)0x0) goto LAB__text__001cedb4;
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
    local_4d8 = &LAB__text__001d3510;
    local_4e0 = FUN__text__001d3504;
    local_4f0 = FUN__text__001d34a0;
    local_4e8 = FUN__text__001d3500;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001cede4:
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
      if (local_4e0 != (code *)0x0) goto LAB__text__001cede4;
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
    local_4d8 = &LAB__text__001d3510;
    local_4e0 = FUN__text__001d3504;
    local_4f0 = FUN__text__001d34a0;
    local_4e8 = FUN__text__001d3500;
    lStack_4d0 = param_1;
    uStack_4c4 = uVar19;
    if (pcVar9 == (code *)0x0) {
LAB__text__001cee14:
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
      if (local_4e0 != (code *)0x0) goto LAB__text__001cee14;
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


