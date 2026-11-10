/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00229010; name: FUN_.text__00229010
 */


void FUN__text__00229010(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  long local_38;
  undefined1 uStack_11;
  
  iVar1 = *(int *)(param_2[0x148] + 4);
  if (iVar1 == 5) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_38,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
    lVar3 = FUN__text__0022bcac(&uStack_11,uVar2,&local_38,&local_40);
  }
  else if (iVar1 == 3) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_38,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
    lVar3 = FUN__text__0022b7f8(&uStack_11,uVar2,&local_38,&local_40);
  }
  else {
    if (iVar1 != 2) {
      *param_1 = 0;
      return;
    }
    *(undefined4 *)(param_2[0x148] + 8) = 0;
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_38,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
    lVar3 = FUN__text__0022ad2c(&uStack_11,uVar2,&local_38,&local_40);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *param_1 = lVar3;
  return;
}


