/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561970; name: FUN_.text__00561970
 */


void FUN__text__00561970(int *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar3 = *param_1;
    pfVar1 = param_2;
    do {
      iVar3 = iVar3 * 0x343fd + 0x269ec3;
      pfVar2 = pfVar1 + 1;
      *pfVar1 = (float)iVar3 * 2.3283064e-10;
      pfVar1 = pfVar2;
    } while (pfVar2 < param_2 + param_3);
    *param_1 = iVar3;
  }
  return;
}


