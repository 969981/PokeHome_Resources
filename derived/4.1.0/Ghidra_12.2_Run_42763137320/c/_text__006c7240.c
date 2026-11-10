/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c7240; name: FUN_.text__006c7240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__006c7240(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   long *param_4,float *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar11;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  float extraout_var_09;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_80;
  float local_68;
  float fStack_64;
  
  uVar18 = param_3._4_4_;
  uVar16 = param_3._0_4_;
  uVar15 = param_2._4_4_;
  uVar12 = param_2._0_4_;
  uVar4 = FUN__text__006b4efc();
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  plVar8 = (long *)param_4[3];
  if (((*_DAT_0089f888 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f888), iVar3 != 0)) {
    if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0)) {
      *_DAT_0089f8a0 = 0;
      __cxa_guard_release(_DAT_0089f898);
    }
    *_DAT_0089f890 = _DAT_0089f8a0;
    __cxa_guard_release(_DAT_0089f888);
  }
  if (plVar8 == (long *)0x0) {
LAB__text__006c72c8:
    plVar8 = (long *)0x0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
    if (puVar5 != _DAT_0089f890) {
      do {
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != _DAT_0089f890 && puVar5 != (undefined8 *)0x0);
      if (puVar5 == (undefined8 *)0x0) goto LAB__text__006c72c8;
    }
  }
  *(long **)(param_5 + 4) = param_4;
  fVar10 = *(float *)(param_4 + 10);
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  *param_5 = fVar10;
  puVar5 = _DAT_008a52c0;
  bVar1 = *(byte *)(param_4 + 0xb);
  if (((*_DAT_008a52b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a52b8), iVar3 != 0)) {
    if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0)) {
      *_DAT_0089f8a0 = 0;
      __cxa_guard_release(_DAT_0089f898);
    }
    *puVar5 = _DAT_0089f8a0;
    __cxa_guard_release(_DAT_008a52b8);
  }
  puVar6 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
  if (puVar6 == puVar5) {
LAB__text__006c7324:
    bVar1 = *(byte *)(param_4 + 0xb);
    local_68 = -3.4028235e+38;
    fStack_64 = 3.4028235e+38;
    FUN__text__006c8c10(param_4);
    plVar9 = (long *)param_4[5];
    uStack_98 = CONCAT44(extraout_var_07,extraout_var_03);
    local_a0 = CONCAT44(extraout_var,extraout_s0);
    uStack_90 = CONCAT44(uVar15,uVar12);
    local_80 = CONCAT44(uVar18,uVar16);
    if (plVar9 != param_4 + 4) {
      do {
        FUN__text__006c8d80(plVar9 + -1,&fStack_64,&local_68,&local_a0);
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != param_4 + 4);
LAB__text__006c7374:
      if (fStack_64 <= local_68) {
        fVar10 = (local_68 - uStack_98._4_4_) - (fStack_64 - uStack_98._4_4_);
        *param_5 = fVar10;
        param_5[2] = ((local_68 - uStack_98._4_4_) + (fStack_64 - uStack_98._4_4_)) * 0.5;
        if (fVar10 == 0.0 || (bVar1 & 1) == 0) goto LAB__text__006c7550;
        goto LAB__text__006c77d4;
      }
    }
    uVar7 = 0;
    *param_5 = 0.0;
    fVar10 = 0.0;
  }
  else {
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != puVar5 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) goto LAB__text__006c7324;
    uVar4 = FUN__text__006b4fc4(param_4);
    puVar5 = _DAT_0089fa50;
    if ((uVar4 & 1) != 0) {
      plVar9 = (long *)param_4[5];
      if (plVar9 == param_4 + 4) goto LAB__text__006c7428;
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = -3.4028235e+38;
      fStack_64 = 3.4028235e+38;
      FUN__text__006c8c10(param_4);
      uStack_98 = CONCAT44(extraout_var_08,extraout_var_04);
      local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
      uStack_90 = CONCAT44(uVar15,uVar12);
      local_80 = CONCAT44(uVar18,uVar16);
      do {
        FUN__text__006c8d80(plVar9 + -1,&fStack_64,&local_68,&local_a0);
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != param_4 + 4);
      goto LAB__text__006c7374;
    }
