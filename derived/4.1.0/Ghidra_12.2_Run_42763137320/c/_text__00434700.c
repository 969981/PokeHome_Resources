/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434700; name: FUN_.text__00434700
 */


undefined8 FUN__text__00434700(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long *local_28;
  
  if ((param_2 & 0xff00000000) != 0x400000000) {
    plVar8 = (long *)(param_1 + (param_2 >> 0x20 & 0xff) * 0x18);
    uVar10 = *(uint *)(plVar8 + 1);
    if (uVar10 == 0) {
      return 0xf;
    }
    uVar5 = 0;
    uVar6 = (uint)param_2;
    if (uVar10 != 0) {
      uVar5 = uVar6 / uVar10;
    }
    plVar8 = (long *)(*plVar8 + (ulong)(uVar6 - uVar5 * uVar10) * 8);
    do {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return 0xf;
      }
    } while (*(uint *)(plVar8 + 1) != uVar6);
    plVar9 = (long *)plVar8[0xf];
    uVar10 = *(uint *)(plVar8 + 0x10);
    plVar7 = plVar9;
    if (uVar10 != 0) {
      lVar11 = (ulong)uVar10 << 4;
      while (*plVar7 != param_3) {
        plVar7 = plVar7 + 2;
        lVar11 = lVar11 + -0x10;
        if (lVar11 == 0) {
          return 2;
        }
      }
    }
    if (plVar7 == plVar9 + (ulong)uVar10 * 2) {
      return 2;
    }
    uVar10 = uVar10 - 1;
    if (plVar7 < plVar9 + (ulong)uVar10 * 2) {
      memmove(plVar7,plVar7 + 2,
              (ulong)(uint)((int)(plVar9 + (ulong)uVar10 * 2) - (int)plVar7) & 0xfffffff0);
      uVar10 = *(int *)(plVar8 + 0x10) - 1;
    }
    *(uint *)(plVar8 + 0x10) = uVar10;
    *(byte *)(plVar8 + 0x11) = *(byte *)(plVar8 + 0x11) & 0xfe | 3 < *(byte *)(plVar8 + 0x11);
    return 1;
  }
  FUN__text__00434440(&local_28);
  if (local_28 == (long *)0x0) {
    return 0xf;
  }
  plVar7 = (long *)local_28[6];
  uVar10 = *(uint *)(local_28 + 7);
  plVar8 = plVar7;
  if (uVar10 == 0) {
LAB__text__004347fc:
    if (plVar8 != plVar7 + (ulong)uVar10 * 2) {
      uVar10 = uVar10 - 1;
      if (plVar8 < plVar7 + (ulong)uVar10 * 2) {
        memmove(plVar8,plVar8 + 2,
                (ulong)(uint)((int)(plVar7 + (ulong)uVar10 * 2) - (int)plVar8) & 0xfffffff0);
        uVar10 = (int)local_28[7] - 1;
      }
      *(uint *)(local_28 + 7) = uVar10;
      uVar12 = 1;
      *(byte *)(local_28 + 8) = *(byte *)(local_28 + 8) & 0xfe | 3 < *(byte *)(local_28 + 8);
      goto LAB__text__00434858;
    }
  }
  else {
    lVar11 = (ulong)uVar10 << 4;
    do {
      if (*plVar8 == param_3) goto LAB__text__004347fc;
      plVar8 = plVar8 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  uVar12 = 2;
LAB__text__00434858:
  piVar1 = (int *)((long)local_28 + 0x14);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    (**(code **)(*local_28 + 0x20))(local_28);
    return uVar12;
  }
  return uVar12;
}


