/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023909c; name: FUN_.text__0023909c
 */


void FUN__text__0023909c(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long local_68;
  long local_48;
  
  FUN__text__001156d0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_48 + 0x60);
  if ((lVar3 == 0) || ((**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(), local_48 != 0)) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  uVar9 = (ulong)param_2;
  FUN__text__003c7c60(lVar4,uVar9 * 0x40 + 0x72a9b8,1);
  FUN__text__0023937c(param_1,param_3,(ulong)param_2 * 0x30 + 0x72ac78);
  lVar7 = *(long *)(param_1 + 0x2d0);
  lVar5 = (ulong)param_2 * 0x30 + 0x72ac80;
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN__text__003c7c60(lVar7,lVar5,1);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),lVar5);
  lVar5 = *(long *)(param_1 + 0x570);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__003d5154(lVar5,*(undefined4 *)(param_3 + 0x18),uVar2,0,0);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  lVar5 = uVar9 * 0x30;
  FUN__text__002394a4(param_1,param_3,lVar5 + 0x72ac88,lVar5 + 0x72ac90);
  FUN__text__002399b8(param_1,param_3,lVar5 + 0x72ac98);
  uVar1 = *(int *)(param_3 + 0x18) - 0x12;
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)((long)(int)uVar1 * 8 + 0x72b808);
    uVar8 = *(undefined8 *)(param_1 + 0x648);
  }
  else {
    uVar2 = 0xe1cdc1cb33f68e30;
    uVar8 = *(undefined8 *)(param_1 + 0x648);
  }
  local_68 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__0022edec(uVar8,lVar4,&local_68,*(undefined8 *)(uVar9 * 0x18 + 0x72ace0),uVar2,5,
                      *(undefined4 *)(param_3 + 0x11ac8),*(undefined4 *)(param_3 + 0x11acc));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar5 = uVar9 * 0x18 + 0x72ace8;
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),lVar5);
  lVar7 = *(long *)(param_1 + 0x570);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__003d5154(lVar7,*(undefined4 *)(param_3 + 0x18),uVar2,0,0);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN__text__003c7c60(lVar4,lVar5,1);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


