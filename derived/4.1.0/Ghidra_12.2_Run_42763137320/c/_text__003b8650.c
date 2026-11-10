/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8650; name: FUN_.text__003b8650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b8650(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a3538 + 0x68;
  lVar2 = _DAT_008a3538 + 0xa8;
  param_1[-10] = _DAT_008a3538 + 0x10;
  param_1[-1] = lVar1;
  *param_1 = lVar2;
  if (param_1[6] != 0) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  param_1[-10] = 0x8821c0;
  param_1[-1] = 0x882210;
  *param_1 = 0x882250;
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  param_1[-10] = 0x867b90;
  param_1[-1] = 0x867bd0;
  *param_1 = 0x867c10;
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


