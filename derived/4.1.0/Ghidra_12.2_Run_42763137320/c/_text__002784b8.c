/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002784b8; name: FUN_.text__002784b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002784b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a1ed8 + 0x78;
  lVar2 = _DAT_008a1ed8 + 0xb8;
  *param_1 = _DAT_008a1ed8 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  FUN__text__001256f4(param_1);
  return;
}


