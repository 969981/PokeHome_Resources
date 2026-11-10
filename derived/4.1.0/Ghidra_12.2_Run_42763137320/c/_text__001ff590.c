/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ff590; name: FUN_.text__001ff590
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__001ff590(uint *param_1,uint *param_2,long param_3,long param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
LAB__text__001ff5bc:
  puVar15 = param_1;
LAB__text__001ff5c0:
  while( true ) {
    param_1 = puVar15;
    uVar16 = (long)param_2 - (long)param_1;
    uVar8 = (long)uVar16 >> 2;
    if (uVar8 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x001ffb70 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__001ffb7c + (ulong)*(ushort *)(uVar8 * 2 + 0x726f1a) * 4))();
      return;
    }
    if ((long)uVar16 < 0x60) {
      puVar15 = param_1 + 1;
      if ((param_5 & 1) == 0) {
        if (!(param_1 == param_2 || puVar15 == param_2)) {
          do {
            puVar14 = puVar15;
            uVar8 = (ulong)*param_1;
            uVar10 = param_1[1];
            if (*(uint *)(param_3 + (ulong)uVar10 * 4) < *(uint *)(param_3 + uVar8 * 4)) {
              puVar15 = puVar14;
              do {
                *puVar15 = (uint)uVar8;
                uVar8 = (ulong)puVar15[-2];
                puVar15 = puVar15 + -1;
              } while (*(uint *)(param_3 + (ulong)uVar10 * 4) < *(uint *)(param_3 + uVar8 * 4));
              *puVar15 = uVar10;
            }
            puVar15 = puVar14 + 1;
            param_1 = puVar14;
          } while (puVar14 + 1 != param_2);
          return;
        }
        return;
      }
      if (param_1 == param_2 || puVar15 == param_2) {
        return;
      }
      lVar9 = 0;
      puVar14 = param_1;
      goto LAB__text__001ffc98;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar13 = uVar8 - 2 >> 1;
      uVar21 = uVar13;
      goto LAB__text__001ffd10;
    }
    uVar10 = param_2[-1];
    puVar15 = param_1 + (uVar8 >> 1);
    uVar6 = *(uint *)(param_3 + (ulong)uVar10 * 4);
    if (0x200 < uVar16) break;
    uVar4 = *param_1;
    uVar5 = *puVar15;
    uVar7 = *(uint *)(param_3 + (ulong)uVar4 * 4);
    if (uVar7 < *(uint *)(param_3 + (ulong)uVar5 * 4)) {
      if (uVar6 < uVar7) {
        *puVar15 = uVar10;
      }
      else {
        *puVar15 = uVar4;
        *param_1 = uVar5;
        if (*(uint *)(param_3 + (ulong)uVar5 * 4) <= *(uint *)(param_3 + (ulong)param_2[-1] * 4))
        goto LAB__text__001ff770;
        *param_1 = param_2[-1];
      }
      param_2[-1] = uVar5;
    }
    else if (uVar6 < uVar7) {
      *param_1 = uVar10;
      param_2[-1] = uVar4;
      uVar10 = *puVar15;
      if (*(uint *)(param_3 + (ulong)*param_1 * 4) < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
        *puVar15 = *param_1;
        *param_1 = uVar10;
        goto joined_r0x001ffa6c;
      }
    }
LAB__text__001ff770:
    uVar8 = (ulong)*param_1;
    if ((param_5 & 1) != 0) goto LAB__text__001ff77c;
