/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c9c10; name: FUN_.text__003c9c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c9c10(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  long local_48;
  
  plVar5 = _DAT_0089f4f0;
  lVar3 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_168 = *(long *)(lVar3 + 0x98);
  local_170 = 0x867b70;
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
  }
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  if (*(code **)(lVar3 + 0xb0) != (code *)0x0) {
    (**(code **)(lVar3 + 0xb0))(lVar3 + 0xc0,auStack_140);
    local_160 = *(undefined8 *)(lVar3 + 0xa0);
    local_158 = *(code **)(lVar3 + 0xa8);
    local_150 = *(undefined8 *)(lVar3 + 0xb0);
    uStack_148 = *(undefined8 *)(lVar3 + 0xb8);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  if (*(code **)(lVar3 + 0x130) != (code *)0x0) {
    (**(code **)(lVar3 + 0x130))(lVar3 + 0x140,auStack_c0);
    local_e0 = *(undefined8 *)(lVar3 + 0x120);
    local_d8 = *(code **)(lVar3 + 0x128);
    local_d0 = *(undefined8 *)(lVar3 + 0x130);
    uStack_c8 = *(undefined8 *)(lVar3 + 0x138);
  }
  local_170 = 0x867b50;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(*plVar5 + 0x80);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x1a0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar2 = (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *param_2;
  local_48 = lVar3;
  if (lVar3 != 0) {
    uVar2 = (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_178 = lVar4;
  if (lVar4 == 0) {
    FUN__text__003c9fc0(uVar2,&local_48,&local_170,&local_178);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__003c9fc0(uVar2,&local_48,&local_170,&local_178);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  local_180 = *param_2;
  if (local_180 == 0) {
    FUN__text__003ca2a0(param_1,&local_180,&local_170,0x80);
    local_188 = *param_2;
  }
  else {
    plVar5 = (long *)(local_180 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__003ca2a0(param_1,&local_180,&local_170,0x80);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_188 = *param_2;
  }
  if (local_188 == 0) {
    uVar2 = FUN__text__003ca630(param_1,&local_188,&local_170);
    local_190 = *param_2;
  }
  else {
    plVar5 = (long *)(local_188 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__003ca630(param_1,&local_188,&local_170);
    uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
    local_190 = *param_2;
  }
  if (local_190 == 0) {
    FUN__text__003caa10(uVar2,&local_190,&local_170);
  }
  else {
    plVar5 = (long *)(local_190 + 0x48);
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__003caa10(uVar2,&local_190,&local_170);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_198 = 0x598d0e60e0a45d28;
  FUN__text__003c7c60(*param_2,&local_198,0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  local_170 = 0x867b70;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar1 = local_d8;
  }
  else {
    FUN__text__005d9290(local_168,&local_170);
    lVar3 = local_168;
    local_168 = 0;
    pcVar1 = local_d8;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      pcVar1 = local_d8;
    }
  }
  local_d8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  pcVar1 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar1)(auStack_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  return;
}


