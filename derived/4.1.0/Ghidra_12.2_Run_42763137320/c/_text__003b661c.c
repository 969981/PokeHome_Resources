/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b661c; name: FUN_.text__003b661c
 */


void FUN__text__003b661c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x68) != 2) {
    if (*(int *)(param_1 + 0x68) != 1) {
      return;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(*(long **)(param_1 + 0x60),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x68) = 2;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(*(long **)(param_1 + 0x60),1);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  return;
}


