/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004179f0; name: FUN_.text__004179f0
 */


/* WARNING: Removing unreachable block (ram,0x00417c34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004179f0(void)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  uint auStack_80 [2];
  long *local_78;
  undefined8 local_70;
  int local_68;
  char local_64;
  
  puVar18 = _DAT_008a4d70;
  if (DAT_00aea241 == '\0') {
    return 1;
  }
  memset(*(void **)(_DAT_008a4d70 + 2),0,
         (ulong)(_DAT_008a4d70[1] * *_DAT_008a4d70 + 0x1f >> 3 & 0x1ffffffc));
  uVar6 = DAT_00aea228;
  uVar17 = (ulong)DAT_00aea228;
  if (DAT_00aea228 == 0) {
    DAT_00aea241 = 0;
    return 1;
  }
  if ((*puVar18 < DAT_00aea228) &&
     (uVar9 = FUN__text__004de884(_DAT_008a4d70,uVar17,uVar17), (int)uVar9 != 1)) {
    return uVar9;
  }
  plVar5 = DAT_00aea220;
  uVar10 = uVar17 & 3;
  lVar14 = 0;
  if (3 < uVar6) {
    plVar13 = DAT_00aea220 + 2;
    do {
      lVar14 = lVar14 + -4;
      *(undefined4 *)(plVar13[-2] + 0x1b8) = 0xffffffff;
      *(undefined4 *)(plVar13[-1] + 0x1b8) = 0xffffffff;
      *(undefined4 *)(*plVar13 + 0x1b8) = 0xffffffff;
      plVar19 = plVar13 + 1;
      plVar13 = plVar13 + 4;
      *(undefined4 *)(*plVar19 + 0x1b8) = 0xffffffff;
    } while (-lVar14 != (uVar17 & 0xfffffffc));
    lVar14 = -lVar14;
  }
  if ((uVar6 & 3) != 0) {
    plVar13 = plVar5 + lVar14;
    do {
      uVar10 = uVar10 - 1;
      *(undefined4 *)(*plVar13 + 0x1b8) = 0xffffffff;
      plVar13 = plVar13 + 1;
    } while (uVar10 != 0);
  }
  uVar3 = uVar6 << 2;
  local_78 = (long *)0x0;
  local_70 = 0;
  if (uVar3 != 0) {
    local_78 = (long *)FUN__text__00400f80(5,(ulong)uVar3 << 4);
    if (local_78 == (long *)0x0) {
      return 0x34;
    }
    local_70 = CONCAT44(uVar3,(int)local_70);
  }
  uVar10 = 0;
  local_68 = 0;
  local_64 = '\0';
  do {
    lVar14 = plVar5[uVar10];
    if ((*(long *)(lVar14 + 0x30) == 0) &&
       ((*(long *)(lVar14 + 0x68) == 0 || (*(long *)(*(long *)(lVar14 + 0x68) + 0x80) == 0)))) {
      FUN__text__00419740(lVar14,0,&local_78);
    }
    cVar7 = local_64;
    iVar16 = local_68;
    uVar10 = uVar10 + 1;
  } while (uVar17 != uVar10);
  *_DAT_008a4da8 = local_64;
  uVar3 = local_68 + 1;
  uVar22 = (ulong)uVar3;
  plVar19 = (long *)((long)auStack_80 - (uVar17 * 8 + 0xf & 0xffffffff0));
  uVar20 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2;
  puVar18 = (uint *)((long)plVar19 - (uVar20 + 0xf & 0xfffffffffffffff0));
  memset(puVar18,0,uVar20);
  memcpy(plVar19,plVar5,uVar17 * 8);
  uVar10 = uVar17;
  plVar13 = plVar5;
  do {
    uVar2 = *(uint *)(*plVar13 + 0x1b8);
    if (-1 < (int)uVar2) {
      puVar18[uVar2] = puVar18[uVar2] + 1;
    }
    plVar13 = plVar13 + 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  piVar21 = (int *)((long)puVar18 - (uVar20 + 0xf & 0xfffffffffffffff0));
  *piVar21 = 0;
  if (0 < iVar16) {
    if (uVar3 == 2) {
      iVar12 = 0;
      lVar14 = 1;
    }
    else {
      iVar12 = 0;
      puVar15 = puVar18 + 1;
      uVar10 = 0;
      piVar4 = piVar21;
      do {
        uVar20 = uVar10;
        uVar3 = puVar15[-1];
        uVar2 = *puVar15;
        uVar10 = uVar20 + 2;
        puVar15 = puVar15 + 2;
        piVar4[1] = uVar3 + iVar12;
        iVar12 = uVar2 + uVar3 + iVar12;
        piVar4[2] = iVar12;
        piVar4 = piVar4 + 2;
      } while ((uVar22 - 1 & 0xfffffffffffffffe) != uVar10);
      lVar14 = uVar20 + 3;
      if ((uVar22 - 1 & 1) == 0) goto LAB__text__00417c94;
    }
    piVar21[lVar14] = puVar18[lVar14 + -1] + iVar12;
  }
LAB__text__00417c94:
  uVar10 = uVar17;
  uVar20 = uVar17;
  do {
    while( true ) {
      lVar14 = *plVar19;
      uVar3 = *(uint *)(lVar14 + 0x1b8);
      if ((int)uVar3 < 0) break;
      iVar12 = piVar21[uVar3];
      piVar21[uVar3] = iVar12 + 1;
      plVar19 = plVar19 + 1;
      uVar10 = uVar10 - 1;
      plVar5[iVar12] = lVar14;
      if (uVar10 == 0) goto LAB__text__00417ce4;
    }
    uVar20 = (ulong)((int)uVar20 - 1);
    plVar19 = plVar19 + 1;
    uVar10 = uVar10 - 1;
    plVar5[uVar20] = lVar14;
  } while (uVar10 != 0);
LAB__text__00417ce4:
  uVar9 = _DAT_008a4d80;
  if ((cVar7 != '\0') && (0 < iVar16)) {
    lVar14 = 0;
    do {
      if (1 < (int)puVar18[lVar14 + 1]) {
        FUN__text__00416f00(uVar9,(int)lVar14 + 1,piVar21[lVar14]);
      }
      lVar14 = lVar14 + 1;
    } while (uVar22 - 1 != lVar14);
  }
  plVar5 = local_78;
  puVar15 = _DAT_008a4d70;
  if (((int)local_70 != 0) && (0 < (int)uVar6)) {
    plVar19 = local_78 + (local_70 & 0xffffffff) * 2;
    plVar11 = DAT_00aea220;
    plVar13 = local_78;
    do {
      uVar10 = 0;
      uVar20 = 1;
      do {
        if (plVar11[uVar10] == *plVar13) {
          uVar22 = uVar20;
          while (uVar22 < uVar17) {
            plVar1 = plVar11 + uVar22;
            uVar22 = uVar22 + 1;
            if (*plVar1 == plVar13[1]) {
              FUN__text__004de858(puVar15,uVar10,(int)uVar22 + -1);
              plVar11 = DAT_00aea220;
              goto LAB__text__00417d70;
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar10 != uVar17);
LAB__text__00417d70:
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar19);
  }
  puVar15 = _DAT_008a4d70;
  uVar3 = *puVar18;
  if ((int)uVar6 <= (int)*puVar18) {
    uVar3 = uVar6;
  }
  if (1 < (int)uVar3) {
    iVar16 = 0;
    do {
      FUN__text__004de858(puVar15,iVar16,iVar16 + 1);
      bVar8 = iVar16 != uVar3 - 2;
      iVar16 = iVar16 + 1;
    } while (bVar8);
  }
  if (plVar5 != (long *)0x0) {
    FUN__text__00400fc0(5,plVar5);
  }
  DAT_00aea241 = 0;
  return 1;
}


