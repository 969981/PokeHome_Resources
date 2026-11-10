/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d5d0; name: FUN_.text__0051d5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051d5d0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = _DAT_008a4048;
  FUN__text__00411760(_DAT_008a4048);
  FUN__text__0051cae0(param_1);
  FUN__text__0051cae0(param_1 + 0x18);
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == -1) {
    piVar4[2] = 0;
    piVar4[3] = 0;
    nn::os::UnlockMutex((MutexType *)(piVar4 + 4));
    return;
  }
  nn::os::UnlockMutex((MutexType *)(piVar4 + 4));
  return;
}


