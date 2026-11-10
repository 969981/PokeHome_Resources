/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3820; name: FUN_.text__003c3820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c3820(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = _DAT_008a3698 + 0x10;
  lVar1 = _DAT_008a3698 + 0xe0;
  lVar2 = _DAT_008a3698 + 0x120;
  param_1[0xc] = _DAT_008a3698 + 0x148;
  pcVar4 = (code *)param_1[0x45];
  *param_1 = lVar3;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (pcVar4 != (code *)0x0) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    (*pcVar4)(param_1 + 0x48);
  }
  if (param_1[0x43] != 0) {
    (**(code **)(*(long *)(param_1[0x43] + 0x48) + 0x18))();
    param_1[0x43] = 0;
  }
  param_1[0x1e] = _DAT_0089f6b8 + 0x10;
  if (param_1[0x1f] == 0) {
    param_1[0x1f] = 0;
    pcVar4 = (code *)param_1[0x31];
  }
  else {
    FUN__text__005d9290();
    lVar3 = param_1[0x1f];
    param_1[0x1f] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x31];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar4)(param_1 + 0x34);
  }
  pcVar4 = (code *)param_1[0x21];
  if (pcVar4 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar4)(param_1 + 0x24);
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
    param_1[0x1a] = 0;
  }
  if (param_1[0x18] != 0) {
    (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
    param_1[0x18] = 0;
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
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
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


