/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004afde0; name: FUN_.text__004afde0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004afde0(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_84 [17];
  
  puVar6 = _DAT_008a45d8;
  plVar8 = (long *)*(long *)(param_1 + 0x60);
  do {
    if (plVar8 == (long *)0x0) {
      return;
    }
    plVar9 = (long *)plVar8[2];
    local_84[0] = 0;
    plVar7 = (long *)plVar9[1];
    if (*(short *)((long)plVar7 + 0x34) == 0x403) {
LAB__text__004afe60:
      (**(code **)(*plVar7 + 0x58))(plVar7,local_84);
    }
    else if (*(short *)((long)plVar7 + 0x34) == 0x503) {
      FUN__text__004b934c();
      plVar7 = (long *)plVar9[1];
      goto LAB__text__004afe60;
    }
    FUN__text__0048e190(*puVar6,(int)plVar9[6]);
    lVar3 = *(long *)(param_1 + 0x68);
    plVar10 = (long *)*plVar8;
    plVar7 = (long *)(param_1 + 0x60);
    if ((long *)*(long *)(param_1 + 0x60) != plVar8) {
      plVar7 = (long *)0x0;
    }
    *plVar7 = (long)plVar10;
    if ((long *)lVar3 == plVar8) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *plVar8 = *(undefined8 *)(param_1 + 0x70);
    *(long **)(param_1 + 0x70) = plVar8;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    plVar8 = (long *)plVar9[1];
    piVar1 = (int *)((long)plVar8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    (**(code **)(*plVar9 + 8))(plVar9);
    FUN__text__00400fc0(0,plVar9);
    plVar8 = plVar10;
  } while( true );
}


