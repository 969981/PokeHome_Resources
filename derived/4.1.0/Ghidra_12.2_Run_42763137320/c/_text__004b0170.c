/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0170; name: FUN_.text__004b0170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN__text__004b0170(long param_1,short param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  short *psVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  piVar1 = (int *)(param_1 + 0xd4);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar2 = (long *)(param_1 + 0x18);
  uVar3 = param_3 + 3U & 0xfffffffc;
  uVar12 = (ulong)uVar3;
  uVar9 = (ulong)(uVar3 + 4);
  psVar11 = (short *)*plVar2;
  psVar10 = *(short **)(param_1 + 0x10);
  uVar13 = (long)psVar10 - (long)psVar11;
  if (psVar10 < psVar11 || uVar13 == 0) goto LAB__text__004b0200;
  while (uVar9 < uVar13) {
    while ((short *)*plVar2 == psVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = (long)psVar11 + uVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB__text__004b02a4;
    }
    while( true ) {
      ClearExclusiveLocal();
      psVar11 = (short *)*plVar2;
      psVar10 = *(short **)(param_1 + 0x10);
      uVar13 = (long)psVar10 - (long)psVar11;
      if (psVar11 <= psVar10 && uVar13 != 0) break;
LAB__text__004b0200:
      if (uVar9 < (ulong)(*(long *)(param_1 + 0x28) - (long)psVar11)) {
        while ((short *)*plVar2 == psVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)psVar11 + uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__004b02a4;
        }
      }
      else {
        if ((ulong)((long)psVar10 - *(long *)(param_1 + 0x20)) <= uVar9) goto LAB__text__004b02b4;
        while ((short *)*plVar2 == psVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *(long *)(param_1 + 0x20) + uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (psVar11 + 2 <= *(short **)(param_1 + 0x28)) {
              psVar11[1] = 0x3f;
              *psVar11 = (short)*(undefined4 *)(param_1 + 0x28) - (short)psVar11;
            }
            psVar11 = *(short **)(param_1 + 0x20);
            goto LAB__text__004b02a4;
          }
        }
      }
    }
  }
  goto LAB__text__004b02b4;
LAB__text__004b02a4:
  if (psVar11 != (short *)0x0) {
LAB__text__004b02a8:
    psVar11[1] = param_2;
    *psVar11 = (short)uVar3;
    return psVar11;
  }
LAB__text__004b02b4:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    pfVar6 = _DAT_008a46b8;
  } while (cVar4 != '\0');
  if (*(uint *)(param_1 + 0x30) < uVar3) {
    return (short *)0x0;
  }
  uVar13 = (ulong)(uVar3 + 4);
LAB__text__004b02f0:
  FUN__text__00411c2c(&uStack_61);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    psVar11 = *(short **)(param_1 + 0x18);
    psVar10 = *(short **)(param_1 + 0x10);
    if (psVar11 < psVar10) {
      if ((ulong)((long)psVar10 - (long)psVar11) <= uVar13) goto LAB__text__004b03e0;
      while ((short *)*plVar2 == psVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)psVar11 + uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__004b03dc;
      }
    }
    else if (uVar13 < (ulong)(*(long *)(param_1 + 0x28) - (long)psVar11)) {
      while ((short *)*plVar2 == psVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)psVar11 + uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__004b03dc;
      }
    }
    else {
      if ((ulong)((long)psVar10 - *(long *)(param_1 + 0x20)) <= uVar13) goto LAB__text__004b03e0;
      while ((short *)*plVar2 == psVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *(long *)(param_1 + 0x20) + uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (psVar11 + 2 <= *(short **)(param_1 + 0x28)) {
            psVar11[1] = 0x3f;
            *psVar11 = (short)*(undefined4 *)(param_1 + 0x28) - (short)psVar11;
          }
          psVar11 = *(short **)(param_1 + 0x20);
          goto LAB__text__004b03dc;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
LAB__text__004b03dc:
  if (psVar11 == (short *)0x0) {
LAB__text__004b03e0:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (*piVar1 != 0) {
      lVar7 = nn::os::GetSystemTick();
      fVar14 = *pfVar6;
      do {
        if (*piVar1 == 0) break;
        Yield();
        lVar8 = nn::os::GetSystemTick();
      } while (lVar8 <= lVar7 + (long)(fVar14 * 0.01));
      while (*piVar1 != 0) {
        FUN__text__00405bf0();
      }
    }
    DataMemoryBarrier(2,3);
    FUN__text__004b0750(param_1,1,&uStack_62);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      psVar11 = *(short **)(param_1 + 0x18);
      psVar10 = *(short **)(param_1 + 0x10);
      if (psVar11 < psVar10) {
        if ((ulong)((long)psVar10 - (long)psVar11) <= uVar13) goto LAB__text__004b0530;
        while ((short *)*plVar2 == psVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)psVar11 + uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__004b052c;
        }
      }
      else if (uVar13 < (ulong)(*(long *)(param_1 + 0x28) - (long)psVar11)) {
        while ((short *)*plVar2 == psVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)psVar11 + uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__004b052c;
        }
      }
      else {
        if ((ulong)((long)psVar10 - *(long *)(param_1 + 0x20)) <= uVar13) goto LAB__text__004b0530;
        while ((short *)*plVar2 == psVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *(long *)(param_1 + 0x20) + uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (psVar11 + 2 <= *(short **)(param_1 + 0x28)) {
              psVar11[1] = 0x3f;
              *psVar11 = (short)*(undefined4 *)(param_1 + 0x28) - (short)psVar11;
            }
            psVar11 = *(short **)(param_1 + 0x20);
            goto LAB__text__004b052c;
          }
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  goto LAB__text__004b057c;
LAB__text__004b052c:
  if (psVar11 == (short *)0x0) {
LAB__text__004b0530:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN__text__00411c70(&uStack_61);
    if (*(uint *)(param_1 + 0x30) < uVar3) {
      return (short *)0x0;
    }
    goto LAB__text__004b02f0;
  }
LAB__text__004b057c:
  FUN__text__00411c70(&uStack_61);
  goto LAB__text__004b02a8;
}


