/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023a290; name: FUN_.text__0023a290
 */


void FUN__text__0023a290(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
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
  *(code **)(param_1 + 0x660) = FUN__text__0023b09c;
  *(undefined **)(param_1 + 0x668) = &DAT__text__0023b0c4;
  *(undefined1 **)(param_1 + 0x670) = &LAB__text__0023b0c8;
  *(undefined1 **)(param_1 + 0x678) = &LAB__text__0023b0d4;
  FUN__text__001156d0(local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_60[0] + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_60[0] == 0) goto LAB__text__0023a340;
  }
  (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
LAB__text__0023a340:
  lVar5 = *(long *)(param_1 + 0x2d0);
  lVar1 = param_1 + 0x110;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN__text__003c7c60(lVar5,0x72b828,1);
  lVar5 = FUN__text__0012cb14(lVar1,0x72b830);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000;
  uVar2 = FUN__text__0012cb14(lVar1,0x72b830);
  FUN__text__005e927c(local_60,0x8738f8);
  FUN__text__003a1de4(uVar2,local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72b838);
  FUN__text__003d13e8(param_1 + 0x6e0,uVar7,uVar2,0);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72b840);
  *(undefined8 *)(param_1 + 0xd40) = uVar2;
  FUN__text__0012bcbc(lVar1,0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


