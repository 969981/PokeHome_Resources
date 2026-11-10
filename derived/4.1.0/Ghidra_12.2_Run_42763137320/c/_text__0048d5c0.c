/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d5c0; name: FUN_.text__0048d5c0
 */


void FUN__text__0048d5c0(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 *param_5,undefined4 *param_6)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
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
        if (((*(byte *)(lVar4 + 0x60) >> 6 & 1) != 0) &&
           (pcVar5 = *(code **)(lVar4 + 0x50), pcVar5 != (code *)0x0)) {
          local_78 = *(undefined8 *)(lVar4 + 0x58);
          uStack_70 = *(undefined8 *)(lVar4 + 0x28);
          uStack_64 = *(undefined4 *)(lVar4 + 0x24);
          local_58 = *param_5;
          uStack_54 = *param_6;
          local_68 = param_2;
          local_60 = param_3;
          uStack_5c = param_4;
          lVar4 = nn::os::GetCurrentThread();
          param_1[0xc] = lVar4;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x40,&local_78);
          nn::os::LockMutex(pMVar1);
          param_1[0xc] = 0;
          nn::os::UnlockMutex(pMVar1);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          *param_5 = local_58;
          *param_6 = uStack_54;
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


