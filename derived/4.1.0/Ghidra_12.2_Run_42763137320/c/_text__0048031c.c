/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048031c; name: thunk_FUN_.text__00480320
 */


void thunk_FUN__text__00480320(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_78;
  undefined4 uStack_74;
  
  lVar8 = FUN__text__0045b010();
  uVar9 = FUN__text__0047b064(param_1);
  if (lVar8 == 0) {
    if (((uVar9 & 1) == 0) || (*DAT_00ae9a78 == '\0')) {
      plVar11 = (long *)0x0;
      cVar2 = DAT_00ae9a78[3];
    }
    else {
      plVar11 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 8) != 0) {
        plVar11 = (long *)(DAT_00ae9a78 + 8);
      }
      cVar2 = DAT_00ae9a78[3];
    }
    plVar18 = plVar11;
    if (cVar2 == '\0') {
      plVar15 = (long *)0x0;
      plVar16 = (long *)0x0;
      bVar1 = 0;
      plVar17 = (long *)0x0;
      plVar19 = (long *)0x0;
      bVar7 = true;
      bVar6 = true;
      plVar20 = (long *)0x0;
    }
    else {
      plVar15 = (long *)0x0;
      plVar16 = (long *)0x0;
      plVar17 = (long *)0x0;
      bVar1 = 0;
      bVar6 = true;
      plVar19 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x50) != 0) {
        plVar19 = (long *)(DAT_00ae9a78 + 0x50);
      }
      bVar7 = true;
      plVar20 = plVar19;
    }
    goto LAB__text__0048063c;
  }
  if ((ulong)*(byte *)(lVar8 + 0x1f8) == 0xff) {
    plVar15 = (long *)0x0;
    uVar12 = (ulong)*(byte *)(lVar8 + 0x1f9);
    if (uVar12 != 0xff) goto LAB__text__00480390;
LAB__text__004804b0:
    plVar16 = (long *)0x0;
    uVar12 = (ulong)*(byte *)(lVar8 + 0x1fa);
    if (uVar12 != 0xff) goto LAB__text__004803b0;
LAB__text__004804c0:
    plVar17 = (long *)0x0;
    if ((uVar9 & 1) != 0) goto LAB__text__004803c8;
LAB__text__004804c8:
    plVar18 = (long *)0x0;
    plVar11 = (long *)0x0;
    bVar1 = *(byte *)(lVar8 + 0x202);
joined_r0x004804d8:
    if (bVar1 == 0xff) goto LAB__text__004805a4;
LAB__text__00480580:
    if (bVar1 == 0xfe) {
      if (DAT_00ae9a78[3] == '\0') goto LAB__text__004805a4;
      plVar20 = (long *)(DAT_00ae9a78 + 0x50);
    }
    else {
      plVar20 = (long *)(lVar8 + (ulong)(uint)bVar1 * 0x18 + 0x30);
    }
    plVar19 = (long *)0x0;
    if (*plVar20 != 0) {
      plVar19 = plVar20;
    }
    bVar1 = *(byte *)(lVar8 + 0x208);
    if (bVar1 != 0xff) goto LAB__text__004805dc;
LAB__text__00480600:
    plVar20 = (long *)0x0;
  }
  else {
    plVar11 = (long *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x1f8) * 0x18 + 0x30);
    plVar15 = (long *)0x0;
    if (*plVar11 != 0) {
      plVar15 = plVar11;
    }
    uVar12 = (ulong)*(byte *)(lVar8 + 0x1f9);
    if (uVar12 == 0xff) goto LAB__text__004804b0;
LAB__text__00480390:
    plVar11 = (long *)(lVar8 + uVar12 * 0x18 + 0x30);
    plVar16 = (long *)0x0;
    if (*plVar11 != 0) {
      plVar16 = plVar11;
    }
    uVar12 = (ulong)*(byte *)(lVar8 + 0x1fa);
    if (uVar12 == 0xff) goto LAB__text__004804c0;
LAB__text__004803b0:
    plVar11 = (long *)(lVar8 + uVar12 * 0x18 + 0x30);
    plVar17 = (long *)0x0;
    if (*plVar11 != 0) {
      plVar17 = plVar11;
    }
    if ((uVar9 & 1) == 0) goto LAB__text__004804c8;
