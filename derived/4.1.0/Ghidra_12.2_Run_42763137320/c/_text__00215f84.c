/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215f84; name: FUN_.text__00215f84
 */


undefined8 FUN__text__00215f84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xd8;
  if (*(char *)(param_1 + 0x2d) != '\0') {
    lVar1 = param_1 + 0x38;
  }
  return *(undefined8 *)(lVar1 + 0x10);
}


