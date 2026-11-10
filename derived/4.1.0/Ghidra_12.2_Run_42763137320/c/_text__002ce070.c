/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce070; name: FUN_.text__002ce070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ce070(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a2888 + 0x10;
  lVar1 = _DAT_008a2888 + 0xa8;
  param_1[9] = _DAT_008a2888 + 0x68;
  param_1[10] = lVar1;
  pcVar3 = (code *)param_1[0x3f];
  *param_1 = lVar2;
  if (pcVar3 != (code *)0x0) {
    param_1[0x41] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    (*pcVar3)(param_1 + 0x42);
  }
  pcVar3 = (code *)param_1[0x2f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (*pcVar3)(param_1 + 0x32);
  }
  param_1[0xc] = _DAT_0089f718 + 0x10;
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0;
    pcVar3 = (code *)param_1[0x1f];
  }
  else {
    FUN__text__005d9290();
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar3)(param_1 + 0x22);
  }
  pcVar3 = (code *)param_1[0xf];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar3)(param_1 + 0x12);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
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


