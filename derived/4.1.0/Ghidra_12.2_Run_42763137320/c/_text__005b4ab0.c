/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4ab0; name: FUN_.text__005b4ab0
 */


long * FUN__text__005b4ab0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = (long *)param_2[1];
  plVar7 = (long *)param_2[2];
  plVar5 = plVar7;
  if ((plVar3 == (long *)0x0) || (plVar5 = plVar3, plVar7 == (long *)0x0)) {
    plVar6 = (long *)*param_2;
    plVar8 = plVar6 + 1;
    plVar10 = (long *)*plVar8;
  }
  else {
    plVar5 = plVar7;
    do {
      plVar9 = plVar5;
      plVar5 = (long *)plVar9[1];
    } while ((long *)plVar9[1] != (long *)0x0);
    plVar6 = (long *)*param_2;
    plVar5 = (long *)plVar9[2];
    plVar8 = plVar6 + 1;
    plVar10 = (long *)*plVar8;
    if (plVar9 != param_2) {
      *plVar3 = (long)plVar9;
      plVar9[1] = (long)plVar3;
      if (plVar9 != plVar7) {
        plVar9[2] = (long)plVar7;
        *plVar7 = (long)plVar9;
        plVar7 = (long *)*plVar9;
        if (plVar5 != (long *)0x0) {
          *plVar5 = (long)plVar7;
        }
        plVar7[1] = (long)plVar5;
      }
      *plVar9 = (long)plVar6;
      lVar1 = 8;
      if (plVar10 != param_2) {
        lVar1 = 0x10;
      }
      lVar2 = 0;
      if (plVar6 != param_1) {
        lVar2 = lVar1;
      }
      *(long **)((long)plVar6 + lVar2) = plVar9;
      iVar4 = (int)plVar9[3];
      *(int *)(plVar9 + 3) = (int)param_2[3];
      goto joined_r0x005b4bbc;
    }
  }
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)plVar6;
  }
  if (plVar10 != param_2) {
    plVar8 = plVar6 + 2;
  }
  plVar10 = plVar6;
  if (plVar6 != param_1) {
    plVar10 = plVar8;
  }
  *plVar10 = (long)plVar5;
  plVar8 = plVar6;
  if ((long *)param_1[1] == param_2) {
    while (plVar10 = plVar7, plVar10 != (long *)0x0) {
      plVar8 = plVar10;
      plVar7 = (long *)plVar10[1];
    }
    param_1[1] = (long)plVar8;
    plVar8 = (long *)param_1[2];
  }
  else {
    plVar8 = (long *)param_1[2];
  }
  plVar7 = plVar6;
  if (plVar8 == param_2) {
    while (plVar8 = plVar3, plVar8 != (long *)0x0) {
      plVar6 = plVar8;
      plVar3 = (long *)plVar8[2];
    }
    param_1[2] = (long)plVar6;
    iVar4 = (int)param_2[3];
  }
  else {
    iVar4 = (int)param_2[3];
  }
joined_r0x005b4bbc:
  if (iVar4 != 0) {
    FUN__text__005b4c20(param_1,plVar5,plVar7);
  }
  return param_2;
}


