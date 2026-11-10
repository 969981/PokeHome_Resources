/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017f5c0; name: FUN_.text__0017f5c0
 */


void FUN__text__0017f5c0(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_50 [3];
  long local_38;
  
  *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = 0;
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN__text__003c7c60(lVar3,0x725710,0);
  FUN__text__003c7c60(lVar3,0x725720,1);
  FUN__text__003c7c60(lVar3,0x725730,1);
  FUN__text__003c7c60(lVar3,0x725740,1);
  lVar3 = param_1 + 0x110;
  *(undefined4 *)(param_1 + 0x648) = 3;
  uVar1 = FUN__text__0012cb14(lVar3,0x725760);
  FUN__text__005e927c(local_50,0x86c568);
  FUN__text__003a1de4(uVar1,local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  FUN__text__001156d0(local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = *(long *)(local_50[0] + 0x60);
  if (lVar5 == 0) {
    pcVar2 = *(code **)(*(long *)(local_50[0] + 0x48) + 0x18);
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    if ((local_50[0] != 0) && ((**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))(), lVar5 == 0))
    goto LAB__text__0017f708;
    pcVar2 = *(code **)(*(long *)(lVar5 + 0x48) + 0x10);
  }
  (*pcVar2)();
LAB__text__0017f708:
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,0x725768,lVar6);
  uVar1 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar3,0x725700,uVar1,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  plVar4 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  FUN__text__0012c8d0((float)*(int *)(*(long *)(param_1 + 0x640) + 0xc),lVar3,0x719e30);
  local_50[0] = 0x598d0e60e0a45d28;
  lVar5 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_50);
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  FUN__text__0012c300(lVar3,0x71028b);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


