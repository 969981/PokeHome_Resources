/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001539d4; name: FUN_.text__001539d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001539d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [96];
  long local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [336];
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  long local_80 [4];
  
  local_e0 = *(ulong *)(param_1 + 8);
  FUN__text__0014f410(&local_2e0,local_e0,&local_e0);
  if (*(long *)(param_1 + 600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 600) + 0x48) + 0x18))();
  }
  local_240 = 0;
  uStack_238 = 0;
  *(long *)(param_1 + 600) = local_2e0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_2d0 = 0;
  local_2c8 = (code *)0x0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2e0 = _DAT_0089f4c8 + 0x10;
  local_2d8 = 0;
  FUN__text__0010652c(&local_e0,0x71c0b9);
  lVar5 = *_DAT_0089f550;
  lVar6 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x1c8) != 0) {
    lVar6 = *(long *)(lVar5 + 0x1c8);
  }
  FUN__text__0010a590(local_80,lVar5,0,&local_e0,0,lVar6,0);
  if (local_2d8 != 0) {
    (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
  }
  local_2d8 = local_80[0];
  if (local_80[0] != 0) {
    plVar9 = (long *)(local_80[0] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if (local_2d0 != 0 || local_250 != 0) {
      FUN__text__005d9010(local_80[0],&local_2e0,1);
    }
    FUN__text__005d8de0(local_80[0]);
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))(plVar9);
  }
  if ((local_c8 != 0) && (local_e0 != 0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = 0;
  uStack_d8 = 0xcbf29ce484222645;
  local_d0 = 0x70f683;
  local_c8 = 0;
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  FUN__text__005a2048(&local_e0,*(undefined8 *)(param_1 + 8),1);
  local_e0 = _DAT_008a0340 + 0x10;
  FUN__text__0014f530(*(undefined8 *)(param_1 + 600),&local_2e0,&local_e0);
  local_2e0 = 0x867588;
  if (local_2d8 == 0) {
    local_2d8 = 0;
    pcVar4 = local_248;
  }
  else {
    FUN__text__005d9290(local_2d8,&local_2e0);
    lVar6 = local_2d8;
    local_2d8 = 0;
    pcVar4 = local_248;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      pcVar4 = local_248;
    }
  }
  local_248 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar4)(auStack_230);
  }
  pcVar4 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    local_2c8 = (code *)0x0;
    (*pcVar4)(auStack_2b0);
  }
  if (local_2d8 != 0) {
    (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
  }
  local_98 = 0;
  local_a0 = 0xffffffff00000002;
  local_94 = 0;
  local_88 = 0;
  local_84 = 0;
  *(undefined4 *)(*(long *)(param_1 + 600) + 0xf8) = 3;
  local_90 = 0xffffffff00000001;
  FUN__text__00153ebc(*(undefined8 *)(param_1 + 600),&local_a0,4);
  lVar5 = *(long *)(param_1 + 600);
  local_e0 = CONCAT44(local_e0._4_4_,6);
  local_2e0 = *(long *)(*_DAT_008a0228 + 0x10);
  lVar6 = FUN__text__00150170(local_80,*(undefined8 *)(lVar5 + 8),&local_e0,&local_2e0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar5 + 0xf0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + 0xf0) + 0x48) + 0x18))();
  }
  *(long *)(lVar5 + 0xf0) = lVar6;
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 600) + 0xe8) + 0x98) + 0x58);
  puVar7 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar6);
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = 0xbf800000bf800000;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x68));
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = 0xbf8000003f800000;
  puVar7[1] = 0x3f80000000000000;
  puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x68));
  *puVar7 = 0x3f800000bf800000;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0x3f800000;
  puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x68));
  *puVar7 = 0x3f8000003f800000;
  puVar7[1] = 0x3f80000000000000;
  *(undefined4 *)(puVar7 + 2) = 0x3f800000;
  thunk_FUN__text__006ec608(lVar6);
  lVar6 = *(long *)(*(long *)(param_1 + 600) + 0xf0) + 0x58;
  puVar7 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar6);
  *puVar7 = 0x2000200010000;
  *(undefined4 *)(puVar7 + 1) = 0x30001;
  thunk_FUN__text__006ec608(lVar6);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN__text__006ebd70(&local_e0);
  local_e0 = local_e0 & 0xfffffffcffffffff;
  FUN__text__005bca50(*(undefined8 *)(param_1 + 600),&local_e0);
  lVar5 = *(long *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  lVar6 = *(long *)(param_1 + 0x150);
  if (lVar6 == 0) {
    *(undefined8 *)(lVar5 + 0x80) = uVar1;
    *(undefined8 *)(lVar5 + 0x88) = uVar3;
    lVar8 = *(long *)(lVar5 + 0x98);
    *(undefined8 *)(lVar5 + 0x90) = uVar2;
    *(undefined8 *)(lVar5 + 0x98) = 0;
  }
  else {
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    *(undefined8 *)(lVar5 + 0x80) = uVar1;
    *(undefined8 *)(lVar5 + 0x88) = uVar3;
    *(undefined8 *)(lVar5 + 0x90) = uVar2;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = *(long *)(lVar5 + 0x98);
    *(long *)(lVar5 + 0x98) = lVar6;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  FUN__text__005c5e00(param_2,param_1);
  FUN__text__005c60c0(param_2,*(undefined8 *)(param_1 + 600));
  if (param_3 != 0) {
    FUN__text__0014953c(&local_2e0,param_3);
    local_80[0] = 0x5751149dfc7f9d61;
    local_80[1] = 0x71f0af;
    local_80[2] = 0xe;
    local_80[3] = 0;
    FUN__text__005bc9a0(*(undefined8 *)(param_1 + 600),local_80,&local_2e0,4);
    if (local_80[3] != 0) {
      (**(code **)(*(long *)(local_80[3] + 0x48) + 0x18))();
    }
    FUN__text__0014821c(&local_2e0);
  }
  return;
}


