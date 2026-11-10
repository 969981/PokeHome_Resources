/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c20f0; name: FUN_.text__004c20f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c20f0(long param_1,long param_2,char *param_3,undefined4 param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    iVar3 = 0;
  }
  else {
    FUN__text__0048dce0(*_DAT_008a45d8,*(int *)(param_2 + 0x2c),param_3);
    iVar3 = *(int *)(param_2 + 0x2c);
  }
  plVar11 = *(long **)(param_2 + 0x40);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uVar13 = *(uint *)(param_1 + 0x18);
  uVar14 = (ulong)uVar13;
  lVar12 = *(long *)(param_2 + 0x10);
  puVar8 = puVar5;
  if (uVar13 == 0) {
LAB__text__004c21b0:
    if (puVar8 == puVar5 + uVar14 * 6) goto LAB__text__004c21d4;
    puVar8 = puVar8 + 3;
    iVar3 = (**(code **)(*plVar11 + 0x80))(plVar11);
    if (iVar3 != 0) goto LAB__text__004c22a4;
LAB__text__004c22bc:
    if (*param_3 != -0x50) {
      return;
    }
  }
  else {
    lVar10 = uVar14 * 0x30;
    do {
      if (((plVar11 == (long *)*puVar8) && (lVar12 == puVar8[1])) && (iVar3 == *(int *)(puVar8 + 2))
         ) goto LAB__text__004c21b0;
      puVar8 = puVar8 + 6;
      lVar10 = lVar10 + -0x30;
    } while (lVar10 != 0);
LAB__text__004c21d4:
    puVar8 = puVar5;
    if (uVar13 == 0) {
LAB__text__004c2220:
      if (puVar8 == puVar5 + uVar14 * 6) goto LAB__text__004c2230;
      puVar8 = puVar8 + 3;
    }
    else {
      lVar10 = uVar14 * 0x30;
      do {
        if (((plVar11 == (long *)*puVar8) && (lVar12 == puVar8[1])) &&
           (iVar3 == *(int *)(puVar8 + 2))) goto LAB__text__004c2220;
        puVar8 = puVar8 + 6;
        lVar10 = lVar10 + -0x30;
      } while (lVar10 != 0);
LAB__text__004c2230:
      if (*(uint *)(param_1 + 0x1c) <= uVar13) {
        uVar14 = FUN__text__004c34a0();
        if ((uVar14 & 1) == 0) {
          return;
        }
        if (*(uint *)(param_1 + 0x1c) <= uVar13) {
          return;
        }
        uVar13 = *(uint *)(param_1 + 0x18);
        puVar5 = *(undefined8 **)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x18) = uVar13 + 1;
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      puVar5 = puVar5 + (ulong)uVar13 * 6;
      *(undefined2 *)(puVar5 + 5) = 0;
      *puVar5 = plVar11;
      puVar5[1] = lVar12;
      puVar5[4] = 0;
      *(int *)(puVar5 + 2) = iVar3;
      puVar8 = puVar5 + 3;
      *puVar8 = 0;
    }
    *(undefined2 *)(puVar8 + 2) = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    plVar11 = *(long **)(param_2 + 0x40);
    iVar3 = (**(code **)(*plVar11 + 0x80))(plVar11);
    if (iVar3 == 0) goto LAB__text__004c22bc;
LAB__text__004c22a4:
    iVar3 = (**(code **)(*plVar11 + 0x80))(plVar11);
    if (iVar3 == 10) goto LAB__text__004c22bc;
  }
  puVar5 = (undefined8 *)FUN__text__00400f80(0,0x40);
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN__text__00445cb0(puVar5,param_2,plVar11);
  uVar14 = FUN__text__00445e00(puVar5,param_3,param_4);
  if ((uVar14 & 1) == 0) goto LAB__text__004c2344;
  cVar4 = *param_3;
  if (cVar4 != -0x80) {
    if (cVar4 != -0x70) {
      cVar6 = param_3[5];
      goto LAB__text__004c23a8;
    }
    cVar6 = param_3[5];
    if (cVar6 != '\0') {
      cVar4 = -0x70;
      goto LAB__text__004c2394;
    }
  }
  plVar11 = (long *)puVar8[1];
  if (plVar11 != (long *)0x0) {
    if ((param_5 & 1) == 0) {
      do {
        uVar14 = FUN__text__00445fa4(puVar5,plVar11);
        if ((uVar14 & 1) != 0) goto LAB__text__004c238c;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        if ((plVar11[3] == puVar5[3]) &&
           (uVar14 = FUN__text__00445fa4(puVar5,plVar11), (uVar14 & 1) != 0))
        goto LAB__text__004c238c;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB__text__004c2344:
  FUN__text__00445db0(puVar5);
  return;
LAB__text__004c238c:
  cVar4 = *param_3;
  cVar6 = param_3[5];
LAB__text__004c2394:
  if ((cVar4 == -0x70) && (cVar6 != '\0')) goto LAB__text__004c23f0;
LAB__text__004c23a8:
  if ((cVar4 != -0x80) &&
     ((((cVar4 != -0x70 || (cVar6 != '\0')) && (*(char *)(puVar5 + 5) == -0x50)) &&
      ((*(char *)((long)puVar5 + 0x2c) == '{' || (*(char *)((long)puVar5 + 0x2c) == 'x')))))) {
    FUN__text__004c2f30(param_1,puVar5[3],param_4,*(undefined1 *)((long)puVar5 + 0x29));
  }
LAB__text__004c23f0:
  puVar1 = puVar8 + 1;
  puVar7 = puVar1;
  puVar2 = (undefined8 *)0x0;
  do {
    puVar9 = puVar2;
    puVar7 = (undefined8 *)*puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      *puVar5 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        puVar1 = puVar9;
      }
      *puVar1 = puVar5;
      goto LAB__text__004c2440;
    }
    puVar2 = puVar7;
  } while (*(int *)((long)puVar7 + 0x34) <= *(int *)((long)puVar5 + 0x34));
  *puVar5 = puVar7;
  puVar8 = puVar1;
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = puVar9;
  }
LAB__text__004c2440:
  *puVar8 = puVar5;
  return;
}


