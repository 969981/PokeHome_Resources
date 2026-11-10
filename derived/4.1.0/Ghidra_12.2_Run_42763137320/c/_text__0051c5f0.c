/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c5f0; name: FUN_.text__0051c5f0
 */


bool FUN__text__0051c5f0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 == (long *)0x0) {
    return true;
  }
  return *param_1 == *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x20;
}


