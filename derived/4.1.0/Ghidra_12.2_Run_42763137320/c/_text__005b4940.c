/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4940; name: FUN_.text__005b4940
 */


void FUN__text__005b4940(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  plVar2 = (long *)*param_2;
  *(undefined4 *)(param_2 + 3) = 0;
  while( true ) {
    if ((plVar2 == param_1) ||
       (plVar1 = (long *)*plVar2, plVar1 == param_1 || *(int *)(plVar2 + 3) == 1)) {
      *(undefined4 *)(*param_1 + 0x18) = 1;
      return;
    }
    lVar5 = plVar1[1];
    *(undefined4 *)(plVar1 + 3) = 0;
    lVar8 = lVar5;
    if (plVar2 == (long *)lVar5) {
      lVar8 = plVar1[2];
    }
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) != 0)) break;
    *(undefined4 *)(lVar8 + 0x18) = 1;
    *(undefined4 *)(plVar2 + 3) = 1;
    plVar2 = (long *)*plVar1;
    param_2 = plVar1;
  }
  plVar4 = (long *)plVar2[1];
  if (plVar2 == (long *)lVar5) {
    if (plVar4 == param_2) {
      plVar3 = (long *)*plVar1;
      puVar7 = (undefined8 *)plVar2[2];
      plVar6 = (long *)plVar3[1];
      plVar1[1] = (long)puVar7;
      param_2 = plVar2;
    }
    else {
      plVar4 = (long *)param_2[1];
      plVar2[2] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)plVar2;
      }
      param_2[1] = (long)plVar2;
      *plVar2 = (long)param_2;
      plVar3 = (long *)*plVar1;
      puVar7 = (undefined8 *)param_2[2];
      plVar6 = (long *)plVar3[1];
      plVar1[1] = (long)puVar7;
    }
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = plVar1;
    }
    param_2[2] = (long)plVar1;
  }
  else {
    if (plVar4 == param_2) {
      plVar4 = (long *)param_2[2];
      plVar2[1] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)plVar2;
      }
      param_2[2] = (long)plVar2;
      *plVar2 = (long)param_2;
      plVar4 = (long *)param_2[1];
      plVar3 = (long *)*plVar1;
      plVar6 = (long *)plVar3[1];
      plVar1[2] = (long)plVar4;
    }
    else {
      plVar3 = (long *)*plVar1;
      plVar6 = (long *)plVar3[1];
      plVar1[2] = (long)plVar4;
      param_2 = plVar2;
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)plVar1;
    }
    param_2[1] = (long)plVar1;
  }
  *plVar1 = (long)param_2;
  *param_2 = (long)plVar3;
  lVar8 = 8;
  if (plVar6 != plVar1) {
    lVar8 = 0x10;
  }
  lVar5 = 0;
  if (plVar3 != param_1) {
    lVar5 = lVar8;
  }
  *(long **)((long)plVar3 + lVar5) = param_2;
  *(undefined4 *)(param_2 + 3) = 1;
  *(undefined4 *)(*param_1 + 0x18) = 1;
  return;
}


