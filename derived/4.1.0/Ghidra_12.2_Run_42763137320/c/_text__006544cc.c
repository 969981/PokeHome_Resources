/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006544cc; name: FUN_.text__006544cc
 */


int FUN__text__006544cc(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(long *)(param_1 + 0x28)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


