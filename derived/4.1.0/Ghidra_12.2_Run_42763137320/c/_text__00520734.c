/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520734; name: FUN_.text__00520734
 */


void FUN__text__00520734(undefined1 param_1 [16],double param_2,double param_3,long param_4,
                        long param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  dVar4 = (double)FUN__text__0052049c();
  fVar2 = (float)dVar4;
  fVar16 = (float)param_2;
  fVar15 = (float)param_3;
  dVar4 = (double)FUN__text__005205e8(param_4);
  fVar18 = (float)dVar4;
  fVar17 = (float)param_2;
  fVar3 = *(float *)(param_4 + 0x100);
  fVar19 = (float)param_3;
  fVar9 = *(float *)(param_4 + 0xa8);
  lVar1 = *(long *)(param_4 + 0x160);
  fVar13 = *(float *)(lVar1 + 0x10);
  fVar12 = *(float *)(lVar1 + 0x14);
  fVar5 = *(float *)(lVar1 + 0x38) *
          (*(float *)(param_4 + 0xc0) * fVar3 + fVar9 * *(float *)(param_4 + 0x68));
  fVar7 = *(float *)(lVar1 + 0x3c) *
          (*(float *)(param_4 + 0xc4) * fVar3 + fVar9 * *(float *)(param_4 + 0x6c));
  dVar8 = (double)(ulong)(uint)fVar7;
  fVar3 = *(float *)(lVar1 + 0x40) *
          (*(float *)(param_4 + 200) * fVar3 + fVar9 * *(float *)(param_4 + 0x70));
  fVar10 = *(float *)(lVar1 + 0x18);
  fVar11 = *(float *)(lVar1 + 0x1c);
  fVar14 = fVar12 * fVar5 + fVar7 * fVar10 + fVar3 * fVar11;
  fVar21 = fVar13 * fVar13 - (fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  fVar9 = (fVar10 * fVar3 - fVar11 * fVar7) * fVar13 + fVar12 * fVar14;
  fVar20 = fVar9 + fVar9 + fVar5 * fVar21;
  fVar9 = (fVar11 * fVar5 - fVar3 * fVar12) * fVar13 + fVar10 * fVar14;
  fVar9 = fVar9 + fVar9 + fVar7 * fVar21;
  fVar5 = (fVar12 * fVar7 - fVar10 * fVar5) * fVar13 + fVar11 * fVar14;
  fVar5 = fVar5 + fVar5;
  dVar6 = (double)(ulong)(uint)fVar5;
  fVar5 = fVar5 + fVar3 * fVar21;
  dVar4 = (double)FUN__text__00520320(param_4);
  *(double *)(param_5 + 8) = dVar4 + *(double *)(param_5 + 8);
  *(double *)(param_5 + 0x10) = *(double *)(param_5 + 0x10) + dVar6;
  *(double *)(param_5 + 0x18) = *(double *)(param_5 + 0x18) + dVar8;
  *(float *)(param_5 + 0x20) = *(float *)(param_5 + 0x20) + fVar2;
  *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x24) + fVar16;
  *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) + fVar17;
  *(float *)(param_5 + 0x34) = *(float *)(param_5 + 0x34) + fVar19;
  *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) + fVar15;
  *(float *)(param_5 + 0x2c) = *(float *)(param_5 + 0x2c) + fVar18;
  *(float *)(param_5 + 0x38) = (fVar19 * fVar16 - fVar17 * fVar15) + *(float *)(param_5 + 0x38);
  *(float *)(param_5 + 0x3c) = (fVar18 * fVar15 - fVar19 * fVar2) + *(float *)(param_5 + 0x3c);
  *(float *)(param_5 + 0x40) = (fVar17 * fVar2 - fVar18 * fVar16) + *(float *)(param_5 + 0x40);
  *(float *)(param_5 + 0x44) =
       *(float *)(param_5 + 0x44) + (fVar20 * fVar2 + fVar16 * fVar9 + fVar15 * fVar5) * 0.5;
  *(float *)(param_5 + 0x48) =
       *(float *)(param_5 + 0x48) + (fVar20 * fVar18 + fVar17 * fVar9 + fVar19 * fVar5) * 0.5;
  return;
}


