/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a8b0; name: FUN_.text__0044a8b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044a8b0(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  int *piVar9;
  
  plVar8 = (long *)param_1[4];
  *param_1 = _DAT_008a4b18 + 0x10;
  for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    plVar5 = (long *)FUN__text__0044a9c0(plVar8 + 1);
    if (plVar5 != (long *)0x0) {
      piVar9 = (int *)((long)plVar5 + 0x24);
      (**(code **)(*plVar5 + 0x40))(plVar5,param_1[1]);
      do {
        iVar1 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(plVar5[2] + 0x20))(plVar5 + 2);
      }
    }
  }
  FUN__text__00447a30(param_1 + 4);
  *param_1 = 0x888888;
  if (param_1[2] == 0) {
    lVar6 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar6 = param_1[2];
  }
  piVar4 = _DAT_008a44c0;
  piVar7 = (int *)param_1[3];
  plVar8 = *(long **)(_DAT_008a44c0 + 2);
  piVar9 = _DAT_008a44c0;
  if (*(long **)(_DAT_008a44c0 + 4) != param_1) {
    piVar9 = piVar7;
  }
  *(long *)(piVar9 + 4) = lVar6;
  if (plVar8 == param_1) {
    *(int **)(piVar4 + 2) = piVar7;
  }
  *piVar4 = *piVar4 + -1;
  return;
}


