/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6c20; name: FUN_.text__004b6c20
 */


void FUN__text__004b6c20(long param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = *(long **)(param_1 + 0x38);
  if (plVar11 != (long *)0x0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        if (param_5 == 0) {
          do {
            if (*(short *)(*(long *)(plVar11[2] + 8) + 0x34) == 0x503) {
              FUN__text__004b9398();
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            if ((*(int *)(plVar11[2] + 0x30) == param_5) &&
               (*(short *)(*(long *)(plVar11[2] + 8) + 0x34) == 0x503)) {
              FUN__text__004b9398();
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      else if (param_5 == 0) {
        do {
          if ((*(long *)(plVar11[2] + 0x40) == param_3) &&
             (*(short *)(*(long *)(plVar11[2] + 8) + 0x34) == 0x503)) {
            FUN__text__004b9398();
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          lVar8 = plVar11[2];
          if (((*(long *)(lVar8 + 0x40) == param_3) && (*(int *)(lVar8 + 0x30) == param_5)) &&
             (*(short *)(*(long *)(lVar8 + 8) + 0x34) == 0x503)) {
            FUN__text__004b9398();
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    else {
      do {
        lVar8 = plVar11[2];
        lVar10 = *(long *)(lVar8 + 8);
        if ((((param_3 == 0) || (*(long *)(lVar8 + 0x40) == param_3)) &&
            ((*(int *)(lVar8 + 0x30) == param_5 || param_5 == 0) && lVar10 != 0)) &&
           (lVar8 = FUN__text__004ba560(lVar10), lVar8 != 0)) {
          if (lVar8 == param_2) {
            bVar6 = true;
          }
          else {
            lVar9 = *(long *)(lVar8 + 0x78);
            if ((*(byte *)(param_2 + 0xd4) >> 1 & 1) == 0) {
              if (lVar9 == 0) {
                piVar2 = (int *)(lVar8 + 0x24);
                do {
                  iVar3 = *piVar2;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))();
                }
                goto LAB__text__004b6c60;
              }
              do {
                bVar6 = lVar9 == param_2;
                if (bVar6) break;
                lVar9 = *(long *)(lVar9 + 0x78);
              } while (lVar9 != 0);
            }
            else {
              lVar7 = *(long *)(lVar8 + 0x80);
              if ((lVar9 != 0) && (lVar7 == 0)) {
                do {
                  plVar1 = (long *)(lVar9 + 0x78);
                  lVar7 = *(long *)(lVar9 + 0x80);
                  lVar9 = *plVar1;
                } while (*plVar1 != 0 && lVar7 == 0);
              }
              bVar6 = lVar7 != 0;
              if ((lVar7 != param_2) && (lVar7 != 0)) {
                do {
                  lVar7 = *(long *)(lVar7 + 0x80);
                  bVar6 = lVar7 != 0;
                } while (lVar7 != param_2 && lVar7 != 0);
              }
            }
          }
          piVar2 = (int *)(lVar8 + 0x24);
          do {
            iVar3 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))();
          }
          if ((bVar6) && (*(short *)(lVar10 + 0x34) == 0x503)) {
            FUN__text__004b9398(lVar10);
          }
        }
LAB__text__004b6c60:
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


