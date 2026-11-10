/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006544e8; name: FUN_.text__006544e8
 */


undefined8 FUN__text__006544e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    uVar1 = FUN__text__00656948(2,*(long *)(param_1 + 0x20) + 4,param_2,param_3);
    return uVar1;
  }
  return 0;
}


