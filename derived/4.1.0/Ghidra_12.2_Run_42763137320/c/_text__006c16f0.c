/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c16f0; name: FUN_.text__006c16f0
 */


bool FUN__text__006c16f0(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 == 0)) {
    return false;
  }
  return *(char *)(lVar1 + 0x110) != '\0';
}


