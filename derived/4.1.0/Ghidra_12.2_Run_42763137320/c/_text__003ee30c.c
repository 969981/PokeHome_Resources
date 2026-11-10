/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ee30c; name: FUN_.text__003ee30c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003ee30c(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar6 = tpidr_el0;
    uVar6 = uVar6 & 0xffffffffffffe000;
    if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__003ee698;
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00110090();
    }
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    uVar6 = tpidr_el0;
    uVar6 = uVar6 & 0xffffffffffffe000;
    if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__003ee698;
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00110090();
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      local_50 = 0x1573e9b982bdd24f;
      uStack_48 = 0x713f23;
      local_40 = 0xc;
      local_38 = 0;
      uVar6 = FUN__text__003f2d08(*(undefined8 *)(param_1 + 0x1f0),
                                  -(ulong)(*(long *)(param_1 + 0x68) == 0),&local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      if ((uVar6 & 1) != 0) {
        local_50 = 0xffa497865e79aca2;
        uStack_48 = 0x7133f3;
        local_40 = 0xf;
        local_38 = 0;
        uVar6 = FUN__text__003f2c1c(*(undefined8 *)(param_1 + 0x1f0),
                                    -(ulong)(*(long *)(param_1 + 0x60) == 0),&local_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
        if ((uVar6 & 1) != 0) {
          nn::os::LockMutex((MutexType *)(param_1 + 0x150));
          uVar4 = uRam0000000000724ba8;
          uVar3 = _DAT_00724ba0;
          uVar2 = uRam0000000000724a08;
          uVar1 = _DAT_00724a00;
          *(undefined8 *)(param_1 + 0x128) = 0;
          *(undefined8 *)(param_1 + 0x120) = 0;
          *(undefined8 *)(param_1 + 0x138) = uVar2;
          *(undefined8 *)(param_1 + 0x130) = uVar1;
          uVar1 = _DAT_0073b0a0;
          *(undefined8 *)(param_1 + 0x148) = uVar4;
          *(undefined8 *)(param_1 + 0x140) = uVar3;
          FUN__text__003f2d5c(0,uVar1,_DAT_0073b0b0,*(undefined8 *)(param_1 + 0x1f0),
                              -(ulong)(*(long *)(param_1 + 0x60) == 0));
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x150));
          return 1;
        }
      }
      return 0;
    }
    uVar6 = tpidr_el0;
    uVar6 = uVar6 & 0xffffffffffffe000;
    if (*(long *)(uVar6 + 0x98) == 0x10) {
LAB__text__003ee698:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00110090();
    }
  }
  (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Subroutine does not return */
  FUN__text__00110090(0);
}


