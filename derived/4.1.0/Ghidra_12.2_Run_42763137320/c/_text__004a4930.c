/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a4930; name: FUN_.text__004a4930
 */


int FUN__text__004a4930(long param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  float fVar18;
  
  uVar5 = (ulong)*(uint *)(param_3 + 0x38);
  if (*(uint *)(param_3 + 0x38) == 0) {
    return 1;
  }
  if (*(long *)(param_3 + 0x20) == 0) {
    iVar13 = 0x34;
    goto LAB__text__004a4bc0;
  }
  iVar8 = 0;
  uVar17 = 0;
  pMVar1 = (MutexType *)(param_1 + 0x68);
  iVar13 = 0x34;
  do {
    lVar15 = *(long *)(param_3 + 0x20);
    puVar12 = (uint *)(lVar15 + uVar17 * 0xc);
    if (*puVar12 != 0) {
      nn::os::LockMutex(pMVar1);
      uVar3 = *puVar12;
      uVar10 = *(uint *)(param_1 + 0x98);
      if ((uVar10 == 0) ||
         (fVar18 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0)), 0.9 < fVar18 / (float)uVar10)
         ) {
        FUN__text__004acf60(param_1 + 0x88);
        uVar10 = *(uint *)(param_1 + 0x98);
        if (uVar10 == 0) goto LAB__text__004a4ba0;
      }
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar3 / uVar10;
      }
      uVar5 = (ulong)(uVar3 - uVar4 * uVar10);
      plVar11 = (long *)(*(long *)(param_1 + 0x90) + uVar5 * 8);
      do {
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          puVar16 = (undefined8 *)FUN__text__00400f80(0,0x28);
          if (puVar16 == (undefined8 *)0x0) goto LAB__text__004a4ba0;
          lVar9 = uVar5 * 8;
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar9);
          *(uint *)(puVar16 + 1) = uVar3;
          puVar14 = puVar16 + 2;
          *puVar14 = 0;
          *puVar16 = uVar6;
          puVar16[3] = 0;
          puVar16[4] = 0xffffffff00000001;
          *(undefined8 **)(*(long *)(param_1 + 0x90) + lVar9) = puVar16;
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          goto LAB__text__004a4a88;
        }
      } while (*(uint *)(plVar11 + 1) != uVar3);
      puVar14 = plVar11 + 2;
LAB__text__004a4a88:
      *(uint *)((long)puVar14 + 0x14) = *puVar12;
      lVar15 = lVar15 + uVar17 * 0xc;
      uVar3 = *(uint *)(lVar15 + 4);
      uVar2 = *(undefined4 *)(lVar15 + 8);
      uVar10 = *(uint *)(puVar14 + 1);
      if (uVar10 < *(uint *)((long)puVar14 + 0xc)) {
LAB__text__004a4ac4:
        puVar16 = (undefined8 *)*puVar14;
        if (uVar10 != 0) {
          memmove(puVar16 + 3,puVar16,(ulong)(uVar10 * 0x18));
        }
        if (puVar16 != (undefined8 *)0x0) {
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
        }
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        plVar7 = (long *)*puVar14;
        if (plVar7 != (long *)0x0) {
          *(undefined4 *)(plVar7 + 1) = uVar2;
          plVar7[2] = param_3;
          *plVar7 = param_2 + (ulong)uVar3;
          *(undefined1 *)((long)plVar7 + 0xc) = 2;
          if (plVar11 != (long *)0x0) {
            *(int *)(puVar14 + 2) = *(int *)(puVar14 + 2) + 1;
          }
          nn::os::UnlockMutex(pMVar1);
          iVar8 = *(int *)(param_3 + 0x34);
          uVar5 = (ulong)*(uint *)(param_3 + 0x38);
          iVar13 = 1;
          goto LAB__text__004a49a4;
        }
      }
      else {
        uVar5 = FUN__text__004ad700(puVar14);
        if (((uVar5 & 1) != 0) && (uVar10 < *(uint *)((long)puVar14 + 0xc))) {
          uVar10 = *(uint *)(puVar14 + 1);
          goto LAB__text__004a4ac4;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x98);
      if (uVar3 == 0) goto LAB__text__004a4b9c;
      uVar10 = *puVar12;
      iVar13 = 0x34;
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar10 / uVar3;
      }
      uVar5 = (ulong)(uVar10 - uVar4 * uVar3);
      plVar11 = (long *)(*(long *)(param_1 + 0x90) + uVar5 * 8);
      plVar7 = (long *)0;
      goto LAB__text__004a4b70;
    }
LAB__text__004a49a4:
    uVar17 = uVar17 + 1;
    iVar8 = iVar8 + 1;
    *(int *)(param_3 + 0x34) = iVar8;
  } while (uVar17 < uVar5);
  goto LAB__text__004a4bac;
  while (plVar7 = plVar11, *(uint *)(plVar11 + 1) != uVar10) {
LAB__text__004a4b70:
    lVar15 = (long)plVar7;
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) goto LAB__text__004a4ba0;
  }
  FUN__text__004ad290(param_1 + 0x88,uVar5,plVar11,lVar15);
LAB__text__004a4b9c:
  iVar13 = 0x34;
LAB__text__004a4ba0:
  nn::os::UnlockMutex(pMVar1);
  uVar5 = (ulong)*(uint *)(param_3 + 0x38);
LAB__text__004a4bac:
  if (uVar5 == (uVar17 & 0xffffffff)) {
    return 1;
  }
  if (iVar13 == 1) {
    return 1;
  }
LAB__text__004a4bc0:
  FUN__text__004a1d10(param_1,param_3);
  return iVar13;
}


