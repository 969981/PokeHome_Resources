/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309d7c; name: FUN_.text__00309d7c
 */


undefined8 FUN__text__00309d7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x170) == '\0')) {
    return *(undefined8 *)(param_1 + 0x1b8);
  }
  return *(undefined8 *)(lVar1 + 400);
}