LAB__text__004803c8:
    bVar1 = *(byte *)(lVar8 + 0x1ff);
    if (bVar1 == 0xff) {
LAB__text__004804e0:
      plVar11 = (long *)0x0;
      bVar1 = *(byte *)(lVar8 + 0x205);
      if (bVar1 == 0xff) goto LAB__text__0048054c;
LAB__text__00480514:
      if (bVar1 != 0xfe) {
        plVar19 = (long *)(lVar8 + (ulong)(uint)bVar1 * 0x18 + 0x30);
        plVar18 = (long *)0x0;
        if (*plVar19 != 0) {
          plVar18 = plVar19;
        }
        bVar1 = *(byte *)(lVar8 + 0x202);
        goto joined_r0x0048057c;
      }
      if (*DAT_00ae9a78 == '\0') goto LAB__text__0048054c;
      plVar18 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 8) != 0) {
        plVar18 = (long *)(DAT_00ae9a78 + 8);
      }
      bVar1 = *(byte *)(lVar8 + 0x202);
      goto joined_r0x004804d8;
    }
    if (bVar1 == 0xfe) {
      if (*DAT_00ae9a78 == '\0') goto LAB__text__004804e0;
      plVar11 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 8) != 0) {
        plVar11 = (long *)(DAT_00ae9a78 + 8);
      }
      bVar1 = *(byte *)(lVar8 + 0x205);
    }
    else {
      plVar18 = (long *)(lVar8 + (ulong)bVar1 * 0x18 + 0x30);
      plVar11 = (long *)0x0;
      if (*plVar18 != 0) {
        plVar11 = plVar18;
      }
      bVar1 = *(byte *)(lVar8 + 0x205);
    }
    if (bVar1 != 0xff) goto LAB__text__00480514;
LAB__text__0048054c:
    plVar18 = (long *)0x0;
    bVar1 = *(byte *)(lVar8 + 0x202);
joined_r0x0048057c:
    if (bVar1 != 0xff) goto LAB__text__00480580;
LAB__text__004805a4:
    plVar19 = (long *)0x0;
    bVar1 = *(byte *)(lVar8 + 0x208);
    if (bVar1 == 0xff) goto LAB__text__00480600;
LAB__text__004805dc:
    if (bVar1 == 0xfe) {
      if (DAT_00ae9a78[3] == '\0') goto LAB__text__00480600;
      plVar13 = (long *)(DAT_00ae9a78 + 0x50);
    }
    else {
      plVar13 = (long *)(lVar8 + (ulong)(uint)bVar1 * 0x18 + 0x30);
    }
    plVar20 = (long *)0x0;
    if (*plVar13 != 0) {
      plVar20 = plVar13;
    }
  }
  bVar6 = plVar16 == plVar15;
  bVar7 = plVar17 == plVar15;
  bVar1 = *(byte *)(lVar8 + 0x20b) & 1;
