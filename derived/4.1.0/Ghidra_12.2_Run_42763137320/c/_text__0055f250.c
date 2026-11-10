/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055f250; name: FUN_.text__0055f250
 */


void FUN__text__0055f250(float *param_1,long *param_2)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_1[4] != 0.0) && (bVar2 = *(byte *)(param_2 + 1), bVar2 != 0)) {
    uVar3 = *(ushort *)((long)param_2 + 0x12);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        fVar7 = param_1[1];
        pfVar1 = (float *)(*param_2 + uVar4 * *(ushort *)(param_2 + 2) * 4);
        fVar8 = (*param_1 - fVar7) * (1.0 / (float)uVar3);
        pfVar6 = pfVar1;
        if (param_1[4] == 1.4013e-45) {
          do {
            fVar9 = *pfVar6;
            if (*pfVar6 <= fVar7) {
              fVar9 = fVar7;
            }
            fVar7 = fVar7 + fVar8;
            pfVar5 = pfVar6 + 1;
            *pfVar6 = fVar9;
            pfVar6 = pfVar5;
          } while (pfVar5 < pfVar1 + uVar3);
        }
        else {
          fVar9 = param_1[3];
          fVar10 = param_1[2] - fVar9;
          do {
            fVar11 = *pfVar6;
            fVar14 = fVar11 * fVar9;
            fVar13 = fVar11;
            if (fVar11 <= fVar7) {
              fVar13 = fVar7;
            }
            fVar7 = fVar7 + fVar8;
            fVar9 = fVar9 + fVar10 * (1.0 / (float)uVar3);
            fVar12 = 0.0;
            if (fVar11 <= 0.0) {
              fVar12 = fVar14;
            }
            pfVar5 = pfVar6 + 1;
            *pfVar6 = fVar13 - fVar12;
            pfVar6 = pfVar5;
          } while (pfVar5 < pfVar1 + uVar3);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != bVar2);
    }
  }
  param_1[1] = *param_1;
  param_1[3] = param_1[2];
  return;
}


