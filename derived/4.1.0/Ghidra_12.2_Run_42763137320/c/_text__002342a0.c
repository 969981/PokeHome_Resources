/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002342a0; name: FUN_.text__002342a0
 */


void FUN__text__002342a0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x2d0);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN__text__003c7c60(lVar2,param_2 + 0x20,1);
  }
  FUN__text__001156d0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_28 + 0x60);
  if (lVar2 == 0) {
    plVar4 = (long *)(local_28 + 0x48);
    lVar2 = *plVar4;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x18))(), lVar2 == 0)) {
      return;
    }
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar2,0x72a8b8,lVar3);
    uVar1 = FUN__text__005f3244(lVar3);
    FUN__text__0012c9f0(param_1 + 0x110,param_2 + 0xc0,uVar1,0xb);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar4);
    lVar2 = *(long *)(lVar2 + 0x48);
  }
  (**(code **)(lVar2 + 0x18))(plVar4);
  return;
}