LAB__text__001ff8e0:
    uVar10 = *(uint *)(param_3 + uVar8 * 4);
    if (*(uint *)(param_3 + (ulong)param_1[-1] * 4) < uVar10) goto LAB__text__001ff8f4;
    puVar15 = param_1;
    if (uVar10 < *(uint *)(param_3 + (ulong)param_2[-1] * 4)) {
      do {
        puVar15 = puVar15 + 1;
      } while (*(uint *)(param_3 + (ulong)*puVar15 * 4) <= uVar10);
    }
    else {
      do {
        puVar15 = puVar15 + 1;
        if (param_2 <= puVar15) break;
      } while (*(uint *)(param_3 + (ulong)*puVar15 * 4) <= uVar10);
    }
    puVar14 = param_2;
    if (puVar15 < param_2) {
      do {
        puVar14 = puVar14 + -1;
      } while (uVar10 < *(uint *)(param_3 + (ulong)*puVar14 * 4));
    }
    if (puVar15 < puVar14) {
      uVar16 = (ulong)*puVar15;
      uVar21 = (ulong)*puVar14;
      do {
        *puVar15 = (uint)uVar21;
        *puVar14 = (uint)uVar16;
        uVar10 = *(uint *)(param_3 + uVar8 * 4);
        do {
          puVar15 = puVar15 + 1;
          uVar16 = (ulong)*puVar15;
        } while (*(uint *)(param_3 + uVar16 * 4) <= uVar10);
        do {
          puVar14 = puVar14 + -1;
          uVar21 = (ulong)*puVar14;
        } while (uVar10 < *(uint *)(param_3 + uVar21 * 4));
      } while (puVar15 < puVar14);
    }
    puVar14 = puVar15 + -1;
    if (puVar14 != param_1) {
      *param_1 = *puVar14;
    }
    param_5 = 0;
    *puVar14 = (uint)uVar8;
    param_4 = param_4 + -1;
  }
  uVar4 = *puVar15;
  uVar5 = *param_1;
  uVar7 = *(uint *)(param_3 + (ulong)uVar4 * 4);
  if (uVar7 < *(uint *)(param_3 + (ulong)uVar5 * 4)) {
    if (uVar6 < uVar7) {
      *param_1 = uVar10;
    }
    else {
      *param_1 = uVar4;
      *puVar15 = uVar5;
      if (*(uint *)(param_3 + (ulong)uVar5 * 4) <= *(uint *)(param_3 + (ulong)param_2[-1] * 4))
      goto LAB__text__001ff6e4;
      *puVar15 = param_2[-1];
    }
    param_2[-1] = uVar5;
  }
  else if (uVar6 < uVar7) {
    *puVar15 = uVar10;
    param_2[-1] = uVar4;
    uVar10 = *param_1;
    if (*(uint *)(param_3 + (ulong)*puVar15 * 4) < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
      *param_1 = *puVar15;
      *puVar15 = uVar10;
    }
  }
LAB__text__001ff6e4:
  uVar10 = param_1[1];
  uVar6 = param_2[-2];
  puVar14 = puVar15 + -1;
  uVar4 = *puVar14;
  uVar5 = *(uint *)(param_3 + (ulong)uVar6 * 4);
  uVar7 = *(uint *)(param_3 + (ulong)uVar4 * 4);
  if (uVar7 < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
    if (uVar5 < uVar7) {
      param_1[1] = uVar6;
    }
    else {
      param_1[1] = uVar4;
      *puVar14 = uVar10;
      if (*(uint *)(param_3 + (ulong)uVar10 * 4) <= *(uint *)(param_3 + (ulong)param_2[-2] * 4))
      goto LAB__text__001ff7a8;
      *puVar14 = param_2[-2];
    }
    param_2[-2] = uVar10;
  }
  else if (uVar5 < uVar7) {
    *puVar14 = uVar6;
    param_2[-2] = uVar4;
    uVar10 = param_1[1];
    if (*(uint *)(param_3 + (ulong)*puVar14 * 4) < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
      param_1[1] = *puVar14;
      *puVar14 = uVar10;
    }
  }
