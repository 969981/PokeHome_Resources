/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d3a0; name: FUN_.text__0048d3a0
 */


void FUN__text__0048d3a0(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4,
                        undefined4 param_5,undefined4 param_6,byte param_7)

{
  MutexType *pMVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_58;
  
  pMVar1 = (MutexType *)(param_3 + 3);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(param_3 + 1);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = param_4 / uVar3;
    }
    lVar5 = *(long *)(*param_3 + (ulong)(param_4 - uVar4 * uVar3) * 8);
    if (lVar5 != 0) {
      local_58 = param_7 & 1;
      do {
        if (*(uint *)(lVar5 + 0x4c) == param_4) {
          if ((*(byte *)(lVar5 + 0x60) >> 3 & 1) != 0) {
            uStack_78 = *(undefined8 *)(lVar5 + 0x28);
            pcVar2 = *(code **)(lVar5 + 0x50);
            local_80 = *(undefined8 *)(lVar5 + 0x58);
            uStack_6c = *(undefined4 *)(lVar5 + 0x24);
            local_70 = param_4;
            local_68 = param_1;
            uStack_64 = param_2;
            local_60 = param_5;
            uStack_5c = param_6;
            lVar5 = nn::os::GetCurrentThread();
            param_3[0xc] = lVar5;
            nn::os::ClearEvent((EventType *)(param_3 + 7));
            nn::os::UnlockMutex(pMVar1);
            (*pcVar2)(8,&local_80);
            nn::os::LockMutex(pMVar1);
            param_3[0xc] = 0;
            nn::os::UnlockMutex(pMVar1);
            nn::os::SignalEvent((EventType *)(param_3 + 7));
            return;
          }
          break;
        }
        lVar5 = *(long *)(lVar5 + 0x68);
      } while (lVar5 != 0);
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


