/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005374d0; name: FUN_.text__005374d0
 */


undefined4
FUN__text__005374d0(long param_1,double *param_2,double *param_3,long param_4,void *param_5,
                   double *param_6,long *param_7,long *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  long alStack_310 [4];
  undefined1 auStack_2f0 [8];
  void *local_2e8;
  long *local_2e0;
  long *local_2d8;
  double *local_2d0;
  long local_2c8;
  ulong uStack_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  long local_298;
  long local_290;
  double *local_288;
  long local_280;
  ulong local_278;
  long local_270;
  long local_268;
  long local_260;
  undefined1 *local_258;
  long local_250;
  long local_248;
  undefined8 local_240;
  float local_238;
  float local_234;
  float fStack_230;
  float local_22c;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined4 local_1f8 [2];
  double local_1f0 [24];
  long local_130 [12];
  float local_d0;
  float fStack_cc;
  uint local_c8;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  float local_84 [5];
  
  uVar4 = *(uint *)(param_4 + 0x40);
  uVar11 = (ulong)uVar4 * 0x18 + 0xf & 0x3ffffffff0;
  local_258 = auStack_2f0 + -uVar11;
  local_260 = (long)local_258 - uVar11;
  local_248 = local_260 - uVar11;
  lVar12 = local_248 - uVar11;
  local_2e8 = param_5;
  local_2e0 = param_8;
  local_2d8 = param_7;
  local_2d0 = param_6;
  local_270 = param_1;
  local_250 = lVar12;
  if (uVar4 != 0) {
    dVar23 = param_3[1];
    dVar25 = param_3[2];
    dVar26 = *param_3;
    lVar17 = 0;
    lVar20 = 0;
    do {
      lVar21 = *(long *)(*(long *)(param_4 + 0x38) + lVar20 + 0x20);
      pfVar18 = (float *)(local_248 + lVar17);
      pfVar1 = (float *)(local_250 + lVar17);
      pfVar2 = (float *)(local_260 + lVar17);
      fVar30 = *(float *)(lVar21 + 0x18);
      fVar31 = *(float *)(lVar21 + 0x1c);
      fVar36 = *(float *)(lVar21 + 0x10);
      fVar34 = *(float *)(lVar21 + 0x14);
      fVar28 = (float)(param_3[1] - *(double *)(lVar21 + 0x28));
      fVar27 = (float)(*param_3 - *(double *)(lVar21 + 0x20));
      fVar29 = (float)(param_3[2] - *(double *)(lVar21 + 0x30));
      pfVar3 = (float *)(local_258 + lVar17);
      fVar37 = fVar30 * fVar27 - fVar34 * fVar28;
      fVar38 = fVar31 * fVar28 - fVar30 * fVar29;
      fVar39 = fVar34 * fVar29 - fVar31 * fVar27;
      fVar37 = fVar37 + fVar37;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar32 = *(float *)(lVar21 + 0x3c);
      fVar35 = *(float *)(lVar21 + 0x40);
      dVar33 = param_2[2];
      *pfVar18 = ((fVar27 - fVar30 * fVar37) + fVar36 * fVar38 + fVar31 * fVar39) /
                 *(float *)(lVar21 + 0x38);
      pfVar18[1] = ((fVar28 + fVar34 * fVar37 + fVar36 * fVar39) - fVar31 * fVar38) / fVar32;
      pfVar18[2] = ((fVar29 + fVar36 * fVar37 + fVar30 * fVar38) - fVar34 * fVar39) / fVar35;
      fVar30 = *(float *)(lVar21 + 0x18);
      fVar31 = *(float *)(lVar21 + 0x1c);
      fVar28 = (float)(param_2[1] - *(double *)(lVar21 + 0x28));
      fVar36 = *(float *)(lVar21 + 0x10);
      fVar34 = *(float *)(lVar21 + 0x14);
      fVar27 = (float)(*param_2 - *(double *)(lVar21 + 0x20));
      fVar29 = (float)(dVar33 - *(double *)(lVar21 + 0x30));
      fVar37 = fVar30 * fVar27 - fVar34 * fVar28;
      fVar38 = fVar31 * fVar28 - fVar30 * fVar29;
      fVar39 = fVar34 * fVar29 - fVar31 * fVar27;
      fVar37 = fVar37 + fVar37;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar32 = *(float *)(lVar21 + 0x3c);
      fVar35 = *(float *)(lVar21 + 0x40);
      *pfVar1 = ((fVar27 - fVar30 * fVar37) + fVar36 * fVar38 + fVar31 * fVar39) /
                *(float *)(lVar21 + 0x38);
      pfVar1[1] = ((fVar28 + fVar34 * fVar37 + fVar36 * fVar39) - fVar31 * fVar38) / fVar32;
      pfVar1[2] = ((fVar29 + fVar36 * fVar37 + fVar30 * fVar38) - fVar34 * fVar39) / fVar35;
      fVar30 = *(float *)(lVar21 + 0x18);
      fVar31 = *(float *)(lVar21 + 0x1c);
      fVar27 = (float)(dVar23 - *(double *)(lVar21 + 0x28));
      fVar36 = *(float *)(lVar21 + 0x10);
      fVar34 = *(float *)(lVar21 + 0x14);
      fVar29 = (float)(dVar26 - *(double *)(lVar21 + 0x20));
      fVar28 = (float)(dVar25 - *(double *)(lVar21 + 0x30));
      fVar37 = fVar30 * fVar29 - fVar34 * fVar27;
      fVar38 = fVar31 * fVar27 - fVar30 * fVar28;
      fVar39 = fVar34 * fVar28 - fVar31 * fVar29;
      fVar37 = fVar37 + fVar37;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar32 = *(float *)(lVar21 + 0x3c);
      fVar35 = *(float *)(lVar21 + 0x40);
      *pfVar2 = ((fVar29 - fVar30 * fVar37) + fVar36 * fVar38 + fVar31 * fVar39) /
                *(float *)(lVar21 + 0x38);
      pfVar2[1] = ((fVar27 + fVar34 * fVar37 + fVar36 * fVar39) - fVar31 * fVar38) / fVar32;
      pfVar2[2] = ((fVar28 + fVar36 * fVar37 + fVar30 * fVar38) - fVar34 * fVar39) / fVar35;
      uVar11 = FUN__text__005427e8();
      if ((uVar11 & 1) == 0) {
        return 1;
      }
      lVar17 = lVar17 + 0xc;
      lVar20 = lVar20 + 0x28;
      fVar28 = *(float *)(lVar21 + 0x3c) * pfVar3[1];
      fVar36 = *(float *)(lVar21 + 0x10);
      fVar34 = *(float *)(lVar21 + 0x14);
      fVar27 = *(float *)(lVar21 + 0x38) * *pfVar3;
      fVar29 = *(float *)(lVar21 + 0x40) * pfVar3[2];
      fVar30 = *(float *)(lVar21 + 0x18);
      fVar32 = *(float *)(lVar21 + 0x1c);
      fVar37 = fVar34 * fVar27 + fVar28 * fVar30 + fVar29 * fVar32;
      fVar38 = fVar36 * fVar36 - (fVar34 * fVar34 + fVar30 * fVar30 + fVar32 * fVar32);
      fVar31 = (fVar32 * fVar27 - fVar29 * fVar34) * fVar36 + fVar30 * fVar37;
      fVar35 = (fVar30 * fVar29 - fVar32 * fVar28) * fVar36 + fVar34 * fVar37;
      fVar30 = (fVar34 * fVar28 - fVar30 * fVar27) * fVar36 + fVar32 * fVar37;
      dVar26 = *(double *)(lVar21 + 0x20) + (double)(fVar35 + fVar35 + fVar27 * fVar38);
      dVar23 = *(double *)(lVar21 + 0x28) + (double)(fVar31 + fVar31 + fVar28 * fVar38);
      dVar25 = *(double *)(lVar21 + 0x30) + (double)(fVar30 + fVar30 + fVar29 * fVar38);
    } while ((ulong)uVar4 * 0xc != lVar17);
  }
  lVar17 = local_270;
  uVar11 = (ulong)(uVar4 - 1);
  local_1f8[0] = 0;
  local_d0 = 0.0;
  fStack_cc = 1.0;
  local_210 = *param_2;
  local_208 = param_2[1];
  local_1f0[0] = 0.0;
  local_1f0[1] = 0.0;
  local_130[8] = 0;
  local_130[9] = 0;
  local_130[10] = 0;
  local_130[0xb] = 0;
  local_1f0[2] = 0.0;
  local_1f0[3] = 0.0;
  local_200 = param_2[2];
  local_228 = *param_2;
  dStack_220 = param_2[1];
  local_218 = param_2[2];
  local_1f0[4] = 0.0;
  local_1f0[5] = 0.0;
  local_1f0[6] = 0.0;
  local_1f0[7] = 0.0;
  local_1f0[8] = 0.0;
  local_1f0[9] = 0.0;
  local_1f0[10] = 0.0;
  local_1f0[0xb] = 0.0;
  local_1f0[0xc] = 0.0;
  local_1f0[0xd] = 0.0;
  local_1f0[0xe] = 0.0;
  local_1f0[0xf] = 0.0;
  local_1f0[0x10] = 0.0;
  local_1f0[0x11] = 0.0;
  local_1f0[0x12] = 0.0;
  local_1f0[0x13] = 0.0;
  local_1f0[0x14] = 0.0;
  local_1f0[0x15] = 0.0;
  local_1f0[0x16] = 0.0;
  local_1f0[0x17] = 0.0;
  local_130[0] = 0;
  local_130[1] = 0;
  local_130[2] = 0;
  local_130[3] = 0;
  local_130[4] = 0;
  local_130[5] = 0;
  local_130[6] = 0;
  local_130[7] = 0;
  local_c8 = uVar4;
  if ((int)(uVar4 - 1) < 0) {
    pdVar16 = local_1f0 + uVar11 * 3;
    *(undefined8 *)(lVar12 + -0x20) = 0;
    *(undefined8 *)(lVar12 + -0x18) = 0;
    *(undefined8 *)(lVar12 + -0x10) = 0;
    uVar11 = FUN__text__00538834(lVar17,param_3,pdVar16,0,0,0,0,0);
    if ((uVar11 & 1) == 0) {
LAB__text__005380e0:
      local_1f8[0] = FUN__text__005426f0(param_4);
      memcpy(local_2e8,local_1f8,0x134);
      return 0;
    }
    lVar17 = 0;
    lVar22 = 0;
  }
  else {
    auVar24 = NEON_fmov(0x3f800000,4);
    lVar17 = 0;
    lVar20 = 0;
    lVar21 = 0;
    uStack_2a8 = auVar24._8_8_;
    local_2b0 = auVar24._0_8_;
    local_268 = 0;
    local_290 = param_4;
    local_288 = param_3;
    local_278 = uVar11;
    do {
      lVar15 = local_278 - uVar11;
      lVar13 = *(long *)(param_4 + 0x38) + uVar11 * 0x28;
      lVar22 = *(long *)(lVar13 + 0x20);
      fVar30 = *(float *)(lVar22 + 0x18);
      fVar31 = *(float *)(lVar22 + 0x1c);
      fVar36 = *(float *)(lVar22 + 0x10);
      fVar35 = *(float *)(lVar22 + 0x14);
      fVar28 = (float)(local_208 - *(double *)(lVar22 + 0x28));
      fVar27 = (float)(local_210 - *(double *)(lVar22 + 0x20));
      fVar29 = (float)(local_200 - *(double *)(lVar22 + 0x30));
      fVar37 = fVar30 * fVar27 - fVar35 * fVar28;
      fVar32 = fVar31 * fVar28 - fVar30 * fVar29;
      fVar34 = fVar35 * fVar29 - fVar31 * fVar27;
      fVar37 = fVar37 + fVar37;
      fVar32 = fVar32 + fVar32;
      fVar34 = fVar34 + fVar34;
      local_234 = ((fVar27 - fVar30 * fVar37) + fVar36 * fVar32 + fVar31 * fVar34) /
                  *(float *)(lVar22 + 0x38);
      fStack_230 = ((fVar28 + fVar35 * fVar37 + fVar36 * fVar34) - fVar31 * fVar32) /
                   *(float *)(lVar22 + 0x3c);
      local_22c = ((fVar29 + fVar36 * fVar37 + fVar30 * fVar32) - fVar35 * fVar34) /
                  *(float *)(lVar22 + 0x40);
      plVar14 = (long *)(lVar13 + 0x18);
      if (*plVar14 == 0) {
        local_240 = 0;
        lVar13 = *(long *)(*(long *)(param_4 + 0x38) + uVar11 * 0x28 + 0x10);
        local_238 = 0.0;
        pfVar18 = (float *)(local_258 + uVar11 * 0xc);
        local_a0 = CONCAT44(fStack_230,local_234);
        uStack_98 = CONCAT44((int)((ulong)uStack_2a8 >> 0x20),local_22c);
        fVar27 = pfVar18[2] - local_22c;
        auVar24._4_4_ = pfVar18[1] - fStack_230;
        auVar24._0_4_ = *pfVar18 - local_234;
        auVar24._8_4_ = fVar27;
        auVar24._12_4_ = 0;
        local_298 = lVar20;
        local_280 = lVar17;
        lVar17 = FUN__text__0053cb30(auVar24,fVar27,pfVar18[2],pfVar18[1] - fStack_230,lVar13 + 0x18
                                     ,&local_a0,&local_b0);
        if (lVar17 == 0) {
LAB__text__00537c30:
          lVar17 = local_280;
          plVar14 = local_130 + lVar15;
          *plVar14 = 0;
          local_a0 = 0;
          lVar20 = local_260 + uVar11 * 0xc;
          local_bc = (ulong)local_bc._4_4_ << 0x20;
          local_b0 = 1.0;
          local_84[0] = *(float *)(lVar13 + 0x30);
          uVar8 = (ulong)(uint)local_84[0];
          local_2c8 = lVar21;
          uStack_2c0 = uVar11;
          local_2b8 = lVar15;
          if (local_84[0] != 0.0) {
            lVar21 = 0;
            do {
              uVar9 = *(undefined8 *)(*(long *)(lVar13 + 0x28) + lVar21);
              *(undefined8 **)(lVar12 + -0x10) = &local_240;
              *(long **)(lVar12 + -8) = plVar14;
              *(long *)(lVar12 + -0x20) = lVar22;
              *(undefined8 **)(lVar12 + -0x18) = &local_a0;
              FUN__text__0053d0a0(uVar9,&local_234,lVar20,pfVar18,lVar13,lVar17,&local_bc,&local_b0)
              ;
              lVar21 = lVar21 + 8;
            } while (uVar8 * 8 != lVar21);
          }
          lVar21 = FUN__text__0051f820(lVar22,lVar13,local_84);
          if (local_84[0] != 0.0) {
            uVar11 = 0;
            do {
              uVar9 = *(undefined8 *)(lVar21 + uVar11 * 8);
              *(undefined8 **)(lVar12 + -0x10) = &local_240;
              *(long **)(lVar12 + -8) = plVar14;
              *(long *)(lVar12 + -0x20) = lVar22;
              *(undefined8 **)(lVar12 + -0x18) = &local_a0;
              FUN__text__0053d0a0(uVar9,&local_234,lVar20,pfVar18,lVar13,lVar17,&local_bc,&local_b0)
              ;
              uVar11 = uVar11 + 1;
            } while (uVar11 < (uint)local_84[0]);
          }
          lVar19 = local_a0;
          fVar27 = local_b0;
          fStack_cc = fStack_cc * (float)local_bc;
          local_84[local_2b8 + -0x1b] = local_b0;
          if (lVar19 == 0) {
            return 1;
          }
          fVar27 = local_d0 + fVar27;
          local_d0 = (float)NEON_fminnm(fVar27,0x3f800000);
          if (1.0 <= fVar27) {
            return 1;
          }
          if (fStack_cc <= 0.001) {
            return 1;
          }
          lVar21 = local_2c8;
          lVar15 = local_2b8;
          uVar11 = uStack_2c0;
          param_3 = local_288;
          param_4 = local_290;
          if (*plVar14 == 0) {
            return 1;
          }
        }
        else {
          local_bc = CONCAT44(uStack_ac,local_b0);
          local_b4 = local_a8;
          uVar8 = FUN__text__0051ed40(lVar22,lVar17,&local_bc);
          if ((uVar8 & 1) != 0) goto LAB__text__00537c30;
          local_240 = local_bc;
          local_238 = local_b4;
          lVar17 = FUN__text__00530d5c(lVar17);
          lVar19 = 0;
          local_130[lVar15] = lVar17;
        }
        lVar6 = local_268;
        lVar5 = local_270;
        lVar20 = local_280;
        lVar17 = local_298;
        fVar28 = *(float *)(lVar22 + 0x3c) * local_240._4_4_;
        fVar27 = *(float *)(lVar22 + 0x38) * (float)local_240;
        fVar36 = *(float *)(lVar22 + 0x10);
        fVar34 = *(float *)(lVar22 + 0x14);
        fVar29 = *(float *)(lVar22 + 0x40) * local_238;
        fVar30 = *(float *)(lVar22 + 0x18);
        fVar32 = *(float *)(lVar22 + 0x1c);
        fVar37 = fVar34 * fVar27 + fVar28 * fVar30 + fVar29 * fVar32;
        fVar38 = fVar36 * fVar36 - (fVar34 * fVar34 + fVar30 * fVar30 + fVar32 * fVar32);
        fVar35 = (fVar30 * fVar29 - fVar32 * fVar28) * fVar36 + fVar34 * fVar37;
        fVar31 = (fVar32 * fVar27 - fVar29 * fVar34) * fVar36 + fVar30 * fVar37;
        fVar30 = (fVar34 * fVar28 - fVar30 * fVar27) * fVar36 + fVar32 * fVar37;
        dVar25 = *(double *)(lVar22 + 0x28);
        dVar23 = *(double *)(lVar22 + 0x30);
        pdVar16 = local_1f0 + lVar15 * 3;
        *pdVar16 = *(double *)(lVar22 + 0x20) + (double)(fVar35 + fVar35 + fVar27 * fVar38);
        local_1f0[lVar15 * 3 + 1] = dVar25 + (double)(fVar31 + fVar31 + fVar28 * fVar38);
        local_1f0[lVar15 * 3 + 2] = dVar23 + (double)(fVar30 + fVar30 + fVar29 * fVar38);
        *(long *)(lVar12 + -0x10) = lVar21;
        *(long *)(lVar12 + -0x20) = lVar17;
        *(long *)(lVar12 + -0x18) = lVar20;
        uVar8 = FUN__text__00538834(lVar5,pdVar16,&local_210,lVar22,lVar6,0,lVar13,lVar19);
        if ((uVar8 & 1) != 0) {
          if (local_2d0 != (double *)0x0) {
            dVar23 = local_1f0[lVar15 * 3 + 1];
            *local_2d0 = *pdVar16;
            local_2d0[1] = dVar23;
            local_2d0[2] = local_1f0[lVar15 * 3 + 2];
          }
          if ((local_2d8 != (long *)0x0) && (local_2e0 != (long *)0x0)) {
            *local_2d8 = lVar13;
            *local_2e0 = lVar22;
          }
          bVar7 = (int)local_278 == (int)uVar11;
LAB__text__0053813c:
          uVar10 = 4;
          if (!bVar7) {
            uVar10 = 1;
          }
          return uVar10;
        }
        if (lVar17 != 0) {
          uVar8 = FUN__text__00538a60(lVar17,local_268,&local_228,pdVar16,
                                      local_1f0 + (lVar15 + -1) * 3,local_84 + lVar15 + -0x1c);
          if ((uVar8 & 1) == 0) {
            return 1;
          }
          fVar27 = local_d0 + local_84[lVar15 + -0x1c];
          local_d0 = (float)NEON_fminnm(fVar27,0x3f800000);
          if (1.0 <= fVar27) {
            return 1;
          }
        }
        local_228 = local_210;
        dStack_220 = local_208;
        lVar20 = 0;
        lVar17 = lVar13;
        local_210 = *pdVar16;
        local_208 = local_1f0[lVar15 * 3 + 1];
        dVar23 = local_1f0[lVar15 * 3 + 2];
        lVar21 = lVar19;
        local_218 = local_200;
        uVar8 = local_278;
        lVar15 = local_270;
        lVar13 = local_268;
      }
      else {
        if (*(int *)(local_270 + 0x20) == 0) {
          return 1;
        }
        local_a0 = 0;
        uStack_98 = uStack_98 & 0xffffffff00000000;
        uVar8 = FUN__text__005170c0(*plVar14,local_248 + uVar11 * 0xc,local_250 + uVar11 * 0xc,
                                    &local_a0);
        if ((uVar8 & 1) == 0) {
          return 1;
        }
        fVar35 = *(float *)(lVar22 + 0x18);
        fVar36 = *(float *)(lVar22 + 0x1c);
        fVar28 = *(float *)(lVar22 + 0x3c) * local_a0._4_4_;
        fVar27 = *(float *)(lVar22 + 0x38) * (float)local_a0;
        fVar29 = *(float *)(lVar22 + 0x40) * (float)uStack_98;
        fVar32 = *(float *)(lVar22 + 0x10);
        fVar30 = *(float *)(lVar22 + 0x14);
        uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar11 * 0x28 + 0x18);
        fVar34 = fVar30 * fVar27 + fVar28 * fVar35 + fVar29 * fVar36;
        fVar31 = (fVar35 * fVar29 - fVar36 * fVar28) * fVar32 + fVar30 * fVar34;
        fVar37 = (fVar36 * fVar27 - fVar29 * fVar30) * fVar32 + fVar35 * fVar34;
        fVar34 = (fVar30 * fVar28 - fVar35 * fVar27) * fVar32 + fVar36 * fVar34;
        fVar30 = fVar32 * fVar32 - (fVar30 * fVar30 + fVar35 * fVar35 + fVar36 * fVar36);
        dVar25 = *(double *)(lVar22 + 0x30);
        dVar23 = *(double *)(lVar22 + 0x28);
        pdVar16 = local_1f0 + lVar15 * 3;
        *pdVar16 = *(double *)(lVar22 + 0x20) + (double)(fVar31 + fVar31 + fVar27 * fVar30);
        local_1f0[lVar15 * 3 + 1] = dVar23 + (double)(fVar37 + fVar37 + fVar28 * fVar30);
        local_1f0[lVar15 * 3 + 2] = dVar25 + (double)(fVar34 + fVar34 + fVar29 * fVar30);
        *(long *)(lVar12 + -0x18) = lVar17;
        *(long *)(lVar12 + -0x10) = lVar21;
        lVar21 = local_268;
        lVar17 = local_270;
        *(long *)(lVar12 + -0x20) = lVar20;
        uVar8 = FUN__text__00538834(lVar17,pdVar16,&local_210,lVar22,lVar21,uVar9,0,0);
        param_3 = local_288;
        if ((uVar8 & 1) != 0) {
          if (local_2d0 != (double *)0x0) {
            dVar23 = local_1f0[lVar15 * 3 + 1];
            *local_2d0 = *pdVar16;
            local_2d0[1] = dVar23;
            local_2d0[2] = local_1f0[lVar15 * 3 + 2];
          }
          if ((local_2d8 != (long *)0x0) && (local_2e0 != (long *)0x0)) {
            *local_2d8 = 0;
            *local_2e0 = 0;
          }
          bVar7 = (int)local_278 == (int)uVar11;
          goto LAB__text__0053813c;
        }
        if (lVar20 != 0) {
          uVar8 = FUN__text__00538a60(lVar20,lVar21,&local_228,pdVar16,local_1f0 + (lVar15 + -1) * 3
                                      ,local_84 + lVar15 + -0x1c);
          if ((uVar8 & 1) == 0) {
            return 1;
          }
          fVar27 = local_d0 + local_84[lVar15 + -0x1c];
          local_d0 = (float)NEON_fminnm(fVar27,0x3f800000);
          if (1.0 <= fVar27) {
            return 1;
          }
        }
        lVar21 = 0;
        lVar17 = 0;
        local_228 = local_210;
        dStack_220 = local_208;
        local_208 = local_1f0[lVar15 * 3 + 1];
        local_218 = local_200;
        local_210 = *pdVar16;
        lVar20 = *(long *)(*(long *)(local_290 + 0x38) + uVar11 * 0x28 + 0x18);
        dVar23 = local_1f0[lVar15 * 3 + 2];
        param_4 = local_290;
        uVar8 = local_278;
        lVar15 = local_270;
        lVar13 = local_268;
      }
      local_200 = dVar23;
      bVar7 = 0 < (long)uVar11;
      uVar11 = uVar11 - 1;
      local_268 = lVar22;
      local_278 = uVar8;
      local_270 = lVar15;
    } while (bVar7);
    pdVar16 = local_1f0 + (uVar8 & 0xffffffff) * 3;
    local_268 = lVar13;
    *(long *)(lVar12 + -0x20) = lVar20;
    *(long *)(lVar12 + -0x18) = lVar17;
    *(long *)(lVar12 + -0x10) = lVar21;
    uVar11 = FUN__text__00538834(lVar15,param_3,pdVar16,0,lVar22,0,0,0);
    if ((uVar11 & 1) == 0) {
      if (lVar20 != 0) {
        uVar11 = FUN__text__00538a60(lVar20,lVar22,&local_228,param_3,pdVar16,
                                     local_84 + (uVar8 - 0x1b));
        if (((uVar11 & 1) == 0) ||
           (fVar27 = local_d0 + local_84[uVar8 - 0x1b],
           local_d0 = (float)NEON_fminnm(fVar27,0x3f800000), 1.0 <= fVar27)) {
          return 2;
        }
      }
      goto LAB__text__005380e0;
    }
  }
  if (local_2d0 != (double *)0x0) {
    dVar23 = pdVar16[1];
    *local_2d0 = *pdVar16;
    local_2d0[1] = dVar23;
    local_2d0[2] = pdVar16[2];
    if ((local_2d8 != (long *)0x0) && (local_2e0 != (long *)0x0)) {
      *local_2d8 = lVar17;
      *local_2e0 = lVar22;
    }
  }
  return 3;
}


