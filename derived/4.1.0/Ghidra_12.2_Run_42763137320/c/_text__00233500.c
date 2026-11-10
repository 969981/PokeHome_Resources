/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00233500; name: FUN_.text__00233500
 */


void FUN__text__00233500(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_48;
  long local_28;
  
  uVar1 = FUN__text__0022cc74(*(undefined8 *)(param_1 + 0x650),param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),param_3);
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN__text__001156d0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = *(long *)(local_28 + 0x60);
  if ((lVar5 == 0) || ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_28 != 0)) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar3,param_2,1);
  FUN__text__003c7c60(lVar3,param_2 + 8,0);
  FUN__text__003c7c60(lVar3,param_2 + 0x10,0);
  FUN__text__003c7c60(lVar3,param_2 + 0x18,0);
  FUN__text__003c7c60(lVar3,param_2 + 0x20,0);
  FUN__text__003c7c60(lVar3,param_2 + 0x28,0);
  FUN__text__003c7c60(lVar3,param_2 + 0x30,0);
  uVar6 = *(undefined8 *)(param_1 + 0x648);
  local_48 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__0022f148(uVar6,lVar3,&local_48,*(undefined8 *)(param_2 + 0x48),0xd0219cb4c67a652,
                      lVar2 + 4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN__text__003c7c60(lVar3,param_2 + 0x50,0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


