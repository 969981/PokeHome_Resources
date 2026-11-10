/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00515460; name: FUN_.text__00515460
 */


uint FUN__text__00515460(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                        undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long local_90 [5];
  long *local_68;
  
  local_68 = (long *)0x0;
  uVar2 = FUN__text__005158b0();
  if ((uVar2 & 1) == 0) {
    if (local_68 != (long *)0x0) {
      plVar6 = (long *)(param_1 + 0x10);
      plVar10 = (long *)(param_1 + 0x18);
      do {
        plVar12 = (long *)local_68[1];
        plVar4 = local_68;
        if (0 < (int)plVar12[0x40]) {
          lVar11 = 0;
          lVar13 = 0x30;
          do {
            plVar4 = (long *)((long)plVar12 + lVar11);
            iVar1 = *(int *)((long)plVar12 + 0x204);
            local_90[0] = *plVar4;
            local_90[1] = plVar4[1];
            local_90[2] = plVar4[2];
            lVar5 = 0x18;
            if (iVar1 < 1) {
              lVar5 = 0x20;
            }
            *(long *)((long)local_90 + lVar5) = plVar12[lVar13];
            FUN__text__00512ac0(param_1,local_90,param_4,iVar1,param_5);
            lVar5 = lVar13 + -0x2f;
            lVar13 = lVar13 + 1;
            lVar11 = lVar11 + 0x18;
          } while (lVar5 < (int)plVar12[0x40]);
          plVar12 = (long *)local_68[1];
          plVar4 = local_68;
        }
        local_68 = (long *)*plVar4;
        plVar3 = (long *)*plVar6;
        if ((plVar3 == (long *)0x0) || ((plVar3 <= plVar12 && (plVar12 < plVar3 + 0x1c7)))) {
          plVar9 = plVar3;
          plVar3 = (long *)0x0;
        }
        else {
          plVar9 = (long *)plVar3[0x1c7];
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x0;
          }
          else if ((plVar12 < plVar9) || (plVar9 + 0x1c7 <= plVar12)) {
            plVar7 = (long *)plVar9[0x1c7];
            plVar8 = plVar9;
            if (plVar7 == (long *)0x0) {
              plVar9 = (long *)0x0;
LAB__text__0051571c:
              plVar3 = plVar8;
            }
            else {
              do {
                plVar3 = plVar7;
                if (plVar3 <= plVar12) {
                  plVar9 = plVar3;
                  if (plVar12 < plVar3 + 0x1c7) goto LAB__text__0051571c;
                }
                plVar7 = (long *)plVar3[0x1c7];
                plVar9 = (long *)0x0;
                plVar8 = plVar3;
              } while (plVar7 != (long *)0x0);
            }
          }
        }
        if (plVar9[0x1c9] == 0) {
          plVar9[0x1c9] = (long)plVar12;
          *plVar12 = 0;
          iVar1 = (int)plVar9[0x1c8] + 1;
          *(int *)(plVar9 + 0x1c8) = iVar1;
        }
        else {
          *plVar12 = plVar9[0x1c9];
          plVar9[0x1c9] = (long)plVar12;
          iVar1 = (int)plVar9[0x1c8] + 1;
          *(int *)(plVar9 + 0x1c8) = iVar1;
        }
        if (iVar1 == 7) {
          plVar12 = plVar6;
          if ((long *)*plVar6 != plVar9) {
            plVar12 = plVar3 + 0x1c7;
          }
          *plVar12 = plVar9[0x1c7];
          FUN__text__00400fc0(10);
        }
        plVar12 = (long *)*plVar10;
        if ((plVar12 == (long *)0x0) || ((plVar12 <= plVar4 && (plVar4 < plVar12 + 0x80)))) {
          plVar3 = plVar12;
          plVar12 = (long *)0x0;
        }
        else {
          plVar3 = (long *)plVar12[0x80];
          if (plVar3 == (long *)0x0) {
            plVar3 = (long *)0x0;
          }
          else if ((plVar4 < plVar3) || (plVar3 + 0x80 <= plVar4)) {
            plVar8 = (long *)plVar3[0x80];
            plVar9 = plVar3;
            if (plVar8 == (long *)0x0) {
              plVar3 = (long *)0x0;
LAB__text__00515760:
              plVar12 = plVar9;
            }
            else {
              do {
                plVar12 = plVar8;
                if (plVar12 <= plVar4) {
                  plVar3 = plVar12;
                  if (plVar4 < plVar12 + 0x80) goto LAB__text__00515760;
                }
                plVar8 = (long *)plVar12[0x80];
                plVar3 = (long *)0x0;
                plVar9 = plVar12;
              } while (plVar8 != (long *)0x0);
            }
          }
        }
        if (plVar3[0x82] == 0) {
          plVar3[0x82] = (long)plVar4;
          *plVar4 = 0;
          iVar1 = (int)plVar3[0x81] + 1;
          *(int *)(plVar3 + 0x81) = iVar1;
        }
        else {
          *plVar4 = plVar3[0x82];
          plVar3[0x82] = (long)plVar4;
          iVar1 = (int)plVar3[0x81] + 1;
          *(int *)(plVar3 + 0x81) = iVar1;
        }
        if (iVar1 == 0x40) {
          plVar4 = plVar10;
          if ((long *)*plVar10 != plVar3) {
            plVar4 = plVar12 + 0x80;
          }
          *plVar4 = plVar3[0x80];
          FUN__text__00400fc0(10);
        }
      } while (local_68 != (long *)0x0);
    }
    plVar6 = (long *)*param_4;
    if (((int)plVar6[0x40] == 1) && (0 < *(int *)((long)plVar6 + 0x204))) {
      plVar10 = (long *)(param_1 + 0x10);
      plVar4 = (long *)*plVar10;
      if ((plVar4 == (long *)0x0) || ((plVar4 <= plVar6 && (plVar6 < plVar4 + 0x1c7)))) {
        plVar12 = plVar4;
        plVar4 = (long *)0x0;
      }
      else {
        plVar12 = (long *)plVar4[0x1c7];
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
        else if ((plVar6 < plVar12) || (plVar12 + 0x1c7 <= plVar6)) {
          plVar9 = (long *)plVar12[0x1c7];
          plVar3 = plVar12;
          if (plVar9 == (long *)0x0) {
            plVar12 = (long *)0x0;
LAB__text__005158a8:
            plVar4 = plVar3;
          }
          else {
            do {
              plVar4 = plVar9;
              if (plVar4 <= plVar6) {
                plVar12 = plVar4;
                if (plVar6 < plVar4 + 0x1c7) goto LAB__text__005158a8;
              }
              plVar9 = (long *)plVar4[0x1c7];
              plVar12 = (long *)0x0;
              plVar3 = plVar4;
            } while (plVar9 != (long *)0x0);
          }
        }
      }
      lVar13 = plVar6[0x30];
      if (plVar12[0x1c9] == 0) {
        plVar12[0x1c9] = (long)plVar6;
        *plVar6 = 0;
        iVar1 = (int)plVar12[0x1c8] + 1;
        *(int *)(plVar12 + 0x1c8) = iVar1;
      }
      else {
        *plVar6 = plVar12[0x1c9];
        plVar12[0x1c9] = (long)plVar6;
        iVar1 = (int)plVar12[0x1c8] + 1;
        *(int *)(plVar12 + 0x1c8) = iVar1;
      }
      if (iVar1 == 7) {
        if ((long *)*plVar10 != plVar12) {
          plVar10 = plVar4 + 0x1c7;
        }
        *plVar10 = plVar12[0x1c7];
        FUN__text__00400fc0(10);
      }
      *param_4 = lVar13;
    }
  }
  return uVar2 & 1;
}


