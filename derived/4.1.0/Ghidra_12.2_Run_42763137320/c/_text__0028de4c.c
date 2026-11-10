/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028de4c; name: FUN_.text__0028de4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028de4c(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a2058 + 0x10;
  lVar1 = _DAT_008a2058 + 0x140;
  param_1[9] = _DAT_008a2058 + 0x100;
  param_1[10] = lVar1;
  pcVar3 = (code *)param_1[0x2f];
  *param_1 = lVar2;
  if (pcVar3 != (code *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (*pcVar3)(param_1 + 0x32);
  }
  pcVar3 = (code *)param_1[0x1f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar3)(param_1 + 0x22);
  }
  lVar2 = param_1[0x17];
  if (lVar2 != 0) {
    param_1[0x18] = lVar2;
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],lVar2,param_1[0x19] - lVar2,4);
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
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


