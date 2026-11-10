/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042f634; name: FUN_.text__0042f634
 */


void FUN__text__0042f634(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x3c) == 2) {
    uVar1 = 3;
  }
  else {
    if (*(int *)(param_2 + 0x3c) != 1) {
      return;
    }
    uVar1 = 0;
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  return;
}


