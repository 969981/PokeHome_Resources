/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a96cc; name: FUN_.text__001a96cc
 */


ulong FUN__text__001a96cc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  long local_48;
  int local_24;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x158);
  if (lVar7 == 0) {
    local_24 = 0xd;
    uVar2 = FUN__text__001969cc(param_3,&local_24);
    local_48 = 0;
  }
  else {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    local_24 = 0xd;
    uVar2 = FUN__text__001969cc(param_3,&local_24);
    local_48 = lVar7;
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN__text__001916b0(uVar8,&local_48,param_2,0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar3 = FUN__text__00195358(uVar8,param_2);
  if (lVar3 == 0) {
    FUN__text__00306588(lVar7);
    uVar2 = 0;
    goto LAB__text__001a98a4;
  }
  uVar6 = *(ulong *)(lVar3 + 8);
  uStack_50 = *(undefined8 *)(lVar3 + 0x10);
  local_58 = uVar6;
  uVar4 = FUN__text__00306588(lVar7);
  if ((uVar4 & 1) != 0) {
    uVar2 = 0;
    goto LAB__text__001a98a4;
  }
  uVar5 = FUN__text__00306a08(lVar7,2);
  uVar4 = 0x80;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  if ((uVar2 & 1) == 0) {
LAB__text__001a9810:
    uVar4 = uVar4 | 4;
  }
  else {
    uStack_60 = 0;
    uStack_68 = 0;
    local_63 = 0;
    FUN__text__00307180(lVar7,&uStack_68,0xd);
    if (*(char *)((long)&uStack_68 + (long)local_24) == '\0') goto LAB__text__001a9810;
  }
  uVar1 = FUN__text__00191374(&uStack_50);
  uStack_68 = (undefined5)lVar7;
  local_63 = (undefined3)((ulong)lVar7 >> 0x28);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  uVar6 = thunk_FUN__text__00320e30(uVar6 >> 0x20,uVar1,&uStack_68);
  if (CONCAT35(local_63,uStack_68) != 0) {
    (**(code **)(*(long *)(CONCAT35(local_63,uStack_68) + 0x48) + 0x18))();
  }
  uVar2 = (uVar6 & 1) << 1 | uVar4 | ((uVar6 & 0xffffffff) >> 2 & 0xf) << 9 | uVar6 >> 6 & 1 |
          ((uVar6 & 0xffffffff) >> 8 & 3) << 0xe;
  if (((uint)uVar6 >> 10 & 1) != 0) {
    uVar4 = FUN__text__003067fc(lVar7);
    if ((uVar4 & 1) == 0) {
      uVar2 = uVar2 | 0x10000;
    }
    else {
      uVar2 = uVar2 | 0x20000;
    }
  }
  uVar2 = uVar2 | (uVar6 >> 0xb & 1) << 0x14;
LAB__text__001a98a4:
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return uVar2;
}


