/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00518e80; name: FUN_.text__00518e80
 */


bool FUN__text__00518e80(float param_1,long *param_2,double *param_3,long param_4,undefined8 param_5
                        ,double *param_6,long *param_7,int param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  long *plVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  char cVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  float fVar27;
  float extraout_s0;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
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
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_128;
  ulong local_120;
  undefined2 local_118;
  undefined8 local_110;
  float local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  
  *(float *)(param_2 + 7) = param_1;
  iVar15 = (**(code **)(*param_7 + 8))(param_7);
  iVar26 = *(int *)(param_4 + 0x10);
  local_100 = 0;
  local_f8 = 0;
  if (iVar26 != 0) {
    local_100 = FUN__text__00400f80(9,iVar26);
    if (local_100 == 0) {
      return false;
    }
    local_f8 = CONCAT44(iVar26,(int)local_f8);
  }
  FUN__text__0051c5a4(&local_280,param_4);
  uVar16 = FUN__text__0051c5f0(&local_280);
  while ((uVar16 & 1) == 0) {
    lVar17 = FUN__text__0051c6cc(&local_280);
    fVar28 = (float)(param_3[1] - *(double *)(lVar17 + 0x28));
    fVar36 = *(float *)(lVar17 + 0x18);
    fVar39 = *(float *)(lVar17 + 0x1c);
    fVar41 = *(float *)(lVar17 + 0x10);
    fVar40 = *(float *)(lVar17 + 0x14);
    fVar32 = (float)(param_6[1] - *(double *)(lVar17 + 0x28));
    fVar27 = (float)(*param_3 - *(double *)(lVar17 + 0x20));
    fVar33 = (float)(param_3[2] - *(double *)(lVar17 + 0x30));
    fVar30 = (float)(*param_6 - *(double *)(lVar17 + 0x20));
    fVar37 = (float)(param_6[2] - *(double *)(lVar17 + 0x30));
    fVar42 = fVar36 * fVar27 - fVar40 * fVar28;
    fVar45 = fVar39 * fVar28 - fVar36 * fVar33;
    fVar43 = fVar40 * fVar33 - fVar39 * fVar27;
    fVar44 = fVar36 * fVar30 - fVar40 * fVar32;
    fVar46 = fVar39 * fVar32 - fVar36 * fVar37;
    fVar47 = fVar40 * fVar37 - fVar39 * fVar30;
    fVar42 = fVar42 + fVar42;
    fVar45 = fVar45 + fVar45;
    fVar43 = fVar43 + fVar43;
    fVar44 = fVar44 + fVar44;
    fVar46 = fVar46 + fVar46;
    fVar47 = fVar47 + fVar47;
    local_f0 = (double)CONCAT44(((fVar28 + fVar40 * fVar42 + fVar41 * fVar43) - fVar39 * fVar45) /
                                *(float *)(lVar17 + 0x3c),
                                ((fVar27 - fVar36 * fVar42) + fVar41 * fVar45 + fVar39 * fVar43) /
                                *(float *)(lVar17 + 0x38));
    local_e8 = (double)CONCAT44(local_e8._4_4_,
                                ((fVar33 + fVar41 * fVar42 + fVar36 * fVar45) - fVar40 * fVar43) /
                                *(float *)(lVar17 + 0x40));
    local_110 = (undefined8 *)
                CONCAT44(((fVar32 + fVar40 * fVar44 + fVar41 * fVar47) - fVar39 * fVar46) /
                         *(float *)(lVar17 + 0x3c),
                         ((fVar30 - fVar36 * fVar44) + fVar41 * fVar46 + fVar39 * fVar47) /
                         *(float *)(lVar17 + 0x38));
    local_108 = ((fVar37 + fVar41 * fVar44 + fVar36 * fVar46) - fVar40 * fVar47) /
                *(float *)(lVar17 + 0x40);
    uVar16 = FUN__text__0051c61c(&local_280);
    while ((uVar16 & 1) == 0) {
      auVar48 = FUN__text__0051c6e4(&local_280);
      FUN__text__00517c30(param_1,param_2,auVar48._0_8_,auVar48._8_8_,0,&local_f0,param_3,&local_f0)
      ;
      FUN__text__0051c68c(&local_280);
      uVar16 = FUN__text__0051c61c(&local_280);
    }
    FUN__text__0051c69c(&local_280);
    uVar16 = FUN__text__0051c5f0(&local_280);
  }
  if ((int)param_2[6] != 0) {
    do {
      lVar17 = FUN__text__00518440(param_2);
      uVar16 = local_f8 & 0xffffffff;
      if ((int)local_f8 != 0) {
        bVar8 = *(byte *)(lVar17 + 0x6d);
        iVar26 = 0;
        do {
          iVar2 = iVar26 + ((uint)uVar16 >> 1);
          bVar9 = *(byte *)(local_100 + iVar2);
          if (bVar9 == bVar8) {
            iVar26 = 9;
            goto LAB__text__005192b0;
          }
          if (bVar9 < bVar8) {
            iVar26 = iVar2 + 1;
          }
          uVar10 = (uint)uVar16 - (uint)(bVar9 < bVar8);
          uVar16 = (ulong)(uVar10 >> 1);
        } while (1 < uVar10);
      }
      uVar16 = FUN__text__005185c0(param_2,lVar17,param_3);
      iVar26 = 9;
      if ((uVar16 & 1) != 0) {
        lVar4 = *(long *)(lVar17 + 0x30);
        lVar6 = *(long *)(lVar17 + 0x38);
        dVar34 = param_6[2];
        dVar38 = *param_6;
        dVar35 = param_6[1];
        fVar32 = *(float *)(lVar6 + 0x18);
        fVar33 = *(float *)(lVar6 + 0x1c);
        fVar42 = *(float *)(lVar6 + 0x10);
        fVar41 = *(float *)(lVar6 + 0x14);
        fVar28 = (float)(dVar35 - *(double *)(lVar6 + 0x28));
        fVar27 = (float)(dVar38 - *(double *)(lVar6 + 0x20));
        fVar30 = (float)(dVar34 - *(double *)(lVar6 + 0x30));
        fVar44 = fVar32 * fVar27 - fVar41 * fVar28;
        fVar39 = fVar33 * fVar28 - fVar32 * fVar30;
        fVar40 = fVar41 * fVar30 - fVar33 * fVar27;
        fVar44 = fVar44 + fVar44;
        fVar39 = fVar39 + fVar39;
        fVar40 = fVar40 + fVar40;
        fVar36 = ((fVar27 - fVar32 * fVar44) + fVar42 * fVar39 + fVar33 * fVar40) /
                 *(float *)(lVar6 + 0x38);
        fVar37 = ((fVar28 + fVar41 * fVar44 + fVar42 * fVar40) - fVar33 * fVar39) /
                 *(float *)(lVar6 + 0x3c);
        fVar33 = ((fVar30 + fVar42 * fVar44 + fVar32 * fVar39) - fVar41 * fVar40) /
                 *(float *)(lVar6 + 0x40);
        fVar27 = fVar36 - *(float *)(lVar4 + 4);
        fVar28 = fVar37 - *(float *)(lVar4 + 8);
        fVar30 = fVar33 - *(float *)(lVar4 + 0xc);
        dVar31 = (double)(ulong)(uint)fVar30;
        fVar32 = fVar27 * *(float *)(lVar4 + 0x1c) + *(float *)(lVar4 + 0x20) * fVar28 +
                 *(float *)(lVar4 + 0x24) * fVar30;
        fVar27 = *(float *)(lVar4 + 0x28) * fVar27 + fVar28 * *(float *)(lVar4 + 0x2c) +
                 fVar30 * *(float *)(lVar4 + 0x30);
        bVar14 = fVar32 <= -0.0001;
        dVar29 = 4.70976965633203e-315;
        bVar1 = fVar27 <= -0.0001;
        bVar12 = 0.0001 <= fVar32;
        bVar13 = 0.0001 <= fVar27;
        cVar21 = -2;
        if (!bVar12 && !bVar1) {
          cVar21 = '\x01';
        }
        if (!bVar13 && !bVar14) {
          cVar21 = '\0';
        }
        cVar3 = cVar21;
        if ((fVar27 != 0.0001 && bVar13) && fVar32 > 0.0001 ||
            (!bVar13 && !bVar14) && (!bVar12 && !bVar1)) {
          cVar3 = -1;
        }
        if (*(char *)(lVar17 + 0x6e) == param_8) {
          iVar26 = 9;
          if ((((((fVar27 == 0.0001 || !bVar13) || fVar32 <= 0.0001) &&
                 ((bVar13 || bVar14) || (bVar12 || bVar1))) &&
               (iVar26 = 9, cVar21 != *(char *)(lVar17 + 0x6c))) &&
              (iVar26 = 9, *(float *)(lVar17 + 0x60) + *(float *)(lVar17 + 0x5c) < param_1)) &&
             (iVar26 = 9, *(float *)(lVar17 + 0x68) + *(float *)(lVar17 + 100) * 0.31830987 < 1.0))
          {
LAB__text__00519430:
            uVar16 = FUN__text__00519830(uVar16,lVar17,param_3,param_6,param_7,param_5,&local_100,
                                         iVar15 + param_9);
            iVar26 = 9;
            if ((uVar16 & 1) == 0) {
              iVar26 = 10;
            }
          }
        }
        else {
          if ((-1 < cVar3) && (cVar3 != *(char *)(lVar17 + 0x6c))) {
            uVar5 = *(undefined8 *)(lVar17 + 0x30);
            uVar7 = *(undefined8 *)(lVar17 + 0x38);
            local_1b0 = (double)FUN__text__00518834(lVar17,*(char *)(lVar17 + 0x6c) == '\0');
            local_110 = &local_280;
            local_198 = (float)(dVar38 - local_1b0);
            local_194 = (float)(dVar35 - dVar29);
            local_190 = (float)(dVar34 - dVar31);
            local_128 = 0;
            local_120 = 0x3f80000000000000;
            local_118 = 0;
            dStack_d8 = (double)local_198;
            local_d0 = (double)local_194;
            local_c0 = 1.0 / dStack_d8;
            dStack_c8 = (double)local_190;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1e0 = 0;
            uStack_1d8 = 0;
            dStack_b8 = 1.0 / local_d0;
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
            uStack_268 = 0;
            local_280 = 0;
            uStack_278 = 0;
            local_b0 = 1.0 / dStack_c8;
            lVar18 = *(long *)(*param_2 + 0x10);
            dStack_1a8 = dVar29;
            local_1a0 = dVar31;
            local_160 = uVar5;
            uStack_158 = uVar7;
            local_f0 = local_1b0;
            local_e8 = dVar29;
            local_e0 = dVar31;
            if (lVar18 != 0) {
              FUN__text__0051a160(*param_2 + 8,lVar18,&local_f0,&local_110);
              if ((int)local_120 != 0) {
                FUN__text__0051a9cc(&local_280);
                local_120 = local_120 & 0xffffffff00000000;
              }
            }
            fVar27 = SUB84(dVar29,0);
            fVar28 = SUB84(dVar31,0);
            if ((char)local_118 == '\0') {
              if (*(long *)(lVar17 + 0x40) == 0) {
                fVar39 = *(float *)(lVar6 + 0x18);
                fVar40 = *(float *)(lVar6 + 0x1c);
                fVar45 = *(float *)(lVar6 + 0x10);
                fVar44 = *(float *)(lVar6 + 0x14);
                fVar28 = (float)(param_3[1] - *(double *)(lVar6 + 0x28));
                fVar27 = (float)(*param_3 - *(double *)(lVar6 + 0x20));
                fVar32 = (float)(param_3[2] - *(double *)(lVar6 + 0x30));
                fVar43 = fVar39 * fVar27 - fVar44 * fVar28;
                fVar41 = fVar40 * fVar28 - fVar39 * fVar32;
                fVar42 = fVar44 * fVar32 - fVar40 * fVar27;
                fVar43 = fVar43 + fVar43;
                fVar41 = fVar41 + fVar41;
                fVar42 = fVar42 + fVar42;
                fVar30 = ((fVar27 - fVar39 * fVar43) + fVar45 * fVar41 + fVar40 * fVar42) /
                         *(float *)(lVar6 + 0x38);
                fVar27 = ((fVar28 + fVar44 * fVar43 + fVar45 * fVar42) - fVar40 * fVar41) /
                         *(float *)(lVar6 + 0x3c);
                fVar28 = ((fVar32 + fVar45 * fVar43 + fVar39 * fVar41) - fVar44 * fVar42) /
                         *(float *)(lVar6 + 0x40);
                uVar16 = 0;
              }
              else {
                uVar16 = FUN__text__005189c0(*(long *)(lVar17 + 0x40),lVar6);
                fVar30 = extraout_s0;
              }
              iVar26 = 9;
              fVar40 = *(float *)(lVar4 + 0x14);
              fVar39 = *(float *)(lVar4 + 0x18);
              fVar44 = *(float *)(lVar4 + 0x10);
              fVar41 = fVar39 * *(float *)(lVar4 + 0x20) - fVar40 * *(float *)(lVar4 + 0x24);
              fVar32 = fVar44 * *(float *)(lVar4 + 0x24) - *(float *)(lVar4 + 0x1c) * fVar39;
              fVar42 = *(float *)(lVar4 + 0x1c) * fVar40 - fVar44 * *(float *)(lVar4 + 0x20);
              fVar28 = fVar28 - *(float *)(lVar4 + 0xc);
              fVar33 = fVar33 - *(float *)(lVar4 + 0xc);
              fVar27 = fVar27 - *(float *)(lVar4 + 8);
              fVar37 = fVar37 - *(float *)(lVar4 + 8);
              fVar30 = fVar30 - *(float *)(lVar4 + 4);
              fVar36 = fVar36 - *(float *)(lVar4 + 4);
              fVar45 = fVar30 * fVar44 + fVar40 * fVar27 + fVar39 * fVar28;
              fVar30 = fVar30 - fVar44 * fVar45;
              fVar27 = fVar27 - fVar40 * fVar45;
              fVar28 = fVar28 - fVar39 * fVar45;
              fVar45 = fVar36 * fVar44 + fVar40 * fVar37 + fVar39 * fVar33;
              fVar36 = fVar36 - fVar44 * fVar45;
              fVar37 = fVar37 - fVar40 * fVar45;
              fVar33 = fVar33 - fVar39 * fVar45;
              if ((-(fVar28 * fVar42) - (fVar30 * fVar41 + fVar32 * fVar27)) /
                  SQRT(fVar30 * fVar30 + fVar27 * fVar27 + fVar28 * fVar28) <=
                  (fVar36 * fVar41 + fVar32 * fVar37 + fVar42 * fVar33) /
                  SQRT(fVar36 * fVar36 + fVar37 * fVar37 + fVar33 * fVar33) + 1.1920929e-07)
              goto LAB__text__00519430;
              goto LAB__text__005192b0;
            }
          }
          FUN__text__0051c420(&local_280,*(undefined8 *)(lVar17 + 0x30),
                              *(undefined8 *)(lVar17 + 0x38),*(char *)(lVar17 + 0x6c) == '\0');
          uVar16 = FUN__text__0051c5f0(&local_280);
          while ((uVar16 & 1) == 0) {
            FUN__text__00518b90(param_1,param_2,lVar17,&local_280,param_3,param_6);
            FUN__text__0051c69c(&local_280);
            uVar16 = FUN__text__0051c5f0(&local_280);
          }
          FUN__text__0051c540(&local_280);
          iVar26 = 0;
        }
      }
LAB__text__005192b0:
    } while ((iVar26 != 10) && ((int)param_2[6] != 0));
  }
  if ((int)param_2[3] != 0) {
    plVar20 = *(long **)param_2[2];
    if (plVar20 == (long *)0x0) {
      uVar16 = 0;
      do {
        if ((int)param_2[3] - 1 == uVar16) goto LAB__text__005197d0;
        plVar20 = (long *)((undefined8 *)param_2[2])[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (plVar20 == (long *)0x0);
    }
    else {
      uVar16 = 0;
    }
    uVar24 = uVar16 & 0xffffffff;
    do {
      plVar22 = (long *)plVar20[9];
      plVar25 = plVar22;
      if (plVar22 == (long *)0x0) {
        uVar10 = *(uint *)(param_2 + 3);
        if (uVar10 <= (int)uVar16 + 1U) {
          uVar10 = (int)uVar16 + 1;
        }
        uVar24 = (ulong)uVar10;
        uVar23 = uVar16 & 0xffffffff;
        do {
          if (uVar10 - 1 == (int)uVar23) {
            plVar25 = (long *)0x0;
            goto LAB__text__005196b4;
          }
          uVar23 = (ulong)((int)uVar23 + 1);
          plVar25 = *(long **)(param_2[2] + uVar23 * 8);
        } while (plVar25 == (long *)0x0);
        uVar24 = uVar23;
      }
LAB__text__005196b4:
      *(long **)(param_2[2] + (uVar16 & 0xffffffff) * 8) = plVar22;
      plVar22 = (long *)param_2[1];
      *(int *)(param_2 + 4) = (int)param_2[4] + -1;
      if (plVar22 == (long *)0x0) {
        plVar22 = (long *)0x0;
        plVar19 = (long *)0x0;
joined_r0x0051970c:
        lVar17 = lRam0000000000000390;
        if (lRam0000000000000390 == 0) goto LAB__text__00519790;
LAB__text__0051975c:
        *plVar20 = lVar17;
        plVar19[0x72] = (long)plVar20;
        iVar26 = (int)plVar19[0x71] + 1;
        *(int *)(plVar19 + 0x71) = iVar26;
      }
      else {
        if ((plVar20 < plVar22) || (plVar22 + 0x70 <= plVar20)) {
          plVar19 = (long *)plVar22[0x70];
          plVar11 = plVar19;
          if (plVar19 == (long *)0x0) goto joined_r0x0051970c;
          do {
            if (plVar11 <= plVar20) {
              plVar19 = plVar11;
              if (plVar20 < plVar11 + 0x70) break;
            }
            plVar19 = (long *)plVar11[0x70];
            plVar22 = plVar11;
            plVar11 = plVar19;
          } while (plVar19 != (long *)0x0);
          lVar17 = plVar19[0x72];
        }
        else {
          lVar17 = plVar22[0x72];
          plVar19 = plVar22;
          plVar22 = (long *)0x0;
        }
        if (lVar17 != 0) goto LAB__text__0051975c;
LAB__text__00519790:
        plVar19[0x72] = (long)plVar20;
        *plVar20 = 0;
        iVar26 = (int)plVar19[0x71] + 1;
        *(int *)(plVar19 + 0x71) = iVar26;
      }
      if (iVar26 == 8) {
        plVar20 = param_2 + 1;
        if ((long *)param_2[1] != plVar19) {
          plVar20 = plVar22 + 0x70;
        }
        *plVar20 = plVar19[0x70];
        FUN__text__00400fc0(0xb);
      }
      plVar20 = plVar25;
      uVar16 = uVar24;
    } while (plVar25 != (long *)0x0);
  }
LAB__text__005197d0:
  bVar14 = (int)local_f8 != 0;
  if (local_100 != 0) {
    local_f8 = local_f8 & 0xffffffff00000000;
    FUN__text__00400fc0(9);
  }
  return bVar14;
}