LAB__text__0048063c:
  lVar14 = *param_2;
  if (plVar16 == (long *)0x0) {
    bVar6 = true;
  }
  if (plVar17 == (long *)0x0) {
    bVar7 = true;
  }
  do {
    if (lVar8 != 0) {
      fStack_78 = 1.0;
      if (plVar15 == (long *)0x0) {
LAB__text__004806f0:
        *(float *)(lVar14 + 0x3c) = fStack_78;
        fVar21 = 1.0;
        if (plVar16 != (long *)0x0) {
          fVar21 = fStack_78;
        }
        fVar22 = fStack_78;
        if (bVar6) goto LAB__text__00480704;
LAB__text__00480828:
        if (*plVar16 != 0) {
          uStack_74 = (undefined4)plVar16[2];
          fStack_78 = 0.0;
          FUN__text__0041a060(*(undefined4 *)(lVar14 + 0x30),plVar16,&uStack_74,&fStack_78);
          *(undefined4 *)(plVar16 + 2) = uStack_74;
          *(float *)(lVar14 + 0x40) = fStack_78;
          fVar21 = 1.0;
          if (plVar17 != (long *)0x0) {
            fVar21 = fVar22;
          }
          goto joined_r0x0048086c;
        }
        *(undefined4 *)(lVar14 + 0x40) = 0;
        fVar21 = 1.0;
        if (plVar17 != (long *)0x0) {
          fVar21 = fVar22;
        }
        if (bVar7) goto LAB__text__00480718;
LAB__text__00480870:
        if (*plVar17 == 0) {
          *(undefined4 *)(lVar14 + 0x44) = 0;
        }
        else {
          uStack_74 = (undefined4)plVar17[2];
          fStack_78 = 0.0;
          FUN__text__0041a060(*(undefined4 *)(lVar14 + 0x30),plVar17,&uStack_74,&fStack_78);
          *(undefined4 *)(plVar17 + 2) = uStack_74;
          *(float *)(lVar14 + 0x44) = fStack_78;
        }
      }
      else {
        if (*plVar15 != 0) {
          uStack_74 = (undefined4)plVar15[2];
          fStack_78 = 0.0;
          FUN__text__0041a060(*(undefined4 *)(lVar14 + 0x30),plVar15,&uStack_74,&fStack_78);
          *(undefined4 *)(plVar15 + 2) = uStack_74;
          goto LAB__text__004806f0;
        }
        fStack_78 = 0.0;
        *(undefined4 *)(lVar14 + 0x3c) = 0;
        fVar21 = 1.0;
        if (plVar16 != (long *)0x0) {
          fVar21 = 0.0;
        }
        fVar22 = fStack_78;
        if (!bVar6) goto LAB__text__00480828;
LAB__text__00480704:
        *(float *)(lVar14 + 0x40) = fVar21;
        fVar21 = 1.0;
        if (plVar17 != (long *)0x0) {
          fVar21 = fStack_78;
        }
joined_r0x0048086c:
        if (!bVar7) goto LAB__text__00480870;
LAB__text__00480718:
        *(float *)(lVar14 + 0x44) = fVar21;
      }
      if (bVar1 != 0) {
        fVar21 = *(float *)(lVar8 + 0x18);
        fVar22 = *(float *)(lVar14 + 0x34);
        if (fVar22 <= fVar21) {
          *(undefined4 *)(lVar14 + 0x78) = 0;
          fVar21 = 1.0;
        }
        else {
          fVar23 = 1.0;
          if (fVar22 < *(float *)(lVar8 + 0x1c)) {
            fVar23 = (fVar22 - fVar21) / (*(float *)(lVar8 + 0x1c) - fVar21);
          }
          fVar21 = *(float *)(param_1 + 400);
          *(float *)(lVar14 + 0x78) = fVar23;
          fVar23 = fVar23 * fVar21;
          fVar22 = fVar23 * 0.05;
          fVar21 = 0.0;
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if (-37.0 <= fVar22) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar22)) {
              bVar3 = fVar22 < 37.0;
              bVar4 = fVar22 == 37.0;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            uVar10 = (uint)(fVar23 * 1393317.6 + 1.0653532e+09);
            fVar21 = (float)(uVar10 & 0x7fffff | 0x3f800000);
            fVar21 = (fVar21 * (fVar21 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar10 & 0xff800000);
          }
        }
        *(float *)(lVar14 + 0x3c) = *(float *)(lVar14 + 0x3c) * fVar21;
      }
    }
    if ((plVar19 != (long *)0x0) && (*(float *)(lVar14 + 0x48) != 0.0)) {
      if (*plVar19 == 0) {
        fStack_78 = 0.0;
      }
      else {
        uStack_74 = (undefined4)plVar19[2];
        fStack_78 = 0.0;
        FUN__text__0041a060(plVar19,&uStack_74,&fStack_78);
        *(undefined4 *)(plVar19 + 2) = uStack_74;
      }
      *(float *)(lVar14 + 0x3c) = *(float *)(lVar14 + 0x3c) * fStack_78;
      *(float *)(lVar14 + 0x40) = *(float *)(lVar14 + 0x40) * fStack_78;
      *(float *)(lVar14 + 0x44) = *(float *)(lVar14 + 0x44) * fStack_78;
    }
    if ((plVar20 != (long *)0x0) && (*(float *)(lVar14 + 0x54) != 0.0)) {
      if (*plVar20 == 0) {
        fStack_78 = 0.0;
      }
      else {
        uStack_74 = (undefined4)plVar20[2];
        fStack_78 = 0.0;
        FUN__text__0041a060(plVar20,&uStack_74,&fStack_78);
        *(undefined4 *)(plVar20 + 2) = uStack_74;
      }
      *(float *)(lVar14 + 0x3c) = *(float *)(lVar14 + 0x3c) * fStack_78;
      *(float *)(lVar14 + 0x40) = *(float *)(lVar14 + 0x40) * fStack_78;
      *(float *)(lVar14 + 0x44) = *(float *)(lVar14 + 0x44) * fStack_78;
    }
    if ((plVar11 != (long *)0x0) && (*(float *)(lVar14 + 0x4c) != 0.0)) {
      if (*plVar11 == 0) {
        fStack_78 = 0.0;
      }
      else {
        uStack_74 = (undefined4)plVar11[2];
        fStack_78 = 0.0;
        FUN__text__0041a060(plVar11,&uStack_74,&fStack_78);
        *(undefined4 *)(plVar11 + 2) = uStack_74;
      }
      *(float *)(lVar14 + 0x3c) = *(float *)(lVar14 + 0x3c) * fStack_78;
    }
    if ((plVar18 != (long *)0x0) && (*(float *)(lVar14 + 0x50) != 0.0)) {
      if (*plVar18 == 0) {
        fStack_78 = 0.0;
      }
      else {
        uStack_74 = (undefined4)plVar18[2];
        fStack_78 = 0.0;
        FUN__text__0041a060(plVar18,&uStack_74,&fStack_78);
        *(undefined4 *)(plVar18 + 2) = uStack_74;
      }
      *(float *)(lVar14 + 0x3c) = *(float *)(lVar14 + 0x3c) * fStack_78;
    }
    lVar14 = lVar14 + 0x88;
    if (lVar14 == *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x88) {
      return;
    }
  } while( true );
}


