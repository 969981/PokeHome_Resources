/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005158b0; name: FUN_.text__005158b0
 */


bool FUN__text__005158b0(long param_1,float *param_2,long *param_3,long param_4,long *param_5,
                        undefined4 *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined4 uVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar2 = *(uint *)(param_4 + 0x200);
  uVar6 = (ulong)uVar2;
  if (*(int *)(param_4 + 0x204) < 1) {
    if (0 < (int)uVar2) {
      if (*(long *)(param_4 + 0x180) == *param_3) {
        uVar11 = 0;
        bVar3 = false;
      }
      else {
        uVar11 = 0;
        do {
          if (uVar6 - 1 == uVar11) {
            return uVar6 <= uVar11 + 1;
          }
          lVar19 = uVar11 * 8;
          uVar11 = uVar11 + 1;
        } while (*(long *)(param_4 + 0x188 + lVar19) != *param_3);
        bVar3 = uVar6 <= uVar11;
      }
      puVar15 = (undefined8 *)(param_4 + (long)(int)(uVar2 - 1) * 0x18);
      puVar12 = (undefined8 *)(param_4 + uVar11 * 0x18);
      uVar1 = *puVar15;
      uVar13 = puVar15[2];
      puVar12[1] = puVar15[1];
      puVar12[2] = uVar13;
      *puVar12 = uVar1;
      *(undefined8 *)(param_4 + 0x180 + uVar11 * 8) =
           *(undefined8 *)(param_4 + 0x180 + (long)(int)(uVar2 - 1) * 8);
      *(int *)(param_4 + 0x200) = *(int *)(param_4 + 0x200) + -1;
      return bVar3;
    }
  }
  else if (0 < (int)uVar2) {
    lVar20 = 0;
    lVar19 = 0x30;
    do {
      pfVar16 = (float *)(param_4 + lVar20);
      if (((((*param_2 <= pfVar16[3]) && (*pfVar16 <= param_2[3])) && (param_2[1] <= pfVar16[4])) &&
          ((pfVar16[1] <= param_2[4] && (param_2[2] <= pfVar16[5])))) && (pfVar16[2] <= param_2[5]))
      {
        uVar6 = FUN__text__005158b0(param_1,param_2,param_3,*(undefined8 *)(param_4 + lVar19 * 8),
                                    param_5,param_6);
        if ((uVar6 & 1) == 0) {
          pfVar18 = *(float **)(param_4 + lVar19 * 8);
          if (3 < (int)pfVar18[0x80]) {
            fVar24 = *pfVar18;
            fVar23 = pfVar18[1];
            lVar19 = (ulong)(uint)pfVar18[0x80] - 1;
            fVar22 = pfVar18[2];
            fVar21 = pfVar18[3];
            fVar26 = pfVar18[4];
            fVar25 = pfVar18[5];
            pfVar18 = pfVar18 + 0xb;
            do {
              lVar19 = lVar19 + -1;
              fVar23 = (float)NEON_fminnm(fVar23,pfVar18[-4]);
              fVar24 = (float)NEON_fminnm(fVar24,pfVar18[-5]);
              if (fVar21 <= pfVar18[-2]) {
                fVar21 = pfVar18[-2];
              }
              fVar22 = (float)NEON_fminnm(fVar22,pfVar18[-3]);
              if (fVar26 <= pfVar18[-1]) {
                fVar26 = pfVar18[-1];
              }
              if (fVar25 <= *pfVar18) {
                fVar25 = *pfVar18;
              }
              pfVar18 = pfVar18 + 6;
            } while (lVar19 != 0);
            *pfVar16 = fVar24;
            pfVar16[1] = fVar23;
            pfVar16[2] = fVar22;
            pfVar16[3] = fVar21;
            pfVar16[4] = fVar26;
            pfVar16[5] = fVar25;
            return false;
          }
          plVar4 = *(long **)(param_1 + 0x18);
          goto joined_r0x00515adc;
        }
        uVar6 = (ulong)*(uint *)(param_4 + 0x200);
      }
      lVar8 = lVar19 + -0x2f;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x18;
    } while (lVar8 < (int)uVar6);
  }
  return true;
joined_r0x00515adc:
  if (plVar4 == (long *)0x0) goto LAB__text__00515af0;
  if (plVar4[0x82] != 0) goto LAB__text__00515b74;
  plVar4 = (long *)plVar4[0x80];
  goto joined_r0x00515adc;
LAB__text__00515b74:
  plVar7 = (long *)plVar4[0x82];
  if (plVar7 != (long *)0x0) {
    plVar4[0x82] = *plVar7;
    *plVar7 = 0;
    *(int *)(plVar4 + 0x81) = (int)plVar4[0x81] + -1;
    plVar7[1] = (long)pfVar18;
    *plVar7 = *param_5;
    *param_5 = (long)plVar7;
    bVar3 = true;
    uVar17 = 1;
    goto LAB__text__00515bb4;
  }
  goto LAB__text__00515bb0;
LAB__text__00515af0:
  plVar4 = (long *)FUN__text__00400f90(10,0x418,0x10);
  if (plVar4 != (long *)0x0) {
    lVar20 = 0;
    plVar4[0x80] = 0;
    plVar7 = plVar4;
    do {
      plVar4[0x82] = (long)plVar7;
      *plVar7 = 0;
      while( true ) {
        if (lVar20 == 0x3f0) {
          *(undefined4 *)(plVar4 + 0x81) = 0x40;
          if (*(long *)(param_1 + 0x18) == 0) {
            *(long **)(param_1 + 0x18) = plVar4;
            plVar4[0x80] = 0;
          }
          else {
            plVar4[0x80] = *(long *)(param_1 + 0x18);
            *(long **)(param_1 + 0x18) = plVar4;
          }
          goto LAB__text__00515b74;
        }
        lVar20 = lVar20 + 0x10;
        plVar7 = (long *)((long)plVar4 + lVar20);
        if (plVar4[0x82] == 0) break;
        *plVar7 = plVar4[0x82];
        plVar4[0x82] = (long)plVar7;
      }
    } while( true );
  }
LAB__text__00515bb0:
  bVar3 = false;
  uVar17 = 0x34;
LAB__text__00515bb4:
  lVar20 = (long)*(int *)(param_4 + 0x200) + -1;
  puVar12 = (undefined8 *)(param_4 + lVar20 * 0x18);
  uVar1 = *puVar12;
  uVar13 = puVar12[2];
  *(undefined8 *)(pfVar16 + 2) = puVar12[1];
  *(undefined8 *)(pfVar16 + 4) = uVar13;
  *(undefined8 *)pfVar16 = uVar1;
  *(undefined8 *)(param_4 + lVar19 * 8) = *(undefined8 *)(param_4 + 0x180 + lVar20 * 8);
  *(int *)(param_4 + 0x200) = *(int *)(param_4 + 0x200) + -1;
  if (!bVar3) {
    pfVar16 = (float *)(param_1 + 0x10);
    pfVar5 = *(float **)pfVar16;
    if ((pfVar5 == (float *)0x0) || ((pfVar5 <= pfVar18 && (pfVar18 < pfVar5 + 0x38e)))) {
      pfVar9 = pfVar5;
      pfVar5 = (float *)0x0;
    }
    else {
      pfVar9 = *(float **)(pfVar5 + 0x38e);
      if (pfVar9 == (float *)0x0) {
        pfVar9 = (float *)0x0;
      }
      else if ((pfVar18 < pfVar9) || (pfVar9 + 0x38e <= pfVar18)) {
        pfVar14 = *(float **)(pfVar9 + 0x38e);
        pfVar10 = pfVar9;
        if (pfVar14 == (float *)0x0) {
          pfVar9 = (float *)0x0;
LAB__text__00515ce0:
          pfVar5 = pfVar10;
        }
        else {
          do {
            pfVar5 = pfVar14;
            if (pfVar5 <= pfVar18) {
              pfVar9 = pfVar5;
              if (pfVar18 < pfVar5 + 0x38e) goto LAB__text__00515ce0;
            }
            pfVar14 = *(float **)(pfVar5 + 0x38e);
            pfVar9 = (float *)0x0;
            pfVar10 = pfVar5;
          } while (pfVar14 != (float *)0x0);
        }
      }
    }
    if (*(long *)(pfVar9 + 0x392) == 0) {
      *(float **)(pfVar9 + 0x392) = pfVar18;
      pfVar18[0] = 0.0;
      pfVar18[1] = 0.0;
    }
    else {
      *(long *)pfVar18 = *(long *)(pfVar9 + 0x392);
      *(float **)(pfVar9 + 0x392) = pfVar18;
    }
    fVar21 = pfVar9[0x390];
    pfVar9[0x390] = (float)((int)fVar21 + 1);
    if ((float)((int)fVar21 + 1) == 9.80909e-45) {
      if (*(float **)pfVar16 != pfVar9) {
        pfVar16 = pfVar5 + 0x38e;
      }
      *(long *)pfVar16 = *(long *)(pfVar9 + 0x38e);
      FUN__text__00400fc0(10);
    }
    *param_6 = uVar17;
  }
  return false;
}


