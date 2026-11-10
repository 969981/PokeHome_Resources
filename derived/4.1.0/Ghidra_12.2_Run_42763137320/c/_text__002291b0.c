/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002291b0; name: FUN_.text__002291b0
 */


void FUN__text__002291b0(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_48;
  long local_40;
  undefined1 uStack_31;
  
  iVar1 = *(int *)(param_2[0x148] + 4);
  if (iVar1 == 5) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
    lVar3 = FUN__text__0022bcac(&uStack_31,uVar2,&local_40,&local_48);
  }
  else if (iVar1 - 9U < 2) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
    lVar3 = FUN__text__0022ba50(&uStack_31,uVar2,&local_40,&local_48);
  }
  else {
    uVar2 = FUN__text__0012559c(param_2);
    if (iVar1 == 6) {
      (**(code **)(*param_2 + 0x10))(&local_40,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
      lVar3 = FUN__text__0022bdd8(&uStack_31,uVar2,&local_40,&local_48);
    }
    else {
      (**(code **)(*param_2 + 0x10))(&local_40,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
      lVar3 = FUN__text__0022bf04(&uStack_31,uVar2,&local_40,&local_48);
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  *param_1 = lVar3;
  return;
}


