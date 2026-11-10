/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194330; name: FUN_.text__00194330
 */


undefined8
FUN__text__00194330(long param_1,long *param_2,undefined4 *param_3,long param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_65 [13];
  long local_58;
  long local_38;
  
  if ((param_3 == (undefined4 *)0x0) || (local_38 = *param_2, local_38 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar6 = (long *)(local_38 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar2 = FUN__text__00194730(param_1,&local_38,param_4);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  local_58 = *param_2;
  local_38 = 0;
  if ((uVar2 & 1) == 0) {
    FUN__text__00306824(local_58);
    return 0;
  }
  if (local_58 == 0) {
    FUN__text__0019485c(param_1,&local_58,param_4);
    uVar2 = FUN__text__00306588(*param_2);
  }
  else {
    plVar6 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN__text__0019485c(param_1,&local_58,param_4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar2 = FUN__text__00306588(*param_2);
  }
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_4 + 4) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + 8);
    if (uVar1 != 0) {
      uVar2 = 0;
      plVar6 = (long *)(*(long *)(param_1 + 0x40) + 0x10);
      do {
        if (*(int *)(*plVar6 + 0xc) == 1) goto LAB__text__00194464;
        uVar2 = uVar2 + 1;
        plVar6 = plVar6 + 4;
      } while (uVar1 != uVar2);
      uVar2 = 0;
LAB__text__00194464:
      if (*(int *)(param_4 + 4) == (int)uVar2) {
        uVar2 = FUN__text__00306a08(*param_2,2);
        if (((uVar2 & 1) != 0) || (uVar2 = FUN__text__00306bcc(*param_2), (uVar2 & 1) != 0))
        goto LAB__text__001944d8;
        FUN__text__00307180(*param_2,auStack_65,0xd);
        lVar3 = FUN__text__00325bc0();
        uVar2 = FUN__text__0016af40(*(undefined4 *)(lVar3 + 0x2c),auStack_65);
        if ((uVar2 & 1) != 0) {
          lVar3 = FUN__text__00325bc0();
          uVar2 = (ulong)*(uint *)(lVar3 + 0x2c);
          if (*(uint *)(lVar3 + 0x2c) != 0) goto LAB__text__001944e8;
        }
        FUN__text__00307afc(*param_2);
        uVar2 = FUN__text__0019498c();
        if ((int)uVar2 != 0) goto LAB__text__001944e8;
        if ((param_5 & 1) != 0) {
          uVar2 = FUN__text__00193f64(uVar2,param_2);
          goto joined_r0x00194600;
        }
        goto LAB__text__00194668;
      }
    }
    lVar3 = FUN__text__00325bc0();
    uVar2 = (ulong)*(uint *)(lVar3 + 0x2c);
    goto LAB__text__001944e8;
  }
  uVar2 = FUN__text__00306a08(*param_2,1);
  if ((uVar2 & 1) != 0) {
    *param_3 = 0;
    return 1;
  }
  lVar3 = FUN__text__00195358(param_1,param_4);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
LAB__text__001945cc:
    FUN__text__003083e0(*param_2);
    uVar2 = FUN__text__0019498c();
    if ((0xc < (uint)uVar2) || ((1 << (ulong)((uint)uVar2 & 0x1f) & 0x1801U) == 0))
    goto LAB__text__001944e8;
  }
  else {
    uVar2 = *(ulong *)(lVar3 + 8);
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar5 == 0) goto LAB__text__001945cc;
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar1 = FUN__text__00303c20(lVar5,uVar2 >> 0x20,(int)uVar4 + (int)((ulong)uVar4 >> 0x20) * 6);
    uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
    if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x001945bc */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x725932) * 4 + 0x1944e8))(3);
      return uVar4;
    }
  }
  if ((param_5 & 1) == 0) {
LAB__text__00194668:
    uVar2 = FUN__text__003083e0(*param_2);
    uVar4 = FUN__text__00193ec0(uVar2,auStack_65,param_2,uVar2 & 0xffffffff);
    uVar2 = FUN__text__00194154(uVar4,param_2,auStack_65,7);
    if ((uVar2 & 1) != 0) {
LAB__text__00194694:
      uVar2 = 10;
      goto LAB__text__001944e8;
    }
    uVar2 = FUN__text__00194154(uVar2,param_2,auStack_65,5);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN__text__00194154(uVar2,param_2,auStack_65,3);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN__text__00194154(uVar2,param_2,auStack_65,4);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN__text__00194154(uVar2,param_2,auStack_65,2);
          if ((uVar2 & 1) == 0) {
            uVar1 = FUN__text__00194154(uVar2,param_2,auStack_65,1);
            uVar2 = (ulong)(uVar1 & 1);
            goto LAB__text__001944e8;
          }
LAB__text__0019470c:
          uVar2 = 3;
          goto LAB__text__001944e8;
        }
LAB__text__001946e8:
        uVar2 = 5;
        goto LAB__text__001944e8;
      }
LAB__text__001946cc:
      uVar2 = 7;
      goto LAB__text__001944e8;
    }
  }
  else {
    uVar2 = FUN__text__00193f64(uVar2,param_2);
joined_r0x00194600:
    if ((uVar2 & 1) == 0) {
LAB__text__001944d8:
      uVar2 = 0;
      goto LAB__text__001944e8;
    }
    uVar2 = FUN__text__003069e8(*param_2,7);
    if ((uVar2 & 1) != 0) goto LAB__text__00194694;
    uVar2 = FUN__text__003069e8(*param_2,5);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN__text__003069e8(*param_2,3);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN__text__003069e8(*param_2,4);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN__text__003069e8(*param_2,2);
          if ((uVar2 & 1) == 0) {
            uVar1 = FUN__text__003069e8(*param_2,1);
            uVar2 = (ulong)(uVar1 & 1);
            goto LAB__text__001944e8;
          }
          goto LAB__text__0019470c;
        }
        goto LAB__text__001946e8;
      }
      goto LAB__text__001946cc;
    }
  }
  uVar2 = 8;
LAB__text__001944e8:
  *param_3 = (int)uVar2;
  return 1;
}


