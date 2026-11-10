/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521904; name: FUN_.text__00521904
 */


undefined1  [16]
FUN__text__00521904(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double *param_4,
                   uint param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  dVar3 = 5.26354424712089e-315;
  fVar6 = 1.0;
  if (param_5 != 0) {
    fVar6 = -1.0;
  }
  if (param_4[(ulong)param_5 * 0x2e + 0x51] == 0.0) {
    dVar1 = *param_4 + (double)(fVar6 * 0.001 * *(float *)(param_4 + 6));
  }
  else {
    param_4 = param_4 + (ulong)param_5 * 0x2e + 0x25;
    dVar1 = (double)FUN__text__00520320(0xbf800000,0x3f800000,param_4);
    FUN__text__0052049c(param_4);
    dVar4 = dVar3;
    dVar5 = param_3;
    FUN__text__005205e8(param_4);
    dVar1 = dVar1 + (dVar5 * dVar3 - dVar4 * param_3) * (double)fVar6 * 0.0010000000474974513;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar1;
  return auVar2;
}


