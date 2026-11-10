/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005360bc; name: FUN_.text__005360bc
 */


void FUN__text__005360bc(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  fVar3 = (float)(*(double *)(param_1 + 0xd8) - *(double *)(param_2 + 6));
  fVar15 = *param_2;
  fVar14 = param_2[1];
  fVar1 = (float)(*(double *)(param_1 + 0xd0) - *(double *)(param_2 + 4));
  fVar7 = param_2[10];
  fVar9 = param_2[0xb];
  fVar5 = (float)(*(double *)(param_1 + 0xe0) - *(double *)(param_2 + 8));
  fVar16 = fVar10 * fVar1 - fVar14 * fVar3;
  fVar12 = fVar11 * fVar3 - fVar10 * fVar5;
  fVar13 = fVar14 * fVar5 - fVar11 * fVar1;
  fVar16 = fVar16 + fVar16;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar13;
  auVar8 = NEON_fmov(0x3f800000,4);
  fVar6 = *(float *)(param_1 + 0xf0);
  fVar2 = *(float *)(param_1 + 0xe8);
  fVar4 = *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x108) =
       ((fVar5 + fVar15 * fVar16 + fVar10 * fVar12) - fVar14 * fVar13) / param_2[0xc];
  *(int *)(param_1 + 0x10c) = auVar8._12_4_;
  *(float *)(param_1 + 0x100) =
       ((fVar1 - fVar10 * fVar16) + fVar15 * fVar12 + fVar11 * fVar13) / fVar7;
  *(float *)(param_1 + 0x104) =
       ((fVar3 + fVar14 * fVar16 + fVar15 * fVar13) - fVar11 * fVar12) / fVar9;
  fVar5 = param_2[2];
  fVar7 = param_2[3];
  fVar12 = *param_2;
  fVar11 = param_2[1];
  fVar10 = fVar11 * fVar6 - fVar7 * fVar2;
  fVar13 = fVar5 * fVar2 - fVar11 * fVar4;
  fVar9 = fVar7 * fVar4 - fVar5 * fVar6;
  fVar10 = fVar10 + fVar10;
  fVar1 = param_2[10];
  fVar3 = param_2[0xb];
  fVar13 = fVar13 + fVar13;
  fVar9 = fVar9 + fVar9;
  *(ulong *)(param_1 + 0x118) =
       (ulong)(uint)(((fVar6 + fVar12 * fVar13 + fVar5 * fVar9) - fVar11 * fVar10) / param_2[0xc]);
  *(ulong *)(param_1 + 0x110) =
       CONCAT44(((fVar4 + fVar11 * fVar13 + fVar12 * fVar10) - fVar7 * fVar9) / fVar3,
                ((fVar2 - fVar5 * fVar13) + fVar12 * fVar9 + fVar7 * fVar10) / fVar1);
  return;
}


