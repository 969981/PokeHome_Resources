/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c7824; name: FUN_.text__001c7824
 */


void FUN__text__001c7824(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long local_58;
  long local_50;
  long local_48;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar2 == 0) {
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_48,uVar1,0);
  lVar2 = *(long *)(local_48 + 0x60);
  if (lVar2 == 0) {
    plVar4 = (long *)(local_48 + 0x48);
    lVar2 = *plVar4;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    if ((local_48 != 0) && ((**(code **)(*(long *)(local_48 + 0x48) + 0x18))(), lVar2 == 0))
    goto LAB__text__001c7960;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
LAB__text__001c7988:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    plVar4 = (long *)(lVar2 + 0x48);
    local_50 = lVar2;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__001ac1fc(lVar5,param_1 + 0x40,&local_50,0x725e88);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) goto LAB__text__001c7988;
    local_58 = lVar2;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(plVar4);
    FUN__text__001ac1fc(lVar5,param_1 + 0x50,&local_58,0x725e88);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar2 = *plVar4;
  }
  (**(code **)(lVar2 + 0x18))(plVar4);
LAB__text__001c7960:
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


