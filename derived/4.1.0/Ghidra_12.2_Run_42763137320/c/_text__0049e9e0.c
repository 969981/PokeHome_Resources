/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049e9e0; name: FUN_.text__0049e9e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0049e9e0(long param_1,undefined8 param_2,undefined2 *param_3,uint *param_4)

{
  MutexType *pMVar1;
  ushort *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int *piVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  long local_78;
  byte local_64 [4];
  
  *param_3 = 0;
  *param_4 = 0;
  uVar12 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  if (uVar12 == 0) {
LAB__text__0049ee80:
    plVar22 = (long *)0x0;
  }
  else if (uVar12 == 1) {
    uVar12 = (**(code **)(**(long **)(param_1 + 0x108) + 0x28))(*(long **)(param_1 + 0x108),0);
    puVar10 = _DAT_008a45c8;
    *param_4 = uVar12;
    piVar18 = (int *)*puVar10;
    pMVar1 = (MutexType *)(piVar18 + 4);
    while( true ) {
      while (iVar17 = *piVar18, -1 < iVar17) {
        while (*piVar18 == iVar17) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar6) {
            *piVar18 = iVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__0049eaf0;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar18 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__0049eaf0:
    uVar14 = piVar18[0x1a];
    if (uVar14 == 0) {
      lVar19 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = uVar12 / uVar14;
      }
      lVar19 = *(long *)(*(long *)(piVar18 + 0x18) + (ulong)(uVar12 - uVar8 * uVar14) * 8);
      if (lVar19 != 0) {
LAB__text__0049eb10:
        if (*(uint *)(lVar19 + 0x10) != uVar12) goto code_r0x0049eb1c;
        piVar3 = (int *)(lVar19 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
LAB__text__0049eeb4:
    while (iVar17 = *piVar18, -1 < iVar17) {
      while (*piVar18 == iVar17) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          if ((iVar17 + -1 == 0) && (0 < piVar18[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar18 + 0xe));
          }
          goto LAB__text__0049ef08;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
LAB__text__0049ef08:
    plVar22 = (long *)0x0;
    if (lVar19 != 0) {
      plVar22 = (long *)(lVar19 + -0x10);
    }
  }
  else {
    puVar2 = (ushort *)(param_1 + 0x13d);
    if ((*puVar2 & 7) == 1) {
      local_78 = FUN__text__0049e610(param_1,param_2);
      lVar19 = 0;
      lVar15 = local_78;
    }
    else {
      lVar19 = FUN__text__0049e7d0(param_1,uVar12,param_2);
      local_78 = 0;
      lVar15 = lVar19;
    }
    plVar22 = (long *)0x0;
    if (lVar15 != 0) {
      iVar17 = 0;
      bVar6 = false;
LAB__text__0049eb64:
      local_64[0] = 1;
      if ((*puVar2 & 7) == 1) {
        sVar4 = *(short *)(local_78 + 10);
        if (*(char *)(local_78 + 8) == '\0') {
          if (sVar4 == 0) {
            iVar13 = 1;
            *(undefined2 *)(local_78 + 10) = 1;
            *(undefined1 *)(local_78 + 8) = 1;
          }
          else {
            iVar13 = sVar4 + -1;
            *(short *)(local_78 + 10) = (short)iVar13;
          }
        }
        else {
          iVar13 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
          if (sVar4 + 1 == iVar13) {
            if ((*puVar2 >> 5 & 1) == 0) {
              iVar13 = 0;
              *(undefined2 *)(local_78 + 10) = 0;
            }
            else {
              *(undefined1 *)(local_78 + 8) = 0;
              iVar13 = *(ushort *)(local_78 + 10) - 1;
              *(short *)(local_78 + 10) = (short)iVar13;
            }
          }
          else {
            iVar13 = *(ushort *)(local_78 + 10) + 1;
            *(short *)(local_78 + 10) = (short)iVar13;
          }
        }
      }
      else {
        iVar13 = FUN__text__0049f1a0(param_1,lVar19,local_64,0);
        if (local_64[0] == 0) goto LAB__text__0049ee80;
      }
      do {
        uVar14 = (**(code **)(**(long **)(param_1 + 0x108) + 0x28))
                           (*(long **)(param_1 + 0x108),iVar13);
        *param_4 = uVar14;
        piVar18 = (int *)*_DAT_008a45c8;
        pMVar1 = (MutexType *)(piVar18 + 4);
        while( true ) {
          while (iVar20 = *piVar18, -1 < iVar20) {
            while (*piVar18 == iVar20) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar7) {
                *piVar18 = iVar20 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB__text__0049ed30;
            }
            ClearExclusiveLocal();
          }
          nn::os::LockMutex(pMVar1);
          if (*piVar18 < 0) break;
          nn::os::UnlockMutex(pMVar1);
        }
LAB__text__0049ed30:
        uVar8 = piVar18[0x1a];
        if (uVar8 == 0) {
          plVar22 = (long *)0x0;
        }
        else {
          uVar9 = 0;
          if (uVar8 != 0) {
            uVar9 = uVar14 / uVar8;
          }
          plVar22 = *(long **)(*(long *)(piVar18 + 0x18) + (ulong)(uVar14 - uVar9 * uVar8) * 8);
          if (plVar22 != (long *)0x0) {
LAB__text__0049ed50:
            if (*(uint *)(plVar22 + 2) != uVar14) goto code_r0x0049ed5c;
            piVar3 = (int *)((long)plVar22 + 0x14);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = *piVar3 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
LAB__text__0049eda4:
        while (iVar20 = *piVar18, -1 < iVar20) {
          while (*piVar18 == iVar20) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              if ((iVar20 + -1 == 0) && (0 < piVar18[0xc])) {
                nn::os::SignalEvent((EventType *)(piVar18 + 0xe));
              }
              goto joined_r0x0049ede0;
            }
          }
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar1);
joined_r0x0049ede0:
        iVar20 = iVar13;
        if (plVar22 != (long *)0x0) {
          plVar21 = plVar22 + -2;
          uVar16 = (**(code **)(*plVar21 + 0x88))(plVar21);
          if ((uVar16 & 1) != 0) {
            *param_3 = (short)iVar13;
            return plVar21;
          }
          piVar18 = (int *)((long)plVar22 + 0x14);
          do {
            iVar13 = *piVar18;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 + -1 == 0) {
            (**(code **)(*plVar22 + 0x20))(plVar22);
          }
        }
LAB__text__0049ee24:
        do {
          if ((iVar17 == 0) && ((*puVar2 & 7) == 0)) {
            bVar6 = (bool)(bVar6 | (*(byte *)(param_1 + 0x13c) & 0x30) != 0x10);
          }
          if (iVar17 == uVar12 - 1) goto LAB__text__0049ee80;
          iVar17 = iVar17 + 1;
          local_64[0] = 1;
          if (!bVar6) goto LAB__text__0049eb64;
          iVar13 = 0;
          if ((iVar20 + 1U & 0xffff) < uVar12) {
            iVar13 = iVar20 + 1;
          }
          iVar20 = iVar13;
          if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
            if (*(short *)(param_1 + 0x13a) == 0) break;
          }
          else {
            uVar16 = FUN__text__004cdaa8(lVar19,iVar13);
            if ((uVar16 & 1) != 0) goto LAB__text__0049ee24;
          }
          bVar11 = FUN__text__004cdb48(lVar19,iVar13);
          local_64[0] = (bVar11 ^ 0xff) & 1;
        } while ((bVar11 & 1) != 0);
        FUN__text__0049ef40(param_1,lVar19,iVar13);
      } while( true );
    }
  }
  return plVar22;
code_r0x0049eb1c:
  lVar19 = *(long *)(lVar19 + 8);
  if (lVar19 == 0) goto LAB__text__0049eeb4;
  goto LAB__text__0049eb10;
code_r0x0049ed5c:
  plVar22 = (long *)plVar22[1];
  if (plVar22 == (long *)0x0) goto LAB__text__0049eda4;
  goto LAB__text__0049ed50;
}


