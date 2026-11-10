/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00128f20; name: FUN_.text__00128f20
 */


long FUN__text__00128f20(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x68) + 0x610) + 0x10))();
  if (((long *)plVar5[1] == (long *)*plVar5) || (lVar8 = *(long *)*plVar5, lVar8 == 0)) {
    return 0;
  }
  plVar5 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  piVar1 = (int *)(lVar8 + 0x54);
  if (*piVar1 == 0) {
    lVar8 = 0;
    goto LAB__text__0012906c;
  }
  iVar4 = *piVar1;
  do {
    if (iVar4 == 0) {
LAB__text__00128fe4:
      lVar9 = 0;
      goto LAB__text__00129020;
    }
    plVar10 = *(long **)(lVar8 + 0x58);
    plVar6 = (long *)FUN__text__001280e4();
    if (plVar6 != plVar10) {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10 != plVar6 && plVar10 != (long *)0x0);
      if (plVar10 == (long *)0x0) goto LAB__text__00128fe4;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar4) {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00128fd4;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00128fd4:
      bVar7 = false;
    }
    iVar4 = iVar2;
  } while (!bVar7);
  lVar9 = 0;
  if (*(long *)(lVar8 + 0x60) != 0) {
    lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
  }
LAB__text__00129020:
  plVar6 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))();
  plVar10 = (long *)FUN__text__001280e4();
  if (plVar10 == plVar6) {
LAB__text__00129054:
    lVar8 = lVar9;
  }
  else {
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar10 && plVar6 != (long *)0x0);
    lVar8 = 0;
    if (plVar6 != (long *)0x0) goto LAB__text__00129054;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
LAB__text__0012906c:
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return lVar8;
}


