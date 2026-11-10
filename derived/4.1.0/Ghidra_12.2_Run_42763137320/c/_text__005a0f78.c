/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0f78; name: FUN_.text__005a0f78
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a0f78(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)*_DAT_008a0300 * 0x70;
  param_1 = param_1 + lVar1;
  FUN__text__006ed284(*(long *)(param_2 + 0x58) + (long)*_DAT_008a0300 * 0x168,param_1 + 0x58,0,
                      param_3 + lVar1 + 0x58,0,
                      (long)*(int *)(param_1 + 0xc4) * (long)*(int *)(param_1 + 0xc0));
  return;
}


