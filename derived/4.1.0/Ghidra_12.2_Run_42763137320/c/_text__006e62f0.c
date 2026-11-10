/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e62f0; name: FUN_.text__006e62f0
 */


void FUN__text__006e62f0(float *param_1,float *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
LAB__text__006e6320:
  do {
    param_4 = -param_4;
    pfVar6 = param_1;
    do {
      param_1 = pfVar6;
      param_4 = param_4 + 1;
      uVar11 = (long)param_2 - (long)param_1;
      uVar10 = (long)uVar11 >> 3;
      if (uVar10 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x006e64fc */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__006e6508 + (ulong)*(byte *)(uVar10 + 0x76695a) * 4))();
        return;
      }
      if ((long)uVar11 < 0xc0) {
        pfVar6 = param_1 + 2;
        if ((param_5 & 1) == 0) {
          if (param_1 == param_2 || pfVar6 == param_2) {
            return;
          }
          goto LAB__text__006e67b4;
        }
        if (param_1 == param_2 || pfVar6 == param_2) {
          return;
        }
        lVar9 = 0;
        pfVar5 = param_1;
        goto LAB__text__006e6614;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        uVar4 = uVar10 - 2 >> 1;
        pfVar6 = param_1 + uVar4 * 2;
        lVar9 = uVar4 + 1;
        do {
          FUN__text__006e72c0(param_1,param_3,uVar10,pfVar6);
          lVar9 = lVar9 + -1;
          pfVar6 = pfVar6 + -2;
        } while (lVar9 != 0);
        uVar10 = uVar11 >> 3;
        do {
          FUN__text__006e74a0(param_1,param_2,param_3,uVar10);
          param_2 = param_2 + -2;
          bVar1 = 2 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar1);
        return;
      }
      uVar10 = uVar10 >> 1;
      pfVar6 = param_1 + uVar10 * 2;
      if (uVar11 < 0x401) {
        FUN__text__006e68b0(pfVar6,param_1,param_2 + -2,param_3);
      }
      else {
        FUN__text__006e68b0(param_1,pfVar6,param_2 + -2,param_3);
        pfVar7 = param_1 + uVar10 * 2;
        pfVar5 = param_1 + 2;
        FUN__text__006e68b0(pfVar5,pfVar7 + -2,param_2 + -4,param_3);
        FUN__text__006e68b0(param_1 + 4,pfVar5 + uVar10 * 2,param_2 + -6,param_3);
        FUN__text__006e68b0(pfVar7 + -2,pfVar6,pfVar5 + uVar10 * 2,param_3);
        uVar3 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
        *(undefined8 *)pfVar7 = uVar3;
      }
      if ((param_5 & 1) == 0) {
        fVar12 = param_1[-2];
        fVar13 = *param_1;
        if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
          if (fVar12 <= fVar13) goto LAB__text__006e64c0;
        }
        else if (fVar13 <= fVar12) {
LAB__text__006e64c0:
          param_1 = (float *)FUN__text__006e69f0(param_1,param_2,param_3);
          goto LAB__text__006e64d4;
        }
      }
      auVar15 = FUN__text__006e6bc0(param_1,param_2,param_3);
      pfVar5 = auVar15._0_8_;
      if ((auVar15._8_8_ & 1) == 0) break;
      uVar10 = FUN__text__006e6d90(param_1,pfVar5,param_3);
      uVar11 = FUN__text__006e6d90(pfVar5 + 2,param_2,param_3);
      if ((uVar11 & 1) != 0) {
        param_4 = -param_4;
        param_2 = pfVar5;
        if ((uVar10 & 1) != 0) {
          return;
        }
        goto LAB__text__006e6320;
      }
      pfVar6 = pfVar5 + 2;
    } while ((uVar10 & 1) != 0);
    FUN__text__006e62f0(param_1,pfVar5,param_3,-param_4,param_5 & 1);
    param_1 = pfVar5 + 2;
LAB__text__006e64d4:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB__text__006e67b4:
  pfVar5 = pfVar6;
  fVar12 = param_1[2];
  fVar13 = *param_1;
  if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
    if (fVar13 < fVar12) goto LAB__text__006e67e8;
  }
  else if (fVar12 < fVar13) {
LAB__text__006e67e8:
    fVar13 = param_1[3];
    pfVar6 = pfVar5;
    if (fVar12 < 0.0) {
      do {
        while( true ) {
          pfVar7 = param_1;
          *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)pfVar7;
          param_1 = pfVar7 + -2;
          fVar14 = *param_1;
          if (0.0 <= fVar14) break;
          if (fVar14 <= fVar12) goto LAB__text__006e67a0;
        }
      } while (fVar14 < fVar12);
    }
    else {
      do {
        pfVar2 = pfVar6 + -4;
        pfVar7 = pfVar6 + -2;
        *(undefined8 *)pfVar6 = *(undefined8 *)pfVar7;
        pfVar6 = pfVar7;
      } while (*pfVar2 < fVar12);
    }
LAB__text__006e67a0:
    *pfVar7 = fVar12;
    pfVar7[1] = fVar13;
  }
  pfVar6 = pfVar5 + 2;
  param_1 = pfVar5;
  if (pfVar5 + 2 == param_2) {
    return;
  }
  goto LAB__text__006e67b4;
LAB__text__006e6614:
  fVar12 = pfVar5[2];
  fVar13 = *pfVar5;
  if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
    if (fVar13 < fVar12) goto LAB__text__006e6648;
  }
  else if (fVar12 < fVar13) {
LAB__text__006e6648:
    fVar13 = pfVar5[3];
    *(undefined8 *)(pfVar5 + 2) = *(undefined8 *)pfVar5;
    pfVar7 = param_1;
    if (pfVar5 != param_1) {
      lVar8 = lVar9;
      if (fVar12 < 0.0) {
        do {
          pfVar7 = (float *)((long)param_1 + lVar8);
          fVar14 = pfVar7[-2];
          if (fVar14 < 0.0) {
            if (fVar14 <= fVar12) goto LAB__text__006e65fc;
          }
          else if (fVar12 <= fVar14) {
            pfVar7 = pfVar5;
            goto LAB__text__006e65fc;
          }
          pfVar5 = pfVar5 + -2;
          lVar8 = lVar8 + -8;
          *(undefined8 *)pfVar7 = *(undefined8 *)(pfVar7 + -2);
        } while (lVar8 != 0);
      }
      else {
        do {
          pfVar7 = (float *)((long)param_1 + lVar8);
          if (fVar12 <= pfVar7[-2]) goto LAB__text__006e65fc;
          lVar8 = lVar8 + -8;
          *(undefined8 *)pfVar7 = *(undefined8 *)(pfVar7 + -2);
        } while (lVar8 != 0);
      }
      pfVar7 = param_1;
    }
LAB__text__006e65fc:
    *pfVar7 = fVar12;
    pfVar7[1] = fVar13;
  }
  pfVar7 = pfVar6 + 2;
  lVar9 = lVar9 + 8;
  pfVar5 = pfVar6;
  pfVar6 = pfVar7;
  if (pfVar7 == param_2) {
    return;
  }
  goto LAB__text__006e6614;
}


