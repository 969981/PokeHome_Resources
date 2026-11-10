/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d970; name: FUN_.text__0048d970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0048d970(long *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  uint uStack_50;
  undefined8 local_48;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar4 = 0;
    pcVar5 = _DAT_00000050;
  }
  else {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8);
        (lVar4 != 0 && (*(uint *)(lVar4 + 0x4c) != param_2)); lVar4 = *(long *)(lVar4 + 0x68)) {
    }
    pcVar5 = *(code **)(lVar4 + 0x50);
  }
  if ((pcVar5 == (code *)0x0) || ((*(uint *)(lVar4 + 0x60) & param_3) == 0)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  local_88 = *(undefined8 *)(lVar4 + 0x58);
  uStack_80 = *(undefined8 *)(lVar4 + 0x28);
  local_48 = 0;
  local_64 = param_4[2];
  local_5c = param_4[3];
  local_74 = *param_4;
  local_6c = param_4[1];
  local_54 = *(undefined4 *)(param_4 + 4);
  local_78 = param_2;
  uStack_50 = param_3;
  lVar4 = nn::os::GetCurrentThread();
  param_1[0xc] = lVar4;
  nn::os::ClearEvent((EventType *)(param_1 + 7));
  nn::os::UnlockMutex(pMVar1);
  (*pcVar5)(param_3,&local_88);
  nn::os::LockMutex(pMVar1);
  param_1[0xc] = 0;
  nn::os::UnlockMutex(pMVar1);
  nn::os::SignalEvent((EventType *)(param_1 + 7));
  return;
}


