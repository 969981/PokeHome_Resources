/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a6db0; name: FUN_.text__004a6db0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a6db0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  MutexType *pMVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 auStack_440 [128];
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968);
  uVar6 = *(uint *)(param_1 + 0xb8);
  if (uVar6 != 0) {
    if (*(int *)(param_1 + 0xb0) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0xa8);
      puVar10 = *(undefined8 **)*puVar2;
      if (puVar10 == (undefined8 *)0x0) {
        uVar9 = 0;
        do {
          if (*(int *)(param_1 + 0xb0) - 1 == uVar9) goto LAB__text__004a6e7c;
          puVar10 = (undefined8 *)((undefined8 *)*puVar2)[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (puVar10 == (undefined8 *)0x0);
      }
      else {
        uVar9 = 0;
      }
      uVar7 = *(uint *)(param_1 + 0xb0);
      uVar12 = 0;
      lVar11 = *(long *)(param_1 + 0xa8);
      do {
        do {
          if (*(int *)(puVar10 + 0xe) != 0) {
            uVar4 = puVar10[1];
            lVar1 = (long)(int)uVar12;
            uVar12 = uVar12 + 1;
            auStack_440[(ulong)uVar6 * -2 + lVar1 * 2 + 0x80] = *puVar10;
            (auStack_440 + (ulong)uVar6 * -2 + lVar1 * 2 + 0x80)[1] = uVar4;
          }
          puVar10 = (undefined8 *)puVar10[2];
        } while (puVar10 != (undefined8 *)0x0);
        uVar3 = uVar7;
        if (uVar7 <= (int)uVar9 + 1U) {
          uVar3 = (int)uVar9 + 1;
        }
        do {
          if (uVar3 - 1 == (int)uVar9) {
            nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
            pMVar8 = _DAT_008a46d0;
            if (0 < (int)uVar12) {
              uVar9 = (ulong)uVar12 + 1;
              do {
                uVar4 = auStack_440[(ulong)uVar6 * -2 + (ulong)((int)uVar9 - 2) * 2 + 0x80];
                uVar5 = (auStack_440 + (ulong)uVar6 * -2 + (ulong)((int)uVar9 - 2) * 2 + 0x80)[1];
                nn::os::LockMutex(pMVar8);
                lVar11 = FUN__text__004ada80(puVar2,uVar4,uVar5);
                if ((lVar11 == 0) || (*(int *)(lVar11 + 0x70) == 0)) {
                  nn::os::UnlockMutex(pMVar8);
                }
                else {
                  nn::os::UnlockMutex(pMVar8);
                  lVar11 = FUN__text__004ada80(puVar2,uVar4,0);
                  if (lVar11 != 0) {
                    if (*(int *)(lVar11 + 0x70) != 0) {
                      *(int *)(lVar11 + 0x70) = *(int *)(lVar11 + 0x70) + -1;
                    }
                    FUN__text__004a1f20(lVar11,1);
                  }
                }
                uVar9 = uVar9 - 1;
              } while (1 < uVar9);
            }
            return;
          }
          uVar9 = (ulong)((int)uVar9 + 1);
          puVar10 = *(undefined8 **)(lVar11 + uVar9 * 8);
        } while (puVar10 == (undefined8 *)0x0);
      } while( true );
    }
  }
LAB__text__004a6e7c:
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
  return;
}


