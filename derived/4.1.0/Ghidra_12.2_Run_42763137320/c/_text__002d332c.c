/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d332c; name: FUN_.text__002d332c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d332c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = _DAT_0089f718;
  lVar3 = _DAT_008a27c0 + 0x58;
  lVar1 = _DAT_008a27c0 + 0x98;
  *param_1 = _DAT_008a27c0 + 0x10;
  param_1[9] = lVar3;
  param_1[10] = lVar1;
  param_1[0x2e] = lVar2 + 0x10;
  if (param_1[0x2f] == 0) {
    param_1[0x2f] = 0;
    pcVar4 = (code *)param_1[0x41];
  }
  else {
    FUN__text__005d9290(param_1[0x2f],param_1 + 0x2e);
    lVar3 = param_1[0x2f];
    param_1[0x2f] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x41];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar4)(param_1 + 0x44);
  }
  pcVar4 = (code *)param_1[0x31];
  if (pcVar4 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar4)(param_1 + 0x34);
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)(param_1[0x2f] + 0x48) + 0x18))();
    param_1[0x2f] = 0;
  }
  param_1[0xc] = lVar2 + 0x10;
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0;
    pcVar4 = (code *)param_1[0x1f];
  }
  else {
    FUN__text__005d9290();
    lVar3 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x1f];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar4)(param_1 + 0x22);
  }
  pcVar4 = (code *)param_1[0xf];
  if (pcVar4 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar4)(param_1 + 0x12);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  lVar3 = _DAT_0089f7b0 + 0x50;
  lVar1 = _DAT_0089f7b0 + 0x90;
  *param_1 = _DAT_0089f7b0 + 0x10;
  param_1[9] = lVar3;
  param_1[10] = lVar1;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


