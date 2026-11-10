/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00304af0; name: FUN_.text__00304af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00304af0(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a2a18 + 0x48;
  param_1[-9] = _DAT_008a2a18 + 0x10;
  *param_1 = lVar1;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


