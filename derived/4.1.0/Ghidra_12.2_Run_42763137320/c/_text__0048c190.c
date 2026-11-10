/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048c190; name: FUN_.text__0048c190
 */


void FUN__text__0048c190(uint *param_1,long param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float afStack_90 [2];
  long local_88;
  
  uVar2 = *param_1;
  uVar5 = (ulong)uVar2 * 8 + 0xf & 0xffffffff0;
  lVar10 = -uVar5;
  lVar9 = (long)afStack_90 + lVar10;
  lVar6 = lVar9 - uVar5;
  if (param_3 == 0) {
    lVar10 = *(long *)(param_1 + 10);
  }
  else {
    lVar7 = 0;
    pfVar8 = (float *)(lVar6 + 4);
    pfVar4 = (float *)((long)afStack_90 + lVar10 + 4);
    local_88 = lVar9;
    do {
      fVar13 = *(float *)(param_2 + lVar7 + 4);
      if (fVar13 <= 3.1415927) {
        if (fVar13 < -3.1415927) {
          fVar14 = 6.2831855;
          goto LAB__text__0048c278;
        }
      }
      else {
        fVar14 = -6.2831855;
LAB__text__0048c278:
        fVar13 = fVar14 + fVar13;
      }
      fVar14 = *(float *)(param_2 + lVar7 + 8);
      if (fVar14 <= 1.5707964) {
        if (fVar14 < -1.5707964) {
          fVar11 = 3.1415927;
          goto LAB__text__0048c2b8;
        }
      }
      else {
        fVar11 = -3.1415927;
LAB__text__0048c2b8:
        fVar14 = fVar11 + fVar14;
      }
      pfVar1 = (float *)(*(long *)(param_1 + 10) + lVar7);
      fVar11 = cosf(fVar14);
      fVar12 = cosf(fVar13);
      *pfVar1 = fVar11 * fVar12;
      fVar12 = sinf(fVar13);
      pfVar1[1] = fVar11 * fVar12;
      fVar11 = sinf(fVar14);
      pfVar1[2] = fVar11;
      lVar10 = *(long *)(param_1 + 10);
      pfVar4[-1] = fVar13;
      pfVar1 = (float *)(lVar10 + lVar7);
      *pfVar4 = fVar14;
      fVar13 = pfVar1[2];
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar14 = atan2f(fVar13,-fVar11);
      pfVar8[-1] = fVar14;
      fVar13 = asinf(-fVar12 / SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12));
      *pfVar8 = fVar13;
      if (fVar14 <= 3.1415927) {
        if (fVar14 < -3.1415927) {
          fVar11 = 6.2831855;
          goto LAB__text__0048c374;
        }
      }
      else {
        fVar11 = -6.2831855;
LAB__text__0048c374:
        pfVar8[-1] = fVar11 + fVar14;
      }
      if (1.5707964 < fVar13) {
        fVar14 = -3.1415927;
LAB__text__0048c228:
        *pfVar8 = fVar14 + fVar13;
      }
      else if (fVar13 < -1.5707964) {
        fVar14 = 3.1415927;
        goto LAB__text__0048c228;
      }
      lVar7 = lVar7 + 0xc;
      pfVar8 = pfVar8 + 2;
      pfVar4 = pfVar4 + 2;
    } while ((ulong)param_3 * 0xc != lVar7);
    uVar2 = *param_1;
    lVar9 = local_88;
  }
  puVar3 = (undefined8 *)(lVar10 + (ulong)(uVar2 - 1) * 0xc);
  *puVar3 = 0x80000000b33bbd2e;
  *(undefined4 *)(puVar3 + 1) = 0xbf800000;
  uVar2 = *param_1;
  lVar10 = (ulong)(uVar2 - 1) * 8;
  pfVar8 = (float *)(lVar6 + lVar10);
  *(undefined8 *)(lVar9 + lVar10) = 0xbfc90fdb00000000;
  pfVar4 = (float *)(*(long *)(param_1 + 10) + (ulong)(uVar2 - 1) * 0xc);
  fVar11 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar13 = pfVar4[2];
  fVar14 = atan2f(fVar13,-fVar11);
  *pfVar8 = fVar14;
  fVar13 = asinf(-fVar12 / SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12));
  pfVar8[1] = fVar13;
  if (fVar14 <= 3.1415927) {
    if (fVar14 < -3.1415927) {
      fVar11 = 6.2831855;
      goto LAB__text__0048c47c;
    }
  }
  else {
    fVar11 = -6.2831855;
LAB__text__0048c47c:
    *pfVar8 = fVar11 + fVar14;
  }
  if (fVar13 <= 1.5707964) {
    if (-1.5707964 <= fVar13) goto LAB__text__0048c4d0;
    fVar14 = 3.1415927;
  }
  else {
    fVar14 = -3.1415927;
  }
  pfVar8[1] = fVar14 + fVar13;
LAB__text__0048c4d0:
  FUN__text__0048b770(param_1,lVar9,param_1 + 2,param_1 + 6);
  FUN__text__0048b770(param_1,lVar6,param_1 + 2,param_1 + 6);
  return;
}


