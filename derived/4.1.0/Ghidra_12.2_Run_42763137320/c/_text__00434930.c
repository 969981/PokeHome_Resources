/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434930; name: FUN_.text__00434930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00434930(long param_1,ulong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *local_28;
  
  uVar8 = param_2 >> 0x20 & 0xff;
  iVar7 = (int)uVar8;
  if (iVar7 == 3) {
    uVar8 = FUN__text__004318b0(*_DAT_008a4658,param_3);
    return uVar8;
  }
  if (iVar7 == 4) {
    FUN__text__00434440(&local_28);
    if (local_28 != (long *)0x0) {
      uVar8 = FUN__text__0043e3e0(local_28,param_3);
      piVar1 = (int *)((long)local_28 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        (**(code **)(*local_28 + 0x20))(local_28);
      }
      return uVar8 & 0xffffffff;
    }
  }
  else {
    plVar9 = (long *)(param_1 + uVar8 * 0x18);
    uVar2 = *(uint *)(plVar9 + 1);
    if (uVar2 != 0) {
      uVar5 = 0;
      uVar6 = (uint)param_2;
      if (uVar2 != 0) {
        uVar5 = uVar6 / uVar2;
      }
      plVar9 = (long *)(*plVar9 + (ulong)(uVar6 - uVar5 * uVar2) * 8);
      while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
        if (*(uint *)(plVar9 + 1) == uVar6) {
          uVar8 = FUN__text__00436de0(plVar9,param_3);
          return uVar8;
        }
      }
    }
  }
  return 0xf;
}


