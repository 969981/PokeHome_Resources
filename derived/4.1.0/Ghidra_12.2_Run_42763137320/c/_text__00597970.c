/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00597970; name: FUN_.text__00597970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00597970(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  ulong local_198;
  undefined8 local_190;
  ulong local_188;
  long local_180;
  ulong local_170;
  long local_168;
  long local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_1a0 = *(long *)(param_1 + 8);
  FUN__text__0014f410(&local_170,local_1a0,&local_1a0);
  if (*(long *)(param_1 + 0x260) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x260) + 0x48) + 0x18))();
  }
  local_d0 = 0;
  uStack_c8 = 0;
  uVar7 = *(undefined8 *)(param_1 + 8);
  local_e0 = 0;
  local_d8 = (code *)0x0;
  *(ulong *)(param_1 + 0x260) = local_170;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_170 = _DAT_0089f4c8 + 0x10;
  local_168 = 0;
  FUN__text__0010c9e0(&local_1a0,_DAT_0089f558,0x71c09f,0x70f683);
  plVar2 = _DAT_008a0228;
  lVar3 = *_DAT_0089f550;
  lVar4 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x1c8) != 0) {
    lVar4 = *(long *)(lVar3 + 0x1c8);
  }
  local_1a8 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  FUN__text__00598360(&local_48,lVar3,0,&local_1a0,0,lVar4,0,&local_1a8);
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  lVar4 = CONCAT44(uStack_44,local_48);
  local_168 = lVar4;
  if (lVar4 != 0) {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if (local_160 != 0 || local_e0 != 0) {
      FUN__text__005d9010(lVar4,&local_170,1);
    }
    FUN__text__005d8de0(lVar4);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar8);
  }
  if ((local_188 != 0) && (local_1a0 != 0)) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  local_1a0 = 0;
  local_198 = 0xcbf29ce484222645;
  local_190 = 0x70f683;
  local_188 = 0;
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  FUN__text__005a2048(&local_1a0,uVar7,1);
  local_1a0 = _DAT_008a54f0 + 0x10;
  FUN__text__0014f530(*(undefined8 *)(param_1 + 0x260),&local_170,&local_1a0);
  local_1a8 = CONCAT44(local_1a8._4_4_,*(int *)(param_1 + 600) * 6);
  FUN__text__00597e4c(&local_48,*(undefined8 *)(param_1 + 8),&local_1a8);
  if (*(long *)(param_1 + 0x268) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
  }
  uVar7 = CONCAT44(uStack_44,local_48);
  *(undefined8 *)(param_1 + 0x268) = uVar7;
  if ((uint)local_1a8 != 0) {
    uVar6 = 0;
    do {
      uVar7 = *(undefined8 *)(param_1 + 0x268);
      local_1b0 = **(long **)(*(long *)(param_1 + 0x260) + 0xb0);
      if (local_1b0 != 0) {
        (**(code **)(*(long *)(local_1b0 + 0x48) + 0x10))();
      }
      FUN__text__005a15b0(uVar7,uVar6,&local_1b0);
      if (local_1b0 != 0) {
        (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
        local_1b0 = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)local_1a8);
    uVar7 = *(undefined8 *)(param_1 + 0x268);
  }
  FUN__text__005a1860(uVar7,&local_1a0);
  local_170 = _DAT_0089f4a8 + 0x10;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar1 = local_d8;
  }
  else {
    FUN__text__005d9290(local_168,&local_170);
    lVar4 = local_168;
    local_168 = 0;
    pcVar1 = local_d8;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
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
    (*pcVar1)(&local_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  local_1a0 = -0xfffffffe;
  local_198 = local_198 & 0xffffff0000000000;
  local_188 = local_188 & 0xffffff0000000000;
  *(undefined4 *)(*(long *)(param_1 + 0x260) + 0xf8) = 3;
  local_190 = 0xffffffff00000001;
  FUN__text__00153ebc(*(undefined8 *)(param_1 + 0x260),&local_1a0,4);
  lVar3 = *(long *)(param_1 + 0x260);
  local_48 = 6;
  local_170 = *(ulong *)(*plVar2 + 0x10);
  lVar4 = FUN__text__00150170(&local_1a8,*(undefined8 *)(lVar3 + 8),&local_48,&local_170);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar3 + 0xf0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0xf0) + 0x48) + 0x18))();
  }
  *(long *)(lVar3 + 0xf0) = lVar4;
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x260) + 0xe8) + 0x98) + 0x58);
  puVar5 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar4);
  *(undefined4 *)(puVar5 + 2) = 0;
  *puVar5 = 0xbf800000bf800000;
  puVar5[1] = 0;
  puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x68));
  *(undefined4 *)(puVar5 + 2) = 0;
  *puVar5 = 0xbf8000003f800000;
  puVar5[1] = 0x3f80000000000000;
  puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x68));
  *puVar5 = 0x3f800000bf800000;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0x3f800000;
  puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x68));
  *puVar5 = 0x3f8000003f800000;
  puVar5[1] = 0x3f80000000000000;
  *(undefined4 *)(puVar5 + 2) = 0x3f800000;
  thunk_FUN__text__006ec608(lVar4);
  lVar4 = *(long *)(*(long *)(param_1 + 0x260) + 0xf0) + 0x58;
  puVar5 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar4);
  *puVar5 = 0x2000200010000;
  *(undefined4 *)(puVar5 + 1) = 0x30001;
  thunk_FUN__text__006ec608(lVar4);
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_170 = 0;
  local_168 = 0;
  FUN__text__006ebd70(&local_170);
  local_170 = local_170 & 0xfffffffcffffffff;
  FUN__text__005bca50(*(undefined8 *)(param_1 + 0x260),&local_170);
  FUN__text__005c5e00(param_2,param_1);
  FUN__text__005a27b0(param_1,*(undefined8 *)(param_1 + 0x260));
  return;
}


