/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fc040; name: FUN_.text__003fc040
 */


void FUN__text__003fc040(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x23;
  long *plVar12;
  
  (**(code **)(*param_1 + 0xf8))();
  bVar6 = *(byte *)(param_1 + 0x18);
  if ((uint)bVar6 < *(uint *)(param_1 + 0x15)) {
    uVar9 = bVar6 + 1;
    plVar1 = param_1 + 0x17;
    uVar3 = uVar9 & 3;
    if (bVar6 < 3) {
      plVar11 = plVar1;
      plVar5 = (long *)0x0;
    }
    else {
      uVar9 = uVar9 & 0x1fc;
      plVar11 = plVar1;
      do {
        uVar9 = uVar9 - 4;
        unaff_x23 = (long *)**(long **)*plVar11;
        plVar11 = (long *)*unaff_x23;
        plVar5 = plVar11;
      } while (uVar9 != 0);
    }
    for (; plVar12 = plVar5, uVar3 != 0; uVar3 = uVar3 - 1) {
      plVar11 = (long *)*plVar11;
      plVar5 = plVar11;
      unaff_x23 = plVar12;
    }
    lVar7 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar7 + 0x1e8));
    while (plVar11 != (long *)0x0) {
      plVar12 = (long *)*plVar11;
      plVar5 = plVar1;
      if ((long *)param_1[0x17] != plVar11) {
        plVar5 = unaff_x23;
      }
      *plVar5 = (long)plVar12;
      if ((long *)param_1[0x16] == plVar11) {
        param_1[0x16] = (long)unaff_x23;
      }
      uVar9 = *(uint *)(param_1 + 0x12);
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      lVar10 = *(long *)plVar11[1];
      uVar3 = *(uint *)((long *)plVar11[1] + 3);
      uVar2 = lVar10 + (ulong)*(uint *)(plVar11 + 2);
      iVar4 = (int)uVar2 - uVar9;
      if (lVar10 + (ulong)uVar3 <= (ulong)uVar9 || uVar9 <= uVar2) {
        iVar4 = *(uint *)(plVar11 + 2) - uVar3;
      }
      *(int *)(param_1 + 0x13) = iVar4 + (int)param_1[0x13];
      lVar8 = param_1[10];
      lVar10 = plVar11[1];
      plVar11[1] = 0;
      if (lVar10 != 0) {
        FUN__text__003fe878(lVar8 + 0x2a8);
      }
      FUN__text__00400fc0(7,plVar11);
      plVar11 = plVar12;
    }
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x1e8));
  }
  FUN__text__003fc6a8(param_1);
  return;
}


