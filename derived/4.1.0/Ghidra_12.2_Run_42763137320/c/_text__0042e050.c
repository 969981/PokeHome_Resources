/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042e050; name: FUN_.text__0042e050
 */


int FUN__text__0042e050(long *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  undefined1 uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 auStack_90 [2];
  undefined4 *local_88;
  long *plStack_80;
  uint local_74;
  ulong local_70;
  int local_64;
  
  puVar21 = auStack_90;
  uVar6 = (**(code **)(*param_1 + 0x78))();
  if ((uVar6 & 1) == 0) {
    return 0x34;
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar11 = *plVar7;
  if (lVar11 != 0) {
    iVar12 = 0;
    lVar14 = lVar11;
    do {
      lVar14 = *(long *)(lVar14 + 0x10);
      iVar12 = iVar12 + -1;
    } while (lVar14 != 0);
    if (iVar12 != 0) {
      uVar6 = (ulong)(uint)-iVar12;
      puVar21 = (undefined4 *)((long)auStack_90 - (uVar6 * 4 + 0xf & 0x7fffffff0));
      puVar19 = puVar21;
      for (; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
        *puVar19 = *(undefined4 *)(lVar11 + 0x38);
        puVar19 = puVar19 + 1;
      }
      puVar19 = puVar19 + -uVar6;
      goto joined_r0x0042e11c;
    }
  }
  uVar6 = 0;
  puVar19 = (undefined4 *)0x0;
joined_r0x0042e11c:
  iVar12 = 1;
  uVar16 = 0;
  if (param_2 != 0) {
    iVar12 = 1;
    uVar16 = 0;
    local_88 = puVar19;
    plStack_80 = param_1;
    do {
      param_1 = plStack_80;
      puVar19 = local_88;
      uVar18 = 0;
      iVar5 = (int)uVar6;
      if ((local_88 == (undefined4 *)0x0) || (iVar5 == 0)) {
LAB__text__0042e190:
        if ((int)uVar18 == iVar5) goto LAB__text__0042e198;
        local_88[uVar18 & 0xffffffff] = local_88[iVar5 - 1];
        iVar1 = *param_3;
        plVar7 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
        do {
          lVar11 = *plVar7;
          plVar7 = (long *)(lVar11 + 0x10);
        } while (*(int *)(lVar11 + 0x38) != iVar1);
        local_70 = (ulong)(iVar5 - 1);
        uVar9 = (undefined1)param_3[2];
        uVar16 = uVar16 | (uint)*(byte *)(lVar11 + 0x40) != (param_3[2] & 0xffU);
      }
      else {
        uVar18 = 0;
        do {
          if (local_88[uVar18] == *param_3) goto LAB__text__0042e190;
          uVar18 = uVar18 + 1;
        } while ((uVar6 & 0xffffffff) != uVar18);
LAB__text__0042e198:
        uVar16 = 1;
        lVar11 = (**(code **)(*plStack_80 + 0x60))(plStack_80,*param_3,1);
        if (lVar11 == 0) {
          iVar12 = 0x34;
          break;
        }
        uVar9 = (undefined1)param_3[2];
        uVar16 = 1;
        local_70 = uVar6;
      }
      *(undefined1 *)(lVar11 + 0x40) = uVar9;
      puVar21 = (undefined4 *)
                ((long)puVar21 - ((ulong)*(uint *)(lVar11 + 0x34) * 4 + 0xf & 0x7fffffff0));
      uVar10 = *(uint *)(lVar11 + 0x30);
      if (uVar10 == 0) {
        uVar6 = 0;
      }
      else {
        lVar14 = *(long *)(lVar11 + 0x28);
        uVar6 = (ulong)uVar10 - 1 & 0xfffffffffffffff;
        uVar18 = uVar6 + 1;
        puVar19 = puVar21;
        if (uVar6 < 3) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 4;
            lVar15 = *(long *)(lVar14 + 0x28);
            uVar2 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x10);
            *puVar19 = *(undefined4 *)(*(long *)(lVar14 + 8) + 0x10);
            puVar19[1] = uVar2;
            plVar7 = (long *)(lVar14 + 0x38);
            lVar14 = lVar14 + 0x40;
            uVar2 = *(undefined4 *)(*plVar7 + 0x10);
            puVar19[2] = *(undefined4 *)(lVar15 + 0x10);
            puVar19[3] = uVar2;
            puVar19 = puVar19 + 4;
          } while ((uVar18 & 0x1ffffffffffffffc) != uVar6);
        }
        uVar18 = uVar18 & 3;
        if (uVar18 != 0) {
          uVar6 = (ulong)((int)uVar6 + (uVar10 & 3));
          plVar7 = (long *)(lVar14 + 8);
          do {
            uVar18 = uVar18 - 1;
            *puVar19 = *(undefined4 *)(*plVar7 + 0x10);
            puVar19 = puVar19 + 1;
            plVar7 = plVar7 + 2;
          } while (uVar18 != 0);
        }
      }
      uVar20 = (uint)uVar6;
      uVar10 = param_3[1];
      if (uVar10 != 0) {
        uVar17 = 0;
        piVar8 = param_4;
LAB__text__0042e330:
        do {
          uVar20 = (uint)uVar6;
          if (uVar20 == 0) {
            uVar18 = 0;
LAB__text__0042e364:
            if ((uint)uVar18 != uVar20) {
              uVar20 = uVar20 - 1;
              uVar6 = (ulong)uVar20;
              puVar21[uVar18 & 0xffffffff] = puVar21[uVar6];
              uVar17 = uVar17 + 1;
              param_4 = piVar8 + 2;
              piVar8 = param_4;
              if (uVar10 <= uVar17) break;
              goto LAB__text__0042e330;
            }
          }
          else {
            uVar18 = 0;
            do {
              if (puVar21[uVar18] == *piVar8) goto LAB__text__0042e364;
              uVar18 = uVar18 + 1;
            } while ((uVar6 & 0xffffffff) != uVar18);
          }
          param_4 = piVar8 + 2;
          iVar5 = FUN__text__0042dd40(lVar11,*piVar8,piVar8[1],0);
          uVar10 = param_3[1];
          uVar16 = 1;
          if (iVar5 != 1) {
            iVar12 = iVar5;
          }
          uVar17 = uVar17 + 1;
          piVar8 = param_4;
        } while (uVar17 < uVar10);
      }
      local_64 = param_2;
      local_74 = (uint)(uVar20 != 0);
      if (uVar20 != 0) {
        uVar18 = (ulong)*(uint *)(lVar11 + 0x30);
        uVar6 = 0;
        do {
          iVar5 = puVar21[uVar6];
          piVar13 = *(int **)(lVar11 + 0x28);
          piVar8 = piVar13;
          if ((int)uVar18 == 0) {
LAB__text__0042e3f4:
            if (piVar8 != piVar13 + uVar18 * 4) {
              FUN__text__00432270(*(undefined8 *)(piVar8 + 2));
              plVar7 = *(long **)(piVar8 + 2);
              piVar8 = (int *)((long)plVar7 + 0x14);
              do {
                iVar1 = *piVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                if (bVar4) {
                  *piVar8 = iVar1 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar1 + -1 == 0) {
                (**(code **)(*plVar7 + 0x20))();
              }
              piVar13 = *(int **)(lVar11 + 0x28);
              uVar10 = *(uint *)(lVar11 + 0x30);
              uVar18 = (ulong)uVar10;
              piVar8 = piVar13;
              if (uVar10 == 0) {
LAB__text__0042e464:
                if (piVar8 != piVar13 + (ulong)uVar10 * 4) {
                  uVar18 = (ulong)(uVar10 - 1);
                  if (piVar8 < piVar13 + uVar18 * 4) {
                    memmove(piVar8,piVar8 + 4,
                            (ulong)(uint)((int)(piVar13 + uVar18 * 4) - (int)piVar8) & 0xfffffff0);
                    uVar18 = (ulong)(*(int *)(lVar11 + 0x30) - 1);
                  }
                  *(int *)(lVar11 + 0x30) = (int)uVar18;
                }
              }
              else {
                lVar14 = uVar18 << 4;
                do {
                  if (*piVar8 == iVar5) goto LAB__text__0042e464;
                  piVar8 = piVar8 + 4;
                  lVar14 = lVar14 + -0x10;
                } while (lVar14 != 0);
              }
            }
          }
          else {
            lVar14 = uVar18 << 4;
            do {
              if (*piVar8 == iVar5) goto LAB__text__0042e3f4;
              piVar8 = piVar8 + 4;
              lVar14 = lVar14 + -0x10;
            } while (lVar14 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar20);
      }
      param_3 = param_3 + 3;
      uVar16 = uVar16 | local_74;
      param_2 = local_64 + -1;
      puVar19 = local_88;
      param_1 = plStack_80;
      uVar6 = local_70;
    } while (param_2 != 0);
  }
  if ((int)uVar6 != 0) {
    uVar18 = uVar6 & 0xffffffff;
    do {
      (**(code **)(*param_1 + 0x58))(param_1,*puVar19,0);
      uVar18 = uVar18 - 1;
      puVar19 = puVar19 + 1;
    } while (uVar18 != 0);
  }
  if ((int)uVar6 != 0 || (uVar16 & 1) != 0) {
    FUN__text__0042d4a0(param_1);
  }
  return iVar12;
}


