/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004faed0; name: FUN_.text__004faed0
 */


void FUN__text__004faed0(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x98); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((long *)plVar1[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[1] + 0x80))();
    }
  }
  return;
}


