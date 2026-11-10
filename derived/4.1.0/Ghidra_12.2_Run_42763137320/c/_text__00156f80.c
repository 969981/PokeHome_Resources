/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156f80; name: FUN_.text__00156f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00156f80(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a0370 + 0x48;
  *param_1 = _DAT_008a0370 + 0x10;
  param_1[9] = lVar1;
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    if (param_1[0xb] != 0) {
      (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
      param_1[0xb] = 0;
    }
  }
  return;
}


