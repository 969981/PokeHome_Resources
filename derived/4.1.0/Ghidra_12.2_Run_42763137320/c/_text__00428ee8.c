/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428ee8; name: FUN_.text__00428ee8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00428ee8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,_DAT_008a47f0);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN__text__0042c560(param_1);
  return;
}


