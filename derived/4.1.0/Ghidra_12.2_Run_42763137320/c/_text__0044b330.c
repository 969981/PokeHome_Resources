/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044b330; name: FUN_.text__0044b330
 */


undefined8 FUN__text__0044b330(long param_1,long param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  
  plVar8 = *(long **)(param_1 + 8);
  uVar16 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulong)param_4;
  plVar10 = plVar8;
  if (uVar16 == 0) {
LAB__text__0044b38c:
    if (plVar10 == plVar8 + (ulong)uVar16 * 3) goto LAB__text__0044b3b8;
    plVar15 = plVar10 + 1;
    uVar16 = *(uint *)(plVar10 + 2);
    uVar6 = (ulong)uVar16;
    if (uVar16 <= param_4) {
      uVar16 = param_4;
    }
    uVar18 = (ulong)uVar16;
    iVar17 = uVar16 - *(uint *)((long)plVar10 + 0x14);
    if (uVar16 < *(uint *)((long)plVar10 + 0x14) || iVar17 == 0) goto LAB__text__0044b424;
  }
  else {
    lVar13 = (ulong)uVar16 * 0x18;
    do {
      if (*plVar10 == param_2) goto LAB__text__0044b38c;
      plVar10 = plVar10 + 3;
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != 0);
LAB__text__0044b3b8:
    if (*(uint *)(param_1 + 0x14) <= uVar16) {
      uVar6 = FUN__text__0044b700();
      if ((uVar6 & 1) == 0) {
        return 1;
      }
      if (*(uint *)(param_1 + 0x14) <= uVar16) {
        return 1;
      }
      uVar16 = *(uint *)(param_1 + 0x10);
      plVar8 = *(long **)(param_1 + 8);
    }
    *(uint *)(param_1 + 0x10) = uVar16 + 1;
    if (plVar8 == (long *)0x0) {
      return 1;
    }
    plVar8 = plVar8 + (ulong)uVar16 * 3;
    *plVar8 = param_2;
    plVar8[2] = 0;
    plVar15 = plVar8 + 1;
    *plVar15 = 0;
    uVar16 = *(uint *)(plVar8 + 2);
    uVar6 = (ulong)uVar16;
    if (uVar16 <= param_4) {
      uVar16 = param_4;
    }
    uVar18 = (ulong)uVar16;
    iVar17 = uVar16 - *(uint *)((long)plVar8 + 0x14);
    if (uVar16 < *(uint *)((long)plVar8 + 0x14) || iVar17 == 0) goto LAB__text__0044b424;
  }
  uVar7 = FUN__text__0044b7d0(plVar15,iVar17);
  if ((uVar7 & 1) == 0) {
    return 1;
  }
LAB__text__0044b424:
  uVar16 = (uint)uVar6;
  iVar17 = (int)uVar18;
  if (uVar16 < param_4) {
    lVar13 = *plVar15;
    if (lVar13 != 0) {
      lVar11 = uVar6 << 4;
      lVar9 = ~uVar6 + uVar18;
      while( true ) {
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + lVar11) = 0;
          ((undefined8 *)(lVar13 + lVar11))[1] = 0x42c8000000000000;
        }
        if (lVar9 == 0) break;
        lVar13 = *plVar15;
        lVar9 = lVar9 + -1;
        lVar11 = lVar11 + 0x10;
      }
    }
    *(int *)(plVar15 + 1) = iVar17;
    if (uVar16 != 0) {
      uVar7 = ~uVar6;
      if ((iVar17 - uVar16 & 1) != 0) {
        puVar2 = (undefined8 *)(*plVar15 + (ulong)(uVar16 - 1) * 0x10);
        puVar3 = (undefined8 *)(*plVar15 + uVar6 * 0x10);
        uVar6 = uVar6 + 1;
        uVar5 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
      }
      if (uVar7 + uVar18 != 0) {
        lVar11 = uVar18 - uVar6;
        lVar13 = uVar6 << 4;
        lVar9 = (ulong)(uVar16 - 1) * 0x10;
        do {
          lVar11 = lVar11 + -2;
          puVar2 = (undefined8 *)(*plVar15 + lVar9);
          puVar3 = (undefined8 *)(*plVar15 + lVar13);
          uVar5 = puVar2[1];
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(*plVar15 + lVar9);
          lVar4 = *plVar15 + lVar13;
          lVar13 = lVar13 + 0x20;
          uVar5 = puVar2[1];
          *(undefined8 *)(lVar4 + 0x10) = *puVar2;
          *(undefined8 *)(lVar4 + 0x18) = uVar5;
        } while (lVar11 != 0);
      }
    }
  }
  else {
    *(int *)(plVar15 + 1) = iVar17;
  }
  if (param_4 != 0) {
    lVar13 = 0;
    puVar12 = (undefined4 *)(param_3 + 4);
    do {
      *(undefined4 *)(*plVar15 + lVar13 + 4) = *puVar12;
      puVar1 = puVar12 + -1;
      puVar12 = puVar12 + 2;
      *(undefined4 *)(*plVar15 + lVar13) = *puVar1;
      lVar13 = lVar13 + 0x10;
    } while (uVar14 * 0x10 != lVar13);
    if ((param_4 != 0) && (param_4 < *(uint *)(plVar15 + 1))) {
      puVar12 = (undefined4 *)(param_3 + (ulong)(param_4 - 1) * 8);
      lVar13 = uVar14 << 4;
      do {
        uVar14 = uVar14 + 1;
        *(undefined4 *)(*plVar15 + lVar13 + 4) = puVar12[1];
        *(undefined4 *)(*plVar15 + lVar13) = *puVar12;
        lVar13 = lVar13 + 0x10;
      } while (uVar14 < *(uint *)(plVar15 + 1));
    }
  }
  return 1;
}


