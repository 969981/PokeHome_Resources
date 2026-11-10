/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d84d4; name: FUN_.text__005d84d4
 */


void FUN__text__005d84d4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x108) == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 0x100) + *(long *)(param_2 + 0x108) * 8 + -8);
    *param_1 = lVar1;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005d84f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}


