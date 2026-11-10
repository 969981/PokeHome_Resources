/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665e14; name: FUN_.text__00665e14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00665e14(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar12 = *param_1;
  iVar3 = *(int *)(lVar12 + 0x10f8);
  lVar14 = *(long *)(lVar12 + 0xf90);
  lVar17 = *(long *)(lVar12 + 0xf98);
  auVar18 = FUN__text__0066c6a8();
  lVar9 = auVar18._0_8_;
  iVar4 = FUN__text__0066c734(lVar9,auVar18._8_8_,*(undefined8 *)(lVar12 + 0xff8),
                              *(undefined8 *)(lVar12 + 0x1000));
  *(long *)(lVar12 + 0xfb0) = (long)iVar4;
  iVar6 = 999;
  if (0x20c49ba5e353f6 < lVar14) {
    iVar6 = 999999;
  }
  lVar13 = (long)(iVar4 / 1000000);
  lVar8 = lVar14 * 1000;
  lVar11 = (long)(iVar4 / 1000);
  if (0x20c49ba5e353f6 < lVar14) {
    lVar8 = lVar14;
    lVar11 = lVar13;
  }
  lVar14 = *(long *)(lVar12 + 0xf78);
  if (iVar4 <= iVar6) {
    lVar11 = 1;
  }
  lVar1 = lVar17 * 1000;
  lVar2 = (long)(iVar4 / 1000);
  iVar6 = 999;
  if (0x20c49ba5e353f6 < lVar17) {
    lVar1 = lVar17;
    lVar2 = lVar13;
    iVar6 = 999999;
  }
  lVar17 = 0;
  if (lVar11 != 0) {
    lVar17 = lVar8 / lVar11;
  }
  if (iVar4 <= iVar6) {
    lVar2 = 1;
  }
  *(long *)(lVar12 + 0xfb8) = lVar17;
  lVar8 = 0;
  if (lVar2 != 0) {
    lVar8 = lVar1 / lVar2;
  }
  *(long *)(lVar12 + 0xfc0) = lVar8;
  if (lVar14 != lVar9) {
    lVar11 = lVar12 + 0xf78;
    *(long *)(lVar12 + 0xf78) = lVar9;
    iVar3 = iVar3 % 6;
    iVar4 = *(int *)(lVar12 + 0x10f8);
    *(uint *)(lVar12 + 0x10f8) = iVar4 + 1U;
    plVar16 = (long *)(lVar11 + (long)iVar3 * 8 + 0xf0);
    *plVar16 = *(long *)(lVar12 + 0xf98) + *(long *)(lVar12 + 0xf90);
    *(undefined1 (*) [16])(lVar11 + (long)iVar3 * 0x10 + 0x120) = auVar18;
    iVar6 = iVar4;
    if (4 < iVar4) {
      iVar6 = 5;
    }
    if (iVar6 == 0) {
      lVar17 = lVar17 + lVar8;
    }
    else {
      uVar7 = (iVar4 + 1U) % 6;
      if (iVar4 < 5) {
        uVar7 = 0;
      }
      lVar17 = lVar11 + (ulong)uVar7 * 0x10;
      uVar5 = FUN__text__0066c6d8(lVar9,auVar18._8_8_,*(undefined8 *)(lVar17 + 0x120),
                                  *(undefined8 *)(lVar17 + 0x128));
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      lVar8 = *plVar16 - *(long *)(lVar11 + (ulong)uVar7 * 8 + 0xf0);
      if (lVar8 < 0x418938) {
        lVar17 = 0;
        if ((long)(int)uVar5 != 0) {
          lVar17 = (lVar8 * 1000) / (long)(int)uVar5;
        }
      }
      else {
        lVar17 = (long)((double)lVar8 / ((double)(int)uVar5 / _DAT_007239d8));
      }
    }
    *(long *)(lVar12 + 4000) = lVar17;
  }
  uVar7 = *(uint *)(lVar12 + 0xfac);
  if ((uVar7 >> 4 & 1) == 0) {
    local_68 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(long *)(lVar12 + 0x730) == 0) {
      if (*(long *)(lVar12 + 0x728) == 0) {
        if (lVar14 == lVar9) goto LAB__text__00666350;
        if ((uVar7 >> 7 & 1) == 0) {
          if (*(long *)(lVar12 + 0x14f8) != 0) {
            FUN__text__00659c40(*(undefined8 *)(lVar12 + 0x668),0x71eaf5);
          }
          FUN__text__00659c40(*(undefined8 *)(lVar12 + 0x668),0x7155eb);
          uVar7 = *(uint *)(lVar12 + 0xfac) | 0x80;
          *(uint *)(lVar12 + 0xfac) = uVar7;
        }
        if (((uVar7 >> 5 & 1) == 0) || (lVar9 = *(long *)(lVar12 + 0xfc0), lVar9 < 1)) {
          lVar9 = 0;
          lVar14 = 0;
        }
        else {
          uVar10 = *(ulong *)(lVar12 + 0xf88);
          lVar14 = 0;
          if (lVar9 != 0) {
            lVar14 = (long)uVar10 / lVar9;
          }
          if ((long)uVar10 < 0x2711) {
            if ((long)uVar10 < 1) {
              lVar9 = 0;
              goto LAB__text__00666178;
            }
            lVar17 = *(long *)(lVar12 + 0xf98) * 100;
          }
          else {
            lVar17 = *(long *)(lVar12 + 0xf98);
            uVar10 = uVar10 / 100;
          }
          lVar9 = 0;
          if (uVar10 != 0) {
            lVar9 = lVar17 / (long)uVar10;
          }
        }
LAB__text__00666178:
        if (((uVar7 >> 6 & 1) == 0) || (lVar17 = *(long *)(lVar12 + 0xfb8), lVar17 < 1)) {
          lVar17 = 0;
          lVar8 = 0;
        }
        else {
          uVar10 = *(ulong *)(lVar12 + 0xf80);
          lVar8 = 0;
          if (lVar17 != 0) {
            lVar8 = (long)uVar10 / lVar17;
          }
          if ((long)uVar10 < 0x2711) {
            if ((long)uVar10 < 1) {
              lVar17 = 0;
              goto LAB__text__006661ec;
            }
            lVar11 = *(long *)(lVar12 + 0xf90) * 100;
          }
          else {
            lVar11 = *(long *)(lVar12 + 0xf90);
            uVar10 = uVar10 / 100;
          }
          lVar17 = 0;
          if (uVar10 != 0) {
            lVar17 = lVar11 / (long)uVar10;
          }
        }
LAB__text__006661ec:
        if (lVar14 <= lVar8) {
          lVar14 = lVar8;
        }
        lVar8 = lVar14 - lVar13;
        if (lVar14 < 1) {
          lVar8 = 0;
        }
        FUN__text__00666684(&local_b0,lVar8);
        FUN__text__00666684(&local_c0,lVar14);
        FUN__text__00666684(&local_d0,lVar13);
        lVar14 = 0xf98;
        if ((*(uint *)(lVar12 + 0xfac) & 0x20) != 0) {
          lVar14 = 0xf88;
        }
        lVar8 = 0xf90;
        if ((*(uint *)(lVar12 + 0xfac) & 0x40) != 0) {
          lVar8 = 0xf80;
        }
        uVar10 = *(long *)(lVar12 + lVar8) + *(long *)(lVar12 + lVar14);
        lVar14 = *(long *)(lVar12 + 0xf98) + *(long *)(lVar12 + 0xf90);
        if ((long)uVar10 < 0x2711) {
          if ((long)uVar10 < 1) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if (uVar10 != 0) {
              lVar8 = (lVar14 * 100) / (long)uVar10;
            }
          }
        }
        else {
          lVar8 = 0;
          if (uVar10 / 100 != 0) {
            lVar8 = lVar14 / (long)(uVar10 / 100);
          }
        }
        uVar15 = *(undefined8 *)(lVar12 + 0x668);
        FUN__text__00666778(uVar10,(long)&uStack_90 + 4);
        FUN__text__00666778(*(undefined8 *)(lVar12 + 0xf90),&local_a0);
        FUN__text__00666778(*(undefined8 *)(lVar12 + 0xf98),(long)&local_98 + 2);
        FUN__text__00666778(*(undefined8 *)(lVar12 + 0xfb8),(long)&local_88 + 6);
        FUN__text__00666778(*(undefined8 *)(lVar12 + 0xfc0),&local_78);
        FUN__text__00666778(*(undefined8 *)(lVar12 + 4000),(long)&uStack_70 + 2);
        FUN__text__00659c40(uVar15,0x70c9d6,lVar8,(long)&uStack_90 + 4,lVar17,&local_a0,lVar9,
                            (long)&local_98 + 2,(long)&local_88 + 6,&local_78,&local_c0,&local_d0,
                            &local_b0,(long)&uStack_70 + 2);
        fflush(*(FILE **)(lVar12 + 0x668));
        goto LAB__text__00666350;
      }
      FUN__text__0065cab0(lVar12,1);
      iVar6 = (**(code **)(lVar12 + 0x728))
                        ((double)*(long *)(lVar12 + 0xf80),(double)*(long *)(lVar12 + 0xf90),
                         (double)*(long *)(lVar12 + 0xf88),(double)*(long *)(lVar12 + 0xf98),
                         *(undefined8 *)(lVar12 + 0x798));
    }
    else {
      FUN__text__0065cab0(lVar12,1);
      iVar6 = (**(code **)(lVar12 + 0x730))
                        (*(undefined8 *)(lVar12 + 0x798),*(undefined8 *)(lVar12 + 0xf80),
                         *(undefined8 *)(lVar12 + 0xf90),*(undefined8 *)(lVar12 + 0xf88),
                         *(undefined8 *)(lVar12 + 0xf98));
    }
    FUN__text__0065cab0(lVar12,0);
    if (iVar6 != 0) {
      FUN__text__0066713c(lVar12,0x7199b1);
    }
  }
  else {
LAB__text__00666350:
    iVar6 = 0;
  }
  return iVar6;
}


