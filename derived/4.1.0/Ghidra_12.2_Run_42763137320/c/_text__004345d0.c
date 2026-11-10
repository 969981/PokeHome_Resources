/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004345d0; name: FUN_.text__004345d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004345d0(long param_1,ulong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *local_28;
  
  uVar9 = param_2 >> 0x20 & 0xff;
  if ((int)uVar9 == 3) {
    uVar9 = FUN__text__004317f4(*_DAT_008a4658,param_3);
    return uVar9;
  }
  if ((int)uVar9 == 4) {
    FUN__text__00434440(&local_28,param_2 & 0xffffffff);
    if (local_28 == (long *)0x0) {
      return 0xf;
    }
    uVar9 = FUN__text__0043e0e0(local_28,param_3);
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
    }
    return uVar9 & 0xffffffff;
  }
  plVar8 = (long *)(param_1 + uVar9 * 0x18);
  uVar3 = *(uint *)(plVar8 + 1);
  if (uVar3 == 0) {
LAB__text__004346b8:
    plVar8 = (long *)FUN__text__00434fac(param_1,param_2 & 0xffffff0000000000 |
                                                 param_2 & 0xffffffff | uVar9 << 0x20);
    if (plVar8 == (long *)0x0) {
      return 0xf;
    }
  }
  else {
    uVar6 = 0;
    uVar7 = (uint)param_2;
    if (uVar3 != 0) {
      uVar6 = uVar7 / uVar3;
    }
    plVar8 = (long *)(*plVar8 + (ulong)(uVar7 - uVar6 * uVar3) * 8);
    do {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB__text__004346b8;
    } while (*(uint *)(plVar8 + 1) != uVar7);
  }
  uVar9 = FUN__text__00436bf0(plVar8,param_3);
  return uVar9;
}


