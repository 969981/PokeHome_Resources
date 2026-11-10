/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00251970; name: FUN_.text__00251970
 */


void FUN__text__00251970(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  plVar1 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))();
  plVar2 = (long *)FUN__text__00251af8();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB__text__00251a20;
  }
  plVar1 = (long *)(param_1 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  local_38 = param_1;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  (*(code *)*param_2)(param_2 + 4,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
LAB__text__00251a20:
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__00251970(lVar3,param_2,1);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar3 = *(long *)(param_1 + 0x70);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__00251970(lVar3,param_2,1);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


