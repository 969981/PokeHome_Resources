/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ced0; name: FUN_.text__0045ced0
 */


void FUN__text__0045ced0(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045cf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x1c8))(plVar5,param_2,param_3,param_1[2]);
    return;
  }
  plVar5 = (long *)*param_3;
  *param_3 = 0;
  if (plVar5 != (long *)0x0) {
    piVar1 = (int *)((long)plVar5 + 0x14);
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined2 *)(param_3 + 1) = 0;
  return;
}


