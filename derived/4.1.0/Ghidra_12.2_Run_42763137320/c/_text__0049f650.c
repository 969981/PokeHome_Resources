/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049f650; name: FUN_.text__0049f650
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0049f650(long param_1,ulong param_2,undefined2 *param_3,uint *param_4,long *param_5,
                        short *param_6)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  short sVar12;
  uint uVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  MutexType *pMVar17;
  int *piVar18;
  long lVar19;
  long *plVar20;
  char cVar21;
  char local_44 [4];
  
  *param_4 = 0;
  *param_3 = 0;
  iVar8 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  if (iVar8 == 0) {
    return 0;
  }
  if (iVar8 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) >> 1 & 1) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar9 = (**(code **)(**(long **)(param_1 + 0x108) + 0x28))(*(long **)(param_1 + 0x108),0);
    puVar7 = _DAT_008a45c8;
    *param_4 = uVar9;
    piVar18 = (int *)*puVar7;
    pMVar17 = (MutexType *)(piVar18 + 4);
    while( true ) {
      while (iVar8 = *piVar18, -1 < iVar8) {
        while (*piVar18 == iVar8) {
          cVar21 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar8 + 1;
            cVar21 = ExclusiveMonitorsStatus();
          }
          if (cVar21 == '\0') goto LAB__text__0049f7ec;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar17);
      if (*piVar18 < 0) break;
      nn::os::UnlockMutex(pMVar17);
    }
LAB__text__0049f7ec:
    uVar13 = piVar18[0x1a];
    if (uVar13 == 0) {
      lVar19 = 0;
    }
    else {
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = uVar9 / uVar13;
      }
      lVar19 = *(long *)(*(long *)(piVar18 + 0x18) + (ulong)(uVar9 - uVar6 * uVar13) * 8);
      if (lVar19 != 0) {
LAB__text__0049f810:
        if (*(uint *)(lVar19 + 0x10) != uVar9) goto code_r0x0049f81c;
        piVar2 = (int *)(lVar19 + 0x14);
        do {
          cVar21 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar21 = ExclusiveMonitorsStatus();
          }
        } while (cVar21 != '\0');
      }
    }
