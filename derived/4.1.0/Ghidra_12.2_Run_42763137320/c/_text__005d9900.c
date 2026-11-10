/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9900; name: FUN_.text__005d9900
 */


void FUN__text__005d9900(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_2 + 8);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      plVar9 = *(long **)(lVar7 + 0x58);
      plVar6 = (long *)FUN__text__0010b70c();
      if (plVar6 != plVar9) {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9 != plVar6 && plVar9 != (long *)0x0);
        if (plVar9 == (long *)0x0) break;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar2 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar3;
    } while (iVar3 != 0);
  }
  *param_1 = 0;
  return;
}


