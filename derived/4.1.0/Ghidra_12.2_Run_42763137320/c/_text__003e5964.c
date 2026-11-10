/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e5964; name: FUN_.text__003e5964
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e5964(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x4d) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 2) {
    fVar6 = 1.0 / (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34));
    fVar9 = 1.0 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
    fVar10 = fVar9 + fVar9;
    uVar5 = (ulong)(uint)-((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) * fVar9) <<
            0x20;
    fVar9 = -1.0 / (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x44));
    *(ulong *)(param_1 + 0x58) =
         (ulong)(uint)-((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38)) * fVar6) << 0x20;
    *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar6 + fVar6);
    uVar4 = CONCAT44(*(float *)(param_1 + 0x44) * fVar9,fVar9);
    uVar2 = _DAT_00724930;
    uVar3 = uRam0000000000724938;
    goto LAB__text__003e5bc0;
  }
  if (iVar1 == 1) {
    fVar9 = *(float *)(param_1 + 0x34) * 0.5;
    fVar10 = 0.5;
    if (fVar9 < 0.0) {
      fVar10 = -0.5;
    }
    fVar6 = *(float *)(param_1 + 0x48);
    fVar9 = fVar9 - (float)(int)(fVar10 + *_DAT_008a51b0 * fVar9) * *_DAT_008a51b8;
    if (fVar9 <= *_DAT_008a51c0) {
      if (fVar9 < -*_DAT_008a51c0) {
        fVar10 = -*_DAT_008a02c8;
        goto LAB__text__003e5b04;
      }
      fVar10 = 1.0;
    }
    else {
      fVar10 = *_DAT_008a02c8;
LAB__text__003e5b04:
      fVar9 = fVar10 - fVar9;
      fVar10 = -1.0;
    }
    fVar7 = fVar9 * fVar9;
    fVar10 = 1.0 / ((fVar9 * (fVar7 * ((_DAT_008a51c8[3] +
                                       fVar7 * ((_DAT_008a51c8[1] - fVar7 * *_DAT_008a51c8) * fVar7
                                               - _DAT_008a51c8[2])) * fVar7 - _DAT_008a51c8[4]) +
                             1.0)) /
                   (fVar10 * (fVar7 * ((_DAT_008a51d0[3] +
                                       fVar7 * ((_DAT_008a51d0[1] - fVar7 * *_DAT_008a51d0) * fVar7
                                               - _DAT_008a51d0[2])) * fVar7 - _DAT_008a51d0[4]) +
                             1.0)));
    fVar9 = -1.0 / (fVar6 - *(float *)(param_1 + 0x44));
    uVar5 = 0;
    uVar4 = CONCAT44(*(float *)(param_1 + 0x44) * fVar6 * fVar9,fVar6 * fVar9);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar10 / *(float *)(param_1 + 0x38));
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    fVar6 = *(float *)(param_1 + 0x44);
    fVar7 = *(float *)(param_1 + 0x48);
    fVar8 = 1.0 / (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34));
    fVar9 = 1.0 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
    fVar10 = (fVar6 + fVar6) * fVar9;
    uVar5 = (ulong)(uint)((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) * fVar9);
    fVar9 = -1.0 / (fVar7 - fVar6);
    *(ulong *)(param_1 + 0x58) =
         (ulong)(uint)((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38)) * fVar8);
    *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar8 * (fVar6 + fVar6));
    uVar4 = CONCAT44(fVar6 * fVar7 * fVar9,fVar7 * fVar9);
  }
  uVar2 = _DAT_00724890;
  uVar3 = uRam0000000000724898;
LAB__text__003e5bc0:
  *(ulong *)(param_1 + 0x68) = uVar5;
  *(ulong *)(param_1 + 0x60) = (ulong)(uint)fVar10 << 0x20;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  return;
}


