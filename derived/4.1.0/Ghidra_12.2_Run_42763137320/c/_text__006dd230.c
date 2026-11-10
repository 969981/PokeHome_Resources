/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dd230; name: FUN_.text__006dd230
 */


int FUN__text__006dd230(char *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  fVar9 = *(float *)(lVar3 + 0x800);
  lVar2 = *(long *)(*(long *)(param_1 + 0x238) + 0x2b8);
  fVar10 = fVar9;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        pfVar8 = (float *)(lVar2 + 0x1c);
        do {
          uVar6 = uVar6 + 2;
          fVar10 = pfVar8[-4];
          if (pfVar8[-4] <= fVar9) {
            fVar10 = fVar9;
          }
          fVar9 = *pfVar8;
          if (*pfVar8 <= fVar10) {
            fVar9 = fVar10;
          }
          pfVar8 = pfVar8 + 8;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar6);
      }
      fVar10 = fVar9;
      if (((uVar1 & 1) != 0) && (fVar10 = *(float *)(lVar2 + uVar6 * 0x10 + 0xc), fVar10 <= fVar9))
      {
        fVar10 = fVar9;
      }
    }
    if (fVar10 < 1.0) {
      fVar10 = 1.0;
    }
  }
  fVar9 = 1.0;
  if (*(int *)(lVar3 + 0x7fc) != 0) {
    fVar9 = (float)*(int *)(lVar3 + 0x7fc);
  }
  fVar11 = (float)(*(int *)(lVar3 + 0x808) + 1);
  iVar5 = (int)(fVar9 / fVar11);
  iVar7 = (int)((float)param_2 / fVar11);
  if ((iVar5 < iVar7 || *(char *)(lVar3 + 0x8a8) != '\0') && *(char *)(lVar3 + 0x7f0) != '\0') {
    iVar7 = iVar5;
  }
  iVar7 = (int)((float)(int)fVar10 + (float)(int)(fVar10 * (float)iVar7));
  if (*(int *)(lVar3 + 0x874) == 0) {
    if (*(char *)(lVar3 + 0x838) == '\r') {
      piVar4 = (int *)(lVar3 + 0x888);
    }
    else {
      if (*(char *)(lVar3 + 0x838) != '\x02') goto LAB__text__006dd340;
      piVar4 = (int *)(lVar3 + 0x880);
    }
    iVar7 = *piVar4 * iVar7;
  }
LAB__text__006dd340:
  if ((*param_1 == '\0') || (*(char *)(lVar3 + 0x7e4) != '\0')) {
    return iVar7;
  }
  return *(int *)(*(long *)(param_1 + 0x548) + 0x230) * iVar7;
}