LAB__text__006c7428:
    if (((*_DAT_0089fa48 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(_DAT_0089fa48), puVar6 = _DAT_0089f8a0, iVar3 != 0)) {
      if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0)) {
        *puVar6 = 0;
        __cxa_guard_release(_DAT_0089f898);
      }
      *puVar5 = puVar6;
      __cxa_guard_release(_DAT_0089fa48);
    }
    puVar6 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    if (puVar6 == puVar5) {
LAB__text__006c7474:
      local_a0 = 0;
      uStack_98 = 0;
      (**(code **)(*param_4 + 0x168))(&local_a0,param_4);
      fVar21 = (float)uStack_98;
      fVar10 = (float)local_a0;
      local_a0 = 0;
      uStack_98 = 0;
      (**(code **)(*param_4 + 0x168))(&local_a0,param_4);
      fVar17 = 0.0;
      fVar22 = local_a0._4_4_;
      bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
      fVar23 = uStack_98._4_4_;
      fVar11 = *(float *)(param_4 + 10);
      local_a0 = 0;
      uStack_98 = 0;
      if (bVar2 != 1) {
        if (bVar2 == 2) {
          fVar17 = -fVar11;
        }
        else {
          fVar17 = fVar11 * -0.5;
        }
      }
      fVar13 = *(float *)((long)param_4 + 0x54);
      bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
      fVar19 = 0.0;
      if ((bVar2 != 1) && (fVar19 = fVar13, bVar2 != 2)) {
        fVar19 = fVar13 * 0.5;
      }
      FUN__text__006c8730(fVar11,fVar13,fVar17,fVar19,fVar21 - fVar10,fVar22 - fVar23,&local_a0,
                          param_4);
      *param_5 = (float)uStack_98 - (float)local_a0;
      param_5[2] = ((float)uStack_98 - (float)local_a0) * 0.5 +
                   ((float)local_a0 - *(float *)(param_4 + 6));
joined_r0x006c754c:
      if ((bVar1 & 1) != 0) goto LAB__text__006c77d4;
LAB__text__006c7550:
      uVar7 = 0;
      fVar10 = 0.0;
      goto LAB__text__006c77f8;
    }
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != puVar5 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) goto LAB__text__006c7474;
    fVar22 = 0.0;
    fVar10 = *(float *)(param_4 + 10);
    bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
    if (bVar2 != 1) {
      if (bVar2 == 2) {
        fVar22 = -fVar10;
      }
      else {
        fVar22 = fVar10 * -0.5;
      }
    }
    fVar23 = *(float *)((long)param_4 + 0x54);
    bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
    fVar21 = 0.0;
    if ((bVar2 != 1) && (fVar21 = fVar23, bVar2 != 2)) {
      fVar21 = fVar23 * 0.5;
    }
    FUN__text__006c8c10(param_4);
    fVar23 = fVar23 * 0.5;
    fVar11 = extraout_s0_01 * 1.0 + extraout_var_01 * 0.0 + (float)_DAT_00724a00 * extraout_var_05 +
             0.0;
    fVar17 = extraout_s0_01 * 0.0 + extraout_var_01 * 1.0 +
             (float)((ulong)_DAT_00724a00 >> 0x20) * extraout_var_05 + 0.0;
    fVar19 = extraout_s0_01 * 0.0 + extraout_var_01 * 0.0 +
             (float)uRam0000000000724a08 * extraout_var_05 + 0.0;
    fVar22 = extraout_var_09 +
             (fVar10 * 0.5 + fVar22) * extraout_s0_01 + (fVar21 - fVar23) * extraout_var_01 +
             (float)((ulong)uRam0000000000724a08 >> 0x20) * extraout_var_05;
    fVar21 = fVar11 * -(fVar10 * 0.5);
    fVar11 = fVar11 * fVar10 * 0.5;
    fVar13 = fVar22 + fVar21 + fVar17 * fVar23 + fVar19 * 0.0;
    fVar10 = -3.4028235e+38;
    if (-3.4028235e+38 <= fVar13) {
      fVar10 = fVar13;
    }
    fVar14 = 3.4028235e+38;
    if (fVar13 <= 3.4028235e+38) {
      fVar14 = fVar13;
    }
    fVar13 = fVar22 + (fVar11 - fVar17 * fVar23) + fVar19 * 0.0;
    fVar20 = fVar22 + fVar11 + fVar17 * fVar23 + fVar19 * 0.0;
    fVar11 = 0.0;
    fVar22 = fVar22 + (fVar21 - fVar17 * fVar23) + fVar19 * 0.0;
    if (fVar10 <= fVar20) {
      fVar10 = fVar20;
    }
    if (fVar20 <= fVar14) {
      fVar14 = fVar20;
    }
    if (fVar10 <= fVar13) {
      fVar10 = fVar13;
    }
    if (fVar13 <= fVar14) {
      fVar14 = fVar13;
    }
    if (fVar10 <= fVar22) {
      fVar10 = fVar22;
    }
    if (fVar22 <= fVar14) {
      fVar14 = fVar22;
    }
    *param_5 = fVar10 - fVar14;
    bVar2 = *(byte *)((long)param_4 + 0x5b);
    if ((bVar2 & 3) == 0) {
      if ((bVar2 & 0xc) != 0) {
        fVar22 = *(float *)(param_4 + 10);
LAB__text__006c7740:
        fVar11 = fVar22 * -0.5;
        goto LAB__text__006c7748;
      }
      goto joined_r0x006c754c;
    }
    fVar22 = *(float *)(param_4 + 10);
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 3) != 2) goto LAB__text__006c7740;
      fVar11 = -fVar22;
    }
LAB__text__006c7748:
    fVar23 = *(float *)((long)param_4 + 0x54);
    fVar10 = 0.0;
    bVar2 = bVar2 >> 2 & 3;
    fVar21 = 0.0;
    if ((bVar2 != 1) && (fVar21 = fVar23, bVar2 != 2)) {
      fVar21 = fVar23 * 0.5;
    }
    FUN__text__006c8c10(param_4);
    param_5[2] = param_5[2] +
                 extraout_s0_02 * (fVar11 + fVar22 * 0.5) +
                 extraout_var_02 * (fVar21 - fVar23 * 0.5) + extraout_var_06 * 0.0 + 0.0;
    if ((bVar1 & 1) == 0) {
      uVar7 = 0;
      goto LAB__text__006c77f8;
    }
LAB__text__006c77d4:
    uVar4 = FUN__text__006b4f60(param_4);
    if ((uVar4 & 1) == 0) {
      fVar10 = *(float *)(plVar8 + 0x1b);
    }
    else {
      fVar10 = (float)FUN__text__006b5028(*(undefined8 *)(param_5 + 4));
    }
    uVar7 = 1;
  }
LAB__text__006c77f8:
  param_5[1] = fVar10;
  return uVar7;
}


