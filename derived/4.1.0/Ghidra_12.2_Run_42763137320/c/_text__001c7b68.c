/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c7b68; name: FUN_.text__001c7b68
 */


void FUN__text__001c7b68(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  local_3c = 0;
  FUN__text__001c7f44(param_1,(long)&local_38 + 4,&local_38,&local_3c);
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_48,uVar1,0);
  lVar5 = *(long *)(local_48 + 0x60);
  if (lVar5 == 0) {
    plVar3 = (long *)(local_48 + 0x48);
    lVar5 = *plVar3;
LAB__text__001c7d34:
    (**(code **)(lVar5 + 0x18))(plVar3);
    return;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  if ((local_48 != 0) && ((**(code **)(*(long *)(local_48 + 0x48) + 0x18))(), lVar5 == 0)) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar5 + 0x48);
    local_50 = lVar5;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_48 = 0x29d05749965b119f;
    FUN__text__001aba58(lVar4,param_1 + 0x40,&local_50,&local_48,0,1,local_38._4_4_,
                        local_38 & 0xffffffff);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      piVar2 = *(int **)(*(long *)(param_1 + 0x18) + 0x38);
      if (piVar2 != (int *)0x0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (*piVar2 == 0) {
          if (lVar4 == 0) goto LAB__text__001c7d50;
          local_58 = lVar5;
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
          local_48 = -0x1ee05dc2eb71b9b0;
          FUN__text__001ac1fc(lVar4,param_1 + 0x50,&local_58,&local_48);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
        }
        else {
          if (lVar4 == 0) goto LAB__text__001c7d50;
          local_60 = lVar5;
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
          local_48 = 0x29d3db49965e27c2;
          FUN__text__001abfc4(lVar4,param_1 + 0x50,&local_60,&local_48,0,local_3c);
          if (local_60 != 0) {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
            local_60 = 0;
          }
        }
      }
      lVar5 = *plVar3;
      goto LAB__text__001c7d34;
    }
  }
LAB__text__001c7d50:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


