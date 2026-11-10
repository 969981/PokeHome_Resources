/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6f00; name: FUN_.text__004f6f00
 */


void FUN__text__004f6f00(long *param_1)

{
  if (param_1[10] != 0) {
    FUN__text__00400fc0(2);
  }
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


