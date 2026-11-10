/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c99f4; name: FUN_.text__003c99f4
 */


void FUN__text__003c99f4(long param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_28;
  
  local_48 = *param_2;
  if (local_48 == 0) {
    FUN__text__003caeb0(param_1,&local_48,param_1 + 0x60);
    pcVar2 = *(code **)(param_1 + 0x170);
  }
  else {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__003caeb0(param_1,&local_48,param_1 + 0x60);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    pcVar2 = *(code **)(param_1 + 0x170);
  }
  if (pcVar2 != (code *)0x0) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      pcVar2 = *(code **)(param_1 + 0x170);
    }
    local_28 = lVar4;
    (*pcVar2)(param_1 + 400,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  lVar4 = param_1 + 0x60;
  local_50 = *param_2;
  if (local_50 == 0) {
    FUN__text__003ca2a0(param_1,&local_50,lVar4,0);
    local_58 = *param_2;
  }
  else {
    plVar3 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__003ca2a0(param_1,&local_50,lVar4,0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_58 = *param_2;
  }
  if (local_58 == 0) {
    uVar1 = FUN__text__003ca630(param_1,&local_58,lVar4);
    local_60 = *param_2;
  }
  else {
    plVar3 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__003ca630(param_1,&local_58,lVar4);
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    local_60 = *param_2;
  }
  if (local_60 == 0) {
    FUN__text__003caa10(uVar1,&local_60,lVar4);
    return;
  }
  plVar3 = (long *)(local_60 + 0x48);
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN__text__003caa10(uVar1,&local_60,lVar4);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


