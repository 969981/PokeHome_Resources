/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d2940; name: FUN_.text__001d2940
 */


void FUN__text__001d2940(long param_1,long param_2,char *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  byte bVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  byte bVar27;
  int iVar28;
  undefined4 uVar29;
  uint local_d4;
  int local_c4;
  long local_98;
  long local_90;
  undefined2 local_84;
  undefined8 local_80;
  undefined1 auStack_74 [20];
  
  lVar22 = *(long *)(param_1 + 0x1c0);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) || (*(long *)(param_2 + 0x158) == 0)) ||
     (lVar22 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (*param_3 != '\0') goto LAB__text__001d29a8;
  plVar24 = (long *)(param_4 + 0x28);
  if (*plVar24 != 0) {
    FUN__text__003c7c60(lVar22,param_4 + 0x18,0);
  }
  plVar25 = (long *)(param_4 + 0x30);
  if (*plVar25 != 0) {
    FUN__text__003c7c60(lVar22,param_4 + 0x20,0);
  }
  if (*plVar24 != 0) {
    FUN__text__003c7c60(lVar22,plVar24,0);
  }
  if (*plVar25 != 0) {
    FUN__text__003c7c60(lVar22,plVar25,0);
  }
  if (*(long *)(param_4 + 0x38) != 0) {
    FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x38),0);
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x40),0);
  }
  if (*(long *)(param_4 + 0x48) != 0) {
    FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x48),0);
  }
  if (*(long *)(param_4 + 0x50) != 0) {
    FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x50),0);
  }
  if (*(long *)(param_4 + 0x58) != 0) {
    FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x58),0);
  }
  if (*(long *)(param_4 + 0x60) != 0) {
    FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x60),0);
  }
  lVar15 = FUN__text__00196260(*(undefined8 *)(param_2 + 0x10));
  if (lVar15 == 0) {
    bVar12 = true;
  }
  else {
    bVar12 = *(int *)(lVar15 + 0xc) == 0;
  }
  bVar27 = 0;
  bVar20 = 0;
  bVar21 = 0;
  bVar19 = 0;
  bVar2 = 0;
  bVar17 = 0;
  bVar18 = 0;
  local_d4 = 0;
  bVar23 = 0;
  local_c4 = 0;
  do {
    iVar28 = 0;
    do {
      local_80 = CONCAT44(local_c4,iVar28);
      FUN__text__00191328(auStack_74,param_3,&local_80);
      local_84 = 0;
      local_80 = 0;
      FUN__text__001c1070(&local_84,&local_80,param_2,auStack_74);
      bVar4 = (byte)local_84;
      bVar5 = local_84._1_1_;
      bVar6 = (byte)local_80;
      bVar9 = local_80._3_1_;
      bVar3 = bVar12;
      if (bVar21 == 0) {
        bVar3 = true;
      }
      bVar1 = bVar23;
      if (!bVar3) {
        bVar1 = 1;
      }
      lVar15 = *(long *)(param_2 + 0x158);
      bVar7 = local_80._1_1_;
      bVar10 = local_80._4_1_;
      bVar8 = local_80._2_1_;
      bVar11 = local_80._5_1_;
      if (lVar15 == 0) {
        uVar26 = *(undefined8 *)(param_2 + 0x10);
        local_90 = 0;
      }
      else {
        plVar24 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar24 + 0x10))(plVar24);
        uVar26 = *(undefined8 *)(param_2 + 0x10);
        local_90 = lVar15;
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
      uVar16 = FUN__text__00194730(uVar26,&local_90,auStack_74);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if ((uVar16 & 1) != 0) {
        local_98 = lVar15;
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
        }
        FUN__text__001916b0(uVar26,&local_98,auStack_74,0);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
        iVar13 = FUN__text__00308390(lVar15);
        if (iVar13 != 1) {
          uVar14 = FUN__text__00193a7c(uVar26,auStack_74);
          local_d4 = local_d4 | uVar14 & 1;
        }
        uVar16 = FUN__text__00193be8(uVar26,auStack_74);
        uVar14 = local_d4 | 2;
        if ((uVar16 & 1) == 0) {
          uVar14 = local_d4;
        }
        local_d4 = uVar14;
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      iVar28 = iVar28 + 1;
      bVar20 = bVar20 | bVar4;
      bVar27 = bVar27 | bVar5;
      bVar23 = bVar1 | bVar6;
      bVar18 = bVar18 | bVar7;
      bVar17 = bVar17 | bVar8;
      bVar2 = bVar2 | bVar9;
      bVar19 = bVar19 | bVar10;
      bVar21 = bVar21 | bVar11;
    } while (iVar28 != 6);
    local_c4 = local_c4 + 1;
  } while (local_c4 != 5);
  if (bVar27 == 0) {
    if (bVar20 != 0) {
      lVar15 = 0;
      goto LAB__text__001d2d64;
    }
  }
  else {
    lVar15 = 1;
LAB__text__001d2d64:
    FUN__text__003c7c60(lVar22,param_4 + lVar15 * 8 + 0x18,1);
  }
  if (bVar19 == 0) {
    if (bVar17 != 0) {
      lVar15 = 2;
      goto LAB__text__001d2db0;
    }
    if (bVar18 != 0) {
      lVar15 = 1;
      goto LAB__text__001d2db0;
    }
    if (bVar2 != 0) {
      lVar15 = 3;
      goto LAB__text__001d2db0;
    }
    if (bVar1 != 0 || bVar6 != 0) {
      lVar15 = 0;
      goto LAB__text__001d2db0;
    }
  }
  else {
    lVar15 = 4;
LAB__text__001d2db0:
    FUN__text__003c7c60(lVar22,param_4 + lVar15 * 8 + 0x28,1);
  }
  if ((*(long *)(param_4 + 0x68) != 0) &&
     (FUN__text__003c7c60(lVar22,(long *)(param_4 + 0x68),local_d4 != 0), local_d4 != 0)) {
    FUN__text__0012c378(param_1,param_4 + 0x70);
    uVar29 = 0;
    if (local_d4 != 1) {
      uVar29 = 0x3f800000;
    }
    FUN__text__0012c97c(uVar29,param_1,param_4 + 0x70);
  }
LAB__text__001d29a8:
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  return;
}


