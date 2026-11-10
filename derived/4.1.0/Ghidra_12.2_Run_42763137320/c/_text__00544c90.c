/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00544c90; name: FUN_.text__00544c90
 */


bool FUN__text__00544c90(long param_1,double *param_2,long *param_3,long param_4,long *param_5,
                        undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  ulong uVar13;
  double *pdVar14;
  double *pdVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  double *pdVar18;
  undefined4 uVar19;
  double *pdVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  uVar4 = *(uint *)(param_4 + 0x380);
  uVar8 = (ulong)uVar4;
  if (*(int *)(param_4 + 900) < 1) {
    if (0 < (int)uVar4) {
      if (*(long *)(param_4 + 0x300) == *param_3) {
        uVar13 = 0;
        bVar6 = false;
      }
      else {
        uVar13 = 0;
        do {
          if (uVar8 - 1 == uVar13) {
            return uVar8 <= uVar13 + 1;
          }
          lVar21 = uVar13 * 8;
          uVar13 = uVar13 + 1;
        } while (*(long *)(param_4 + 0x308 + lVar21) != *param_3);
        bVar6 = uVar8 <= uVar13;
      }
      puVar17 = (undefined8 *)(param_4 + (long)(int)(uVar4 - 1) * 0x30);
      puVar16 = (undefined8 *)(param_4 + uVar13 * 0x30);
      uVar1 = puVar17[1];
      *puVar16 = *puVar17;
      puVar16[1] = uVar1;
      uVar1 = puVar17[2];
      uVar2 = puVar17[3];
      uVar3 = puVar17[5];
      puVar16[4] = puVar17[4];
      puVar16[5] = uVar3;
      puVar16[2] = uVar1;
      puVar16[3] = uVar2;
      *(undefined8 *)(param_4 + 0x300 + uVar13 * 8) =
           *(undefined8 *)(param_4 + 0x300 + (long)(int)(uVar4 - 1) * 8);
      *(int *)(param_4 + 0x380) = *(int *)(param_4 + 0x380) + -1;
      return bVar6;
    }
  }
  else if (0 < (int)uVar4) {
    lVar22 = 0;
    lVar21 = 0x60;
    do {
      pdVar18 = (double *)(param_4 + lVar22);
      if (((((*param_2 <= pdVar18[3]) && (*pdVar18 <= param_2[3])) && (param_2[1] <= pdVar18[4])) &&
          ((pdVar18[1] <= param_2[4] && (param_2[2] <= pdVar18[5])))) && (pdVar18[2] <= param_2[5]))
      {
        uVar8 = FUN__text__00544c90(param_1,param_2,param_3,*(undefined8 *)(param_4 + lVar21 * 8),
                                    param_5,param_6);
        if ((uVar8 & 1) == 0) {
          pdVar20 = *(double **)(param_4 + lVar21 * 8);
          if (3 < (int)*(uint *)(pdVar20 + 0x70)) {
            dVar26 = *pdVar20;
            dVar25 = pdVar20[1];
            lVar21 = (ulong)*(uint *)(pdVar20 + 0x70) - 1;
            dVar24 = pdVar20[2];
            dVar23 = pdVar20[3];
            dVar28 = pdVar20[4];
            dVar27 = pdVar20[5];
            pdVar20 = pdVar20 + 0xb;
            do {
              lVar21 = lVar21 + -1;
              dVar25 = (double)NEON_fminnm(dVar25,pdVar20[-4]);
              dVar26 = (double)NEON_fminnm(dVar26,pdVar20[-5]);
              if (dVar23 <= pdVar20[-2]) {
                dVar23 = pdVar20[-2];
              }
              dVar24 = (double)NEON_fminnm(dVar24,pdVar20[-3]);
              if (dVar28 <= pdVar20[-1]) {
                dVar28 = pdVar20[-1];
              }
              if (dVar27 <= *pdVar20) {
                dVar27 = *pdVar20;
              }
              pdVar20 = pdVar20 + 6;
            } while (lVar21 != 0);
            *pdVar18 = dVar26;
            pdVar18[1] = dVar25;
            pdVar18[2] = dVar24;
            pdVar18[3] = dVar23;
            pdVar18[4] = dVar28;
            pdVar18[5] = dVar27;
            return false;
          }
          plVar7 = *(long **)(param_1 + 0x18);
          goto joined_r0x00544ec4;
        }
        uVar8 = (ulong)*(uint *)(param_4 + 0x380);
      }
      lVar10 = lVar21 + -0x5f;
      lVar21 = lVar21 + 1;
      lVar22 = lVar22 + 0x30;
    } while (lVar10 < (int)uVar8);
  }
  return true;
joined_r0x00544ec4:
  if (plVar7 == (long *)0x0) goto LAB__text__00544ed8;
  if (plVar7[0x82] != 0) goto LAB__text__00544f5c;
  plVar7 = (long *)plVar7[0x80];
  goto joined_r0x00544ec4;
LAB__text__00544f5c:
  plVar9 = (long *)plVar7[0x82];
  if (plVar9 != (long *)0x0) {
    plVar7[0x82] = *plVar9;
    *plVar9 = 0;
    *(int *)(plVar7 + 0x81) = (int)plVar7[0x81] + -1;
    plVar9[1] = (long)pdVar20;
    *plVar9 = *param_5;
    *param_5 = (long)plVar9;
    bVar6 = true;
    uVar19 = 1;
    goto LAB__text__00544f9c;
  }
  goto LAB__text__00544f98;
LAB__text__00544ed8:
  plVar7 = (long *)FUN__text__00400f90(10,0x418,0x10);
  if (plVar7 != (long *)0x0) {
    lVar22 = 0;
    plVar7[0x80] = 0;
    plVar9 = plVar7;
    do {
      plVar7[0x82] = (long)plVar9;
      *plVar9 = 0;
      while( true ) {
        if (lVar22 == 0x3f0) {
          *(undefined4 *)(plVar7 + 0x81) = 0x40;
          if (*(long *)(param_1 + 0x18) == 0) {
            *(long **)(param_1 + 0x18) = plVar7;
            plVar7[0x80] = 0;
          }
          else {
            plVar7[0x80] = *(long *)(param_1 + 0x18);
            *(long **)(param_1 + 0x18) = plVar7;
          }
          goto LAB__text__00544f5c;
        }
        lVar22 = lVar22 + 0x10;
        plVar9 = (long *)((long)plVar7 + lVar22);
        if (plVar7[0x82] == 0) break;
        *plVar9 = plVar7[0x82];
        plVar7[0x82] = (long)plVar9;
      }
    } while( true );
  }
LAB__text__00544f98:
  bVar6 = false;
  uVar19 = 0x34;
LAB__text__00544f9c:
  lVar22 = (long)*(int *)(param_4 + 0x380) + -1;
  pdVar14 = (double *)(param_4 + lVar22 * 0x30);
  dVar23 = pdVar14[1];
  *pdVar18 = *pdVar14;
  pdVar18[1] = dVar23;
  dVar23 = pdVar14[2];
  dVar27 = pdVar14[3];
  dVar28 = pdVar14[5];
  pdVar18[4] = pdVar14[4];
  pdVar18[5] = dVar28;
  pdVar18[2] = dVar23;
  pdVar18[3] = dVar27;
  *(undefined8 *)(param_4 + lVar21 * 8) = *(undefined8 *)(param_4 + 0x300 + lVar22 * 8);
  *(int *)(param_4 + 0x380) = *(int *)(param_4 + 0x380) + -1;
  if (!bVar6) {
    pdVar18 = (double *)(param_1 + 0x10);
    pdVar14 = (double *)*pdVar18;
    if ((pdVar14 == (double *)0x0) || ((pdVar14 <= pdVar20 && (pdVar20 < pdVar14 + 0x1c4)))) {
      pdVar11 = pdVar14;
      pdVar14 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)pdVar14[0x1c4];
      if (pdVar11 == (double *)0x0) {
        pdVar11 = (double *)0x0;
      }
      else if ((pdVar20 < pdVar11) || (pdVar11 + 0x1c4 <= pdVar20)) {
        pdVar15 = (double *)pdVar11[0x1c4];
        pdVar12 = pdVar11;
        if (pdVar15 == (double *)0x0) {
          pdVar11 = (double *)0x0;
LAB__text__005450d0:
          pdVar14 = pdVar12;
        }
        else {
          do {
            pdVar14 = pdVar15;
            if (pdVar14 <= pdVar20) {
              pdVar11 = pdVar14;
              if (pdVar20 < pdVar14 + 0x1c4) goto LAB__text__005450d0;
            }
            pdVar15 = (double *)pdVar14[0x1c4];
            pdVar11 = (double *)0x0;
            pdVar12 = pdVar14;
          } while (pdVar15 != (double *)0x0);
        }
      }
    }
    if (pdVar11[0x1c6] == 0.0) {
      pdVar11[0x1c6] = (double)pdVar20;
      *pdVar20 = 0.0;
    }
    else {
      *pdVar20 = pdVar11[0x1c6];
      pdVar11[0x1c6] = (double)pdVar20;
    }
    iVar5 = *(int *)(pdVar11 + 0x1c5);
    *(int *)(pdVar11 + 0x1c5) = iVar5 + 1;
    if (iVar5 + 1 == 4) {
      if ((double *)*pdVar18 != pdVar11) {
        pdVar18 = pdVar14 + 0x1c4;
      }
      *pdVar18 = pdVar11[0x1c4];
      FUN__text__00400fc0(10);
    }
    *param_6 = uVar19;
  }
  return false;
}


