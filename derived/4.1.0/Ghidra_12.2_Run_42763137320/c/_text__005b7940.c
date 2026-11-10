/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b7940; name: FUN_.text__005b7940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b7940(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  code *local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  undefined8 uStack_68;
  
  memset(&local_180,0,0x110);
  local_70 = 0;
  uStack_68 = 0x1ffffffffff;
  puVar4 = (undefined8 *)(param_1 + 0x110);
  uVar5 = 7;
  local_180 = _DAT_0089f4c8 + 0x10;
  do {
    lVar3 = local_178;
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
    }
    lVar1 = puVar4[-0x11];
    puVar4[-0x11] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)puVar4[-0xf];
    if (pcVar2 != (code *)0x0) {
      puVar4[-0xe] = 0;
      puVar4[-0xd] = 0;
      puVar4[-0x10] = 0;
      puVar4[-0xf] = 0;
      (*pcVar2)(puVar4 + -0xc);
    }
    if (local_160 != (code *)0x0) {
      (*local_160)(auStack_150,puVar4 + -0xc);
      puVar4[-0x10] = local_170;
      puVar4[-0xf] = local_168;
      puVar4[-0xe] = local_160;
      puVar4[-0xd] = uStack_158;
    }
    pcVar2 = (code *)puVar4[1];
    if (pcVar2 != (code *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      (*pcVar2)(puVar4 + 4);
    }
    if (local_e0 != (code *)0x0) {
      (*local_e0)(auStack_d0,puVar4 + 4);
      *puVar4 = local_f0;
      puVar4[1] = local_e8;
      puVar4[2] = local_e0;
      puVar4[3] = uStack_d8;
    }
    uVar5 = uVar5 - 1;
    puVar4[0x10] = local_70;
    puVar4[0x11] = uStack_68;
    puVar4 = puVar4 + 0x24;
  } while (1 < uVar5);
  local_180 = 0x867588;
  if (local_178 == 0) {
    local_178 = 0;
    pcVar2 = local_e8;
  }
  else {
    FUN__text__005d9290(local_178,&local_180);
    lVar3 = local_178;
    local_178 = 0;
    pcVar2 = local_e8;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      pcVar2 = local_e8;
    }
  }
  local_e8 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
  }
  pcVar2 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar2)(auStack_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_1 + 0x748);
  lVar1 = *(long *)(param_1 + 0x740);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x200;
    FUN__text__0014821c(lVar3);
  }
  *(long *)(param_1 + 0x748) = lVar1;
  FUN__text__005b510c(param_1);
  return;
}


