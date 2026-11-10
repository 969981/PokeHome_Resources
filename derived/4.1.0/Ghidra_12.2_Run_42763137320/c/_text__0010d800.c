/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010d800; name: FUN_.text__0010d800
 */


void FUN__text__0010d800(long param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x2b0) = *(undefined1 *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(param_2 + 0x27c) = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_2 + 0x270) = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_2 + 0x88) = *(int *)(param_1 + 0x10);
  }
  *(undefined1 *)(param_2 + 0x177) = *(undefined1 *)(param_1 + 9);
  FUN__text__0010d8ac(param_1 + 0x18,param_2 + 0x288);
  FUN__text__0010d8ac(param_1 + 0x28,param_2 + 0xb0);
  FUN__text__0010d8ac(param_1 + 0x38,param_2 + 0xd0);
  FUN__text__0010d8ac(param_1 + 0x48,param_2 + 0xf0);
  FUN__text__0010d8ac(param_1 + 0x58,param_2 + 0x110);
  FUN__text__0010d8ac(param_1 + 0x68,param_2 + 0x130);
  return;
}


