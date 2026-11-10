/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014ef94; name: FUN_.text__0014ef94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014ef94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  long local_190 [4];
  long local_170;
  long local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined4 local_48;
  undefined1 uStack_41;
  
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_148 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  local_170 = _DAT_0089f4c8 + 0x10;
  local_160 = 0;
  FUN__text__001063fc(&local_200,0x720b85);
  lVar6 = *_DAT_0089f550;
  lVar7 = *(long *)(lVar6 + 8);
  if (*(long *)(lVar6 + 0x1c8) != 0) {
    lVar7 = *(long *)(lVar6 + 0x1c8);
  }
  FUN__text__0010a590(&local_1c0,lVar6,0,&local_200,0,lVar7,0);
  local_168 = local_1c0;
  if (local_1c0 != 0) {
    plVar10 = (long *)(local_1c0 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN__text__005d8de0(local_1c0);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if ((local_1e8 != 0) && (local_200 != 0)) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
  }
  local_200 = 0;
  uStack_1f8 = 0xcbf29ce484222645;
  local_1f0 = 0x70f683;
  local_1e8 = 0;
  if (local_1e0 != 0) {
    (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
  }
  FUN__text__005a2048(local_190,*(undefined8 *)(param_1 + 8),1);
  local_190[0] = _DAT_008a0220 + 0x10;
  FUN__text__005c5e00(param_2,param_1);
  local_1c0 = *(long *)(param_1 + 8);
  FUN__text__0014f410(&local_200,local_1c0,&local_1c0);
  if (*(long *)(param_1 + 600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 600) + 0x48) + 0x18))();
  }
  *(ulong *)(param_1 + 600) = local_200;
  FUN__text__0014f530(local_200,&local_170,local_190);
  local_1b8 = 0;
  local_1c0 = -0xfffffffe;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  *(undefined4 *)(*(long *)(param_1 + 600) + 0xf8) = 3;
  local_198 = 0;
  local_194 = 0;
  local_1b0 = 0xffffffff00000001;
  local_1a0 = 0xffffffff00000001;
  FUN__text__0014f724(*(undefined8 *)(param_1 + 600),&local_1c0,4);
  lVar6 = *(long *)(param_1 + 600);
  local_48 = 6;
  local_200 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  lVar7 = FUN__text__00150170(&uStack_41,*(undefined8 *)(lVar6 + 8),&local_48,&local_200);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0xf0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0xf0) + 0x48) + 0x18))();
  }
  *(long *)(lVar6 + 0xf0) = lVar7;
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 600) + 0xe8) + 0x98) + 0x58);
  puVar8 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar7);
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0x3f800000;
  *puVar8 = 0xbf800000bf800000;
  puVar8[1] = 0;
  puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x68));
  *puVar8 = 0xbf8000003f800000;
  puVar8[1] = 0x3f80000000000000;
  puVar8[2] = 0x3f80000000000000;
  *(undefined4 *)(puVar8 + 3) = 0x3f800000;
  puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x68));
  puVar8[2] = 0x3f800000;
  *(undefined4 *)(puVar8 + 3) = 0;
  *puVar8 = 0x3f800000bf800000;
  puVar8[1] = 0;
  puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x68));
  puVar8[2] = 0x3f8000003f800000;
  *puVar8 = 0x3f8000003f800000;
  puVar8[1] = 0x3f80000000000000;
  *(undefined4 *)(puVar8 + 3) = 0;
  thunk_FUN__text__006ec608(lVar7);
  lVar7 = *(long *)(*(long *)(param_1 + 600) + 0xf0) + 0x58;
  puVar8 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar7);
  *puVar8 = 0x2000200010000;
  *(undefined4 *)(puVar8 + 1) = 0x30001;
  thunk_FUN__text__006ec608(lVar7);
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  FUN__text__006ebd70(&local_200);
  uVar1 = local_200;
  uVar5 = local_200._4_2_;
  local_200 = CONCAT71(local_200._1_7_,7);
  uVar2 = local_200;
  local_200._6_2_ = SUB82(uVar1,6);
  local_200._0_4_ = (undefined4)uVar2;
  local_200 = CONCAT26(local_200._6_2_,CONCAT24(uVar5,(undefined4)local_200)) | 0x300000000;
  FUN__text__005bca50(*(undefined8 *)(param_1 + 600),&local_200);
  lVar6 = *(long *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  lVar7 = *(long *)(param_1 + 0x150);
  if (lVar7 == 0) {
    *(undefined8 *)(lVar6 + 0x80) = uVar1;
    *(undefined8 *)(lVar6 + 0x88) = uVar3;
    lVar9 = *(long *)(lVar6 + 0x98);
    *(undefined8 *)(lVar6 + 0x90) = uVar2;
    *(undefined8 *)(lVar6 + 0x98) = 0;
  }
  else {
    plVar10 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    *(undefined8 *)(lVar6 + 0x80) = uVar1;
    *(undefined8 *)(lVar6 + 0x88) = uVar3;
    *(undefined8 *)(lVar6 + 0x90) = uVar2;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar9 = *(long *)(lVar6 + 0x98);
    *(long *)(lVar6 + 0x98) = lVar7;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  FUN__text__005c60c0(param_2,*(undefined8 *)(param_1 + 600));
  *(undefined4 *)(*(long *)(param_1 + 600) + 0xfc) = *(undefined4 *)(param_1 + 0x260);
  local_170 = _DAT_0089f4a8 + 0x10;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar4 = local_d8;
  }
  else {
    FUN__text__005d9290(local_168,&local_170);
    lVar7 = local_168;
    local_168 = 0;
    pcVar4 = local_d8;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      pcVar4 = local_d8;
    }
  }
  local_d8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar4)(auStack_c0);
  }
  pcVar4 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar4)(auStack_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  return;
}


