/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00487bd0; name: FUN_.text__00487bd0
 */


long FUN__text__00487bd0(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  uVar3 = (long)param_1 + 1;
  lVar13 = (&DAT_00aea890)[uVar3];
  if ((-1 < param_1) && (lVar13 == 0)) {
    uVar1 = param_1 + 2;
    lVar13 = FUN__text__00400f80(0,(ulong)(uVar1 * uVar1 * 0xc) << 2);
    if (lVar13 != 0) {
      uVar14 = 0xc;
      FUN__text__00481ed0(0,0,0x3f800000,uVar3 & 0xffffffff,0xc,lVar13);
      FUN__text__00481ed0(0xbf00e7e4,0,0x3f5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 4);
      FUN__text__00481ed0(0xbf5d2d53,0,0x3f00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 8);
      FUN__text__00481ed0(0xbf800000,0,0x248d3132,uVar3 & 0xffffffff,0xc,lVar13 + 0xc);
      FUN__text__00481ed0(0xbf5d2d53,0,0xbf00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 0x10);
      FUN__text__00481ed0(0xbf00e7e4,0,0xbf5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 0x14);
      FUN__text__00481ed0(0,0,0xbf800000,uVar3 & 0xffffffff,0xc,lVar13 + 0x18);
      FUN__text__00481ed0(0x3f00e7e4,0,0xbf5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 0x1c);
      FUN__text__00481ed0(0x3f5d2d53,0,0xbf00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 0x20);
      FUN__text__00481ed0(0x3f800000,0,0xa553c9ca,uVar3 & 0xffffffff,0xc,lVar13 + 0x24);
      FUN__text__00481ed0(0x3f5d2d53,0,0x3f00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 0x28);
      FUN__text__00481ed0(0x3f00e7e4,0,0x3f5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 0x2c);
      uVar8 = 0;
      iVar9 = 0xc;
      do {
        iVar7 = (int)uVar8;
        iVar4 = iVar7 * iVar7;
        uVar11 = iVar4 * 0xc;
        fVar16 = *(float *)(uVar8 * 4 + 0x73cf60) * *(float *)(uVar8 * 4 + 0x73b71c);
        fVar16 = fVar16 * fVar16;
        *(float *)(lVar13 + (ulong)uVar11 * 4) = *(float *)(lVar13 + (ulong)uVar11 * 4) * fVar16;
        lVar5 = (ulong)(iVar4 * 0xc | 1) * 4;
        lVar6 = (ulong)(iVar4 * 0xc | 3) * 4;
        *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
        lVar5 = (ulong)(iVar4 * 0xc | 2) * 4;
        *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
        lVar5 = (ulong)(uVar11 + 4) * 4;
        fVar15 = *(float *)(lVar13 + lVar5);
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        lVar6 = (ulong)(uVar11 + 5) * 4;
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 6) * 4;
        fVar15 = *(float *)(lVar13 + lVar5);
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        lVar6 = (ulong)(uVar11 + 7) * 4;
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 8) * 4;
        fVar15 = *(float *)(lVar13 + lVar5);
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        lVar6 = (ulong)(uVar11 + 9) * 4;
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 10) * 4;
        fVar15 = *(float *)(lVar13 + lVar5);
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        uVar12 = 1 - uVar8;
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 0xb) * 4;
        *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
        if ((long)uVar12 < (long)uVar8) {
          uVar12 = uVar12 & 0xffffffff;
          uVar11 = uVar14;
          do {
            uVar12 = (ulong)((int)uVar12 + 1);
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 1) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 2) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 3) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 4) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 5) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 6) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 7) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 8) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 9) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 10) * 4) = 0;
            uVar2 = uVar11 + 0xb;
            *(undefined4 *)(lVar13 + (ulong)uVar11 * 4) = 0;
            uVar11 = uVar11 + 0xc;
            *(undefined4 *)(lVar13 + (ulong)uVar2 * 4) = 0;
            uVar10 = uVar12;
          } while (uVar8 != uVar12);
        }
        else {
          uVar10 = uVar12 & 0xffffffff;
        }
        if (uVar10 == uVar8) {
          iVar4 = (int)uVar12 + iVar7 + iVar7 * iVar7;
          uVar11 = iVar4 * 0xc;
          *(float *)(lVar13 + (ulong)uVar11 * 4) = *(float *)(lVar13 + (ulong)uVar11 * 4) * fVar16;
          lVar5 = (ulong)(iVar4 * 0xc | 1) * 4;
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(iVar4 * 0xc | 2) * 4;
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 4) * 4;
          lVar6 = (ulong)(iVar4 * 0xc | 3) * 4;
          fVar15 = *(float *)(lVar13 + lVar5);
          *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
          lVar6 = (ulong)(uVar11 + 6) * 4;
          *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
          lVar5 = (ulong)(uVar11 + 5) * 4;
          fVar15 = *(float *)(lVar13 + lVar6);
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 7) * 4;
          *(float *)(lVar13 + lVar6) = fVar15 * fVar16;
          lVar6 = (ulong)(uVar11 + 8) * 4;
          fVar15 = *(float *)(lVar13 + lVar6);
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 9) * 4;
          *(float *)(lVar13 + lVar6) = fVar15 * fVar16;
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 10) * 4;
          lVar6 = (ulong)(uVar11 + 0xb) * 4;
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        }
        uVar8 = uVar8 + 1;
        uVar14 = uVar14 + iVar9;
        iVar9 = iVar9 + 0x18;
      } while (uVar8 != uVar1);
      (&DAT_00aea890)[uVar3] = lVar13;
    }
  }
  return lVar13;
}


