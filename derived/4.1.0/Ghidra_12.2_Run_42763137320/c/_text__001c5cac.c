/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c5cac; name: FUN_.text__001c5cac
 */


void FUN__text__001c5cac(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  long local_18;
  
  if (param_2 == (int *)0x0) {
LAB__text__001c5dd0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if (*param_2 != 2) {
    FUN__text__001c5878(param_1,0);
    return;
  }
  FUN__text__001c5878(param_1,6);
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_18,uVar1,0);
  lVar2 = *(long *)(local_18 + 0x60);
  if (lVar2 == 0) {
    plVar3 = (long *)(local_18 + 0x48);
    lVar2 = *plVar3;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    if ((local_18 != 0) && ((**(code **)(*(long *)(local_18 + 0x48) + 0x18))(), lVar2 == 0)) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB__text__001c5dd0;
    plVar3 = (long *)(lVar2 + 0x48);
    local_38 = lVar2;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_18 = 0x3fe2536e6a95ab8;
    FUN__text__001ac1fc(lVar4,param_1 + 0x140,&local_38,&local_18);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0x18))(plVar3);
  return;
}


