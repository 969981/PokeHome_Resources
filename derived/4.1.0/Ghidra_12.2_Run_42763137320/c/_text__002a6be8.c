/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a6be8; name: FUN_.text__002a6be8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a6be8(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_0089f710;
  param_1[0x66] = _DAT_0089f710 + 0x10;
  if (param_1[0x67] == 0) {
    param_1[0x67] = 0;
    pcVar3 = (code *)param_1[0x79];
  }
  else {
    FUN__text__005d9290(param_1[0x67],param_1 + 0x66);
    lVar1 = param_1[0x67];
    param_1[0x67] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x79];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    (*pcVar3)(param_1 + 0x7c);
  }
  pcVar3 = (code *)param_1[0x69];
  if (pcVar3 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar3)(param_1 + 0x6c);
  }
  if (param_1[0x67] != 0) {
    (**(code **)(*(long *)(param_1[0x67] + 0x48) + 0x18))();
    param_1[0x67] = 0;
  }
  param_1[0x44] = lVar2 + 0x10;
  if (param_1[0x45] == 0) {
    param_1[0x45] = 0;
    pcVar3 = (code *)param_1[0x57];
  }
  else {
    FUN__text__005d9290(param_1[0x45],param_1 + 0x44);
    lVar1 = param_1[0x45];
    param_1[0x45] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x57];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar3)(param_1 + 0x5a);
  }
  pcVar3 = (code *)param_1[0x47];
  if (pcVar3 != (code *)0x0) {
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    (*pcVar3)(param_1 + 0x4a);
  }
  if (param_1[0x45] != 0) {
    (**(code **)(*(long *)(param_1[0x45] + 0x48) + 0x18))();
    param_1[0x45] = 0;
  }
  param_1[0x22] = lVar2 + 0x10;
  if (param_1[0x23] == 0) {
    param_1[0x23] = 0;
    pcVar3 = (code *)param_1[0x35];
  }
  else {
    FUN__text__005d9290(param_1[0x23],param_1 + 0x22);
    lVar1 = param_1[0x23];
    param_1[0x23] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x35];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar3)(param_1 + 0x38);
  }
  pcVar3 = (code *)param_1[0x25];
  if (pcVar3 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar3)(param_1 + 0x28);
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  *param_1 = lVar2 + 0x10;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    pcVar3 = (code *)param_1[0x13];
  }
  else {
    FUN__text__005d9290(param_1[1],param_1);
    lVar2 = param_1[1];
    param_1[1] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x13];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar3)(param_1 + 0x16);
  }
  pcVar3 = (code *)param_1[3];
  if (pcVar3 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar3)(param_1 + 6);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


