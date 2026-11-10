/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026b00c; name: FUN_.text__0026b00c
 */


void FUN__text__0026b00c(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_40;
  long local_38;
  undefined1 uStack_11;
  
  if (param_3 == 0) {
    if (*(int *)param_2[0x148] != 0) {
      *param_1 = 0;
      return;
    }
    uVar1 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_38,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
    lVar2 = FUN__text__0026bb0c(&uStack_11,uVar1,&local_38,&local_40);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      *param_1 = lVar2;
      return;
    }
  }
  else {
    lVar2 = 0;
  }
  *param_1 = lVar2;
  return;
}


