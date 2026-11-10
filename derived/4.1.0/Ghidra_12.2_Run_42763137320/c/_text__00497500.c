/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00497500; name: FUN_.text__00497500
 */


void FUN__text__00497500(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x24);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00497564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x20))();
      return;
    }
  }
  return;
}


