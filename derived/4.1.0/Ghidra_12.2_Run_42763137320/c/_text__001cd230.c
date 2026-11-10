/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cd230; name: FUN_.text__001cd230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001cd230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
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
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  undefined1 auStack_1f8 [24];
  long local_1e0;
  undefined1 local_1d4 [4];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [152];
  undefined1 auStack_128 [48];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x5884) == '\0') {
    return;
  }
  lVar38 = *(long *)(param_1 + 0x18);
  if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar10 = *(long *)(param_1 + 0x38);
  lVar41 = *(long *)(param_1 + 8);
  lVar40 = *(long *)(lVar10 + 0xe8);
  iVar8 = *(int *)(lVar10 + 0x1b0);
  iVar5 = *(int *)(lVar10 + 0x1b4);
  local_f8 = *(undefined8 *)(lVar40 + 0x34);
  uStack_f0 = *(undefined8 *)(lVar40 + 0x3c);
  local_e8 = *(undefined4 *)(lVar40 + 0x44);
  memcpy(auStack_1c0,
         (void *)(*(long *)(lVar10 + 0x68 +
                           (ulong)(iVar8 != *(int *)(lVar40 + 0x24) &&
                                  iVar5 == *(int *)(lVar40 + 0x24)) * 0x20) +
                  (ulong)*(uint *)(lVar40 + 0x2c) * 1000 + (ulong)*(uint *)(lVar40 + 0x30) * 200 +
                 0x42d0),200);
  uVar39 = *(undefined8 *)
            (lVar10 + 0x68 + (ulong)(iVar8 != local_f8._4_4_ && iVar5 == local_f8._4_4_) * 0x20);
  local_1d4[0] = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  FUN__text__001912c0(&local_f8,local_1d4);
  iVar8 = *(int *)(param_1 + 0x5888);
  if (iVar8 == 2) {
    if ((*(char *)(*(long *)(lVar38 + 8) + 0x2a4) == '\0') &&
       (uVar9 = FUN__text__001aa060(lVar40), (uVar9 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x5821) = 1;
    }
    FUN__text__001a02a8(*(undefined8 *)(param_1 + 0x38));
    FUN__text__001be5d4(uVar39);
    FUN__text__001aa418(lVar40);
    uVar1 = *(undefined8 *)(lVar40 + 0x68);
    uVar3 = *(undefined8 *)(lVar40 + 0x70);
    *(undefined8 *)(lVar40 + 0x6c) = 0;
    uVar6 = *(uint *)(lVar40 + 0x78);
    *(undefined8 *)(lVar40 + 0x72) = 0;
    local_b0 = CONCAT44(local_b0._4_4_,uVar6);
    local_c0._3_1_ = (byte)((ulong)uVar1 >> 0x18);
    uVar2 = *(undefined8 *)(lVar40 + 0x58);
    uVar4 = *(undefined8 *)(lVar40 + 0x60);
    *(undefined8 *)(lVar40 + 0x5c) = 0;
    local_e0 = *(undefined8 *)(lVar40 + 0x48);
    local_d8 = *(code **)(lVar40 + 0x50);
    *(undefined8 *)(lVar40 + 100) = 0;
    local_c8._1_1_ = (byte)((ulong)uVar4 >> 8);
    uVar11 = (uint)local_c8._1_1_;
    local_c8._6_1_ = (byte)((ulong)uVar4 >> 0x30);
    uVar18 = (uint)local_c0._3_1_;
    uVar12 = (uint)local_c8._6_1_;
    local_b8._5_1_ = (byte)((ulong)uVar3 >> 0x28);
    local_b8._0_1_ = (byte)uVar3;
    uVar19 = (uint)local_b8._5_1_;
    uVar13 = (uint)(byte)local_b8;
    local_d0._5_1_ = (byte)((ulong)uVar2 >> 0x28);
    uVar20 = (uint)local_d0._5_1_;
    local_c8._7_1_ = (byte)((ulong)uVar4 >> 0x38);
    local_c8._2_1_ = (byte)((ulong)uVar4 >> 0x10);
    uVar21 = (uint)local_c8._7_1_;
    uVar14 = (uint)local_c8._2_1_;
    local_c0._4_1_ = (byte)((ulong)uVar1 >> 0x20);
    uVar22 = (uint)local_c0._4_1_;
    local_b8._1_1_ = (byte)((ulong)uVar3 >> 8);
    uVar23 = (uint)local_b8._1_1_;
    local_d0._6_1_ = (byte)((ulong)uVar2 >> 0x30);
    local_b8._6_1_ = (byte)((ulong)uVar3 >> 0x30);
    uVar24 = (uint)local_d0._6_1_;
    uVar15 = (uint)local_b8._6_1_;
    local_c8._3_1_ = (byte)((ulong)uVar4 >> 0x18);
    uVar25 = (uint)local_c8._3_1_;
    local_c0._0_1_ = (byte)uVar1;
    uVar26 = (uint)(byte)local_c0;
    local_c0._5_1_ = (byte)((ulong)uVar1 >> 0x28);
    uVar27 = (uint)local_c0._5_1_;
    local_b8._7_1_ = (byte)((ulong)uVar3 >> 0x38);
    local_b8._2_1_ = (byte)((ulong)uVar3 >> 0x10);
    uVar28 = (uint)local_b8._7_1_;
    uVar16 = (uint)local_b8._2_1_;
    local_d0._7_1_ = (byte)((ulong)uVar2 >> 0x38);
    uVar29 = (uint)local_d0._7_1_;
    local_c8._4_1_ = (byte)((ulong)uVar4 >> 0x20);
    uVar30 = (uint)local_c8._4_1_;
    local_c0._1_1_ = (byte)((ulong)uVar1 >> 8);
    uVar31 = (uint)local_c0._1_1_;
    local_c0._6_1_ = (byte)((ulong)uVar1 >> 0x30);
    uVar32 = (uint)local_c0._6_1_;
    local_b8._3_1_ = (byte)((ulong)uVar3 >> 0x18);
    uVar17 = (uint)local_b8._3_1_;
    local_c8._0_1_ = (byte)uVar4;
    uVar33 = (uint)(byte)local_c8;
    local_c8._5_1_ = (byte)((ulong)uVar4 >> 0x28);
    uVar34 = (uint)local_c8._5_1_;
    local_c0._2_1_ = (byte)((ulong)uVar1 >> 0x10);
    uVar35 = (uint)local_c0._2_1_;
    local_c0._7_1_ = (byte)((ulong)uVar1 >> 0x38);
    uVar36 = (uint)local_c0._7_1_;
    local_b8._4_1_ = (byte)((ulong)uVar3 >> 0x20);
    uVar37 = (uint)local_b8._4_1_;
    local_d0 = uVar2;
    local_c8 = uVar4;
    local_c0 = uVar1;
    local_b8 = uVar3;
    if (uVar11 + ((uint)((ulong)uVar2 >> 0x20) & 0xff) + uVar12 + uVar18 + uVar13 + uVar19 + uVar20
        + uVar14 + uVar21 + uVar22 + uVar23 + uVar15 + uVar24 + uVar25 + uVar26 + uVar27 +
        uVar16 + uVar28 + uVar29 + uVar30 + uVar31 + uVar32 +
        uVar17 + (uVar6 & 0xff) + uVar33 + uVar34 + uVar35 + uVar36 + uVar37 + (uVar6 >> 8 & 0xff)
        != 0) {
      FUN__text__001a8bec(&local_e0,lVar38);
    }
    FUN__text__001be9b0(uVar39);
    FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68),0,0,0);
    FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88),0,0,0);
    lVar10 = *(long *)(param_1 + 0x38);
    lVar38 = *(long *)(lVar10 + 0xa8);
    if (*(long *)(lVar38 + 0x5788) != 0) {
      FUN__text__001d0690(lVar38,*(undefined4 *)(lVar38 + 0x5790),0);
      lVar10 = *(long *)(param_1 + 0x38);
    }
    lVar38 = *(long *)(lVar10 + 200);
    if (*(long *)(lVar38 + 0x5788) != 0) {
      FUN__text__001d0690(lVar38,*(undefined4 *)(lVar38 + 0x5790),0);
    }
    FUN__text__001ad490(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x30),1,local_1d4
                       );
    FUN__text__001a191c(*(undefined8 *)(param_1 + 0x38),1,local_1d4);
    FUN__text__001ad4a8(*(undefined8 *)(param_1 + 0x4d0));
    FUN__text__001a193c(*(undefined8 *)(param_1 + 0x38));
    *(undefined1 *)(param_1 + 0x5884) = 0;
    iVar8 = *(int *)(param_1 + 0x5888) + 1;
  }
  else {
    if (iVar8 == 1) {
      lVar38 = *(long *)(lVar41 + 0x2d0);
      if (lVar38 == 0) {
        iVar8 = 2;
        goto LAB__text__001cd624;
      }
      uVar9 = FUN__text__003c7ec0(lVar38,auStack_128);
      if ((uVar9 & 1) == 0) {
        return;
      }
    }
    else {
      if (iVar8 != 0) {
        return;
      }
      FUN__text__0012c378(lVar41 + 0x110,auStack_128);
      lVar38 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_1f8,_DAT_008a0610);
      uVar39 = FUN__text__003eec14(lVar38);
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      iVar8 = FUN__text__003ef560(lVar38,auStack_1f8,uVar39,0);
      if ((iVar8 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar38 + 0x210),auStack_1f8,iVar8,uVar39,0,&local_e0,0
                             ), pcVar7 = local_d8, local_d8 != (code *)0x0)) {
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar7)(&local_c0);
      }
      if (local_1e0 != 0) {
        (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
      }
    }
    iVar8 = *(int *)(param_1 + 0x5888) + 1;
  }
LAB__text__001cd624:
  *(int *)(param_1 + 0x5888) = iVar8;
  return;
}


