/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f5e5c; name: FUN_.text__004f5e5c
 */


undefined8 FUN__text__004f5e5c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  FUN__text__004eb8dc();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = FUN__text__004e8f94(param_1,param_3,param_2,param_4 & 1);
    return uVar1;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
  return 1;
}


