/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003083f0; name: FUN_.text__003083f0
 */


bool FUN__text__003083f0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_28;
  
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar5 = FUN__text__00635c20();
    if ((uVar5 & 1) != 0) {
      return false;
    }
  }
  else if (*(char *)(param_1 + 0x55) != '\0') {
    return false;
  }
  FUN__text__003204d0(&local_28);
  plVar1 = (long *)(param_1 + 0x60);
  uVar5 = FUN__text__003028c4(local_28,plVar1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if ((uVar5 & 1) != 0) {
    return *(int *)(param_1 + 0x94) != 1;
  }
  if (*(int *)(param_1 + 0x90) == 2) {
    return true;
  }
  FUN__text__003204a0(&local_28);
  local_44 = 0;
  local_48 = 0;
  FUN__text__00303cd8(local_28,plVar1,&local_44,&local_48);
  uVar3 = local_44;
  uVar2 = local_48;
  local_50 = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))((long *)(param_1 + 0x48));
  uVar4 = FUN__text__00320e30(uVar3,uVar2,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  if ((uVar4 >> 5 & 1) != 0) {
    bVar6 = false;
    goto LAB__text__00308964;
  }
  FUN__text__003204a0(&local_50);
  lVar7 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = 0x7cda0;
  uVar4 = FUN__text__0035d3c4(lVar7,0);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    do {
      lVar7 = FUN__text__00321ac0();
      if (*plVar1 == *(long *)(lVar7 + lVar8)) {
        lVar7 = *(long *)(DAT_008e14b8 + 0x240);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar5 = FUN__text__0035d418(lVar7,0);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        bVar6 = false;
        if ((uVar5 & 1) != 0) goto LAB__text__00308950;
        break;
      }
      uVar5 = uVar5 - 1;
      lVar8 = lVar8 + 8;
    } while (uVar5 != 0);
  }
  lVar7 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__0035d3c4(lVar7,1);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    lVar7 = 0x7cdd0;
    do {
      lVar8 = FUN__text__00321ac0();
      if (*plVar1 == *(long *)(lVar8 + lVar7)) {
        lVar7 = *(long *)(DAT_008e14b8 + 0x240);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar5 = FUN__text__0035d418(lVar7,1);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        if ((uVar5 & 1) != 0) goto LAB__text__00308944;
        break;
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + 8;
    } while (uVar5 != 0);
  }
  lVar7 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__0035d3c4(lVar7,2);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    lVar7 = 0x7ce00;
    do {
      lVar8 = FUN__text__00321ac0();
      if (*plVar1 == *(long *)(lVar8 + lVar7)) {
        lVar7 = *(long *)(DAT_008e14b8 + 0x240);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar5 = FUN__text__0035d418(lVar7,2);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        if ((uVar5 & 1) != 0) goto LAB__text__00308944;
        break;
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + 8;
    } while (uVar5 != 0);
  }
  lVar7 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__0035d3c4(lVar7,3);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    lVar7 = 0x7ce30;
    do {
      lVar8 = FUN__text__00321ac0();
      if (*plVar1 == *(long *)(lVar8 + lVar7)) {
        lVar7 = *(long *)(DAT_008e14b8 + 0x240);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar5 = FUN__text__0035d418(lVar7,3);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        if ((uVar5 & 1) != 0) goto LAB__text__00308944;
        break;
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + 8;
    } while (uVar5 != 0);
  }
  lVar7 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__0035d3c4(lVar7,4);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    lVar7 = 0x7ce60;
    do {
      lVar8 = FUN__text__00321ac0();
      if (*plVar1 == *(long *)(lVar8 + lVar7)) {
        lVar7 = *(long *)(DAT_008e14b8 + 0x240);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar5 = FUN__text__0035d418(lVar7,4);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        if ((uVar5 & 1) != 0) goto LAB__text__00308944;
        break;
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + 8;
    } while (uVar5 != 0);
  }
  lVar7 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__0035d3c4(lVar7,5);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    lVar7 = 0x7ce90;
    do {
      lVar8 = FUN__text__00321ac0();
      if (*plVar1 == *(long *)(lVar8 + lVar7)) {
        lVar7 = *(long *)(DAT_008e14b8 + 0x240);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar5 = FUN__text__0035d418(lVar7,5);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        if ((uVar5 & 1) != 0) goto LAB__text__00308944;
        break;
      }
      uVar5 = uVar5 - 1;
      lVar7 = lVar7 + 8;
    } while (uVar5 != 0);
  }
  bVar6 = true;
LAB__text__00308950:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
LAB__text__00308964:
  if (local_28 == 0) {
    return bVar6;
  }
  (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  return bVar6;
LAB__text__00308944:
  bVar6 = false;
  goto LAB__text__00308950;
}


