/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00128770; name: FUN_.text__00128770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00128770(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = _DAT_0089f9f8;
  lVar1 = param_1[0x9b];
  param_1[0x9b] = 0;
  *param_1 = lVar2 + 0x10;
  if (lVar1 != 0) {
    FUN__text__00129950(param_1 + 0x9c);
  }
  lVar2 = param_1[0x97];
  param_1[0x97] = 0;
  if (lVar2 != 0) {
    FUN__text__00129950(param_1 + 0x98);
  }
  lVar2 = param_1[0x91];
  param_1[0x91] = 0;
  if (lVar2 != 0) {
    uVar3 = param_1[0x93];
    if (0x20067 < uVar3) {
      uVar3 = uVar3 / 0x20068;
      lVar1 = lVar2;
      do {
        FUN__text__003cf1a0(lVar1);
        uVar3 = uVar3 - 1;
        lVar1 = lVar1 + 0x20068;
      } while (uVar3 != 0);
      uVar3 = param_1[0x93];
    }
    (**(code **)(*(long *)param_1[0x92] + 0x18))((long *)param_1[0x92],lVar2,uVar3,param_1[0x94]);
  }
  if (param_1[0x90] != 0) {
    (**(code **)(*(long *)(param_1[0x90] + 0x48) + 0x18))();
    param_1[0x90] = 0;
  }
  if (param_1[0x8f] != 0) {
    (**(code **)(*(long *)(param_1[0x8f] + 0x48) + 0x18))();
    param_1[0x8f] = 0;
  }
  if (param_1[0x8e] != 0) {
    (**(code **)(*(long *)(param_1[0x8e] + 0x48) + 0x18))();
    param_1[0x8e] = 0;
  }
  if (param_1[0x8d] != 0) {
    (**(code **)(*(long *)(param_1[0x8d] + 0x48) + 0x18))();
    param_1[0x8d] = 0;
  }
  if (param_1[0x8c] != 0) {
    (**(code **)(*(long *)(param_1[0x8c] + 0x48) + 0x18))();
    param_1[0x8c] = 0;
  }
  if (param_1[0x8b] != 0) {
    (**(code **)(*(long *)(param_1[0x8b] + 0x48) + 0x18))();
    param_1[0x8b] = 0;
  }
  if (param_1[0x8a] != 0) {
    (**(code **)(*(long *)(param_1[0x8a] + 0x48) + 0x18))();
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)(param_1[0x89] + 0x48) + 0x18))();
    param_1[0x89] = 0;
  }
  if (param_1[0x88] != 0) {
    (**(code **)(*(long *)(param_1[0x88] + 0x48) + 0x18))();
    param_1[0x88] = 0;
  }
  if (param_1[0x87] != 0) {
    (**(code **)(*(long *)(param_1[0x87] + 0x48) + 0x18))();
    param_1[0x87] = 0;
  }
  puVar5 = (undefined8 *)param_1[0x83];
  param_1[0x83] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = param_1[0x85];
    if (0x65f < uVar3) {
      uVar3 = uVar3 / 0x660;
      puVar6 = puVar5;
      do {
        (**(code **)*puVar6)(puVar6);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 0xcc;
      } while (uVar3 != 0);
      uVar3 = param_1[0x85];
    }
    (**(code **)(*(long *)param_1[0x84] + 0x18))((long *)param_1[0x84],puVar5,uVar3,param_1[0x86]);
  }
  puVar5 = (undefined8 *)param_1[0x7f];
  param_1[0x7f] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = param_1[0x81];
    if (0x65f < uVar3) {
      uVar3 = uVar3 / 0x660;
      puVar6 = puVar5;
      do {
        (**(code **)*puVar6)(puVar6);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 0xcc;
      } while (uVar3 != 0);
      uVar3 = param_1[0x81];
    }
    (**(code **)(*(long *)param_1[0x80] + 0x18))((long *)param_1[0x80],puVar5,uVar3,param_1[0x82]);
  }
  puVar5 = (undefined8 *)param_1[0x7b];
  param_1[0x7b] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = param_1[0x7d];
    if (0x66f < uVar3) {
      uVar3 = uVar3 / 0x670;
      puVar6 = puVar5;
      do {
        (**(code **)*puVar6)(puVar6);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 0xce;
      } while (uVar3 != 0);
      uVar3 = param_1[0x7d];
    }
    (**(code **)(*(long *)param_1[0x7c] + 0x18))((long *)param_1[0x7c],puVar5,uVar3,param_1[0x7e]);
  }
  if (param_1[0x7a] != 0) {
    (**(code **)(*(long *)(param_1[0x7a] + 0x48) + 0x18))();
    param_1[0x7a] = 0;
  }
  param_1[0x58] = 0x869490;
  if (param_1[0x59] == 0) {
    param_1[0x59] = 0;
    pcVar4 = (code *)param_1[0x6b];
  }
  else {
    FUN__text__005d9290(param_1[0x59],param_1 + 0x58);
    lVar2 = param_1[0x59];
    param_1[0x59] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x6b];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar4)(param_1 + 0x6e);
  }
  pcVar4 = (code *)param_1[0x5b];
  if (pcVar4 != (code *)0x0) {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar4)(param_1 + 0x5e);
  }
  if (param_1[0x59] != 0) {
    (**(code **)(*(long *)(param_1[0x59] + 0x48) + 0x18))();
    param_1[0x59] = 0;
  }
  if (param_1[0x56] != 0) {
    (**(code **)(*(long *)(param_1[0x56] + 0x48) + 0x18))();
    param_1[0x56] = 0;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)(param_1[0x38] + 0x48) + 0x18))();
    param_1[0x38] = 0;
  }
  param_1[0x16] = _DAT_0089f820 + 0x10;
  if (param_1[0x17] == 0) {
    param_1[0x17] = 0;
    pcVar4 = (code *)param_1[0x29];
  }
  else {
    FUN__text__005d9290();
    lVar2 = param_1[0x17];
    param_1[0x17] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x29];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar4)(param_1 + 0x2c);
  }
  pcVar4 = (code *)param_1[0x19];
  if (pcVar4 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar4)(param_1 + 0x1c);
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  if ((param_1[0xe] != 0) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  param_1[0xd] = 0x70f683;
  param_1[0xe] = 0;
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((param_1[8] != 0) && (param_1[5] != 0)) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
  }
  param_1[5] = 0;
  param_1[6] = -0x340d631b7bddd9bb;
  param_1[7] = 0x70f683;
  param_1[8] = 0;
  if (param_1[9] != 0) {
    (**(code **)(*(long *)(param_1[9] + 0x48) + 0x18))();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


