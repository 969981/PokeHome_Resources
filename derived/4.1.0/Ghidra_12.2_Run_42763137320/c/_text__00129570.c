/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129570; name: FUN_.text__00129570
 */


bool FUN__text__00129570(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x610) + 0x18))();
  return plVar1[1] != *plVar1;
}


