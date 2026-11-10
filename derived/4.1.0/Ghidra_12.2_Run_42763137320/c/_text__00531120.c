/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00531120; name: FUN_.text__00531120
 */


undefined1  [16] FUN__text__00531120(long param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  double *pdVar4;
  long lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = param_2[1] - *(double *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x130);
  dVar9 = *param_2 - *(double *)(param_1 + 8);
  dVar10 = param_2[2] - *(double *)(param_1 + 0x18);
  dVar8 = SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10);
  if (uVar3 < 2) {
    uVar3 = 0;
  }
  else {
    lVar5 = (ulong)uVar3 - 1;
    pdVar4 = (double *)(param_1 + 0x30);
    dVar9 = *(double *)(param_1 + 0x18);
    dVar10 = *(double *)(param_1 + 0x10);
    dVar7 = *(double *)(param_1 + 8);
    do {
      pdVar1 = pdVar4 + -2;
      pdVar2 = pdVar4 + -1;
      lVar5 = lVar5 + -1;
      dVar11 = *pdVar4;
      dVar9 = dVar9 - dVar11;
      dVar10 = dVar10 - *pdVar2;
      dVar7 = dVar7 - *pdVar1;
      dVar8 = SQRT(dVar7 * dVar7 + dVar10 * dVar10 + dVar9 * dVar9) + dVar8;
      pdVar4 = pdVar4 + 3;
      dVar9 = dVar11;
      dVar10 = *pdVar2;
      dVar7 = *pdVar1;
    } while (lVar5 != 0);
    uVar3 = uVar3 - 1;
  }
  dVar9 = *param_3;
  param_1 = param_1 + (ulong)uVar3 * 0x18;
  dVar10 = *(double *)(param_1 + 0x10) - param_3[1];
  dVar7 = *(double *)(param_1 + 8) - dVar9;
  dVar11 = *(double *)(param_1 + 0x18) - param_3[2];
  dVar10 = SQRT(dVar7 * dVar7 + dVar10 * dVar10 + dVar11 * dVar11);
  if (dVar10 != 0.0) {
    dVar9 = dVar9 + dVar7 * ((dVar10 + dVar8) / dVar10);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar9;
  return auVar6;
}