LAB__text__001ff7a8:
  puVar11 = puVar15 + 1;
  uVar4 = *puVar11;
  uVar10 = param_1[2];
  uVar6 = param_2[-3];
  uVar5 = *(uint *)(param_3 + (ulong)uVar4 * 4);
  uVar7 = *(uint *)(param_3 + (ulong)uVar6 * 4);
  if (uVar5 < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
    if (uVar7 < uVar5) {
      param_1[2] = uVar6;
    }
    else {
      param_1[2] = uVar4;
      *puVar11 = uVar10;
      if (*(uint *)(param_3 + (ulong)uVar10 * 4) <= *(uint *)(param_3 + (ulong)param_2[-3] * 4))
      goto LAB__text__001ff830;
      *puVar11 = param_2[-3];
    }
    param_2[-3] = uVar10;
  }
  else if (uVar7 < uVar5) {
    *puVar11 = uVar6;
    param_2[-3] = uVar4;
    uVar10 = param_1[2];
    if (*(uint *)(param_3 + (ulong)*puVar11 * 4) < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
      param_1[2] = *puVar11;
      *puVar11 = uVar10;
    }
  }
LAB__text__001ff830:
  uVar10 = *puVar15;
  uVar6 = *puVar14;
  uVar8 = (ulong)uVar6;
  uVar4 = *puVar11;
  uVar16 = (ulong)uVar4;
  uVar5 = *(uint *)(param_3 + (ulong)uVar10 * 4);
  uVar7 = *(uint *)(param_3 + uVar16 * 4);
  if (uVar5 < *(uint *)(param_3 + uVar8 * 4)) {
    if (uVar5 <= uVar7) {
      *puVar14 = uVar10;
      *puVar15 = uVar6;
      puVar14 = puVar15;
      uVar10 = uVar4;
      if (*(uint *)(param_3 + uVar8 * 4) <= *(uint *)(param_3 + uVar16 * 4)) {
        uVar10 = *param_1;
        *param_1 = uVar6;
        *puVar15 = uVar10;
        uVar10 = *param_1;
        goto joined_r0x001ffa6c;
      }
    }
LAB__text__001ff8c0:
    *puVar14 = uVar4;
    *puVar11 = uVar6;
LAB__text__001ff8c8:
    uVar6 = *param_1;
    *param_1 = uVar10;
    *puVar15 = uVar6;
    uVar10 = *param_1;
  }
  else {
    if (uVar5 <= uVar7) goto LAB__text__001ff8c8;
    *puVar15 = uVar4;
    *puVar11 = uVar10;
    puVar11 = puVar15;
    uVar10 = uVar6;
    if (*(uint *)(param_3 + uVar16 * 4) < *(uint *)(param_3 + uVar8 * 4)) goto LAB__text__001ff8c0;
    uVar10 = *param_1;
    *param_1 = uVar4;
    *puVar15 = uVar10;
    uVar10 = *param_1;
  }
joined_r0x001ffa6c:
  uVar8 = (ulong)uVar10;
  if ((param_5 & 1) == 0) goto LAB__text__001ff8e0;
LAB__text__001ff77c:
  uVar10 = *(uint *)(param_3 + uVar8 * 4);
