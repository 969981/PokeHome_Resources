/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b13b0; name: FUN_.text__005b13b0
 */


void FUN__text__005b13b0(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((*param_2 == 0) || (puVar7 = *(undefined8 **)(*param_2 + 0x60), puVar7 == (undefined8 *)0x0))
  {
LAB__text__005b141c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    plVar4 = (long *)FUN__text__0012d4b4();
    if (plVar4 != plVar3) {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
      if (plVar3 == (long *)0x0) goto LAB__text__005b141c;
    }
    puVar7 = puVar7 + -10;
  }
  puVar8 = *(undefined8 **)(*param_1 + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  plVar4 = (long *)FUN__text__0012d4b4();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  lVar5 = *param_3;
  if (*(int *)(puVar8 + 0x1c) <= *(int *)(puVar7 + 0x26)) {
    if ((lVar5 == 0) || (puVar7 = *(undefined8 **)(lVar5 + 0x60), puVar7 == (undefined8 *)0x0)) {
LAB__text__005b1590:
      puVar7 = (undefined8 *)0x0;
    }
    else {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      plVar4 = (long *)FUN__text__0012d4b4();
      if (plVar4 != plVar3) {
        do {
          plVar3 = (long *)*plVar3;
        } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
        if (plVar3 == (long *)0x0) goto LAB__text__005b1590;
      }
      puVar7 = puVar7 + -10;
    }
    puVar8 = *(undefined8 **)(*param_2 + 0x60);
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    plVar4 = (long *)FUN__text__0012d4b4();
    if (plVar4 != plVar3) {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    }
    if (*(int *)(puVar8 + 0x1c) <= *(int *)(puVar7 + 0x26)) {
      return;
    }
    lVar6 = *param_2;
    *param_2 = 0;
    lVar5 = *param_3;
    *param_3 = 0;
    *param_2 = lVar5;
    if (*param_3 != 0) {
      (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
    }
    *param_3 = lVar6;
    if ((*param_2 == 0) || (puVar7 = *(undefined8 **)(*param_2 + 0x60), puVar7 == (undefined8 *)0x0)
       ) {
LAB__text__005b16cc:
      puVar7 = (undefined8 *)0x0;
    }
    else {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      plVar4 = (long *)FUN__text__0012d4b4();
      if (plVar4 != plVar3) {
        do {
          plVar3 = (long *)*plVar3;
        } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
        if (plVar3 == (long *)0x0) goto LAB__text__005b16cc;
      }
      puVar7 = puVar7 + -10;
    }
    puVar8 = *(undefined8 **)(*param_1 + 0x60);
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    plVar4 = (long *)FUN__text__0012d4b4();
    if (plVar4 != plVar3) {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    }
    if (*(int *)(puVar8 + 0x1c) <= *(int *)(puVar7 + 0x26)) {
      return;
    }
    lVar6 = *param_1;
    *param_1 = 0;
    lVar5 = *param_2;
    *param_2 = 0;
    *param_1 = lVar5;
    if (*param_2 != 0) {
      (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    }
    *param_2 = lVar6;
    return;
  }
  if ((lVar5 == 0) || (puVar7 = *(undefined8 **)(lVar5 + 0x60), puVar7 == (undefined8 *)0x0)) {
LAB__text__005b150c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    plVar4 = (long *)FUN__text__0012d4b4();
    if (plVar4 != plVar3) {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
      if (plVar3 == (long *)0x0) goto LAB__text__005b150c;
    }
    puVar7 = puVar7 + -10;
  }
  puVar8 = *(undefined8 **)(*param_2 + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  plVar4 = (long *)FUN__text__0012d4b4();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  iVar1 = *(int *)(puVar7 + 0x26);
  iVar2 = *(int *)(puVar8 + 0x1c);
  lVar5 = *param_1;
  *param_1 = 0;
  if (iVar1 < iVar2) {
    lVar6 = *param_3;
    *param_3 = 0;
    *param_1 = lVar6;
    if (*param_3 != 0) {
      (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
    }
    *param_3 = lVar5;
    return;
  }
  lVar6 = *param_2;
  *param_2 = 0;
  *param_1 = lVar6;
  if (*param_2 != 0) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  *param_2 = lVar5;
  if ((*param_3 == 0) || (puVar7 = *(undefined8 **)(*param_3 + 0x60), puVar7 == (undefined8 *)0x0))
  {
LAB__text__005b1760:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    plVar4 = (long *)FUN__text__0012d4b4();
    if (plVar4 != plVar3) {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
      if (plVar3 == (long *)0x0) goto LAB__text__005b1760;
    }
    puVar7 = puVar7 + -10;
  }
  puVar8 = *(undefined8 **)(*param_2 + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  plVar4 = (long *)FUN__text__0012d4b4();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  if (*(int *)(puVar8 + 0x1c) <= *(int *)(puVar7 + 0x26)) {
    return;
  }
  lVar6 = *param_2;
  *param_2 = 0;
  lVar5 = *param_3;
  *param_3 = 0;
  *param_2 = lVar5;
  if (*param_3 != 0) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
  }
  *param_3 = lVar6;
  return;
}


