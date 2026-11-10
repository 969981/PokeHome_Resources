/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002484bc; name: FUN_.text__002484bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002484bc(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long local_58;
  long local_50 [4];
  undefined1 uStack_11;
  
  if (param_3 == 0) {
    uVar2 = FUN__text__0012559c(param_2);
    (**(code **)(*param_2 + 0x10))(local_50,param_2);
    (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
    lVar3 = FUN__text__0024970c(&uStack_11,uVar2,local_50,&local_58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    if (local_50[0] != 0) {
      (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
    }
    *param_1 = lVar3;
    return;
  }
  plVar1 = _DAT_0089f5c8;
  if (*(long *)(param_3 + 0x70) != 0) {
    plVar1 = (long *)(*(long *)(param_3 + 0x70) + 0x58);
  }
  lVar3 = *plVar1;
  if (lVar3 < -0x347bd61b22420c4c) {
    if (-0x59c2957e7c12aee2 < lVar3) {
      if (lVar3 == -0x59c2957e7c12aee1) {
        lVar3 = FUN__text__0024a624();
        if (*(int *)(lVar3 + 0x60) == 1) {
          uVar2 = FUN__text__0012559c(param_2);
          (**(code **)(*param_2 + 0x10))(local_50,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
          lVar3 = FUN__text__00249e1c(&uStack_11,uVar2,local_50,&local_58);
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
          if (local_50[0] != 0) {
            (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
          }
          *param_1 = lVar3;
          return;
        }
      }
      else {
        if (lVar3 == -0x508fab477d433185) {
          uVar2 = FUN__text__0012559c(param_2);
          (**(code **)(*param_2 + 0x10))(local_50,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
          lVar3 = FUN__text__00249974(&uStack_11,uVar2,local_50,&local_58);
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
          if (local_50[0] != 0) {
            (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
          }
          *param_1 = lVar3;
          return;
        }
        if (lVar3 != -0x3a829eadabfe6e51) goto LAB__text__00248cb4;
        lVar3 = FUN__text__0024a624();
        if (*(int *)(lVar3 + 0x60) == 1) {
          uVar2 = FUN__text__0012559c(param_2);
          (**(code **)(*param_2 + 0x10))(local_50,param_2);
          (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
          lVar3 = FUN__text__0024a070(&uStack_11,uVar2,local_50,&local_58);
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
          if (local_50[0] != 0) {
            (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
          }
          *param_1 = lVar3;
          return;
        }
      }
      goto LAB__text__00248ca8;
    }
    if (lVar3 == -0x7d610a01d06bf33c) {
      uVar2 = FUN__text__0012559c(param_2);
      (**(code **)(*param_2 + 0x10))(local_50,param_2);
      (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
      lVar3 = FUN__text__00249aa0(&uStack_11,uVar2,local_50,&local_58);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      if (local_50[0] != 0) {
        (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
      }
      *param_1 = lVar3;
      return;
    }
    if (lVar3 != -0x711d6151956a79b6) goto LAB__text__00248cb4;
LAB__text__00248c9c:
    lVar3 = param_2[0x14c];
    uVar4 = 1;
  }
  else {
    if (0x4c78b438af1854d7 < lVar3) {
      if (lVar3 == 0x4c78b438af1854d8) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_50,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
        lVar3 = FUN__text__0024a19c(&uStack_11,uVar2,local_50,&local_58);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        if (local_50[0] != 0) {
          (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      if (lVar3 == 0x6146648b210952ad) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_50,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
        lVar3 = FUN__text__00249cf4(&uStack_11,uVar2,local_50,&local_58);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        if (local_50[0] != 0) {
          (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      if (lVar3 == 0x64aa3cc63ffbbfe7) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_50,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
        lVar3 = FUN__text__00249f48(&uStack_11,uVar2,local_50,&local_58);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        if (local_50[0] != 0) {
          (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      goto LAB__text__00248cb4;
    }
    if (lVar3 == -0x347bd61b22420c4c) {
      lVar3 = FUN__text__0024a624();
      if (*(int *)(lVar3 + 0x60) == 1) {
        lVar3 = FUN__text__00321ac0();
        uVar4 = *(undefined4 *)(lVar3 + 0x193528);
        lVar3 = FUN__text__0030d5f0();
        *(undefined4 *)(lVar3 + 0x13b4) = uVar4;
        local_50[0] = 0x753f74378b49da9c;
        local_50[1] = 0x7167d4;
        local_50[2] = 8;
        local_50[3] = 0;
        lVar3 = FUN__text__0024a2d0(param_2[0xb9],local_50);
        if (local_50[3] != 0) {
          (**(code **)(*(long *)(local_50[3] + 0x48) + 0x18))();
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl();
        }
        if (**(char **)(lVar3 + 0x640) == '\0') {
          FUN__text__0030c840(1);
          FUN__text__00248da0(local_50,param_2);
          *param_1 = local_50[0];
          return;
        }
        goto LAB__text__00248c9c;
      }
    }
    else {
      if (lVar3 == -0x212db102ea947278) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_50,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
        lVar3 = FUN__text__00249838(&uStack_11,uVar2,local_50,&local_58);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        if (local_50[0] != 0) {
          (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
      if (lVar3 != -0x6ab4af357f30aa2) goto LAB__text__00248cb4;
      lVar3 = FUN__text__0024a624();
      if (*(int *)(lVar3 + 0x60) == 1) {
        uVar2 = FUN__text__0012559c(param_2);
        (**(code **)(*param_2 + 0x10))(local_50,param_2);
        (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_58);
        lVar3 = FUN__text__00249bc8(&uStack_11,uVar2,local_50,&local_58);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        if (local_50[0] != 0) {
          (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
        }
        *param_1 = lVar3;
        return;
      }
    }
LAB__text__00248ca8:
    lVar3 = param_2[0x14c];
    uVar4 = 2;
  }
  *(undefined4 *)(lVar3 + 4) = uVar4;
LAB__text__00248cb4:
  *param_1 = 0;
  return;
}


