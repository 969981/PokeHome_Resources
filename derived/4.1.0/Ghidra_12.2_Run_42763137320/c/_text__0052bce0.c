/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052bce0; name: FUN_.text__0052bce0
 */


void FUN__text__0052bce0(long param_1,long param_2,long param_3)

{
  double *pdVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double local_38;
  double dStack_30;
  double local_28;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  lVar4 = *(long *)(param_1 + 0x178);
  if (iVar2 == 0) {
    lVar4 = -1;
  }
  if (*(long *)(param_2 + 0x58) != -1 && lVar4 != *(long *)(param_2 + 0x58)) {
    uVar6 = NEON_fminnm(*(undefined4 *)(param_1 + 0x110),*(float *)(param_2 + 0x98) * 100.0);
    *(undefined4 *)(param_1 + 0x110) = uVar6;
  }
  if (iVar2 == 0) {
    lVar4 = -1;
    lVar5 = *(long *)(param_3 + 0x58);
  }
  else {
    lVar4 = *(long *)(param_1 + (ulong)(iVar2 - 1) * 8 + 0x178);
    lVar5 = *(long *)(param_3 + 0x58);
  }
  if ((lVar5 != -1) && (lVar4 != lVar5)) {
    uVar3 = FUN__text__00506a00();
    lVar4 = FUN__text__0050c360(uVar3,*(undefined8 *)(param_3 + 0x58));
    if (lVar4 != 0) {
      pdVar1 = (double *)(param_1 + 8);
      if (*(int *)(param_1 + 0xf8) != 0) {
        pdVar1 = (double *)(param_1 + (ulong)(*(int *)(param_1 + 0xf8) - 1) * 0x18 + 0x20);
      }
      fVar7 = (float)(*pdVar1 - *(double *)(param_1 + 0xe0));
      fVar8 = (float)(pdVar1[1] - *(double *)(param_1 + 0xe8));
      fVar9 = (float)(pdVar1[2] - *(double *)(param_1 + 0xf0));
      fVar10 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
      if (0.0 < fVar10) {
        fVar10 = *(float *)(param_1 + 0x100) / fVar10;
        local_38 = *(double *)(param_1 + 0xe0) + (double)(fVar10 * fVar7);
        dStack_30 = *(double *)(param_1 + 0xe8) + (double)(fVar10 * fVar8);
        local_28 = *(double *)(param_1 + 0xf0) + (double)(fVar10 * fVar9);
        fVar7 = (float)FUN__text__00521144(lVar4,&local_38);
        fVar8 = *(float *)(param_3 + 0x98);
        uVar6 = NEON_fminnm(*(undefined4 *)(param_1 + 0x110),
                            fVar8 * 200.0 + -100.0 + (2.0 - (fVar8 + fVar8)) * fVar7 * 15.915494);
        *(undefined4 *)(param_1 + 0x110) = uVar6;
        return;
      }
    }
  }
  return;
}


