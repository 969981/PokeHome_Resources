/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059cd00; name: FUN_.text__0059cd00
 */


undefined1  [16] FUN__text__0059cd00(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x68);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      plVar9 = *(long **)(lVar7 + 0x58);
      plVar6 = (long *)FUN__text__0059a650();
      if (plVar6 != plVar9) {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9 != plVar6 && plVar9 != (long *)0x0);
        if (plVar9 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            auVar5 = *(undefined1 (*) [16])(lVar7 + 0x60);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            return auVar5;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
  return ZEXT816(0);
}


