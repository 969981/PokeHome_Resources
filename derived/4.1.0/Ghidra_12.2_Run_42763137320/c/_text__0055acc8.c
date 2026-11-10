/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055acc8; name: FUN_.text__0055acc8
 */


void FUN__text__0055acc8(long *param_1,long *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(*(long *)param_1[2] + 0x18))();
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(*(long *)param_1[5] + 0x18))();
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  return;
}


