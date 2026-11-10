/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011c458; name: FUN_.text__0011c458
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011c458(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = _DAT_0089fda0 + 0x58;
  lVar2 = _DAT_0089fda0 + 0x98;
  *param_1 = _DAT_0089fda0 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x3a] != 0) {
    (**(code **)(*(long *)(param_1[0x3a] + 0x48) + 0x18))();
    param_1[0x3a] = 0;
  }
  if (param_1[0x39] != 0) {
    (**(code **)(*(long *)(param_1[0x39] + 0x48) + 0x18))();
    param_1[0x39] = 0;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)(param_1[0x38] + 0x48) + 0x18))();
    param_1[0x38] = 0;
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
    param_1[0x37] = 0;
  }
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
    param_1[0x36] = 0;
  }
  if (param_1[0x35] != 0) {
    (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
    param_1[0x35] = 0;
  }
  if (param_1[0x34] != 0) {
    (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
    param_1[0x34] = 0;
  }
  if (param_1[0x33] != 0) {
    (**(code **)(*(long *)(param_1[0x33] + 0x48) + 0x18))();
    param_1[0x33] = 0;
  }
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  puVar3 = (undefined8 *)param_1[0x18];
  param_1[0x18] = 0;
  param_1[0xc] = 0x8677e8;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],puVar3,param_1[0x1a],param_1[0x1b]);
  }
  puVar3 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],puVar3,param_1[0x16],param_1[0x17]);
  }
  puVar3 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],puVar3,param_1[0x12],param_1[0x13]);
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


