/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c540; name: FUN_.text__0051c540
 */


void FUN__text__0051c540(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = DAT_00aebbe8;
  do {
    DAT_00aebbe8 = iVar3;
    if (iVar3 < 0) {
      nn::os::UnlockMutex((MutexType *)&DAT_00aebbf8);
      return;
    }
    while (DAT_00aebbe8 == iVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xaebbe8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00aebbe8 = iVar3 + -1;
      }
      if (cVar1 == '\0') {
        if ((iVar3 + -1 == 0) && (0 < DAT_00aebc18)) {
          nn::os::SignalEvent((EventType *)&DAT_00aebc20);
          return;
        }
        return;
      }
    }
    ClearExclusiveLocal();
    iVar3 = DAT_00aebbe8;
  } while( true );
}


