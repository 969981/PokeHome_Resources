/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307180; name: FUN_.text__00307180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00307180(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint *puVar13;
  long *plVar14;
  long local_88;
  long local_80;
  int local_74;
  undefined8 local_70;
  
  *(undefined8 *)((long)param_2 + 5) = 0;
  *param_2 = 0;
  uVar2 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
  uVar3 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58));
  uVar4 = FUN__text__00633b34(*(undefined8 *)(param_1 + 0x58),2);
  uVar5 = FUN__text__006312d0(*(undefined8 *)(param_1 + 0x58));
  if (((uVar2 == 0x19) && ((uVar3 & 0xffff) == 8)) ||
     ((bVar11 = false, uVar2 == 0x85 && ((uVar3 & 0xffff) == 1)))) {
    bVar11 = true;
  }
  uVar6 = uVar3 - 1 & 0xffff;
  if (((uVar4 & 1) != 0 || bVar11) ||
      ((uVar2 == 0x286 || uVar2 == 0x382) && uVar6 < 2 || uVar2 == 800 && uVar6 < 3)) {
    return;
  }
  FUN__text__003204a0(&local_70);
  lVar1 = param_1 + 0x60;
  uVar8 = FUN__text__003028c4(local_70,lVar1);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if ((uVar8 & 1) == 0) {
    local_74 = *(int *)(param_1 + 0x98);
  }
  else {
    lVar9 = FUN__text__00325bc0();
    local_74 = *(int *)(lVar9 + 0x2c);
    if (9 < local_74 - 1U) {
      local_74 = 0;
    }
  }
  if (param_3 != 0xd) {
    local_74 = param_3;
  }
  local_70._0_4_ = 2;
  uVar8 = FUN__text__001969ec(&local_74,&local_70);
  if ((uVar8 & 1) == 0) {
    local_80 = CONCAT44(local_80._4_4_,3);
    uVar4 = FUN__text__001969ec(&local_74,&local_80);
    local_70 = CONCAT44(local_70._4_4_,2);
    uVar8 = FUN__text__00196a94(uVar5,&local_70);
    if ((uVar8 & 1) != 0) goto LAB__text__00307320;
LAB__text__003072d4:
    local_80 = CONCAT44(local_80._4_4_,3);
    uVar6 = FUN__text__00196a94(uVar5,&local_80);
    if ((uVar4 & uVar6 & 1) == 0) goto LAB__text__00307374;
LAB__text__0030732c:
    if (*(long *)(param_1 + 0x58) == 0) {
LAB__text__00307af8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    if (*(char *)(param_1 + 0x54) == '\0') {
      uVar8 = FUN__text__00635c78();
      if ((uVar8 & 1) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB__text__00307af8;
        goto LAB__text__00307358;
      }
      goto LAB__text__00307374;
    }
    if (*(char *)(param_1 + 0x56) != '\0') goto LAB__text__00307374;
LAB__text__00307358:
    if (*(char *)(param_1 + 0x54) != '\0') {
      if (*(char *)(param_1 + 0x55) != '\0') goto LAB__text__00307374;
      bVar11 = false;
      goto LAB__text__00307378;
    }
    uVar8 = FUN__text__00635c20();
    if ((uVar8 & 1) != 0) goto LAB__text__00307374;
    bVar11 = false;
    if ((uVar3 & 0xffff) == 0) goto LAB__text__0030741c;
LAB__text__00307380:
    uVar4 = uVar2 & 0xfffffffe;
    if (((uVar3 & 0xffff) == 1) &&
       (((((((((uVar2 - 0x13 < 2 || uVar4 == 0x1a) || uVar2 == 0x1c) || uVar2 - 0x25 < 2) ||
            uVar4 == 0x32) || uVar4 == 0x34) || uVar4 == 0x4a) || uVar2 == 0x4c) || uVar4 == 0x58)
        || uVar2 == 0x67)) {
      if (!bVar11) goto LAB__text__00307440;
    }
    else if (!bVar11 && (uVar2 == 0x69 && (uVar3 & 0xffff) == 1)) {
LAB__text__00307440:
      *(undefined2 *)((long)param_2 + 1) = 0x101;
    }
  }
  else {
    uVar4 = 1;
    local_70 = CONCAT44(local_70._4_4_,2);
    uVar8 = FUN__text__00196a94(uVar5,&local_70);
    if ((uVar8 & 1) == 0) goto LAB__text__003072d4;
LAB__text__00307320:
    if ((uVar4 & 1) != 0) goto LAB__text__0030732c;
LAB__text__00307374:
    bVar11 = true;
LAB__text__00307378:
    if ((uVar3 & 0xffff) != 0) goto LAB__text__00307380;
LAB__text__0030741c:
    if (!bVar11 && (uVar2 - 1 < 0x97 || (uVar2 & 0xfffffffe) == 0x328)) goto LAB__text__00307440;
  }
  uVar4 = 1;
  *(undefined1 *)param_2 = 1;
  local_70 = CONCAT44(local_70._4_4_,4);
  uVar8 = FUN__text__001969ec(&local_74,&local_70);
  if ((uVar8 & 1) == 0) {
    local_80 = CONCAT44(local_80._4_4_,5);
    uVar4 = FUN__text__001969ec(&local_74,&local_80);
  }
  local_70 = CONCAT44(local_70._4_4_,4);
  uVar8 = FUN__text__00196a94(uVar5,&local_70);
  if ((uVar8 & 1) == 0) {
    local_80 = CONCAT44(local_80._4_4_,5);
    uVar10 = FUN__text__00196a94(uVar5,&local_80);
    uVar8 = FUN__text__00306c60(uVar10,uVar2,uVar3);
    uVar4 = uVar4 & (uint)uVar10;
  }
  else {
    uVar8 = FUN__text__00306c60(uVar8,uVar2,uVar3);
  }
  if (((uVar4 & 1) != 0) && ((uVar8 & 1) != 0)) {
    *(undefined2 *)((long)param_2 + 3) = 0x101;
  }
  local_70._4_4_ = (undefined4)((ulong)local_70 >> 0x20);
  local_70._0_4_ = 6;
  uVar8 = FUN__text__001969ec(&local_74,&local_70);
  if ((uVar8 & 1) == 0) {
    local_80 = CONCAT44(local_80._4_4_,7);
    uVar4 = FUN__text__001969ec(&local_74,&local_80);
    local_70 = CONCAT44(local_70._4_4_,6);
    uVar8 = FUN__text__00196a94(uVar5,&local_70);
    if ((uVar8 & 1) != 0) goto LAB__text__00307568;
LAB__text__00307518:
    local_80 = CONCAT44(local_80._4_4_,7);
    uVar6 = FUN__text__00196a94(uVar5,&local_80);
  }
  else {
    uVar4 = 1;
    local_70 = CONCAT44(local_70._4_4_,6);
    uVar8 = FUN__text__00196a94(uVar5,&local_70);
    if ((uVar8 & 1) == 0) goto LAB__text__00307518;
LAB__text__00307568:
    uVar6 = 1;
  }
  if (0xfffffe12 < uVar2 - 0x1ee) {
    if (((((uVar3 & 0xffff) == 0) || ((uVar2 == 0xc9 && ((uVar3 & 0xffff) < 0x1c)))) ||
        ((uVar2 == 0x182 || uVar2 == 0x15f && ((uVar3 & 0xffff) < 4)))) ||
       ((((uVar3 & 0xffff) < 3 && (uVar2 == 0x19e || (uVar2 & 0xfffffffe) == 0x19c)) ||
        ((uVar2 - 0x1a5 < 3 && ((uVar3 & 0xffff) < 2)))))) {
      bVar11 = true;
    }
    else {
      bVar11 = true;
      if ((5 < (uVar3 & 0xffff) || uVar2 != 0x1df) &&
         (uVar2 != 0x1e7 && uVar2 != 0x1ec || 1 < (uVar3 & 0xffff))) {
        bVar11 = uVar2 == 0x1ed && (uVar3 & 0xffff) < 0x12;
      }
    }
    if ((((uVar4 & uVar6 & 1) != 0) && (bVar11)) &&
       (uVar8 = FUN__text__00307bd0(param_1), (uVar8 & 1) == 0)) {
      *(undefined2 *)((long)param_2 + 5) = 0x101;
    }
  }
  local_70._0_4_ = 8;
  uVar4 = FUN__text__001969ec(&local_74,&local_70);
  local_70._0_4_ = 8;
  uVar6 = FUN__text__00196a94(uVar5,&local_70);
  if (uVar2 - 0x183 < 0x6b) {
    if ((uVar3 & 0xffff) != 0) {
      if (((2 < (uVar3 & 0xffff)) || (uVar2 != 0x19e && (uVar2 & 0xfffffffe) != 0x19c)) &&
         ((2 < uVar2 - 0x1a5 || (1 < (uVar3 & 0xffff))))) {
        if (((5 < (uVar3 & 0xffff) || uVar2 != 0x1df) &&
            (uVar2 != 0x1e7 && uVar2 != 0x1ec || 1 < (uVar3 & 0xffff))) &&
           ((uVar2 != 0x1ed || (0x11 < (uVar3 & 0xffff))))) {
          if (((uVar3 & 0xffff) != 1 || 1 < uVar2 - 0x1e3) &&
             (uVar2 != 0x1ed || (uVar3 & 0xffff) != 0x12)) goto LAB__text__00307704;
        }
      }
    }
LAB__text__0030775c:
    if ((uVar4 & uVar6 & 1) != 0) {
      *(undefined1 *)((long)param_2 + 7) = 1;
    }
  }
  else {
    if ((uVar2 == 0xc9) && ((uVar3 & 0xffff) < 0x1c)) goto LAB__text__0030775c;
LAB__text__00307704:
    puVar13 = (uint *)&DAT_00734024;
    do {
      if (((*puVar13 == uVar2) && (puVar13[1] == (uVar3 & 0xffff))) ||
         ((puVar13[2] == uVar2 && (puVar13[3] == (uVar3 & 0xffff))))) goto LAB__text__0030775c;
      puVar13 = puVar13 + 4;
    } while (puVar13 != (uint *)&DAT_00734494);
  }
  local_70._0_4_ = 9;
  uVar8 = FUN__text__001969ec(&local_74,&local_70);
  if ((uVar8 & 1) == 0) {
    local_80 = CONCAT44(local_80._4_4_,10);
    uVar4 = FUN__text__001969ec(&local_74,&local_80);
    local_70 = CONCAT44(local_70._4_4_,9);
    uVar8 = FUN__text__00196a94(uVar5,&local_70);
    if ((uVar8 & 1) != 0) goto LAB__text__003077f8;
LAB__text__0030779c:
    local_80 = CONCAT44(local_80._4_4_,10);
    uVar7 = FUN__text__00196a94(uVar5,&local_80);
    uVar6 = uVar7;
    if (1 < uVar2 - 0x3ef) goto LAB__text__0030781c;
LAB__text__00307810:
    uVar7 = uVar6;
    plVar14 = _DAT_0089f4f0;
    if (3 < (uVar3 - 1 & 0xffff)) goto LAB__text__0030781c;
  }
  else {
    uVar4 = 1;
    local_70 = CONCAT44(local_70._4_4_,9);
    uVar8 = FUN__text__00196a94(uVar5,&local_70);
    if ((uVar8 & 1) == 0) goto LAB__text__0030779c;
LAB__text__003077f8:
    uVar7 = 1;
    uVar6 = 1;
    if (uVar2 - 0x3ef < 2) goto LAB__text__00307810;
LAB__text__0030781c:
    lVar9 = *(long *)(*_DAT_0089f4f0 + 0x80);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN__text__00144a80(&local_70,lVar9 + 0x610);
    uVar6 = FUN__text__00144ac0(&local_70,uVar2,uVar3,10);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    plVar14 = &DAT_008e15a0;
    if ((uVar4 & uVar7 & uVar6 & 1) != 0) {
      *(undefined2 *)(param_2 + 1) = 0x101;
    }
  }
  local_70._0_4_ = 0xc;
  uVar4 = FUN__text__001969ec(&local_74,&local_70);
  local_70 = CONCAT44(local_70._4_4_,0xc);
  uVar6 = FUN__text__00196a94(uVar5,&local_70);
  lVar9 = *(long *)(*plVar14 + 0x80);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__00144a80(&local_70,lVar9 + 0x610);
  uVar3 = FUN__text__00144ac0(&local_70,uVar2,uVar3,0xb);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if ((uVar4 & uVar6 & uVar3 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 10) = 1;
  }
  if (1 < *(int *)(param_1 + 0x98) - 1U) {
    *(undefined2 *)((long)param_2 + 1) = 0;
  }
  FUN__text__003204d0(&local_80);
  FUN__text__003043f0(&local_70,local_80,lVar1);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  if ((*(long *)(local_70 + 0x58) == 0) || (uVar8 = FUN__text__00631174(), (uVar8 & 1) != 0)) {
    FUN__text__003204a0(&local_88);
    FUN__text__003043f0(&local_80,local_88,lVar1);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    local_70 = local_80;
    local_80 = 0;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    }
  }
  if (*(long *)(local_70 + 0x58) != 0) {
    uVar8 = FUN__text__00631174(*(long *)(local_70 + 0x58));
    if (((uVar8 & 1) == 0) &&
       (uVar8 = FUN__text__006350c4(*(undefined8 *)(local_70 + 0x58)), (uVar8 & 1) != 0)) {
      *(undefined2 *)((long)param_2 + 1) = 0;
      *(undefined8 *)((long)param_2 + 5) = 0;
    }
    if (local_70 == 0) goto LAB__text__00307a1c;
  }
  (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
LAB__text__00307a1c:
  if (uVar2 == 0x122) {
    uVar2 = FUN__text__006312d8(*(undefined8 *)(param_1 + 0x58));
    if ((0x2d < uVar2) && ((uVar2 & 0xfffffffe) != 0x30)) {
      return;
    }
    *(undefined4 *)((long)param_2 + 9) = 0;
    *(undefined8 *)((long)param_2 + 1) = 0;
    if (uVar2 < 0x2e) {
      *(undefined2 *)((long)param_2 + 3) = 0x101;
    }
    if ((uVar2 & 0xfffffffe) == 0x30) {
      *(undefined2 *)((long)param_2 + 5) = 0x101;
    }
    uVar12 = 1;
  }
  else {
    if (uVar2 != 0x147) {
      return;
    }
    *(undefined2 *)((long)param_2 + 5) = 0;
    uVar12 = 0;
    if (1 < *(int *)(param_1 + 0x98) - 5U) {
      return;
    }
  }
  *(undefined1 *)param_2 = uVar12;
  return;
}


