/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045fff0; name: FUN_.text__0045fff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0045fff0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar5 = (long *)FUN__text__00400f80(1,0x38);
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  FUN__text__004cfee0(plVar5,0x1820);
  iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,0xf,*(undefined4 *)(param_1 + 0x110),0,0);
  if (iVar4 == 1) {
    (**(code **)(*plVar5 + 0x28))(plVar5,(ulong)*(uint *)(param_1 + 0x20) | 0x100000000);
    lVar6 = FUN__text__00400f80(0,0x48);
    if (lVar6 != 0) {
      FUN__text__004b7a40(lVar6,0);
      *(long **)(lVar6 + 8) = plVar5;
      FUN__text__004b2960(*_DAT_008a45c0,lVar6,0,0);
      uVar7 = 1;
      goto LAB__text__004600a4;
    }
  }
  uVar7 = 2;
LAB__text__004600a4:
  piVar1 = (int *)((long)plVar5 + 0x14);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 + -1 == 0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    return uVar7;
  }
  return uVar7;
}


