/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a7830; name: FUN_.text__003a7830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003a7830(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_008a34f0 + 0x10;
  lVar2 = _DAT_008a34f0 + 0x168;
  *param_1 = _DAT_008a34f0 + 0x128;
  param_1[1] = lVar2;
  pcVar3 = (code *)param_1[0x10];
  param_1[-9] = lVar1;
  if (pcVar3 != (code *)0x0) {
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    (*pcVar3)(param_1 + 0x13);
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


