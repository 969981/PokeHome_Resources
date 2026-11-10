/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00452180; name: FUN_.text__00452180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00452180(float *param_1,float *param_2,void *param_3,int param_4)

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
  
  bVar1 = *(byte *)((long)param_1 + 9);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      fVar9 = param_1[1];
      bVar6 = bVar1 & 0xfe;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (*param_1 <= 0.1) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar9)) {
          bVar3 = fVar9 < 0.1;
          bVar4 = fVar9 == 0.1;
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
    fVar9 = param_1[1];
    *param_1 = fVar9;
    if (fVar9 <= 0.1) {
      bVar6 = bVar1 & 0xf0;
      if ((bVar1 & 4) != 0) {
        bVar6 = bVar1;
      }
      *(byte *)((long)param_1 + 9) = bVar6 & 0xf8 | 4;
      memset(param_3,0,(ulong)(uint)(param_4 << 4));
      return *(byte *)((long)param_1 + 9) >> 2 & 1;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    *(byte *)((long)param_1 + 9) = bVar1 & 0xf8;
    uVar7 = (uint)(fVar9 * -1042939.94 + 1.1696472e+09);
    fVar8 = (float)(uVar7 & 0x7fffff | 0x3f800000);
    fVar8 = (float)(uVar7 & 0xff800000) * 16.797443 *
            (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345);
    if (fVar9 < 30.0) {
      fVar8 = fVar9 * -433.33334 + 20000.0;
    }
    fVar9 = (float)NEON_fminnm((float)_DAT_008ab030 * 0.45,fVar8);
    fVar9 = tanf((fVar9 * 3.1415927) / (float)_DAT_008ab030);
    fVar9 = 1.0 / fVar9;
    fVar8 = fVar9 * fVar9;
    fVar10 = 1.0 / (fVar9 * 1.4142135 + 1.0 + fVar8);
    *param_2 = fVar10;
    param_2[1] = fVar10 + fVar10;
    param_2[2] = fVar10;
    param_2[3] = fVar10 * (2.0 - (fVar8 + fVar8));
    param_2[4] = fVar10 * ((1.0 - fVar9 * 1.4142135) + fVar8);
  }
  return *(byte *)((long)param_1 + 9) >> 2 & 1;
}


