/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521214; name: FUN_.text__00521214
 */


void FUN__text__00521214(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    *param_2 = 0;
    uVar1 = *(uint *)(param_1 + 0x60);
  }
  else {
    *param_2 = **(undefined8 **)(param_1 + 0x58);
    uVar1 = *(uint *)(param_1 + 0x60);
  }
  if (uVar1 < 2) {
    *param_3 = 0;
    return;
  }
  *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  return;
}


