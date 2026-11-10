/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004523b0; name: FUN_.text__004523b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__004523b0(float *param_1,float *param_2,void *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  bVar1 = *(byte *)((long)param_1 + 9);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      fVar8 = param_1[1];
      bVar6 = bVar1 & 0xfe;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (*param_1 <= 0.1) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar8)) {
          bVar3 = fVar8 < 0.1;
          bVar4 = fVar8 == 0.1;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        uVar7 = 4;
        bVar2 = bVar1 & 0xf6;
        if ((bVar1 & 4) != 0) {
          bVar2 = bVar6;
        }
        bVar6 = bVar2;
      }
      else {
        uVar7 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      *(byte *)((long)param_1 + 9) = bVar6 & 0xfb | (byte)uVar7;
      return uVar7 >> 2;
    }
    fVar8 = param_1[1];
    *param_1 = fVar8;
    if (fVar8 <= 0.1) {
      bVar6 = bVar1 & 0xf0;
      if ((bVar1 & 4) != 0) {
        bVar6 = bVar1;
      }
      *(byte *)((long)param_1 + 9) = bVar6 & 0xf8 | 4;
      memset(param_3,0,(ulong)(uint)(param_4 << 4));
      return *(byte *)((long)param_1 + 9) >> 2 & 1;
    }
    *(byte *)((long)param_1 + 9) = bVar1 & 0xf8;
    *(undefined1 *)(param_1 + 2) = 0;
    fVar8 = 100.0 - fVar8;
    uVar7 = (uint)(fVar8 * -1042939.94 + 1.1696472e+09);
    fVar9 = (float)(uVar7 & 0x7fffff | 0x3f800000);
    fVar9 = (float)(uVar7 & 0xff800000) * 16.797443 *
            (fVar9 * (fVar9 * 0.32518977 + 0.020805772) + 0.65304345);
    if (fVar8 < 30.0) {
      fVar9 = fVar8 * -433.33334 + 20000.0;
    }
    fVar8 = (float)NEON_fminnm((float)*_DAT_008a4b68 * 0.45,fVar9);
    fVar8 = tanf((fVar8 * 3.1415927) / (float)*_DAT_008a4b68);
    fVar10 = fVar8 * fVar8 + 1.0;
    fVar9 = 1.0 / (fVar10 + fVar8 * 1.4142135);
    fVar11 = fVar9 * -2.0;
    *param_2 = fVar9;
    param_2[1] = fVar11;
    param_2[2] = fVar9;
    param_2[3] = fVar11 - fVar11 * fVar8 * fVar8;
    param_2[4] = fVar9 * (fVar10 - fVar8 * 1.4142135);
  }
  return *(byte *)((long)param_1 + 9) >> 2 & 1;
}


