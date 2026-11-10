/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ddc0; name: FUN_.text__0064ddc0
 */


/* WARNING: Removing unreachable block (ram,0x0064e08c) */
/* WARNING: Removing unreachable block (ram,0x0064e0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064ddc0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  
  lVar16 = param_1[1] - *param_1 >> 3;
  uVar10 = lVar16 + 1;
  if (uVar10 >> 0x3d != 0) {
    puVar5 = (undefined8 *)FUN__text__0064dda0(param_1);
    puVar5[7] = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    uVar10 = tpidr_el0;
    uVar10 = uVar10 & 0xffffffffffffe000;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *puVar5 = 0x8677a8;
    uVar9 = 0;
    if (uVar10 != 0) {
      if (*(long *)(uVar10 + 0x98) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x10);
      }
    }
    puVar5[0xb] = 0;
    puVar5[0xe] = uVar9;
    *_DAT_008a6558 = 1;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    puVar5[0x14] = 0;
    *puVar5 = 0x899c88;
    puVar5[1] = uVar9;
    puVar5[9] = 0x899cb8;
    puVar5[10] = 0;
    puVar5[0xf] = 0x7ffffffffffffff;
    puVar2 = puVar5 + 0x16;
    *puVar2 = puVar5[0xe];
    puVar5[0x17] = puVar5[0xf];
    plVar6 = (long *)puVar5[0x14];
    if (plVar6 == (long *)0x0) {
      puVar5[0x1c] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x20] = 0;
      puVar5[0x1e] = 0;
    }
    else if (plVar6 == puVar5 + 0x10) {
      puVar5[0x1c] = puVar5 + 0x18;
      (**(code **)(*(long *)puVar5[0x14] + 0x18))();
      puVar5[0x1f] = 0;
      puVar5[0x20] = 0;
      puVar5[0x1e] = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar6 + 0x10))();
      puVar5[0x1c] = uVar9;
      puVar5[0x1f] = 0;
      puVar5[0x20] = 0;
      puVar5[0x1e] = 0;
    }
    if ((ulong)puVar5[0x17] < 5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0xa0,8);
    puVar3 = (undefined8 *)puVar5[0x1e];
    lVar16 = puVar5[0x1f];
    if (lVar16 != 0) {
      uVar10 = tpidr_el0;
      uVar10 = uVar10 & 0xffffffffffffe000;
      lVar4 = *(long *)(uVar10 + 0x98);
      puVar17 = puVar3;
      puVar13 = puVar7;
      do {
        if (lVar4 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)((uVar10 | 0x18) + lVar4 * 8) = *puVar2;
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
        uVar9 = *puVar17;
        *puVar17 = 0;
        *puVar13 = uVar9;
        puVar1 = puVar17 + 1;
        uVar9 = puVar17[2];
        uVar14 = puVar17[3];
        puVar17 = puVar17 + 4;
        puVar13[1] = *puVar1;
        puVar13[2] = uVar9;
        puVar13[3] = uVar14;
        puVar13 = puVar13 + 4;
        lVar4 = *(long *)(uVar10 + 0x98) + -1;
        *(long *)(uVar10 + 0x98) = lVar4;
      } while (puVar17 != puVar3 + lVar16 * 4);
    }
    if (puVar3 != (undefined8 *)0x0) {
      for (lVar16 = puVar5[0x1f]; lVar16 != 0; lVar16 = lVar16 + -1) {
        puVar17 = (undefined8 *)*puVar3;
        *puVar3 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)(puVar17);
          (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],puVar17,puVar3[2],puVar3[3]);
        }
        puVar3 = puVar3 + 4;
      }
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar5[0x1e],puVar5[0x20] << 5,8);
    }
    puVar5[0x1e] = puVar7;
    puVar5[0x20] = 5;
    return;
  }
  uVar8 = param_1[2] - *param_1;
  uVar11 = (long)uVar8 >> 2;
  if (uVar11 <= uVar10) {
    uVar11 = uVar10;
  }
  if (0x7ffffffffffffff7 < uVar8) {
    uVar11 = 0x1fffffffffffffff;
  }
  if (uVar11 != 0) {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 << 3,8);
    if (lVar4 != 0) goto LAB__text__0064de4c;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar4 = 0;
LAB__text__0064de4c:
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  if (*(long *)(uVar10 + 0x98) == 0x10) {
LAB__text__0064df88:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar6 = (long *)(lVar4 + lVar16 * 8);
  lVar4 = lVar4 + uVar11 * 8;
  *(long *)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) = param_1[3];
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
  lVar16 = *param_2;
  *param_2 = 0;
  plVar12 = plVar6 + 1;
  *plVar6 = lVar16;
  lVar16 = *(long *)(uVar10 + 0x98) + -1;
  *(long *)(uVar10 + 0x98) = lVar16;
  plVar18 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 == plVar18) {
    lVar16 = param_1[2];
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar12;
    param_1[2] = lVar4;
  }
  else {
    do {
      if (lVar16 == 0x10) goto LAB__text__0064df88;
      *(long *)(uVar10 + 0x18 + lVar16 * 8) = param_1[3];
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
      plVar15 = plVar15 + -1;
      lVar16 = *plVar15;
      *plVar15 = 0;
      plVar6 = plVar6 + -1;
      *plVar6 = lVar16;
      lVar16 = *(long *)(uVar10 + 0x98) + -1;
      *(long *)(uVar10 + 0x98) = lVar16;
    } while (plVar15 != plVar18);
    plVar15 = (long *)*param_1;
    plVar18 = (long *)param_1[1];
    lVar16 = param_1[2];
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar12;
    param_1[2] = lVar4;
    if (plVar18 != plVar15) {
      do {
        plVar6 = plVar18 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar18[-1] = 0;
        }
        plVar18 = plVar6;
      } while (plVar6 != plVar15);
    }
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar15,lVar16 - (long)plVar15,8);
  return;
}


