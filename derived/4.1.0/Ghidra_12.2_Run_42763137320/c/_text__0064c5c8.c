/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c5c8; name: FUN_.text__0064c5c8
 */


undefined8 FUN__text__0064c5c8(long param_1)

{
  MutexType *pMVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  long local_18;
  
  iVar3 = nn::nifm::Initialize();
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x89) = 1;
    uVar4 = nn::nifm::IsNetworkAvailable();
  }
  else {
    if (*(char *)(param_1 + 0x89) == '\0') {
      return 0;
    }
    uVar4 = nn::nifm::IsNetworkAvailable();
  }
  if ((uVar4 & 1) == 0) {
    pMVar1 = (MutexType *)(param_1 + 0xcc0);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(param_1 + 0xce0) == 0) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      bVar2 = *(byte *)(*(long *)(param_1 + 0xce0) + 0x25a);
      nn::os::UnlockMutex(pMVar1);
      if ((bVar2 & 1) == 0) {
        return 0;
      }
    }
    nn::os::LockMutex(pMVar1);
    FUN__text__00240ddc(&local_18,*(undefined8 *)(param_1 + 0x50),param_1 + 0xce8);
    if (*(long *)(param_1 + 0xce0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xce0) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0xce0) = local_18;
    pcVar5 = *(code **)(local_18 + 0x378);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(local_18 + 0x380) = 0;
      *(undefined8 *)(local_18 + 0x388) = 0;
      *(undefined8 *)(local_18 + 0x370) = 0;
      *(undefined8 *)(local_18 + 0x378) = 0;
      (*pcVar5)(local_18 + 0x390);
    }
    *(code **)(local_18 + 0x370) = FUN__text__0064ccf0;
    *(undefined **)(local_18 + 0x378) = &DAT__text__0064cd20;
    *(undefined **)(local_18 + 0x380) = &DAT__text__0064cd24;
    *(undefined **)(local_18 + 0x388) = &DAT__text__0064cd28;
    FUN__text__005e896c(*(undefined8 *)(param_1 + 0xce0),0x7205f1,0xffffffff,0x10);
    nn::os::UnlockMutex(pMVar1);
  }
  return 1;
}


