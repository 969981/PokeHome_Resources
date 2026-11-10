/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017d86c; name: FUN_.text__0017d86c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0017d86c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  undefined1 uStack_11;
  
  if (param_3 == 0) {
LAB__text__0017d940:
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(&local_38,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
    lVar4 = FUN__text__0017e2a4(&uStack_11,uVar2,&local_38,&local_40);
  }
  else {
    lVar4 = 0;
    plVar1 = _DAT_0089f5c8;
    if (*(long *)(param_3 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x70) + 0x58);
    }
    lVar3 = *plVar1;
    if (lVar3 < 0x39fe55b2a45aa420) {
      if (lVar3 == -0x7a9125f2053c5c61) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(&local_38,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
        lVar4 = FUN__text__0017e3d0(&uStack_11,uVar2,&local_38,&local_40);
      }
      else {
        if (lVar3 != -0x4e139f3ec905653c) {
          if (lVar3 != 0x1d0e3ab87509999b) goto LAB__text__0017d928;
          if (((undefined4 *)param_2[0x148])[1] == 2) {
            lVar4 = 0;
            *(undefined4 *)param_2[0x148] = 1;
            goto LAB__text__0017d928;
          }
          goto LAB__text__0017d940;
        }
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(&local_38,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
        lVar4 = FUN__text__0017e628(&uStack_11,uVar2,&local_38,&local_40);
      }
    }
    else if (lVar3 == 0x39fe55b2a45aa420) {
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(&local_38,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
      lVar4 = FUN__text__0017e4fc(&uStack_11,uVar2,&local_38,&local_40);
    }
    else if (lVar3 == 0x444742a661e56382) {
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(&local_38,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
      lVar4 = FUN__text__0017e754(&uStack_11,uVar2,&local_38,&local_40);
    }
    else {
      if (lVar3 != 0x5b2b7ee9f60426e1) goto LAB__text__0017d928;
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(&local_38,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
      lVar4 = FUN__text__0017e880(&uStack_11,uVar2,&local_38,&local_40);
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    *param_1 = lVar4;
    return;
  }
LAB__text__0017d928:
  *param_1 = lVar4;
  return;
}


