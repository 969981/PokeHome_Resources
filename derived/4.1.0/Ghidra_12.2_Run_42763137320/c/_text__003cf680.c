/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf680; name: FUN_.text__003cf680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cf680(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_0089f718;
  *param_1 = _DAT_008a3720 + 0x10;
  param_1[0x46] = lVar2 + 0x10;
  if (param_1[0x47] == 0) {
    param_1[0x47] = 0;
    pcVar3 = (code *)param_1[0x59];
  }
  else {
    FUN__text__005d9290(param_1[0x47],param_1 + 0x46);
    lVar1 = param_1[0x47];
    param_1[0x47] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x59];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar3)(param_1 + 0x5c);
  }
  pcVar3 = (code *)param_1[0x49];
  if (pcVar3 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar3)(param_1 + 0x4c);
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)(param_1[0x47] + 0x48) + 0x18))();
    param_1[0x47] = 0;
  }
  param_1[0x24] = lVar2 + 0x10;
  if (param_1[0x25] == 0) {
    param_1[0x25] = 0;
    pcVar3 = (code *)param_1[0x37];
  }
  else {
    FUN__text__005d9290(param_1[0x25],param_1 + 0x24);
    lVar1 = param_1[0x25];
    param_1[0x25] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x37];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar3)(param_1 + 0x3a);
  }
  pcVar3 = (code *)param_1[0x27];
  if (pcVar3 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar3)(param_1 + 0x2a);
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  param_1[2] = lVar2 + 0x10;
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar3 = (code *)param_1[0x15];
  }
  else {
    FUN__text__005d9290();
    lVar2 = param_1[3];
    param_1[3] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x15];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar3)(param_1 + 0x18);
  }
  pcVar3 = (code *)param_1[5];
  if (pcVar3 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar3)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


