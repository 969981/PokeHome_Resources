/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004341c0; name: FUN_.text__004341c0
 */


undefined8 FUN__text__004341c0(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long *local_28;
  
  if ((param_2 & 0xff00000000) != 0x400000000) {
    uVar7 = param_2 >> 0x20 & 0xff;
    plVar9 = (long *)(param_1 + uVar7 * 0x18);
    uVar14 = *(uint *)(plVar9 + 1);
    if (uVar14 == 0) {
LAB__text__00434268:
      plVar9 = (long *)FUN__text__00434fac(param_1,param_2 & 0xffffff0000000000 |
                                                   param_2 & 0xffffffff | uVar7 << 0x20);
      if (plVar9 == (long *)0x0) {
        return 0xf;
      }
    }
    else {
      uVar6 = 0;
      uVar8 = (uint)param_2;
      if (uVar14 != 0) {
        uVar6 = uVar8 / uVar14;
      }
      plVar9 = (long *)(*plVar9 + (ulong)(uVar8 - uVar6 * uVar14) * 8);
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB__text__00434268;
      } while (*(uint *)(plVar9 + 1) != uVar8);
    }
    plVar10 = *(long **)((long)plVar9 + 0x78);
    uVar14 = *(uint *)((long)plVar9 + 0x80);
    plVar12 = plVar10;
    if (uVar14 == 0) {
LAB__text__004342cc:
      if (plVar12 != plVar10 + (ulong)uVar14 * 2) {
        return 1;
      }
    }
    else {
      lVar11 = (ulong)uVar14 << 4;
      do {
        if (*plVar12 == param_3) goto LAB__text__004342cc;
        plVar12 = plVar12 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    uVar3 = *(undefined1 *)((long)plVar9 + 0x89);
    if (*(uint *)((long)plVar9 + 0x84) <= uVar14) {
      uVar7 = FUN__text__00435b90();
      if ((uVar7 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)((long)plVar9 + 0x84) <= uVar14) {
        return 0x34;
      }
      uVar14 = *(uint *)((long)plVar9 + 0x80);
      plVar10 = *(long **)((long)plVar9 + 0x78);
    }
    *(uint *)((long)plVar9 + 0x80) = uVar14 + 1;
    if (plVar10 == (long *)0x0) {
      return 0x34;
    }
    plVar10[(ulong)uVar14 * 2] = param_3;
    *(undefined1 *)(plVar10 + (ulong)uVar14 * 2 + 1) = uVar3;
    *(byte *)((long)plVar9 + 0x88) =
         *(byte *)((long)plVar9 + 0x88) & 0xfe | 3 < *(byte *)((long)plVar9 + 0x88);
    return 1;
  }
  FUN__text__00434440(&local_28);
  if (local_28 == (long *)0x0) {
    return 0xf;
  }
  plVar9 = (long *)local_28[6];
  uVar14 = *(uint *)(local_28 + 7);
  if (uVar14 != 0) {
    lVar11 = (ulong)uVar14 << 4;
    plVar12 = plVar9;
    do {
      if (*plVar12 == param_3) {
        if (lVar11 != 0) goto LAB__text__004343c0;
        break;
      }
      plVar12 = plVar12 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  uVar3 = *(undefined1 *)((long)local_28 + 0x41);
  if (*(uint *)((long)local_28 + 0x3c) <= uVar14) {
    uVar7 = FUN__text__00435b90();
    uVar13 = 0x34;
    if (((uVar7 & 1) == 0) || (*(uint *)((long)local_28 + 0x3c) <= uVar14))
    goto LAB__text__004343cc;
    uVar14 = *(uint *)(local_28 + 7);
    plVar9 = (long *)local_28[6];
  }
  *(uint *)(local_28 + 7) = uVar14 + 1;
  if (plVar9 == (long *)0x0) {
    uVar13 = 0x34;
  }
  else {
    plVar9[(ulong)uVar14 * 2] = param_3;
    *(undefined1 *)(plVar9 + (ulong)uVar14 * 2 + 1) = uVar3;
    *(byte *)(local_28 + 8) = *(byte *)(local_28 + 8) & 0xfe | 3 < *(byte *)(local_28 + 8);
LAB__text__004343c0:
    uVar13 = 1;
  }
LAB__text__004343cc:
  piVar1 = (int *)((long)local_28 + 0x14);
  do {
    iVar2 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar2 + -1 == 0) {
    (**(code **)(*local_28 + 0x20))(local_28);
    return uVar13;
  }
  return uVar13;
}


