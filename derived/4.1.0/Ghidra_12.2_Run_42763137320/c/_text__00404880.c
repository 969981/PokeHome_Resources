/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404880; name: FUN_.text__00404880
 */


undefined8 FUN__text__00404880(int param_1,ulong param_2)

{
  if ((*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & param_2) == 0) {
    return 0;
  }
  return *(undefined8 *)((*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & param_2) + 0x40);
}


