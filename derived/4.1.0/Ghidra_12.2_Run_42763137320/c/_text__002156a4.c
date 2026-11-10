/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002156a4; name: FUN_.text__002156a4
 */


uint FUN__text__002156a4(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  return uVar1 % 1000000;
}


