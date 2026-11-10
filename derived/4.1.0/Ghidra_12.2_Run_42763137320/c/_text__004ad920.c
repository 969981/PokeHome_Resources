/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ad920; name: FUN_.text__004ad920
 */


void FUN__text__004ad920(long *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


