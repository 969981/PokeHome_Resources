/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a4bd0; name: FUN_.text__001a4bd0
 */


void FUN__text__001a4bd0(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_50;
  long local_48;
  long local_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__003c7c60(lVar3,param_1 + 0x1b8,0);
  if ((*param_2 == 0) || (uVar1 = FUN__text__00306588(), (uVar1 & 1) != 0)) {
    FUN__text__003c7c60(lVar3,param_1 + 0x1b0,0);
    FUN__text__003c7c60(lVar3,param_1 + 0x1a8,0);
    goto LAB__text__001a4db4;
  }
  FUN__text__003c7c60(lVar3,param_1 + 0x1b0,1);
  FUN__text__003c7c60(lVar3,param_1 + 0x1a8,1);
  uVar2 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_28,uVar2,0);
  lVar4 = *(long *)(local_28 + 0x60);
  if (lVar4 == 0) {
LAB__text__001a4ca8:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_28 != 0) goto LAB__text__001a4ca8;
  }
  uVar1 = FUN__text__00306a08(*param_2,2);
  lVar5 = *(long *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
    if (lVar5 == 0) goto LAB__text__001a4ddc;
    local_50 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_28 = -0x2657efd7cb9258c8;
    FUN__text__001aabf8(lVar5,param_1 + 0x1c0,&local_50,&local_28,0,1,param_2);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  else {
    if (lVar5 == 0) {
LAB__text__001a4ddc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    local_48 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_28 = -0x2657eed7cb925715;
    FUN__text__001ac594(lVar5,param_1 + 0x1c0,&local_48,&local_28,0,0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
LAB__text__001a4db4:
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


