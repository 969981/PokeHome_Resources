/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215fb0; name: FUN_.text__00215fb0
 */


undefined4 FUN__text__00215fb0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x28) != 0xc) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x28) != 0xb) {
    uVar1 = uVar2;
  }
  return uVar1;
}


