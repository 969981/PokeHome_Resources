/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5cac; name: FUN_.text__003f5cac
 */


void FUN__text__003f5cac(long *param_1)

{
  if (((*(byte *)((long)param_1 + 0x34) & 1) != 0) && (*param_1 != 0)) {
    FUN__text__00400fc0(7);
  }
  FUN__text__00400fc0(7,param_1);
  return;
}


