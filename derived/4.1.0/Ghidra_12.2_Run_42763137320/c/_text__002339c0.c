/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002339c0; name: FUN_.text__002339c0
 */


void FUN__text__002339c0(long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar6 = *(long *)(param_1 + 0x2d0);
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN__text__001156d0(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar8 = *(long *)(local_68 + 0x60);
  if ((lVar8 == 0) || ((**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar6,param_2 + 0x18,1);
  lVar4 = FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),param_3);
  local_68 = *(long *)(param_2 + 0x50);
  uVar5 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_68);
  lVar9 = *(long *)(param_1 + 0x570);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__003d5154(lVar9,*(undefined4 *)(lVar4 + 0x18),uVar5,0,0);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  FUN__text__003c7c60(lVar6,&local_68,1);
  iVar2 = *(int *)(lVar4 + 100);
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x648);
    local_70 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN__text__0022ece4(uVar5,lVar6,&local_70,*(undefined8 *)(param_2 + 0x70),0x163a50cb51c8e9b7,5,
                        iVar2,0);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
  }
  FUN__text__003c7c60(lVar6,param_2 + 0x68,iVar2 != 0);
  iVar2 = *(int *)(lVar4 + 0x68);
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x648);
    local_78 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN__text__0022ece4(uVar5,lVar6,&local_78,*(undefined8 *)(param_2 + 0x80),0x1636cacb51c5d02e,5,
                        iVar2,0);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
  }
  FUN__text__003c7c60(lVar6,param_2 + 0x78,iVar2 != 0);
  FUN__text__003c7c60(lVar6,param_2 + 0x88,0);
  FUN__text__003c7c60(lVar6,(undefined8 *)(param_2 + 0x90),0);
  FUN__text__003c7c60(lVar6,(undefined8 *)(param_2 + 0x98),0);
  iVar2 = *(int *)(lVar4 + 0x6c);
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x98);
    if ((param_4 & 1) == 0) {
      puVar1 = (undefined8 *)(param_2 + 0x90);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x648);
    uVar5 = *puVar1;
    local_88 = lVar8;
    uStack_80 = uVar5;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN__text__0022ece4(uVar10,lVar6,&local_88,uVar5,0x1625cccb51b76061,5,iVar2,0);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    FUN__text__003c7c60(lVar6,&uStack_80,1);
    FUN__text__003c7c60(lVar6,param_2 + 0x88,1);
  }
  uVar3 = *(undefined4 *)(lVar4 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x648);
  local_90 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN__text__0022ece4(uVar5,lVar6,&local_90,*(undefined8 *)(param_2 + 0xa8),0x162246cb51b446d8,5,
                      uVar3,0);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  FUN__text__003c7c60(lVar6,param_2 + 0xa0,1);
  FUN__text__003c7c60(lVar6,param_2 + 0xb0,1);
  lVar9 = *(long *)(lVar6 + 0x2e8);
  if (lVar9 == 0) {
    FUN__text__005f2d98(lVar8,0x72a898,0);
    FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x7f0),lVar4 + 0x28);
    lVar9 = *(long *)(lVar6 + 0x2e0);
  }
  else {
    plVar7 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN__text__005f2d98(lVar8,0x72a898,lVar9);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x7f0),lVar4 + 0x28);
    lVar9 = *(long *)(lVar6 + 0x2e0);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__00165d24(lVar9,0,*(undefined8 *)(param_1 + 0x7f0),*(undefined4 *)(lVar4 + 0x24),
                      *(undefined1 *)(lVar4 + 0x20));
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  FUN__text__003c8c20(lVar6,param_2 + 0xb8,0xb);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


