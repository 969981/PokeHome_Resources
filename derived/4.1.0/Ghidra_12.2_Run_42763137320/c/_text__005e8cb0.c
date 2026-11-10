/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8cb0; name: FUN_.text__005e8cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e8cb0(undefined4 *param_1)

{
  uint uVar1;
  MutexType *pMVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  pMVar2 = _DAT_008a5b60;
  if (((*_DAT_008a5b58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a5b58), iVar3 != 0)) {
    nn::os::InitializeMutex(pMVar2,false,0);
    lVar6 = 0;
    lVar5 = 0;
    *(ulong *)(pMVar2 + 0x20) = (ulong)(pMVar2 + 0x202f) & 0xffffffffffffe000;
    *(undefined8 *)(pMVar2 + 0x28) = 0xffffffffffffffff;
    do {
      lVar7 = *(long *)(pMVar2 + 0x20);
      uVar1 = (uint)((int)lVar6 + (int)lVar7) >> 0xd & 0x7f;
      if (uVar1 != 0x7f) {
        uVar4 = (undefined4)lVar5;
        if (uVar1 == 0) {
          *(undefined4 *)(lVar7 + lVar6) = *(undefined4 *)(pMVar2 + 0x28);
          *(undefined4 *)(pMVar2 + 0x28) = uVar4;
          if (*(int *)(pMVar2 + 0x2c) == -1) {
LAB__text__005e8d9c:
            *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
          }
        }
        else {
          *(undefined4 *)(lVar7 + lVar6) = 0xffffffff;
          if (*(int *)(pMVar2 + 0x2c) != -1) {
            *(undefined4 *)(*(long *)(pMVar2 + 0x20) + (long)*(int *)(pMVar2 + 0x2c) * 0x2000) =
                 uVar4;
            goto LAB__text__005e8d9c;
          }
          *(undefined4 *)(pMVar2 + 0x28) = uVar4;
          *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x2000;
    } while (lVar5 != 0x80);
    FUN__text__001001d0(_DAT_008a5b68,_DAT_008a5b60,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_008a5b58);
  }
  nn::os::LockMutex(pMVar2);
  lVar5 = *(long *)(pMVar2 + 0x20);
  *param_1 = 0xffffffff;
  uVar4 = (undefined4)((ulong)((long)param_1 - lVar5) >> 0xd);
  if (*(int *)(pMVar2 + 0x2c) == -1) {
    *(undefined4 *)(pMVar2 + 0x28) = uVar4;
    *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
    nn::os::UnlockMutex(pMVar2);
    return;
  }
  *(undefined4 *)(*(long *)(pMVar2 + 0x20) + (long)*(int *)(pMVar2 + 0x2c) * 0x2000) = uVar4;
  *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
  nn::os::UnlockMutex(pMVar2);
  return;
}


