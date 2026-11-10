/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042ffe0; name: FUN_.text__0042ffe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0042ffe0(long *param_1,long *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  *param_1 = param_2[1];
  bVar4 = *(byte *)(param_1 + 8) & 0xfe | *(byte *)((long)param_2 + 0x24);
  *(byte *)(param_1 + 8) = bVar4;
  cVar2 = *(char *)((long)param_2 + 0x26);
  *(byte *)(param_1 + 8) = bVar4 & 0xfd | cVar2 << 1;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  fVar20 = *(float *)(param_2 + 2);
  fVar18 = *(float *)((long)param_2 + 0x14);
  if (*(char *)((long)param_2 + 0x24) == '\0') {
    *(float *)(param_1 + 1) = fVar20;
    *(float *)((long)param_1 + 0xc) = fVar18;
    cVar3 = *(char *)((long)param_2 + 0x25);
    iVar13 = *(int *)((long)param_2 + 0x1c);
    fVar19 = fVar20;
  }
  else {
    fVar19 = fVar20 * 0.05;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    if (-37.0 <= fVar19) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar19)) {
        bVar6 = fVar19 < 37.0;
        bVar7 = fVar19 == 37.0;
        bVar8 = false;
      }
    }
    fVar19 = 0.0;
    if (bVar7 || bVar6 != bVar8) {
      uVar12 = (uint)(fVar20 * 1393317.6 + 1.0653532e+09);
      fVar20 = (float)(uVar12 & 0x7fffff | 0x3f800000);
      fVar19 = (fVar20 * (fVar20 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar12 & 0xff800000);
    }
    fVar20 = fVar18 * 0.05;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    if (-37.0 <= fVar20) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar20)) {
        bVar6 = fVar20 < 37.0;
        bVar7 = fVar20 == 37.0;
        bVar8 = false;
      }
    }
    if (bVar7 || bVar6 != bVar8) {
      uVar12 = (uint)(fVar18 * 1393317.6 + 1.0653532e+09);
      fVar18 = (float)(uVar12 & 0x7fffff | 0x3f800000);
      fVar18 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar12 & 0xff800000);
      *(float *)(param_1 + 1) = fVar19;
      *(float *)((long)param_1 + 0xc) = fVar18;
      cVar3 = *(char *)((long)param_2 + 0x25);
      iVar13 = *(int *)((long)param_2 + 0x1c);
    }
    else {
      fVar18 = 0.0;
      *(float *)(param_1 + 1) = fVar19;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      cVar3 = *(char *)((long)param_2 + 0x25);
      iVar13 = *(int *)((long)param_2 + 0x1c);
    }
  }
  if ((((cVar3 != '\0') && (fVar18 <= fVar19)) && (iVar13 != 3)) && (iVar13 != 5)) {
    iVar13 = 8 - iVar13;
  }
  *(int *)(param_1 + 7) = iVar13;
  *(undefined4 *)(param_1 + 3) = param_3;
  iVar13 = *_DAT_008a4b78;
  iVar5 = 0;
  if (iVar13 != 0) {
    iVar5 = ((int)param_2[3] + iVar13 + -1) / iVar13;
  }
  *(int *)((long)param_1 + 0x1c) = iVar5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 9) = (int)param_2[4];
  if ((cVar2 != '\0') && ((int)param_2[3] != 0)) {
    fVar18 = (float)NEON_ucvtf(_DAT_008ab030);
    fVar18 = expf((float)(int)-(uint)*_DAT_008a4b70 /
                  ((float)(int)param_2[3] * 0.00020000001 * fVar18));
    *(float *)((long)param_1 + 0x44) = fVar18;
  }
  lVar16 = *param_2;
  plVar15 = (long *)param_1[5];
  uVar12 = *(uint *)(param_1 + 6);
  uVar17 = (ulong)uVar12;
  plVar9 = plVar15;
  if (uVar12 == 0) {
LAB__text__0043027c:
    if ((plVar9 != plVar15 + uVar17) && (plVar9 != (long *)0x0)) {
      return 1;
    }
  }
  else {
    lVar14 = uVar17 << 3;
    do {
      if (*plVar9 == lVar16) goto LAB__text__0043027c;
      plVar9 = plVar9 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  uVar1 = *(uint *)((long)param_1 + 0x34);
  if (uVar12 < uVar1) {
    *(uint *)(param_1 + 6) = uVar12 + 1;
    if (plVar15 == (long *)0x0) {
      return 2;
    }
  }
  else {
    iVar13 = uVar1 + (uVar1 >> 1);
    if (uVar1 == 0) {
      iVar13 = 1;
    }
    uVar1 = iVar13 + uVar1;
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)FUN__text__00400f80(0,(ulong)uVar1 << 3);
      if (plVar15 == (long *)0x0) {
        return 2;
      }
      plVar9 = (long *)param_1[5];
      if ((plVar9 != (long *)0x0) && (plVar9 != plVar15)) {
        if (uVar12 != 0) {
          if (uVar12 == 1) {
            uVar10 = 0;
          }
          else {
            uVar11 = 0;
            do {
              uVar10 = uVar11 + 2;
              plVar15[uVar11] = *(long *)(param_1[5] + uVar11 * 8);
              (plVar15 + uVar11)[1] = *(long *)(param_1[5] + uVar11 * 8 + 8);
              uVar11 = uVar10;
            } while ((uVar17 & 0xfffffffe) != uVar10);
          }
          if ((uVar12 & 1) != 0) {
            plVar15[uVar10] = *(long *)(param_1[5] + uVar10 * 8);
          }
          plVar9 = (long *)param_1[5];
        }
        FUN__text__00400fc0(0,plVar9);
      }
    }
    else {
      plVar15 = (long *)FUN__text__00400fa0(0,plVar15);
      if (plVar15 == (long *)0x0) {
        return 2;
      }
    }
    param_1[5] = (long)plVar15;
    *(uint *)((long)param_1 + 0x34) = uVar1;
    if (uVar1 <= uVar12) {
      return 2;
    }
    uVar17 = (ulong)*(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) + 1;
  }
  plVar15[uVar17] = lVar16;
  return 1;
}


