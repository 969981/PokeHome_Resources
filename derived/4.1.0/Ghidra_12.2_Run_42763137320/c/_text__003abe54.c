/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003abe54; name: FUN_.text__003abe54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003abe54(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = _DAT_008a3558;
  param_1[-9] = _DAT_008a3558 + 0x10;
  *param_1 = lVar1 + 0x100;
  param_1[1] = lVar1 + 0x140;
  FUN__text__003ac128(param_1 + 0x33);
  pcVar2 = (code *)param_1[0x24];
  if (pcVar2 != (code *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    (*pcVar2)(param_1 + 0x27);
  }
  param_1[-9] = 0x881758;
  *param_1 = 0x881848;
  param_1[1] = 0x881888;
  if (param_1[10] != 0) {
    (**(code **)(*(long *)(param_1[10] + 0x48) + 0x18))();
    param_1[10] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  param_1[-9] = 0x867b90;
  *param_1 = 0x867bd0;
  param_1[1] = 0x867c10;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


