/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521a20; name: FUN_.text__00521a20
 */


float FUN__text__00521a20(undefined1 param_1 [16],double param_2,double param_3,long param_4,
                         uint param_5)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  fVar7 = 1.0;
  if (param_5 != 0) {
    fVar7 = -1.0;
  }
  if (*(long *)(param_4 + (ulong)param_5 * 0x170 + 0x288) == 0) {
    return *(float *)(param_4 + 0x30) * fVar7;
  }
  lVar1 = param_4 + (ulong)param_5 * 0x170 + 0x128;
  dVar3 = (double)FUN__text__0052049c(lVar1);
  dVar6 = param_2;
  dVar8 = param_3;
  dVar4 = (double)FUN__text__005205e8(lVar1);
  fVar2 = fVar7 * (float)(dVar8 * param_2 - dVar6 * param_3);
  fVar5 = fVar7 * (float)(dVar4 * param_3 - dVar8 * dVar3);
  fVar7 = fVar7 * (float)(dVar6 * dVar3 - dVar4 * param_2);
  fVar7 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar7 * fVar7);
  if (fVar7 == 0.0) {
    return 0.0;
  }
  return fVar2 * (1.0 / fVar7);
}


