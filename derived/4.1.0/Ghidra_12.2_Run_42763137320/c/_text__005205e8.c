/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005205e8; name: FUN_.text__005205e8
 */


undefined1  [16] FUN__text__005205e8(long param_1)

{
  long lVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
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
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  
  fVar2 = *(float *)(param_1 + 0x100) * 0.5;
  lVar1 = *(long *)(param_1 + 0x160);
  dVar18 = *(double *)(lVar1 + 0x30);
  fVar7 = *(float *)(lVar1 + 0x38) *
          (*(float *)(param_1 + 0xb4) + fVar2 * *(float *)(param_1 + 0xc0));
  fVar5 = *(float *)(lVar1 + 0x3c) *
          (*(float *)(param_1 + 0xb8) + fVar2 * *(float *)(param_1 + 0xc4));
  fVar2 = *(float *)(lVar1 + 0x40) *
          (*(float *)(param_1 + 0xbc) + fVar2 * *(float *)(param_1 + 200));
  fVar9 = *(float *)(lVar1 + 0x18);
  fVar11 = *(float *)(lVar1 + 0x1c);
  fVar14 = *(float *)(lVar1 + 0x10);
  fVar12 = *(float *)(lVar1 + 0x14);
  dVar16 = *(double *)(lVar1 + 0x20);
  dVar17 = *(double *)(lVar1 + 0x28);
  fVar15 = fVar12 * fVar7 + fVar5 * fVar9 + fVar2 * fVar11;
  fVar19 = fVar14 * fVar14 - (fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11);
  fVar10 = (fVar11 * fVar7 - fVar2 * fVar12) * fVar14 + fVar9 * fVar15;
  fVar13 = (fVar9 * fVar2 - fVar11 * fVar5) * fVar14 + fVar12 * fVar15;
  fVar9 = (fVar12 * fVar5 - fVar9 * fVar7) * fVar14 + fVar11 * fVar15;
  fVar5 = fVar10 + fVar10 + fVar5 * fVar19;
  dVar6 = (double)(ulong)(uint)fVar5;
  fVar7 = fVar13 + fVar13 + fVar7 * fVar19;
  dVar8 = (double)(ulong)(uint)fVar7;
  dVar3 = (double)FUN__text__00520320();
  dVar3 = (dVar16 - dVar3) + (double)fVar7;
  dVar6 = (dVar17 - dVar6) + (double)fVar5;
  dVar8 = (dVar18 - dVar8) + (double)(fVar9 + fVar9 + fVar2 * fVar19);
  dVar6 = SQRT(dVar3 * dVar3 + dVar6 * dVar6 + dVar8 * dVar8);
  if (dVar6 == 0.0) {
    return ZEXT816(0);
  }
  auVar4._0_8_ = dVar3 * (1.0 / dVar6);
  auVar4._8_8_ = 0;
  return auVar4;
}


