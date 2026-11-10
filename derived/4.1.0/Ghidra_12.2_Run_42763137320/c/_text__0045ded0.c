/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ded0; name: FUN_.text__0045ded0
 */


float FUN__text__0045ded0(long param_1,int param_2)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = (long *)(param_1 + 0x148);
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0x170);
  }
  plVar1 = (long *)*plVar1;
  if (plVar1 == (long *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x118)) {
      fVar2 = *(float *)(param_1 + 0x118);
    }
    return fVar2;
  }
  fVar2 = 0.0;
  do {
    fVar2 = *(float *)(plVar1 + 5) + fVar2;
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  if (fVar2 <= *(float *)(param_1 + 0x118)) {
    fVar2 = *(float *)(param_1 + 0x118);
  }
  return fVar2;
}


