/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00245e28; name: FUN_.text__00245e28
 */


void FUN__text__00245e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  Nickname aNStack_61 [33];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_2;
  nn::account::GetNickname(aNStack_61,(Uid *)(param_1 + 0x6d8));
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  lVar3 = *(long *)(lVar1 + 0x2e8);
  if (lVar3 == 0) {
    FUN__text__005f2d98(uVar2,&local_40,0);
    lVar3 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005f2d98(uVar2,&local_40,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00165dec(lVar3,0,aNStack_61);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__003c8c20(lVar1,&uStack_38,0xb);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


