/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00261cac; name: FUN_.text__00261cac
 */


byte FUN__text__00261cac(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN__text__001155b0();
  }
  return bVar1 & *(char *)(*(long *)(param_1 + 0x5c8) + 0xc0) != '\0';
}


