/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685518; name: FUN_.text__00685518
 */


undefined8 FUN__text__00685518(long param_1)

{
  if (((*(ushort *)(param_1 + 0xe2) >> 0xe & 1) == 0) &&
     ((*(long *)(param_1 + 0x40) == -1 || (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))))
     ) {
    return 0;
  }
  return 0xffffffff;
}


