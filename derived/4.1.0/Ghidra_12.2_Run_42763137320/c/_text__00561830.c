/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561830; name: FUN_.text__00561830
 */


void FUN__text__00561830(long param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  FUN__text__00561970();
  fVar3 = *(float *)(param_1 + 0x58);
  if (param_3 != 0) {
    pfVar1 = param_2;
    do {
      fVar3 = *(float *)(param_1 + 0x5c) * *pfVar1 - *(float *)(param_1 + 0x60) * fVar3;
      pfVar2 = pfVar1 + 1;
      *pfVar1 = fVar3;
      pfVar1 = pfVar2;
    } while (pfVar2 < param_2 + param_3);
  }
  *(float *)(param_1 + 0x58) = fVar3;
  return;
}


