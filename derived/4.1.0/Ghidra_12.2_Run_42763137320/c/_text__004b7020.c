/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b7020; name: FUN_.text__004b7020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b7020(ulong param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)(param_1 + 0x60);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)0x0;
    uVar2 = param_1;
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) {
        do {
          while (((plVar6 = plVar5, lVar3 = plVar6[2], param_5 != 0 &&
                  (*(int *)(lVar3 + 0x30) != param_5)) ||
                 (uVar2 = FUN__text__004b6760(uVar2,*(undefined8 *)(lVar3 + 8),param_3),
                 (uVar2 & 1) != 0))) {
LAB__text__004b71e0:
            plVar5 = (long *)*plVar6;
            plVar7 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB__text__004b71a4;
          }
          if (*(int *)(lVar3 + 0x34) != 0) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
            goto LAB__text__004b71e0;
          }
          uVar2 = FUN__text__004b6060(param_1,lVar3);
          plVar5 = (long *)*plVar6;
          plVar1 = plVar4;
          if (*(long **)(param_1 + 0x60) != plVar6) {
            plVar1 = plVar7;
          }
          *plVar1 = (long)plVar5;
          if (*(long **)(param_1 + 0x68) == plVar6) {
            *(long **)(param_1 + 0x68) = plVar7;
          }
          *plVar6 = *(long *)(param_1 + 0x70);
          *(long **)(param_1 + 0x70) = plVar6;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        } while (plVar5 != (long *)0x0);
      }
      else if (param_5 == 0) {
        do {
          while ((plVar6 = plVar5, lVar3 = plVar6[2], *(long *)(lVar3 + 0x40) != param_2 ||
                 (uVar2 = FUN__text__004b6760(uVar2,*(undefined8 *)(lVar3 + 8),param_3),
                 (uVar2 & 1) != 0))) {
LAB__text__004b7280:
            plVar5 = (long *)*plVar6;
            plVar7 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB__text__004b71a4;
          }
          if (*(int *)(lVar3 + 0x34) != 0) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
            goto LAB__text__004b7280;
          }
          uVar2 = FUN__text__004b6060(param_1,lVar3);
          plVar5 = (long *)*plVar6;
          plVar1 = plVar4;
          if (*(long **)(param_1 + 0x60) != plVar6) {
            plVar1 = plVar7;
          }
          *plVar1 = (long)plVar5;
          if (*(long **)(param_1 + 0x68) == plVar6) {
            *(long **)(param_1 + 0x68) = plVar7;
          }
          *plVar6 = *(long *)(param_1 + 0x70);
          *(long **)(param_1 + 0x70) = plVar6;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        } while (plVar5 != (long *)0x0);
      }
      else {
LAB__text__004b7064:
        do {
          plVar6 = plVar5;
          lVar3 = plVar6[2];
          if (((*(long *)(lVar3 + 0x40) == param_2) && (*(int *)(lVar3 + 0x30) == param_5)) &&
             (uVar2 = FUN__text__004b6760(uVar2,*(undefined8 *)(lVar3 + 8),param_3),
             (uVar2 & 1) == 0)) {
            if (*(int *)(lVar3 + 0x34) == 0) {
              uVar2 = FUN__text__004b6060(param_1,lVar3);
              plVar5 = (long *)*plVar6;
              plVar1 = plVar4;
              if (*(long **)(param_1 + 0x60) != plVar6) {
                plVar1 = plVar7;
              }
              *plVar1 = (long)plVar5;
              if (*(long **)(param_1 + 0x68) == plVar6) {
                *(long **)(param_1 + 0x68) = plVar7;
              }
              *plVar6 = *(long *)(param_1 + 0x70);
              *(long **)(param_1 + 0x70) = plVar6;
              *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
              if (plVar5 == (long *)0x0) break;
              goto LAB__text__004b7064;
            }
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
          }
          plVar5 = (long *)*plVar6;
          plVar7 = plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    else {
      do {
        while ((((plVar6 = plVar5, lVar3 = plVar6[2], param_2 != 0 &&
                 (*(long *)(lVar3 + 0x40) != param_2)) ||
                ((param_5 != 0 && (*(int *)(lVar3 + 0x30) != param_5)))) ||
               (uVar2 = FUN__text__004b6760(uVar2,*(undefined8 *)(lVar3 + 8),param_3),
               (uVar2 & 1) != 0))) {
          plVar5 = (long *)*plVar6;
          plVar7 = plVar6;
          if ((long *)*plVar6 == (long *)0x0) goto LAB__text__004b71a4;
        }
        uVar2 = FUN__text__004b6060(param_1,lVar3);
        plVar5 = (long *)*plVar6;
        plVar1 = plVar4;
        if (*(long **)(param_1 + 0x60) != plVar6) {
          plVar1 = plVar7;
        }
        *plVar1 = (long)plVar5;
        if (*(long **)(param_1 + 0x68) == plVar6) {
          *(long **)(param_1 + 0x68) = plVar7;
        }
        *plVar6 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar6;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB__text__004b71a4:
  uVar2 = *_DAT_008a45c0;
  plVar5 = *(long **)(uVar2 + 0x38);
  if (plVar5 != (long *)0x0) {
    if (param_2 == 0) {
      if (param_5 == 0) {
        do {
          lVar3 = *(long *)(plVar5[2] + 8);
          uVar2 = FUN__text__004b6760(uVar2,lVar3,param_3);
          if (((uVar2 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
            uVar2 = FUN__text__004b9398(lVar3);
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          if (*(int *)(plVar5[2] + 0x30) == param_5) {
            lVar3 = *(long *)(plVar5[2] + 8);
            uVar2 = FUN__text__004b6760(uVar2,lVar3,param_3);
            if (((uVar2 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
              uVar2 = FUN__text__004b9398(lVar3);
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
    else if (param_5 == 0) {
      do {
        if (*(long *)(plVar5[2] + 0x40) == param_2) {
          lVar3 = *(long *)(plVar5[2] + 8);
          uVar2 = FUN__text__004b6760(uVar2,lVar3,param_3);
          if (((uVar2 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
            uVar2 = FUN__text__004b9398(lVar3);
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        lVar3 = plVar5[2];
        if ((*(long *)(lVar3 + 0x40) == param_2) && (*(int *)(lVar3 + 0x30) == param_5)) {
          lVar3 = *(long *)(lVar3 + 8);
          uVar2 = FUN__text__004b6760(uVar2,lVar3,param_3);
          if (((uVar2 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
            uVar2 = FUN__text__004b9398(lVar3);
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


