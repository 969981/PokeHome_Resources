/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029b25c; name: FUN_.text__0029b25c
 */


void FUN__text__0029b25c(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  puVar1 = (ulong *)(*(long *)(param_1 + 0x8c0) +
                    (long)*(int *)(*(long *)(*(long *)(param_1 + 0x948) + 0xe0) +
                                  (param_2 & 0xffffffff) * 8) * 0x20);
  local_60 = puVar1[2];
  uStack_58 = puVar1[3];
  local_70 = *puVar1;
  uStack_68 = puVar1[1];
  local_90 = 0xa7649e0ad180b01a;
  uStack_88 = 0x71a942;
  local_80 = 0x1b;
  local_78 = 0;
  FUN__text__00115650(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_90,0xb);
  lVar6 = *(long *)(local_38 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    if (local_38 == 0) goto LAB__text__0029b344;
  }
  (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  local_38 = 0;
LAB__text__0029b344:
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar6,&local_60,lVar7);
  uVar3 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(param_1 + 0x110,0x732670,uVar3,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  plVar5 = (long *)(lVar6 + 0x48);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  uVar2 = FUN__text__0027ac90(*(undefined8 *)(param_1 + 0x640),param_2 & 0xffffffff,1);
  FUN__text__0015a550(*(undefined8 *)(param_1 + 0x9e0),uVar2,4,1,1);
  FUN__text__003c8b00(lVar4,0x732678,*(undefined8 *)(param_1 + 0x9e0),0xb);
  uVar3 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x732680);
  FUN__text__0029d9f8(*(undefined8 *)(param_1 + 0x9e8),local_70 & 0xffffffff,uVar3,0,0);
  return;
}


