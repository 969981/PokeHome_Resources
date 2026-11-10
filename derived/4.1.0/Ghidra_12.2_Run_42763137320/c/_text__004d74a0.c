/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d74a0; name: FUN_.text__004d74a0
 */


void FUN__text__004d74a0(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
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
  uint local_70 [2];
  long local_68;
  long local_60;
  uint local_58 [2];
  long local_50;
  long local_48;
  
  if ((int)param_1[1] != 0) {
    if ((*(short *)((long)param_1 + 0x2c) == 0) && (*(short *)(param_4 + 0x1a8) == 0)) {
      if ((*(char *)((long)param_1 + 0x26) == '\0') && (uVar2 = *(uint *)(*param_2 + 8), uVar2 != 0)
         ) {
        uVar15 = 0;
        do {
          plVar6 = (long *)(*(long *)*param_2 + uVar15 * 0x30);
          fVar17 = *(float *)(plVar6[3] + 0x50);
          fVar18 = *(float *)(plVar6[3] + 0x54);
          bVar5 = false;
          if ((fVar17 == 1.0) && (bVar5 = false, !NAN(fVar18))) {
            bVar5 = fVar18 == 1.0;
          }
          if (!bVar5) {
            bVar3 = *(byte *)(plVar6 + 1);
            uVar9 = (ulong)bVar3;
            uVar4 = *(ushort *)((long)plVar6 + 0x12);
            uVar16 = (ulong)uVar4;
            if (fVar18 == fVar17) {
              bVar5 = true;
              if ((bVar3 != 0) && (bVar5 = false, !NAN(fVar17))) {
                bVar5 = fVar17 == 1.0;
              }
              if (!bVar5) {
                if (uVar4 < 4) {
                  if (uVar4 != 0) {
                    if (bVar3 == 1) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 0;
                      do {
                        pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                        pfVar13 = pfVar14;
                        do {
                          pfVar12 = pfVar13 + 1;
                          *pfVar13 = *pfVar13 * fVar17;
                          pfVar13 = pfVar12;
                        } while (pfVar12 < pfVar14 + uVar16);
                        pfVar13 = (float *)(*plVar6 +
                                           (uVar10 << 2 | 4) * (ulong)*(ushort *)(plVar6 + 2));
                        pfVar14 = pfVar13;
                        do {
                          pfVar12 = pfVar14 + 1;
                          *pfVar14 = *pfVar14 * fVar17;
                          pfVar14 = pfVar12;
                        } while (pfVar12 < pfVar13 + uVar16);
                        uVar10 = uVar10 + 2;
                      } while (uVar10 != (uVar9 & 0xfe));
                    }
                    if ((bVar3 & 1) != 0) {
                      pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                      pfVar13 = pfVar14;
                      do {
                        pfVar12 = pfVar13 + 1;
                        *pfVar13 = *pfVar13 * fVar17;
                        pfVar13 = pfVar12;
                      } while (pfVar12 < pfVar14 + uVar16);
                    }
                  }
                }
                else {
                  uVar10 = 0;
                  do {
                    pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                    if ((int)(uVar16 & 0xfffc) == 0) {
                      pfVar13 = pfVar14;
                    }
                    else {
                      pfVar12 = pfVar14;
                      do {
                        pfVar13 = pfVar12 + 4;
                        *(ulong *)(pfVar12 + 2) =
                             CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) * fVar17,
                                      (float)*(undefined8 *)(pfVar12 + 2) * fVar17);
                        *(ulong *)pfVar12 =
                             CONCAT44((float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar17,
                                      (float)*(undefined8 *)pfVar12 * fVar17);
                        pfVar12 = pfVar13;
                      } while (pfVar13 < pfVar14 + (uVar16 & 0xfffc));
                    }
                    for (; pfVar13 < pfVar14 + uVar16; pfVar13 = pfVar13 + 1) {
                      *pfVar13 = *pfVar13 * fVar17;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 != uVar9);
                }
              }
            }
            else if (bVar3 != 0) {
              fVar19 = (fVar18 - fVar17) / (float)uVar16;
              if (uVar4 < 4) {
                if (uVar4 != 0) {
                  if (bVar3 == 1) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = 0;
                    do {
                      pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                      pfVar13 = pfVar14;
                      fVar18 = fVar17;
                      do {
                        fVar20 = *pfVar13 * fVar18;
                        fVar18 = fVar18 + fVar19;
                        pfVar12 = pfVar13 + 1;
                        *pfVar13 = fVar20;
                        pfVar13 = pfVar12;
                      } while (pfVar12 < pfVar14 + uVar16);
                      pfVar13 = (float *)(*plVar6 +
                                         (uVar10 << 2 | 4) * (ulong)*(ushort *)(plVar6 + 2));
                      pfVar14 = pfVar13;
                      fVar18 = fVar17;
                      do {
                        fVar20 = *pfVar14 * fVar18;
                        fVar18 = fVar18 + fVar19;
                        pfVar12 = pfVar14 + 1;
                        *pfVar14 = fVar20;
                        pfVar14 = pfVar12;
                      } while (pfVar12 < pfVar13 + uVar16);
                      uVar10 = uVar10 + 2;
                    } while (uVar10 != (uVar9 & 0xfe));
                  }
                  if ((bVar3 & 1) != 0) {
                    pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                    pfVar13 = pfVar14;
                    do {
                      fVar18 = *pfVar13 * fVar17;
                      fVar17 = fVar17 + fVar19;
                      pfVar12 = pfVar13 + 1;
                      *pfVar13 = fVar18;
                      pfVar13 = pfVar12;
                    } while (pfVar12 < pfVar14 + uVar16);
                  }
                }
              }
              else {
                uVar10 = uVar16 & 0xfffc;
                if ((int)uVar10 == 0) {
                  if (bVar3 == 1) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = 0;
                    do {
                      pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                      pfVar13 = pfVar14;
                      fVar18 = fVar17;
                      do {
                        fVar20 = *pfVar13 * fVar18;
                        fVar18 = fVar18 + fVar19;
                        pfVar12 = pfVar13 + 1;
                        *pfVar13 = fVar20;
                        pfVar13 = pfVar12;
                      } while (pfVar12 < pfVar14 + uVar16);
                      pfVar13 = (float *)(*plVar6 +
                                         (uVar10 << 2 | 4) * (ulong)*(ushort *)(plVar6 + 2));
                      pfVar14 = pfVar13;
                      fVar18 = fVar17;
                      do {
                        fVar20 = *pfVar14 * fVar18;
                        fVar18 = fVar18 + fVar19;
                        pfVar12 = pfVar14 + 1;
                        *pfVar14 = fVar20;
                        pfVar14 = pfVar12;
                      } while (pfVar12 < pfVar13 + uVar16);
                      uVar10 = uVar10 + 2;
                    } while (uVar10 != (uVar9 & 0xfe));
                  }
                  if ((bVar3 & 1) != 0) {
                    pfVar14 = (float *)(*plVar6 + uVar10 * *(ushort *)(plVar6 + 2) * 4);
                    pfVar13 = pfVar14;
                    do {
                      fVar18 = *pfVar13 * fVar17;
                      fVar17 = fVar17 + fVar19;
                      pfVar12 = pfVar13 + 1;
                      *pfVar13 = fVar18;
                      pfVar13 = pfVar12;
                    } while (pfVar12 < pfVar14 + uVar16);
                  }
                }
                else {
                  uVar11 = 0;
                  fVar20 = (fVar18 - fVar17) / (float)uVar10;
                  fVar18 = fVar20 * 4.0;
                  fVar25 = fVar20 + fVar17 + fVar20;
                  do {
                    pfVar14 = (float *)(*plVar6 + uVar11 * *(ushort *)(plVar6 + 2) * 4);
                    pfVar13 = pfVar14;
                    fVar23 = fVar25;
                    fVar24 = fVar25 + fVar20;
                    fVar21 = fVar17;
                    fVar22 = fVar20 + fVar17;
                    do {
                      fVar26 = (float)*(undefined8 *)pfVar13 * fVar21;
                      fVar27 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar22;
                      fVar28 = (float)*(undefined8 *)(pfVar13 + 2) * fVar23;
                      fVar29 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar24;
                      fVar21 = fVar21 + fVar18;
                      fVar22 = fVar22 + fVar18;
                      fVar23 = fVar23 + fVar18;
                      fVar24 = fVar24 + fVar18;
                      pfVar12 = pfVar13 + 4;
                      *(ulong *)(pfVar13 + 2) = CONCAT44(fVar29,fVar28);
                      *(ulong *)pfVar13 = CONCAT44(fVar27,fVar26);
                      pfVar13 = pfVar12;
                    } while (pfVar12 < pfVar14 + uVar10);
                    if (pfVar12 < pfVar14 + uVar16) {
                      fVar23 = fVar17;
                      do {
                        fVar24 = *pfVar12 * fVar23;
                        fVar23 = fVar23 + fVar19;
                        pfVar13 = pfVar12 + 1;
                        *pfVar12 = fVar24;
                        pfVar12 = pfVar13;
                      } while (pfVar13 < pfVar14 + uVar16);
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 != uVar9);
                }
              }
            }
            *(undefined8 *)(*(long *)(*(long *)*param_2 + uVar15 * 0x30 + 0x18) + 0x50) =
                 0x3f8000003f800000;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar2);
      }
      if (*(char *)((long)param_1 + 0x24) == '\0') {
        uVar15 = (ulong)*(uint *)(param_1 + 1);
        if (*(char *)((long)param_1 + 0x27) == '\0') {
          if (uVar15 != 0) {
            lVar7 = 0;
            uVar16 = 0;
            do {
              lVar1 = *(long *)*param_2 + lVar7;
              lVar8 = *(long *)(*param_1 + uVar16 * 8);
              if (**(long **)(lVar1 + 0x18) == *(long *)(lVar8 + 0x88)) {
                plVar6 = *(long **)(lVar8 + 0x90);
                (**(code **)(*plVar6 + 0x40))(plVar6,lVar1,0,param_1[2] + lVar7);
                FUN__text__0044f220(*(undefined8 *)(param_1[2] + lVar7 + 0x18),
                                    *(undefined8 *)(lVar1 + 0x18));
                uVar15 = (ulong)*(uint *)(param_1 + 1);
              }
              uVar16 = uVar16 + 1;
              lVar7 = lVar7 + 0x30;
            } while (uVar16 < uVar15);
          }
          *param_2 = (long)(param_1 + 2);
        }
        else if (uVar15 != 0) {
          lVar7 = 0;
          uVar15 = 0;
          do {
            plVar6 = *(long **)(*(long *)(*param_1 + uVar15 * 8) + 0x90);
            (**(code **)(*plVar6 + 0x40))(plVar6,*(long *)*param_2 + lVar7);
            uVar15 = uVar15 + 1;
            lVar7 = lVar7 + 0x30;
          } while (uVar15 < *(uint *)(param_1 + 1));
        }
      }
      else {
        local_58[0] = *(uint *)(*param_2 + 8);
        uVar15 = (ulong)local_58[0] * 8 + 0xf & 0xffffffff0;
        local_50 = (long)local_70 - uVar15;
        local_48 = local_50 - uVar15;
        if (local_58[0] != 0) {
          lVar7 = 0;
          uVar15 = 0;
          do {
            lVar8 = uVar15 * 8;
            uVar15 = uVar15 + 1;
            *(long *)(local_50 + lVar8) = *(long *)*param_2 + lVar7;
            lVar1 = *(long *)*param_2 + lVar7;
            lVar7 = lVar7 + 0x30;
            *(undefined8 *)(local_48 + lVar8) = *(undefined8 *)(lVar1 + 0x18);
          } while (uVar15 < local_58[0]);
        }
        if (*(char *)((long)param_1 + 0x27) == '\0') {
          local_70[0] = *(uint *)(param_1 + 3);
          plVar6 = param_1 + 2;
          local_68 = 0;
          local_60 = 0;
          if (local_70[0] != 0) {
            uVar15 = (ulong)local_70[0] * 8 + 0xf & 0xffffffff0;
            local_68 = local_48 - uVar15;
            local_60 = local_68 - uVar15;
            lVar7 = 0;
            uVar15 = 0;
            do {
              lVar8 = uVar15 * 8;
              uVar15 = uVar15 + 1;
              *(undefined8 *)(local_60 + lVar8) = *(undefined8 *)(*plVar6 + lVar7 + 0x18);
              lVar1 = *plVar6 + lVar7;
              lVar7 = lVar7 + 0x30;
              *(long *)(local_68 + lVar8) = lVar1;
            } while (uVar15 < local_70[0]);
          }
          (**(code **)(**(long **)(*(long *)*param_1 + 0x90) + 0x40))
                    (*(long **)(*(long *)*param_1 + 0x90),local_58,local_70);
          *param_2 = (long)plVar6;
        }
        else {
          (**(code **)(**(long **)(*(long *)*param_1 + 0x90) + 0x40))
                    (*(long **)(*(long *)*param_1 + 0x90),local_58);
        }
      }
    }
    else if ((*(short *)((long)param_1 + 0x2a) == 0) && (*(short *)(param_4 + 0x1aa) == 0)) {
      uVar15 = 0;
      do {
        (**(code **)(**(long **)(*(long *)(*param_1 + uVar15 * 8) + 0x90) + 0x18))();
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 1));
    }
    *(undefined2 *)((long)param_1 + 0x2a) = *(undefined2 *)((long)param_1 + 0x2c);
  }
  return;
}


