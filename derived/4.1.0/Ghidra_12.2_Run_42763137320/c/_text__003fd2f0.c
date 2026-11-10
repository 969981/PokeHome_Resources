/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fd2f0; name: FUN_.text__003fd2f0
 */


uint FUN__text__003fd2f0(long param_1,uint param_2)

{
  ulong uVar1;
  MutexType *pMVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xa8) == 0)) {
    uVar15 = 0;
  }
  else {
    pMVar2 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
    nn::os::LockMutex(pMVar2);
    puVar14 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar14 == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        plVar11 = (long *)puVar14[1];
        uVar6 = *(uint *)(puVar14 + 2);
        uVar9 = *(uint *)(plVar11 + 3);
        iVar3 = uVar9 + uVar15;
        puVar12 = (undefined8 *)(param_1 + 0xb8);
        puVar5 = (undefined8 *)0x0;
        do {
          puVar13 = puVar5;
          puVar12 = (undefined8 *)*puVar12;
          puVar5 = puVar12;
        } while (puVar12 != (undefined8 *)0x0 && puVar12 != puVar14);
        uVar15 = uVar6;
        if (puVar12 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)(param_1 + 0xb8);
          if (*(undefined8 **)(param_1 + 0xb8) != puVar12) {
            puVar5 = puVar13;
          }
          *puVar5 = *puVar12;
          if (*(undefined8 **)(param_1 + 0xb0) == puVar12) {
            *(undefined8 **)(param_1 + 0xb0) = puVar13;
          }
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
          plVar11 = (long *)puVar14[1];
          uVar15 = *(uint *)(puVar14 + 2);
          uVar9 = *(uint *)(plVar11 + 3);
        }
        uVar1 = *plVar11 + (ulong)uVar15;
        uVar7 = *(uint *)(param_1 + 0x90);
        iVar4 = (int)uVar1 - uVar7;
        if (*plVar11 + (ulong)uVar9 <= (ulong)uVar7 || uVar7 <= uVar1) {
          iVar4 = uVar15 - uVar9;
        }
        *(int *)(param_1 + 0x98) = iVar4 + *(int *)(param_1 + 0x98);
        lVar10 = *(long *)(param_1 + 0x50);
        lVar8 = puVar14[1];
        puVar14[1] = 0;
        if (lVar8 != 0) {
          FUN__text__003fe878(lVar10 + 0x2a8);
        }
        uVar15 = iVar3 - uVar6;
        FUN__text__00400fc0(7,puVar14);
        puVar14 = *(undefined8 **)(param_1 + 0xb0);
      } while ((puVar14 != (undefined8 *)0x0) && (uVar15 < param_2));
    }
    nn::os::UnlockMutex(pMVar2);
  }
  return uVar15;
}


