/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521b44; name: FUN_.text__00521b44
 */


bool FUN__text__00521b44(double param_1,double param_2,double param_3,long param_4,uint param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  param_4 = param_4 + (ulong)param_5 * 0x170;
  if (*(long *)(param_4 + 0x288) == 0) {
    return true;
  }
  param_4 = param_4 + 0x128;
  fVar6 = 1.0;
  if (param_5 != 0) {
    fVar6 = -1.0;
  }
  dVar8 = param_2;
  dVar10 = param_3;
  dVar2 = (double)FUN__text__0052049c(param_4);
  dVar9 = dVar8;
  dVar4 = dVar10;
  dVar3 = (double)FUN__text__005205e8(param_4);
  fVar1 = fVar6 * (float)(dVar4 * dVar8 - dVar9 * dVar10);
  fVar5 = fVar6 * (float)(dVar3 * dVar10 - dVar4 * dVar2);
  fVar6 = fVar6 * (float)(dVar9 * dVar2 - dVar3 * dVar8);
  fVar7 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar7 == 0.0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar5 = fVar5 * fVar7;
    fVar6 = fVar6 * fVar7;
    dVar8 = (double)(fVar1 * fVar7);
    dVar9 = (double)fVar5;
    dVar10 = (double)fVar6;
  }
  dVar3 = (double)(ulong)(uint)fVar6;
  dVar2 = (double)(ulong)(uint)fVar5;
  dVar4 = (double)FUN__text__00520320(param_4);
  return 0.0 <= (param_1 - dVar4) * dVar8 + dVar9 * (param_2 - dVar2) + dVar10 * (param_3 - dVar3);
}


