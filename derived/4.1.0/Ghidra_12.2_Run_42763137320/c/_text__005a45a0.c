/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a45a0; name: FUN_.text__005a45a0
 */


void FUN__text__005a45a0(long *param_1,long *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  
  do {
    plVar10 = param_1;
LAB__text__005a45e4:
    param_1 = plVar10;
    uVar7 = (long)param_2 - (long)param_1;
    uVar9 = (long)uVar7 >> 4;
    if (uVar9 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x005a49c4 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__005a49d0 + (ulong)*(ushort *)(uVar9 * 2 + 0x757c78) * 4))();
      return;
    }
    if ((long)uVar7 < 0x180) {
      plVar10 = param_1 + 2;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || plVar10 == param_2) {
          return;
        }
        do {
          plVar11 = plVar10;
          lVar8 = param_1[2];
          uVar7 = param_1[3];
          bVar3 = uVar7 < (ulong)param_1[1];
          if (*(ulong *)(lVar8 + 0xa0) != *(ulong *)(*param_1 + 0xa0)) {
            bVar3 = *(ulong *)(lVar8 + 0xa0) < *(ulong *)(*param_1 + 0xa0);
          }
          if (bVar3) {
            plVar10 = plVar11;
            do {
              plVar16 = plVar10;
              plVar10 = plVar16 + -2;
              *plVar16 = *plVar10;
              plVar16[1] = plVar16[-1];
              bVar3 = uVar7 < (ulong)plVar16[-3];
              if (*(ulong *)(lVar8 + 0xa0) != *(ulong *)(plVar16[-4] + 0xa0)) {
                bVar3 = *(ulong *)(lVar8 + 0xa0) < *(ulong *)(plVar16[-4] + 0xa0);
              }
            } while (bVar3);
            *plVar10 = lVar8;
            plVar16[-1] = uVar7;
          }
          plVar10 = plVar11 + 2;
          param_1 = plVar11;
        } while (plVar11 + 2 != param_2);
        return;
      }
      if (param_1 == param_2 || plVar10 == param_2) {
        return;
      }
      lVar8 = 0;
      plVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar15 = uVar9 - 2 >> 1;
      uVar18 = uVar15;
      goto LAB__text__005a4c3c;
    }
    uVar9 = uVar9 >> 1;
    plVar10 = param_1 + uVar9 * 2;
    if (uVar7 < 0x801) {
      FUN__text__005a51b0(plVar10,param_1,param_2 + -2);
      lVar8 = *param_1;
      if ((param_4 & 1) != 0) goto LAB__text__005a4720;
LAB__text__005a468c:
      uVar7 = param_1[1];
      uVar9 = *(ulong *)(lVar8 + 0xa0);
      bVar3 = (ulong)param_1[-1] < uVar7;
      if (*(ulong *)(param_1[-2] + 0xa0) != uVar9) {
        bVar3 = *(ulong *)(param_1[-2] + 0xa0) < uVar9;
      }
      if (!bVar3) {
        bVar3 = uVar7 < (ulong)param_2[-1];
        if (uVar9 != *(ulong *)(param_2[-2] + 0xa0)) {
          bVar3 = uVar9 < *(ulong *)(param_2[-2] + 0xa0);
        }
        plVar11 = param_1;
        if (bVar3) {
          do {
            plVar10 = plVar11 + 2;
            bVar3 = uVar7 < (ulong)plVar11[3];
            if (uVar9 != *(ulong *)(*plVar10 + 0xa0)) {
              bVar3 = uVar9 < *(ulong *)(*plVar10 + 0xa0);
            }
            plVar11 = plVar10;
          } while (!bVar3);
        }
        else {
          do {
            plVar10 = plVar11 + 2;
            if (param_2 <= plVar10) break;
            bVar3 = uVar7 < (ulong)plVar11[3];
            if (uVar9 != *(ulong *)(*plVar10 + 0xa0)) {
              bVar3 = uVar9 < *(ulong *)(*plVar10 + 0xa0);
            }
            plVar11 = plVar10;
          } while (!bVar3);
        }
        plVar11 = param_2;
        if (plVar10 < param_2) {
          plVar16 = param_2;
          do {
            plVar11 = plVar16 + -2;
            bVar3 = uVar7 < (ulong)plVar16[-1];
            if (uVar9 != *(ulong *)(*plVar11 + 0xa0)) {
              bVar3 = uVar9 < *(ulong *)(*plVar11 + 0xa0);
            }
            plVar16 = plVar11;
          } while (bVar3);
        }
        while (plVar10 < plVar11) {
          lVar20 = *plVar10;
          lVar2 = plVar10[1];
          lVar14 = plVar11[1];
          *plVar10 = *plVar11;
          plVar10[1] = lVar14;
          *plVar11 = lVar20;
          plVar11[1] = lVar2;
          uVar9 = *(ulong *)(lVar8 + 0xa0);
          plVar16 = plVar10;
          do {
            plVar10 = plVar16 + 2;
            bVar3 = uVar7 < (ulong)plVar16[3];
            if (uVar9 != *(ulong *)(*plVar10 + 0xa0)) {
              bVar3 = uVar9 < *(ulong *)(*plVar10 + 0xa0);
            }
            plVar12 = plVar11;
            plVar16 = plVar10;
          } while (!bVar3);
          do {
            plVar11 = plVar12 + -2;
            bVar3 = uVar7 < (ulong)plVar12[-1];
            if (uVar9 != *(ulong *)(*plVar11 + 0xa0)) {
              bVar3 = uVar9 < *(ulong *)(*plVar11 + 0xa0);
            }
            plVar12 = plVar11;
          } while (bVar3);
        }
        if (plVar10 + -2 != param_1) {
          lVar20 = plVar10[-1];
          *param_1 = plVar10[-2];
          param_1[1] = lVar20;
        }
        param_4 = 0;
        plVar10[-2] = lVar8;
        plVar10[-1] = uVar7;
        param_3 = param_3 + -1;
        goto LAB__text__005a45e4;
      }
    }
    else {
      FUN__text__005a51b0(param_1,plVar10,param_2 + -2);
      plVar11 = param_1 + 2;
      FUN__text__005a51b0(plVar11,param_1 + uVar9 * 2 + -2,param_2 + -4);
      FUN__text__005a51b0(param_1 + 4,plVar11 + uVar9 * 2,param_2 + -6);
      FUN__text__005a51b0(param_1 + uVar9 * 2 + -2,plVar10,plVar11 + uVar9 * 2);
      lVar8 = *param_1;
      lVar20 = param_1[1];
      lVar2 = plVar10[1];
      *param_1 = *plVar10;
      param_1[1] = lVar2;
      *plVar10 = lVar8;
      plVar10[1] = lVar20;
      lVar8 = *param_1;
      if ((param_4 & 1) == 0) goto LAB__text__005a468c;
LAB__text__005a4720:
      uVar7 = param_1[1];
      uVar9 = *(ulong *)(lVar8 + 0xa0);
    }
    param_3 = param_3 + -1;
    lVar20 = 0;
    do {
      lVar2 = lVar20 + 0x10;
      uVar18 = *(ulong *)(*(long *)((long)param_1 + lVar20 + 0x10) + 0xa0);
      bVar3 = *(ulong *)((long)param_1 + lVar20 + 0x18) < uVar7;
      if (uVar18 != uVar9) {
        bVar3 = uVar18 < uVar9;
      }
      lVar20 = lVar2;
    } while (bVar3);
    plVar11 = (long *)((long)param_1 + lVar2);
    plVar10 = param_2;
    if (lVar2 == 0x10) {
      do {
        plVar16 = plVar10;
        if (plVar10 <= plVar11) break;
        plVar16 = plVar10 + -2;
        bVar3 = (ulong)plVar10[-1] < uVar7;
        if (*(ulong *)(*plVar16 + 0xa0) != uVar9) {
          bVar3 = *(ulong *)(*plVar16 + 0xa0) < uVar9;
        }
        plVar10 = plVar16;
      } while (!bVar3);
    }
    else {
      do {
        plVar16 = plVar10 + -2;
        bVar3 = (ulong)plVar10[-1] < uVar7;
        if (*(ulong *)(*plVar16 + 0xa0) != uVar9) {
          bVar3 = *(ulong *)(*plVar16 + 0xa0) < uVar9;
        }
        plVar10 = plVar16;
      } while (!bVar3);
    }
    plVar10 = plVar11;
    if (plVar11 < plVar16) {
      plVar12 = plVar16;
      do {
        lVar20 = *plVar10;
        lVar2 = plVar10[1];
        lVar14 = plVar12[1];
        *plVar10 = *plVar12;
        plVar10[1] = lVar14;
        *plVar12 = lVar20;
        plVar12[1] = lVar2;
        uVar9 = *(ulong *)(lVar8 + 0xa0);
        plVar21 = plVar10;
        do {
          plVar10 = plVar21 + 2;
          bVar3 = (ulong)plVar21[3] < uVar7;
          if (*(ulong *)(*plVar10 + 0xa0) != uVar9) {
            bVar3 = *(ulong *)(*plVar10 + 0xa0) < uVar9;
          }
          plVar13 = plVar12;
          plVar21 = plVar10;
        } while (bVar3);
        do {
          plVar12 = plVar13 + -2;
          bVar3 = (ulong)plVar13[-1] < uVar7;
          if (*(ulong *)(*plVar12 + 0xa0) != uVar9) {
            bVar3 = *(ulong *)(*plVar12 + 0xa0) < uVar9;
          }
          plVar13 = plVar12;
        } while (!bVar3);
      } while (plVar10 < plVar12);
    }
    plVar12 = plVar10 + -2;
    if (plVar12 != param_1) {
      lVar20 = plVar10[-1];
      *param_1 = *plVar12;
      param_1[1] = lVar20;
    }
    plVar10[-2] = lVar8;
    plVar10[-1] = uVar7;
    if (plVar11 < plVar16) goto LAB__text__005a4890;
    uVar7 = FUN__text__005a52c0(param_1,plVar12);
    uVar9 = FUN__text__005a52c0(plVar10,param_2);
    if ((uVar9 & 1) == 0) goto code_r0x005a488c;
    param_2 = plVar12;
    if ((uVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB__text__005a4b98:
  lVar20 = plVar11[2];
  uVar7 = plVar11[3];
  bVar3 = uVar7 < (ulong)plVar11[1];
  if (*(ulong *)(lVar20 + 0xa0) != *(ulong *)(*plVar11 + 0xa0)) {
    bVar3 = *(ulong *)(lVar20 + 0xa0) < *(ulong *)(*plVar11 + 0xa0);
  }
  if (bVar3) {
    lVar2 = lVar8;
    do {
      lVar14 = lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar14);
      puVar1[2] = *puVar1;
      puVar1[3] = puVar1[1];
      if (lVar14 == 0) {
        plVar11 = param_1;
        goto LAB__text__005a4b84;
      }
      bVar3 = uVar7 < (ulong)puVar1[-1];
      if (*(ulong *)(lVar20 + 0xa0) != *(ulong *)(puVar1[-2] + 0xa0)) {
        bVar3 = *(ulong *)(lVar20 + 0xa0) < *(ulong *)(puVar1[-2] + 0xa0);
      }
      lVar2 = lVar14 + -0x10;
    } while (bVar3);
    plVar11 = (long *)((long)param_1 + lVar14);
LAB__text__005a4b84:
    *plVar11 = lVar20;
    plVar11[1] = uVar7;
  }
  plVar16 = plVar10 + 2;
  lVar8 = lVar8 + 0x10;
  plVar11 = plVar10;
  plVar10 = plVar16;
  if (plVar16 == param_2) {
    return;
  }
  goto LAB__text__005a4b98;
LAB__text__005a4c3c:
  do {
    if ((long)uVar18 <= (long)uVar15) {
      uVar17 = uVar18 << 1 | 1;
      uVar19 = uVar18 * 2 + 2;
      plVar10 = param_1 + uVar17 * 2;
      if ((long)uVar19 < (long)uVar9) {
        lVar8 = plVar10[2];
        uVar4 = *(ulong *)(*plVar10 + 0xa0);
        uVar5 = *(ulong *)(lVar8 + 0xa0);
        bVar3 = (ulong)plVar10[1] < (ulong)plVar10[3];
        if (uVar4 != uVar5) {
          bVar3 = uVar4 < uVar5;
        }
        plVar11 = plVar10 + 2;
        if (!bVar3) {
          uVar19 = uVar17;
          plVar11 = plVar10;
          lVar8 = *plVar10;
        }
        plVar10 = plVar11;
        uVar17 = uVar19;
      }
      else {
        lVar8 = *plVar10;
      }
      plVar11 = param_1 + uVar18 * 2;
      lVar20 = *plVar11;
      uVar19 = plVar11[1];
      bVar3 = (ulong)plVar10[1] < uVar19;
      if (*(ulong *)(lVar8 + 0xa0) != *(ulong *)(lVar20 + 0xa0)) {
        bVar3 = *(ulong *)(lVar8 + 0xa0) < *(ulong *)(lVar20 + 0xa0);
      }
      if (!bVar3) {
        do {
          plVar16 = plVar10;
          lVar8 = plVar16[1];
          *plVar11 = *plVar16;
          plVar11[1] = lVar8;
          if ((long)uVar15 < (long)uVar17) break;
          lVar8 = uVar17 * 2;
          uVar17 = uVar17 << 1 | 1;
          uVar4 = lVar8 + 2;
          plVar10 = param_1 + uVar17 * 2;
          if ((long)uVar4 < (long)uVar9) {
            uVar5 = *(ulong *)(*plVar10 + 0xa0);
            plVar11 = plVar10 + 2;
            uVar6 = *(ulong *)(*plVar11 + 0xa0);
            bVar3 = uVar6 <= uVar5;
            if (uVar5 == uVar6) {
              bVar3 = (ulong)plVar10[3] <= (ulong)plVar10[1];
            }
            if (bVar3) {
              uVar4 = *(ulong *)(*plVar10 + 0xa0);
              bVar3 = *(ulong *)(lVar20 + 0xa0) <= uVar4;
              if (uVar4 == *(ulong *)(lVar20 + 0xa0)) goto LAB__text__005a4da4;
            }
            else {
              uVar5 = *(ulong *)(*plVar11 + 0xa0);
              bVar3 = *(ulong *)(lVar20 + 0xa0) <= uVar5;
              uVar17 = uVar4;
              plVar10 = plVar11;
              if (uVar5 == *(ulong *)(lVar20 + 0xa0)) {
LAB__text__005a4da4:
                bVar3 = uVar19 <= (ulong)plVar10[1];
              }
            }
          }
          else {
            bVar3 = *(ulong *)(lVar20 + 0xa0) <= *(ulong *)(*plVar10 + 0xa0);
            if (*(ulong *)(*plVar10 + 0xa0) == *(ulong *)(lVar20 + 0xa0)) goto LAB__text__005a4da4;
          }
          plVar11 = plVar16;
        } while (bVar3);
        *plVar16 = lVar20;
        plVar16[1] = uVar19;
      }
    }
    bVar3 = uVar18 != 0;
    uVar18 = uVar18 - 1;
  } while (bVar3);
  uVar7 = uVar7 >> 4;
  do {
    lVar8 = *param_1;
    lVar20 = param_1[1];
    plVar10 = param_1;
    uVar9 = 0;
    do {
      uVar15 = uVar9 << 1 | 1;
      uVar18 = uVar9 * 2 + 2;
      plVar11 = plVar10 + uVar9 * 2 + 2;
      if ((long)uVar18 < (long)uVar7) {
        uVar19 = *(ulong *)(plVar10[uVar9 * 2 + 4] + 0xa0);
        bVar3 = uVar19 <= *(ulong *)(*plVar11 + 0xa0);
        if (*(ulong *)(*plVar11 + 0xa0) == uVar19) {
          bVar3 = (ulong)plVar10[uVar9 * 2 + 5] <= (ulong)plVar10[uVar9 * 2 + 3];
        }
        if (!bVar3) {
          plVar11 = plVar10 + uVar9 * 2 + 4;
          uVar15 = uVar18;
        }
      }
      lVar2 = plVar11[1];
      *plVar10 = *plVar11;
      plVar10[1] = lVar2;
      plVar10 = plVar11;
      uVar9 = uVar15;
    } while ((long)uVar15 <= (long)(uVar7 - 2 >> 1));
    plVar10 = param_2 + -2;
    if (plVar11 == plVar10) {
      *plVar11 = lVar8;
      plVar11[1] = lVar20;
    }
    else {
      lVar2 = param_2[-1];
      *plVar11 = *plVar10;
      plVar11[1] = lVar2;
      *plVar10 = lVar8;
      param_2[-1] = lVar20;
      uVar9 = (long)plVar11 + (0x10 - (long)param_1);
      if (0x10 < (long)uVar9) {
        lVar8 = *plVar11;
        uVar18 = plVar11[1];
        uVar9 = (uVar9 >> 4) - 2 >> 1;
        plVar16 = param_1 + uVar9 * 2;
        bVar3 = (ulong)plVar16[1] < uVar18;
        if (*(ulong *)(*plVar16 + 0xa0) != *(ulong *)(lVar8 + 0xa0)) {
          bVar3 = *(ulong *)(*plVar16 + 0xa0) < *(ulong *)(lVar8 + 0xa0);
        }
        if (bVar3) {
          do {
            plVar12 = plVar16;
            lVar20 = plVar12[1];
            *plVar11 = *plVar12;
            plVar11[1] = lVar20;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            plVar16 = param_1 + uVar9 * 2;
            bVar3 = (ulong)plVar16[1] < uVar18;
            if (*(ulong *)(*plVar16 + 0xa0) != *(ulong *)(lVar8 + 0xa0)) {
              bVar3 = *(ulong *)(*plVar16 + 0xa0) < *(ulong *)(lVar8 + 0xa0);
            }
            plVar11 = plVar12;
          } while (bVar3);
          *plVar12 = lVar8;
          plVar12[1] = uVar18;
        }
      }
    }
    bVar3 = (long)uVar7 < 3;
    uVar7 = uVar7 - 1;
    param_2 = plVar10;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x005a488c:
  if ((uVar7 & 1) == 0) {
LAB__text__005a4890:
    FUN__text__005a45a0(param_1,plVar12,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB__text__005a45e4;
}


