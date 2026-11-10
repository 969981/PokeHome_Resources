/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00417660; name: FUN_.text__00417660
 */


void FUN__text__00417660(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = (ulong)DAT_00aea238;
  if (DAT_00aea238 != 0) {
    plVar8 = DAT_00aea230;
    plVar10 = DAT_00aea230;
    do {
      if (*(int *)(*plVar10 + 0xf8) == 1) {
        FUN__text__00450cf0();
        uVar7 = (ulong)DAT_00aea238;
        plVar8 = DAT_00aea230;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8 + uVar7);
  }
  FUN__text__004da2a0();
  FUN__text__004179f0();
  if (DAT_00aea228 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        lVar9 = *(long *)(DAT_00aea220 + uVar7 * 8);
        if ((*(byte *)(lVar9 + 0x1ac) & 3) != 1) {
          uVar5 = 0xf;
          if ((*(byte *)(lVar9 + 0x1ac) & 1) != 0) {
            uVar5 = 0;
          }
          FUN__text__004d46f0(lVar9,uVar5);
        }
        plVar10 = *(long **)(lVar9 + 8);
        if (plVar10 != (long *)0x0) break;
        *(undefined4 *)(lVar9 + 0x10) = 0x3f800000;
LAB__text__00417728:
        fVar12 = (float)(*(uint *)(lVar9 + 0x10) & 0x7fffff | 0x3f800000);
        fVar13 = fVar12 + 1.0;
        *(float *)(lVar9 + 0x14) =
             ((float)(*(uint *)(lVar9 + 0x10) >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar12 * 1.1581186 * fVar12 * fVar12 + -1.1581186) / (fVar13 * fVar13 * fVar13)) *
             20.0;
        uVar7 = uVar7 + 1;
        if (DAT_00aea228 <= uVar7) goto LAB__text__004178f0;
      }
      if ((*(ushort *)(plVar10 + 0x41) & 1) == 0) {
        (**(code **)(*plVar10 + 0x70))(plVar10,0);
      }
      else {
        (**(code **)(*plVar10 + 0x78))(plVar10);
        if ((*(ushort *)(plVar10 + 0x41) >> 4 & 1) != 0) {
          (**(code **)(*plVar10 + 0x80))(plVar10);
        }
      }
      lVar11 = *(long *)(lVar9 + 8);
      fVar13 = *(float *)(lVar11 + 0x88) * 0.05;
      fVar12 = 0.0;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (-37.0 <= fVar13) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar13)) {
          bVar1 = fVar13 < 37.0;
          bVar2 = fVar13 == 37.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        uVar6 = (uint)(*(float *)(lVar11 + 0x88) * 1393317.6 + 1.0653532e+09);
        fVar12 = (float)(uVar6 & 0x7fffff | 0x3f800000);
        fVar12 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar6 & 0xff800000);
      }
      *(float *)(lVar9 + 0x10) = *(float *)(lVar11 + 0x100) * fVar12;
      if (((*(byte *)(lVar11 + 0x170) >> 3 & 1) != 0) &&
         (iVar4 = FUN__text__00479490(lVar11), iVar4 != 0)) {
        thunk_FUN__text__00480320(lVar11,lVar11 + 0x1a8);
      }
      if ((*(long *)(lVar9 + 8) == 0) || (*(long *)(lVar9 + 0x30) == 0)) goto LAB__text__00417728;
      FUN__text__00459200(lVar9,0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < DAT_00aea228);
  }
LAB__text__004178f0:
  FUN__text__004179f0();
  uVar7 = (ulong)DAT_00aea238;
  if (DAT_00aea238 != 0) {
    plVar8 = DAT_00aea230;
    plVar10 = DAT_00aea230;
    do {
      if (*(int *)(*plVar10 + 0xf8) == 1) {
        FUN__text__00459200(*plVar10,1);
        uVar7 = (ulong)DAT_00aea238;
        plVar8 = DAT_00aea230;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8 + uVar7);
  }
  if (-1 < (int)(DAT_00aea228 - 1)) {
    lVar9 = (ulong)(DAT_00aea228 - 1) << 3;
    lVar11 = DAT_00aea220;
    uVar6 = DAT_00aea228;
    do {
      if ((*(byte *)(*(long *)(lVar11 + lVar9) + 0x1bc) >> 2 & 1) != 0) {
        FUN__text__00417e70();
        lVar11 = DAT_00aea220;
      }
      uVar6 = uVar6 - 1;
      lVar9 = lVar9 + -8;
    } while (0 < (int)uVar6);
  }
  FUN__text__004182a0();
  uVar7 = (ulong)DAT_00aea238;
  if (DAT_00aea238 != 0) {
    plVar8 = DAT_00aea230;
    plVar10 = DAT_00aea230;
    do {
      if (*(int *)(*plVar10 + 0xf8) == 1) {
        FUN__text__00459bc0();
        uVar7 = (ulong)DAT_00aea238;
        plVar8 = DAT_00aea230;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8 + uVar7);
  }
  return;
}


