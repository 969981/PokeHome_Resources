/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c8730; name: FUN_.text__006c8730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c8730(float param_1,undefined1 param_2 [16],float param_3,float param_4,
                        float param_5,float param_6,float *param_7,long *param_8)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  float extraout_s0;
  float fVar4;
  float fVar5;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar13 = param_2._12_4_;
  fVar6 = param_2._8_4_;
  fVar5 = param_2._4_4_;
  fVar7 = param_2._0_4_;
  FUN__text__006c8c10(param_8);
  fVar16 = param_5 * 0.5;
  fVar19 = -(param_5 * 0.5);
  fVar8 = param_6 * 0.5;
  fVar14 = -(param_6 * 0.5);
  if ((*_DAT_0089fa48 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(_DAT_0089fa48);
    puVar3 = _DAT_0089f8a0;
    if (iVar2 != 0) {
      if (((*_DAT_0089f898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(_DAT_0089f898), iVar2 != 0)) {
        *puVar3 = 0;
        __cxa_guard_release(_DAT_0089f898);
      }
      *_DAT_0089fa50 = puVar3;
      __cxa_guard_release(_DAT_0089fa48);
    }
  }
  fVar21 = param_2._0_4_ * 0.5;
  param_1 = param_1 * 0.5;
  fVar15 = fVar8;
  fVar4 = fVar14;
  if (param_8 != (long *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*param_8 + 0x10))(param_8);
    if (puVar3 != _DAT_0089fa50) {
      do {
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != _DAT_0089fa50 && puVar3 != (undefined8 *)0x0);
      if (puVar3 == (undefined8 *)0x0) goto LAB__text__006c8994;
    }
    bVar1 = *(byte *)((long)param_8 + 0x116) & 3;
    if (bVar1 == 2) {
      fVar19 = (param_1 - fVar16) - fVar16;
      fVar16 = (param_1 - fVar16) + fVar16;
    }
    else if (bVar1 == 1) {
      fVar19 = fVar19 - (param_1 - fVar16);
      fVar16 = fVar16 - (param_1 - fVar16);
    }
    bVar1 = *(byte *)((long)param_8 + 0x116) >> 2 & 3;
    if ((*(ushort *)((long)param_8 + 0x114) & 0x1000) != 0) {
      bVar1 = 0;
    }
    if (bVar1 == 2) {
      fVar9 = fVar21 - fVar8;
      fVar15 = fVar8 - fVar9;
      fVar17 = fVar14 - fVar9;
      fVar4 = fVar14 - fVar9;
      fVar8 = fVar8 - fVar9;
    }
    else {
      if (bVar1 != 1) goto LAB__text__006c8994;
      fVar9 = fVar21 - fVar8;
      fVar15 = fVar9 + fVar8;
      fVar17 = fVar9 + fVar14;
      fVar4 = fVar9 + fVar14;
      fVar8 = fVar9 + fVar8;
    }
    fVar14 = fVar17;
  }
LAB__text__006c8994:
  fVar9 = (float)((ulong)_DAT_00724a00 >> 0x20);
  fVar18 = (float)((ulong)uRam0000000000724a08 >> 0x20);
  fVar10 = fVar7 * 1.0 + fVar5 * 0.0 + (float)_DAT_00724a00 * fVar6 + 0.0;
  fVar11 = fVar7 * 0.0 + fVar5 * 1.0 + fVar9 * fVar6 + 0.0;
  fVar12 = fVar7 * 0.0 + fVar5 * 0.0 + (float)uRam0000000000724a08 * fVar6 + 0.0;
  fVar13 = fVar13 + (param_1 + param_3) * fVar7 + (param_4 - fVar21) * fVar5 + fVar18 * fVar6;
  fVar5 = extraout_s0 * 1.0 + extraout_var * 0.0 + (float)_DAT_00724a00 * extraout_var_00 + 0.0;
  fVar9 = extraout_s0 * 0.0 + extraout_var * 1.0 + fVar9 * extraout_var_00 + 0.0;
  fVar17 = extraout_s0 * 0.0 + extraout_var * 0.0 + (float)uRam0000000000724a08 * extraout_var_00 +
           0.0;
  fVar6 = extraout_var_01 +
          (param_1 + param_3) * extraout_s0 + (param_4 - fVar21) * extraout_var +
          fVar18 * extraout_var_00;
  fVar21 = fVar6 + fVar5 * fVar19 + fVar9 * fVar8 + fVar17 * 0.0;
  fVar8 = fVar13 + fVar10 * fVar19 + fVar11 * fVar8 + fVar12 * 0.0;
  fVar18 = fVar6 + fVar5 * fVar16 + fVar9 * fVar15 + fVar17 * 0.0;
  fVar15 = fVar13 + fVar10 * fVar16 + fVar11 * fVar15 + fVar12 * 0.0;
  fVar20 = fVar6 + fVar5 * fVar16 + fVar9 * fVar14 + fVar17 * 0.0;
  fVar14 = fVar13 + fVar10 * fVar16 + fVar11 * fVar14 + fVar12 * 0.0;
  fVar7 = -3.4028235e+38;
  if (-3.4028235e+38 <= fVar21) {
    fVar7 = fVar21;
  }
  fVar6 = fVar6 + fVar5 * fVar19 + fVar9 * fVar4 + fVar17 * 0.0;
  fVar13 = fVar13 + fVar10 * fVar19 + fVar11 * fVar4 + fVar12 * 0.0;
  fVar16 = -3.4028235e+38;
  if (-3.4028235e+38 <= fVar8) {
    fVar16 = fVar8;
  }
  fVar5 = 3.4028235e+38;
  if (fVar21 <= 3.4028235e+38) {
    fVar5 = fVar21;
  }
  fVar19 = 3.4028235e+38;
  if (fVar8 <= 3.4028235e+38) {
    fVar19 = fVar8;
  }
  if (fVar7 <= fVar18) {
    fVar7 = fVar18;
  }
  if (fVar16 <= fVar15) {
    fVar16 = fVar15;
  }
  if (fVar18 <= fVar5) {
    fVar5 = fVar18;
  }
  if (fVar15 <= fVar19) {
    fVar19 = fVar15;
  }
  if (fVar7 <= fVar20) {
    fVar7 = fVar20;
  }
  if (fVar16 <= fVar14) {
    fVar16 = fVar14;
  }
  if (fVar20 <= fVar5) {
    fVar5 = fVar20;
  }
  if (fVar14 <= fVar19) {
    fVar19 = fVar14;
  }
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
  if (fVar16 <= fVar13) {
    fVar16 = fVar13;
  }
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  if (fVar13 <= fVar19) {
    fVar19 = fVar13;
  }
  *param_7 = fVar5;
  param_7[1] = fVar16;
  param_7[2] = fVar7;
  param_7[3] = fVar19;
  return;
}


