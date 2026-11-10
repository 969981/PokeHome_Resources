/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053bdb0; name: FUN_.text__0053bdb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053bdb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                        undefined8 param_5,float *param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *__dest;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  ulong local_210;
  undefined4 local_208;
  long local_200;
  ulong local_1f8;
  undefined4 local_1f0;
  long local_1e8 [5];
  undefined4 local_1c0;
  long local_1b0;
  ulong local_1a8;
  undefined4 local_19c;
  float local_198;
  float fStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar15 = (long *)param_4[3];
  uVar4 = FUN__text__005426f0(param_7);
  uVar17 = *(uint *)(plVar15 + 7);
  if (uVar17 == 0) {
LAB__text__0053be28:
    lVar18 = *(long *)(param_7 + 0x38) + (ulong)*(uint *)(param_7 + 0x40) * 0x28;
    lVar1 = *(long *)(lVar18 + -8);
    if (*(long *)(lVar18 + -0x10) == 0) {
      lVar18 = *(long *)(lVar18 + -0x18);
      fVar25 = *(float *)(lVar1 + 0x18);
      fVar28 = *(float *)(lVar1 + 0x1c);
      fVar29 = *(float *)(lVar1 + 0x3c) * *(float *)(lVar18 + 8);
      fVar24 = *(float *)(lVar1 + 0x10);
      fVar27 = *(float *)(lVar1 + 0x14);
      fVar30 = *(float *)(lVar1 + 0x38) * *(float *)(lVar18 + 4);
      fVar31 = *(float *)(lVar1 + 0x40) * *(float *)(lVar18 + 0xc);
      fVar26 = fVar24 * fVar24 - (fVar27 * fVar27 + fVar25 * fVar25 + fVar28 * fVar28);
      fVar19 = fVar27 * fVar30 + fVar29 * fVar25 + fVar31 * fVar28;
      fVar20 = (fVar25 * fVar31 - fVar28 * fVar29) * fVar24 + fVar27 * fVar19;
      fVar21 = (fVar28 * fVar30 - fVar31 * fVar27) * fVar24 + fVar25 * fVar19;
      fVar19 = (fVar27 * fVar29 - fVar25 * fVar30) * fVar24 + fVar28 * fVar19;
      fVar23 = 0.0;
      fVar22 = 0.0;
      fVar32 = fVar20 + fVar20 + fVar30 * fVar26;
      fVar33 = fVar21 + fVar21 + fVar29 * fVar26;
      fVar34 = fVar19 + fVar19 + fVar31 * fVar26;
      fVar20 = 0.0;
      fVar21 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34);
      fVar19 = 0.0;
      if (fVar21 != 0.0) {
        fVar21 = 1.0 / fVar21;
        fVar19 = fVar32 * fVar21;
        fVar20 = fVar33 * fVar21;
        fVar22 = fVar34 * fVar21;
      }
      fVar21 = *(float *)(lVar18 + 0x10);
      fVar30 = fVar30 * fVar21;
      fVar29 = fVar29 * fVar21;
      fVar31 = fVar31 * fVar21;
      fVar33 = fVar30 * fVar27 + fVar25 * fVar29 + fVar28 * fVar31;
      fVar21 = (fVar29 * fVar28 - fVar31 * fVar25) * fVar24 - fVar33 * fVar27;
      fVar32 = (fVar31 * fVar27 - fVar30 * fVar28) * fVar24 - fVar33 * fVar25;
      fVar27 = (fVar30 * fVar25 - fVar29 * fVar27) * fVar24 - fVar33 * fVar28;
      fVar28 = 0.0;
      fVar24 = (float)(*param_4 +
                      ((double)((fVar21 + fVar21) - fVar26 * fVar30) - *(double *)(lVar1 + 0x20)));
      fVar25 = (float)(param_4[1] +
                      ((double)((fVar32 + fVar32) - fVar26 * fVar29) - *(double *)(lVar1 + 0x28)));
      fVar26 = (float)(param_4[2] +
                      ((double)((fVar27 + fVar27) - fVar26 * fVar31) - *(double *)(lVar1 + 0x30)));
      fVar21 = SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26);
      fVar27 = 0.0;
      if (fVar21 != 0.0) {
        fVar21 = 1.0 / fVar21;
        fVar23 = fVar24 * fVar21;
        fVar27 = fVar25 * fVar21;
        fVar28 = fVar26 * fVar21;
      }
      fVar21 = fVar23 * fVar19 + fVar20 * fVar27 + fVar22 * fVar28;
      bVar3 = fVar21 != 0.0 && fVar21 >= 0.0;
      if (*param_6 * fVar19 + fVar20 * param_6[1] + fVar22 * param_6[2] <= 0.0) {
        bVar3 = fVar21 < 0.0;
      }
      if (bVar3) goto LAB__text__0053c0c4;
    }
    else {
      fVar22 = *(float *)(lVar1 + 0x18);
      fVar23 = *(float *)(lVar1 + 0x1c);
      fVar25 = *(float *)(lVar1 + 0x10);
      fVar24 = *(float *)(lVar1 + 0x14);
      fVar20 = (float)(param_4[1] - *(double *)(lVar1 + 0x28));
      fVar19 = (float)(*param_4 - *(double *)(lVar1 + 0x20));
      fVar21 = (float)(param_4[2] - *(double *)(lVar1 + 0x30));
      fVar26 = fVar22 * fVar19 - fVar24 * fVar20;
      fVar27 = fVar23 * fVar20 - fVar22 * fVar21;
      fVar28 = fVar24 * fVar21 - fVar23 * fVar19;
      fVar26 = fVar26 + fVar26;
      fVar27 = fVar27 + fVar27;
      fVar28 = fVar28 + fVar28;
      local_198 = ((fVar19 - fVar22 * fVar26) + fVar25 * fVar27 + fVar23 * fVar28) /
                  *(float *)(lVar1 + 0x38);
      fStack_194 = ((fVar20 + fVar24 * fVar26 + fVar25 * fVar28) - fVar23 * fVar27) /
                   *(float *)(lVar1 + 0x3c);
      local_190 = CONCAT44(local_190._4_4_,
                           ((fVar21 + fVar25 * fVar26 + fVar22 * fVar27) - fVar24 * fVar28) /
                           *(float *)(lVar1 + 0x40));
      iVar6 = FUN__text__00516f44(*(long *)(lVar18 + -0x10),&local_198);
      if ((-1 < iVar6) && (iVar6 != *(int *)(lVar18 + -0x1c))) {
LAB__text__0053c0c4:
        local_198 = 0.0;
        local_68 = 0;
        local_80 = 0;
        local_190 = 0;
        uStack_188 = 0;
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_78 = 0;
        uStack_70 = 0x3f80000000000000;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        iVar6 = FUN__text__005374d0(param_1,param_4,param_2,param_7,&local_198,0,0,0);
        if ((iVar6 == 0) &&
           (fVar19 = (float)FUN__text__00531650(&local_198,param_2,param_4),
           fVar19 < *(float *)(param_4 + 6))) {
          plVar8 = (long *)((long)param_4[4] + (ulong)*(uint *)((long)param_4[4] + 0x30) * 0x10);
          puVar16 = (uint *)(plVar8 + 1);
          uVar17 = *puVar16;
          uVar4 = *(uint *)((long)plVar8 + 0xc);
          if (uVar4 <= uVar17) {
            iVar6 = uVar4 + (uVar4 >> 1);
            if (uVar4 == 0) {
              iVar6 = 1;
            }
            uVar7 = FUN__text__0053d5f0(plVar8,iVar6);
            if (((uVar7 & 1) == 0) || (*(uint *)((long)plVar8 + 0xc) <= uVar17))
            goto LAB__text__0053c228;
            uVar17 = *puVar16;
          }
          *puVar16 = uVar17 + 1;
          if (*plVar8 != 0) {
            __dest = (undefined4 *)(*plVar8 + (ulong)uVar17 * 0x138);
            *__dest = 0;
            *(undefined8 *)(__dest + 2) = 0;
            *(undefined8 *)(__dest + 4) = 0;
            __dest[0x4c] = 0;
            *(undefined8 *)(__dest + 6) = 0;
            *(undefined8 *)(__dest + 8) = 0;
            *(undefined8 *)(__dest + 0x46) = 0;
            *(undefined8 *)(__dest + 10) = 0;
            *(undefined8 *)(__dest + 0xc) = 0;
            *(undefined8 *)(__dest + 0xe) = 0;
            *(undefined8 *)(__dest + 0x10) = 0;
            *(undefined8 *)(__dest + 0x12) = 0;
            *(undefined8 *)(__dest + 0x14) = 0;
            *(undefined8 *)(__dest + 0x16) = 0;
            *(undefined8 *)(__dest + 0x18) = 0;
            *(undefined8 *)(__dest + 0x1a) = 0;
            *(undefined8 *)(__dest + 0x1c) = 0;
            *(undefined8 *)(__dest + 0x1e) = 0;
            *(undefined8 *)(__dest + 0x20) = 0;
            *(undefined8 *)(__dest + 0x22) = 0;
            *(undefined8 *)(__dest + 0x24) = 0;
            *(undefined8 *)(__dest + 0x26) = 0;
            *(undefined8 *)(__dest + 0x28) = 0;
            *(undefined8 *)(__dest + 0x2a) = 0;
            *(undefined8 *)(__dest + 0x2c) = 0;
            *(undefined8 *)(__dest + 0x2e) = 0;
            *(undefined8 *)(__dest + 0x30) = 0;
            *(undefined8 *)(__dest + 0x48) = 0;
            *(undefined8 *)(__dest + 0x4a) = 0x3f80000000000000;
            *(undefined8 *)(__dest + 0x32) = 0;
            *(undefined8 *)(__dest + 0x34) = 0;
            *(undefined8 *)(__dest + 0x36) = 0;
            *(undefined8 *)(__dest + 0x38) = 0;
            *(undefined8 *)(__dest + 0x3a) = 0;
            *(undefined8 *)(__dest + 0x3c) = 0;
            *(undefined8 *)(__dest + 0x3e) = 0;
            *(undefined8 *)(__dest + 0x40) = 0;
            *(undefined8 *)(__dest + 0x42) = 0;
            *(undefined8 *)(__dest + 0x44) = 0;
            memcpy(__dest,&local_198,0x134);
          }
LAB__text__0053c228:
          uVar17 = *(uint *)(plVar15 + 1);
          uVar4 = *(uint *)((long)plVar15 + 0xc);
          if (uVar4 <= uVar17) {
            iVar6 = uVar4 + (uVar4 >> 1);
            if (uVar4 == 0) {
              iVar6 = 1;
            }
            uVar7 = FUN__text__0053d990(plVar15,iVar6);
            if ((uVar7 & 1) == 0) {
              return;
            }
            if (*(uint *)((long)plVar15 + 0xc) <= uVar17) {
              return;
            }
            uVar17 = *(uint *)(plVar15 + 1);
          }
          *(uint *)(plVar15 + 1) = uVar17 + 1;
          if (*plVar15 == 0) {
            return;
          }
          plVar8 = (long *)(*plVar15 + (ulong)uVar17 * 0x50);
          plVar8[2] = 0;
          plVar8[3] = 0;
          lVar1 = _DAT_008a4288;
          plVar8[4] = 0;
          *(undefined4 *)(plVar8 + 5) = 0;
          plVar8[6] = 0;
          plVar8[7] = 0;
          plVar8[8] = 0;
          plVar8[9] = 0;
          *plVar8 = lVar1 + 0x10;
          plVar8[1] = 0;
          FUN__text__0053d740(plVar8,param_7);
          uVar5 = FUN__text__005426f0(plVar8);
          FUN__text__0053d870(plVar15,uVar5);
          return;
        }
      }
    }
  }
  else {
    uVar2 = 0;
    if (uVar17 != 0) {
      uVar2 = uVar4 / uVar17;
    }
    plVar8 = (long *)(plVar15[6] + (ulong)(uVar4 - uVar2 * uVar17) * 8);
    do {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB__text__0053be28;
    } while (*(uint *)(plVar8 + 1) != uVar4);
  }
  lVar1 = _DAT_008a4288;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  lVar18 = *(long *)(param_7 + 0x38) + (ulong)*(uint *)(param_7 + 0x40) * 0x28;
  if (*(long *)(lVar18 + -0x10) == 0) {
    return;
  }
  local_19c = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1e8[0] = _DAT_008a4288 + 0x10;
  local_1e8[2] = 0;
  local_1e8[3] = 0;
  local_1e8[4] = 0;
  local_1c0 = 0;
  local_1e8[1] = 0;
  FUN__text__0053d740(local_1e8,param_7);
  local_228 = *param_1;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_1f0 = 0;
  local_200 = 0;
  local_1f8 = 0;
  uStack_220 = 0;
  if (7 < (uint)local_1a8) goto LAB__text__0053c528;
  uVar7 = FUN__text__00517420(*(undefined4 *)(param_4 + 6),&local_228,local_1e8 + 1,
                              *(undefined8 *)(lVar18 + -0x10),*(undefined8 *)(lVar18 + -8),param_4,
                              local_1e8,8 - (uint)local_1a8);
  if ((uVar7 & 1) != 0) {
    uVar17 = *(uint *)(plVar15 + 1);
    uVar7 = (ulong)uVar17;
    if (uVar17 == 0) {
LAB__text__0053c420:
      local_198 = 0.0;
      local_68 = 0;
      local_80 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_78 = 0;
      uStack_70 = 0x3f80000000000000;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      iVar6 = FUN__text__005374d0(param_1,param_4,param_2,local_1e8,&local_198,0,0,0);
      if ((iVar6 == 0) &&
         (fVar19 = (float)FUN__text__00531650(&local_198,param_2,param_4),
         fVar19 < *(float *)(param_4 + 6))) {
        FUN__text__0053918c(param_4[4],&local_198);
        FUN__text__0053928c(plVar15,local_1e8);
      }
    }
    else {
      lVar18 = *plVar15;
      if ((uint)local_1a8 == 0) {
        if (*(int *)(lVar18 + 0x40) != 0) {
          uVar10 = 0;
          piVar9 = (int *)(lVar18 + 0x90);
          do {
            if (uVar17 - 1 == uVar10) goto LAB__text__0053c420;
            iVar6 = *piVar9;
            uVar10 = uVar10 + 1;
            piVar9 = piVar9 + 0x14;
          } while (iVar6 != 0);
          if (uVar7 <= uVar10) goto LAB__text__0053c420;
        }
      }
      else {
        uVar10 = 0;
        bVar3 = true;
        do {
          if (*(int *)(lVar18 + uVar10 * 0x50 + 0x40) == (uint)local_1a8) {
            puVar11 = (undefined8 *)(*(long *)(lVar18 + uVar10 * 0x50 + 0x38) + 0x20);
            uVar12 = local_1a8 & 0xffffffff;
            puVar13 = (undefined8 *)(local_1b0 + 0x20);
            while (*(long *)*puVar11 == *(long *)*puVar13) {
              lVar14 = puVar13[-1];
              if (puVar11[-1] == 0) {
                if ((lVar14 != 0) || (puVar11[-2] != puVar13[-2])) break;
              }
              else if ((lVar14 == 0) || (puVar11[-1] != lVar14)) break;
              puVar13 = puVar13 + 5;
              puVar11 = puVar11 + 5;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB__text__0053c41c;
            }
          }
          uVar10 = uVar10 + 1;
          bVar3 = uVar10 < uVar7;
        } while (uVar10 != uVar7);
LAB__text__0053c41c:
        if (!bVar3) goto LAB__text__0053c420;
      }
    }
  }
  if (local_200 != 0) {
    local_1f8 = local_1f8 & 0xffffffff00000000;
    FUN__text__00400fc0(9);
    local_200 = 0;
    local_1f8 = local_1f8 & 0xffffffff;
  }
LAB__text__0053c528:
  if (local_218 != 0) {
    local_210 = local_210 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
  }
  local_1e8[0] = lVar1 + 0x10;
  if (local_1b0 != 0) {
    local_1a8 = local_1a8 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
  }
  return;
}


