/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048c530; name: FUN_.text__0048c530
 */


void FUN__text__0048c530(undefined8 param_1,uint param_2,undefined1 (*param_3) [16])

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  float fVar8;
  undefined1 auVar9 [16];
  
  FUN__text__0048c660();
  if (param_2 != 0) {
    uVar2 = (ulong)param_2;
    uVar3 = uVar2 & 3;
    if (param_2 < 4) {
      lVar4 = 0;
      fVar8 = 0.0;
    }
    else {
      fVar8 = 0.0;
      lVar4 = 0;
      pfVar5 = (float *)(*param_3 + 8);
      do {
        lVar4 = lVar4 + -4;
        fVar8 = pfVar5[1] +
                *pfVar5 + pfVar5[-1] + *(float *)*(undefined1 (*) [16])(pfVar5 + -2) + fVar8;
        pfVar5 = pfVar5 + 4;
      } while (-lVar4 != (uVar2 & 0xfffffffc));
      lVar4 = -lVar4;
    }
    if ((param_2 & 3) != 0) {
      pfVar5 = (float *)(*param_3 + lVar4 * 4);
      do {
        uVar3 = uVar3 - 1;
        fVar8 = *pfVar5 + fVar8;
        pfVar5 = pfVar5 + 1;
      } while (uVar3 != 0);
    }
    if (0.0 < fVar8) {
      if (param_2 == 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          pfVar5 = (float *)(*param_3 + uVar3 * 4);
          uVar3 = uVar3 + 2;
          *pfVar5 = *pfVar5 * (1.0 / fVar8);
          pfVar5[1] = pfVar5[1] * (1.0 / fVar8);
        } while ((uVar2 & 0xfffffffe) != uVar3);
      }
      if ((param_2 & 1) != 0) {
        *(float *)(*param_3 + uVar3 * 4) = *(float *)(*param_3 + uVar3 * 4) / fVar8;
      }
      uVar1 = param_2 + 3 & 0xfffffffc;
      if (uVar1 != 0) {
        pauVar6 = param_3;
        do {
          auVar9 = NEON_frsqrte(*pauVar6,4);
          auVar9 = NEON_frecpe(auVar9,4);
          pauVar7 = pauVar6 + 1;
          *(long *)(*pauVar6 + 8) = auVar9._8_8_;
          *(long *)*pauVar6 = auVar9._0_8_;
          pauVar6 = pauVar7;
        } while (pauVar7 < (undefined1 (*) [16])(*param_3 + (ulong)uVar1 * 4));
      }
    }
  }
  return;
}


