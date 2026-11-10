/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006863d4; name: FUN_.text__006863d4
 */


bool FUN__text__006863d4(long param_1)

{
  if (((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x78) == 0)) &&
     (*(long *)(param_1 + 0x80) == 0)) {
    return *(long *)(param_1 + 0x88) != 0;
  }
  return true;
}


