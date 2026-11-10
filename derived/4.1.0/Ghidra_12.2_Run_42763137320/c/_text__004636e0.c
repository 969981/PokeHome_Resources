/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004636e0; name: FUN_.text__004636e0
 */


void FUN__text__004636e0(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                        uint param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  
  uVar7 = (uint)((ulong)param_4 >> 0x20);
  fVar6 = (float)param_4;
  uVar18 = (uint)((ulong)param_2 >> 0x20);
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 == 0) {
    return;
  }
  iVar14 = 0;
  lVar8 = *param_1;
  uVar17 = uVar9;
  do {
    uVar1 = iVar14 + (uVar17 >> 1);
    lVar12 = *(long *)(lVar8 + (long)(int)uVar1 * 8);
    if (*(float *)(lVar12 + 0x318) == (float)param_2) {
      uVar11 = *(uint *)(lVar12 + 0x31c);
      uVar2 = *(uint *)(lVar12 + 800);
      if (uVar11 == uVar18 && uVar2 == param_3) {
        if (uVar1 == 0) {
LAB__text__0046381c:
          if (uVar9 - 1 <= uVar1) {
            return;
          }
          uVar16 = (ulong)(uVar1 + 1);
          lVar15 = *(long *)(lVar8 + uVar16 * 8);
          if (*(float *)(lVar15 + 0x318) == fVar6) {
            uVar18 = *(uint *)(lVar15 + 800);
            if (*(char *)((long)param_1 + 0x12) == '\0') {
              bVar3 = uVar7 < *(uint *)(lVar15 + 0x31c);
              if (uVar18 != param_5) {
                bVar3 = param_5 < uVar18;
              }
            }
            else {
              bVar3 = *(uint *)(lVar15 + 0x31c) < uVar7;
              if (uVar18 != param_5) {
                bVar3 = uVar18 < param_5;
              }
            }
            if (!bVar3) {
              return;
            }
          }
          else if (*(float *)(lVar15 + 0x318) <= fVar6) {
            return;
          }
          if (uVar9 - 2 <= uVar1) goto LAB__text__004638e4;
          lVar19 = *(long *)(lVar8 + (ulong)(uVar1 + 2) * 8);
          if (*(float *)(lVar19 + 0x318) == fVar6) {
            uVar18 = *(uint *)(lVar19 + 800);
            uVar17 = *(uint *)(lVar19 + 0x31c);
            bVar3 = uVar7 <= uVar17;
            if (*(char *)((long)param_1 + 0x12) == '\0') goto LAB__text__00463808;
LAB__text__004638d0:
            bVar3 = bVar3 && uVar17 != uVar7;
            bVar5 = uVar18 == param_5;
            bVar4 = param_5 <= uVar18 && !bVar5;
            goto LAB__text__004638dc;
          }
          if (*(float *)(lVar19 + 0x318) < fVar6) goto LAB__text__004638e4;
        }
        else {
          uVar16 = (ulong)(uVar1 - 1);
          lVar15 = *(long *)(lVar8 + uVar16 * 8);
          if (*(float *)(lVar15 + 0x318) == fVar6) {
            uVar18 = *(uint *)(lVar15 + 800);
            if (*(char *)((long)param_1 + 0x12) == '\0') {
              bVar3 = *(uint *)(lVar15 + 0x31c) < uVar7;
              if (uVar18 != param_5) {
                bVar3 = uVar18 < param_5;
              }
            }
            else {
              bVar3 = uVar7 < *(uint *)(lVar15 + 0x31c);
              if (uVar18 != param_5) {
                bVar3 = param_5 < uVar18;
              }
            }
            if (!bVar3) goto LAB__text__0046381c;
          }
          else if (fVar6 <= *(float *)(lVar15 + 0x318)) goto LAB__text__0046381c;
          if (uVar1 < 2) goto LAB__text__004638e4;
          lVar19 = *(long *)(lVar8 + (ulong)(uVar1 - 2) * 8);
          if (*(float *)(lVar19 + 0x318) == fVar6) {
            uVar18 = *(uint *)(lVar19 + 800);
            uVar17 = *(uint *)(lVar19 + 0x31c);
            bVar3 = uVar7 <= uVar17;
            if (*(char *)((long)param_1 + 0x12) == '\0') goto LAB__text__004638d0;
LAB__text__00463808:
            bVar3 = !bVar3;
            bVar4 = uVar18 < param_5;
            bVar5 = uVar18 == param_5;
LAB__text__004638dc:
            if (!bVar5) {
              bVar3 = bVar4;
            }
            if (bVar3) {
LAB__text__004638e4:
              *(long *)(lVar8 + uVar16 * 8) = lVar12;
              *(long *)(lVar8 + (long)(int)uVar1 * 8) = lVar15;
              return;
            }
          }
          else if (fVar6 < *(float *)(lVar19 + 0x318)) goto LAB__text__004638e4;
        }
        uVar18 = 0;
        break;
      }
      if (*(char *)((long)param_1 + 0x12) == '\0') {
        bVar3 = uVar18 < uVar11;
        if (uVar2 != param_3) {
          bVar3 = param_3 < uVar2;
        }
        uVar11 = (uint)bVar3;
      }
      else {
        bVar3 = uVar11 < uVar18;
        if (uVar2 != param_3) {
          bVar3 = uVar2 < param_3;
        }
        uVar11 = (uint)bVar3;
      }
    }
    else {
      uVar11 = (uint)((float)param_2 < *(float *)(lVar12 + 0x318));
    }
    uVar2 = uVar17 - uVar11;
    if (uVar11 != 0) {
      iVar14 = uVar1 + 1;
    }
    uVar17 = uVar2 >> 1;
    if (uVar2 < 2) {
      return;
    }
  } while( true );
  do {
    uVar17 = uVar18 + (uVar9 >> 1);
    lVar12 = *(long *)(lVar8 + (long)(int)uVar17 * 8);
    if (*(float *)(lVar12 + 0x318) == fVar6) {
      uVar11 = *(uint *)(lVar12 + 0x31c);
      uVar2 = *(uint *)(lVar12 + 800);
      if (uVar11 == uVar7 && uVar2 == param_5) break;
      if (*(char *)((long)param_1 + 0x12) == '\0') {
        bVar3 = uVar7 < uVar11;
        if (uVar2 != param_5) {
          bVar3 = param_5 < uVar2;
        }
        uVar11 = (uint)bVar3;
      }
      else {
        bVar3 = uVar11 < uVar7;
        if (uVar2 != param_5) {
          bVar3 = uVar2 < param_5;
        }
        uVar11 = (uint)bVar3;
      }
    }
    else {
      uVar11 = (uint)(fVar6 < *(float *)(lVar12 + 0x318));
    }
    uVar2 = uVar9 - uVar11;
    if (uVar11 != 0) {
      uVar18 = uVar17 + 1;
    }
    uVar9 = uVar2 >> 1;
    uVar17 = uVar18;
  } while (1 < uVar2);
  uVar10 = (ulong)uVar1;
  uVar17 = uVar17 - (uVar1 < uVar17);
  uVar16 = (ulong)uVar17;
  if (uVar17 < uVar1) {
    if (uVar10 != uVar16) {
      lVar12 = uVar16 * 8 + uVar10 * -8;
      puVar13 = (undefined8 *)(lVar8 + (ulong)uVar1 * 8);
      do {
        lVar12 = lVar12 + 8;
        *puVar13 = puVar13[-1];
        puVar13 = puVar13 + -1;
      } while (lVar12 != 0);
    }
  }
  else if (uVar10 != uVar16) {
    lVar12 = uVar16 * 8 + uVar10 * -8;
    puVar13 = (undefined8 *)(lVar8 + uVar10 * 8);
    do {
      lVar12 = lVar12 + -8;
      *puVar13 = puVar13[1];
      puVar13 = puVar13 + 1;
    } while (lVar12 != 0);
  }
  *(undefined8 *)(lVar8 + uVar16 * 8) = *param_6;
  return;
}


