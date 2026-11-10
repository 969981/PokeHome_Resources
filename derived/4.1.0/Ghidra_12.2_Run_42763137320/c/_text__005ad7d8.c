/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ad7d8; name: FUN_.text__005ad7d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ad7d8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a5790;
  *param_1 = _DAT_008a5790 + 0x10;
  param_1[9] = lVar1 + 0x90;
  param_1[0xb] = lVar1 + 0xc0;
  FUN__text__005b509c(param_1 + 0x28);
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  lVar1 = _DAT_008a5760 + 0x90;
  lVar2 = _DAT_008a5760 + 0xc0;
  *param_1 = _DAT_008a5760 + 0x10;
  param_1[9] = lVar1;
  param_1[0xb] = lVar2;
  FUN__text__005b2670(param_1 + 0xd);
  return;
}


