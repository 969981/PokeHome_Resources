/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d4d0; name: FUN_.text__0048d4d0
 */


void FUN__text__0048d4d0(long *param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x68)) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) {
        if ((*(char *)(lVar4 + 0x60) < '\0') &&
           (pcVar5 = *(code **)(lVar4 + 0x50), pcVar5 != (code *)0x0)) {
          local_48 = *(undefined8 *)(lVar4 + 0x58);
          uStack_40 = *(undefined8 *)(lVar4 + 0x28);
          uStack_34 = *(undefined4 *)(lVar4 + 0x24);
          local_38 = param_2;
          lVar4 = nn::os::GetCurrentThread();
          param_1[0xc] = lVar4;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x80,&local_48);
          nn::os::LockMutex(pMVar1);
          param_1[0xc] = 0;
          nn::os::UnlockMutex(pMVar1);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


