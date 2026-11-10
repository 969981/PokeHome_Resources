/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002336bc; name: FUN_.text__002336bc
 */


void FUN__text__002336bc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_48;
  
  lVar2 = *(long *)(param_1 + 0x2d0);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN__text__001156d0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_48 + 0x60);
  if ((lVar3 == 0) || ((**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(), local_48 != 0)) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar2,param_2 + 8,1);
  lVar5 = *(long *)(lVar2 + 0x2e8);
  if (lVar5 == 0) {
    FUN__text__005f2d98(lVar3,0x72a890,0);
    uVar1 = *(undefined4 *)(param_4 + 0x11a68);
    lVar5 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005f2d98(lVar3,0x72a890,lVar5);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar1 = *(undefined4 *)(param_4 + 0x11a68);
    lVar5 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__00165904(lVar5,0,uVar1);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN__text__003c8c20(lVar2,param_2 + 0x58,0xb);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


