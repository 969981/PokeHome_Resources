/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00191d1c; name: FUN_.text__00191d1c
 */


undefined8 FUN__text__00191d1c(long param_1,uint *param_2)

{
  if ((*param_2 < 6) && (param_2[1] < 5)) {
    return *(undefined8 *)(param_1 + (ulong)*param_2 * 0xa0 + (ulong)param_2[1] * 0x20 + 0x30);
  }
  return 0;
}


