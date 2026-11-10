/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029b478; name: FUN_.text__0029b478
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0029b478(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  puVar1 = (undefined8 *)
           (*(long *)(param_1 + 0x920) +
           (long)*(int *)(*(long *)(*(long *)(param_1 + 0x950) + 0xe0) + (param_2 & 0xffffffff) * 8)
           * 0x20);
  local_70 = puVar1[2];
  local_68 = puVar1[3];
  local_80 = *puVar1;
  uStack_78 = puVar1[1];
  local_a8 = 0xa7649e0ad180b01a;
  uStack_a0 = 0x71a942;
  local_98 = 0x1b;
  local_90 = 0;
  FUN__text__00115650(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_a8,0xb);
  lVar5 = *(long *)(local_88 + 0x60);
  if (lVar5 == 0) {
LAB__text__0029b558:
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    if (local_88 != 0) goto LAB__text__0029b558;
  }
  lVar6 = _DAT_008a2238;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,&uStack_78,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(param_1 + 0x110,lVar6 + (param_4 & 0xffffffff) * 0x18,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  plVar4 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  FUN__text__0015a550(*(undefined8 *)(param_1 + 0x9e0),local_68 & 0xffffffff,2,1,1);
  lVar6 = lVar6 + (param_4 & 0xffffffff) * 0x18;
  lVar5 = lVar6 + 0x10;
  lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar5);
  lVar6 = lVar6 + 8;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | local_68._4_1_;
  lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar6);
  if (local_68._4_1_ != 0) {
    lVar6 = lVar5;
  }
  *(byte *)(lVar7 + 0x58) = (*(byte *)(lVar7 + 0x58) & 0xfe | local_68._4_1_) ^ 1;
  FUN__text__003c8b00(lVar3,lVar6,*(undefined8 *)(param_1 + 0x9e0),0xb);
  local_a8 = 0xa7649e0ad180b01a;
  uStack_a0 = 0x71a942;
  local_98 = 0x1b;
  local_90 = 0;
  FUN__text__00115650(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_a8,0xb);
  lVar3 = *(long *)(local_88 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (local_88 == 0) goto LAB__text__0029b718;
  }
  (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  local_88 = 0;
LAB__text__0029b718:
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,&local_70,lVar5);
  uVar2 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(param_1 + 0x110,0x732748,uVar2,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


