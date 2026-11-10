/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001faba8; name: FUN_.text__001faba8
 */


void FUN__text__001faba8(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long local_48;
  
  lVar7 = DAT_008e2080;
  if (((DAT_008e2080 == 0) || (lVar10 = *(long *)(DAT_008e2080 + 0x70), lVar10 == 0)) ||
     (lVar9 = *(long *)(DAT_008e2080 + 0x290), lVar9 == 0)) goto LAB__text__001fb1bc;
  plVar8 = (long *)(lVar9 + 0x48);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  local_48 = lVar9;
  (**(code **)(*plVar8 + 0x10))(plVar8);
  lVar1 = lVar7 + 0xa4;
  FUN__text__001916b0(lVar10,&local_48,lVar1,0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  bVar2 = FUN__text__0030672c(lVar9);
  uVar5 = FUN__text__00306bc4(lVar9);
  if (bVar2 == 0) {
    if (((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0xac) == 0)) &&
       (*(int *)(param_1 + 0xb0) == 0)) {
LAB__text__001facc0:
      if (*(int *)(param_1 + 0xb4) == 0) goto LAB__text__001fb18c;
    }
  }
  else {
    iVar3 = FUN__text__00632cd4(uVar5,0);
    if (iVar3 == *(int *)(param_1 + 0xa8)) {
      if (bVar2 < 2) {
        if (*(int *)(param_1 + 0xac) == 0) goto LAB__text__001face4;
      }
      else {
        iVar3 = FUN__text__00632cd4(uVar5,1);
        if (iVar3 == *(int *)(param_1 + 0xac)) {
LAB__text__001face4:
          if (bVar2 < 3) {
            if (*(int *)(param_1 + 0xb0) == 0) goto LAB__text__001fad1c;
          }
          else {
            iVar3 = FUN__text__00632cd4(uVar5,2);
            if (iVar3 == *(int *)(param_1 + 0xb0)) {
LAB__text__001fad1c:
              if (bVar2 < 4) goto LAB__text__001facc0;
              iVar3 = FUN__text__00632cd4(uVar5,3);
              if (iVar3 == *(int *)(param_1 + 0xb4)) goto LAB__text__001fb18c;
            }
          }
        }
      }
    }
  }
  uVar4 = FUN__text__001937a8(lVar10,lVar1,(int *)(param_1 + 0xa8));
  FUN__text__00193c9c(lVar10,lVar1,uVar4 & 1);
  local_68 = lVar9;
  uVar5 = (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar8);
  uVar6 = FUN__text__001fb528(uVar5,&local_68,lVar1);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))(plVar8);
  local_68 = 0;
  uVar5 = FUN__text__00306bc4(lVar9);
  if ((uVar6 & 1) != 0) {
    FUN__text__00193e08(lVar10,lVar1,1);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN__text__001938b8(lVar10,lVar1,&local_98);
  iVar3 = *(int *)(param_1 + 0xa8);
  if (iVar3 == (int)local_98) {
    uVar12 = 0;
LAB__text__001fae24:
    local_a0 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar8);
    FUN__text__00193970(lVar10,&local_a0,lVar1,0,uVar12);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    iVar3 = *(int *)(param_1 + 0xac);
    if (iVar3 != (int)local_98) goto LAB__text__001fae9c;
LAB__text__001fae78:
    uVar12 = 0;
LAB__text__001faed4:
    local_a0 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar8);
    FUN__text__00193970(lVar10,&local_a0,lVar1,1,uVar12);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    iVar3 = *(int *)(param_1 + 0xb0);
    if (iVar3 == (int)local_98) goto LAB__text__001faf28;
