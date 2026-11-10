/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00487010; name: FUN_.text__00487010
 */


void FUN__text__00487010(uint param_1,long param_2,uint param_3,long param_4,uint param_5,
                        long param_6,long param_7)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_1 != 0) {
    uVar4 = (ulong)param_3;
    if (param_5 == 0) {
      if (param_3 != 0) {
        uVar5 = 0;
        uVar6 = 0;
        do {
          if (param_3 < 8) {
            lVar2 = 0;
          }
          else {
            lVar2 = 0;
            puVar3 = (undefined8 *)(param_7 + 0x10 + uVar5 * 4);
            do {
              lVar2 = lVar2 + -8;
              puVar3[-2] = 0x3f8000003f800000;
              puVar3[-1] = 0x3f8000003f800000;
              *puVar3 = 0x3f8000003f800000;
              puVar3[1] = 0x3f8000003f800000;
              puVar3 = puVar3 + 4;
            } while (-lVar2 != (uVar4 & 0xfffffff8));
            lVar2 = -lVar2;
          }
          if ((param_3 & 7) != 0) {
            puVar7 = (undefined4 *)(param_7 + uVar5 * 4 + lVar2 * 4);
            uVar8 = uVar4 & 7;
            do {
              uVar8 = uVar8 - 1;
              *puVar7 = 0x3f800000;
              puVar7 = puVar7 + 1;
            } while (uVar8 != 0);
          }
          uVar6 = uVar6 + 1;
          uVar5 = (ulong)((int)uVar5 + param_3);
        } while (uVar6 != param_1);
      }
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      do {
        if (param_3 != 0) {
          if (param_3 < 8) {
            lVar2 = 0;
          }
          else {
            lVar2 = 0;
            puVar3 = (undefined8 *)(param_7 + 0x10 + uVar5 * 4);
            do {
              lVar2 = lVar2 + -8;
              puVar3[-2] = 0x3f8000003f800000;
              puVar3[-1] = 0x3f8000003f800000;
              *puVar3 = 0x3f8000003f800000;
              puVar3[1] = 0x3f8000003f800000;
              puVar3 = puVar3 + 4;
            } while (-lVar2 != (uVar4 & 0xfffffff8));
            lVar2 = -lVar2;
          }
          if ((param_3 & 7) != 0) {
            uVar8 = uVar4 & 7;
            puVar7 = (undefined4 *)(param_7 + uVar5 * 4 + lVar2 * 4);
            do {
              uVar8 = uVar8 - 1;
              *puVar7 = 0x3f800000;
              puVar7 = puVar7 + 1;
            } while (uVar8 != 0);
          }
        }
        uVar8 = 0;
        pfVar1 = (float *)(param_7 + (ulong)((int)uVar6 * param_3) * 4);
        do {
          pfVar10 = (float *)(param_4 + uVar8 * 4);
          uVar9 = (ulong)(uint)((int)uVar6 * 3 + (int)uVar8);
          pfVar11 = pfVar1;
          if (*(char *)(param_6 + uVar8) == '\0') {
            do {
              pfVar12 = pfVar11 + 1;
              *pfVar11 = (*pfVar10 * 0.5 * *(float *)(param_2 + uVar9 * 4) + 0.5) * *pfVar11;
              pfVar10 = pfVar10 + 3;
              pfVar11 = pfVar12;
            } while (pfVar12 < pfVar1 + uVar4);
          }
          else {
            do {
              fVar13 = *(float *)(param_2 + uVar9 * 4);
              fVar14 = 0.0;
              fVar15 = *pfVar10;
              if (0.0 <= fVar13) {
                if (0.0 <= fVar15) {
                  fVar14 = (fVar15 + fVar15) * (fVar13 + -0.5) - (fVar13 + -0.5);
                  goto LAB__text__00487150;
                }
              }
              else if (fVar15 <= 0.0) {
                fVar14 = fVar13 + 0.5 + (fVar13 + 0.5) * (fVar15 + fVar15);
LAB__text__00487150:
                fVar14 = fVar14 + 0.5;
              }
              pfVar10 = pfVar10 + 3;
              pfVar12 = pfVar11 + 1;
              *pfVar11 = *pfVar11 * fVar14;
              pfVar11 = pfVar12;
            } while (pfVar12 < pfVar1 + uVar4);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_5);
        uVar6 = uVar6 + 1;
        uVar5 = (ulong)((int)uVar5 + param_3);
      } while (uVar6 != param_1);
    }
  }
  return;
}


