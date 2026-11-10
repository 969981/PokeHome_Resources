/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb0d0; name: FUN_.text__005cb0d0
 */


void FUN__text__005cb0d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  uVar6 = tpidr_el0;
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB__text__005cb2cc;
  puVar1 = (undefined8 *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  if (puVar1 <= puVar13 && (long)puVar13 - (long)puVar1 != 0) {
    lVar2 = (long)puVar13 - (long)puVar1 >> 3;
    lVar3 = lVar2 + 2;
    if (-2 < lVar2) {
      lVar3 = lVar2 + 1;
    }
    lVar3 = lVar3 >> 1;
    if (puVar13 == puVar11) {
      puVar13 = puVar13 + -lVar3;
    }
    else {
      do {
        if (puVar13[-lVar3] != 0) {
          (**(code **)(*(long *)(puVar13[-lVar3] + 0x48) + 0x18))();
          puVar13[-lVar3] = 0;
        }
        uVar9 = *puVar13;
        *puVar13 = 0;
        puVar13[-lVar3] = uVar9;
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar11);
      puVar11 = (undefined8 *)param_1[1];
      puVar13 = puVar13 + -lVar3;
    }
    param_1[1] = (long)(puVar11 + -lVar3);
    param_1[2] = (long)puVar13;
    goto LAB__text__005cb2cc;
  }
  puVar13 = (undefined8 *)param_1[4];
  uVar4 = (long)puVar11 - (long)puVar1 >> 2;
  if ((long)puVar11 - (long)puVar1 == 0) {
    uVar4 = 1;
  }
  lVar3 = (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,uVar4 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*puVar13 + 0xb8))();
    plVar5 = (long *)((uVar4 >> 2) * 8);
    plVar14 = (long *)param_1[1];
    uVar7 = param_1[2] - (long)plVar14;
    if (uVar7 == 0) goto LAB__text__005cb258;
LAB__text__005cb1b8:
    uVar10 = uVar6 & 0xffffffffffffe000;
    lVar12 = *(long *)(uVar10 + 0x98);
    lVar2 = ((long)uVar7 >> 3) << 3;
    plVar8 = plVar5;
    do {
      if (lVar12 == 0x10) goto LAB__text__005cb33c;
      lVar2 = lVar2 + -8;
      *(undefined8 *)((uVar10 | 0x18) + lVar12 * 8) = *puVar13;
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
      lVar12 = *plVar14;
      *plVar14 = 0;
      *plVar8 = lVar12;
      lVar12 = *(long *)(uVar10 + 0x98) + -1;
      *(long *)(uVar10 + 0x98) = lVar12;
      plVar8 = plVar8 + 1;
      plVar14 = plVar14 + 1;
    } while (lVar2 != 0);
    plVar14 = (long *)param_1[2];
    plVar8 = (long *)((long)plVar5 + (uVar7 & 0xfffffffffffffff8));
    plVar15 = (long *)param_1[1];
  }
  else {
    plVar5 = (long *)(lVar3 + (uVar4 >> 2) * 8);
    plVar14 = (long *)param_1[1];
    uVar7 = param_1[2] - (long)plVar14;
    if (uVar7 != 0) goto LAB__text__005cb1b8;
LAB__text__005cb258:
    plVar8 = plVar5;
    plVar15 = plVar14;
  }
  lVar12 = *param_1;
  *param_1 = lVar3;
  param_1[1] = (long)plVar5;
  lVar2 = param_1[3];
  param_1[2] = (long)plVar8;
  param_1[3] = lVar3 + uVar4 * 8;
  if (plVar14 != plVar15) {
    do {
      plVar5 = plVar14 + -1;
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        plVar14[-1] = 0;
      }
      plVar14 = plVar5;
    } while (plVar5 != plVar15);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,lVar12,lVar2 - lVar12,8);
  }
LAB__text__005cb2cc:
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) != 0x10) {
    puVar11 = (undefined8 *)param_1[2];
    *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    uVar9 = *param_2;
    *param_2 = 0;
    *puVar11 = uVar9;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB__text__005cb33c:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


