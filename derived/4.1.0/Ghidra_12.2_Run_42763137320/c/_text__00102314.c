/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00102314; name: FUN_.text__00102314
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00102314(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_0089f4a8;
  param_1[0x1ba] = _DAT_0089f4a8 + 0x10;
  if (param_1[0x1bb] == 0) {
    param_1[0x1bb] = 0;
    pcVar3 = (code *)param_1[0x1cd];
  }
  else {
    FUN__text__005d9290(param_1[0x1bb],param_1 + 0x1ba);
    lVar1 = param_1[0x1bb];
    param_1[0x1bb] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1cd];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x1cf] = 0;
    param_1[0x1ce] = 0;
    param_1[0x1cd] = 0;
    param_1[0x1cc] = 0;
    (*pcVar3)(param_1 + 0x1d0);
  }
  pcVar3 = (code *)param_1[0x1bd];
  if (pcVar3 != (code *)0x0) {
    param_1[0x1bf] = 0;
    param_1[0x1be] = 0;
    param_1[0x1bd] = 0;
    param_1[0x1bc] = 0;
    (*pcVar3)(param_1 + 0x1c0);
  }
  if (param_1[0x1bb] != 0) {
    (**(code **)(*(long *)(param_1[0x1bb] + 0x48) + 0x18))();
    param_1[0x1bb] = 0;
  }
  param_1[0x198] = lVar2 + 0x10;
  if (param_1[0x199] == 0) {
    param_1[0x199] = 0;
    pcVar3 = (code *)param_1[0x1ab];
  }
  else {
    FUN__text__005d9290(param_1[0x199],param_1 + 0x198);
    lVar1 = param_1[0x199];
    param_1[0x199] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1ab];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x1ad] = 0;
    param_1[0x1ac] = 0;
    param_1[0x1ab] = 0;
    param_1[0x1aa] = 0;
    (*pcVar3)(param_1 + 0x1ae);
  }
  pcVar3 = (code *)param_1[0x19b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x19d] = 0;
    param_1[0x19c] = 0;
    param_1[0x19b] = 0;
    param_1[0x19a] = 0;
    (*pcVar3)(param_1 + 0x19e);
  }
  if (param_1[0x199] != 0) {
    (**(code **)(*(long *)(param_1[0x199] + 0x48) + 0x18))();
    param_1[0x199] = 0;
  }
  param_1[0x176] = lVar2 + 0x10;
  if (param_1[0x177] == 0) {
    param_1[0x177] = 0;
    pcVar3 = (code *)param_1[0x189];
  }
  else {
    FUN__text__005d9290(param_1[0x177],param_1 + 0x176);
    lVar1 = param_1[0x177];
    param_1[0x177] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x189];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x18b] = 0;
    param_1[0x18a] = 0;
    param_1[0x189] = 0;
    param_1[0x188] = 0;
    (*pcVar3)(param_1 + 0x18c);
  }
  pcVar3 = (code *)param_1[0x179];
  if (pcVar3 != (code *)0x0) {
    param_1[0x17b] = 0;
    param_1[0x17a] = 0;
    param_1[0x179] = 0;
    param_1[0x178] = 0;
    (*pcVar3)(param_1 + 0x17c);
  }
  if (param_1[0x177] != 0) {
    (**(code **)(*(long *)(param_1[0x177] + 0x48) + 0x18))();
    param_1[0x177] = 0;
  }
  param_1[0x154] = lVar2 + 0x10;
  if (param_1[0x155] == 0) {
    param_1[0x155] = 0;
    pcVar3 = (code *)param_1[0x167];
  }
  else {
    FUN__text__005d9290(param_1[0x155],param_1 + 0x154);
    lVar1 = param_1[0x155];
    param_1[0x155] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x167];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x169] = 0;
    param_1[0x168] = 0;
    param_1[0x167] = 0;
    param_1[0x166] = 0;
    (*pcVar3)(param_1 + 0x16a);
  }
  pcVar3 = (code *)param_1[0x157];
  if (pcVar3 != (code *)0x0) {
    param_1[0x159] = 0;
    param_1[0x158] = 0;
    param_1[0x157] = 0;
    param_1[0x156] = 0;
    (*pcVar3)(param_1 + 0x15a);
  }
  if (param_1[0x155] != 0) {
    (**(code **)(*(long *)(param_1[0x155] + 0x48) + 0x18))();
    param_1[0x155] = 0;
  }
  param_1[0x132] = lVar2 + 0x10;
  if (param_1[0x133] == 0) {
    param_1[0x133] = 0;
    pcVar3 = (code *)param_1[0x145];
  }
  else {
    FUN__text__005d9290(param_1[0x133],param_1 + 0x132);
    lVar1 = param_1[0x133];
    param_1[0x133] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x145];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x147] = 0;
    param_1[0x146] = 0;
    param_1[0x145] = 0;
    param_1[0x144] = 0;
    (*pcVar3)(param_1 + 0x148);
  }
  pcVar3 = (code *)param_1[0x135];
  if (pcVar3 != (code *)0x0) {
    param_1[0x137] = 0;
    param_1[0x136] = 0;
    param_1[0x135] = 0;
    param_1[0x134] = 0;
    (*pcVar3)(param_1 + 0x138);
  }
  if (param_1[0x133] != 0) {
    (**(code **)(*(long *)(param_1[0x133] + 0x48) + 0x18))();
    param_1[0x133] = 0;
  }
  param_1[0x110] = lVar2 + 0x10;
  if (param_1[0x111] == 0) {
    param_1[0x111] = 0;
    pcVar3 = (code *)param_1[0x123];
  }
  else {
    FUN__text__005d9290(param_1[0x111],param_1 + 0x110);
    lVar1 = param_1[0x111];
    param_1[0x111] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x123];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x125] = 0;
    param_1[0x124] = 0;
    param_1[0x123] = 0;
    param_1[0x122] = 0;
    (*pcVar3)(param_1 + 0x126);
  }
  pcVar3 = (code *)param_1[0x113];
  if (pcVar3 != (code *)0x0) {
    param_1[0x115] = 0;
    param_1[0x114] = 0;
    param_1[0x113] = 0;
    param_1[0x112] = 0;
    (*pcVar3)(param_1 + 0x116);
  }
  if (param_1[0x111] != 0) {
    (**(code **)(*(long *)(param_1[0x111] + 0x48) + 0x18))();
    param_1[0x111] = 0;
  }
  param_1[0xee] = lVar2 + 0x10;
  if (param_1[0xef] == 0) {
    param_1[0xef] = 0;
    pcVar3 = (code *)param_1[0x101];
  }
  else {
    FUN__text__005d9290(param_1[0xef],param_1 + 0xee);
    lVar1 = param_1[0xef];
    param_1[0xef] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x101];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x103] = 0;
    param_1[0x102] = 0;
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    (*pcVar3)(param_1 + 0x104);
  }
  pcVar3 = (code *)param_1[0xf1];
  if (pcVar3 != (code *)0x0) {
    param_1[0xf3] = 0;
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
    param_1[0xf0] = 0;
    (*pcVar3)(param_1 + 0xf4);
  }
  if (param_1[0xef] != 0) {
    (**(code **)(*(long *)(param_1[0xef] + 0x48) + 0x18))();
    param_1[0xef] = 0;
  }
  param_1[0xcc] = lVar2 + 0x10;
  if (param_1[0xcd] == 0) {
    param_1[0xcd] = 0;
    pcVar3 = (code *)param_1[0xdf];
  }
  else {
    FUN__text__005d9290(param_1[0xcd],param_1 + 0xcc);
    lVar1 = param_1[0xcd];
    param_1[0xcd] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0xdf];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
    param_1[0xdf] = 0;
    param_1[0xde] = 0;
    (*pcVar3)(param_1 + 0xe2);
  }
  pcVar3 = (code *)param_1[0xcf];
  if (pcVar3 != (code *)0x0) {
    param_1[0xd1] = 0;
    param_1[0xd0] = 0;
    param_1[0xcf] = 0;
    param_1[0xce] = 0;
    (*pcVar3)(param_1 + 0xd2);
  }
  if (param_1[0xcd] != 0) {
    (**(code **)(*(long *)(param_1[0xcd] + 0x48) + 0x18))();
    param_1[0xcd] = 0;
  }
  param_1[0xaa] = lVar2 + 0x10;
  if (param_1[0xab] == 0) {
    param_1[0xab] = 0;
    pcVar3 = (code *)param_1[0xbd];
  }
  else {
    FUN__text__005d9290(param_1[0xab],param_1 + 0xaa);
    lVar1 = param_1[0xab];
    param_1[0xab] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0xbd];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0xbf] = 0;
    param_1[0xbe] = 0;
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    (*pcVar3)(param_1 + 0xc0);
  }
  pcVar3 = (code *)param_1[0xad];
  if (pcVar3 != (code *)0x0) {
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    (*pcVar3)(param_1 + 0xb0);
  }
  if (param_1[0xab] != 0) {
    (**(code **)(*(long *)(param_1[0xab] + 0x48) + 0x18))();
    param_1[0xab] = 0;
  }
  param_1[0x88] = lVar2 + 0x10;
  if (param_1[0x89] == 0) {
    param_1[0x89] = 0;
    pcVar3 = (code *)param_1[0x9b];
  }
  else {
    FUN__text__005d9290(param_1[0x89],param_1 + 0x88);
    lVar1 = param_1[0x89];
    param_1[0x89] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x9b];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    param_1[0x9b] = 0;
    param_1[0x9a] = 0;
    (*pcVar3)(param_1 + 0x9e);
  }
  pcVar3 = (code *)param_1[0x8b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    (*pcVar3)(param_1 + 0x8e);
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)(param_1[0x89] + 0x48) + 0x18))();
    param_1[0x89] = 0;
  }
  param_1[0x66] = lVar2 + 0x10;
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
  param_1[0x22] = 0x8675a8;
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