LAB__text__0049f8c8:
    while (iVar8 = *piVar18, -1 < iVar8) {
      iVar15 = iVar8 + -1;
      while (*piVar18 == iVar8) {
        cVar21 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar15;
          cVar21 = ExclusiveMonitorsStatus();
        }
        if (cVar21 == '\0') goto LAB__text__0049fc94;
      }
      ClearExclusiveLocal();
    }
  }
  else {
    puVar1 = (ushort *)(param_1 + 0x13d);
    plVar20 = (long *)*param_5;
    local_44[0] = '\x01';
    if (((*puVar1 & 0x17) == 1) && (plVar20 == (long *)0x0)) {
      lVar19 = FUN__text__0049e610(param_1,param_2);
      if (lVar19 == 0) {
        return 0;
      }
      lVar11 = FUN__text__00400f80(0,0x10);
      if (lVar11 == 0) {
        return 0;
      }
      FUN__text__004ce070();
      uVar9 = *(uint *)(lVar19 + 8);
      local_44[0] = '\x01';
      *(uint *)(lVar11 + 8) = uVar9;
      if ((uVar9 & 0xff) == 0) {
        if ((uVar9 & 0xffff0000) != 0) {
          sVar12 = (short)(uVar9 >> 0x10) + -1;
          goto LAB__text__0049f9c4;
        }
        *(undefined2 *)(lVar11 + 10) = 1;
        *(undefined1 *)(lVar11 + 8) = 1;
        bVar3 = *(byte *)(param_6 + 1);
joined_r0x0049fadc:
        if (((bVar3 & 1) == 0) ||
           (((bVar3 >> 1 & 1) == 0 &&
            (sVar12 = *param_6, *param_6 = sVar12 + -1, (short)(sVar12 + -1) == 0)))) {
          uVar9 = 0;
          local_44[0] = '\0';
          *param_5 = lVar11;
          cVar21 = '\0';
          goto LAB__text__0049fb90;
        }
      }
      else {
        iVar8 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
        if (((int)uVar9 >> 0x10) + 1 == iVar8) {
          if ((*puVar1 >> 5 & 1) == 0) {
            *(undefined2 *)(lVar11 + 10) = 0;
            bVar3 = *(byte *)(param_6 + 1);
            goto joined_r0x0049fadc;
          }
          *(undefined1 *)(lVar11 + 8) = 0;
          *(short *)(lVar11 + 10) = *(short *)(lVar11 + 10) + -1;
        }
        else {
          sVar12 = *(short *)(lVar11 + 10) + 1;
LAB__text__0049f9c4:
          *(short *)(lVar11 + 10) = sVar12;
        }
      }
      uVar9 = (uint)*(ushort *)(lVar11 + 10);
      *param_5 = lVar11;
      cVar21 = '\x01';
    }
    else if ((*puVar1 & 7) == 1) {
      if (plVar20 == (long *)0x0) {
        plVar20 = (long *)FUN__text__00400f80(0,0x10);
        if (plVar20 == (long *)0x0) {
          *param_5 = 0;
          return 0;
        }
        FUN__text__004ce070();
        *param_5 = (long)plVar20;
        lVar19 = *(long *)(param_1 + 0x120);
        if (lVar19 != 0) {
          *(undefined2 *)((long)plVar20 + 10) = *(undefined2 *)(lVar19 + 10);
          *(undefined2 *)(lVar19 + 10) = 0xffff;
          plVar20 = (long *)*param_5;
        }
      }
      local_44[0] = '\x01';
      sVar12 = *(short *)((long)plVar20 + 10);
      if ((char)plVar20[1] == '\0') {
        if (sVar12 != 0) {
          uVar9 = (int)sVar12 - 1;
          goto LAB__text__0049f9a4;
        }
        *(undefined2 *)((long)plVar20 + 10) = 1;
        *(undefined1 *)(plVar20 + 1) = 1;
        bVar3 = *(byte *)(param_6 + 1);
joined_r0x0049fa1c:
        if (((bVar3 & 1) == 0) ||
           (((bVar3 >> 1 & 1) == 0 &&
            (sVar12 = *param_6, *param_6 = sVar12 + -1, (short)(sVar12 + -1) == 0)))) {
          cVar21 = '\0';
          uVar9 = 0;
          local_44[0] = '\0';
          uVar4 = *puVar1;
        }
        else {
          uVar9 = (uint)*(ushort *)((long)plVar20 + 10);
          cVar21 = '\x01';
          uVar4 = *puVar1;
        }
      }
      else {
        iVar8 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
        if (sVar12 + 1 == iVar8) {
          if ((*puVar1 >> 5 & 1) == 0) {
            *(undefined2 *)((long)plVar20 + 10) = 0;
            bVar3 = *(byte *)(param_6 + 1);
            goto joined_r0x0049fa1c;
          }
          *(undefined1 *)(plVar20 + 1) = 0;
          uVar4 = *(short *)((long)plVar20 + 10) - 1;
          *(ushort *)((long)plVar20 + 10) = uVar4;
          uVar9 = (uint)uVar4;
          uVar4 = *puVar1;
        }
        else {
          uVar9 = *(ushort *)((long)plVar20 + 10) + 1;
LAB__text__0049f9a4:
          *(short *)((long)plVar20 + 10) = (short)uVar9;
          uVar9 = uVar9 & 0xffff;
          uVar4 = *puVar1;
        }
        cVar21 = '\x01';
      }
      if ((uVar4 >> 4 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          uVar13 = *(uint *)(param_1 + 0x118);
          if (uVar13 != 0) {
            iVar8 = 0;
            do {
              uVar6 = iVar8 + (uVar13 >> 1);
              uVar16 = *(ulong *)(*(long *)(param_1 + 0x110) +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar6 << 4))
              ;
              if (uVar16 == param_2) {
                lVar19 = *(long *)(param_1 + 0x110) + (long)(int)uVar6 * 0x10;
                goto LAB__text__0049fb20;
              }
              if (uVar16 < param_2) {
                iVar8 = uVar6 + 1;
              }
              uVar6 = uVar13 - (uVar16 < param_2);
              uVar13 = uVar6 >> 1;
            } while (1 < uVar6);
          }
          lVar19 = 0;
LAB__text__0049fb20:
          plVar14 = (long *)(lVar19 + 8);
        }
        else {
          plVar14 = (long *)(param_1 + 0x120);
        }
        lVar11 = *plVar14;
        lVar19 = plVar20[1];
        *(char *)(lVar11 + 8) = (char)lVar19;
        sVar12 = *(short *)((long)plVar20 + 10) + -1;
        if ((char)lVar19 == '\0') {
          sVar12 = *(short *)((long)plVar20 + 10) + 1;
        }
        *(short *)(lVar11 + 10) = sVar12;
        iVar8 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
        if ((sVar12 + 1 == iVar8) && ((*puVar1 >> 5 & 1) == 0)) {
          *(undefined2 *)(lVar11 + 10) = 0xffff;
        }
        else if ((*(short *)(lVar11 + 10) == 0) && (*(char *)(lVar11 + 8) == '\0')) {
          *(undefined1 *)(lVar11 + 8) = 1;
        }
      }
    }
    else {
      if (plVar20 == (long *)0x0) {
        plVar20 = (long *)FUN__text__00400f80(0,0x38);
        if (plVar20 == (long *)0x0) {
          return 0;
        }
        FUN__text__004cd54c(plVar20,iVar8);
        iVar8 = FUN__text__004cd580(plVar20,*(undefined2 *)(param_1 + 0x13a));
        if (iVar8 != 1) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          return 0;
        }
        if ((*puVar1 >> 3 & 1) != 0) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x108) + 0x68))();
          *(undefined4 *)(plVar20 + 1) = uVar10;
          *(undefined4 *)((long)plVar20 + 0xc) = uVar10;
        }
        *param_5 = (long)plVar20;
      }
      uVar9 = FUN__text__0049f1a0(param_1,plVar20,local_44,param_6);
      cVar21 = local_44[0];
    }
