/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eda60; name: FUN_.text__004eda60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004eda60(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)FUN__text__00400f80(0,0x78);
  if (plVar5 != (long *)0x0) {
    *(undefined1 *)(plVar5 + 4) = 0xff;
    lVar4 = _DAT_008a5158;
    *(undefined1 *)(plVar5 + 5) = 0xff;
    *(undefined4 *)(plVar5 + 2) = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = param_1;
    plVar5[10] = param_2;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    *plVar5 = lVar4 + 0x10;
    plVar5[1] = 0;
    piVar1 = (int *)(param_2 + 0x24);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


