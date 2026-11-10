/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00452d40; name: FUN_.text__00452d40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00452d40(float param_1,ushort *param_2,uint param_3,long param_4,long param_5,
                        long param_6)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = _DAT_008a4b68;
  if (param_3 != 0) {
    uVar5 = (ulong)param_3;
    pfVar7 = (float *)(param_5 + 8);
    pfVar6 = (float *)(param_6 + 8);
    do {
      uVar1 = *param_2;
      lVar4 = *(long *)(param_4 + (ulong)uVar1 * 8);
      fVar9 = *(float *)(lVar4 + 4);
      fVar9 = fVar9 + param_1 * (*(float *)(lVar4 + 8) - fVar9);
      uVar3 = (uint)(fVar9 * -1042939.94 + 1.1696472e+09);
      fVar8 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar10 = (float)*puVar2;
      fVar8 = (float)(uVar3 & 0xff800000) * 16.797443 *
              (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345);
      if (fVar9 < 30.0) {
        fVar8 = fVar9 * -433.33334 + 20000.0;
      }
      fVar8 = (float)NEON_fminnm(fVar10 * 0.45,fVar8);
      fVar8 = tanf((fVar8 * 3.1415927) / fVar10);
      fVar8 = 1.0 / fVar8;
      fVar9 = fVar8 * fVar8;
      fVar10 = 1.0 / (fVar8 * 1.4142135 + 1.0 + fVar9);
      pfVar7[-2] = fVar10;
      pfVar7[-1] = fVar10 + fVar10;
      *pfVar7 = fVar10;
      pfVar7[1] = fVar10 * (2.0 - (fVar9 + fVar9));
      pfVar7[2] = fVar10 * ((1.0 - fVar8 * 1.4142135) + fVar9);
      lVar4 = *(long *)(param_4 + (ulong)uVar1 * 8);
      fVar8 = *(float *)(lVar4 + 0x10);
      fVar9 = (100.0 - fVar8) + param_1 * (fVar8 - *(float *)(lVar4 + 0x14));
      uVar3 = (uint)(fVar9 * -1042939.94 + 1.1696472e+09);
      fVar8 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar8 = (float)(uVar3 & 0xff800000) * 16.797443 *
              (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345);
      if (fVar9 < 30.0) {
        fVar8 = fVar9 * -433.33334 + 20000.0;
      }
      fVar9 = (float)*puVar2;
      fVar8 = (float)NEON_fminnm(fVar9 * 0.45,fVar8);
      fVar8 = tanf((fVar8 * 3.1415927) / fVar9);
      uVar5 = uVar5 - 1;
      pfVar7 = pfVar7 + 5;
      fVar9 = fVar8 * fVar8 + 1.0;
      fVar10 = 1.0 / (fVar9 + fVar8 * 1.4142135);
      fVar11 = fVar10 * -2.0;
      pfVar6[-2] = fVar10;
      pfVar6[-1] = fVar11;
      pfVar6[2] = fVar10 * (fVar9 - fVar8 * 1.4142135);
      *pfVar6 = fVar10;
      pfVar6[1] = fVar11 - fVar11 * fVar8 * fVar8;
      param_2 = param_2 + 1;
      pfVar6 = pfVar6 + 5;
    } while (uVar5 != 0);
  }
  return;
}


