/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002394a4; name: FUN_.text__002394a4
 */


void FUN__text__002394a4(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_58;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN__text__001156d0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_38 + 0x60);
  if ((lVar3 == 0) || ((**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(), local_38 != 0)) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar1,param_3,1);
  FUN__text__003c7c60(lVar1,param_4,1);
  uVar5 = *(undefined8 *)(param_1 + 0x648);
  local_58 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__0022ece4(uVar5,lVar1,&local_58,*param_3,0xd8b7a7cb2eb26278,6,
                      *(undefined4 *)(param_2 + 0x1c),1);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 == 0) {
    FUN__text__005f2d98(lVar3,0x72aa18,0);
    FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x2ec0),param_2 + 0x28);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN__text__005f2d98(lVar3,0x72aa18,lVar4);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x2ec0),param_2 + 0x28);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00165d24(lVar4,0,*(undefined8 *)(param_1 + 0x2ec0),*(undefined4 *)(param_2 + 0x24),
                      *(undefined1 *)(param_2 + 0x20));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,param_4,0xb);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