LAB__text__001ff8f4:
  param_4 = param_4 + -1;
  lVar9 = 0;
  do {
    lVar2 = lVar9 + 4;
    uVar16 = (ulong)*(uint *)((long)param_1 + lVar9 + 4);
    lVar9 = lVar2;
  } while (*(uint *)(param_3 + uVar16 * 4) < uVar10);
  puVar15 = (uint *)((long)param_1 + lVar2);
  puVar14 = param_2;
  if (lVar2 == 4) {
    do {
      if (puVar14 <= puVar15) break;
      puVar14 = puVar14 + -1;
    } while (uVar10 <= *(uint *)(param_3 + (ulong)*puVar14 * 4));
  }
  else {
    do {
      puVar14 = puVar14 + -1;
    } while (uVar10 <= *(uint *)(param_3 + (ulong)*puVar14 * 4));
  }
  if (puVar15 < puVar14) {
    uVar21 = (ulong)*puVar14;
    puVar12 = puVar15;
    puVar18 = puVar14;
    do {
      *puVar12 = (uint)uVar21;
      *puVar18 = (uint)uVar16;
      uVar10 = *(uint *)(param_3 + uVar8 * 4);
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar16 = (ulong)*puVar12;
      } while (*(uint *)(param_3 + uVar16 * 4) < uVar10);
      do {
        puVar18 = puVar18 + -1;
        uVar21 = (ulong)*puVar18;
      } while (uVar10 <= *(uint *)(param_3 + uVar21 * 4));
    } while (puVar12 < puVar18);
  }
  else {
    puVar11 = puVar15 + -1;
  }
  if (puVar11 != param_1) {
    *param_1 = *puVar11;
  }
  *puVar11 = (uint)uVar8;
  if (puVar14 <= puVar15) {
    uVar8 = FUN__text__00200310(param_1,puVar11,param_3);
    uVar16 = FUN__text__00200310(puVar11 + 1,param_2,param_3);
    if ((uVar16 & 1) != 0) goto LAB__text__001ffb58;
    puVar15 = puVar11 + 1;
    if ((uVar8 & 1) != 0) goto LAB__text__001ff5c0;
  }
  FUN__text__001ff590(param_1,puVar11,param_3,param_4,param_5 & 1);
  param_5 = 0;
  puVar15 = puVar11 + 1;
  goto LAB__text__001ff5c0;
LAB__text__001ffc98:
  uVar8 = (ulong)*puVar14;
  uVar10 = puVar14[1];
  if (*(uint *)(param_3 + (ulong)uVar10 * 4) < *(uint *)(param_3 + uVar8 * 4)) {
    lVar2 = lVar9;
    do {
      lVar17 = lVar2;
      *(int *)((long)param_1 + lVar17 + 4) = (int)uVar8;
      if (lVar17 == 0) {
        puVar14 = param_1;
        goto LAB__text__001ffc84;
      }
      uVar8 = (ulong)*(uint *)((long)param_1 + lVar17 + -4);
      lVar2 = lVar17 + -4;
    } while (*(uint *)(param_3 + (ulong)uVar10 * 4) < *(uint *)(param_3 + uVar8 * 4));
    puVar14 = (uint *)((long)param_1 + lVar17);
LAB__text__001ffc84:
    *puVar14 = uVar10;
  }
  puVar11 = puVar15 + 1;
  lVar9 = lVar9 + 4;
  puVar14 = puVar15;
  puVar15 = puVar11;
  if (puVar11 == param_2) {
    return;
  }
  goto LAB__text__001ffc98;
