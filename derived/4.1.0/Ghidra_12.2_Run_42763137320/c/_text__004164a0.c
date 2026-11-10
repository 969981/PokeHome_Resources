/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004164a0; name: FUN_.text__004164a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__004164a0(long *param_1,undefined1 *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  long *plVar20;
  long *local_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [28];
  char local_9c [4];
  undefined1 auStack_98 [24];
  long local_80 [4];
  
  *param_2 = 0;
  if (*(uint *)(_DAT_008a4d80 + 1) != 0) {
    plVar12 = (long *)*_DAT_008a4d80;
    lVar13 = (ulong)*(uint *)(_DAT_008a4d80 + 1) << 3;
    do {
      lVar14 = *plVar12;
      if (((*(long *)(lVar14 + 0x68) == *param_1) && (*(long *)(lVar14 + 0x70) == param_1[1])) &&
         (*(long *)(lVar14 + 0x78) == param_1[2])) {
        if ((*(byte *)(lVar14 + 0x1bc) >> 4 & 1) == 0) {
          return lVar14;
        }
        if ((*(long *)(lVar14 + 8) != 0) &&
           (*(char *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 100) == '\0')) {
          return lVar14;
        }
        bVar4 = false;
        *param_2 = 0;
        FUN__text__0045cd78(local_80,param_1);
        goto joined_r0x004165a0;
      }
      plVar12 = plVar12 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  lVar14 = 0;
  bVar4 = true;
  *param_2 = 1;
  FUN__text__0045cd78(local_80,param_1);
joined_r0x004165a0:
  if (local_80[0] == 0) {
    if (bVar4) {
      FUN__text__0045cc84(auStack_118,param_1);
      lVar14 = FUN__text__00416900(auStack_118,0);
      puVar11 = auStack_118;
LAB__text__0041672c:
      FUN__text__0045cca8(puVar11);
    }
LAB__text__00416730:
    if (lVar14 == 0) goto LAB__text__00416740;
  }
  else {
    uVar7 = FUN__text__00467e14(*param_1);
    if ((uVar7 & 1) == 0) {
      FUN__text__0045cc84(auStack_e8,local_80);
      lVar13 = FUN__text__004164a0(auStack_e8,auStack_98);
      FUN__text__0045cca8(auStack_e8);
      bVar4 = (bool)(bVar4 ^ 1);
      if (lVar13 == 0) {
        bVar4 = true;
      }
      if (!bVar4) {
        FUN__text__0045cc84(auStack_100,param_1);
        lVar14 = FUN__text__00416900(auStack_100,lVar13);
        puVar11 = auStack_100;
        goto LAB__text__0041672c;
      }
      goto LAB__text__00416730;
    }
    lVar13 = param_1[2];
    if (lVar13 == 0) goto LAB__text__00416730;
    local_120 = param_1;
    plVar12 = (long *)FUN__text__0044a4e4(lVar13);
    puVar17 = _DAT_008a4768;
    piVar5 = _DAT_008a3828;
    if ((char)plVar12[0x1c] == '\0') {
      plVar12 = (long *)*_DAT_008a4768;
      if (plVar12 == (long *)0x0) {
        lVar8 = _DAT_008a3f88 + 0x10;
        do {
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)FUN__text__00400f80(4,0xf0);
            if (plVar12 != (long *)0x0) {
              plVar12[1] = 0;
              plVar12[2] = 0;
              piVar3 = *(int **)(piVar5 + 2);
              lVar15 = *(long *)(piVar5 + 4);
              iVar6 = *piVar5;
              plVar12[3] = (long)piVar3;
              *(long **)(piVar5 + 2) = plVar12;
              piVar1 = piVar5;
              if (lVar15 != 0) {
                piVar1 = piVar3;
              }
              *(long **)(piVar1 + 4) = plVar12;
              *(undefined2 *)(plVar12 + 0x1c) = 0x101;
              plVar12[8] = 0;
              plVar12[9] = 0;
              plVar12[0xc] = 0;
              plVar12[0xd] = 0;
              *piVar5 = iVar6 + 1;
              *plVar12 = lVar8;
              plVar12[0x12] = 0;
              plVar12[0x13] = 0;
              plVar12[0x16] = 0;
              plVar12[0x17] = 0;
              plVar12[0x1a] = 0;
              plVar12[0x1b] = 0;
            }
            *puVar17 = plVar12;
          }
        } while ((char)plVar12[0x1c] == '\0');
      }
      else if ((char)plVar12[0x1c] == '\0') {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    if (*(uint *)(plVar12 + 0xd) == 0) goto LAB__text__00416730;
    if (*(long *)(lVar13 + 8) == 0) {
      plVar20 = (long *)FUN__text__00400f80(4,0x80);
      if (plVar20 != (long *)0x0) {
        FUN__text__0044ad10();
        *(long **)(lVar13 + 8) = plVar20;
        plVar20[1] = lVar13;
        iVar6 = (**(code **)(*plVar20 + 0x10))(plVar20,*(undefined8 *)(lVar13 + 0x58));
        if (iVar6 == 1) {
          puVar17 = (undefined8 *)
                    (auStack_118 + (-8 - ((ulong)*(uint *)(plVar12 + 0xd) * 8 + 0xf & 0xffffffff0)))
          ;
          if (*(uint *)(plVar12 + 0xd) != 0) goto LAB__text__004165f8;
        }
        else {
          (**(code **)*plVar20)(plVar20);
          FUN__text__00400fc0(4,plVar20);
          *(undefined8 *)(lVar13 + 8) = 0;
        }
      }
      goto LAB__text__00416730;
    }
    puVar17 = (undefined8 *)
              (auStack_118 + (-8 - ((ulong)*(uint *)(plVar12 + 0xd) * 8 + 0xf & 0xffffffff0)));
LAB__text__004165f8:
    plVar20 = (long *)plVar12[0xc];
    uVar7 = 0;
    do {
      FUN__text__0045cd28(auStack_98,local_80[0],*plVar20);
      lVar13 = FUN__text__0045cdec(auStack_98);
      if (lVar13 == *plVar20) {
        FUN__text__0045cc84(auStack_b8,auStack_98);
        lVar8 = FUN__text__004164a0(auStack_b8,local_9c);
        FUN__text__0045cca8(auStack_b8);
        lVar13 = local_80[0];
        if (lVar8 != 0) {
          bVar2 = bVar4;
          if (local_9c[0] != '\0') {
            bVar2 = true;
          }
          if ((!bVar2) && (lVar15 = *(long *)(lVar14 + 0x30), lVar15 != 0)) {
            lVar16 = *plVar20;
            do {
              plVar9 = (long *)FUN__text__0045c1d8(lVar15);
              if (*plVar9 == lVar13) {
                FUN__text__0045c1d8(lVar15);
                lVar10 = FUN__text__0045cdec();
                if (lVar10 == lVar16) goto LAB__text__00416610;
              }
              lVar15 = *(long *)(lVar15 + 0x20);
            } while (lVar15 != 0);
          }
          puVar17[uVar7] = lVar8;
          uVar7 = (ulong)((int)uVar7 + 1);
        }
      }
LAB__text__00416610:
      uVar19 = (uint)uVar7;
      FUN__text__0045cca8(auStack_98);
      plVar20 = plVar20 + 1;
    } while (plVar20 != (long *)(plVar12[0xc] + (ulong)*(uint *)(plVar12 + 0xd) * 8));
    if (uVar19 == 0) goto LAB__text__00416730;
    puVar18 = puVar17;
    if (bVar4) {
      FUN__text__0045cc84(auStack_d0,local_120);
      puVar18 = puVar17 + 1;
      lVar14 = FUN__text__00416900(auStack_d0,*puVar17);
      FUN__text__0045cca8(auStack_d0);
      uVar19 = uVar19 - 1;
    }
    if (lVar14 == 0) goto LAB__text__00416740;
    if (uVar19 != 0) {
      uVar7 = (ulong)uVar19;
      do {
        FUN__text__0045b1a0(lVar14,*puVar18,0);
        uVar7 = uVar7 - 1;
        puVar18 = puVar18 + 1;
      } while (uVar7 != 0);
      goto LAB__text__00416730;
    }
  }
  *(byte *)(lVar14 + 0x1bc) = *(byte *)(lVar14 + 0x1bc) & 0xef;
LAB__text__00416740:
  FUN__text__0045cca8(local_80);
  return lVar14;
}


