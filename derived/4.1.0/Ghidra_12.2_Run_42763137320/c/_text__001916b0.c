/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001916b0; name: FUN_.text__001916b0
 */


void FUN__text__001916b0(undefined8 param_1,long *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_60;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_28;
  
  local_60 = *param_2;
  local_54 = 0;
  if (local_60 == 0) {
    uVar2 = FUN__text__00194330(param_1,&local_60,&local_54,param_3,param_4 & 1);
  }
  else {
    plVar5 = (long *)(local_60 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = FUN__text__00194330(param_1,&local_60,&local_54,param_3,param_4 & 1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((uVar2 & 1) == 0) {
    FUN__text__00306824(*param_2);
    return;
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  iVar1 = 3;
  if (local_54 != 0) {
    iVar1 = local_54;
  }
  lVar3 = FUN__text__00195358(param_1,param_3);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
    FUN__text__00306824(lVar4);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    local_50 = *(undefined8 *)(lVar3 + 8);
    uStack_48 = *(undefined8 *)(lVar3 + 0x10);
    local_28 = lVar4;
    if (lVar4 == 0) {
      FUN__text__00194d78(param_1,&local_28,&local_50,iVar1);
      return;
    }
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__00194d78(param_1,&local_28,&local_50,iVar1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


