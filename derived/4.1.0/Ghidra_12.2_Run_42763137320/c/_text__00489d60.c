/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00489d60; name: FUN_.text__00489d60
 */


void FUN__text__00489d60(float param_1,float param_2,float param_3,uint param_4,ulong param_5,
                        float *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 *__s;
  int iVar21;
  int iVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  
  local_88 = param_6;
  fVar24 = (float)NEON_fminnm(param_1 * 0.5 + 0.5,0x3f800000);
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  fVar25 = (float)NEON_fminnm(param_2 * 0.5 + 0.5,0x3f800000);
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  uVar20 = (uint)param_5;
  if ((param_4 + ((int)(param_4 << 0x10) >> 0x1f) & 0xff) == 1) {
    if ((param_5 & 0xff) != 0) {
      memset(param_6,0,(param_5 & 0xff) << 2);
    }
    uVar8 = uVar20 >> 0xc & 0x637;
    if (uVar8 < 0x607) {
      if (uVar8 == 0) {
        uVar8 = (uVar20 & 0xff) + 3 & 0x1fc;
        iVar22 = uVar8 * (param_4 & 0xff);
        goto joined_r0x0048a03c;
      }
      if (uVar8 == 7) {
        if (fVar24 <= 0.5) {
          fVar25 = fVar24 - fVar24 * param_3;
        }
        else {
          fVar25 = (fVar24 * param_3 - param_3) + fVar24;
          fVar24 = 1.0 - fVar24;
        }
        param_3 = param_3 * (fVar24 + fVar24);
        *local_88 = SQRT(1.0 - (fVar25 + param_3));
        local_88[1] = SQRT(fVar25);
        local_88[2] = SQRT(param_3);
        return;
      }
      if (uVar8 == 0x603) {
        *local_88 = SQRT((1.0 - fVar24) * fVar25);
        local_88[1] = SQRT(fVar25 * fVar24);
        local_88[2] = SQRT((1.0 - fVar25) * (1.0 - fVar24));
        local_88[3] = SQRT((1.0 - fVar25) * fVar24);
        return;
      }
    }
    else {
      if (uVar8 == 0x607) {
        if (fVar24 <= 0.5) {
          fVar28 = fVar24 + fVar24;
          fVar26 = fVar24 - fVar24 * param_3;
        }
        else {
          fVar28 = 2.0 - (fVar24 + fVar24);
          fVar26 = (fVar24 * param_3 - param_3) + fVar24;
        }
        *local_88 = SQRT(fVar25 - fVar25 * (fVar26 + fVar28 * param_3));
        local_88[1] = SQRT(fVar26 * fVar25);
        fVar26 = 1.0 - fVar25;
        local_88[2] = SQRT(fVar28 * param_3 * fVar25);
        local_88[3] = SQRT(fVar26 - fVar26 * fVar24);
        local_88[4] = SQRT(fVar26 * fVar24);
        return;
      }
      if (uVar8 == 0x633) {
        fVar26 = 1.0 - fVar24;
        fVar28 = fVar25 * 1.3333334 + -0.33333334;
        fVar25 = 1.0 - fVar25 * 1.3333334;
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar29 = 1.0 - (fVar28 + fVar25);
        local_88[2] = SQRT(fVar25 * fVar26);
        local_88[3] = SQRT(fVar25 * fVar24);
        *local_88 = SQRT(fVar28 * fVar26);
        local_88[1] = SQRT(fVar28 * fVar24);
        local_88[4] = SQRT(fVar29 * fVar26);
        local_88[5] = SQRT(fVar29 * fVar24);
        return;
      }
      if (uVar8 == 0x637) {
        if (fVar24 <= 0.5) {
          fVar28 = fVar24 + fVar24;
          fVar26 = fVar24 - fVar24 * param_3;
        }
        else {
          fVar28 = 2.0 - (fVar24 + fVar24);
          fVar26 = (fVar24 * param_3 - param_3) + fVar24;
        }
        fVar29 = fVar25 * 1.3333334 + -0.33333334;
        fVar25 = 1.0 - fVar25 * 1.3333334;
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar30 = 1.0 - (fVar29 + fVar25);
        *local_88 = SQRT(fVar29 - fVar29 * (fVar26 + fVar28 * param_3));
        local_88[1] = SQRT(fVar26 * fVar29);
        local_88[2] = SQRT(fVar28 * param_3 * fVar29);
        local_88[3] = SQRT(fVar25 * (1.0 - fVar24));
        local_88[4] = SQRT(fVar25 * fVar24);
        local_88[5] = SQRT(fVar30 * (1.0 - fVar24));
        local_88[6] = SQRT(fVar30 * fVar24);
        return;
      }
    }
    *local_88 = SQRT(1.0 - fVar24);
    local_88[1] = SQRT(fVar24);
  }
  else {
    uVar8 = param_4 >> 0xc & 0x637;
    if (((param_4 >> 0x10 ^ param_4 >> 0x15) & 1) != 0) {
      uVar8 = param_4 >> 0xc & 7 | 0x600;
    }
    if (uVar8 != 0) {
      uVar4 = uVar8 | uVar20 >> 0xc & 0x637;
      uVar9 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
      uVar2 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      uVar9 = uVar4 - (uVar4 >> 1 & 0x55555555);
      uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
      uVar3 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      uVar9 = uVar3 * 4 + 0xc & 0x70;
      __s = (undefined4 *)((long)&local_a0 - (ulong)(uVar9 * uVar2));
      local_98 = __s;
      uVar12 = uVar3 + 3 & 0x1c;
      if (uVar12 != 0) {
        memset(__s,0,(ulong)(uVar2 * uVar12 * 4));
      }
      pfVar23 = (float *)((long)__s - ((ulong)(uVar9 + 0xf) & 0xf0));
      if (uVar9 != 0) {
        memset(pfVar23,0,(ulong)uVar9);
      }
      pfVar7 = local_88;
      puVar6 = local_98;
      uVar9 = uVar4 >> 2 & 1;
      if (uVar8 < 0x607) {
        if (uVar8 == 3) {
          *__s = 0x3f800000;
          puVar6[(ulong)uVar12 + 1] = 0x3f800000;
          if ((uVar4 & 0x633) == 0x603) {
            __s[uVar9 | 2] = 0x3f800000;
            puVar6[(ulong)uVar12 + (ulong)(uVar9 + 3)] = 0x3f800000;
            FUN__text__0048b4b0(fVar24,fVar25,pfVar23,uVar4);
          }
          else {
            if ((uVar4 & 0x633) == 0x633) {
              __s[uVar9 | 2] = 0x3f800000;
              __s[uVar9 | 4] = 0x3f800000;
              puVar6[(ulong)uVar12 + (ulong)(uVar9 + 5)] = 0x3f800000;
              puVar6[(ulong)uVar12 + (ulong)(uVar9 + 3)] = 0x3f800000;
              fVar26 = fVar25 * 1.3333334 + -0.33333334;
              if (fVar26 <= 0.0) {
                fVar26 = 0.0;
              }
              *pfVar23 = SQRT(fVar26 * (1.0 - fVar24));
              pfVar23[1] = SQRT(fVar26 * fVar24);
              bVar1 = (uVar4 >> 2 & 1) != 0;
              if (bVar1) {
                pfVar23[2] = 0.0;
              }
              uVar8 = (uint)bVar1;
              pfVar7 = local_88;
              goto LAB__text__0048a88c;
            }
            fVar25 = 1.0 - fVar24;
LAB__text__0048a83c:
            *pfVar23 = SQRT(fVar25);
            pfVar23[1] = SQRT(fVar24);
          }
        }
        else {
          if (uVar8 != 7) {
            if (uVar8 != 0x603) goto LAB__text__0048a8dc;
            *__s = 0x3f800000;
            puVar6[(ulong)uVar12 + 1] = 0x3f800000;
            puVar6[(ulong)(uVar12 * 2) + (ulong)(uVar9 | 2)] = 0x3f800000;
            puVar6[(ulong)(uVar12 * 3) + (ulong)(uVar9 + 3)] = 0x3f800000;
            if (((uVar4 ^ 0xffffffff) & 0x633) == 0) {
              puVar6[(ulong)(uVar12 * 3) + (ulong)(uVar9 + 5)] = 0x3f800000;
              puVar6[(ulong)(uVar12 * 2) + (ulong)(uVar9 | 4)] = 0x3f800000;
              goto LAB__text__0048a5bc;
            }
            *pfVar23 = SQRT((1.0 - fVar24) * fVar25);
            pfVar23[1] = SQRT(fVar25 * fVar24);
            bVar1 = (uVar4 >> 2 & 1) != 0;
            if (bVar1) {
              pfVar23[2] = 0.0;
            }
            fVar25 = 1.0 - fVar25;
            uVar8 = (uint)bVar1;
            uVar9 = uVar8 + 3;
            pfVar23[uVar8 | 2] = SQRT(fVar25 * (1.0 - fVar24));
LAB__text__0048a8d8:
            pfVar23[uVar9] = SQRT(fVar25 * fVar24);
            goto LAB__text__0048a8dc;
          }
          uVar8 = uVar12 << 1;
          *__s = 0x3f800000;
          puVar6[(ulong)uVar12 + 1] = 0x3f800000;
          puVar6[(ulong)uVar8 + 2] = 0x3f800000;
          if ((uVar4 & 0x633) == 0x603) {
            puVar6[(ulong)uVar12 + (ulong)(uVar9 + 3)] = 0x3f800000;
            __s[uVar9 | 2] = 0x3f800000;
            puVar6[(ulong)uVar8 + (ulong)(uVar9 | 2)] = 0x3f000000;
            puVar6[(ulong)uVar8 + (ulong)(uVar9 + 3)] = 0x3f000000;
            FUN__text__0048b510(fVar24,fVar25,pfVar23);
          }
          else {
            if ((uVar4 & 0x633) != 0x633) {
              pfVar23[2] = 0.57735026;
              fVar24 = fVar24 * 0.6666667;
              fVar25 = 0.6666667 - fVar24;
              goto LAB__text__0048a83c;
            }
            fVar26 = fVar25 * 1.1428572 + -0.14285715;
            fVar25 = fVar25 * -1.4285715 + 1.0;
            __s[uVar9 | 4] = 0x3f800000;
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
            puVar6[(ulong)uVar12 + (ulong)(uVar9 + 3)] = 0x3f800000;
            puVar6[(ulong)uVar12 + (ulong)(uVar9 + 5)] = 0x3f800000;
            __s[uVar9 | 2] = 0x3f800000;
            fVar28 = 1.0 - (fVar26 + fVar25);
            puVar6[(ulong)uVar8 + (ulong)(uVar9 | 2)] = 0x3f000000;
            puVar6[(ulong)uVar8 + (ulong)(uVar9 | 4)] = 0x3f000000;
            *pfVar23 = SQRT(fVar26 * (0.6666667 - fVar24 * 0.6666667));
            pfVar23[1] = SQRT(fVar26 * fVar24 * 0.6666667);
            puVar6[(ulong)uVar8 + (ulong)(uVar9 + 3)] = 0x3f000000;
            pfVar23[2] = SQRT(fVar26 * 0.33333334);
            pfVar23[3] = SQRT(fVar25 * (1.0 - fVar24));
            puVar6[(ulong)uVar8 + (ulong)(uVar9 + 5)] = 0x3f000000;
            pfVar23[4] = SQRT(fVar25 * fVar24);
            pfVar23[5] = SQRT(fVar28 * (1.0 - fVar24));
            pfVar23[6] = SQRT(fVar28 * fVar24);
          }
        }
        pfVar7 = local_88;
      }
      else {
        if (uVar8 == 0x607) {
          *__s = 0x3f800000;
          puVar6[(ulong)(uVar12 * 2) + 2] = 0x3f800000;
          puVar6[(ulong)(uVar12 * 3) + (ulong)(uVar9 | 2)] = 0x3f800000;
          puVar6[(ulong)(uVar12 << 2) + (ulong)(uVar9 + 3)] = 0x3f800000;
          puVar6[(ulong)uVar12 + 1] = 0x3f800000;
          if (((uVar4 ^ 0xffffffff) & 0x633) != 0) {
            fVar26 = fVar25 * -1.2 + 1.0;
            if (0.5 <= fVar25) {
              fVar26 = 0.8 - fVar25 * 0.8;
            }
            fVar25 = 1.0 - fVar26;
            pfVar23[4] = SQRT(fVar26 * fVar24);
            *pfVar23 = SQRT(fVar25 * (0.6666667 - fVar24 * 0.6666667));
            pfVar23[1] = SQRT(fVar25 * fVar24 * 0.6666667);
            pfVar23[2] = SQRT(fVar25 * 0.33333334);
            pfVar23[3] = SQRT(fVar26 - fVar26 * fVar24);
            goto LAB__text__0048a8dc;
          }
          fVar26 = fVar25 * 1.1428572 + -0.14285715;
          fVar25 = fVar25 * -1.4285715 + 1.0;
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          fVar29 = fVar26 * (0.6666667 - fVar24 * 0.6666667);
          fVar30 = fVar26 + fVar25;
          fVar28 = fVar26 * fVar24 * 0.6666667;
          puVar6[(ulong)(uVar12 * 3) + (ulong)(uVar9 | 4)] = 0x3f800000;
          puVar6[(ulong)(uVar12 << 2) + (ulong)(uVar9 + 5)] = 0x3f800000;
        }
        else {
          if (uVar8 == 0x633) {
            local_98[(ulong)uVar12 + 1] = 0x3f800000;
            *__s = 0x3f800000;
            puVar6[(ulong)(uVar12 * 2) + (ulong)(uVar9 | 2)] = 0x3f800000;
            puVar6[(ulong)(uVar12 * 3) + (ulong)(uVar9 + 3)] = 0x3f800000;
            puVar6[(ulong)(uVar12 * 5) + (ulong)(uVar9 + 5)] = 0x3f800000;
            puVar6[(ulong)(uVar12 * 4) + (ulong)(uVar9 | 4)] = 0x3f800000;
LAB__text__0048a5bc:
            fVar26 = fVar25 * 1.3333334 + -0.33333334;
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            *pfVar23 = SQRT(fVar26 * (1.0 - fVar24));
            pfVar23[1] = SQRT(fVar26 * fVar24);
            if ((uVar4 >> 2 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              pfVar23[2] = 0.0;
              uVar8 = 1;
            }
LAB__text__0048a88c:
            fVar28 = 1.0 - fVar25 * 1.3333334;
            if (fVar28 <= 0.0) {
              fVar28 = 0.0;
            }
            fVar25 = 1.0 - (fVar26 + fVar28);
            pfVar23[uVar8 | 2] = SQRT(fVar28 * (1.0 - fVar24));
            pfVar23[uVar8 + 3] = SQRT(fVar28 * fVar24);
            uVar9 = uVar8 + 5;
            pfVar23[uVar8 | 4] = SQRT(fVar25 * (1.0 - fVar24));
            goto LAB__text__0048a8d8;
          }
          if (uVar8 != 0x637) goto LAB__text__0048a8dc;
          fVar26 = fVar25 * 1.1428572 + -0.14285715;
          fVar25 = fVar25 * -1.4285715 + 1.0;
          local_98[(ulong)(uVar12 * 4) + (ulong)(uVar9 + 3)] = 0x3f800000;
          local_98[(ulong)(uVar12 * 2) + 2] = 0x3f800000;
          *__s = 0x3f800000;
          puVar6[(ulong)(uVar12 * 3) + (ulong)(uVar9 | 2)] = 0x3f800000;
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          fVar29 = fVar26 * (0.6666667 - fVar24 * 0.6666667);
          fVar30 = fVar26 + fVar25;
          fVar28 = fVar26 * fVar24 * 0.6666667;
          puVar6[(ulong)(uVar12 * 5) + (ulong)(uVar9 | 4)] = 0x3f800000;
          puVar6[(ulong)uVar12 + 1] = 0x3f800000;
          puVar6[(ulong)(uVar12 * 6) + (ulong)(uVar9 + 5)] = 0x3f800000;
        }
        *pfVar23 = SQRT(fVar29);
        pfVar23[1] = SQRT(fVar28);
        pfVar23[2] = SQRT(fVar26 * 0.33333334);
        pfVar23[3] = SQRT(fVar25 * (1.0 - fVar24));
        pfVar23[4] = SQRT(fVar25 * fVar24);
        pfVar23[5] = SQRT((1.0 - fVar30) * (1.0 - fVar24));
        pfVar23[6] = SQRT((1.0 - fVar30) * fVar24);
      }
LAB__text__0048a8dc:
      auVar27._0_4_ = (float)uVar2;
      uVar14 = (ulong)uVar3 & 0xfc;
      uVar11 = 0;
      uVar10 = (ulong)uVar2;
      uVar9 = uVar3 | uVar4 << 0xc | 0x100;
      uVar8 = uVar2;
      if (uVar2 < 2) {
        uVar8 = 1;
      }
      uVar13 = (ulong)uVar3 & 3;
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._0_4_;
      pfVar15 = (float *)(local_98 + 2);
      auVar27 = NEON_frsqrte(auVar27,4);
      auVar27 = NEON_frecpe(auVar27,4);
      do {
        if (uVar3 < 4) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          pfVar17 = pfVar15;
          pfVar18 = pfVar23 + 2;
          do {
            fVar24 = pfVar18[-1];
            lVar16 = lVar16 + -4;
            fVar25 = *pfVar18;
            fVar26 = pfVar18[1];
            pfVar17[-2] = pfVar17[-2] * pfVar18[-2];
            pfVar17[-1] = pfVar17[-1] * fVar24;
            *pfVar17 = *pfVar17 * fVar25;
            pfVar17[1] = pfVar17[1] * fVar26;
            pfVar17 = pfVar17 + 4;
            pfVar18 = pfVar18 + 4;
          } while (-lVar16 != uVar14);
          lVar16 = -lVar16;
        }
        if ((uVar3 & 3) != 0) {
          pfVar17 = (float *)(__s + lVar16);
          pfVar18 = pfVar23 + lVar16;
          uVar19 = uVar13;
          do {
            uVar19 = uVar19 - 1;
            *pfVar17 = *pfVar17 * *pfVar18;
            pfVar17 = pfVar17 + 1;
            pfVar18 = pfVar18 + 1;
          } while (uVar19 != 0);
        }
        fVar24 = auVar27._0_4_;
        if (uVar3 < 4) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          pfVar17 = pfVar15;
          do {
            lVar16 = lVar16 + -4;
            pfVar17[-2] = pfVar17[-2] * fVar24;
            pfVar17[-1] = pfVar17[-1] * fVar24;
            *pfVar17 = *pfVar17 * fVar24;
            pfVar17[1] = pfVar17[1] * fVar24;
            pfVar17 = pfVar17 + 4;
          } while (-lVar16 != uVar14);
          lVar16 = -lVar16;
        }
        if ((uVar3 & 3) != 0) {
          lVar16 = lVar16 << 2;
          uVar19 = uVar13;
          do {
            uVar19 = uVar19 - 1;
            *(float *)((long)__s + lVar16) = *(float *)((long)__s + lVar16) * fVar24;
            lVar16 = lVar16 + 4;
          } while (uVar19 != 0);
        }
        uVar11 = uVar11 + 1;
        pfVar15 = pfVar15 + uVar12;
        __s = __s + uVar12;
      } while (uVar11 != uVar8);
      uVar8 = uVar20 & 0xff;
      uVar20 = uVar20 >> 0xc & 0x737;
      if (uVar20 < 0x603) {
        if (uVar20 == 3) {
          uVar11 = 0;
          do {
            pfVar23 = pfVar7 + (uVar8 + 3 & 0x1fc) * (int)uVar11;
            if ((param_5 & 0xff) != 0) {
              memset(pfVar23,0,(param_5 & 0xff) << 2);
              pfVar7 = local_88;
            }
            if (0xfff < uVar9) {
              uVar20 = 0;
              uVar14 = 0;
              uVar12 = 1;
              do {
                if ((uVar12 & uVar4) != 0) {
                  fVar24 = (float)local_98[uVar11 * ((ulong)((uVar3 & 0x3f) + 3) & 0x7c) + uVar14];
                  uVar14 = (ulong)((int)uVar14 + 1);
                  *pfVar23 = *pfVar23 + fVar24 * *(float *)((ulong)uVar20 * 8 + 0x73d128);
                  pfVar23[1] = pfVar23[1] + fVar24 * *(float *)((ulong)uVar20 * 8 + 0x73d12c);
                }
                uVar12 = uVar12 * 2;
                uVar20 = uVar20 + 1;
              } while (uVar12 <= uVar4);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != (uVar10 & 0x3f));
          return;
        }
        if (uVar20 != 4) {
          if (uVar20 != 7) {
            return;
          }
          uVar11 = 0;
          local_a0 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
          do {
            pfVar23 = pfVar7 + (uVar8 + 3 & 0x1fc) * (int)uVar11;
            if ((param_5 & 0xff) != 0) {
              memset(pfVar23,0,(param_5 & 0xff) << 2);
              pfVar7 = local_88;
            }
            if (0xfff < uVar9) {
              uVar20 = 0;
              uVar14 = 0;
              uVar12 = 1;
              do {
                if ((uVar12 & uVar4) != 0) {
                  lVar16 = (ulong)uVar20 * 0xc;
                  fVar24 = (float)local_98[uVar11 * local_a0 + uVar14];
                  uVar14 = (ulong)((int)uVar14 + 1);
                  *pfVar23 = *pfVar23 + fVar24 * *(float *)(&DAT_0073d1b8 + lVar16);
                  pfVar23[1] = pfVar23[1] + fVar24 * *(float *)(&DAT_0073d1bc + lVar16);
                  pfVar23[2] = pfVar23[2] + fVar24 * *(float *)(&DAT_0073d1c0 + lVar16);
                }
                uVar12 = uVar12 * 2;
                uVar20 = uVar20 + 1;
              } while (uVar12 <= uVar4);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != (uVar10 & 0x3f));
          return;
        }
        sVar5 = (param_5 & 0xff) << 2;
        uVar20 = uVar8 + 3 & 0x1fc;
        if (0xfff < uVar9) {
          uVar11 = 0;
          do {
            pfVar23 = pfVar7 + uVar20 * (int)uVar11;
            if ((param_5 & 0xff) != 0) {
              memset(pfVar23,0,sVar5);
              pfVar7 = local_88;
            }
            uVar14 = 0;
            uVar8 = 0;
            uVar9 = 1;
            do {
              if ((uVar9 & uVar4) != 0) {
                lVar16 = uVar11 * ((ulong)((uVar3 & 0x3f) + 3) & 0x7c) + uVar14;
                uVar14 = (ulong)((int)uVar14 + 1);
                *pfVar23 = *pfVar23 +
                           (float)local_98[lVar16] * *(float *)((ulong)uVar8 * 4 + 0x73d0e0);
              }
              uVar9 = uVar9 * 2;
              uVar8 = uVar8 + 1;
            } while (uVar9 <= uVar4);
            uVar11 = uVar11 + 1;
          } while (uVar11 != (uVar10 & 0x3f));
          return;
        }
        if ((param_5 & 0xff) == 0) {
          return;
        }
        uVar11 = uVar10 & 3;
        uVar8 = uVar8 + 3 >> 2;
        if ((uVar10 & 0x3f) - 1 < 3) {
          lVar16 = 0;
        }
        else {
          uVar14 = 0;
          lVar16 = 0;
          do {
            memset(pfVar7 + uVar14,0,sVar5);
            iVar22 = (int)uVar14;
            memset(local_88 + (uVar20 + iVar22),0,sVar5);
            memset(local_88 + (uVar8 * 8 + iVar22),0,sVar5);
            memset(local_88 + (uVar8 * 0xc + iVar22),0,sVar5);
            lVar16 = lVar16 + 4;
            uVar14 = (ulong)(iVar22 + uVar8 * 0x10);
            pfVar7 = local_88;
          } while ((uVar10 & 0x3f) - uVar11 != lVar16);
        }
        if ((uVar2 & 3) == 0) {
          return;
        }
        uVar8 = uVar8 * (int)lVar16 * 4;
        do {
          memset(pfVar7 + uVar8,0,sVar5);
          uVar8 = uVar8 + uVar20;
          uVar11 = uVar11 - 1;
          pfVar7 = local_88;
        } while (uVar11 != 0);
        return;
      }
      if (0x632 < uVar20) {
        if (uVar20 == 0x633) {
          uVar8 = uVar8 + 3;
          sVar5 = (param_5 & 0xff) << 2;
          uVar20 = uVar8 & 0x1fc;
          local_a0 = CONCAT44(local_a0._4_4_,uVar8) & 0xffffffff000001fc;
          if (0xfff < uVar9) {
            uVar11 = 0;
            do {
              pfVar23 = pfVar7 + uVar20 * (int)uVar11;
              if ((param_5 & 0xff) != 0) {
                memset(pfVar23,0,sVar5);
                pfVar7 = local_88;
                uVar20 = (uint)local_a0;
              }
              uVar14 = 0;
              uVar8 = 0;
              uVar9 = 1;
              do {
                if ((uVar9 & uVar4) != 0) {
                  lVar16 = (ulong)uVar8 * 0x18;
                  fVar24 = (float)local_98[uVar11 * ((ulong)((uVar3 & 0x3f) + 3) & 0x7c) + uVar14];
                  uVar14 = (ulong)((int)uVar14 + 1);
                  *pfVar23 = *pfVar23 + fVar24 * *(float *)(&DAT_0073d518 + lVar16);
                  pfVar23[1] = pfVar23[1] + fVar24 * *(float *)(&DAT_0073d51c + lVar16);
                  pfVar23[2] = pfVar23[2] + fVar24 * *(float *)(&DAT_0073d520 + lVar16);
                  pfVar23[3] = pfVar23[3] + fVar24 * *(float *)(&DAT_0073d524 + lVar16);
                  pfVar23[4] = pfVar23[4] + fVar24 * *(float *)(&DAT_0073d528 + lVar16);
                  pfVar23[5] = pfVar23[5] + fVar24 * *(float *)(&DAT_0073d52c + lVar16);
                }
                uVar9 = uVar9 * 2;
                uVar8 = uVar8 + 1;
              } while (uVar9 <= uVar4);
              uVar11 = uVar11 + 1;
            } while (uVar11 != (uVar10 & 0x3f));
            return;
          }
          if ((param_5 & 0xff) == 0) {
            return;
          }
          uVar11 = uVar10 & 3;
          uVar8 = uVar8 >> 2;
          if ((uVar10 & 0x3f) - 1 < 3) {
            lVar16 = 0;
          }
          else {
            iVar22 = (uint)local_a0;
            uVar14 = 0;
            lVar16 = 0;
            do {
              memset(pfVar7 + uVar14,0,sVar5);
              iVar21 = (int)uVar14;
              memset(local_88 + (uint)(iVar22 + iVar21),0,sVar5);
              memset(local_88 + (uVar8 * 8 + iVar21),0,sVar5);
              memset(local_88 + (uVar8 * 0xc + iVar21),0,sVar5);
              lVar16 = lVar16 + 4;
              uVar14 = (ulong)(iVar21 + uVar8 * 0x10);
              pfVar7 = local_88;
            } while ((uVar10 & 0x3f) - uVar11 != lVar16);
          }
          if ((uVar2 & 3) == 0) {
            return;
          }
          uVar20 = uVar8 * (int)lVar16 * 4;
          do {
            memset(pfVar7 + uVar20,0,sVar5);
            uVar11 = uVar11 - 1;
            uVar20 = uVar20 + (uint)local_a0;
            pfVar7 = local_88;
          } while (uVar11 != 0);
          return;
        }
        if (uVar20 != 0x637) {
          return;
        }
        uVar8 = uVar8 + 3;
        sVar5 = (param_5 & 0xff) << 2;
        uVar20 = uVar8 & 0x1fc;
        local_a0 = CONCAT44(local_a0._4_4_,uVar8) & 0xffffffff000001fc;
        if (0xfff < uVar9) {
          uVar11 = 0;
          do {
            pfVar23 = pfVar7 + uVar20 * (int)uVar11;
            if ((param_5 & 0xff) != 0) {
              memset(pfVar23,0,sVar5);
              pfVar7 = local_88;
              uVar20 = (uint)local_a0;
            }
            uVar14 = 0;
            uVar8 = 0;
            uVar9 = 1;
            do {
              if ((uVar9 & uVar4) != 0) {
                lVar16 = (ulong)uVar8 * 0x1c;
                fVar24 = (float)local_98[uVar11 * ((ulong)((uVar3 & 0x3f) + 3) & 0x7c) + uVar14];
                uVar14 = (ulong)((int)uVar14 + 1);
                *pfVar23 = *pfVar23 + fVar24 * *(float *)(&DAT_0073d6c8 + lVar16);
                pfVar23[1] = pfVar23[1] + fVar24 * *(float *)(&DAT_0073d6cc + lVar16);
                pfVar23[2] = pfVar23[2] + fVar24 * *(float *)(&DAT_0073d6d0 + lVar16);
                pfVar23[3] = pfVar23[3] + fVar24 * *(float *)(&DAT_0073d6d4 + lVar16);
                pfVar23[4] = pfVar23[4] + fVar24 * *(float *)(&DAT_0073d6d8 + lVar16);
                pfVar23[5] = pfVar23[5] + fVar24 * *(float *)(&DAT_0073d6dc + lVar16);
                pfVar23[6] = pfVar23[6] + fVar24 * *(float *)(&DAT_0073d6e0 + lVar16);
              }
              uVar9 = uVar9 * 2;
              uVar8 = uVar8 + 1;
            } while (uVar9 <= uVar4);
            uVar11 = uVar11 + 1;
          } while (uVar11 != (uVar10 & 0x3f));
          return;
        }
        if ((param_5 & 0xff) == 0) {
          return;
        }
        uVar11 = uVar10 & 3;
        uVar8 = uVar8 >> 2;
        if ((uVar10 & 0x3f) - 1 < 3) {
          lVar16 = 0;
        }
        else {
          iVar22 = (uint)local_a0;
          uVar14 = 0;
          lVar16 = 0;
          do {
            memset(pfVar7 + uVar14,0,sVar5);
            iVar21 = (int)uVar14;
            memset(local_88 + (uint)(iVar22 + iVar21),0,sVar5);
            memset(local_88 + (uVar8 * 8 + iVar21),0,sVar5);
            memset(local_88 + (uVar8 * 0xc + iVar21),0,sVar5);
            lVar16 = lVar16 + 4;
            uVar14 = (ulong)(iVar21 + uVar8 * 0x10);
            pfVar7 = local_88;
          } while ((uVar10 & 0x3f) - uVar11 != lVar16);
        }
        if ((uVar2 & 3) == 0) {
          return;
        }
        uVar20 = uVar8 * (int)lVar16 * 4;
        do {
          memset(pfVar7 + uVar20,0,sVar5);
          uVar11 = uVar11 - 1;
          uVar20 = uVar20 + (uint)local_a0;
          pfVar7 = local_88;
        } while (uVar11 != 0);
        return;
      }
      if (uVar20 == 0x603) {
        uVar11 = 0;
        do {
          pfVar23 = pfVar7 + (uVar8 + 3 & 0x1fc) * (int)uVar11;
          if ((param_5 & 0xff) != 0) {
            memset(pfVar23,0,(param_5 & 0xff) << 2);
            pfVar7 = local_88;
          }
          if (0xfff < uVar9) {
            uVar14 = 0;
            uVar20 = 0;
            uVar12 = 1;
            do {
              if ((uVar12 & uVar4) != 0) {
                lVar16 = (ulong)uVar20 * 0x10;
                fVar24 = (float)local_98[uVar11 * ((ulong)((uVar3 & 0x3f) + 3) & 0x7c) + uVar14];
                uVar14 = (ulong)((int)uVar14 + 1);
                *pfVar23 = *pfVar23 + fVar24 * *(float *)(lVar16 + 0x73d290);
                pfVar23[1] = pfVar23[1] + fVar24 * *(float *)(lVar16 + 0x73d294);
                pfVar23[2] = pfVar23[2] + fVar24 * *(float *)(lVar16 + 0x73d298);
                pfVar23[3] = pfVar23[3] + fVar24 * *(float *)(lVar16 + 0x73d29c);
              }
              uVar12 = uVar12 * 2;
              uVar20 = uVar20 + 1;
            } while (uVar12 <= uVar4);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != (uVar10 & 0x3f));
        return;
      }
      if (uVar20 != 0x607) {
        return;
      }
      uVar8 = uVar8 + 3;
      sVar5 = (param_5 & 0xff) << 2;
      uVar11 = uVar10 & 0x3f;
      uVar20 = uVar8 & 0x1fc;
      local_a0 = CONCAT44(local_a0._4_4_,uVar8) & 0xffffffff000001fc;
      if (0xfff < uVar9) {
        uVar10 = 0;
        do {
          pfVar23 = pfVar7 + uVar20 * (int)uVar10;
          if ((param_5 & 0xff) != 0) {
            memset(pfVar23,0,sVar5);
            pfVar7 = local_88;
            uVar20 = (uint)local_a0;
          }
          uVar14 = 0;
          uVar8 = 0;
          uVar9 = 1;
          do {
            if ((uVar9 & uVar4) != 0) {
              lVar16 = (ulong)uVar8 * 0x14;
              fVar24 = (float)local_98[uVar10 * ((ulong)((uVar3 & 0x3f) + 3) & 0x7c) + uVar14];
              uVar14 = (ulong)((int)uVar14 + 1);
              *pfVar23 = *pfVar23 + fVar24 * *(float *)(&DAT_0073d3b0 + lVar16);
              pfVar23[1] = pfVar23[1] + fVar24 * *(float *)(&DAT_0073d3b4 + lVar16);
              pfVar23[2] = pfVar23[2] + fVar24 * *(float *)(&DAT_0073d3b8 + lVar16);
              pfVar23[3] = pfVar23[3] + fVar24 * *(float *)(&DAT_0073d3bc + lVar16);
              pfVar23[4] = pfVar23[4] + fVar24 * *(float *)(&DAT_0073d3c0 + lVar16);
            }
            uVar9 = uVar9 * 2;
            uVar8 = uVar8 + 1;
          } while (uVar9 <= uVar4);
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        return;
      }
      if ((param_5 & 0xff) == 0) {
        return;
      }
      uVar10 = uVar10 & 3;
      uVar8 = uVar8 >> 2;
      if (uVar11 - 1 < 3) {
        lVar16 = 0;
      }
      else {
        iVar22 = (uint)local_a0;
        uVar14 = 0;
        lVar16 = 0;
        do {
          memset(pfVar7 + uVar14,0,sVar5);
          iVar21 = (int)uVar14;
          memset(local_88 + (uint)(iVar22 + iVar21),0,sVar5);
          memset(local_88 + (uVar8 * 8 + iVar21),0,sVar5);
          memset(local_88 + (uVar8 * 0xc + iVar21),0,sVar5);
          lVar16 = lVar16 + 4;
          uVar14 = (ulong)(iVar21 + uVar8 * 0x10);
          pfVar7 = local_88;
        } while (uVar11 - uVar10 != lVar16);
      }
      if ((uVar2 & 3) == 0) {
        return;
      }
      uVar20 = uVar8 * (int)lVar16 * 4;
      do {
        memset(pfVar7 + uVar20,0,sVar5);
        uVar10 = uVar10 - 1;
        uVar20 = uVar20 + (uint)local_a0;
        pfVar7 = local_88;
      } while (uVar10 != 0);
      return;
    }
    uVar8 = (uVar20 & 0xff) + 3 & 0x1fc;
    iVar22 = uVar8 * (param_4 & 0xff);
joined_r0x0048a03c:
    if (iVar22 != 0) {
      memset(local_88,0,(ulong)(uint)(iVar22 << 2));
    }
    if ((param_4 >> 0xf & 1) != 0) {
      pfVar23 = local_88 + uVar8 * ((param_4 & 0xff) - 1);
      if ((int)(param_5 & 0xff) != 0) {
        memset(pfVar23,0,(param_5 & 0xff) << 2);
      }
      if ((uVar20 >> 0xf & 1) != 0) {
        pfVar23[(param_5 & 0xff) - 1] = 1.0;
      }
    }
  }
  return;
}


