/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e6d90; name: FUN_.text__006e6d90
 */


ulong FUN__text__006e6d90(float *param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if (uVar2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x006e6dc8 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006e6dd8 + (ulong)*(byte *)(uVar2 + 0x766960) * 4))(1);
    return uVar2;
  }
  FUN__text__006e68b0(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar4 = 0;
    iVar5 = 0;
    pfVar6 = param_1 + 6;
    pfVar8 = param_1 + 4;
    do {
      pfVar3 = pfVar6;
      fVar9 = *pfVar3;
      fVar10 = *pfVar8;
      if ((0.0 <= fVar9) || (0.0 <= fVar10)) {
        if (fVar10 < fVar9) goto LAB__text__006e6e78;
      }
      else if (fVar9 < fVar10) {
LAB__text__006e6e78:
        fVar10 = pfVar3[1];
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar8;
        pfVar6 = param_1;
        if (pfVar8 != param_1) {
          lVar7 = lVar4;
          pfVar6 = pfVar8;
          if (fVar9 < 0.0) {
            do {
              fVar11 = *(float *)((long)param_1 + lVar7 + 8);
              if (0.0 <= fVar11) {
                if (fVar9 <= fVar11) {
                  pfVar6 = (float *)((long)param_1 + lVar7 + 0x10);
                  goto LAB__text__006e6e20;
                }
              }
              else if (fVar11 <= fVar9) goto LAB__text__006e6e20;
              pfVar6 = pfVar6 + -2;
              bVar1 = lVar7 != -8;
              *(undefined8 *)((long)param_1 + lVar7 + 0x10) =
                   *(undefined8 *)((long)param_1 + lVar7 + 8);
              lVar7 = lVar7 + -8;
            } while (bVar1);
          }
          else {
            do {
              if (fVar9 <= *(float *)((long)param_1 + lVar7 + 8)) {
                pfVar6 = (float *)((long)param_1 + lVar7 + 0x10);
                goto LAB__text__006e6e20;
              }
              bVar1 = lVar7 != -8;
              *(undefined8 *)((long)param_1 + lVar7 + 0x10) =
                   *(undefined8 *)((long)param_1 + lVar7 + 8);
              lVar7 = lVar7 + -8;
            } while (bVar1);
          }
          pfVar6 = param_1;
        }
LAB__text__006e6e20:
        iVar5 = iVar5 + 1;
        *pfVar6 = fVar9;
        pfVar6[1] = fVar10;
        if (iVar5 == 8) {
          return (ulong)(pfVar3 + 2 == param_2);
        }
      }
      lVar4 = lVar4 + 8;
      pfVar6 = pfVar3 + 2;
      pfVar8 = pfVar3;
    } while (pfVar3 + 2 != param_2);
  }
  return 1;
}


