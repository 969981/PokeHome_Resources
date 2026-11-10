/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059e400; name: FUN_.text__0059e400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__0059e400(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  uVar7 = uRam0000000000724938;
  uVar6 = _DAT_00724930;
  lVar9 = *(long *)(param_1 + -0x28);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      plVar11 = *(long **)(lVar9 + 0x58);
      plVar8 = (long *)FUN__text__0059a650();
      if (plVar8 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar8 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            auVar5 = *(undefined1 (*) [16])(lVar9 + 0x50);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            return auVar5;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}


