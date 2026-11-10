/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aa4a8; name: FUN_.text__004aa4a8
 */


int FUN__text__004aa4a8(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  void *__dest;
  ushort uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  uint local_44;
  undefined1 uStack_1;
  
  if (*(char *)(param_1 + 0xf0) != '\0') {
    puVar9 = (undefined8 *)
             FUN__text__004ad390(param_1 + 0xe0,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2),
                                 &uStack_1);
    if (puVar9 == (undefined8 *)0x0) {
      return 0x34;
    }
    uVar13 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar4 = *(undefined8 *)(param_2 + 6);
    puVar9[2] = *(undefined8 *)(param_2 + 4);
    puVar9[3] = uVar4;
    *puVar9 = uVar13;
    puVar9[1] = uVar3;
    return 1;
  }
  uVar15 = param_2[2];
  if ((uVar15 == 0) || ((param_2[3] & 0x7e) == 4)) {
    return 1;
  }
  pMVar1 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar1);
  uVar19 = *param_2;
  uVar5 = *(uint *)(param_1 + 0x98);
  if (uVar5 == 0) {
LAB__text__004aa614:
    FUN__text__004acf60(param_1 + 0x88);
    uVar5 = *(uint *)(param_1 + 0x98);
    if (uVar5 == 0) {
LAB__text__004aa810:
      iVar7 = 2;
      goto LAB__text__004aa8a4;
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar19 / uVar5;
    }
    lVar11 = *(long *)(param_1 + 0x90);
    uVar17 = (ulong)(uVar19 - uVar6 * uVar5);
LAB__text__004aa630:
    plVar12 = (long *)(lVar11 + uVar17 * 8);
    do {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        puVar9 = (undefined8 *)FUN__text__00400f80(0,0x28);
        if (puVar9 == (undefined8 *)0x0) goto LAB__text__004aa810;
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar17 * 8);
        *(uint *)(puVar9 + 1) = uVar19;
        plVar12 = puVar9 + 2;
        *plVar12 = 0;
        *puVar9 = uVar13;
        puVar9[3] = 0;
        puVar9[4] = 0xffffffff00000001;
        *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar17 * 8) = puVar9;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        goto LAB__text__004aa698;
      }
    } while (*(uint *)(plVar12 + 1) != uVar19);
    plVar12 = plVar12 + 2;
LAB__text__004aa698:
    lVar11 = *plVar12;
    *(uint *)((long)plVar12 + 0x14) = uVar19;
  }
  else {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar19 / uVar5;
    }
    uVar17 = (ulong)(uVar19 - uVar6 * uVar5);
    lVar11 = *(long *)(param_1 + 0x90);
    plVar16 = (long *)(lVar11 + uVar17 * 8);
    do {
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0));
        if (0.9 < fVar20 / (float)uVar5) goto LAB__text__004aa614;
        goto LAB__text__004aa630;
      }
    } while (*(uint *)(plVar16 + 1) != uVar19);
    plVar12 = plVar16 + 2;
    lVar11 = *plVar12;
    *(int *)(plVar16 + 4) = *(int *)(plVar16 + 4) + 1;
    if (*(uint *)(plVar16 + 3) != 0) {
      lVar14 = 0;
      do {
        if (*(char *)(lVar11 + lVar14 + 0xc) == '\x01') {
          iVar7 = 1;
          goto LAB__text__004aa8a4;
        }
        lVar14 = lVar14 + 0x18;
      } while ((ulong)*(uint *)(plVar16 + 3) * 0x18 != lVar14);
    }
  }
  uVar2 = 0x60000003;
  if (*(short *)((long)param_2 + 0x1a) != 3) {
    uVar2 = 0x20000003;
  }
  if (*(uint *)(plVar12 + 1) != 0) {
    puVar18 = (uint *)(lVar11 + 8);
    lVar11 = (ulong)*(uint *)(plVar12 + 1) * 0x18;
    do {
      if ((char)puVar18[1] == '\x02') {
        uVar15 = *puVar18;
        __dest = (void *)FUN__text__00400f90(uVar2,(ulong)uVar15,0x10);
        if (__dest == (void *)0x0) goto LAB__text__004aa878;
        memcpy(__dest,*(void **)(puVar18 + -2),(ulong)uVar15);
        uVar19 = *(uint *)(plVar12 + 1);
        if (*(uint *)((long)plVar12 + 0xc) <= uVar19) goto LAB__text__004aa84c;
        goto LAB__text__004aa7bc;
      }
      puVar18 = puVar18 + 6;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
  }
  __dest = (void *)FUN__text__00400f90(uVar2,uVar15,0x10);
  if (__dest == (void *)0x0) {
LAB__text__004aa878:
    iVar7 = 0x34;
  }
  else {
    nn::os::UnlockMutex(pMVar1);
    lVar11 = param_1 + 8;
    FUN__text__004ae378(lVar11);
    uVar19 = param_2[6] >> 0x10;
    if ((0x1f < uVar19) || (uVar10 = 1, (1 << (ulong)(uVar19 & 0x1f) & 0xc0000001U) == 0)) {
      uVar10 = (ushort)param_2[3] & 1;
    }
    iVar7 = FUN__text__004ae6d0(lVar11,param_2[1],0,uVar19,0,uVar10);
    if (iVar7 == 1) {
      local_44 = 0;
      iVar8 = FUN__text__004aea70(lVar11,__dest,param_2[2],&local_44,0xffffffff);
      iVar7 = 1;
      if (param_2[2] != local_44) {
        iVar7 = 2;
      }
      if (iVar8 != 1) {
        iVar7 = iVar8;
      }
    }
    FUN__text__004ae3ec(lVar11);
    nn::os::LockMutex(pMVar1);
    if (iVar7 == 1) {
      uVar19 = *(uint *)(plVar12 + 1);
      if (uVar19 < *(uint *)((long)plVar12 + 0xc)) {
LAB__text__004aa7bc:
        puVar9 = (undefined8 *)*plVar12;
      }
      else {
LAB__text__004aa84c:
        uVar17 = FUN__text__004ad700(plVar12);
        iVar7 = 0x34;
        if (((uVar17 & 1) == 0) || (*(uint *)((long)plVar12 + 0xc) <= uVar19))
        goto LAB__text__004aa88c;
        uVar19 = *(uint *)(plVar12 + 1);
        puVar9 = (undefined8 *)*plVar12;
      }
      if (uVar19 != 0) {
        memmove(puVar9 + 3,puVar9,(ulong)(uVar19 * 0x18));
      }
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
      }
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      plVar16 = (long *)*plVar12;
      if (plVar16 != (long *)0x0) {
        iVar7 = 1;
        *plVar16 = (long)__dest;
        *(uint *)(plVar16 + 1) = uVar15;
        *(undefined4 *)(plVar16 + 2) = uVar2;
        *(undefined1 *)((long)plVar16 + 0xc) = 1;
        goto LAB__text__004aa8a4;
      }
      iVar7 = 0x34;
    }
LAB__text__004aa88c:
    FUN__text__00400fc0(uVar2,__dest);
  }
  FUN__text__004a6c80(param_1,plVar12);
LAB__text__004aa8a4:
  nn::os::UnlockMutex(pMVar1);
  return iVar7;
}


