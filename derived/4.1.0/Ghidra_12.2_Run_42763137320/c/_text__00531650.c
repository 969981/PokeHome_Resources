/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00531650; name: FUN_.text__00531650
 */


float FUN__text__00531650(double *param_1,double *param_2,double *param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x26);
  if (*(uint *)(param_1 + 0x26) == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = param_3[2];
  dVar5 = param_3[1];
  dVar7 = *param_3;
  do {
    uVar1 = uVar1 - 1;
    dVar8 = param_1[1];
    dVar6 = param_1[2];
    dVar4 = param_1[3];
    dVar2 = SQRT((dVar8 - dVar7) * (dVar8 - dVar7) + (dVar6 - dVar5) * (dVar6 - dVar5) +
                 (dVar4 - dVar3) * (dVar4 - dVar3)) + dVar2;
    dVar3 = dVar4;
    dVar5 = dVar6;
    dVar7 = dVar8;
    param_1 = param_1 + 3;
  } while (uVar1 != 0);
  return (float)(SQRT((*param_2 - dVar8) * (*param_2 - dVar8) +
                      (param_2[1] - dVar6) * (param_2[1] - dVar6) +
                      (param_2[2] - dVar4) * (param_2[2] - dVar4)) + dVar2);
}


