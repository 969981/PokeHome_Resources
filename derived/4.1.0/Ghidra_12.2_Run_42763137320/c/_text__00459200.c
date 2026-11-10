/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00459200; name: FUN_.text__00459200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00459200(long *param_1,byte param_2)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  long *plVar5;
  int iVar6;
  float *pfVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  char local_b4 [4];
  ulong local_b0;
  undefined8 local_a8;
  
  lVar19 = param_1[1];
  fVar25 = 0.0;
  if ((*(ushort *)(lVar19 + 0x14a) >> 8 & 1) != 0) {
    fVar25 = (float)(**(code **)(*param_1 + 0x68))(param_1);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  fVar29 = *(float *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = 0xc5800000;
  local_b0 = 1;
  if (*(long *)(lVar19 + 0x78) == 0) {
    fVar26 = 1.0;
    uVar20 = param_1[6];
  }
  else {
    fVar26 = (float)FUN__text__00458b80(*(long *)(lVar19 + 0x78),&local_b0);
    uVar20 = param_1[6];
  }
  if (uVar20 != 0) {
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar20;
    fVar26 = fVar26 * fVar29;
    lVar3 = _DAT_008a3f88 + 0x10;
    do {
      while( true ) {
        local_a8 = auVar32._8_8_;
        local_b0 = auVar32._0_8_;
        uVar20 = local_b0;
        lVar22 = *(long *)(local_b0 + 0x170);
        iVar6 = *(int *)(local_b0 + 0x194);
        lVar24 = *(long *)(lVar19 + 0x1a8);
        if (iVar6 != 0) break;
        fVar29 = *(float *)(lVar19 + 0xb4);
        if (fVar29 == *(float *)(lVar19 + 0x210)) {
          fVar30 = *(float *)(lVar19 + 0x20c);
          if ((*(byte *)(lVar19 + 0x170) >> 3 & 1) != 0) goto LAB__text__0045951c;
LAB__text__004593fc:
          fVar29 = 1.0;
        }
        else {
          fVar30 = 0.0;
          *(float *)(lVar19 + 0x210) = fVar29;
          fVar31 = fVar29 * 0.05;
          bVar11 = false;
          bVar9 = false;
          bVar10 = false;
          if (-37.0 <= fVar31) {
            bVar11 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar31)) {
              bVar11 = fVar31 < 37.0;
              bVar9 = fVar31 == 37.0;
              bVar10 = false;
            }
          }
          if (bVar9 || bVar11 != bVar10) {
            uVar15 = (uint)(fVar29 * 1393317.6 + 1.0653532e+09);
            fVar29 = (float)(uVar15 & 0x7fffff | 0x3f800000);
            fVar30 = (fVar29 * (fVar29 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar15 & 0xff800000);
          }
          *(float *)(lVar19 + 0x20c) = fVar30;
          if ((*(byte *)(lVar19 + 0x170) >> 3 & 1) == 0) goto LAB__text__004593fc;
LAB__text__0045951c:
          uVar15 = *(uint *)(lVar19 + 0x1b0);
          if (uVar15 == 0) {
            fVar29 = 0.0;
          }
          else {
            fVar29 = 0.0;
            uVar17 = (ulong)uVar15 * 0x88 - 0x88;
            uVar2 = ((uint)(uVar17 / 0x88) & 0x1ffffff) + 1;
            uVar18 = (ulong)uVar2 & 3;
            lVar14 = lVar24;
            if ((uVar2 & 3) != 0) {
              do {
                if (lVar22 == *(long *)(lVar14 + 0x70)) {
                  if (fVar29 < *(float *)(lVar14 + 0x3c)) {
                    fVar29 = *(float *)(lVar14 + 0x3c);
                  }
                }
                lVar14 = lVar14 + 0x88;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (0x197 < uVar17) {
              do {
                if (lVar22 == *(long *)(lVar14 + 0x70)) {
                  if (fVar29 < *(float *)(lVar14 + 0x3c)) {
                    fVar29 = *(float *)(lVar14 + 0x3c);
                  }
                }
                if (lVar22 == *(long *)(lVar14 + 0xf8)) {
                  if (fVar29 < *(float *)(lVar14 + 0xc4)) {
                    fVar29 = *(float *)(lVar14 + 0xc4);
                  }
                }
                if (lVar22 == *(long *)(lVar14 + 0x180)) {
                  if (fVar29 < *(float *)(lVar14 + 0x14c)) {
                    fVar29 = *(float *)(lVar14 + 0x14c);
                  }
                }
                if (lVar22 == *(long *)(lVar14 + 0x208)) {
                  if (fVar29 < *(float *)(lVar14 + 0x1d4)) {
                    fVar29 = *(float *)(lVar14 + 0x1d4);
                  }
                }
                lVar14 = lVar14 + 0x220;
              } while (lVar14 != lVar24 + (ulong)uVar15 * 0x88);
            }
          }
          plVar23 = (long *)FUN__text__0044a4e4(*(undefined8 *)(lVar19 + 8));
          if ((char)plVar23[0x1c] == '\0') {
            plVar23 = DAT_00aea688;
            if (DAT_00aea688 == (long *)0x0) {
              do {
                if (plVar23 == (long *)0x0) {
                  plVar23 = (long *)FUN__text__00400f80(4,0xf0);
                  if (plVar23 != (long *)0x0) {
                    plVar23[1] = 0;
                    plVar23[2] = 0;
                    plVar8 = DAT_00ae9698;
                    bVar11 = DAT_00ae96a0 != 0;
                    plVar5 = plVar23;
                    plVar23[3] = (long)DAT_00ae9698;
                    DAT_00ae9698 = plVar5;
                    plVar5 = (long *)&DAT_00ae9690;
                    if (bVar11) {
                      plVar5 = plVar8;
                    }
                    plVar5[2] = (long)plVar23;
                    plVar23[8] = 0;
                    plVar23[9] = 0;
                    plVar23[0xc] = 0;
                    plVar23[0xd] = 0;
                    DAT_00ae9690 = DAT_00ae9690 + 1;
                    plVar23[0x12] = 0;
                    plVar23[0x13] = 0;
                    plVar23[0x16] = 0;
                    plVar23[0x17] = 0;
                    *plVar23 = lVar3;
                    plVar23[0x1a] = 0;
                    plVar23[0x1b] = 0;
                    *(undefined2 *)(plVar23 + 0x1c) = 0x101;
                  }
                  DAT_00aea688 = plVar23;
                }
              } while ((char)plVar23[0x1c] == '\0');
            }
            else if ((char)DAT_00aea688[0x1c] == '\0') {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
          }
          fVar31 = (float)FUN__text__0044c390(plVar23 + 4,lVar22,0);
          fVar30 = fVar31 * fVar30;
        }
        *(undefined4 *)(uVar20 + 0x178) = *(undefined4 *)(lVar19 + 0xbc);
        *(undefined4 *)(uVar20 + 0x17c) = *(undefined4 *)(lVar19 + 0xb8);
        fVar31 = fVar26 * fVar29 * fVar30;
        pfVar1 = _DAT_008a4f30;
joined_r0x004593d4:
        _DAT_008a4f30 = pfVar1;
        if (0.0 < fVar31) {
          fVar4 = (float)((uint)fVar31 & 0x7fffff | 0x3f800000);
          fVar27 = fVar4 + 1.0;
          fVar31 = *(float *)(*(long *)(uVar20 + 0x158) + 0x14) +
                   ((float)((uint)fVar31 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                   (fVar4 * 1.1581186 * fVar4 * fVar4 + -1.1581186) / (fVar27 * fVar27 * fVar27)) *
                   20.0;
          *(float *)(uVar20 + 0x188) = fVar30;
          fVar30 = *pfVar1;
          *(float *)(uVar20 + 0x18c) = fVar31;
          uVar28 = *(undefined4 *)(uVar20 + 0xc);
          *(undefined4 *)(uVar20 + 0xc) = 0;
          *(undefined4 *)(uVar20 + 8) = uVar28;
          uVar28 = *(undefined4 *)(uVar20 + 0x14);
          *(float *)(uVar20 + 0x14) = fVar29;
          *(byte *)(uVar20 + 0x198) =
               *(byte *)(uVar20 + 0x198) & 0xfc | (*(byte *)(uVar20 + 0x198) & 1) << 1 |
               param_2 & fVar31 <= fVar30;
          *(undefined4 *)(uVar20 + 0x10) = uVar28;
          if (*(float *)((long)param_1 + 0x14) < fVar31) {
            *(float *)((long)param_1 + 0x14) = fVar31;
          }
          lVar24 = *(long *)(uVar20 + 0x160);
          if ((lVar24 != 0) && ((*(ushort *)(lVar19 + 0x208) >> 7 & 1) != 0)) {
            if ((-fVar25 < *(float *)(lVar19 + 0xc0)) &&
               (*(float *)(lVar24 + 0x1c0) < fVar31 + fVar25)) {
              *(float *)(lVar24 + 0x1c0) = fVar31 + fVar25;
              lVar24 = *(long *)(uVar20 + 0x160);
            }
            lVar22 = FUN__text__004599d0(param_1 + 9,lVar24,local_b4);
            pfVar1 = _DAT_008a4f30;
            if (lVar22 == 0) {
              *(undefined8 *)(uVar20 + 0x188) = 0xc580000000000000;
              fVar31 = *pfVar1;
              uVar28 = *(undefined4 *)(uVar20 + 0xc);
              *(undefined4 *)(uVar20 + 0xc) = 0;
              bVar16 = *(byte *)(uVar20 + 0x198) & 0xfc | (*(byte *)(uVar20 + 0x198) & 1) << 1;
              *(undefined4 *)(uVar20 + 8) = uVar28;
              goto LAB__text__00459830;
            }
            fVar30 = *(float *)(lVar24 + 0x1d0) + *(float *)(lVar24 + 0x14);
            fVar29 = *(float *)(uVar20 + 0x18c) - fVar30;
            fVar31 = fVar29 * *(float *)(lVar24 + 0x1d4);
            if (fVar29 <= 0.0) {
              fVar31 = -0.0;
            }
            fVar31 = fVar31 + fVar30;
            if ((local_b4[0] == '\0') || (*(float *)(lVar22 + 8) < fVar31)) {
              *(float *)(lVar22 + 8) = fVar31;
            }
          }
        }
        else {
          *(undefined4 *)(uVar20 + 0x18c) = 0xc5800000;
          *(float *)(uVar20 + 0x188) = fVar30;
          uVar28 = *(undefined4 *)(uVar20 + 0xc);
          *(undefined4 *)(uVar20 + 0xc) = 0;
          *(undefined4 *)(uVar20 + 8) = uVar28;
          fVar31 = *pfVar1;
          bVar16 = *(byte *)(uVar20 + 0x198) & 0xfc | (*(byte *)(uVar20 + 0x198) & 1) << 1;
LAB__text__00459830:
          *(byte *)(uVar20 + 0x198) = bVar16 | -4096.0 <= fVar31;
          *(undefined4 *)(uVar20 + 0x10) = *(undefined4 *)(uVar20 + 0x14);
          *(float *)(uVar20 + 0x14) = fVar29;
        }
        if (((iVar6 != 3) && (((*(byte *)(uVar20 + 0x198) ^ 0xff) & 3) != 0)) &&
           (*(int *)(lVar19 + 0x1b0) != 0)) {
          thunk_FUN__text__0047f8d0(lVar19,(long *)(lVar19 + 0x1a8),uVar20);
        }
        auVar32._8_8_ = uVar20;
        auVar32._0_8_ = *(long *)(uVar20 + 0x20);
        if (*(long *)(uVar20 + 0x20) == 0) {
          return;
        }
      }
      uVar13 = FUN__text__0045c1d8(local_b0);
      fVar31 = 0.0;
      fVar29 = 0.0;
      if ((int)param_1[8] != 0) {
        plVar23 = (long *)param_1[7];
        fVar30 = 0.0;
        bVar11 = false;
        do {
          while ((lVar14 = plVar23[1], iVar12 = FUN__text__0045cdd4(uVar13), (int)lVar14 != iVar12
                 || (lVar21 = *plVar23, lVar14 = FUN__text__0045cdec(uVar13), lVar21 != lVar14))) {
            plVar23 = plVar23 + 4;
            if (plVar23 == (long *)(param_1[7] + (ulong)*(uint *)(param_1 + 8) * 0x20)) {
              if (!bVar11) goto LAB__text__004593a8;
              goto LAB__text__004593b4;
            }
          }
          bVar11 = true;
          fVar30 = *(float *)((long)plVar23 + 0xc) + fVar30;
          pfVar1 = (float *)((long)plVar23 + 0x14);
          pfVar7 = (float *)(plVar23 + 3);
          plVar23 = plVar23 + 4;
          fVar31 = *pfVar7 + fVar31;
          fVar29 = *pfVar1 + fVar29;
        } while (plVar23 != (long *)(param_1[7] + (ulong)*(uint *)(param_1 + 8) * 0x20));
LAB__text__004593b4:
        *(float *)(uVar20 + 0x178) = fVar29;
        *(float *)(uVar20 + 0x17c) = fVar31;
        pfVar1 = _DAT_008a4f30;
        if ((*(byte *)(lVar19 + 0x170) >> 3 & 1) == 0) {
          fVar29 = 1.0;
          fVar31 = fVar26 * 1.0 * fVar30;
        }
        else {
          if (iVar6 == 1) {
            fVar29 = 0.0;
            for (; lVar24 != *(long *)(lVar19 + 0x1a8) + (ulong)*(uint *)(lVar19 + 0x1b0) * 0x88;
                lVar24 = lVar24 + 0x88) {
              if (lVar22 == *(long *)(lVar24 + 0x70)) {
                if (fVar29 < *(float *)(lVar24 + 0x40)) {
                  fVar29 = *(float *)(lVar24 + 0x40);
                }
              }
            }
          }
          else if (iVar6 == 2) {
            fVar29 = 0.0;
            for (; lVar24 != *(long *)(lVar19 + 0x1a8) + (ulong)*(uint *)(lVar19 + 0x1b0) * 0x88;
                lVar24 = lVar24 + 0x88) {
              if (lVar22 == *(long *)(lVar24 + 0x70)) {
                if (fVar29 < *(float *)(lVar24 + 0x44)) {
                  fVar29 = *(float *)(lVar24 + 0x44);
                }
              }
            }
          }
          else {
            fVar29 = 1.0;
          }
          fVar31 = fVar26 * fVar29 * fVar30;
        }
        goto joined_r0x004593d4;
      }
LAB__text__004593a8:
      fVar30 = 0.0;
      if ((*(byte *)(uVar20 + 0x198) & 1) == 0) goto LAB__text__004593b4;
      auVar32 = FUN__text__00458f70(param_1,&local_b0);
    } while (auVar32._0_8_ != 0);
  }
  return;
}


