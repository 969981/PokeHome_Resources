/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00267c48; name: FUN_.text__00267c48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00267c48(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_48;
  long local_40;
  undefined1 uStack_31;
  
  if (param_3 != 0) {
    plVar1 = _DAT_0089f5c8;
    if (*(long *)(param_3 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x70) + 0x58);
    }
    lVar4 = *plVar1;
    if (lVar4 != -0x42dcf8354cfe88a5) {
      if (lVar4 == 0x7167f64cea5b86b8) {
        iVar2 = *(int *)param_2[0x148];
        uVar3 = FUN__text__0012559c(param_2);
        if (iVar2 == 2) {
          (**(code **)(*param_2 + 0x10))(&local_40,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
          lVar4 = FUN__text__002687e0(&uStack_31,uVar3,&local_40,&local_48);
        }
        else {
          (**(code **)(*param_2 + 0x10))(&local_40,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
          lVar4 = FUN__text__00268918(&uStack_31,uVar3,&local_40,&local_48);
        }
      }
      else {
        if (lVar4 != -0x293e7a6eea670c1f) {
          *param_1 = 0;
          return;
        }
        uVar3 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(&local_40,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
        lVar4 = FUN__text__002686b4(&uStack_31,uVar3,&local_40,&local_48);
      }
      goto LAB__text__00267d60;
    }
  }
  uVar3 = FUN__text__0012559c(param_2);
  (**(code **)(*param_2 + 0x10))(&local_40,param_2);
  (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_48);
  lVar4 = FUN__text__00268588(&uStack_31,uVar3,&local_40,&local_48);
LAB__text__00267d60:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  *param_1 = lVar4;
  return;
}