LAB__text__001ffd10:
  if ((long)uVar21 <= (long)uVar13) {
    uVar19 = uVar21 << 1 | 1;
    uVar3 = uVar21 * 2 + 2;
    puVar15 = param_1 + uVar19;
    if ((long)uVar3 < (long)uVar8) {
      uVar22 = (ulong)puVar15[1];
      puVar14 = puVar15 + 1;
      if (*(uint *)(param_3 + uVar22 * 4) <= *(uint *)(param_3 + (ulong)*puVar15 * 4)) {
        uVar3 = uVar19;
        puVar14 = puVar15;
        uVar22 = (ulong)*puVar15;
      }
      uVar20 = (ulong)param_1[uVar21];
      puVar15 = puVar14;
      uVar19 = uVar3;
      puVar14 = param_1 + uVar21;
      if (*(uint *)(param_3 + uVar20 * 4) <= *(uint *)(param_3 + uVar22 * 4))
      goto LAB__text__001ffdc8;
    }
    else {
      uVar22 = (ulong)*puVar15;
      puVar14 = param_1 + uVar21;
      uVar20 = (ulong)*puVar14;
      if (*(uint *)(param_3 + uVar20 * 4) <= *(uint *)(param_3 + uVar22 * 4)) {
LAB__text__001ffdc8:
        do {
          while( true ) {
            puVar11 = puVar15;
            *puVar14 = (uint)uVar22;
            if ((long)uVar13 < (long)uVar19) goto LAB__text__001ffd00;
            uVar3 = uVar19 << 1 | 1;
            uVar19 = uVar19 * 2 + 2;
            puVar12 = param_1 + uVar3;
            puVar14 = puVar11;
            if ((long)uVar19 < (long)uVar8) break;
            uVar22 = (ulong)*puVar12;
            puVar15 = puVar12;
            uVar19 = uVar3;
            if (*(uint *)(param_3 + uVar22 * 4) < *(uint *)(param_3 + uVar20 * 4))
            goto LAB__text__001ffd00;
          }
          uVar22 = (ulong)puVar12[1];
          puVar15 = puVar12 + 1;
          if (*(uint *)(param_3 + uVar22 * 4) <= *(uint *)(param_3 + (ulong)*puVar12 * 4)) {
            uVar19 = uVar3;
            puVar15 = puVar12;
            uVar22 = (ulong)*puVar12;
          }
        } while (*(uint *)(param_3 + uVar20 * 4) <= *(uint *)(param_3 + uVar22 * 4));
LAB__text__001ffd00:
        *puVar11 = (uint)uVar20;
      }
    }
  }
  bVar1 = (long)uVar21 < 1;
  uVar21 = uVar21 - 1;
  if (bVar1) {
    uVar8 = uVar16 >> 2;
    do {
      uVar10 = *param_1;
      uVar21 = uVar8 - 2 >> 1;
      puVar15 = param_1;
      uVar16 = 0;
      do {
        while( true ) {
          uVar3 = uVar16 << 1 | 1;
          uVar13 = uVar16 * 2 + 2;
          puVar14 = puVar15 + uVar16 + 1;
          if ((long)uVar13 < (long)uVar8) break;
          *puVar15 = *puVar14;
          puVar15 = puVar14;
          uVar16 = uVar3;
          if ((long)uVar21 < (long)uVar3) goto LAB__text__001ffebc;
        }
        lVar9 = uVar16 + 2;
        uVar6 = puVar15[lVar9];
        uVar16 = uVar13;
        puVar11 = puVar15 + lVar9;
        if (*(uint *)(param_3 + (ulong)uVar6 * 4) <= *(uint *)(param_3 + (ulong)*puVar14 * 4)) {
          uVar16 = uVar3;
          puVar11 = puVar14;
          uVar6 = *puVar14;
        }
        puVar14 = puVar11;
        *puVar15 = uVar6;
        puVar15 = puVar14;
      } while ((long)uVar16 <= (long)uVar21);
LAB__text__001ffebc:
      param_2 = param_2 + -1;
      if (puVar14 == param_2) {
        *puVar14 = uVar10;
      }
      else {
        *puVar14 = *param_2;
        *param_2 = uVar10;
        uVar16 = (long)puVar14 + (4 - (long)param_1);
        if (4 < (long)uVar16) {
          uVar10 = *puVar14;
          uVar16 = (uVar16 >> 2) - 2 >> 1;
          uVar21 = (ulong)param_1[uVar16];
          puVar15 = param_1 + uVar16;
          if (*(uint *)(param_3 + uVar21 * 4) < *(uint *)(param_3 + (ulong)uVar10 * 4)) {
            do {
              puVar11 = puVar15;
              *puVar14 = (uint)uVar21;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1 >> 1;
              uVar21 = (ulong)param_1[uVar16];
              puVar14 = puVar11;
              puVar15 = param_1 + uVar16;
            } while (*(uint *)(param_3 + uVar21 * 4) < *(uint *)(param_3 + (ulong)uVar10 * 4));
            *puVar11 = uVar10;
          }
        }
      }
      bVar1 = (long)uVar8 < 3;
      uVar8 = uVar8 - 1;
      if (bVar1) {
        return;
      }
    } while( true );
  }
  goto LAB__text__001ffd10;
LAB__text__001ffb58:
  param_2 = puVar11;
  if ((uVar8 & 1) != 0) {
    return;
  }
  goto LAB__text__001ff5bc;
}


