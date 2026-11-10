/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002399b8; name: FUN_.text__002399b8
 */


void FUN__text__002399b8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN__text__001156d0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_48 + 0x60);
  if ((lVar2 == 0) || ((**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(), local_48 != 0)) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar1,param_3,1);
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 == 0) {
    FUN__text__005f2d98(lVar2,0x72aa28,0);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__005f2d98(lVar2,0x72aa28,lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00165dec(lVar4,0,param_2 + 0x42);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,param_3,0xb);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


