/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005759c0; name: FUN_.text__005759c0
 */


void FUN__text__005759c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar4 = *(long *)(param_1 + 0x158);
  fVar12 = *(float *)(lVar4 + 0xb8);
  local_50 = *(float *)(lVar4 + 0xb4);
  fVar10 = *(float *)(lVar4 + 0xb0) * 0.01;
  fVar11 = fVar10 * local_50;
  local_50 = local_50 + fVar12 * local_50 * 0.00364111;
  local_4c = fVar11 + fVar12 * 0.008184801 * fVar11;
  fVar11 = fVar10 * fVar11;
  local_48 = fVar11 + fVar11 * fVar12 * 0.00021083384;
  local_44 = fVar10 * fVar11 + fVar10 * fVar11 * fVar12 * 0.002843412;
  qsort(&local_50,4,4,FUN__text__0057bf00);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
  fVar10 = fVar10 * 0.001;
  uVar8 = (int)(fVar10 * local_50) | 1;
  uVar2 = (ulong)uVar8;
  if (2 < (int)SQRT((double)uVar2)) {
    uVar5 = 3;
    do {
      while( true ) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar8 / uVar5;
        }
        if (uVar8 != uVar6 * uVar5) break;
        uVar8 = uVar8 + 2;
        uVar5 = 3;
      }
      uVar5 = uVar5 + 2;
    } while ((int)uVar5 <= (int)SQRT((double)uVar2));
  }
  uVar5 = (int)(fVar10 * local_4c) | 1;
  uVar2 = (ulong)uVar5;
  if ((int)SQRT((double)uVar2) < 3) {
    uVar6 = uVar8 + 2;
    if (uVar5 != uVar8) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6;
  }
  else {
    while( true ) {
      uVar6 = 3;
      do {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar5 / uVar6;
        }
        if (uVar5 == uVar7 * uVar6) goto LAB__text__00575b20;
        uVar6 = uVar6 + 2;
      } while ((int)uVar6 <= (int)SQRT((double)uVar2));
      if (uVar5 != uVar8) break;
LAB__text__00575b20:
      uVar5 = uVar5 + 2;
    }
  }
  uVar8 = (int)(fVar10 * local_48) | 1;
  uVar2 = (ulong)uVar8;
  if ((int)SQRT((double)uVar2) < 3) {
    uVar6 = uVar5 + 2;
    if (uVar8 != uVar5) {
      uVar6 = uVar8;
    }
    uVar8 = uVar6;
  }
  else {
    while( true ) {
      uVar6 = 3;
      do {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar8 / uVar6;
        }
        if (uVar8 == uVar7 * uVar6) goto LAB__text__00575b84;
        uVar6 = uVar6 + 2;
      } while ((int)uVar6 <= (int)SQRT((double)uVar2));
      if (uVar8 != uVar5) break;
LAB__text__00575b84:
      uVar8 = uVar8 + 2;
    }
  }
  uVar6 = (int)(fVar10 * local_44) | 1;
  uVar2 = (ulong)uVar6;
  if ((int)SQRT((double)uVar2) < 3) {
    uVar7 = uVar8 + 2;
    if (uVar6 != uVar8) {
      uVar7 = uVar6;
    }
    uVar6 = uVar7;
  }
  else {
    while( true ) {
      uVar7 = 3;
      do {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        if (uVar6 == uVar1 * uVar7) goto LAB__text__00575be4;
        uVar7 = uVar7 + 2;
      } while ((int)uVar7 <= (int)SQRT((double)uVar2));
      if (uVar6 != uVar8) break;
LAB__text__00575be4:
      uVar6 = uVar6 + 2;
    }
  }
  fVar10 = *(float *)(*(long *)(param_1 + 0x158) + 0x10) * 0.0247212 + -1.85409;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  uVar9 = NEON_fminnm(fVar10,0x3f1e3737);
  iVar3 = FUN__text__0057e310(uVar9,param_1 + 8,param_2);
  if (iVar3 == 1) {
    fVar10 = *(float *)(*(long *)(param_1 + 0x158) + 0x10) * 0.0247212 + -1.23606;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar9 = NEON_fminnm(fVar10,0x3f1e3737);
    iVar3 = FUN__text__0057e310(uVar9,param_1 + 0x20,param_2,uVar5);
    if (iVar3 == 1) {
      fVar10 = *(float *)(*(long *)(param_1 + 0x158) + 0x10) * 0.0247212 + -0.61803;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      uVar9 = NEON_fminnm(fVar10,0x3f1e3737);
      iVar3 = FUN__text__0057e310(uVar9,param_1 + 0x38,param_2,uVar8);
      if (iVar3 == 1) {
        fVar10 = *(float *)(*(long *)(param_1 + 0x158) + 0x10) * 0.0247212;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        uVar9 = NEON_fminnm(fVar10,0x3f1e3737);
        FUN__text__0057e310(uVar9,param_1 + 0x50,param_2,uVar6);
      }
    }
  }
  return;
}


