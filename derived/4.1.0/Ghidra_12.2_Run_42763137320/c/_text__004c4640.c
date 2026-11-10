/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4640; name: FUN_.text__004c4640
 */


void FUN__text__004c4640(ulong param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)&DAT_00aeab80);
  if (DAT_00aeaba8 != 0) {
    uVar2 = 0;
    uVar4 = (uint)((param_2 ^ param_1) >> 4);
    if (DAT_00aeaba8 != 0) {
      uVar2 = uVar4 / DAT_00aeaba8;
    }
    plVar1 = (long *)(DAT_00aeaba0 + (ulong)(uVar4 - uVar2 * DAT_00aeaba8) * 8);
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      if (*(ulong *)(lVar3 + 8) == param_2 && *(ulong *)(lVar3 + 0x38) == param_1) {
        lVar5 = 0;
      }
      else {
        do {
          lVar5 = lVar3;
          lVar3 = *(long *)(lVar5 + 0x78);
          if (lVar3 == 0) goto LAB__text__004c46fc;
        } while (*(ulong *)(lVar3 + 8) != param_2 || *(ulong *)(lVar3 + 0x38) != param_1);
      }
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 0x78);
      }
      *plVar1 = *(long *)(lVar3 + 0x78);
      DAT_00aeabb0 = DAT_00aeabb0 + -1;
      FUN__text__004c4750();
    }
  }
LAB__text__004c46fc:
  if ((DAT_00aeabb0 == 0) && (DAT_00aeaba0 != 0)) {
    DAT_00aeaba8 = 0;
    FUN__text__00400fc0(0);
    DAT_00aeaba0 = 0;
    DAT_00aeabac = 0;
    nn::os::UnlockMutex((MutexType *)&DAT_00aeab80);
    return;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aeab80);
  return;
}


