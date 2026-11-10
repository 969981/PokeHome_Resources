/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c8d80; name: FUN_.text__006c8d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c8d80(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                        long *param_4,float *param_5,float *param_6,undefined8 *param_7)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  float extraout_s0;
  float extraout_var;
  undefined8 extraout_var_00;
  float fVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar19 = param_3._8_8_;
  uVar16 = param_3._0_8_;
  uVar12 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  if ((*(byte *)(param_4 + 0xb) & 1) == 0) {
    return;
  }
  uVar4 = FUN__text__006b4efc();
  puVar2 = _DAT_0089fa50;
  if ((uVar4 & 1) != 0) goto LAB__text__006c90a8;
  if (((*_DAT_0089fa48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089fa48), iVar3 != 0)) {
    if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0)) {
      *_DAT_0089f8a0 = 0;
      __cxa_guard_release(_DAT_0089f898);
    }
    *puVar2 = _DAT_0089f8a0;
    __cxa_guard_release(_DAT_0089fa48);
  }
  puVar5 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
  puVar6 = _DAT_0089fa78;
  if (puVar5 == puVar2) {
LAB__text__006c8e08:
    fVar14 = 0.0;
    fVar8 = *(float *)(param_4 + 10);
    local_60 = 0;
    local_58 = 0;
    bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        fVar14 = -fVar8;
      }
      else {
        fVar14 = fVar8 * -0.5;
      }
    }
    fVar9 = *(float *)((long)param_4 + 0x54);
    bVar1 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
    fVar21 = 0.0;
    if ((bVar1 != 1) && (fVar21 = fVar9, bVar1 != 2)) {
      fVar21 = fVar9 * 0.5;
    }
    FUN__text__006c92a0(fVar8,fVar9,fVar14,fVar21,&local_60,param_4,param_7);
    local_90 = 0;
    uStack_88 = 0;
    (**(code **)(*param_4 + 0x168))(&local_90,param_4);
    fVar14 = (float)uStack_88;
    fVar8 = (float)local_90;
    local_90 = 0;
    uStack_88 = 0;
    fVar14 = fVar14 - fVar8;
    (**(code **)(*param_4 + 0x168))(&local_90,param_4);
    fVar8 = 0.0;
    bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        fVar8 = -fVar14;
      }
      else {
        fVar8 = fVar14 * -0.5;
      }
    }
    fVar9 = local_90._4_4_ - uStack_88._4_4_;
    bVar1 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
    fVar21 = 0.0;
    if ((bVar1 != 1) && (fVar21 = fVar9, bVar1 != 2)) {
      fVar21 = fVar9 * 0.5;
    }
    local_90 = 0;
    uStack_88 = 0;
    FUN__text__006c92a0(fVar14,fVar9,fVar8,fVar21,&local_90,param_4,param_7);
    bVar1 = *(byte *)((long)param_4 + 0x116) & 3;
    if (bVar1 == 1) {
      fVar8 = ((float)uStack_88 - (float)local_90) + (float)local_60;
      fVar14 = (float)local_60;
    }
    else {
      fVar8 = (float)uStack_88;
      fVar14 = (float)local_90;
      if (bVar1 == 2) {
        fVar8 = (float)local_58;
        fVar14 = (float)local_58 - ((float)uStack_88 - (float)local_90);
      }
    }
  }
  else {
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != puVar2 && puVar5 != (undefined8 *)0x0);
    if ((param_4 != (long *)0x0) && (puVar5 != (undefined8 *)0x0)) goto LAB__text__006c8e08;
    if (((*_DAT_0089fa70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089fa70), iVar3 != 0)) {
      if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0)) {
        *_DAT_0089f8a0 = 0;
        __cxa_guard_release(_DAT_0089f898);
      }
      *puVar6 = _DAT_0089f8a0;
      __cxa_guard_release(_DAT_0089fa70);
    }
    puVar5 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    puVar2 = _DAT_0089fb50;
    plVar7 = param_4;
    if (puVar5 != puVar6) {
      do {
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != puVar6 && puVar5 != (undefined8 *)0x0);
      if (puVar5 == (undefined8 *)0x0) {
        plVar7 = (long *)0x0;
      }
    }
    if ((*_DAT_0089fb48 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(_DAT_0089fb48);
      puVar6 = _DAT_0089f8a0;
      if (iVar3 != 0) {
        if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0))
        {
          *puVar6 = 0;
          __cxa_guard_release(_DAT_0089f898);
        }
        *puVar2 = puVar6;
        __cxa_guard_release(_DAT_0089fb48);
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    if (puVar6 == puVar2) {
LAB__text__006c8ed8:
      fVar14 = 0.0;
      fVar8 = *(float *)(param_4 + 10);
      local_90 = 0;
      uStack_88 = 0;
      bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
      if (bVar1 != 1) {
        if (bVar1 == 2) {
          fVar14 = -fVar8;
        }
        else {
          fVar14 = fVar8 * -0.5;
        }
      }
      fVar9 = *(float *)((long)param_4 + 0x54);
      bVar1 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
      fVar21 = 0.0;
      if ((bVar1 != 1) && (fVar21 = fVar9, bVar1 != 2)) {
        fVar21 = fVar9 * 0.5;
      }
      FUN__text__006c92a0(fVar8,fVar9,fVar14,fVar21,&local_90,param_4,param_7);
      fVar8 = (float)uStack_88;
      fVar14 = (float)local_90;
    }
    else {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != puVar2 && puVar6 != (undefined8 *)0x0);
      if (plVar7 != (long *)0x0 || puVar6 != (undefined8 *)0x0) goto LAB__text__006c8ed8;
      fVar8 = -3.4028235e+38;
      fVar14 = 3.4028235e+38;
    }
  }
  fVar21 = *param_5;
  uVar16 = (ulong)(uint)fVar21;
  uVar19 = 0;
  if (fVar21 <= fVar14) {
    fVar14 = fVar21;
  }
  *param_5 = fVar14;
  fVar14 = *param_6;
  uVar10 = (ulong)(uint)fVar14;
  uVar12 = 0;
  if (fVar8 <= fVar14) {
    fVar8 = fVar14;
  }
  *param_6 = fVar8;
