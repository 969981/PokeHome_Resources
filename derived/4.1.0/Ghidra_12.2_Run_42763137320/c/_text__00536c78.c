/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00536c78; name: FUN_.text__00536c78
 */


void FUN__text__00536c78(undefined4 param_1,undefined4 param_2,undefined8 *param_3,
                        undefined4 param_4,uint param_5,uint param_6)

{
  *(undefined4 *)(param_3 + 3) = param_1;
  if (3 < param_5) {
    param_5 = 4;
  }
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = 0;
  if (7 < param_6) {
    param_6 = 8;
  }
  *(undefined1 *)((long)param_3 + 0x24) = 0;
  *param_3 = 0;
  param_3[1] = 0;
  *(uint *)(param_3 + 2) = param_5;
  *(uint *)((long)param_3 + 0x14) = param_6;
  *(undefined4 *)(param_3 + 5) = param_2;
  return;
}


