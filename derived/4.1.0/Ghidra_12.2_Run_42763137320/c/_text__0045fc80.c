/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045fc80; name: FUN_.text__0045fc80
 */


void FUN__text__0045fc80(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x148);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)(param_1 + 0x170);
      do {
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) {
          return;
        }
      } while (-0.01 <= *(float *)(plVar1 + 5));
      return;
    }
  } while (-0.01 <= *(float *)(plVar1 + 5));
  return;
}


