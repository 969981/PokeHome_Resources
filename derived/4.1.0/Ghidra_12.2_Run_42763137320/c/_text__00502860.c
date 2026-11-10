/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00502860; name: FUN_.text__00502860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00502860(long *param_1,long param_2,long param_3,uint param_4,undefined4 param_5)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined4 local_68;
  int local_64;
  
  if (param_3 == 0) {
    lVar18 = 0;
    lVar17 = 0;
    local_64 = 0;
    if (param_4 != 0) goto LAB__text__005029b0;
LAB__text__00502bc8:
    lVar17 = FUN__text__004f55c8(param_1,lVar17 + lVar18,0);
  }
  else {
    local_68 = *(undefined4 *)(param_2 + 0x2c);
    lVar17 = *(long *)(param_3 + 8);
    uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x78);
    FUN__text__004f41e0(uVar13,0,*(byte *)(param_2 + 0x30) & 0x1f,&local_68,1,&local_64);
    lVar18 = (long)local_64;
    iVar15 = *(int *)(param_2 + 0x20);
    auVar5 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)iVar15)) * SEXT816(-0x20c49ba5e353f7cf);
    iVar11 = *(int *)(param_2 + 0x28) + ((int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f));
    if (iVar11 < -local_64) {
      dVar19 = ((double)(*(int *)(param_2 + 0x28) + local_64) * 1000.0) / (double)*_DAT_008a4b68;
      dVar20 = 0.5;
      if (dVar19 <= 0.0) {
        dVar20 = -0.5;
      }
      iVar15 = (int)(dVar20 + dVar19);
      iVar11 = -local_64;
    }
    if (iVar15 == 0 && iVar11 == 0) {
      if ((*(byte *)(param_2 + 0x30) >> 5 & 1) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN__text__004f47f4(uVar13);
      }
    }
    iVar9 = FUN__text__004f4810(uVar13);
    FUN__text__004e9dd4(param_3,iVar15,*(undefined4 *)(param_2 + 0x24),iVar9 + iVar11);
    local_64 = 0;
    if (param_4 == 0) goto LAB__text__00502bc8;
LAB__text__005029b0:
    local_64 = 0;
    piVar16 = (int *)*_DAT_008a45c8;
    pMVar1 = (MutexType *)(piVar16 + 4);
    while( true ) {
      while (iVar11 = *piVar16, -1 < iVar11) {
        while (*piVar16 == iVar11) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__00502a18;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar16 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__00502a18:
    uVar10 = piVar16[0x1a];
    if (uVar10 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = param_4 / uVar10;
      }
      plVar14 = *(long **)(*(long *)(piVar16 + 0x18) + (ulong)(param_4 - uVar8 * uVar10) * 8);
      if (plVar14 != (long *)0x0) {
LAB__text__00502a34:
        if (*(uint *)(plVar14 + 2) != param_4) goto code_r0x00502a40;
        piVar2 = (int *)((long)plVar14 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
LAB__text__00502a78:
    while (iVar11 = *piVar16, -1 < iVar11) {
      while (*piVar16 == iVar11) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = iVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if ((iVar11 + -1 == 0) && (0 < piVar16[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar16 + 0xe));
          }
          goto joined_r0x00502ab4;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
joined_r0x00502ab4:
    if (plVar14 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      goto LAB__text__00502bc8;
    }
    FUN__text__004f4598(plVar14 + -2,param_2 + 0x34,0,0,&local_68,&local_64);
    lVar12 = param_1[0xc];
    lVar12 = FUN__text__004f3f10(plVar14 + -2,param_1,*(undefined8 *)(lVar12 + 0x30),lVar12 + 0x18,
                                 *(undefined1 *)(lVar12 + 0x38));
    if (lVar12 == 0) {
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    else {
      *(undefined4 *)(lVar12 + 0x98) = param_5;
    }
    piVar16 = (int *)((long)plVar14 + 0x14);
    do {
      iVar11 = *piVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    lVar17 = FUN__text__004f55c8(param_1,lVar17 + lVar18,lVar12);
    if (lVar12 != 0) {
      FUN__text__004eb980(lVar12);
      iVar11 = local_64;
      if (lVar17 != 0) {
        iVar3 = *(int *)(param_2 + 0x34);
        iVar15 = *(int *)(param_2 + 0x3c);
        bVar4 = *(byte *)(param_2 + 0x48);
        uVar10 = FUN__text__004f47e8(*(undefined8 *)(lVar12 + 0x78));
        iVar15 = iVar15 + iVar11;
        iVar9 = 0;
        if ((bVar4 & 0x40) != 0 || -1 < iVar15) {
          iVar9 = iVar15;
        }
        iVar11 = iVar11 - (uVar10 & (int)((uint)bVar4 << 0x19) >> 0x1f);
        if (0 < iVar3) {
          iVar11 = iVar9;
        }
        iVar11 = FUN__text__004e9d64(lVar17,local_64,iVar11);
        FUN__text__004e9dbc(lVar17,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                            *(int *)(param_2 + 0x3c) + iVar11);
        return lVar17;
      }
      goto LAB__text__00502be0;
    }
  }
  if (lVar17 != 0) {
    return lVar17;
  }
LAB__text__00502be0:
  lVar17 = (**(code **)(*param_1 + 0x120))(param_1);
  return lVar17;
code_r0x00502a40:
  plVar14 = (long *)plVar14[1];
  if (plVar14 == (long *)0x0) goto LAB__text__00502a78;
  goto LAB__text__00502a34;
}


