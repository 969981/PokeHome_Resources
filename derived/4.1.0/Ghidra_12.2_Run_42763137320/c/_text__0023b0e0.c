/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023b0e0; name: FUN_.text__0023b0e0
 */


void FUN__text__0023b0e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_60 [3];
  long local_48;
  
  pcVar3 = *(code **)(param_1 + 0x668);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    (*pcVar3)(param_1 + 0x680);
  }
  *(long *)(param_1 + 0x680) = param_1;
  *(code **)(param_1 + 0x660) = FUN__text__0023c9bc;
  *(undefined **)(param_1 + 0x668) = &DAT__text__0023c9e4;
  *(undefined1 **)(param_1 + 0x670) = &LAB__text__0023c9e8;
  *(undefined1 **)(param_1 + 0x678) = &LAB__text__0023c9f4;
  FUN__text__001156d0(local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_60[0] + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_60[0] == 0) goto LAB__text__0023b190;
  }
  (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
LAB__text__0023b190:
  lVar5 = *(long *)(param_1 + 0x2d0);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  lVar1 = param_1 + 0x110;
  FUN__text__003c7c60(lVar5,0x72b898,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72b8a8,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72b8a0,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar5,0x72b8b0,1);
  lVar7 = FUN__text__0012cb14(lVar1,0x72b8b8);
  *(undefined1 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = 0x200000000;
  uVar2 = FUN__text__0012cb14(lVar1,0x72b8b8);
  FUN__text__005e927c(local_60,0x873a10);
  FUN__text__003a1de4(uVar2,local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72b8c8,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72b8c0,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  plVar6 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  FUN__text__003c7c60(lVar5,0x72b8d0,1);
  lVar7 = FUN__text__0012cb14(lVar1,0x72b8d8);
  *(undefined1 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = 0x200000000000000;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72b8e8,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72b8e0,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
  FUN__text__003c7c60(lVar5,0x72b8f0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6);
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72b900,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72b8f8,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
  lVar7 = FUN__text__0012cb14(lVar1,0x72b908);
  *(undefined1 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = 0x100000000000000;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6);
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72b918,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72b910,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
  FUN__text__003c7c60(lVar5,0x72b920,0);
  FUN__text__003c7c60(lVar5,0x72b938,0);
  FUN__text__003c7c60(lVar5,0x72b950,0);
  FUN__text__003c7c60(lVar5,0x72b968,0);
  FUN__text__003c7c60(lVar5,0x72b980,0);
  FUN__text__003c7c60(lVar5,0x72b998,0);
  FUN__text__0012bcbc(lVar1,0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
  return;
}


