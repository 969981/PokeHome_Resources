/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb6f8; name: FUN_.text__003fb6f8
 */


void FUN__text__003fb6f8(long *param_1,int param_2)

{
  ulong uVar1;
  
  *(int *)(param_1 + 0x15) = param_2;
  if (((char)param_1[0xd] == '\0') ||
     (uVar1 = (**(code **)(*param_1 + 0x10))(param_1), (uVar1 & 1) == 0)) {
    if (param_2 == 2) {
      *(undefined1 *)((long)param_1 + 0x6c) = 1;
      if (*(char *)((long)param_1 + 0x6a) == '\0') {
        *(undefined1 *)((long)param_1 + 0x6a) = 1;
        FUN__text__003fdfb8(param_1[10]);
        return;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0x6c) = 0;
      if (*(char *)((long)param_1 + 0x6a) != '\0') {
        *(undefined1 *)((long)param_1 + 0x6a) = 0;
        FUN__text__003fe00c(param_1[10]);
        return;
      }
    }
  }
  else if (*(char *)((long)param_1 + 0x6a) == '\0') {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    FUN__text__003fdfb8(param_1[10]);
    return;
  }
  return;
}


