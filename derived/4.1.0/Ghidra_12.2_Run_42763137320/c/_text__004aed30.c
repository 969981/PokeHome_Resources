/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aed30; name: FUN_.text__004aed30
 */


undefined8
FUN__text__004aed30(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
                   undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10,
                   byte param_11)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  
  uVar10 = 0x1f;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    *param_5 = 0;
    *param_6 = 0;
    if (0xb < param_2) {
      if (*param_1 == 0x5367674f) {
        return 1;
      }
      if ((*param_1 == 0x46464952) && (param_1[2] == 0x45564157)) {
        uVar11 = (ulong)param_2 - 0xc;
        if ((uVar11 & 0xfffffff8) == 0) {
          return 8;
        }
        bVar9 = false;
        bVar8 = false;
        piVar2 = (int *)((long)param_1 + (ulong)param_2);
        piVar13 = param_1 + 3;
LAB__text__004aee64:
        iVar4 = *piVar13;
        uVar5 = piVar13[1];
        if ((int)uVar11 - 8U < uVar5 && iVar4 != 0x61746164) {
          return 8;
        }
        piVar1 = piVar13 + 2;
        if (iVar4 < 0x61746164) {
          if (0x20746d65 < iVar4) {
            if (iVar4 == 0x20746d66) {
              if (!bVar9) {
                *(int **)(param_3 + 2) = piVar1;
                *param_3 = uVar5;
                if (((param_11 & 1) == 0) &&
                   ((uVar6 = piVar13[7], 0x200 < (uVar6 & 0xf00) ||
                    ((uVar6 & 0xff) != (uint)*(ushort *)((long)piVar13 + 10))))) {
                  uVar7 = uVar6 - (uVar6 >> 1 & 0x55555555);
                  uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
                  piVar13[7] = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar6 << 0xc
                               | 0x100;
                }
                bVar9 = true;
              }
              goto LAB__text__004af130;
            }
            if (iVar4 != 0x5453494c) goto LAB__text__004af130;
            piVar13 = piVar13 + 3;
            goto LAB__text__004aee54;
          }
          if (iVar4 == 0x20646b61) {
            if (param_9 != (uint *)0x0) {
              *param_9 = uVar5;
              *(int **)(param_9 + 2) = piVar1;
            }
          }
          else {
            if (iVar4 != 0x20657563) goto LAB__text__004af130;
            if (!bVar9) goto LAB__text__004af164;
            if ((param_4 != (uint *)0x0) && (!bVar8)) {
              if (*piVar1 != 0) {
                uVar10 = FUN__text__004af1ac(param_4);
                if ((int)uVar10 != 1) {
                  return uVar10;
                }
                if (*param_4 != 0) {
                  lVar12 = 0;
                  uVar11 = 0;
                  piVar13 = piVar13 + 3;
                  do {
                    iVar4 = piVar13[1];
                    uVar11 = uVar11 + 1;
                    *(int *)(*(long *)(param_4 + 2) + lVar12) = *piVar13;
                    *(int *)(*(long *)(param_4 + 2) + lVar12 + 4) = iVar4;
                    lVar3 = *(long *)(param_4 + 2) + lVar12;
                    lVar12 = lVar12 + 0x10;
                    *(undefined8 *)(lVar3 + 8) = 0;
                    piVar13 = piVar13 + 6;
                  } while (uVar11 < *param_4);
                }
                FUN__text__004af290(param_4);
              }
              bVar8 = true;
            }
          }
        }
        else if (iVar4 < 0x6c62616c) {
          if (iVar4 == 0x6b656573) {
            if (param_10 != (uint *)0x0) {
              *(int **)(param_10 + 2) = piVar1;
              *param_10 = uVar5;
            }
          }
          else if (iVar4 == 0x61746164) {
            if (bVar9) {
              *param_7 = uVar5;
              *param_8 = (int)piVar1 - (int)param_1;
              return 1;
            }
            goto LAB__text__004af164;
          }
        }
        else if (iVar4 == 0x6c62616c) {
          if (((param_4 != (uint *)0x0) && (bVar8)) && (*param_4 != 0)) {
            uVar11 = 0;
            piVar14 = *(int **)(param_4 + 2);
            do {
              if (*piVar14 == *piVar1) {
                FUN__text__004af308(param_4,uVar11,piVar13 + 3,uVar5 - 4);
                break;
              }
              uVar11 = uVar11 + 1;
              piVar14 = piVar14 + 4;
            } while (*param_4 != uVar11);
          }
        }
        else if ((iVar4 == 0x6c706d73) && (piVar13[9] != 0)) {
          uVar6 = piVar13[10];
          *param_5 = *(undefined4 *)((long)piVar13 + (ulong)uVar6 + 0x34);
          *param_6 = *(undefined4 *)((long)piVar13 + (ulong)uVar6 + 0x38);
        }
LAB__text__004af130:
        piVar13 = (int *)((long)piVar1 + (ulong)uVar5);
        if ((((uVar5 & 1) != 0) && ((char)*piVar13 == '\0')) &&
           (piVar13 = (int *)((long)piVar13 + 1), piVar2 < piVar13)) goto LAB__text__004af164;
LAB__text__004aee54:
        uVar11 = (long)piVar2 - (long)piVar13;
        if ((uVar11 & 0xfffffff8) == 0) {
          return 8;
        }
        goto LAB__text__004aee64;
      }
    }
LAB__text__004af164:
    uVar10 = 7;
  }
  return uVar10;
}


