/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fa770; name: FUN_.text__004fa770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fa770(long *param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = param_1[0x16];
  lVar8 = _DAT_008a50b8 + 0x128;
  lVar1 = _DAT_008a50b8 + 0x150;
  *param_1 = _DAT_008a50b8 + 0x10;
  param_1[3] = lVar8;
  param_1[5] = lVar1;
  if (lVar6 != 0) {
    if (*(uint *)(param_1 + 0x17) != 0) {
      lVar8 = (ulong)*(uint *)(param_1 + 0x17) << 5;
      lVar6 = lVar6 + 8;
      do {
        FUN__text__004fdabc(lVar6);
        lVar8 = lVar8 + -0x20;
        lVar6 = lVar6 + 0x20;
      } while (lVar8 != 0);
      lVar6 = param_1[0x16];
    }
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN__text__00400fc0(0,lVar6);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  plVar7 = (long *)param_1[0x10];
  if (plVar7 != (long *)0x0) {
    if (*(uint *)(param_1 + 0x11) != 0) {
      lVar8 = (ulong)*(uint *)(param_1 + 0x11) * 0x48;
      do {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar8 = lVar8 + -0x48;
        plVar7 = plVar7 + 9;
      } while (lVar8 != 0);
      plVar7 = (long *)param_1[0x10];
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    FUN__text__00400fc0(0,plVar7);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  lVar8 = param_1[0xf];
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x24);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))();
    }
  }
  thunk_FUN__text__004eb808(param_1);
  return;
}


