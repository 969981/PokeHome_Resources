/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a4810; name: FUN_.text__003a4810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003a4810(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a34d0 + 0x140;
  lVar2 = _DAT_008a34d0 + 0x180;
  *param_1 = _DAT_008a34d0 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x45] != 0) {
    (**(code **)(*(long *)(param_1[0x45] + 0x48) + 0x18))();
    param_1[0x45] = 0;
  }
  if (param_1[0x41] != 0) {
    (**(code **)(*(long *)(param_1[0x41] + 0x48) + 0x18))();
    param_1[0x41] = 0;
  }
  if (param_1[0x3d] != 0) {
    (**(code **)(*(long *)(param_1[0x3d] + 0x48) + 0x18))();
    param_1[0x3d] = 0;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)(param_1[0x38] + 0x48) + 0x18))();
    param_1[0x38] = 0;
  }
  if (param_1[0x34] != 0) {
    (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
    param_1[0x34] = 0;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(*(long *)(param_1[0x30] + 0x48) + 0x18))();
    param_1[0x30] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  *param_1 = 0x881758;
  param_1[9] = 0x881848;
  param_1[10] = 0x881888;
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


