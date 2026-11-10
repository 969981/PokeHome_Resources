/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064f920; name: FUN_.text__0064f920
 */


void FUN__text__0064f920(long *param_1)

{
  if (*param_1 != 0) {
    nnosFinalizeMutex();
    FUN__text__006783e4(*param_1);
  }
  FUN__text__006783e4(param_1[2]);
  if (param_1[4] != 0) {
    FUN__text__00651770();
  }
  memset(param_1,0,0x78);
  return;
}


