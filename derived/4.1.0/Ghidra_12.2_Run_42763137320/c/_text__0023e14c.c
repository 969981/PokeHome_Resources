/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023e14c; name: FUN_.text__0023e14c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0023e14c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  long local_38;
  undefined1 uStack_11;
  
  if (param_3 == 0) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_38,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
    lVar3 = FUN__text__0023ee0c(&uStack_11,uVar2,&local_38,&local_40);
  }
  else {
    plVar1 = _DAT_0089f5c8;
    if (*(long *)(param_3 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x70) + 0x58);
    }
    if (*plVar1 == 0x7167f64cea5b86b8) {
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(&local_38,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
      lVar3 = FUN__text__0023f0d8(&uStack_11,uVar2,&local_38,&local_40);
    }
    else {
      if (*plVar1 != -0x293e7a6eea670c1f) {
        *param_1 = 0;
        return;
      }
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(&local_38,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
      lVar3 = FUN__text__0023ef38(&uStack_11,uVar2,&local_38,&local_40);
    }
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


