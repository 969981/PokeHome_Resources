/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a04a0; name: FUN_.text__004a04a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004a04a0(undefined8 param_1,long param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54 [2];
  undefined4 local_38;
  uint local_34;
  
  if (*(int *)(param_2 + 0x90) != 0) {
    *(undefined4 *)(param_2 + 0x90) = 0;
  }
  uVar3 = *(uint *)(param_2 + 0x308);
  if (uVar3 == 0) {
    lVar16 = FUN__text__004a0a40(param_1,param_2);
    if (lVar16 == 0) {
      return 2;
    }
    lVar11 = FUN__text__0049f650(param_1,*(undefined8 *)(param_2 + 0x10),&local_98,&local_34,
                                 lVar16 + 8,lVar16 + 0x10);
    if (lVar11 != 0) {
      puVar14 = (uint *)(param_2 + 0x38);
      uVar3 = *puVar14;
      if (uVar3 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ((uint)(1L << ((ulong)uVar3 & 0x3f)) ^ 0xffffffff);
        *(undefined2 *)((long)puVar14 + (ulong)uVar3 * 2 + 4) = (undefined2)local_98;
      }
      *puVar14 = uVar3 + 1;
    }
  }
  else {
    plVar13 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    piVar15 = (int *)*_DAT_008a45c8;
    pMVar1 = (MutexType *)(piVar15 + 4);
    lVar16 = *plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x28 + -0x28;
    local_34 = uVar3;
    while( true ) {
      while (iVar9 = *piVar15, -1 < iVar9) {
        while (*piVar15 == iVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar6) {
            *piVar15 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__004a0558;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar15 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__004a0558:
    uVar4 = piVar15[0x1a];
    if (uVar4 == 0) {
      lVar18 = 0;
    }
    else {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      lVar18 = *(long *)(*(long *)(piVar15 + 0x18) + (ulong)(uVar3 - uVar7 * uVar4) * 8);
      if (lVar18 != 0) {
LAB__text__004a0574:
        if (*(uint *)(lVar18 + 0x10) != uVar3) goto code_r0x004a0580;
        piVar2 = (int *)(lVar18 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
LAB__text__004a0634:
    while (iVar9 = *piVar15, -1 < iVar9) {
      while (*piVar15 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          if ((iVar9 + -1 == 0) && (0 < piVar15[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar15 + 0xe));
          }
          goto LAB__text__004a067c;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
LAB__text__004a067c:
    *(undefined4 *)(param_2 + 0x308) = 0;
    lVar11 = 0;
    if (lVar18 != 0) {
      lVar11 = lVar18 + -0x10;
    }
  }
  lVar18 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  if (lVar18 != 0) {
    FUN__text__0049dbd4(lVar18);
  }
  if (lVar11 == 0) {
    plVar13 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    FUN__text__0049d9d0(*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x28 + -0x28);
    *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
    uVar10 = FUN__text__004953c0(param_1,param_2);
    lVar16 = 0;
  }
  else {
    lVar16 = FUN__text__0049f650(param_1,*(undefined8 *)(param_2 + 0x10),local_54,&local_38,
                                 lVar16 + 8,lVar16 + 0x10);
    plVar13 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    if (lVar16 == 0) {
      FUN__text__0049d9d0(*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x28 + -0x28);
      *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
      uVar10 = FUN__text__00446a1c(lVar11,param_2);
    }
    else {
      *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18) = 0;
      if (plVar13 != (long *)0x0) {
        FUN__text__0049dbf0(plVar13);
      }
      uStack_70 = *(undefined8 *)(param_2 + 0x60);
      local_68 = *(undefined8 *)(param_2 + 0x68);
      uStack_60 = *(undefined8 *)(param_2 + 0x70);
      uStack_80 = *(undefined8 *)(param_2 + 0x50);
      local_78 = *(undefined8 *)(param_2 + 0x58);
      local_58 = *(undefined4 *)(param_2 + 0x78);
      uVar10 = *(undefined4 *)(param_2 + 0x7c);
      uStack_90 = *(undefined8 *)(param_2 + 0x40);
      local_88 = *(undefined8 *)(param_2 + 0x48);
      puVar17 = (undefined8 *)(param_2 + 0x38);
      local_98 = *puVar17;
      iVar9 = FUN__text__00446a1c(lVar11,param_2);
      if (iVar9 == 1) {
        *(byte *)(param_2 + 0x310) = *(byte *)(param_2 + 0x310) & 0xfd;
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar10;
      lVar19 = *(long *)(param_2 + 0x88);
      *(undefined8 *)(param_2 + 0x48) = local_88;
      *(undefined8 *)(param_2 + 0x50) = uStack_80;
      *(undefined4 *)(param_2 + 0x78) = local_58;
      *(undefined8 *)(param_2 + 0x68) = local_68;
      *(undefined8 *)(param_2 + 0x70) = uStack_60;
      *(undefined8 *)(param_2 + 0x58) = local_78;
      *(undefined8 *)(param_2 + 0x60) = uStack_70;
      *puVar17 = local_98;
      *(undefined8 *)(param_2 + 0x40) = uStack_90;
      *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
      if (lVar18 != 0) {
        FUN__text__0049dbd4(lVar18);
      }
      lVar12 = *(long *)(lVar19 + 0x18);
      *(long *)(lVar19 + 0x18) = lVar18;
      if (lVar12 != 0) {
        FUN__text__0049dbf0();
      }
      *(undefined4 *)(param_2 + 0x308) = local_38;
      uVar3 = *(uint *)(param_2 + 0x38);
      if (uVar3 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ((uint)(1L << ((ulong)uVar3 & 0x3f)) ^ 0xffffffff);
        *(undefined2 *)((long)puVar17 + (ulong)uVar3 * 2 + 4) = local_54[0];
      }
      local_c0 = *(undefined4 *)(param_2 + 0x34);
      *(uint *)(param_2 + 0x38) = uVar3 + 1;
      local_c8 = *(undefined8 *)(param_2 + 0x10);
      local_b0 = 0xff;
      local_a8 = 0xff;
      local_a0 = 0;
      local_b8 = 0;
      fVar20 = (float)FUN__text__0049fdc0(param_1,&local_c8);
      pfVar8 = _DAT_008a4b10;
      *(undefined8 *)(param_2 + 0x18) = 0;
      fVar21 = fVar20 * 0.001;
      if (fVar20 * 0.001 <= *pfVar8) {
        fVar21 = *pfVar8;
      }
      uVar10 = FUN__text__004948b0(fVar21,param_1,param_2);
    }
  }
  if (lVar18 != 0) {
    FUN__text__0049dbf0(lVar18);
  }
  if (lVar16 != 0) {
    piVar15 = (int *)(lVar16 + 0x24);
    do {
      iVar9 = *piVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar6) {
        *piVar15 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*(long *)(lVar16 + 0x10) + 0x20))((long *)(lVar16 + 0x10));
    }
  }
  if (lVar11 != 0) {
    piVar15 = (int *)(lVar11 + 0x24);
    do {
      iVar9 = *piVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar6) {
        *piVar15 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*(long *)(lVar11 + 0x10) + 0x20))((long *)(lVar11 + 0x10));
    }
  }
  return uVar10;
code_r0x004a0580:
  lVar18 = *(long *)(lVar18 + 8);
  if (lVar18 == 0) goto LAB__text__004a0634;
  goto LAB__text__004a0574;
}


