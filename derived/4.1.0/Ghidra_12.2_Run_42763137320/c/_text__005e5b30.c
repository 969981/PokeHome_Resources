/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e5b30; name: FUN_.text__005e5b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e5b30(long param_1)

{
  long lVar1;
  int *piVar2;
  MutexType *pMVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  undefined8 *puVar19;
  
  lVar14 = *(long *)(param_1 + 0x3f0);
  if (lVar14 == 0) {
    pMVar3 = (MutexType *)(param_1 + 0x3a0);
    nn::os::LockMutex(pMVar3);
    if (((*(byte *)(param_1 + 600) & 1) != 0) ||
       ((*(char *)(param_1 + 1000) != '\0' &&
        (*(char *)(*(long *)(param_1 + 0x3e0) + 0x158) != '\0')))) {
      nn::os::UnlockMutex(pMVar3);
      return;
    }
    plVar16 = *(long **)(param_1 + 0x370);
    plVar15 = *(long **)(param_1 + 0x378);
    if (plVar16 == plVar15) {
LAB__text__005e5dd0:
      *(undefined8 *)(param_1 + 0x3f0) = 0;
LAB__text__005e5e08:
      piVar2 = (int *)(param_1 + 0x3ec);
      do {
        if (*piVar2 != 0) {
          ClearExclusiveLocal();
          goto LAB__text__005e5e60;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN__text__005e1f84(*(undefined8 *)(param_1 + 0x3c8));
      uVar13 = FUN__text__005e1f7c(*(undefined8 *)(param_1 + 0x3c8));
      if ((uVar13 & 1) != 0) {
        do {
          nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x3c0),pMVar3);
          uVar13 = FUN__text__005e1f7c(*(undefined8 *)(param_1 + 0x3c8));
        } while ((uVar13 & 1) != 0);
      }
LAB__text__005e5e60:
      *(undefined4 *)(param_1 + 0x3ec) = 0;
      plVar16 = *(long **)(param_1 + 0x370);
      plVar15 = *(long **)(param_1 + 0x378);
      if (plVar16 == plVar15) {
LAB__text__005e5ea0:
        lVar14 = 0;
      }
      else {
        plVar17 = plVar16;
        if (*(int *)(param_1 + 0x3dc) != 0) {
          do {
            lVar14 = *plVar16;
            if ((*(byte *)(lVar14 + 0x130) >> 1 & 1) == 0) goto LAB__text__005e5eb0;
            plVar16 = plVar16 + 1;
            plVar17 = plVar17 + 1;
          } while (plVar16 != plVar15);
          goto LAB__text__005e5ea0;
        }
        lVar14 = *plVar16;
LAB__text__005e5eb0:
        sVar6 = (long)plVar15 - (long)(plVar17 + 1);
        if (sVar6 != 0) {
          memmove(plVar17,plVar17 + 1,sVar6);
        }
        *(size_t *)(param_1 + 0x378) = (long)plVar17 + sVar6;
      }
      *(long *)(param_1 + 0x3f0) = lVar14;
    }
    else {
      plVar17 = plVar16;
      if (*(int *)(param_1 + 0x3dc) != 0) {
        do {
          lVar14 = *plVar16;
          if ((*(byte *)(lVar14 + 0x130) >> 1 & 1) == 0) goto LAB__text__005e5de0;
          plVar16 = plVar16 + 1;
          plVar17 = plVar17 + 1;
        } while (plVar16 != plVar15);
        goto LAB__text__005e5dd0;
      }
      lVar14 = *plVar16;
LAB__text__005e5de0:
      sVar6 = (long)plVar15 - (long)(plVar17 + 1);
      if (sVar6 != 0) {
        memmove(plVar17,plVar17 + 1,sVar6);
      }
      *(long *)(param_1 + 0x3f0) = lVar14;
      *(size_t *)(param_1 + 0x378) = (long)plVar17 + sVar6;
      if (lVar14 == 0) goto LAB__text__005e5e08;
    }
    nn::os::UnlockMutex(pMVar3);
    lVar14 = *(long *)(param_1 + 0x3f0);
    if (lVar14 != 0) goto LAB__text__005e5b58;
  }
  else {
LAB__text__005e5b58:
    puVar10 = _DAT_0089fd50;
    pbVar9 = _DAT_0089fd48;
    puVar8 = _DAT_0089fd20;
    pbVar7 = _DAT_0089f498;
    lVar1 = param_1 + 0x3d0;
    do {
      lVar14 = *(long *)(lVar14 + 0x58);
      if (lVar14 == 0) {
LAB__text__005e5b84:
        uVar12 = *(undefined8 *)(param_1 + 0x3f0);
        *(undefined8 *)(param_1 + 0x3f0) = 0;
        FUN__text__005e7ef0(uVar12,lVar1);
      }
      else {
        if (*(int *)(lVar14 + 0x54) != 0) {
          piVar2 = (int *)(lVar14 + 0x54);
          iVar18 = *(int *)(lVar14 + 0x54);
          do {
            puVar19 = *(undefined8 **)(lVar14 + 0x58);
            if (((*pbVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar9), iVar11 != 0)) {
              if (((*_DAT_0089fd18 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(_DAT_0089fd18), iVar11 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(_DAT_0089f790), iVar11 != 0)) {
                  if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(pbVar7);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *puVar8 = _DAT_0089f798;
                __cxa_guard_release(_DAT_0089fd18);
              }
              *puVar10 = puVar8;
              __cxa_guard_release(pbVar9);
            }
            if (puVar19 != puVar10) {
              do {
                puVar19 = (undefined8 *)*puVar19;
              } while (puVar19 != puVar10 && puVar19 != (undefined8 *)0x0);
              if (puVar19 == (undefined8 *)0x0) goto LAB__text__005e5b84;
            }
            iVar11 = *piVar2;
            if (iVar11 == iVar18) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar18 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar14 = *(long *)(lVar14 + 0x60);
                if (lVar14 != 0) {
                  FUN__text__005e268c(lVar14 + -0x50,lVar1);
                  uVar12 = *(undefined8 *)(param_1 + 0x3f0);
                  *(undefined8 *)(param_1 + 0x3f0) = 0;
                  FUN__text__005e7ef0(uVar12,lVar1);
                  if (lVar14 + -0x50 != 0) {
                    (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
                  }
                  goto LAB__text__005e5ba8;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = iVar11;
          } while (iVar11 != 0);
        }
        uVar12 = *(undefined8 *)(param_1 + 0x3f0);
        *(undefined8 *)(param_1 + 0x3f0) = 0;
        FUN__text__005e7ef0(uVar12,lVar1);
      }
LAB__text__005e5ba8:
      lVar14 = *(long *)(param_1 + 0x3f0);
    } while (lVar14 != 0);
  }
  pMVar3 = (MutexType *)(param_1 + 0x3a0);
  nn::os::LockMutex(pMVar3);
  plVar16 = *(long **)(param_1 + 0x370);
  plVar15 = *(long **)(param_1 + 0x378);
  if (plVar16 != plVar15) {
    plVar17 = plVar16;
    if (*(int *)(param_1 + 0x3dc) == 0) {
      lVar14 = *plVar16;
LAB__text__005e5f44:
      sVar6 = (long)plVar15 - (long)(plVar17 + 1);
      if (sVar6 != 0) {
        memmove(plVar17,plVar17 + 1,sVar6);
      }
      *(size_t *)(param_1 + 0x378) = (long)plVar17 + sVar6;
      nn::os::UnlockMutex(pMVar3);
      *(long *)(param_1 + 0x3f0) = lVar14;
      if (lVar14 != 0) {
        return;
      }
      goto LAB__text__005e5f74;
    }
    do {
      lVar14 = *plVar16;
      if ((*(byte *)(lVar14 + 0x130) >> 1 & 1) == 0) goto LAB__text__005e5f44;
      plVar16 = plVar16 + 1;
      plVar17 = plVar17 + 1;
    } while (plVar16 != plVar15);
  }
  nn::os::UnlockMutex(pMVar3);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
LAB__text__005e5f74:
  uVar12 = FUN__text__005e4a90(*(undefined8 *)(param_1 + 0x3e0),param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3f0) = uVar12;
  return;
}


