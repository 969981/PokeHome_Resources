/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7160; name: FUN_.text__003b7160
 */


int FUN__text__003b7160(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    return *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + -1;
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  return *(int *)(param_1 + 8) + ~(*piVar1 * *(int *)(param_1 + 0xc));
}


