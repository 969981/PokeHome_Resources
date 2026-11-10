/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521060; name: FUN_.text__00521060
 */


bool FUN__text__00521060(undefined1 param_1 [16],double param_2,double param_3,long param_4,
                        uint param_5,double *param_6,double *param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar2 = *(long *)(param_4 + (ulong)param_5 * 0x170 + 0x288);
  if (lVar2 != 0) {
    lVar1 = param_4 + (ulong)param_5 * 0x170 + 0x128;
    dVar3 = (double)FUN__text__0052049c(lVar1);
    dVar6 = param_2;
    dVar8 = param_3;
    dVar4 = (double)FUN__text__005205e8(lVar1);
    dVar7 = dVar6;
    dVar9 = dVar8;
    dVar5 = (double)FUN__text__00520320(lVar1);
    dVar11 = (*param_6 - dVar5) * dVar3 + param_2 * (param_6[1] - dVar7) +
             param_3 * (param_6[2] - dVar9);
    dVar10 = (*param_6 - dVar5) * dVar4 + dVar6 * (param_6[1] - dVar7) +
             dVar8 * (param_6[2] - dVar9);
    *param_7 = dVar5 + dVar3 * dVar11 + dVar4 * dVar10;
    param_7[1] = dVar7 + param_2 * dVar11 + dVar6 * dVar10;
    param_7[2] = dVar9 + param_3 * dVar11 + dVar8 * dVar10;
  }
  return lVar2 != 0;
}


