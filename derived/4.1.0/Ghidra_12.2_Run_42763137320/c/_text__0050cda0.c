/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050cda0; name: FUN_.text__0050cda0
 */


void FUN__text__0050cda0(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((0 < *(int *)((long)param_2 + 900)) && (0 < (int)param_2[0x70])) {
    lVar7 = 0;
    do {
      FUN__text__0050cda0(param_1,param_2[lVar7 + 0x60]);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_2[0x70]);
  }
  plVar6 = (long *)(param_1 + 0x10);
  plVar2 = (long *)*plVar6;
  if ((plVar2 == (long *)0x0) || ((plVar2 <= param_2 && (param_2 < plVar2 + 0x1c4)))) {
    plVar3 = plVar2;
    plVar2 = (long *)0x0;
  }
  else {
    plVar3 = (long *)plVar2[0x1c4];
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else if ((param_2 < plVar3) || (plVar3 + 0x1c4 <= param_2)) {
      plVar5 = (long *)plVar3[0x1c4];
      plVar4 = plVar3;
      if (plVar5 == (long *)0x0) {
        plVar3 = (long *)0x0;
LAB__text__0050cf0c:
        plVar2 = plVar4;
      }
      else {
        do {
          plVar2 = plVar5;
          if (plVar2 <= param_2) {
            plVar3 = plVar2;
            if (param_2 < plVar2 + 0x1c4) goto LAB__text__0050cf0c;
          }
          plVar5 = (long *)plVar2[0x1c4];
          plVar3 = (long *)0x0;
          plVar4 = plVar2;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  if (plVar3[0x1c6] == 0) {
    plVar3[0x1c6] = (long)param_2;
    *param_2 = 0;
    iVar1 = (int)plVar3[0x1c5] + 1;
    *(int *)(plVar3 + 0x1c5) = iVar1;
  }
  else {
    *param_2 = plVar3[0x1c6];
    plVar3[0x1c6] = (long)param_2;
    iVar1 = (int)plVar3[0x1c5] + 1;
    *(int *)(plVar3 + 0x1c5) = iVar1;
  }
  if (iVar1 != 4) {
    return;
  }
  if ((long *)*plVar6 != plVar3) {
    plVar6 = plVar2 + 0x1c4;
  }
  *plVar6 = plVar3[0x1c4];
  FUN__text__00400fc0(10);
  return;
}


