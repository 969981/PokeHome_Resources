/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004684a0; name: FUN_.text__004684a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004684a0(long *param_1,long *param_2,int *param_3,ulong param_4)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  long *plVar22;
  char cVar23;
  
  uVar15 = (**(code **)(*param_1 + 0x208))();
  if ((uVar15 != 1) || ((param_4 & 1) != 0)) {
    return (ulong)uVar15;
  }
  uVar15 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3);
  if (uVar15 != 1) {
    return (ulong)uVar15;
  }
  bVar8 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  *(uint *)((long)param_1 + 0xd2) =
       *(uint *)((long)param_1 + 0xd2) & 0xffffc000 |
       *(uint *)((long)param_1 + 0xd2) & 0x1fff | (bVar8 & 1) << 0xd;
  puVar19 = (uint *)*param_2 + 1;
  uVar15 = *(uint *)*param_2;
  *param_2 = (long)puVar19;
  piVar3 = DAT_00ae9a38;
  if (uVar15 != 0) {
    piVar4 = DAT_00ae9a38 + 0x1e;
    pMVar1 = (MutexType *)(DAT_00ae9a38 + 0x22);
    while( true ) {
      while (iVar5 = *piVar4, -1 < iVar5) {
        while (*piVar4 == iVar5) {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
            *piVar4 = iVar5 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB__text__0046858c;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar4 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__0046858c:
    uVar21 = piVar3[0x38];
    if (uVar21 == 0) {
      plVar22 = (long *)0x0;
    }
    else {
      uVar13 = 0;
      if (uVar21 != 0) {
        uVar13 = uVar15 / uVar21;
      }
      plVar22 = *(long **)(*(long *)(piVar3 + 0x36) + (ulong)(uVar15 - uVar13 * uVar21) * 8);
      if (plVar22 != (long *)0x0) {
LAB__text__004685b0:
        if (*(uint *)(plVar22 + 2) != uVar15) goto code_r0x004685bc;
        piVar2 = (int *)((long)plVar22 + 0x14);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = *piVar2 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
    }
LAB__text__004685ec:
    while (iVar5 = *piVar4, -1 < iVar5) {
      while (*piVar4 == iVar5) {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar12) {
          *piVar4 = iVar5 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 == '\0') {
          if ((iVar5 + -1 == 0) && (0 < piVar3[0x2a])) {
            nn::os::SignalEvent((EventType *)(piVar3 + 0x2c));
          }
          goto joined_r0x00468630;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
joined_r0x00468630:
    if (plVar22 == (long *)0x0) {
      return 0x5c;
    }
    uVar15 = (**(code **)(plVar22[-2] + 0x48))(plVar22 + -2,param_1);
    piVar3 = (int *)((long)plVar22 + 0x14);
    do {
      iVar5 = *piVar3;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar12) {
        *piVar3 = iVar5 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
    if (uVar15 != 1) {
      return (ulong)uVar15;
    }
    puVar19 = (uint *)*param_2;
  }
  uVar15 = *puVar19;
  *param_2 = (long)(puVar19 + 1);
  piVar3 = DAT_00ae9a38;
  if (uVar15 != 0) {
    pMVar1 = (MutexType *)(DAT_00ae9a38 + 4);
    while( true ) {
      while (iVar5 = *piVar3, -1 < iVar5) {
        while (*piVar3 == iVar5) {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = iVar5 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB__text__004686ec;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar3 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__004686ec:
    uVar21 = piVar3[0x1a];
    if (uVar21 == 0) {
      plVar22 = (long *)0x0;
    }
    else {
      uVar13 = 0;
      if (uVar21 != 0) {
        uVar13 = uVar15 / uVar21;
      }
      plVar22 = *(long **)(*(long *)(piVar3 + 0x18) + (ulong)(uVar15 - uVar13 * uVar21) * 8);
      if (plVar22 != (long *)0x0) {
LAB__text__00468710:
        if (*(uint *)(plVar22 + 2) != uVar15) goto code_r0x0046871c;
        piVar4 = (int *)((long)plVar22 + 0x14);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
            *piVar4 = *piVar4 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
    }
LAB__text__0046874c:
    while (iVar5 = *piVar3, -1 < iVar5) {
      while (*piVar3 == iVar5) {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = iVar5 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 == '\0') {
          if ((iVar5 + -1 == 0) && (0 < piVar3[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar3 + 0xe));
          }
          goto LAB__text__004687b0;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
LAB__text__004687b0:
    if (plVar22 != (long *)0x0) {
      uVar15 = (**(code **)(plVar22[-2] + 0x48))(plVar22 + -2,param_1);
      piVar3 = (int *)((long)plVar22 + 0x14);
      do {
        iVar5 = *piVar3;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = iVar5 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (uVar15 != 1) {
        return (ulong)uVar15;
      }
    }
  }
  bVar8 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  if ((uint)((int)((ulong)bVar8 & 1) != 0) != ((uint)param_1[0x13] & 1)) {
    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffeU | (ulong)bVar8 & 1;
    (**(code **)(*param_1 + 0x188))(param_1,0,0);
  }
  uVar15 = *(uint *)((long)param_1 + 0xd2);
  if ((uint)((uVar15 & 0x8000) == 0) == (bVar8 & 2) >> 1) {
    *(uint *)((long)param_1 + 0xd2) = uVar15 & 0xffff7fff | (bVar8 & 2) << 0xe;
    (**(code **)(*param_1 + 0x188))(param_1,0,0);
    uVar15 = *(uint *)((long)param_1 + 0xd2);
  }
  *(uint *)((long)param_1 + 0xd2) =
       uVar15 & 0xf8000000 | uVar15 & 0x7fffff | (bVar8 >> 2 & 0xf) << 0x17;
  uVar15 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
  if (uVar15 != 1) {
    return (ulong)uVar15;
  }
  uVar15 = FUN__text__00467e20(param_1,param_2);
  if (uVar15 != 1) {
    return (ulong)uVar15;
  }
  uVar15 = (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3);
  if (uVar15 != 1) {
    return (ulong)uVar15;
  }
  uVar15 = (**(code **)(*param_1 + 0x220))(param_1,param_2,param_3);
  if (uVar15 != 1) {
    return (ulong)uVar15;
  }
  uVar15 = (**(code **)(param_1[5] + 0x70))(param_1 + 5,param_2,param_3);
  if (uVar15 != 1) {
    return (ulong)uVar15;
  }
  uVar10 = *(ushort *)*param_2;
  *param_2 = (long)((ushort *)*param_2 + 1);
  if (uVar10 != 0) {
    uVar15 = (uint)uVar10;
    if (*(uint *)((long)param_1 + 0x54) < (uint)uVar10) {
      if (param_1[9] == 0) {
        uVar21 = *(uint *)(param_1 + 10);
        lVar16 = FUN__text__00400f80(0,(ulong)uVar10 << 3);
        if (lVar16 == 0) {
          return 0x34;
        }
        lVar18 = param_1[9];
        if ((lVar18 != 0) && (lVar18 != lVar16)) {
          if (uVar21 != 0) {
            if (uVar21 == 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = 0;
              do {
                lVar18 = uVar17 * 8;
                uVar17 = uVar17 + 2;
                *(undefined8 *)(lVar16 + lVar18) = *(undefined8 *)(param_1[9] + lVar18);
                ((undefined8 *)(lVar16 + lVar18))[1] = *(undefined8 *)(param_1[9] + lVar18 + 8);
              } while (((ulong)uVar21 & 0xfffffffe) != uVar17);
            }
            if ((uVar21 & 1) != 0) {
              *(undefined8 *)(lVar16 + uVar17 * 8) = *(undefined8 *)(param_1[9] + uVar17 * 8);
            }
            lVar18 = param_1[9];
          }
          FUN__text__00400fc0(0,lVar18);
        }
      }
      else {
        lVar16 = FUN__text__00400fa0(0);
        if (lVar16 == 0) {
          return 0x34;
        }
      }
      param_1[9] = lVar16;
      *(uint *)((long)param_1 + 0x54) = uVar15;
    }
    piVar3 = _DAT_008a45a8;
    uVar21 = 0;
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    do {
      puVar20 = (undefined4 *)*param_2;
      uVar6 = *puVar20;
      *param_2 = (long)(puVar20 + 1);
      uVar9 = *(undefined1 *)(puVar20 + 1);
      *param_2 = (long)puVar20 + 5;
      cVar11 = *(char *)((long)puVar20 + 5);
      *param_2 = (long)puVar20 + 6;
      bVar8 = *(byte *)((long)puVar20 + 6);
      *param_2 = (long)puVar20 + 7;
      uVar13 = bVar8 & 0x7f;
      pbVar14 = (byte *)((long)puVar20 + 7);
      while ((char)bVar8 < '\0') {
        bVar8 = *pbVar14;
        *param_2 = (long)(pbVar14 + 1);
        uVar13 = bVar8 & 0x7f | uVar13 << 7;
        pbVar14 = pbVar14 + 1;
      }
      uVar7 = *(undefined4 *)pbVar14;
      *param_2 = (long)(pbVar14 + 4);
      bVar8 = pbVar14[4];
      *param_2 = (long)(pbVar14 + 5);
      uVar10 = *(ushort *)(pbVar14 + 5);
      *param_2 = (long)(pbVar14 + 7);
      cVar23 = '\x05';
      if (*piVar3 != 1) {
        cVar23 = '\x02';
      }
      if (cVar11 != '\x06') {
        cVar23 = cVar11;
      }
      uVar17 = (**(code **)(*param_1 + 0x1d8))
                         (param_1,uVar6,uVar9,cVar23,uVar13,uVar7,bVar8,pbVar14 + 7,uVar10);
      if ((int)uVar17 != 1) {
        return uVar17;
      }
      uVar21 = uVar21 + 1;
      lVar16 = (ulong)uVar10 * 0xc;
      *param_2 = *param_2 + lVar16;
      *param_3 = *param_3 - (int)lVar16;
    } while (uVar21 != uVar15);
  }
  return 1;
code_r0x004685bc:
  plVar22 = (long *)plVar22[1];
  if (plVar22 == (long *)0x0) goto LAB__text__004685ec;
  goto LAB__text__004685b0;
code_r0x0046871c:
  plVar22 = (long *)plVar22[1];
  if (plVar22 == (long *)0x0) goto LAB__text__0046874c;
  goto LAB__text__00468710;
}


