/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1d24; name: FUN_.text__002b1d24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b1d24(long param_1,int param_2)

{
  MutexType *pMVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 local_14 [4];
  
  pMVar1 = (MutexType *)(param_1 + 0x178);
  nn::os::LockMutex(pMVar1);
  if ((*(long *)(param_1 + 0x158) == 0) || (iVar4 = FUN__text__002c44a8(), iVar4 != param_2)) {
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    lVar5 = *(long *)(param_1 + 0x158);
    bVar3 = false;
    uVar2 = local_14[0];
  }
  else {
    iVar4 = FUN__text__002c4538(*(undefined8 *)(param_1 + 0x158));
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    lVar5 = *(long *)(param_1 + 0x158);
    bVar3 = iVar4 == 2;
    uVar2 = local_14[0];
  }
  local_14[0] = bVar3;
  if (lVar5 != 0) {
    if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1a0))(param_1 + 0x1c0,local_14);
      lVar5 = *(long *)(param_1 + 0x158);
      uVar2 = local_14[0];
    }
    local_14[0] = uVar2;
    FUN__text__002c4574(lVar5);
    lVar5 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = local_14[0];
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar5 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x160) + 0x18))
                (*(long **)(param_1 + 0x160),lVar5,*(undefined8 *)(param_1 + 0x168),
                 *(undefined8 *)(param_1 + 0x170));
      uVar2 = local_14[0];
    }
  }
  local_14[0] = uVar2;
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0xa8);
  nn::os::UnlockMutex(pMVar1);
  return;
}


