/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ffad0; name: FUN_.text__003ffad0
 */


void FUN__text__003ffad0(uint param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = (ulong)param_1;
    do {
      uVar2 = 1;
      if (*param_3 != 1) {
        uVar2 = 2;
      }
      FUN__text__003ffb30(*(undefined8 *)(*param_2 + 0x20),uVar2);
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


