/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004726e0; name: FUN_.text__004726e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004726e0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  
  pcVar9 = _DAT_008a4d00;
  plVar8 = _DAT_008a4cf8;
  piVar7 = _DAT_008a4cf0;
  plVar3 = *(long **)(_DAT_008a4cf0 + 4);
  while (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 2;
    *plVar8 = (long)plVar3;
    piVar2 = (int *)((long)plVar3 + 0x24);
    *pcVar9 = '\0';
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    (**(code **)(*plVar3 + 0x98))(plVar3,param_1);
    plVar15 = (long *)plVar3[8];
    *plVar8 = 0;
    if (*pcVar9 != '\0') {
      plVar13 = (long *)(piVar7 + 4);
      *pcVar9 = '\0';
      plVar12 = (long *)0x0;
      do {
        plVar11 = plVar12;
        plVar12 = (long *)*plVar13;
        plVar13 = plVar12 + 8;
      } while (plVar12 != (long *)0x0 && plVar12 != plVar3);
      if (plVar12 != (long *)0x0) {
        plVar3 = (long *)(piVar7 + 4);
        if (*(long **)(piVar7 + 4) != plVar12) {
          plVar3 = plVar11 + 8;
        }
        *plVar3 = plVar12[8];
        if (*(long **)(piVar7 + 2) == plVar12) {
          *(long **)(piVar7 + 2) = plVar11;
        }
        *piVar7 = *piVar7 + -1;
      }
    }
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar3 = plVar15;
    if (iVar4 + -1 == 0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  puVar10 = *(undefined8 **)(_DAT_008a4d08 + 0x10);
  if (puVar10 != (undefined8 *)0x0) {
    if ((param_2 & 1) == 0) {
      do {
        puVar14 = (undefined8 *)puVar10[0x48];
        FUN__text__004743fc(puVar10,param_1);
        puVar10 = puVar14;
      } while (puVar14 != (undefined8 *)0x0);
    }
    else {
      do {
        puVar14 = (undefined8 *)puVar10[0x48];
        (**(code **)*puVar10)(puVar10,0,1);
        puVar10 = puVar14;
      } while (puVar14 != (undefined8 *)0x0);
    }
  }
  return;
}


