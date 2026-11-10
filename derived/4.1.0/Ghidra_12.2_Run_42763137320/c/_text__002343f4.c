/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002343f4; name: FUN_.text__002343f4
 */


void FUN__text__002343f4(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_48;
  
  lVar1 = FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),param_3);
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN__text__003c7c60(lVar3,param_2 + 0x20,1);
    local_48 = *(long *)(param_2 + 0x50);
    uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_48);
    lVar5 = *(long *)(param_1 + 0x570);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__003d5154(lVar5,*(undefined4 *)(lVar1 + 0x18),uVar2,0,0);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN__text__003c7c60(lVar3,&local_48,1);
  }
  FUN__text__001156d0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_48 + 0x60);
  if (lVar3 == 0) {
    plVar4 = (long *)(local_48 + 0x48);
    lVar1 = *plVar4;
    goto LAB__text__002345f8;
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  if ((local_48 != 0) && ((**(code **)(*(long *)(local_48 + 0x48) + 0x18))(), lVar3 == 0)) {
    return;
  }
  if (*(int *)(lVar1 + 0x18) == 0x18) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
    lVar1 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    uVar2 = 0x72a8c8;
LAB__text__002345a0:
    FUN__text__005f2d98(lVar3,uVar2,lVar1);
    uVar2 = FUN__text__005f3244(lVar1);
    FUN__text__0012c9f0(param_1 + 0x110,param_2 + 0xc0,uVar2,0xb);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  else if (*(int *)(lVar1 + 0x18) == 0x17) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
    lVar1 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    uVar2 = 0x72a8c0;
    goto LAB__text__002345a0;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  lVar1 = *plVar4;
LAB__text__002345f8:
  (**(code **)(lVar1 + 0x18))(plVar4);
  return;
}


