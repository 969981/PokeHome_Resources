/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019264c; name: FUN_.text__0019264c
 */


undefined8 FUN__text__0019264c(long param_1,uint *param_2)

{
  if ((*param_2 < 6) && (param_2[1] < 5)) {
    return *(undefined8 *)(param_1 + (ulong)*param_2 * 0xa0 + (ulong)param_2[1] * 0x20 + 0x18);
  }
  return 0;
}


