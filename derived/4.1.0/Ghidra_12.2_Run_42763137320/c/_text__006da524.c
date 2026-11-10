/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006da524; name: FUN_.text__006da524
 */


void FUN__text__006da524(float param_1,undefined8 param_2,float *param_3,long param_4,float *param_5
                        ,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float __x;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  *param_3 = *param_5;
  param_3[1] = param_5[1];
  *(ulong *)(param_3 + 2) = (ulong)(uint)param_5[2];
  *(undefined8 *)param_3 = *(undefined8 *)param_3;
  lVar6 = *(long *)(param_4 + 0x18);
  if (lVar6 != 0) {
    fVar11 = *param_6;
    fVar12 = param_6[1];
    fVar13 = param_6[2];
    __x = *(float *)(lVar6 + 0x6dc);
    fVar8 = *(float *)(lVar6 + 0x6c0);
    fVar9 = *(float *)(lVar6 + 0x6c4);
    fVar10 = *(float *)(lVar6 + 0x6c8);
    fVar14 = (fVar11 + fVar12) * 0.5;
    fVar15 = (fVar12 + fVar13) * 0.5;
    fVar16 = (fVar11 + fVar13) * 0.5;
    lVar7 = *(long *)(param_4 + 0x10);
    bVar5 = *(char *)(lVar7 + 0x8ad) == '\0';
    fVar1 = -*param_5;
    if (fVar12 < 0.5 || bVar5) {
      fVar1 = *param_5;
    }
    fVar2 = -(fVar14 * *(float *)(lVar6 + 0x6e0)) - *(float *)(lVar6 + 0x6d0);
    if (fVar12 < 0.5 || bVar5) {
      fVar2 = *(float *)(lVar6 + 0x6d0) + *(float *)(lVar6 + 0x6e0) * fVar14;
    }
    bVar5 = *(char *)(lVar7 + 0x8ae) == '\0';
    fVar14 = -param_5[1];
    if (fVar13 < 0.5 || bVar5) {
      fVar14 = param_5[1];
    }
    fVar3 = -(fVar15 * *(float *)(lVar6 + 0x6e4)) - *(float *)(lVar6 + 0x6d4);
    if (fVar13 < 0.5 || bVar5) {
      fVar3 = *(float *)(lVar6 + 0x6d4) + *(float *)(lVar6 + 0x6e4) * fVar15;
    }
    fVar15 = -(fVar16 * *(float *)(lVar6 + 0x6e8)) - *(float *)(lVar6 + 0x6d8);
    fVar4 = -param_5[2];
    if (fVar11 < 0.5 || *(char *)(lVar7 + 0x8af) == '\0') {
      fVar15 = *(float *)(lVar6 + 0x6d8) + *(float *)(lVar6 + 0x6e8) * fVar16;
      fVar4 = param_5[2];
    }
    fVar16 = powf(__x,param_1);
    if (__x != 1.0) {
      param_1 = (1.0 - fVar16) / (1.0 - __x);
    }
    *param_3 = fVar1 + fVar8 * fVar11 + param_1 * fVar2;
    param_3[1] = fVar14 + fVar9 * fVar12 + param_1 * fVar3;
    *(ulong *)(param_3 + 2) = (ulong)(uint)(fVar4 + fVar10 * fVar13 + param_1 * fVar15);
    *(undefined8 *)param_3 = *(undefined8 *)param_3;
  }
  return;
}


