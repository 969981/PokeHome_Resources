/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006846ec; name: FUN_.text__006846ec
 */


void FUN__text__006846ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN__text__006799cc(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  return;
}