LAB__text__001faf4c:
    if (iVar3 == uStack_90._4_4_) {
      uVar12 = 1;
      goto LAB__text__001faf84;
    }
    if (iVar3 == (int)local_80) {
      uVar12 = 2;
      goto LAB__text__001faf84;
    }
    if (iVar3 == local_78._4_4_) {
      uVar12 = 3;
      goto LAB__text__001faf84;
    }
    FUN__text__00633304(uVar5,2);
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 == (int)local_98) goto LAB__text__001fafd8;
LAB__text__001faffc:
    if (iVar3 == uStack_90._4_4_) {
      uVar12 = 1;
      goto LAB__text__001fb034;
    }
    if (iVar3 == (int)local_80) {
      uVar12 = 2;
      goto LAB__text__001fb034;
    }
    if (iVar3 == local_78._4_4_) {
      uVar12 = 3;
      goto LAB__text__001fb034;
    }
    FUN__text__00633304(uVar5,3);
    lVar11 = *(long *)(DAT_008e15a0 + 0x80);
    if (lVar11 == 0) goto LAB__text__001fb0e0;
LAB__text__001fb08c:
    plVar13 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN__text__00205890(lVar11,uVar5);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  else {
    if (iVar3 == uStack_90._4_4_) {
      uVar12 = 1;
      goto LAB__text__001fae24;
    }
    if (iVar3 == (int)local_80) {
      uVar12 = 2;
      goto LAB__text__001fae24;
    }
    if (iVar3 == local_78._4_4_) {
      uVar12 = 3;
      goto LAB__text__001fae24;
    }
    FUN__text__00633304(uVar5,0);
    iVar3 = *(int *)(param_1 + 0xac);
    if (iVar3 == (int)local_98) goto LAB__text__001fae78;
LAB__text__001fae9c:
    if (iVar3 == uStack_90._4_4_) {
      uVar12 = 1;
      goto LAB__text__001faed4;
    }
    if (iVar3 == (int)local_80) {
      uVar12 = 2;
      goto LAB__text__001faed4;
    }
    if (iVar3 == local_78._4_4_) {
      uVar12 = 3;
      goto LAB__text__001faed4;
    }
    FUN__text__00633304(uVar5,1);
    iVar3 = *(int *)(param_1 + 0xb0);
    if (iVar3 != (int)local_98) goto LAB__text__001faf4c;
LAB__text__001faf28:
    uVar12 = 0;
LAB__text__001faf84:
    local_a0 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar8);
    FUN__text__00193970(lVar10,&local_a0,lVar1,2,uVar12);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 != (int)local_98) goto LAB__text__001faffc;
LAB__text__001fafd8:
    uVar12 = 0;
LAB__text__001fb034:
    local_a0 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar8);
    FUN__text__00193970(lVar10,&local_a0,lVar1,3,uVar12);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    lVar11 = *(long *)(DAT_008e15a0 + 0x80);
    if (lVar11 != 0) goto LAB__text__001fb08c;
LAB__text__001fb0e0:
    FUN__text__00205890(0,uVar5);
  }
  local_a8 = lVar9;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar8);
  FUN__text__001951d4(lVar10,&local_a8,lVar1,1);
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (((*(long *)(lVar7 + 0x390) != 0) &&
      (lVar10 = *(long *)(*(long *)(lVar7 + 0x390) + 0x718), lVar10 != 0)) &&
     ((uVar4 = FUN__text__00308390(lVar9), uVar4 < 2 &&
      (lVar10 = *(long *)(lVar10 + (ulong)(uVar4 != 1) * 0x20 + 0x68), lVar10 != 0)))) {
    FUN__text__001bc4a0(lVar10,1,*(undefined4 *)(lVar7 + 0xb0),*(undefined4 *)(lVar7 + 0xb4));
    if (((*(long *)(lVar7 + 0x390) != 0) &&
        (lVar7 = *(long *)(*(long *)(lVar7 + 0x390) + 0x718), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0x48), lVar7 != 0)) {
      FUN__text__001ad488(lVar7,lVar1);
LAB__text__001fb18c:
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return;
    }
  }
LAB__text__001fb1bc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


