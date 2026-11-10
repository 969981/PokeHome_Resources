/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00499490; name: FUN_.text__00499490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00499490(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = (long *)param_1[0x23];
  lVar1 = _DAT_008a4928 + 0x10;
  lVar2 = _DAT_008a4928 + 0x2b8;
  lVar3 = _DAT_008a4928 + 0x2d0;
  param_1[5] = _DAT_008a4928 + 0x310;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  if (*(uint *)(param_1 + 0x24) != 0) {
    plVar5 = plVar10 + *(uint *)(param_1 + 0x24);
    do {
      FUN__text__00498740(*plVar10,0);
      plVar9 = (long *)*plVar10;
      piVar4 = (int *)((long)plVar9 + 0x14);
      do {
        iVar6 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar5);
    plVar10 = (long *)param_1[0x23];
  }
  if (plVar10 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN__text__00400fc0(0,plVar10);
    param_1[0x23] = 0;
    *(undefined4 *)((long)param_1 + 0x124) = 0;
  }
  param_1[0x25] = 0;
  FUN__text__0049cd14(param_1);
  FUN__text__0049cc7c(param_1);
  return;
}