LAB__text__0049fb90:
    if (cVar21 == '\0') {
      return 0;
    }
    *param_3 = (short)uVar9;
    uVar9 = (**(code **)(**(long **)(param_1 + 0x108) + 0x28))(*(long **)(param_1 + 0x108),uVar9);
    puVar7 = _DAT_008a45c8;
    *param_4 = uVar9;
    piVar18 = (int *)*puVar7;
    pMVar17 = (MutexType *)(piVar18 + 4);
    while( true ) {
      while (iVar8 = *piVar18, -1 < iVar8) {
        while (*piVar18 == iVar8) {
          cVar21 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar8 + 1;
            cVar21 = ExclusiveMonitorsStatus();
          }
          if (cVar21 == '\0') goto LAB__text__0049fc14;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar17);
      if (*piVar18 < 0) break;
      nn::os::UnlockMutex(pMVar17);
    }
LAB__text__0049fc14:
    uVar13 = piVar18[0x1a];
    if (uVar13 == 0) {
      lVar19 = 0;
    }
    else {
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = uVar9 / uVar13;
      }
      lVar19 = *(long *)(*(long *)(piVar18 + 0x18) + (ulong)(uVar9 - uVar6 * uVar13) * 8);
      if (lVar19 != 0) {
LAB__text__0049fc30:
        if (*(uint *)(lVar19 + 0x10) != uVar9) goto code_r0x0049fc3c;
        piVar2 = (int *)(lVar19 + 0x14);
        do {
          cVar21 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar21 = ExclusiveMonitorsStatus();
          }
        } while (cVar21 != '\0');
      }
    }
LAB__text__0049fc6c:
    while (iVar8 = *piVar18, -1 < iVar8) {
      iVar15 = iVar8 + -1;
      while (*piVar18 == iVar8) {
        cVar21 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar15;
          cVar21 = ExclusiveMonitorsStatus();
        }
        if (cVar21 == '\0') goto LAB__text__0049fc94;
      }
      ClearExclusiveLocal();
    }
  }
  nn::os::UnlockMutex(pMVar17);
LAB__text__0049fcbc:
  lVar11 = 0;
  if (lVar19 != 0) {
    lVar11 = lVar19 + -0x10;
  }
  return lVar11;
code_r0x0049fc3c:
  lVar19 = *(long *)(lVar19 + 8);
  if (lVar19 == 0) goto LAB__text__0049fc6c;
  goto LAB__text__0049fc30;
code_r0x0049f81c:
  lVar19 = *(long *)(lVar19 + 8);
  if (lVar19 == 0) goto LAB__text__0049f8c8;
  goto LAB__text__0049f810;
LAB__text__0049fc94:
  if ((iVar15 == 0) && (0 < piVar18[0xc])) {
    nn::os::SignalEvent((EventType *)(piVar18 + 0xe));
  }
  goto LAB__text__0049fcbc;
}


