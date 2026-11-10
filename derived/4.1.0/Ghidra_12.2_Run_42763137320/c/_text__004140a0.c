/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004140a0; name: FUN_.text__004140a0
 */


undefined8 FUN__text__004140a0(long *param_1,int param_2,ulong param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (int)param_3;
  uVar6 = iVar5 - ((uint)(param_3 >> 1) & 0x55555555);
  uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
  if ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) {
    return 0x1f;
  }
  param_1[7] = -(param_3 & 0xffffffff);
  *(int *)((long)param_1 + 0x2c) = iVar5;
  *(int *)(param_1 + 6) = iVar5 + -0x18;
  iVar3 = FUN__text__004058b0(param_1 + 5);
  if (iVar3 != 0) {
    return 9;
  }
  FUN__text__00405b80((int)param_1[5],0);
  if (param_2 != 0) {
    lVar4 = FUN__text__00400f90(0x12,*(int *)((long)param_1 + 0x2c) * param_2);
    if (lVar4 == 0) {
      return 0x34;
    }
    if (-1 < param_2 + -1) {
      uVar6 = iVar5 * (param_2 + -1);
      pMVar1 = (MutexType *)(param_1 + 1);
      iVar3 = param_2;
      do {
        while( true ) {
          plVar2 = (long *)(lVar4 + (ulong)uVar6 + (ulong)*(uint *)(param_1 + 6));
          plVar2[1] = 0;
          plVar2[2] = 0;
          *plVar2 = 0;
          *(int *)(plVar2 + 1) = (int)param_1[6];
          nn::os::LockMutex(pMVar1);
          if (*param_1 != 0) break;
          *param_1 = (long)plVar2;
          *plVar2 = 0;
          nn::os::UnlockMutex(pMVar1);
          iVar3 = iVar3 + -1;
          uVar6 = uVar6 - iVar5;
          if (iVar3 < 1) goto LAB__text__004141f0;
        }
        *plVar2 = *param_1;
        *param_1 = (long)plVar2;
        nn::os::UnlockMutex(pMVar1);
        iVar3 = iVar3 + -1;
        uVar6 = uVar6 - iVar5;
      } while (0 < iVar3);
    }
  }
LAB__text__004141f0:
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return 1;
}


