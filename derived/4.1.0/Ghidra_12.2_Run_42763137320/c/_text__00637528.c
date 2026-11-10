/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637528; name: FUN_.text__00637528
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00637528(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN__text__00630734();
  lVar1 = _DAT_008a62f8 + 0x48;
  *param_1 = _DAT_008a62f8 + 0x10;
  param_1[9] = lVar1;
  FUN__text__00631018(param_1,param_3);
  return;
}


