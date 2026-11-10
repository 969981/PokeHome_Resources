/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6e90; name: FUN_.text__004b6e90
 */


void FUN__text__004b6e90(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    plVar10 = (long *)0x0;
    do {
      lVar8 = plVar7[2];
      lVar6 = FUN__text__004ba560(*(undefined8 *)(lVar8 + 8));
      if (*(long *)(lVar8 + 8) == param_2) {
        if (*(int *)(lVar8 + 0x34) != 0) {
          *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + -1;
          goto LAB__text__004b6ef8;
        }
        FUN__text__004b6060(param_1,lVar8);
        plVar9 = (long *)*plVar7;
        plVar2 = (long *)(param_1 + 0x60);
        if (*(long **)(param_1 + 0x60) != plVar7) {
          plVar2 = plVar10;
        }
        *plVar2 = (long)plVar9;
        if (*(long **)(param_1 + 0x68) == plVar7) {
          *(long **)(param_1 + 0x68) = plVar10;
        }
        *plVar7 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar7;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      }
      else {
LAB__text__004b6ef8:
        plVar9 = (long *)*plVar7;
        plVar10 = plVar7;
      }
      plVar7 = plVar9;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x24);
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
          (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10));
        }
      }
    } while (plVar7 != (long *)0x0);
  }
  plVar7 = *(long **)(param_1 + 0x38);
  while (plVar7 != (long *)0x0) {
    lVar8 = *(long *)(plVar7[2] + 8);
    lVar6 = FUN__text__004ba560(lVar8);
    if ((lVar8 == param_2) && (*(short *)(param_2 + 0x34) == 0x503)) {
      FUN__text__004b9398(param_2);
    }
    plVar7 = (long *)*plVar7;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x24);
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
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10));
      }
    }
  }
  return;
}


