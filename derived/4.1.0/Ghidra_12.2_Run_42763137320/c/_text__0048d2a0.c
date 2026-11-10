/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d2a0; name: FUN_.text__0048d2a0
 */


void FUN__text__0048d2a0(long *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = param_2 / uVar3;
    }
    for (lVar5 = *(long *)(*param_1 + (ulong)(param_2 - uVar4 * uVar3) * 8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x68)) {
      if (*(uint *)(lVar5 + 0x4c) == param_2) {
        if ((*(byte *)(lVar5 + 0x60) >> 1 & 1) != 0) {
          uStack_58 = *(undefined8 *)(lVar5 + 0x28);
          pcVar2 = *(code **)(lVar5 + 0x50);
          local_60 = *(undefined8 *)(lVar5 + 0x58);
          local_50 = param_2;
          uStack_4c = param_3;
          local_48 = param_4;
          lVar5 = nn::os::GetCurrentThread();
          param_1[0xc] = lVar5;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar2)(2,&local_60);
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


