/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00276854; name: FUN_.text__00276854
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00276854(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a1ec8 + 0x78;
  lVar2 = _DAT_008a1ec8 + 0xb8;
  *param_1 = _DAT_008a1ec8 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  FUN__text__001256f4(param_1);
  return;
}


