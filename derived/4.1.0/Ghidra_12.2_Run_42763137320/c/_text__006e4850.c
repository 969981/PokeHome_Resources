/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e4850; name: FUN_.text__006e4850
 */


ulong FUN__text__006e4850(float *param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if (uVar2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x006e4888 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006e4898 + (ulong)*(byte *)(uVar2 + 0x766948) * 4))(1);
    return uVar2;
  }
  FUN__text__006e4490(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar4 = 0;
    iVar5 = 0;
    pfVar8 = param_1 + 6;
    pfVar9 = param_1 + 4;
    do {
      pfVar3 = pfVar8;
      fVar10 = *pfVar3;
      if (*pfVar9 <= fVar10) {
        if (fVar10 <= *pfVar9) {
          fVar6 = pfVar3[1];
          if ((int)pfVar9[1] <= (int)fVar6) goto LAB__text__006e48f0;
        }
        else {
          fVar6 = pfVar3[1];
        }
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar9;
        pfVar8 = param_1;
        if (pfVar9 != param_1) {
          lVar7 = lVar4;
          do {
            fVar11 = *(float *)((long)param_1 + lVar7 + 8);
            pfVar8 = pfVar9;
            if (fVar10 < fVar11) goto LAB__text__006e48dc;
            if ((fVar10 <= fVar11) && (*(int *)((long)param_1 + lVar7 + 0xc) <= (int)fVar6)) {
              pfVar8 = (float *)((long)param_1 + lVar7 + 0x10);
              goto LAB__text__006e48dc;
            }
            bVar1 = lVar7 != -8;
            *(undefined8 *)((long)param_1 + lVar7 + 0x10) =
                 *(undefined8 *)((long)param_1 + lVar7 + 8);
            lVar7 = lVar7 + -8;
            pfVar9 = pfVar9 + -2;
          } while (bVar1);
          pfVar8 = param_1;
        }
LAB__text__006e48dc:
        iVar5 = iVar5 + 1;
        *pfVar8 = fVar10;
        pfVar8[1] = fVar6;
        if (iVar5 == 8) {
          return (ulong)(pfVar3 + 2 == param_2);
        }
      }
LAB__text__006e48f0:
      lVar4 = lVar4 + 8;
      pfVar8 = pfVar3 + 2;
      pfVar9 = pfVar3;
    } while (pfVar3 + 2 != param_2);
  }
  return 1;
}


