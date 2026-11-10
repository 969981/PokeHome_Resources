/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2ed0; name: FUN_.text__006e2ed0
 */


void FUN__text__006e2ed0(float *param_1,float *param_2,undefined8 param_3,long param_4,uint param_5)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
LAB__text__006e2f00:
  do {
    param_4 = -param_4;
    pfVar4 = param_1;
    do {
      param_1 = pfVar4;
      param_4 = param_4 + 1;
      uVar2 = (long)param_2 - (long)param_1;
      uVar9 = (long)uVar2 >> 3;
      if (uVar9 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x006e30d4 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(uVar9 + 0x766936) * 4 + 0x6e30e0))();
        return;
      }
      if ((long)uVar2 < 0xc0) {
        pfVar4 = param_1 + 2;
        if ((param_5 & 1) == 0) {
          if (param_1 == param_2 || pfVar4 == param_2) {
            return;
          }
          goto LAB__text__006e33a8;
        }
        if (param_1 == param_2 || pfVar4 == param_2) {
          return;
        }
        lVar8 = 0;
        pfVar5 = param_1;
        goto LAB__text__006e32f8;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        uVar2 = uVar9 - 2 >> 1;
        pfVar4 = param_1 + uVar2 * 2;
        lVar8 = uVar2 + 1;
        do {
          FUN__text__006e3c60(param_1,param_3,uVar9,pfVar4);
          lVar8 = lVar8 + -1;
          pfVar4 = pfVar4 + -2;
        } while (lVar8 != 0);
        FUN__text__006e3db0(param_1,param_2,param_3);
        return;
      }
      uVar9 = uVar9 >> 1;
      pfVar4 = param_1 + uVar9 * 2;
      if (uVar2 < 0x401) {
        FUN__text__006e3430(pfVar4,param_1,param_2 + -2,param_3);
      }
      else {
        FUN__text__006e3430(param_1,pfVar4,param_2 + -2,param_3);
        pfVar6 = param_1 + uVar9 * 2;
        pfVar5 = param_1 + 2;
        FUN__text__006e3430(pfVar5,pfVar6 + -2,param_2 + -4,param_3);
        FUN__text__006e3430(param_1 + 4,pfVar5 + uVar9 * 2,param_2 + -6,param_3);
        FUN__text__006e3430(pfVar6 + -2,pfVar4,pfVar5 + uVar9 * 2,param_3);
        uVar3 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar6;
        *(undefined8 *)pfVar6 = uVar3;
      }
      if (((param_5 & 1) == 0) &&
         ((*param_1 < param_1[-2] ||
          ((*param_1 <= param_1[-2] && ((int)param_1[1] <= (int)param_1[-1])))))) {
        param_1 = (float *)FUN__text__006e3550(param_1,param_2,param_3);
        goto LAB__text__006e30ac;
      }
      auVar12 = FUN__text__006e36a0(param_1,param_2,param_3);
      pfVar5 = auVar12._0_8_;
      if ((auVar12._8_8_ & 1) == 0) break;
      uVar2 = FUN__text__006e37f0(param_1,pfVar5,param_3);
      uVar9 = FUN__text__006e37f0(pfVar5 + 2,param_2,param_3);
      if ((uVar9 & 1) != 0) {
        param_4 = -param_4;
        param_2 = pfVar5;
        if ((uVar2 & 1) != 0) {
          return;
        }
        goto LAB__text__006e2f00;
      }
      pfVar4 = pfVar5 + 2;
    } while ((uVar2 & 1) != 0);
    FUN__text__006e2ed0(param_1,pfVar5,param_3,-param_4,param_5 & 1);
    param_1 = pfVar5 + 2;
LAB__text__006e30ac:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB__text__006e33a8:
  fVar10 = *pfVar4;
  if ((fVar10 <= *param_1) &&
     ((fVar1 = param_1[3], fVar10 < *param_1 || ((int)fVar1 < (int)param_1[1])))) {
    *(undefined8 *)pfVar4 = *(undefined8 *)param_1;
    fVar11 = param_1[-2];
    pfVar5 = param_1;
    if (fVar10 <= fVar11) {
      pfVar6 = param_1;
      do {
        if ((fVar11 <= fVar10) && ((int)pfVar6[-1] <= (int)fVar1)) {
          pfVar5 = pfVar6;
          break;
        }
        fVar11 = pfVar6[-4];
        pfVar5 = pfVar6 + -2;
        *(undefined8 *)pfVar6 = *(undefined8 *)pfVar5;
        pfVar6 = pfVar5;
      } while (fVar10 <= fVar11);
    }
    *pfVar5 = fVar10;
    pfVar5[1] = fVar1;
  }
  pfVar4 = pfVar4 + 2;
  param_1 = param_1 + 2;
  if (pfVar4 == param_2) {
    return;
  }
  goto LAB__text__006e33a8;
LAB__text__006e32f8:
  pfVar6 = pfVar4;
  fVar10 = pfVar5[2];
  if ((fVar10 <= *pfVar5) &&
     ((fVar1 = pfVar5[3], fVar10 < *pfVar5 || ((int)fVar1 < (int)pfVar5[1])))) {
    *(undefined8 *)(pfVar5 + 2) = *(undefined8 *)pfVar5;
    pfVar4 = param_1;
    if (pfVar5 != param_1) {
      pfVar4 = pfVar5;
      lVar7 = lVar8;
      do {
        pfVar5 = (float *)((long)param_1 + lVar7);
        if (pfVar5[-2] < fVar10) {
          pfVar4 = pfVar5;
          goto LAB__text__006e32e0;
        }
        if ((pfVar5[-2] == fVar10) && ((int)pfVar5[-1] <= (int)fVar1)) goto LAB__text__006e32e0;
        lVar7 = lVar7 + -8;
        *(undefined8 *)pfVar5 = *(undefined8 *)(pfVar5 + -2);
        pfVar4 = pfVar4 + -2;
      } while (lVar7 != 0);
      pfVar4 = param_1;
    }
LAB__text__006e32e0:
    *pfVar4 = fVar10;
    pfVar4[1] = fVar1;
  }
  pfVar4 = pfVar6 + 2;
  lVar8 = lVar8 + 8;
  pfVar5 = pfVar6;
  if (pfVar4 == param_2) {
    return;
  }
  goto LAB__text__006e32f8;
}


