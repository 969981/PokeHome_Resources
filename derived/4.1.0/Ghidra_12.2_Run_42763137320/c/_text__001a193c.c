/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a193c; name: FUN_.text__001a193c
 */


void FUN__text__001a193c(long param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x1bc) | 4) == 4) {
    uVar1 = *(uint *)(param_1 + 0x1c0);
  }
  else {
    FUN__text__001b9d20(*(undefined8 *)(param_1 + 0x68));
    uVar1 = *(uint *)(param_1 + 0x1c0);
  }
  if ((uVar1 | 4) == 4) {
    return;
  }
  FUN__text__001b9d20(*(undefined8 *)(param_1 + 0x88));
  return;
}


