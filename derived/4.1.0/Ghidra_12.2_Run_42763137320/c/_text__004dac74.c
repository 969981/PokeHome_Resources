/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dac74; name: FUN_.text__004dac74
 */


void FUN__text__004dac74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  if (lVar1 == 0) {
    return;
  }
  FUN__text__0041b310(param_1 + 0x10,param_2 + 4,lVar1);
  return;
}


