/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049a1f0; name: FUN_.text__0049a1f0
 */


void FUN__text__0049a1f0(long param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x128);
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (param_4 == 0) {
LAB__text__0049a2e8:
    if (*(uint *)(plVar9 + 0x10) != 0) {
      plVar6 = (long *)plVar9[0xf];
      lVar7 = (ulong)*(uint *)(plVar9 + 0x10) << 3;
      do {
        lVar8 = *plVar6;
        if (*(long *)(lVar8 + 0x50) == param_2) {
          if (*(uint *)(lVar8 + 0x60) != 0) {
            plVar6 = *(long **)(lVar8 + 0x58);
            lVar7 = (ulong)*(uint *)(lVar8 + 0x60) << 5;
            goto LAB__text__0049a330;
          }
          break;
        }
        plVar6 = plVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    goto LAB__text__0049a2e0;
  }
  piVar1 = (int *)(param_4 + 0x24);
LAB__text__0049a22c:
  if (*(uint *)(plVar9 + 0x10) != 0) {
    plVar6 = (long *)plVar9[0xf];
    lVar7 = (ulong)*(uint *)(plVar9 + 0x10) << 3;
    do {
      lVar8 = *plVar6;
      if (*(long *)(lVar8 + 0x50) == param_2) {
        if (*(uint *)(lVar8 + 0x60) != 0) {
          plVar6 = *(long **)(lVar8 + 0x58);
          lVar7 = (ulong)*(uint *)(lVar8 + 0x60) << 5;
          goto LAB__text__0049a270;
        }
        break;
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  goto LAB__text__0049a224;
  while( true ) {
    plVar6 = plVar6 + 4;
    lVar7 = lVar7 + -0x20;
    if (lVar7 == 0) break;
LAB__text__0049a330:
    if (*plVar6 == param_3) {
      if (*(long *)(param_3 + 8) != 0) {
        piVar1 = (int *)(*(long *)(param_3 + 8) + 0x24);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      break;
    }
  }
LAB__text__0049a2e0:
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  goto LAB__text__0049a2e8;
  while( true ) {
    plVar6 = plVar6 + 4;
    lVar7 = lVar7 + -0x20;
    if (lVar7 == 0) break;
LAB__text__0049a270:
    if (*plVar6 == param_3) goto LAB__text__0049a290;
  }
LAB__text__0049a224:
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  goto LAB__text__0049a22c;
LAB__text__0049a290:
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    (**(code **)(*(long *)(param_4 + 0x10) + 0x20))((long *)(param_4 + 0x10));
  }
  if (*(long *)(*plVar6 + 8) != 0) {
    piVar2 = (int *)(*(long *)(*plVar6 + 8) + 0x24);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  goto LAB__text__0049a224;
}


