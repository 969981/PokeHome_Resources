/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650f00; name: FUN_.text__00650f00
 */


undefined8 FUN__text__00650f00(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x30);
  }
  else {
    FUN__text__00667a44(param_1,5,2);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x30);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN__text__00667a8c(param_1,5);
    }
  }
  return uVar1;
}


