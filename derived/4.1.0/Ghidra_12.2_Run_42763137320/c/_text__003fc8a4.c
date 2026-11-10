/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fc8a4; name: FUN_.text__003fc8a4
 */


void FUN__text__003fc8a4(long *param_1,int param_2)

{
  if (param_2 == 2) {
    *(undefined1 *)((long)param_1 + 0xc3) = 1;
    (**(code **)(*param_1 + 0xc0))(param_1);
  }
  FUN__text__003fc6a8(param_1);
  if (param_1[1] == 0) {
    return;
  }
  FUN__text__003fe208(param_1[10],param_1);
  return;
}


