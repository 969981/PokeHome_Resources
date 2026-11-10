/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00452a00; name: FUN_.text__00452a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00452a00(float param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = 0;
  puVar3 = _DAT_008a4b68;
  if ((int)param_2[1] != 0) {
    uVar4 = 0;
    pfVar5 = (float *)(param_4 + 8);
    do {
      lVar1 = *(long *)(param_3 + (ulong)*(ushort *)(*param_2 + uVar4 * 2) * 8);
      fVar6 = *(float *)(lVar1 + 4);
      fVar6 = fVar6 + param_1 * (*(float *)(lVar1 + 8) - fVar6);
      uVar2 = (uint)(fVar6 * -1042939.94 + 1.1696472e+09);
      fVar7 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar7 = (float)(uVar2 & 0xff800000) * 16.797443 *
              (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345);
      if (fVar6 < 30.0) {
        fVar7 = fVar6 * -433.33334 + 20000.0;
      }
      fVar7 = (float)NEON_fminnm((float)*puVar3 * 0.45,fVar7);
      fVar7 = tanf((fVar7 * 3.1415927) / (float)*puVar3);
      fVar7 = 1.0 / fVar7;
      puVar3 = (uint *)&DAT_008ab030;
      uVar4 = uVar4 + 1;
      fVar6 = fVar7 * fVar7;
      fVar8 = 1.0 / (fVar7 * 1.4142135 + 1.0 + fVar6);
      pfVar5[-2] = fVar8;
      pfVar5[-1] = fVar8 + fVar8;
      *pfVar5 = fVar8;
      pfVar5[1] = fVar8 * (2.0 - (fVar6 + fVar6));
      pfVar5[2] = fVar8 * ((1.0 - fVar7 * 1.4142135) + fVar6);
      pfVar5 = pfVar5 + 5;
      uVar2 = *(uint *)(param_2 + 1);
    } while (uVar4 < uVar2);
  }
  if (uVar2 < *(uint *)((long)param_2 + 0xc)) {
    uVar4 = (ulong)uVar2;
    pfVar5 = (float *)(param_4 + (ulong)uVar2 * 0x14 + 8);
    do {
      lVar1 = *(long *)(param_3 + (ulong)*(ushort *)(*param_2 + uVar4 * 2) * 8);
      fVar7 = *(float *)(lVar1 + 0x10);
      fVar6 = (100.0 - fVar7) + param_1 * (fVar7 - *(float *)(lVar1 + 0x14));
      uVar2 = (uint)(fVar6 * -1042939.94 + 1.1696472e+09);
      fVar7 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar7 = (float)(uVar2 & 0xff800000) * 16.797443 *
              (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345);
      if (fVar6 < 30.0) {
        fVar7 = fVar6 * -433.33334 + 20000.0;
      }
      fVar7 = (float)NEON_fminnm((float)*puVar3 * 0.45,fVar7);
      fVar7 = tanf((fVar7 * 3.1415927) / (float)*puVar3);
      puVar3 = _DAT_008a4b68;
      uVar4 = uVar4 + 1;
      fVar6 = fVar7 * fVar7 + 1.0;
      fVar8 = 1.0 / (fVar6 + fVar7 * 1.4142135);
      fVar9 = fVar8 * -2.0;
      pfVar5[-2] = fVar8;
      pfVar5[-1] = fVar9;
      pfVar5[2] = fVar8 * (fVar6 - fVar7 * 1.4142135);
      *pfVar5 = fVar8;
      pfVar5[1] = fVar9 - fVar9 * fVar7 * fVar7;
      pfVar5 = pfVar5 + 5;
    } while (uVar4 < *(uint *)((long)param_2 + 0xc));
  }
  return;
}


