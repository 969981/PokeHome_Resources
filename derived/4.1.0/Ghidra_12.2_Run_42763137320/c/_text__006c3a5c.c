/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c3a5c; name: FUN_.text__006c3a5c
 */


long FUN__text__006c3a5c(long *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x50))();
  if (param_2 == 0) {
    return param_1[0x23];
  }
  if (*(char *)((long)param_1 + 0x109) < param_2) {
    return 0;
  }
  return *(long *)(param_1[0x22] + (ulong)(param_2 - 1) * 0x10 + 8);
}


