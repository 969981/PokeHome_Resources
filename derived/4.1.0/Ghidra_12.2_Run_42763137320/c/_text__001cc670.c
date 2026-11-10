/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cc670; name: FUN_.text__001cc670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001cc670(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined8 local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  long local_218;
  undefined1 local_20c [4];
  int local_208;
  int local_204;
  uint local_200;
  uint local_1fc;
  undefined1 auStack_1f8 [8];
  undefined8 local_1f0 [22];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [160];
  undefined1 auStack_98 [40];
  
  if (*(char *)(param_3 + 0x5864) == '\0') {
    return;
  }
  lVar13 = *(long *)(param_3 + 0x18);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar14 = *(long *)(param_3 + 8);
  lVar46 = *(long *)(lVar14 + 0x2d0);
  if (lVar46 != 0) {
    (**(code **)(*(long *)(lVar46 + 0x48) + 0x10))();
  }
  lVar44 = *(long *)(param_3 + 0x38);
  lVar43 = *(long *)(lVar44 + 0x148);
  iVar9 = *(int *)(lVar43 + 0x20);
  iVar2 = *(int *)(lVar43 + 0x24);
  uVar45 = *(ulong *)(lVar43 + 0x28);
  iVar1 = *(int *)(lVar43 + 0x30);
  iVar3 = *(int *)(lVar43 + 0x34);
  uVar11 = *(uint *)(lVar43 + 0x38);
  uVar10 = *(uint *)(lVar43 + 0x3c);
  uVar15 = (ulong)(*(int *)(lVar44 + 0x1b0) != iVar9 && *(int *)(lVar44 + 0x1b4) == iVar9);
  lVar22 = *(long *)(lVar44 + uVar15 * 0x20 + 0xa8);
  memcpy(auStack_138,
         (void *)(lVar22 + (uVar45 & 0xffffffff) * 0x3c0 + (uVar45 >> 0x20) * 0xc0 + 0x40f0),0xc0);
  bVar8 = false;
  if ((iVar9 == iVar1) && (iVar2 == iVar3)) {
    bVar8 = uVar11 == (uint)uVar45 && uVar10 == (uint)(uVar45 >> 0x20);
  }
  memcpy(auStack_1f8,(void *)(param_3 + (ulong)uVar11 * 0x3c0 + (ulong)uVar10 * 0xc0 + 0x13f0),0xc0)
  ;
  iVar9 = *(int *)(param_3 + 0x5868);
  local_20c[0] = 0;
  local_208 = iVar1;
  local_204 = iVar3;
  local_200 = uVar11;
  local_1fc = uVar10;
  if (iVar9 == 2) {
    if (!bVar8) {
      FUN__text__001a0188(lVar44,local_1f0[0]);
      FUN__text__003c81e0(lVar46,auStack_1f8,local_1f0);
      FUN__text__003c7960(lVar46,local_1f0,auStack_140);
    }
    if ((*(char *)(*(long *)(lVar13 + 8) + 0x2a4) == '\0') &&
       (uVar15 = FUN__text__001d3bb0(lVar43), (uVar15 & 1) != 0)) {
      *(undefined1 *)(param_3 + 0x5821) = 1;
    }
    FUN__text__001a1514(*(undefined8 *)(param_3 + 0x38));
    FUN__text__001d2f40(param_3);
    FUN__text__001d3ec0(lVar43);
    uVar12 = *(undefined8 *)(lVar43 + 0x60);
    uVar5 = *(undefined8 *)(lVar43 + 0x68);
    *(undefined8 *)(lVar43 + 100) = 0;
    uVar11 = *(uint *)(lVar43 + 0x70);
    *(undefined8 *)(lVar43 + 0x6a) = 0;
    local_2e0 = CONCAT44(local_2e0._4_4_,uVar11);
    local_2f0._3_1_ = (byte)((ulong)uVar12 >> 0x18);
    uVar4 = *(undefined8 *)(lVar43 + 0x50);
    uVar6 = *(undefined8 *)(lVar43 + 0x58);
    *(undefined8 *)(lVar43 + 0x54) = 0;
    local_310 = *(undefined8 *)(lVar43 + 0x40);
    local_308 = *(code **)(lVar43 + 0x48);
    *(undefined8 *)(lVar43 + 0x5c) = 0;
    local_2f8._1_1_ = (byte)((ulong)uVar6 >> 8);
    uVar10 = (uint)local_2f8._1_1_;
    local_2f8._6_1_ = (byte)((ulong)uVar6 >> 0x30);
    uVar23 = (uint)local_2f0._3_1_;
    uVar16 = (uint)local_2f8._6_1_;
    local_2e8._5_1_ = (byte)((ulong)uVar5 >> 0x28);
    local_2e8._0_1_ = (byte)uVar5;
    uVar24 = (uint)local_2e8._5_1_;
    uVar17 = (uint)(byte)local_2e8;
    local_300._5_1_ = (byte)((ulong)uVar4 >> 0x28);
    uVar25 = (uint)local_300._5_1_;
    local_2f8._7_1_ = (byte)((ulong)uVar6 >> 0x38);
    local_2f8._2_1_ = (byte)((ulong)uVar6 >> 0x10);
    uVar26 = (uint)local_2f8._7_1_;
    uVar18 = (uint)local_2f8._2_1_;
    local_2f0._4_1_ = (byte)((ulong)uVar12 >> 0x20);
    uVar27 = (uint)local_2f0._4_1_;
    local_2e8._1_1_ = (byte)((ulong)uVar5 >> 8);
    uVar28 = (uint)local_2e8._1_1_;
    local_300._6_1_ = (byte)((ulong)uVar4 >> 0x30);
    local_2e8._6_1_ = (byte)((ulong)uVar5 >> 0x30);
    uVar29 = (uint)local_300._6_1_;
    uVar19 = (uint)local_2e8._6_1_;
    local_2f8._3_1_ = (byte)((ulong)uVar6 >> 0x18);
    uVar30 = (uint)local_2f8._3_1_;
    local_2f0._0_1_ = (byte)uVar12;
    uVar31 = (uint)(byte)local_2f0;
    local_2f0._5_1_ = (byte)((ulong)uVar12 >> 0x28);
    uVar32 = (uint)local_2f0._5_1_;
    local_2e8._7_1_ = (byte)((ulong)uVar5 >> 0x38);
    local_2e8._2_1_ = (byte)((ulong)uVar5 >> 0x10);
    uVar33 = (uint)local_2e8._7_1_;
    uVar20 = (uint)local_2e8._2_1_;
    local_300._7_1_ = (byte)((ulong)uVar4 >> 0x38);
    uVar34 = (uint)local_300._7_1_;
    local_2f8._4_1_ = (byte)((ulong)uVar6 >> 0x20);
    uVar35 = (uint)local_2f8._4_1_;
    local_2f0._1_1_ = (byte)((ulong)uVar12 >> 8);
    uVar36 = (uint)local_2f0._1_1_;
    local_2f0._6_1_ = (byte)((ulong)uVar12 >> 0x30);
    uVar37 = (uint)local_2f0._6_1_;
    local_2e8._3_1_ = (byte)((ulong)uVar5 >> 0x18);
    uVar21 = (uint)local_2e8._3_1_;
    local_2f8._0_1_ = (byte)uVar6;
    uVar38 = (uint)(byte)local_2f8;
    local_2f8._5_1_ = (byte)((ulong)uVar6 >> 0x28);
    uVar39 = (uint)local_2f8._5_1_;
    local_2f0._2_1_ = (byte)((ulong)uVar12 >> 0x10);
    uVar40 = (uint)local_2f0._2_1_;
    local_2f0._7_1_ = (byte)((ulong)uVar12 >> 0x38);
    uVar41 = (uint)local_2f0._7_1_;
    local_2e8._4_1_ = (byte)((ulong)uVar5 >> 0x20);
    uVar42 = (uint)local_2e8._4_1_;
    local_300 = uVar4;
    local_2f8 = uVar6;
    local_2f0 = uVar12;
    local_2e8 = uVar5;
    if (uVar10 + ((uint)((ulong)uVar4 >> 0x20) & 0xff) + uVar16 + uVar23 + uVar17 + uVar24 + uVar25
        + uVar18 + uVar26 + uVar27 + uVar28 + uVar19 + uVar29 + uVar30 + uVar31 + uVar32 +
        uVar20 + uVar33 + uVar34 + uVar35 + uVar36 + uVar37 +
        uVar21 + (uVar11 & 0xff) + uVar38 + uVar39 + uVar40 + uVar41 + uVar42 + (uVar11 >> 8 & 0xff)
        != 0) {
      FUN__text__001a8bec(&local_310,lVar13);
    }
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x68);
    FUN__text__001bc4a0(uVar12,0,0,0);
    lVar13 = *(long *)(param_3 + 0x38);
    if (*(int *)(lVar13 + 0x1bc) == 3) {
      FUN__text__001b9bcc(uVar12);
      lVar13 = *(long *)(param_3 + 0x38);
    }
    uVar12 = *(undefined8 *)(lVar13 + 0x88);
    FUN__text__001bc4a0(uVar12,0,0,0);
    if (*(int *)(*(long *)(param_3 + 0x38) + 0x1c0) == 3) {
      FUN__text__001b9bcc(uVar12);
    }
    if (*(long *)(lVar22 + 0x5788) != 0) {
      FUN__text__001d0690(lVar22,*(undefined4 *)(lVar22 + 0x5790),0);
    }
    if (*(long *)(param_3 + 0x5788) != 0) {
      FUN__text__001d0690(param_3,*(undefined4 *)(param_3 + 0x5790),0);
    }
    FUN__text__001ad490(*(undefined8 *)(param_3 + 0x4d0),*(undefined4 *)(param_3 + 0x30),1,local_20c
                       );
    FUN__text__001a191c(*(undefined8 *)(param_3 + 0x38),1,local_20c);
    FUN__text__001ad4a8(*(undefined8 *)(param_3 + 0x4d0));
    FUN__text__001a193c(*(undefined8 *)(param_3 + 0x38));
    iVar9 = *(int *)(param_3 + 0x5868);
    *(undefined1 *)(param_3 + 0x5864) = 0;
  }
  else {
    if (iVar9 == 1) {
      if (bVar8) {
        uVar11 = 0;
        lVar13 = *(long *)(lVar14 + 0x2d0);
      }
      else {
        uVar48 = FUN__text__003c7a20(lVar46,local_1f0);
        local_310 = CONCAT44(param_2,uVar48);
        uVar11 = FUN__text__0019694c(*_DAT_008a05f0,&local_310,&local_310,param_3 + 0x5874);
        FUN__text__003c7960(lVar46,local_1f0,&local_310);
        uVar11 = uVar11 ^ 1;
        lVar13 = *(long *)(lVar14 + 0x2d0);
      }
      if (lVar13 != 0) {
        uVar10 = FUN__text__003c7ec0(lVar13,auStack_98);
        uVar11 = uVar11 | uVar10 ^ 1;
      }
      if ((uVar11 & 1) != 0) goto LAB__text__001ccd04;
    }
    else {
      if (iVar9 != 0) goto LAB__text__001ccd04;
      FUN__text__0012c378(lVar14 + 0x110,auStack_98);
      lVar13 = *_DAT_0089f598;
      FUN__text__005e927c(&local_230,_DAT_008a0610);
      uVar12 = FUN__text__003eec14(lVar13);
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2f0 = 0;
      local_2e8 = 0;
      local_300 = 0;
      local_2f8 = 0;
      local_310 = 0;
      local_308 = (code *)0x0;
      iVar9 = FUN__text__003ef560(lVar13,&local_230,uVar12,0);
      if ((iVar9 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar13 + 0x210),&local_230,iVar9,uVar12,0,&local_310,0
                             ), pcVar7 = local_308, local_308 != (code *)0x0)) {
        local_300 = 0;
        local_2f8 = 0;
        local_310 = 0;
        local_308 = (code *)0x0;
        (*pcVar7)(&local_2f0);
      }
      if (local_218 != 0) {
        (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
      }
      if (!bVar8) {
        uVar47 = FUN__text__003c7a60(lVar46,local_1f0);
        uVar48 = param_2;
        FUN__text__003c8320(lVar46,local_1f0);
        FUN__text__001a0124(*(undefined8 *)(param_3 + 0x38),local_1f0[0]);
        local_230 = FUN__text__001a01dc(*(undefined8 *)(param_3 + 0x38));
        uVar49 = param_2;
        local_22c = uVar48;
        local_238 = FUN__text__0019693c(uVar47,&local_230);
        local_234 = uVar49;
        FUN__text__003c7960(lVar46,local_1f0,&local_238);
        *(undefined4 *)(param_3 + 0x586c) = uVar47;
        *(undefined4 *)(param_3 + 0x5870) = param_2;
        iVar9 = *(int *)(*(long *)(param_3 + 0x38) + uVar15 * 4 + 0x1bc);
        if (iVar9 != 0) {
          lVar13 = *(long *)(param_3 + 0x38) + uVar15 * 0x20;
          if (iVar9 == 4) {
            lVar13 = *(long *)(lVar13 + 0xa8);
            if (iVar2 == *(int *)(lVar13 + 0x5790)) {
              memcpy(&local_310,
                     (void *)(lVar13 + (uVar45 & 0xffffffff) * 0x3c0 + (uVar45 >> 0x20) * 0xc0 +
                             0x13f0),0xc0);
              uVar48 = FUN__text__003c7a60(lVar46,&local_308);
              *(undefined4 *)(param_3 + 0x586c) = uVar48;
              *(undefined4 *)(param_3 + 0x5870) = uVar49;
            }
            else {
LAB__text__001cccc0:
              FUN__text__001be354(&local_310,lVar13 + 0x1b0);
              uVar48 = FUN__text__003c7a60(lVar46,&local_308);
              *(undefined4 *)(param_3 + 0x586c) = uVar48;
              *(undefined4 *)(param_3 + 0x5870) = uVar49;
              FUN__text__001be464(&local_310);
            }
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x68);
            if (*(char *)(lVar13 + 0x5a58) == '\0') goto LAB__text__001cccc0;
          }
        }
        uVar49 = *(undefined4 *)(param_3 + 0x5870);
        uVar48 = FUN__text__0019693c(*(undefined4 *)(param_3 + 0x586c),&local_230);
        *(undefined4 *)(param_3 + 0x5874) = uVar48;
        *(undefined4 *)(param_3 + 0x5878) = uVar49;
      }
    }
    iVar9 = *(int *)(param_3 + 0x5868);
  }
  *(int *)(param_3 + 0x5868) = iVar9 + 1;
LAB__text__001ccd04:
  if (lVar46 != 0) {
    (**(code **)(*(long *)(lVar46 + 0x48) + 0x18))((long *)(lVar46 + 0x48));
  }
  return;
}


