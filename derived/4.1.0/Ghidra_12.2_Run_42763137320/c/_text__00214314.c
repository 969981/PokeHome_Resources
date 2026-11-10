/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00214314; name: FUN_.text__00214314
 */


bool FUN__text__00214314(void)

{
  ulong uVar1;
  
  uVar1 = FUN__text__00309ba4(DAT_008e1640);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(char *)(DAT_008e1640 + 0x214) != '\0';
}


