/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fd804; name: FUN_.text__003fd804
 */


void FUN__text__003fd804(long param_1,undefined8 *param_2,uint param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(char *)(param_1 + 0xc3) == '\0')) {
    *param_2 = 0;
    *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 3;
    plVar4 = (long *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0xb8) != 0) {
      plVar4 = *(long **)(param_1 + 0xb0);
    }
    *plVar4 = (long)param_2;
    *(undefined8 **)(param_1 + 0xb0) = param_2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    return;
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
  nn::os::LockMutex(pMVar1);
  uVar5 = *(uint *)(param_1 + 0x90);
  lVar8 = *(long *)param_2[1];
  uVar6 = *(uint *)((long *)param_2[1] + 3);
  uVar2 = lVar8 + (ulong)*(uint *)(param_2 + 2);
  iVar3 = (int)uVar2 - uVar5;
  if (lVar8 + (ulong)uVar6 <= (ulong)uVar5 || uVar5 <= uVar2) {
    iVar3 = *(uint *)(param_2 + 2) - uVar6;
  }
  *(int *)(param_1 + 0x98) = iVar3 + *(int *)(param_1 + 0x98);
  lVar7 = *(long *)(param_1 + 0x50);
  lVar8 = param_2[1];
  param_2[1] = 0;
  if (lVar8 != 0) {
    FUN__text__003fe878(lVar7 + 0x2a8);
  }
  FUN__text__00400fc0(7,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


