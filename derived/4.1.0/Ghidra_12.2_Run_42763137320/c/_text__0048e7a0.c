/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e7a0; name: FUN_.text__0048e7a0
 */


void FUN__text__0048e7a0(undefined8 *param_1,uint param_2,ulong param_3)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  
  pMVar1 = (MutexType *)(param_1 + 4);
  nn::os::LockMutex(pMVar1);
  puVar5 = (uint *)*param_1;
  uVar9 = *(uint *)(param_1 + 1);
  puVar7 = puVar5;
  if (uVar9 == 0) {
LAB__text__0048e814:
    if (puVar7 != puVar5 + (ulong)uVar9 * 0xc) goto LAB__text__0048e824;
  }
  else {
    lVar8 = (ulong)uVar9 * 0x30;
    do {
      if (*puVar7 == param_2 && *(ulong *)(puVar7 + 2) == param_3) goto LAB__text__0048e814;
      puVar7 = puVar7 + 0xc;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
  }
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar9) {
    iVar2 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar2 = 1;
    }
    uVar4 = FUN__text__0048ed60(param_1,iVar2);
    if (((uVar4 & 1) == 0) || (*(uint *)((long)param_1 + 0xc) <= uVar9)) goto LAB__text__0048e824;
    uVar9 = *(uint *)(param_1 + 1);
    puVar5 = (uint *)*param_1;
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (puVar5 != (uint *)0x0) {
    puVar6 = (ulong *)(puVar5 + (ulong)uVar9 * 0xc);
    *puVar6 = (ulong)param_2;
    puVar6[1] = param_3;
    puVar6[3] = 0x3f800000ffffffff;
    puVar6[4] = 0x1ffffffff;
    nn::os::UnlockMutex(pMVar1);
    return;
  }
LAB__text__0048e824:
  nn::os::UnlockMutex(pMVar1);
  return;
}


