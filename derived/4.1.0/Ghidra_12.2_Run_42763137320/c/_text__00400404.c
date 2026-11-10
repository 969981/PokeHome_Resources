/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00400404; name: FUN_.text__00400404
 */


long FUN__text__00400404(long *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  MutexType *pMVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  pMVar1 = (MutexType *)(param_1 + 5);
  *param_3 = 0;
  *param_4 = 0;
  nn::os::LockMutex(pMVar1);
  lVar10 = 0;
  if ((char)param_1[0xd] == '\0') {
    nn::os::LockMutex(pMVar1);
    cVar3 = *(char *)((long)param_1 + 0x6c);
    nn::os::UnlockMutex(pMVar1);
    if (cVar3 == '\0') {
      lVar10 = 0;
    }
    else {
      *param_2 = param_1[4];
      uVar13 = (ulong)*(uint *)(param_1 + 0x14);
      plVar9 = (long *)param_1[10];
      uVar2 = param_1[0xf] + uVar13;
      uVar4 = (int)param_1[0x12] - *(uint *)(param_1 + 0x14);
      if (*(uint *)(plVar9 + 0xc3) <= uVar4) {
        uVar4 = *(uint *)(plVar9 + 0xc3);
      }
      if (*(char *)((long)param_1 + 0x66) == '\0') {
        uVar6 = *(ulong *)param_1[4];
        uVar11 = uVar4;
        if (uVar6 < uVar2 + uVar4) {
          if (uVar2 < uVar6) {
            uVar11 = (int)uVar6 - (int)uVar2;
          }
          else {
            uVar11 = 0;
          }
        }
        uVar12 = uVar11;
        if (*(char *)((long)param_1 + 0x6b) != '\0') {
          uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
          plVar9 = (long *)param_1[10];
          uVar13 = (ulong)*(uint *)(param_1 + 0x14);
          uVar12 = uVar5 - (int)uVar2;
          if (uVar2 + uVar11 <= (ulong)uVar5) {
            uVar12 = uVar11;
          }
        }
      }
      else {
        uVar12 = uVar4;
      }
      *param_3 = 0;
      nn::os::LockMutex((MutexType *)(plVar9 + 0x3d));
      lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9);
      nn::os::UnlockMutex((MutexType *)(plVar9 + 0x3d));
      if (lVar10 != 0) {
        uVar11 = *(uint *)(param_1 + 0xc);
        lVar7 = param_1[0x10];
        lVar8 = *(long *)(param_1[4] + 8);
        *(uint *)(plVar9 + 199) = uVar4;
        *(uint *)((long)plVar9 + 0x63c) = uVar12;
        plVar9[200] = lVar7 + uVar13;
        plVar9[0xc6] = uVar2 + lVar8 * (ulong)uVar11;
        *param_3 = (long)(plVar9 + 0xc6);
        param_1[0x11] = (long)(plVar9 + 0xc6);
        *(long **)(lVar10 + 8) = param_1 + 0xf;
        *(int *)(lVar10 + 0x10) = (int)uVar13;
        *(byte *)(lVar10 + 0x14) = *(byte *)(lVar10 + 0x14) & 0xf8;
        param_1[0x16] = lVar10;
        *(uint *)(param_1 + 0x14) = (int)param_1[0x14] + uVar12;
        param_1[9] = *(long *)(param_1[10] + 0x270);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return lVar10;
}


