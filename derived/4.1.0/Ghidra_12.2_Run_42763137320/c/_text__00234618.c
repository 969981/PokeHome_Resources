/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00234618; name: FUN_.text__00234618
 */


void FUN__text__00234618(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN__text__001156d0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 == 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    FUN__text__003c7c60(lVar4,param_2 + 0x28,1);
LAB__text__002346d8:
    lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (local_38 == 0) {
      FUN__text__003c7c60(lVar4,param_2 + 0x28,1);
    }
    else {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      FUN__text__003c7c60(lVar4,param_2 + 0x28,1);
      if (lVar3 == 0) goto LAB__text__002346d8;
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,0x72a8d0,lVar4);
  uVar1 = FUN__text__005f3244(lVar4);
  FUN__text__0012c9f0(param_1 + 0x110,param_2 + 200,uVar1,0xb);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  plVar2 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


