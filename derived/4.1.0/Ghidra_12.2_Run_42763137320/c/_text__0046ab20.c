/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046ab20; name: FUN_.text__0046ab20
 */


long FUN__text__0046ab20(long param_1)

{
  do {
    if (*(long *)(param_1 + 0x68) != 0) {
      return *(long *)(param_1 + 0x68) + 0x38;
    }
    param_1 = *(long *)(param_1 + 0x78);
  } while (param_1 != 0);
  return 0;
}


