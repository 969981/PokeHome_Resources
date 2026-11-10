/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025c9c8; name: FUN_.text__0025c9c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0025c9c8(long param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8;
  ulong local_e4;
  ulong local_dc;
  ulong local_d4;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  
  lVar9 = *(long *)(param_1 + 0x640);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar7 = *(long *)(param_1 + 0xfe0);
  local_c8 = (undefined4)lVar7;
  iStack_c4 = (int)((ulong)lVar7 >> 0x20);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar9,&local_c8,param_1 + 0x1004,param_3);
  if (CONCAT44(iStack_c4,local_c8) != 0) {
    (**(code **)(*(long *)(CONCAT44(iStack_c4,local_c8) + 0x48) + 0x18))();
  }
  iVar5 = *(int *)(param_1 + 0x1004);
  lVar9 = *(long *)(param_1 + 0xfe0);
  iVar4 = 3;
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  *(bool *)(param_1 + 0x1008) = iVar5 == 0;
  *(int *)(param_1 + 0x1000) = iVar4;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (param_2 != 0) goto LAB__text__0025d67c;
  local_ac = *(undefined8 *)(param_1 + 0x8f8);
  local_94 = 0x3f8000003f800000;
  local_8c = 0x3f800000;
  local_b4 = *(undefined8 *)(param_1 + 0x8f0);
  iStack_c4 = (int)*(float *)(param_1 + 0x8e0);
  local_7c = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  iStack_c0 = (int)*(float *)(param_1 + 0x8e4);
  local_e4 = 0xffffffffffffffff;
  local_dc = 0xffffffffffffffff;
  local_d4 = 0xffffffffffffffff;
  local_c8 = CONCAT31(local_c8._1_3_,1);
  local_bc = 0x14000000bc;
  local_84 = 0x500000005;
  local_a4 = local_b4;
  local_9c = local_ac;
  if (*(int *)(param_1 + 0x1000) - 1U < 2) {
    local_7c = 1;
    local_100 = 400;
    uVar3 = FUN__text__00306694(lVar9,0);
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_100 = CONCAT44(uVar3,(undefined4)local_100);
    uVar3 = FUN__text__00306694(lVar9,1);
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f8 = CONCAT44(local_f8._4_4_,uVar3);
    uVar3 = FUN__text__00306694(lVar9,2);
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f8 = CONCAT44(uVar3,(uint)local_f8);
    uVar3 = FUN__text__00306694(lVar9,5);
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f0 = CONCAT44(local_f0._4_4_,uVar3);
    uVar3 = FUN__text__00306694(lVar9,4);
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f0 = CONCAT44(uVar3,(uint)local_f0);
    local_e8 = FUN__text__00306694(lVar9,3);
    if (0x30b < local_e8) {
      local_e8 = 0x30c;
    }
  }
  else {
    local_100 = 400;
    uVar6 = FUN__text__00306694(lVar9,0);
    local_100 = CONCAT44(uVar6,(undefined4)local_100);
    uVar6 = FUN__text__00306694(lVar9,1);
    local_f8 = CONCAT44(local_f8._4_4_,uVar6);
    uVar6 = FUN__text__00306694(lVar9,2);
    local_f8 = CONCAT44(uVar6,(uint)local_f8);
    uVar6 = FUN__text__00306694(lVar9,5);
    local_f0 = CONCAT44(local_f0._4_4_,uVar6);
    uVar6 = FUN__text__00306694(lVar9,4);
    local_f0 = CONCAT44(uVar6,(uint)local_f0);
    local_e8 = FUN__text__00306694(lVar9,3);
  }
  FUN__text__0025f798(*(undefined8 *)(param_1 + 0x820),&local_c8);
  FUN__text__0025f7c4(*(undefined8 *)(param_1 + 0x820),&local_100,*(undefined1 *)(param_1 + 0x8ec));
  local_94 = 0x3f8000003f800000;
  local_8c = 0x3f800000;
  local_c8 = CONCAT31(local_c8._1_3_,1);
  local_7c = 1;
  local_ac = *(undefined8 *)(param_1 + 0x938);
  local_d4 = 0xffffffffffffffff;
  iStack_c4 = (int)*(float *)(param_1 + 0x8e0);
  local_dc = 0xffffffffffffffff;
  iStack_c0 = (int)*(float *)(param_1 + 0x8e4);
  local_b4 = *(undefined8 *)(param_1 + 0x930);
  local_a4 = *(undefined8 *)(param_1 + 0x940);
  local_e4 = 0xffffffffffffffff;
  local_bc = 0x14000000bc;
  local_84 = 0x500000005;
  local_100 = CONCAT44(local_100._4_4_,400);
  local_9c = *(undefined8 *)(param_1 + 0x948);
  uVar3 = FUN__text__00306694(lVar9,0);
  if (0x30b < uVar3) {
    uVar3 = 0x30c;
  }
  local_100 = CONCAT44(uVar3,(undefined4)local_100);
  uVar3 = FUN__text__00306694(lVar9,1);
  if (0x30b < uVar3) {
    uVar3 = 0x30c;
  }
  local_f8 = CONCAT44(local_f8._4_4_,uVar3);
  uVar3 = FUN__text__00306694(lVar9,2);
  if (0x30b < uVar3) {
    uVar3 = 0x30c;
  }
  local_f8 = CONCAT44(uVar3,(uint)local_f8);
  uVar3 = FUN__text__00306694(lVar9,5);
  if (0x30b < uVar3) {
    uVar3 = 0x30c;
  }
  local_f0 = CONCAT44(local_f0._4_4_,uVar3);
  uVar3 = FUN__text__00306694(lVar9,4);
  if (0x30b < uVar3) {
    uVar3 = 0x30c;
  }
  local_f0 = CONCAT44(uVar3,(uint)local_f0);
  local_e8 = FUN__text__00306694(lVar9,3);
  if (0x30b < local_e8) {
    local_e8 = 0x30c;
  }
  uVar3 = FUN__text__00306858(lVar9,0);
  if (uVar3 < 200) {
    uVar3 = FUN__text__00306858(lVar9,1);
    if (199 < uVar3) goto LAB__text__0025cf70;
LAB__text__0025cd58:
    uVar3 = FUN__text__00306858(lVar9,2);
    if (199 < uVar3) goto LAB__text__0025cf88;
LAB__text__0025cd6c:
    uVar3 = FUN__text__00306858(lVar9,5);
    if (199 < uVar3) goto LAB__text__0025cfa0;
LAB__text__0025cd80:
    uVar3 = FUN__text__00306858(lVar9,4);
    if (199 < uVar3) goto LAB__text__0025cfb8;
LAB__text__0025cd94:
    uVar3 = FUN__text__00306858(lVar9,3);
  }
  else {
    local_e4 = local_e4 & 0xffffffff00000000;
    uVar3 = FUN__text__00306858(lVar9,1);
    if (uVar3 < 200) goto LAB__text__0025cd58;
LAB__text__0025cf70:
    local_e4 = local_e4 & 0xffffffff;
    uVar3 = FUN__text__00306858(lVar9,2);
    if (uVar3 < 200) goto LAB__text__0025cd6c;
LAB__text__0025cf88:
    local_dc = local_dc & 0xffffffff00000000;
    uVar3 = FUN__text__00306858(lVar9,5);
    if (uVar3 < 200) goto LAB__text__0025cd80;
LAB__text__0025cfa0:
    local_dc = local_dc & 0xffffffff;
    uVar3 = FUN__text__00306858(lVar9,4);
    if (uVar3 < 200) goto LAB__text__0025cd94;
LAB__text__0025cfb8:
    local_d4 = local_d4 & 0xffffffff00000000;
    uVar3 = FUN__text__00306858(lVar9,3);
  }
  if (199 < uVar3) {
    local_d4 = local_d4 & 0xffffffff;
  }
  FUN__text__0025f798(*(undefined8 *)(param_1 + 0x840),&local_c8);
  FUN__text__0025f7c4(*(undefined8 *)(param_1 + 0x840),&local_100,*(undefined1 *)(param_1 + 0x8ec));
  local_7c = 0;
  local_94 = 0x3f8000003f800000;
  local_e8 = 0;
  iStack_c4 = (int)*(float *)(param_1 + 0x8e0);
  local_8c = 0x3f800000;
  local_f8 = 0;
  local_f0 = 0;
  local_e4 = 0xffffffffffffffff;
  iStack_c0 = (int)*(float *)(param_1 + 0x8e4);
  local_dc = 0xffffffffffffffff;
  local_d4 = 0xffffffffffffffff;
  local_bc = 0x14000000bc;
  local_84 = 0x500000005;
  local_c8 = CONCAT31(local_c8._1_3_,1);
  if (*(int *)(param_1 + 0x1000) - 1U < 2) {
    local_7c = 1;
    local_b4 = *(undefined8 *)(param_1 + 0x950);
    local_ac = *(undefined8 *)(param_1 + 0x958);
    local_100 = 400;
    local_a4 = local_b4;
    local_9c = local_ac;
    iVar4 = FUN__text__00306694(lVar9,0);
    iVar5 = FUN__text__00306858(lVar9,0);
    uVar3 = iVar4 - iVar5;
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_100 = CONCAT44(uVar3,(undefined4)local_100);
    iVar4 = FUN__text__00306694(lVar9,1);
    iVar5 = FUN__text__00306858(lVar9,1);
    uVar3 = iVar4 - iVar5;
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f8 = CONCAT44(local_f8._4_4_,uVar3);
    iVar4 = FUN__text__00306694(lVar9,2);
    iVar5 = FUN__text__00306858(lVar9,2);
    uVar3 = iVar4 - iVar5;
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f8 = CONCAT44(uVar3,(uint)local_f8);
    iVar4 = FUN__text__00306694(lVar9,5);
    iVar5 = FUN__text__00306858(lVar9,5);
    uVar3 = iVar4 - iVar5;
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f0 = CONCAT44(local_f0._4_4_,uVar3);
    iVar4 = FUN__text__00306694(lVar9,4);
    iVar5 = FUN__text__00306858(lVar9,4);
    uVar3 = iVar4 - iVar5;
    if (0x30b < uVar3) {
      uVar3 = 0x30c;
    }
    local_f0 = CONCAT44(uVar3,(uint)local_f0);
    iVar4 = FUN__text__00306694(lVar9,3);
    iVar5 = FUN__text__00306858(lVar9,3);
    local_e8 = iVar4 - iVar5;
    if (0x30b < local_e8) {
      local_e8 = 0x30c;
    }
  }
  else {
    local_b4 = *(undefined8 *)(param_1 + 0x900);
    local_ac = *(undefined8 *)(param_1 + 0x908);
    local_100 = 400;
    local_a4 = local_b4;
    local_9c = local_ac;
    iVar4 = FUN__text__0030683c(lVar9,0);
    iVar5 = FUN__text__0030682c(lVar9,0);
    local_100 = CONCAT44(iVar5 + iVar4,(undefined4)local_100);
    iVar4 = FUN__text__0030683c(lVar9,1);
    iVar5 = FUN__text__0030682c(lVar9,1);
    local_f8 = CONCAT44(local_f8._4_4_,iVar5 + iVar4);
    iVar4 = FUN__text__0030683c(lVar9,2);
    iVar5 = FUN__text__0030682c(lVar9,2);
    local_f8 = CONCAT44(iVar5 + iVar4,(uint)local_f8);
    iVar4 = FUN__text__0030683c(lVar9,5);
    iVar5 = FUN__text__0030682c(lVar9,5);
    local_f0 = CONCAT44(local_f0._4_4_,iVar5 + iVar4);
    iVar4 = FUN__text__0030683c(lVar9,4);
    iVar5 = FUN__text__0030682c(lVar9,4);
    local_f0 = CONCAT44(iVar5 + iVar4,(uint)local_f0);
    iVar4 = FUN__text__0030683c(lVar9,3);
    iVar5 = FUN__text__0030682c(lVar9,3);
    local_e8 = iVar5 + iVar4;
  }
  FUN__text__0025f798(*(undefined8 *)(param_1 + 0x860),&local_c8);
  FUN__text__0025f7c4(*(undefined8 *)(param_1 + 0x860),&local_100,*(undefined1 *)(param_1 + 0x8ec));
  local_7c = 0;
  local_d4 = 0xffffffffffffffff;
  local_dc = 0xffffffffffffffff;
  iStack_c4 = (int)*(float *)(param_1 + 0x8e0);
  local_e4 = 0xffffffffffffffff;
  local_bc = 0x14000000bc;
  local_c8._0_1_ = 1;
  iStack_c0 = (int)*(float *)(param_1 + 0x8e4);
  local_94 = 0x3f8000003f800000;
  local_84 = 0x500000005;
  local_8c = 0x3f800000;
  local_100 = CONCAT44(local_100._4_4_,0xfc);
  uVar3 = FUN__text__00306850(lVar9);
  puVar1 = (undefined8 *)(param_1 + 0x920);
  if (uVar3 < 0x1fe) {
    puVar1 = (undefined8 *)(param_1 + 0x910);
  }
  local_b4 = *puVar1;
  local_ac = puVar1[1];
  uVar3 = FUN__text__00306850(lVar9);
  puVar1 = (undefined8 *)(param_1 + 0x920);
  if (uVar3 < 0x1fe) {
    puVar1 = (undefined8 *)(param_1 + 0x910);
  }
  local_a4 = *puVar1;
  local_9c = puVar1[1];
  uVar6 = FUN__text__00306848(lVar9,0);
  local_100._4_4_ = uVar6;
  uVar6 = FUN__text__00306848(lVar9,1);
  local_f8 = CONCAT44(local_f8._4_4_,uVar6);
  uVar6 = FUN__text__00306848(lVar9,2);
  local_f8._4_4_ = uVar6;
  uVar6 = FUN__text__00306848(lVar9,5);
  local_f0 = CONCAT44(local_f0._4_4_,uVar6);
  uVar6 = FUN__text__00306848(lVar9,4);
  local_f0._4_4_ = uVar6;
  local_e8 = FUN__text__00306848(lVar9,3);
  FUN__text__0025f798(*(undefined8 *)(param_1 + 0x880),&local_c8);
  FUN__text__0025f7c4(*(undefined8 *)(param_1 + 0x880),&local_100,*(undefined1 *)(param_1 + 0x8ec));
  local_bc = 0x14000000bc;
  local_b4 = *(undefined8 *)(param_1 + 0x960);
  local_c8._0_1_ = 1;
  local_94 = 0x3f8000003f800000;
  local_8c = 0x3f800000;
  iStack_c4 = (int)*(float *)(param_1 + 0x8e0);
  local_ac = *(undefined8 *)(param_1 + 0x968);
  local_84 = 0x500000005;
  local_7c = 2;
  iStack_c0 = (int)*(float *)(param_1 + 0x8e4);
  local_a4 = local_b4;
  local_9c = local_ac;
  FUN__text__0025f798(*(undefined8 *)(param_1 + 0x8a0),&local_c8);
  local_d4 = 0xffffffffffffffff;
  local_dc = 0xffffffffffffffff;
  local_e4 = 0xffffffffffffffff;
  local_100 = CONCAT44(local_100._4_4_,0x1f);
  uVar6 = FUN__text__00306834(lVar9,0);
  local_100._4_4_ = uVar6;
  uVar6 = FUN__text__00306834(lVar9,1);
  local_f8 = CONCAT44(local_f8._4_4_,uVar6);
  uVar6 = FUN__text__00306834(lVar9,2);
  local_f8._4_4_ = uVar6;
  uVar6 = FUN__text__00306834(lVar9,5);
  local_f0 = CONCAT44(local_f0._4_4_,uVar6);
  uVar6 = FUN__text__00306834(lVar9,4);
  local_f0._4_4_ = uVar6;
  local_e8 = FUN__text__00306834(lVar9,3);
  FUN__text__0025f7c4(*(undefined8 *)(param_1 + 0x8a0),&local_100,*(undefined1 *)(param_1 + 0x8ec));
  local_ac = *(undefined8 *)(param_1 + 0x978);
  local_c8 = CONCAT31(local_c8._1_3_,1);
  local_bc = 0x14000000bc;
  local_b4 = *(undefined8 *)(param_1 + 0x970);
  local_94 = 0x3f8000003f800000;
  local_8c = 0x3f800000;
  local_84 = 0x500000005;
  iStack_c4 = (int)*(float *)(param_1 + 0x8e0);
  iStack_c0 = (int)*(float *)(param_1 + 0x8e4);
  local_7c = 3;
  local_a4 = local_b4;
  local_9c = local_ac;
  FUN__text__0025f798(*(undefined8 *)(param_1 + 0x8c0),&local_c8);
  local_e4 = 0xffffffffffffffff;
  local_dc = 0xffffffffffffffff;
  local_d4 = 0xffffffffffffffff;
  local_e8 = 0;
  local_100 = CONCAT44(local_100._4_4_,0xff);
  uVar8 = FUN__text__00306bc4(lVar9);
  uVar6 = FUN__text__00631368(uVar8,0);
  local_100 = CONCAT44(uVar6,(undefined4)local_100) & 0xffffffffff;
  uVar8 = FUN__text__00306bc4(lVar9);
  uVar6 = FUN__text__00631368(uVar8,1);
  local_f8 = CONCAT44(local_f8._4_4_,uVar6) & 0xffffffff000000ff;
  uVar8 = FUN__text__00306bc4(lVar9);
  uVar6 = FUN__text__00631368(uVar8,2);
  local_f8 = CONCAT44(uVar6,(uint)local_f8) & 0xffffffffff;
  uVar8 = FUN__text__00306bc4(lVar9);
  uVar6 = FUN__text__00631368(uVar8,3);
  local_f0 = CONCAT44(local_f0._4_4_,uVar6) & 0xffffffff000000ff;
  uVar8 = FUN__text__00306bc4(lVar9);
  uVar6 = FUN__text__00631368(uVar8,4);
  local_f0 = CONCAT44(uVar6,(uint)local_f0) & 0xffffffffff;
  FUN__text__0025f7c4(*(undefined8 *)(param_1 + 0x8c0),&local_100,*(undefined1 *)(param_1 + 0x8ec));
  lVar7 = param_1 + 0x110;
  uVar8 = FUN__text__00306bc4(lVar9);
  bVar2 = FUN__text__00631368(uVar8,5);
  if (bVar2 == 0) {
    fVar10 = 0.0;
  }
  else if (bVar2 == 0xff) {
    fVar10 = 12.0;
  }
  else {
    fVar10 = (float)((uint)bVar2 + (uint)bVar2 * 2 >> 6);
  }
  FUN__text__0012c97c(fVar10,lVar7,0x72ccc8);
  FUN__text__0012c97c(fVar10,lVar7,0x72ccd0);
  local_118 = _DAT_0072c120;
  uStack_110 = _DAT_0072c128;
  local_108 = _DAT_0072c130;
  local_128 = _DAT_0072c110;
  uStack_120 = _DAT_0072c118;
  local_140 = _DAT_0072c148;
  uStack_138 = _DAT_0072c150;
  local_130 = _DAT_0072c158;
  local_150 = _DAT_0072c138;
  uStack_148 = _DAT_0072c140;
  FUN__text__0012c378(lVar7,&local_128);
  FUN__text__0012c378(lVar7,&local_150);
  if (local_100._4_4_ < 0xff) {
    *(undefined1 *)(param_1 + 0x6db) = 0;
    FUN__text__0012c97c(0,lVar7,&local_128);
    FUN__text__0012c97c(0,lVar7,&local_150);
  }
  else {
    *(undefined1 *)(param_1 + 0x6db) = 1;
  }
  FUN__text__0012c378(lVar7,&uStack_120);
  FUN__text__0012c378(lVar7,&uStack_148);
  if ((uint)local_f8 < 0xff) {
    *(undefined1 *)(param_1 + 0x6dc) = 0;
    FUN__text__0012c97c(0,lVar7,&uStack_120);
    FUN__text__0012c97c(0,lVar7,&uStack_148);
  }
  else {
    *(undefined1 *)(param_1 + 0x6dc) = 1;
  }
  FUN__text__0012c378(lVar7,&local_118);
  FUN__text__0012c378(lVar7,&local_140);
  if (local_f8._4_4_ < 0xff) {
    *(undefined1 *)(param_1 + 0x6dd) = 0;
    FUN__text__0012c97c(0,lVar7,&local_118);
    FUN__text__0012c97c(0,lVar7,&local_140);
  }
  else {
    *(undefined1 *)(param_1 + 0x6dd) = 1;
  }
  FUN__text__0012c378(lVar7,&uStack_110);
  FUN__text__0012c378(lVar7,&uStack_138);
  if ((uint)local_f0 < 0xff) {
    *(undefined1 *)(param_1 + 0x6de) = 0;
    FUN__text__0012c97c(0,lVar7,&uStack_110);
    FUN__text__0012c97c(0,lVar7,&uStack_138);
  }
  else {
    *(undefined1 *)(param_1 + 0x6de) = 1;
  }
  FUN__text__0012c378(lVar7,&local_108);
  FUN__text__0012c378(lVar7,&local_130);
  if (local_f0._4_4_ < 0xff) {
    *(undefined1 *)(param_1 + 0x6df) = 0;
    FUN__text__0012c97c(0,lVar7,&local_108);
    FUN__text__0012c97c(0,lVar7,&local_130);
  }
  else {
    *(undefined1 *)(param_1 + 0x6df) = 1;
  }
  *(undefined1 *)(param_1 + 0x8ec) = 0;
LAB__text__0025d67c:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


