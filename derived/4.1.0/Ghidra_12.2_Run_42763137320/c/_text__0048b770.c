/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048b770; name: FUN_.text__0048b770
 */


/* WARNING: Removing unreachable block (ram,0x0048bb98) */

void FUN__text__0048b770(uint *param_1,long param_2,long *param_3,long *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  float fVar37;
  undefined4 uVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  uVar39 = *param_1;
  if (uVar39 != 2) {
    uVar34 = 0;
    do {
      uVar3 = uVar34 + 1;
      if (uVar3 < uVar39 - 1) {
        pfVar1 = (float *)(param_2 + (long)(int)uVar34 * 8);
        uVar33 = uVar3;
        do {
          uVar4 = uVar33 + 1;
          if (uVar4 < uVar39) {
            pfVar2 = (float *)(param_2 + (long)(int)uVar33 * 8);
            uVar36 = uVar4;
            do {
              uVar15 = uVar39 - 1;
              bVar18 = uVar34 == uVar15;
              fVar37 = *pfVar1;
              bVar16 = uVar33 == uVar15;
              bVar17 = uVar36 != uVar15;
              pfVar24 = (float *)(param_2 + (long)(int)uVar36 * 8);
              fVar40 = pfVar1[1];
              plVar10 = param_4;
              if ((!bVar18 && !bVar16) && bVar17) {
                plVar10 = param_3;
              }
              fVar41 = (fVar37 - *pfVar24) * (pfVar2[1] - fVar40) +
                       (*pfVar2 - fVar37) * (pfVar24[1] - fVar40);
              if (fVar41 != 0.0) {
                uVar15 = uVar36;
                if (0.0 <= fVar41) {
                  uVar15 = uVar33;
                }
                uVar9 = uVar33;
                if (0.0 <= fVar41) {
                  uVar9 = uVar36;
                }
                pfVar24 = (float *)(param_2 + (long)(int)uVar15 * 8);
                pfVar25 = (float *)(param_2 + (long)(int)uVar9 * 8);
                uVar22 = 0;
                do {
                  while (((uVar22 == uVar34 || (uVar22 == uVar15)) || (uVar22 == uVar9))) {
                    uVar22 = uVar22 + 1;
                    if (uVar39 <= uVar22) goto LAB__text__0048b9ac;
                  }
                  pfVar26 = (float *)(param_2 + uVar22 * 8);
                  fVar45 = *pfVar24;
                  fVar47 = pfVar24[1];
                  uVar22 = uVar22 + 1;
                  fVar49 = pfVar25[1];
                  fVar41 = *pfVar26;
                  fVar42 = pfVar26[1];
                  fVar43 = fVar41 * fVar41 + fVar42 * fVar42;
                  fVar46 = (fVar45 * fVar45 - fVar43) + fVar47 * fVar47;
                  fVar48 = *pfVar25;
                  fVar44 = (fVar37 * fVar37 + fVar40 * fVar40) - fVar43;
                  fVar43 = (fVar48 * fVar48 - fVar43) + fVar49 * fVar49;
                  fVar41 = (fVar46 * (fVar40 - fVar42) * (fVar48 - fVar41) +
                            (fVar45 - fVar41) * (fVar49 - fVar42) * fVar44 +
                           fVar43 * (fVar47 - fVar42) * (fVar37 - fVar41)) -
                           (fVar44 * (fVar47 - fVar42) * (fVar48 - fVar41) +
                            (fVar37 - fVar41) * (fVar49 - fVar42) * fVar46 +
                           fVar43 * (fVar45 - fVar41) * (fVar40 - fVar42));
                } while ((uVar22 < uVar39) && (fVar41 <= 0.01));
                if (fVar41 <= 0.01) {
LAB__text__0048b9ac:
                  lVar35 = *plVar10;
                  uVar39 = *(uint *)(plVar10 + 1);
                  uVar22 = (ulong)uVar39;
                  if (uVar39 != 0) {
                    lVar23 = uVar22 * 0x40;
                    puVar20 = (uint *)(lVar35 + 8);
                    do {
                      lVar23 = lVar23 + -0x40;
                      if ((puVar20[-2] == uVar34) && (puVar20[-1] == uVar33)) {
                        bVar19 = *puVar20 == uVar36;
                      }
                      else {
                        bVar19 = false;
                      }
                    } while ((lVar23 != 0) && (puVar20 = puVar20 + 0x10, !bVar19));
                    if (bVar19) goto LAB__text__0048b854;
                  }
                  uVar15 = *(uint *)((long)plVar10 + 0xc);
                  if (uVar39 < uVar15) {
                    *(uint *)(plVar10 + 1) = uVar39 + 1;
                    if (lVar35 == 0) {
                      puVar20 = (uint *)0x0;
                      if ((bVar18 || bVar16) || !bVar17) goto LAB__text__0048ba3c;
                    }
                    else {
                      puVar20 = (uint *)(lVar35 + uVar22 * 0x40);
                      puVar20[3] = 0;
                      puVar20[4] = 0;
                      puVar20[5] = 0;
                      if ((bVar18 || bVar16) || !bVar17) goto LAB__text__0048ba3c;
                    }
LAB__text__0048bccc:
                    lVar35 = *(long *)(param_1 + 10);
                    pfVar28 = (float *)(lVar35 + (ulong)uVar34 * 0xc);
                    pfVar26 = (float *)(lVar35 + (ulong)uVar33 * 0xc);
                    pfVar24 = (float *)(lVar35 + (ulong)uVar36 * 0xc);
                    fVar37 = *pfVar28;
                    fVar44 = *pfVar24;
                    fVar45 = *pfVar26;
                    pfVar27 = pfVar26 + 1;
                    fVar40 = *pfVar27;
                    pfVar25 = pfVar24 + 2;
                    fVar43 = *pfVar25;
                    pfVar31 = pfVar28 + 1;
                    fVar41 = *pfVar31;
                    pfVar29 = pfVar26 + 2;
                    fVar47 = *pfVar29;
                    pfVar32 = pfVar28 + 2;
                    fVar46 = *pfVar32;
                    pfVar30 = pfVar24 + 1;
                    fVar48 = *pfVar30;
                    fVar42 = (fVar40 * fVar37 * fVar43 + fVar44 * fVar47 * fVar41 +
                             fVar48 * fVar45 * fVar46) -
                             (fVar44 * fVar40 * fVar46 + fVar45 * fVar41 * fVar43 +
                             fVar48 * fVar47 * fVar37);
                    bVar18 = false;
                    bVar16 = true;
                    bVar17 = false;
                    if (fVar42 < 1e-38) {
                      bVar18 = false;
                      bVar16 = false;
                      bVar17 = true;
                      if (!NAN(fVar42)) {
                        bVar18 = fVar42 < -1e-38;
                        bVar16 = fVar42 == -1e-38;
                        bVar17 = false;
                      }
                    }
                    if (bVar16 || bVar18 != bVar17) {
                      *puVar20 = uVar34;
                      puVar20[1] = uVar33;
                      puVar20[2] = uVar36;
                      fVar42 = 1.0 / fVar42;
                      puVar20[7] = (uint)((fVar43 * fVar40 - fVar48 * fVar47) * fVar42);
                      puVar20[8] = (uint)((fVar46 * fVar48 - fVar41 * fVar43) * fVar42);
                      puVar20[9] = (uint)((fVar47 * fVar41 - fVar40 * fVar46) * fVar42);
                      puVar20[10] = (uint)((fVar47 * fVar44 - fVar43 * fVar45) * fVar42);
                      puVar20[0xb] = (uint)((fVar43 * fVar37 - fVar46 * fVar44) * fVar42);
                      puVar20[0xc] = (uint)((fVar45 * fVar46 - fVar47 * fVar37) * fVar42);
                      puVar20[0xd] = (uint)((fVar48 * fVar45 - fVar44 * fVar40) * fVar42);
                      puVar20[0xe] = (uint)((fVar41 * fVar44 - fVar48 * fVar37) * fVar42);
                      puVar20[0xf] = (uint)((fVar40 * fVar37 - fVar45 * fVar41) * fVar42);
                      fVar37 = (*pfVar26 + *pfVar28 + *pfVar24) * 0.33333334;
                      fVar40 = (*pfVar27 + *pfVar31 + *pfVar30) * 0.33333334;
                      fVar41 = (*pfVar29 + *pfVar32 + *pfVar25) * 0.33333334;
                      puVar20[3] = (uint)fVar37;
                      puVar20[4] = (uint)fVar40;
                      puVar20[5] = (uint)fVar41;
                      uVar38 = NEON_fminnm(*pfVar26 * fVar37 + fVar40 * *pfVar27 + fVar41 * *pfVar29
                                           ,*pfVar24 * fVar37 + fVar40 * *pfVar30 +
                                            fVar41 * *pfVar25);
                      uVar39 = NEON_fminnm(*pfVar28 * fVar37 + *pfVar31 * fVar40 + *pfVar32 * fVar41
                                           ,uVar38);
                      puVar20[6] = uVar39;
                      goto LAB__text__0048b854;
                    }
                  }
                  else {
                    iVar5 = uVar15 + (uVar15 >> 1);
                    if (uVar15 == 0) {
                      iVar5 = 1;
                    }
                    uVar15 = iVar5 + uVar15;
                    if (lVar35 == 0) {
                      lVar35 = FUN__text__00400f80(5,(ulong)uVar15 << 6);
                      if (lVar35 == 0) {
                        puVar20 = (uint *)0x0;
                        if ((bVar18 || bVar16) || !bVar17) goto LAB__text__0048ba3c;
                        goto LAB__text__0048bccc;
                      }
                      lVar23 = *plVar10;
                      if ((lVar23 != 0) && (lVar23 != lVar35)) {
                        if (uVar39 != 0) {
                          if (uVar39 == 1) {
                            lVar21 = 0;
LAB__text__0048bc50:
                            puVar7 = (undefined8 *)(lVar35 + lVar21 * 0x40);
                            *(undefined8 *)((long)puVar7 + 0xc) = 0;
                            *(undefined4 *)((long)puVar7 + 0x14) = 0;
                            puVar8 = (undefined8 *)(*plVar10 + lVar21 * 0x40);
                            uVar11 = *puVar8;
                            uVar13 = puVar8[1];
                            uVar14 = puVar8[3];
                            puVar7[2] = puVar8[2];
                            puVar7[3] = uVar14;
                            *puVar7 = uVar11;
                            puVar7[1] = uVar13;
                            uVar11 = puVar8[4];
                            uVar13 = puVar8[5];
                            uVar14 = puVar8[7];
                            puVar7[6] = puVar8[6];
                            puVar7[7] = uVar14;
                            puVar7[4] = uVar11;
                            puVar7[5] = uVar13;
                          }
                          else {
                            lVar23 = 0;
                            lVar21 = 0;
                            do {
                              puVar7 = (undefined8 *)(lVar35 + lVar23);
                              lVar21 = lVar21 + -2;
                              *(undefined8 *)((long)puVar7 + 0xc) = 0;
                              *(undefined4 *)((long)puVar7 + 0x14) = 0;
                              puVar8 = (undefined8 *)(*plVar10 + lVar23);
                              uVar11 = *puVar8;
                              uVar13 = puVar8[1];
                              uVar14 = puVar8[3];
                              puVar7[2] = puVar8[2];
                              puVar7[3] = uVar14;
                              *puVar7 = uVar11;
                              puVar7[1] = uVar13;
                              uVar11 = puVar8[4];
                              uVar14 = puVar8[5];
                              uVar13 = puVar8[6];
                              uVar12 = puVar8[7];
                              *(undefined8 *)((long)puVar7 + 0x4c) = 0;
                              *(undefined4 *)((long)puVar7 + 0x54) = 0;
                              puVar7[6] = uVar13;
                              puVar7[7] = uVar12;
                              puVar7[4] = uVar11;
                              puVar7[5] = uVar14;
                              lVar6 = *plVar10 + lVar23;
                              lVar23 = lVar23 + 0x80;
                              uVar11 = *(undefined8 *)(lVar6 + 0x40);
                              uVar13 = *(undefined8 *)(lVar6 + 0x48);
                              uVar14 = *(undefined8 *)(lVar6 + 0x58);
                              puVar7[10] = *(undefined8 *)(lVar6 + 0x50);
                              puVar7[0xb] = uVar14;
                              puVar7[8] = uVar11;
                              puVar7[9] = uVar13;
                              uVar11 = *(undefined8 *)(lVar6 + 0x60);
                              uVar13 = *(undefined8 *)(lVar6 + 0x68);
                              uVar14 = *(undefined8 *)(lVar6 + 0x78);
                              puVar7[0xe] = *(undefined8 *)(lVar6 + 0x70);
                              puVar7[0xf] = uVar14;
                              puVar7[0xc] = uVar11;
                              puVar7[0xd] = uVar13;
                            } while (-lVar21 != (uVar22 & 0xfffffffe));
                            lVar21 = -lVar21;
                            if ((uVar39 & 1) != 0) goto LAB__text__0048bc50;
                          }
                          lVar23 = *plVar10;
                        }
                        FUN__text__00400fc0(5,lVar23);
                      }
                      *plVar10 = lVar35;
                      *(uint *)((long)plVar10 + 0xc) = uVar15;
joined_r0x0048bcb4:
                      if (uVar39 < uVar15) {
                        uVar39 = *(uint *)(plVar10 + 1);
                        *(uint *)(plVar10 + 1) = uVar39 + 1;
                        puVar20 = (uint *)(lVar35 + (ulong)uVar39 * 0x40);
                        puVar20[3] = 0;
                        puVar20[4] = 0;
                        puVar20[5] = 0;
                        if ((bVar18 || bVar16) || !bVar17) goto LAB__text__0048ba3c;
                        goto LAB__text__0048bccc;
                      }
                    }
                    else {
                      lVar35 = FUN__text__00400fa0(5,lVar35);
                      if (lVar35 != 0) {
                        *plVar10 = lVar35;
                        *(uint *)((long)plVar10 + 0xc) = uVar15;
                        goto joined_r0x0048bcb4;
                      }
                    }
                    puVar20 = (uint *)0x0;
                    if ((!bVar18 && !bVar16) && bVar17) goto LAB__text__0048bccc;
LAB__text__0048ba3c:
                    puVar20[0xc] = 0;
                    puVar20[0xd] = 0;
                    puVar20[0xe] = 0;
                    puVar20[0xf] = 0;
                    puVar20[8] = 0;
                    puVar20[9] = 0;
                    puVar20[10] = 0;
                    puVar20[0xb] = 0;
                    puVar20[4] = 0;
                    puVar20[5] = 0;
                    puVar20[6] = 0;
                    puVar20[7] = 0;
                    puVar20[0] = 0;
                    puVar20[1] = 0;
                    puVar20[2] = 0;
                    puVar20[3] = 0;
                    uVar39 = uVar33;
                    if (uVar34 != *param_1 - 1) {
                      uVar39 = uVar34;
                    }
                    *puVar20 = uVar39;
                    uVar15 = uVar33;
                    if (uVar36 != *param_1 - 1) {
                      uVar15 = uVar36;
                    }
                    puVar20[1] = uVar15;
                    pfVar24 = (float *)(*(long *)(param_1 + 10) + (ulong)uVar39 * 0xc);
                    pfVar25 = (float *)(*(long *)(param_1 + 10) + (ulong)uVar15 * 0xc);
                    fVar37 = *pfVar24;
                    fVar40 = pfVar24[1];
                    fVar42 = *pfVar25;
                    fVar41 = pfVar25[1];
                    fVar43 = fVar41 * fVar37 - fVar42 * fVar40;
                    bVar18 = false;
                    bVar16 = true;
                    bVar17 = false;
                    if (fVar43 < 1e-38) {
                      bVar18 = false;
                      bVar16 = false;
                      bVar17 = true;
                      if (!NAN(fVar43)) {
                        bVar18 = fVar43 < -1e-38;
                        bVar16 = fVar43 == -1e-38;
                        bVar17 = false;
                      }
                    }
                    if (bVar16 || bVar18 != bVar17) {
                      fVar43 = 1.0 / fVar43;
                      puVar20[9] = 0;
                      puVar20[0xc] = 0;
                      puVar20[0xd] = 0;
                      puVar20[0xe] = 0;
                      puVar20[0xf] = 0;
                      puVar20[7] = (uint)(fVar43 * fVar41);
                      puVar20[8] = (uint)-(fVar42 * fVar43);
                      puVar20[10] = (uint)-(fVar40 * fVar43);
                      puVar20[0xb] = (uint)(fVar43 * fVar37);
                      goto LAB__text__0048b854;
                    }
                  }
                  *(int *)(plVar10 + 1) = (int)plVar10[1] + -1;
                }
              }
LAB__text__0048b854:
              uVar39 = *param_1;
              uVar36 = uVar36 + 1;
            } while (uVar36 < uVar39);
          }
          uVar33 = uVar4;
        } while (uVar4 < uVar39 - 1);
      }
      uVar34 = uVar3;
    } while (uVar3 < uVar39 - 2);
  }
  return;
}


