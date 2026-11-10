/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c69c; name: FUN_.text__0051c69c
 */


void FUN__text__0051c69c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(*param_1 + 0x20);
  *param_1 = (long)plVar1;
  if (plVar1 != (long *)(*(long *)param_1[2] + (ulong)*(uint *)((long *)param_1[2] + 1) * 0x20)) {
    param_1[1] = *plVar1;
  }
  return;
}


