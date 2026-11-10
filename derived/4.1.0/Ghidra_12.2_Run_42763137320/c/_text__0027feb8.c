/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027feb8; name: FUN_.text__0027feb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0027feb8(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a1578 + 0xf0;
  lVar1 = _DAT_008a1578 + 0x130;
  *param_1 = _DAT_008a1578 + 0x10;
  param_1[9] = lVar2;
  param_1[10] = lVar1;
  if (param_1[0x1c6] != 0) {
    (**(code **)(*(long *)(param_1[0x1c6] + 0x48) + 0x18))();
    param_1[0x1c6] = 0;
  }
  if (param_1[0x1c5] != 0) {
    (**(code **)(*(long *)(param_1[0x1c5] + 0x48) + 0x18))();
    param_1[0x1c5] = 0;
  }
  if (param_1[0x1c4] != 0) {
    (**(code **)(*(long *)(param_1[0x1c4] + 0x48) + 0x18))();
    param_1[0x1c4] = 0;
  }
  if (param_1[0x1c3] != 0) {
    (**(code **)(*(long *)(param_1[0x1c3] + 0x48) + 0x18))();
    param_1[0x1c3] = 0;
  }
  if (param_1[0x1c2] != 0) {
    (**(code **)(*(long *)(param_1[0x1c2] + 0x48) + 0x18))();
    param_1[0x1c2] = 0;
  }
  if (param_1[0x1c1] != 0) {
    (**(code **)(*(long *)(param_1[0x1c1] + 0x48) + 0x18))();
    param_1[0x1c1] = 0;
  }
  lVar2 = param_1[0x1c0];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b8) + 0x18))(lVar2 + 0x3b8);
    param_1[0x1c0] = 0;
  }
  param_1[0x19e] = 0x867958;
  if (param_1[0x19f] == 0) {
    param_1[0x19f] = 0;
    pcVar3 = (code *)param_1[0x1b1];
  }
  else {
    FUN__text__005d9290(param_1[0x19f],param_1 + 0x19e);
    lVar2 = param_1[0x19f];
    param_1[0x19f] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1b1];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x1b3] = 0;
    param_1[0x1b2] = 0;
    param_1[0x1b1] = 0;
    param_1[0x1b0] = 0;
    (*pcVar3)(param_1 + 0x1b4);
  }
  pcVar3 = (code *)param_1[0x1a1];
  if (pcVar3 != (code *)0x0) {
    param_1[0x1a3] = 0;
    param_1[0x1a2] = 0;
    param_1[0x1a1] = 0;
    param_1[0x1a0] = 0;
    (*pcVar3)(param_1 + 0x1a4);
  }
  if (param_1[0x19f] != 0) {
    (**(code **)(*(long *)(param_1[0x19f] + 0x48) + 0x18))();
    param_1[0x19f] = 0;
  }
  param_1[0x17c] = 0x867958;
  if (param_1[0x17d] == 0) {
    param_1[0x17d] = 0;
    pcVar3 = (code *)param_1[399];
  }
  else {
    FUN__text__005d9290(param_1[0x17d],param_1 + 0x17c);
    lVar2 = param_1[0x17d];
    param_1[0x17d] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[399];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x191] = 0;
    param_1[400] = 0;
    param_1[399] = 0;
    param_1[0x18e] = 0;
    (*pcVar3)(param_1 + 0x192);
  }
  pcVar3 = (code *)param_1[0x17f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x181] = 0;
    param_1[0x180] = 0;
    param_1[0x17f] = 0;
    param_1[0x17e] = 0;
    (*pcVar3)(param_1 + 0x182);
  }
  if (param_1[0x17d] != 0) {
    (**(code **)(*(long *)(param_1[0x17d] + 0x48) + 0x18))();
    param_1[0x17d] = 0;
  }
  param_1[0x15a] = 0x867958;
  if (param_1[0x15b] == 0) {
    param_1[0x15b] = 0;
    pcVar3 = (code *)param_1[0x16d];
  }
  else {
    FUN__text__005d9290(param_1[0x15b],param_1 + 0x15a);
    lVar2 = param_1[0x15b];
    param_1[0x15b] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x16d];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x16f] = 0;
    param_1[0x16e] = 0;
    param_1[0x16d] = 0;
    param_1[0x16c] = 0;
    (*pcVar3)(param_1 + 0x170);
  }
  pcVar3 = (code *)param_1[0x15d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x15f] = 0;
    param_1[0x15e] = 0;
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
    (*pcVar3)(param_1 + 0x160);
  }
  if (param_1[0x15b] != 0) {
    (**(code **)(*(long *)(param_1[0x15b] + 0x48) + 0x18))();
    param_1[0x15b] = 0;
  }
  FUN__text__00175e50(param_1 + 0xbf);
  param_1[0xba] = _DAT_008a04f8 + 0x10;
  FUN__text__001257d8(param_1);
  return;
}


