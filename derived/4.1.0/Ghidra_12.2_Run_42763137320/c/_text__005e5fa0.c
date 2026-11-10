/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e5fa0; name: FUN_.text__005e5fa0
 */


void FUN__text__005e5fa0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  FUN__text__005e8c48();
  piVar1 = (int *)(param_1 + 0x3ec);
  if (*piVar1 != 2) {
    if (*piVar1 != 0) {
LAB__text__005e5ff0:
      nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
      FUN__text__005e1f8c(*(undefined8 *)(param_1 + 0x3c8));
      nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3c0));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
      return;
    }
    do {
      if (*piVar1 != 0) {
        ClearExclusiveLocal();
        goto LAB__text__005e5ff0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


