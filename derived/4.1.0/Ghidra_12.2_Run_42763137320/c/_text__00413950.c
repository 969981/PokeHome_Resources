/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413950; name: FUN_.text__00413950
 */


undefined4 FUN__text__00413950(ulong param_1)

{
  if (DAT_00ae9ea0 == 0) {
    return 1;
  }
  return *(undefined4 *)(&DAT_00ae9f78 + (param_1 & 0xffffffff) * 4);
}