LAB__text__006c90a8:
  FUN__text__006c8c10(param_4);
  fVar25 = (float)param_7[2];
  fVar8 = (float)extraout_var_00;
  fVar14 = (float)((ulong)extraout_var_00 >> 0x20);
  fVar26 = (float)((ulong)param_7[2] >> 0x20);
  fVar21 = (float)uVar10;
  fVar9 = (float)(uVar10 >> 0x20);
  fVar11 = (float)uVar12;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  fVar22 = (float)*param_7;
  fVar23 = (float)((ulong)*param_7 >> 0x20);
  fVar28 = (float)param_7[4];
  fVar29 = (float)((ulong)param_7[4] >> 0x20);
  fVar27 = (float)param_7[3];
  fVar15 = (float)uVar16;
  fVar17 = (float)(uVar16 >> 0x20);
  fVar18 = (float)uVar19;
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  fVar24 = (float)param_7[1];
  fVar30 = (float)param_7[5];
  local_90 = CONCAT44(extraout_var * fVar22 + fVar9 * fVar23 + fVar17 * fVar24 + 0.0,
                      extraout_s0 * fVar22 + fVar21 * fVar23 + fVar15 * fVar24 + 0.0);
  uStack_88 = CONCAT44((float)((ulong)param_7[1] >> 0x20) +
                       fVar14 * fVar22 + fVar13 * fVar23 + fVar20 * fVar24,
                       fVar8 * fVar22 + fVar11 * fVar23 + fVar18 * fVar24 + 0.0);
  uStack_80 = CONCAT44(extraout_var * fVar25 + fVar9 * fVar26 + fVar17 * fVar27 + 0.0,
                       extraout_s0 * fVar25 + fVar21 * fVar26 + fVar15 * fVar27 + 0.0);
  uStack_78 = CONCAT44((float)((ulong)param_7[3] >> 0x20) +
                       fVar14 * fVar25 + fVar13 * fVar26 + fVar20 * fVar27,
                       fVar8 * fVar25 + fVar11 * fVar26 + fVar18 * fVar27 + 0.0);
  uStack_68 = CONCAT44((float)((ulong)param_7[5] >> 0x20) +
                       fVar14 * fVar28 + fVar13 * fVar29 + fVar20 * fVar30,
                       fVar8 * fVar28 + fVar11 * fVar29 + fVar18 * fVar30 + 0.0);
  local_70 = CONCAT44(extraout_var * fVar28 + fVar9 * fVar29 + fVar17 * fVar30 + 0.0,
                      extraout_s0 * fVar28 + fVar21 * fVar29 + fVar15 * fVar30 + 0.0);
  for (plVar7 = (long *)param_4[5]; plVar7 != param_4 + 4; plVar7 = (long *)plVar7[1]) {
    FUN__text__006c8d80(plVar7 + -1,param_5,param_6,&local_90);
  }
  return;
}


