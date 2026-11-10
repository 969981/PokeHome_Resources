/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00517420; name: FUN_.text__00517420
 */


undefined4
FUN__text__00517420(undefined4 param_1,long *param_2,double *param_3,undefined8 param_4,long param_5
                   ,double *param_6,undefined8 param_7,int param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  char cVar17;
  float fVar18;
  float extraout_s0;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  float local_188;
  float local_184;
  float local_180;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_118;
  ulong local_110;
  undefined2 local_108;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 *local_b0 [2];
  
  *(undefined4 *)(param_2 + 7) = param_1;
  fVar26 = *(float *)(param_5 + 0x18);
  fVar27 = *(float *)(param_5 + 0x1c);
  fVar32 = *(float *)(param_5 + 0x10);
  fVar31 = *(float *)(param_5 + 0x14);
  fVar19 = (float)(param_3[1] - *(double *)(param_5 + 0x28));
  fVar23 = (float)(param_6[1] - *(double *)(param_5 + 0x28));
  fVar18 = (float)(*param_3 - *(double *)(param_5 + 0x20));
  fVar24 = (float)(param_3[2] - *(double *)(param_5 + 0x30));
  fVar21 = (float)(*param_6 - *(double *)(param_5 + 0x20));
  fVar25 = (float)(param_6[2] - *(double *)(param_5 + 0x30));
  fVar33 = fVar26 * fVar18 - fVar31 * fVar19;
  fVar35 = fVar27 * fVar19 - fVar26 * fVar24;
  fVar36 = fVar31 * fVar24 - fVar27 * fVar18;
  fVar34 = fVar26 * fVar21 - fVar31 * fVar23;
  fVar37 = fVar27 * fVar23 - fVar26 * fVar25;
  fVar38 = fVar31 * fVar25 - fVar27 * fVar21;
  fVar33 = fVar33 + fVar33;
  fVar35 = fVar35 + fVar35;
  fVar36 = fVar36 + fVar36;
  fVar34 = fVar34 + fVar34;
  fVar37 = fVar37 + fVar37;
  fVar38 = fVar38 + fVar38;
  local_270 = CONCAT44(((fVar19 + fVar31 * fVar33 + fVar32 * fVar36) - fVar27 * fVar35) /
                       *(float *)(param_5 + 0x3c),
                       ((fVar18 - fVar26 * fVar33) + fVar32 * fVar35 + fVar27 * fVar36) /
                       *(float *)(param_5 + 0x38));
  local_268 = CONCAT44(local_268._4_4_,
                       ((fVar24 + fVar32 * fVar33 + fVar26 * fVar35) - fVar31 * fVar36) /
                       *(float *)(param_5 + 0x40));
  local_f8 = (double)CONCAT44(((fVar23 + fVar31 * fVar34 + fVar32 * fVar38) - fVar27 * fVar37) /
                              *(float *)(param_5 + 0x3c),
                              ((fVar21 - fVar26 * fVar34) + fVar32 * fVar37 + fVar27 * fVar38) /
                              *(float *)(param_5 + 0x38));
  local_f0 = (double)CONCAT44(local_f0._4_4_,
                              ((fVar25 + fVar32 * fVar34 + fVar26 * fVar37) - fVar31 * fVar38) /
                              *(float *)(param_5 + 0x40));
  FUN__text__00517c30(param_1,param_2,param_4,param_5,0,&local_270,param_3,&local_270,param_9,
                      &local_f8,param_6,0);
  local_278 = 0;
  do {
    if ((int)param_2[6] == 0) break;
    lVar6 = FUN__text__00518440(param_2);
    uVar7 = FUN__text__005185c0(param_2,lVar6,param_3);
    if ((uVar7 & 1) == 0) {
LAB__text__005175d0:
      iVar11 = 6;
    }
    else {
      lVar1 = *(long *)(lVar6 + 0x30);
      lVar2 = *(long *)(lVar6 + 0x38);
      dVar28 = param_6[2];
      dVar29 = *param_6;
      dVar30 = param_6[1];
      fVar23 = *(float *)(lVar2 + 0x18);
      fVar24 = *(float *)(lVar2 + 0x1c);
      fVar33 = *(float *)(lVar2 + 0x10);
      fVar32 = *(float *)(lVar2 + 0x14);
      fVar19 = (float)(dVar30 - *(double *)(lVar2 + 0x28));
      fVar18 = (float)(dVar29 - *(double *)(lVar2 + 0x20));
      fVar21 = (float)(dVar28 - *(double *)(lVar2 + 0x30));
      fVar34 = fVar23 * fVar18 - fVar32 * fVar19;
      fVar27 = fVar24 * fVar19 - fVar23 * fVar21;
      fVar31 = fVar32 * fVar21 - fVar24 * fVar18;
      fVar34 = fVar34 + fVar34;
      fVar27 = fVar27 + fVar27;
      fVar31 = fVar31 + fVar31;
      fVar26 = ((fVar18 - fVar23 * fVar34) + fVar33 * fVar27 + fVar24 * fVar31) /
               *(float *)(lVar2 + 0x38);
      fVar25 = ((fVar19 + fVar32 * fVar34 + fVar33 * fVar31) - fVar24 * fVar27) /
               *(float *)(lVar2 + 0x3c);
      fVar24 = ((fVar21 + fVar33 * fVar34 + fVar23 * fVar27) - fVar32 * fVar31) /
               *(float *)(lVar2 + 0x40);
      fVar18 = fVar26 - *(float *)(lVar1 + 4);
      fVar19 = fVar25 - *(float *)(lVar1 + 8);
      fVar21 = fVar24 - *(float *)(lVar1 + 0xc);
      dVar22 = (double)(ulong)(uint)fVar21;
      fVar23 = fVar18 * *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x20) * fVar19 +
               *(float *)(lVar1 + 0x24) * fVar21;
      fVar18 = *(float *)(lVar1 + 0x28) * fVar18 + fVar19 * *(float *)(lVar1 + 0x2c) +
               fVar21 * *(float *)(lVar1 + 0x30);
      dVar20 = 4.70976965633203e-315;
      cVar17 = -2;
      if (fVar23 < 0.0001 && -0.0001 < fVar18) {
        cVar17 = '\x01';
      }
      if (fVar18 < 0.0001 && -0.0001 < fVar23) {
        cVar17 = '\0';
      }
      if (0.0001 < fVar18 && 0.0001 < fVar23 ||
          (fVar18 < 0.0001 && -0.0001 < fVar23) && (fVar23 < 0.0001 && -0.0001 < fVar18)) {
        cVar17 = -1;
      }
      if ((cVar17 < '\0') || (cVar17 == *(char *)(lVar6 + 0x6c))) {
LAB__text__0051782c:
        if (*(char *)(lVar6 + 0x6e) < param_8) {
          FUN__text__0051c420(&local_270,*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(lVar6 + 0x38)
                              ,*(char *)(lVar6 + 0x6c) == '\0');
          uVar7 = FUN__text__0051c5f0(&local_270);
          while ((uVar7 & 1) == 0) {
            FUN__text__00518b90(param_1,param_2,lVar6,&local_270,param_3,param_6);
            FUN__text__0051c69c(&local_270);
            uVar7 = FUN__text__0051c5f0(&local_270);
          }
          FUN__text__0051c540(&local_270);
        }
        iVar11 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar6 + 0x30);
        uVar3 = *(undefined8 *)(lVar6 + 0x38);
        local_1a0 = (double)FUN__text__00518834(lVar6,*(char *)(lVar6 + 0x6c) == '\0');
        local_b0[0] = &local_270;
        local_188 = (float)(dVar29 - local_1a0);
        local_184 = (float)(dVar30 - dVar20);
        local_180 = (float)(dVar28 - dVar22);
        local_118 = 0;
        local_110 = 0x3f80000000000000;
        local_108 = 0;
        dStack_e0 = (double)local_188;
        local_d8 = (double)local_184;
        local_c8 = 1.0 / dStack_e0;
        dStack_d0 = (double)local_180;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d0 = 0;
        uStack_1c8 = 0;
        dStack_c0 = 1.0 / local_d8;
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        local_200 = 0;
        uStack_1f8 = 0;
        local_210 = 0;
        uStack_208 = 0;
        local_220 = 0;
        uStack_218 = 0;
        local_230 = 0;
        uStack_228 = 0;
        local_240 = 0;
        uStack_238 = 0;
        local_250 = 0;
        uStack_248 = 0;
        local_260 = 0;
        uStack_258 = 0;
        local_270 = 0;
        local_268 = 0;
        local_b8 = 1.0 / dStack_d0;
        lVar9 = *(long *)(*param_2 + 0x10);
        dStack_198 = dVar20;
        local_190 = dVar22;
        local_150 = uVar8;
        uStack_148 = uVar3;
        local_f8 = local_1a0;
        local_f0 = dVar20;
        local_e8 = dVar22;
        if (lVar9 != 0) {
          FUN__text__0051a160(*param_2 + 8,lVar9,&local_f8,local_b0);
          if ((int)local_110 != 0) {
            FUN__text__0051a9cc(&local_270);
            local_110 = local_110 & 0xffffffff00000000;
          }
          if ((char)local_108 != '\0') goto LAB__text__0051782c;
        }
        fVar18 = SUB84(dVar20,0);
        fVar19 = SUB84(dVar22,0);
        if (*(long *)(lVar6 + 0x40) == 0) {
          fVar27 = *(float *)(lVar2 + 0x18);
          fVar31 = *(float *)(lVar2 + 0x1c);
          fVar35 = *(float *)(lVar2 + 0x10);
          fVar34 = *(float *)(lVar2 + 0x14);
          fVar19 = (float)(param_3[1] - *(double *)(lVar2 + 0x28));
          fVar18 = (float)(*param_3 - *(double *)(lVar2 + 0x20));
          fVar23 = (float)(param_3[2] - *(double *)(lVar2 + 0x30));
          fVar36 = fVar27 * fVar18 - fVar34 * fVar19;
          fVar32 = fVar31 * fVar19 - fVar27 * fVar23;
          fVar33 = fVar34 * fVar23 - fVar31 * fVar18;
          fVar36 = fVar36 + fVar36;
          fVar32 = fVar32 + fVar32;
          fVar33 = fVar33 + fVar33;
          fVar21 = ((fVar18 - fVar27 * fVar36) + fVar35 * fVar32 + fVar31 * fVar33) /
                   *(float *)(lVar2 + 0x38);
          fVar18 = ((fVar19 + fVar34 * fVar36 + fVar35 * fVar33) - fVar31 * fVar32) /
                   *(float *)(lVar2 + 0x3c);
          fVar19 = ((fVar23 + fVar35 * fVar36 + fVar27 * fVar32) - fVar34 * fVar33) /
                   *(float *)(lVar2 + 0x40);
          uVar8 = 0;
        }
        else {
          uVar8 = FUN__text__005189c0(*(long *)(lVar6 + 0x40),lVar2);
          fVar21 = extraout_s0;
        }
        fVar31 = *(float *)(lVar1 + 0x14);
        fVar27 = *(float *)(lVar1 + 0x18);
        fVar34 = *(float *)(lVar1 + 0x10);
        fVar32 = fVar27 * *(float *)(lVar1 + 0x20) - fVar31 * *(float *)(lVar1 + 0x24);
        fVar23 = fVar34 * *(float *)(lVar1 + 0x24) - *(float *)(lVar1 + 0x1c) * fVar27;
        fVar33 = *(float *)(lVar1 + 0x1c) * fVar31 - fVar34 * *(float *)(lVar1 + 0x20);
        fVar19 = fVar19 - *(float *)(lVar1 + 0xc);
        fVar24 = fVar24 - *(float *)(lVar1 + 0xc);
        fVar18 = fVar18 - *(float *)(lVar1 + 8);
        fVar25 = fVar25 - *(float *)(lVar1 + 8);
        fVar21 = fVar21 - *(float *)(lVar1 + 4);
        fVar26 = fVar26 - *(float *)(lVar1 + 4);
        fVar35 = fVar21 * fVar34 + fVar31 * fVar18 + fVar27 * fVar19;
        fVar21 = fVar21 - fVar34 * fVar35;
        fVar18 = fVar18 - fVar31 * fVar35;
        fVar19 = fVar19 - fVar27 * fVar35;
        fVar35 = fVar26 * fVar34 + fVar31 * fVar25 + fVar27 * fVar24;
        fVar26 = fVar26 - fVar34 * fVar35;
        fVar25 = fVar25 - fVar31 * fVar35;
        fVar24 = fVar24 - fVar27 * fVar35;
        if ((fVar26 * fVar32 + fVar23 * fVar25 + fVar33 * fVar24) /
            SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar24 * fVar24) + 1.1920929e-07 <
            (-(fVar19 * fVar33) - (fVar21 * fVar32 + fVar23 * fVar18)) /
            SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar19 * fVar19)) goto LAB__text__005175d0;
        FUN__text__00518a70(uVar8,lVar6,param_7);
        *(undefined4 *)(param_2 + 6) = 0;
        local_278 = 1;
        iVar11 = 7;
      }
    }
  } while (iVar11 != 7);
  if ((int)param_2[3] != 0) {
    plVar12 = *(long **)param_2[2];
    if (plVar12 == (long *)0x0) {
      uVar7 = 0;
      do {
        if ((int)param_2[3] - 1 == uVar7) {
          return local_278;
        }
        plVar12 = (long *)((undefined8 *)param_2[2])[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (plVar12 == (long *)0x0);
    }
    else {
      uVar7 = 0;
    }
    uVar15 = uVar7 & 0xffffffff;
    do {
      plVar13 = (long *)plVar12[9];
      plVar16 = plVar13;
      if (plVar13 == (long *)0x0) {
        uVar4 = *(uint *)(param_2 + 3);
        if (uVar4 <= (int)uVar7 + 1U) {
          uVar4 = (int)uVar7 + 1;
        }
        uVar15 = (ulong)uVar4;
        uVar14 = uVar7 & 0xffffffff;
        do {
          if (uVar4 - 1 == (int)uVar14) {
            plVar16 = (long *)0x0;
            goto LAB__text__00517b04;
          }
          uVar14 = (ulong)((int)uVar14 + 1);
          plVar16 = *(long **)(param_2[2] + uVar14 * 8);
        } while (plVar16 == (long *)0x0);
        uVar15 = uVar14;
      }
LAB__text__00517b04:
      *(long **)(param_2[2] + (uVar7 & 0xffffffff) * 8) = plVar13;
      plVar13 = (long *)param_2[1];
      *(int *)(param_2 + 4) = (int)param_2[4] + -1;
      lVar6 = lRam0000000000000390;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
joined_r0x00517b5c:
        plVar5 = (long *)0x0;
        plVar10 = plVar13;
joined_r0x00517b5c:
        plVar13 = plVar5;
        if (lVar6 == 0) goto LAB__text__00517b60;
LAB__text__00517bc8:
        *plVar12 = lVar6;
        plVar10[0x72] = (long)plVar12;
        iVar11 = (int)plVar10[0x71] + 1;
        *(int *)(plVar10 + 0x71) = iVar11;
      }
      else {
        if ((plVar13 <= plVar12) && (plVar12 < plVar13 + 0x70)) {
          lVar6 = plVar13[0x72];
          goto joined_r0x00517b5c;
        }
        plVar10 = (long *)plVar13[0x70];
        plVar5 = plVar10;
        if (plVar10 != (long *)0x0) {
          do {
            if ((plVar5 <= plVar12) && (plVar10 = plVar5, plVar12 < plVar5 + 0x70)) break;
            plVar10 = (long *)plVar5[0x70];
            plVar13 = plVar5;
            plVar5 = plVar10;
          } while (plVar10 != (long *)0x0);
          lVar6 = plVar10[0x72];
          plVar5 = plVar13;
          goto joined_r0x00517b5c;
        }
        if (lRam0000000000000390 != 0) goto LAB__text__00517bc8;
LAB__text__00517b60:
        plVar10[0x72] = (long)plVar12;
        *plVar12 = 0;
        iVar11 = (int)plVar10[0x71] + 1;
        *(int *)(plVar10 + 0x71) = iVar11;
      }
      if (iVar11 == 8) {
        plVar12 = param_2 + 1;
        if ((long *)param_2[1] != plVar10) {
          plVar12 = plVar13 + 0x70;
        }
        *plVar12 = plVar10[0x70];
        FUN__text__00400fc0(0xb);
      }
      plVar12 = plVar16;
      uVar7 = uVar15;
    } while (plVar16 != (long *)0x0);
  }
  return local_278;
}


