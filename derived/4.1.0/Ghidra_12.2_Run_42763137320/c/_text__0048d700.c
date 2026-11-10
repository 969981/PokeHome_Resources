/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d700; name: FUN_.text__0048d700
 */


void FUN__text__0048d700(long *param_1,uint param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar5 = 0;
    bVar3 = DAT_00000060;
  }
  else {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_2 / uVar2;
    }
    for (lVar5 = *(long *)(*param_1 + (ulong)(param_2 - uVar4 * uVar2) * 8);
        (lVar5 != 0 && (*(uint *)(lVar5 + 0x4c) != param_2)); lVar5 = *(long *)(lVar5 + 0x68)) {
    }
    bVar3 = *(byte *)(lVar5 + 0x60);
  }
  if (((bVar3 >> 2 & 1) == 0) || (pcVar6 = *(code **)(lVar5 + 0x50), pcVar6 == (code *)0x0)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  local_68 = *(undefined8 *)(lVar5 + 0x58);
  uStack_60 = *(undefined8 *)(lVar5 + 0x28);
  uStack_54 = *(undefined4 *)(lVar5 + 0x24);
  local_50 = *param_3;
  uStack_4c = param_3[1];
  local_48 = *(undefined8 *)(param_3 + 2);
  local_58 = param_2;
  lVar5 = nn::os::GetCurrentThread();
  param_1[0xc] = lVar5;
  nn::os::ClearEvent((EventType *)(param_1 + 7));
  nn::os::UnlockMutex(pMVar1);
  (*pcVar6)(4,&local_68);
  nn::os::LockMutex(pMVar1);
  param_1[0xc] = 0;
  nn::os::UnlockMutex(pMVar1);
  nn::os::SignalEvent((EventType *)(param_1 + 7));
  return;
}


