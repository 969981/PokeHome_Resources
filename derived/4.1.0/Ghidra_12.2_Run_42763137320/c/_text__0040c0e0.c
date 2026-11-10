/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040c0e0; name: FUN_.text__0040c0e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0040c0e0(undefined8 param_1,uint param_2,long param_3,void *param_4,ushort param_5,
                       ushort param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                       int param_10)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  
  if (*_DAT_008a45a0 == '\0') {
    return 0x66;
  }
  if (param_4 == (void *)0x0) {
    return 0x1f;
  }
  if (param_5 == 0) {
    return 0x1f;
  }
  alStack_80[1] = param_9;
  lVar14 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar14 + 0x168);
  pMVar2 = (MutexType *)(lVar14 + 0x178);
  uStack_70 = param_8;
  while( true ) {
    while (iVar9 = *piVar1, -1 < iVar9) {
      while (*piVar1 == iVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__0040c1b0;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__0040c1b0:
  uVar8 = *(uint *)(lVar14 + 0x1d0);
  if (uVar8 == 0) {
    plVar16 = (long *)0x0;
  }
  else {
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar12 = param_2 / uVar8;
    }
    plVar16 = *(long **)(*(long *)(lVar14 + 0x1c8) + (ulong)(param_2 - uVar12 * uVar8) * 8);
    if (plVar16 != (long *)0x0) {
LAB__text__0040c1d0:
      if (*(uint *)(plVar16 + 2) != param_2) goto code_r0x0040c1dc;
      piVar3 = (int *)((long)plVar16 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
LAB__text__0040c214:
  while (iVar9 = *piVar1, local_68 = param_7, -1 < iVar9) {
    while (*piVar1 == iVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar14 + 0x198))) {
          nn::os::SignalEvent((EventType *)(lVar14 + 0x1a0));
        }
        goto joined_r0x0040c250;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar2);
joined_r0x0040c250:
  if (plVar16 != (long *)0x0) {
    uVar8 = FUN__text__004af6a0();
    plVar6 = _DAT_008a45c0;
    uVar8 = (uint)param_5 * 0x14 + (uVar8 & 0xffff);
    uVar12 = *(uint *)(*_DAT_008a45c0 + 0x30);
    if (0xfffe < uVar12) {
      uVar12 = 0xffff;
    }
    if (uVar12 < uVar8) {
      FUN__text__004af6a0();
      piVar1 = (int *)((long)plVar16 + 0x14);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      lVar14 = -((ulong)(uVar8 + 0xf) & 0x7ffff0);
      plVar17 = (long *)((long)alStack_80 + lVar14);
      *(uint *)((long)alStack_80 + lVar14 + 0x10) = param_2;
      *(ushort *)(auStack_64 + lVar14 + -4) = param_6 & 1;
      *plVar17 = param_3;
      *(long **)((long)alStack_80 + lVar14 + 8) = plVar16;
      *(ushort *)(auStack_64 + lVar14 + -2) = param_5;
      memcpy(auStack_64 + lVar14,param_4,((ulong)param_5 + (ulong)param_5 * 4) * 4);
      puVar7 = _DAT_008a45d8;
      *(undefined4 *)((long)alStack_80 + lVar14 + 0x14) = 0;
      if ((param_10 != 0) &&
         (uVar10 = FUN__text__0048cf60(*_DAT_008a45d8,param_10,param_3,param_2), (uVar10 & 1) != 0))
      {
        *(int *)((long)alStack_80 + lVar14 + 0x14) = param_10;
LAB__text__0040c364:
        FUN__text__00411c2c(auStack_64 + 3);
        lVar15 = *plVar17;
        lVar11 = FUN__text__00449a80(*_DAT_008a45e0,lVar15,param_10,(int)plVar16[2],0x71d123);
        if ((lVar11 == 0) && (lVar15 != -1)) {
          iVar13 = 0;
          iVar9 = param_10;
        }
        else {
          FUN__text__004b35d0(*plVar6,*(undefined8 *)((long)alStack_80 + lVar14 + 8),plVar17,lVar11)
          ;
          iVar9 = *(int *)((long)alStack_80 + lVar14 + 0x14);
          iVar13 = param_10;
        }
        FUN__text__0048e190(*puVar7,iVar9);
        plVar16 = *(long **)((long)alStack_80 + lVar14 + 8);
        piVar1 = (int *)((long)plVar16 + 0x14);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          (**(code **)(*plVar16 + 0x20))();
        }
        FUN__text__00411c70(auStack_64 + 3);
        return iVar13;
      }
      do {
        param_10 = *_DAT_008a45d0 + 1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(_DAT_008a45d0,0x10);
        if (bVar5) {
          *_DAT_008a45d0 = param_10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(int *)((long)alStack_80 + lVar14 + 0x14) = param_10;
      iVar9 = FUN__text__0048cf24(*puVar7,param_10,param_3,uStack_70,alStack_80[1],local_68,
                                  (int)plVar16[2]);
      if (iVar9 == 1) {
        if (param_10 != 0) goto LAB__text__0040c364;
      }
      else {
        *(undefined4 *)((long)alStack_80 + lVar14 + 0x14) = 0;
      }
      piVar1 = (int *)((long)plVar16 + 0x14);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar9 == 1) {
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return 0;
code_r0x0040c1dc:
  plVar16 = (long *)plVar16[1];
  if (plVar16 == (long *)0x0) goto LAB__text__0040c214;
  goto LAB__text__0040c1d0;
}


