/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5f30; name: FUN_.text__003b5f30
 */


undefined8 FUN__text__003b5f30(long param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  double dVar28;
  double __x;
  
  iVar19 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar18 = *(int *)(param_1 + 0xc);
    iVar16 = 0;
    if (iVar18 != 0) {
      iVar16 = iVar19 / iVar18;
    }
    iVar17 = iVar19 - iVar16 * iVar18;
  }
  else {
    iVar18 = *(int *)(param_1 + 0xc);
    iVar16 = *(int *)(param_1 + 0x10);
    iVar17 = 0;
    if (iVar16 != 0) {
      iVar17 = iVar19 / iVar16;
    }
    iVar16 = iVar19 - iVar17 * iVar16;
  }
  iVar19 = *param_2;
  if (((iVar18 != 1) || (iVar19 == 0)) &&
     ((iVar18 = param_2[1], *(int *)(param_1 + 0x10) != 1 || (iVar18 == 0)))) {
    iVar1 = -iVar19;
    if (-1 < iVar19) {
      iVar1 = iVar19;
    }
    iVar20 = -iVar18;
    if (-1 < iVar18) {
      iVar20 = iVar18;
    }
    __x = (double)(iVar19 * iVar19 + iVar18 * iVar18);
    dVar28 = SQRT(__x);
    if (NAN(dVar28)) {
      dVar28 = sqrt(__x);
    }
    iVar21 = (int)dVar28;
    iVar11 = *param_2;
    iVar18 = 0;
    iVar19 = 0;
    piVar2 = (int *)(param_1 + 0x18);
    if (iVar11 != 0) {
      piVar2 = (int *)(param_1 + 0x14);
    }
    iVar5 = *piVar2;
    iVar12 = 1;
    iVar8 = 0;
    if (iVar21 != 0) {
      iVar8 = param_2[1] / iVar21;
    }
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x40) +
                      (ulong)*(uint *)(param_1 + 8) * 0x10);
    if (iVar1 <= iVar20) {
      iVar1 = iVar20;
    }
    *param_3 = 0;
    iVar20 = iVar8 + -1;
    iVar9 = 0;
    if (iVar21 != 0) {
      iVar9 = iVar11 / iVar21;
    }
    iVar14 = iVar16;
    iVar22 = iVar17;
    iVar11 = iVar8;
    iVar21 = iVar17;
    do {
      iVar21 = iVar21 + iVar9;
      iVar15 = iVar16 + iVar11;
      iVar23 = iVar21;
      if ((((iVar21 < 0) || (*(int *)(param_1 + 0xc) <= iVar21)) || (iVar15 < 0)) ||
         (*(int *)(param_1 + 0x10) <= iVar15)) {
        if (iVar5 == 1) {
          uVar3 = *(uint *)(param_1 + 0xc);
          uVar4 = *(uint *)(param_1 + 0x10);
          *param_3 = 1;
          iVar23 = (uVar3 & iVar21 >> 0x1f) + iVar21;
          iVar6 = 0;
          if (uVar3 != 0) {
            iVar6 = iVar23 / (int)uVar3;
          }
          iVar23 = iVar23 - iVar6 * uVar3;
          if (iVar23 < 0) break;
          iVar15 = iVar15 + (uVar4 & iVar15 >> 0x1f);
          iVar6 = 0;
          if (uVar4 != 0) {
            iVar6 = iVar15 / (int)uVar4;
          }
          iVar15 = iVar15 - iVar6 * uVar4;
          if (iVar15 < 0) break;
LAB__text__003b6204:
          iVar6 = *(int *)(param_1 + 0x1c);
          lVar25 = *(long *)(*(long *)(param_1 + 0x40) + 0x40);
        }
        else {
          if (iVar5 != 2) {
            if (iVar5 != 0) goto LAB__text__003b6204;
            iVar17 = iVar22;
            iVar16 = iVar14;
            break;
          }
          iVar6 = *(int *)(param_1 + 0xc);
          iVar7 = iVar16 + iVar12 * iVar8;
          if (iVar21 < 0) {
            iVar15 = 0;
            if (iVar6 != 0) {
              iVar15 = (iVar21 + iVar6) / iVar6;
            }
            iVar10 = -iVar15;
            if (-1 < iVar15) {
              iVar10 = iVar15;
            }
            iVar15 = (iVar16 + iVar20) - iVar10;
            iVar6 = (iVar10 + 1) * iVar6;
            if (iVar15 < 0) {
              *param_3 = 1;
              iVar24 = *(int *)(param_1 + 0x10);
              iVar23 = iVar6 + iVar17 + iVar12 * iVar9;
              iVar15 = 0;
              if (iVar24 != 0) {
                iVar15 = (iVar16 + iVar20 + (iVar24 - iVar10)) / iVar24;
              }
              iVar6 = -iVar15;
              if (-1 < iVar15) {
                iVar6 = iVar15;
              }
              iVar15 = iVar24 + iVar24 * iVar6 + (iVar7 - (iVar10 + 1));
joined_r0x003b61e0:
              if (iVar15 < 0) goto LAB__text__003b61e4;
            }
            else {
              iVar24 = *(int *)(param_1 + 0x10);
              iVar23 = iVar21 + iVar6;
            }
LAB__text__003b616c:
            if (iVar24 <= iVar15) {
              iVar6 = 0;
              if (iVar24 != 0) {
                iVar6 = iVar15 / iVar24;
              }
              iVar23 = iVar6 + iVar23;
              iVar15 = iVar15 - iVar6 * iVar24;
              if (*(int *)(param_1 + 0xc) <= iVar23) {
                *param_3 = 1;
                iVar6 = *(int *)(param_1 + 0xc);
                iVar7 = 0;
                if (iVar6 != 0) {
                  iVar7 = iVar23 / iVar6;
                }
                iVar23 = iVar23 - iVar7 * iVar6;
                iVar6 = *(int *)(param_1 + 0x1c);
                lVar25 = *(long *)(*(long *)(param_1 + 0x40) + 0x40);
                goto joined_r0x003b61a8;
              }
            }
            goto LAB__text__003b6204;
          }
          iVar24 = *(int *)(param_1 + 0x10);
          if (iVar6 <= iVar21) {
            iVar10 = 0;
            if (iVar6 != 0) {
              iVar10 = iVar21 / iVar6;
            }
            iVar15 = iVar15 + iVar10;
            iVar23 = iVar21 - iVar10 * iVar6;
            if (iVar24 <= iVar15) {
              *param_3 = 1;
              iVar24 = *(int *)(param_1 + 0x10);
              iVar6 = 0;
              if (iVar24 != 0) {
                iVar6 = iVar15 / iVar24;
              }
              iVar15 = iVar15 - iVar6 * iVar24;
              goto joined_r0x003b61e0;
            }
            iVar15 = iVar10 + iVar7;
          }
          if (-1 < iVar15) goto LAB__text__003b616c;
LAB__text__003b61e4:
          iVar6 = 0;
          if (iVar24 != 0) {
            iVar6 = (iVar24 + iVar15) / iVar24;
          }
          iVar7 = -iVar6;
          if (-1 < iVar6) {
            iVar7 = iVar6;
          }
          iVar15 = iVar15 + (iVar7 + 1) * iVar24;
          iVar23 = iVar23 - (iVar7 + 1);
          if (-1 < iVar23) goto LAB__text__003b6204;
          *param_3 = 1;
          iVar6 = *(int *)(param_1 + 0xc);
          iVar7 = 0;
          if (iVar6 != 0) {
            iVar7 = (iVar6 + iVar23) / iVar6;
          }
          iVar24 = -iVar7;
          if (-1 < iVar7) {
            iVar24 = iVar7;
          }
          iVar23 = iVar6 + iVar23 + iVar6 * iVar24;
          iVar6 = *(int *)(param_1 + 0x1c);
          lVar25 = *(long *)(*(long *)(param_1 + 0x40) + 0x40);
        }
joined_r0x003b61a8:
        if (iVar6 == 0) goto LAB__text__003b6270;
LAB__text__003b6214:
        uVar26 = (ulong)(uint)(iVar15 + *(int *)(param_1 + 0x10) * iVar23);
        lVar27 = *(long *)(lVar25 + uVar26 * 0x10);
        if ((lVar27 != lVar13 && lVar27 != 0) && ((*(byte *)(lVar25 + uVar26 * 0x10 + 8) & 1) != 0))
        {
          iVar19 = iVar19 + 1;
          lVar13 = *(long *)(lVar25 + (ulong)(uint)(iVar15 + *(int *)(param_1 + 0x10) * iVar23) *
                                      0x10);
          iVar22 = iVar23;
          iVar14 = iVar15;
        }
      }
      else {
        lVar25 = *(long *)(*(long *)(param_1 + 0x40) + 0x40);
        if (*(int *)(param_1 + 0x1c) != 0) goto LAB__text__003b6214;
LAB__text__003b6270:
        uVar26 = (ulong)(uint)(iVar23 + *(int *)(param_1 + 0xc) * iVar15);
        lVar27 = *(long *)(lVar25 + uVar26 * 0x10);
        if ((lVar27 != lVar13 && lVar27 != 0) && ((*(byte *)(lVar25 + uVar26 * 0x10 + 8) & 1) != 0))
        {
          iVar19 = iVar19 + 1;
          lVar13 = *(long *)(lVar25 + (ulong)(uint)(iVar23 + *(int *)(param_1 + 0xc) * iVar15) *
                                      0x10);
          iVar22 = iVar23;
          iVar14 = iVar15;
        }
      }
      if (iVar1 <= iVar19) goto LAB__text__003b5fa4;
      iVar18 = iVar18 + 1;
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + iVar8;
      iVar20 = iVar20 + iVar8;
    } while (iVar18 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc));
  }
  *param_3 = 2;
  iVar22 = iVar17;
  iVar14 = iVar16;
LAB__text__003b5fa4:
  return CONCAT44(iVar14,iVar22);
}


