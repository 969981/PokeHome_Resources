/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012bca0; name: FUN_.text__0012bca0
 */


void FUN__text__0012bca0(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x3d0) != 0) {
      FUN__text__003c0330();
      return;
    }
  }
  else if (*(long *)(param_1 + 0x3d0) != 0) {
    FUN__text__003c02e4();
    return;
  }
  return;
}


