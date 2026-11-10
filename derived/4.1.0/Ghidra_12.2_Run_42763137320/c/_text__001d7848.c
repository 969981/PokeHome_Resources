/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d7848; name: FUN_.text__001d7848
 */


void FUN__text__001d7848(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_28;
  
  uVar2 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_28,uVar2,0);
  lVar3 = *(long *)(local_28 + 0x60);
  if (lVar3 == 0) {
LAB__text__001d789c:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (local_28 != 0) goto LAB__text__001d789c;
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x45) == '\0') {
      if (lVar4 == 0) goto LAB__text__001d7bdc;
      local_78 = lVar3;
      local_70 = lVar3;
      if (lVar3 == 0) {
        local_28 = -0x145f984063980cbe;
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 != 0x14) goto LAB__text__001d7b50;
LAB__text__001d79f0:
        local_58 = 0x24a1d0223a2a487b;
      }
      else {
        plVar5 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        local_28 = -0x145f984063980cbe;
        (**(code **)(*plVar5 + 0x10))(plVar5);
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0x14) goto LAB__text__001d79f0;
LAB__text__001d7b50:
        local_58 = *(undefined8 *)((long)iVar1 * 8 + 0x725f10);
      }
      FUN__text__001ac2ac(lVar4,param_1 + 0x38,&local_70,&local_28,0,&local_78,&local_58);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      goto LAB__text__001d7bb0;
    }
    if (lVar4 == 0) {
LAB__text__001d7bdc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    local_68 = lVar3;
    local_60 = lVar3;
    if (lVar3 == 0) {
      local_28 = -0x145c92406395ccb5;
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 != 0x14) goto LAB__text__001d7a28;
LAB__text__001d7914:
      local_58 = 0x24a1d0223a2a487b;
    }
    else {
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      local_28 = -0x145c92406395ccb5;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0x14) goto LAB__text__001d7914;
LAB__text__001d7a28:
      local_58 = *(undefined8 *)((long)iVar1 * 8 + 0x725f10);
    }
    FUN__text__001ac3d0(lVar4,param_1 + 0x38,&local_60,&local_28,0,1,2,&local_68,&local_58,
                        *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48));
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    goto LAB__text__001d7bb0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB__text__001d7bdc;
  local_50 = lVar3;
  local_48 = lVar3;
  if (lVar3 == 0) {
    local_28 = -0x1466a440639e3fd0;
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0x14) goto LAB__text__001d7ac8;
LAB__text__001d7984:
    local_58 = 0x24a1d0223a2a487b;
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_28 = -0x1466a440639e3fd0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0x14) goto LAB__text__001d7984;
LAB__text__001d7ac8:
    local_58 = *(undefined8 *)((long)iVar1 * 8 + 0x725f10);
  }
  FUN__text__001ac2ac(lVar4,param_1 + 0x38,&local_48,&local_28,0,&local_50,&local_58);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB__text__001d7bb0:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


