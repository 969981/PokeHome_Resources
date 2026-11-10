/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8a38; name: FUN_.text__006a8a38
 */


uint FUN__text__006a8a38(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN__text__006a2180();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,param_3);
  }
  return uVar1 & 1;
}


