/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051e2d0; name: FUN_.text__0051e2d0
 */


void FUN__text__0051e2d0(double *param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_70 [6];
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  lVar1 = *(long *)(param_2 + 8);
  local_70[0] = *(float *)(lVar1 + 0xa8);
  local_40 = *(float *)(lVar1 + 0xb4);
  if (local_70[0] <= local_40) {
    local_70[1] = *(float *)(lVar1 + 0xac);
    fStack_54 = *(float *)(lVar1 + 0xb8);
    if (local_70[1] <= fStack_54) {
      local_70[2] = *(float *)(lVar1 + 0xb0);
      local_50 = *(float *)(lVar1 + 0xbc);
      if (local_70[2] <= local_50) {
        fVar5 = *(float *)(param_2 + 0x18);
        fVar6 = *(float *)(param_2 + 0x1c);
        fVar8 = *(float *)(param_2 + 0x10);
        fVar7 = *(float *)(param_2 + 0x14);
        local_70[3] = local_70[0];
        local_58 = local_70[0];
        fStack_4c = local_70[0];
        dVar14 = 1.79769313486232e+308;
        fVar4 = *(float *)(param_2 + 0x40);
        local_70[4] = local_70[1];
        local_70[5] = local_50;
        dVar11 = *(double *)(param_2 + 0x30);
        fStack_3c = local_70[1];
        lVar1 = 0;
        local_30 = local_70[1];
        fStack_2c = local_50;
        dVar13 = -1.79769313486232e+308;
        dVar17 = -1.79769313486232e+308;
        fVar2 = *(float *)(param_2 + 0x38);
        fVar3 = *(float *)(param_2 + 0x3c);
        local_48 = fStack_54;
        fStack_44 = local_70[2];
        dVar9 = *(double *)(param_2 + 0x20);
        dVar10 = *(double *)(param_2 + 0x28);
        local_38 = local_70[2];
        fStack_34 = local_40;
        local_28 = local_40;
        fStack_24 = fStack_54;
        fVar12 = fVar8 * fVar8 - (fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
        local_20 = local_50;
        fStack_1c = local_40;
        dVar15 = 1.79769313486232e+308;
        dVar16 = 1.79769313486232e+308;
        local_18 = fStack_54;
        fStack_14 = local_70[2];
        dVar18 = -1.79769313486232e+308;
        *param_1 = 1.79769313486232e+308;
        param_1[1] = 1.79769313486232e+308;
        param_1[2] = 1.79769313486232e+308;
        param_1[3] = -1.79769313486232e+308;
        param_1[4] = -1.79769313486232e+308;
        param_1[5] = -1.79769313486232e+308;
        do {
          fVar24 = fVar3 * *(float *)((long)local_70 + lVar1 + 4);
          fVar25 = fVar2 * *(float *)((long)local_70 + lVar1);
          fVar21 = fVar4 * *(float *)((long)local_70 + lVar1 + 8);
          fVar26 = fVar7 * fVar25 + fVar24 * fVar5 + fVar21 * fVar6;
          fVar19 = (fVar5 * fVar21 - fVar6 * fVar24) * fVar8 + fVar7 * fVar26;
          dVar20 = dVar9 + (double)(fVar19 + fVar19 + fVar25 * fVar12);
          if (dVar20 < dVar14) {
            *param_1 = dVar20;
            dVar14 = dVar20;
          }
          fVar19 = (fVar6 * fVar25 - fVar21 * fVar7) * fVar8 + fVar5 * fVar26;
          dVar23 = dVar10 + (double)(fVar19 + fVar19 + fVar24 * fVar12);
          if (dVar23 < dVar15) {
            param_1[1] = dVar23;
            dVar15 = dVar23;
          }
          fVar19 = (fVar7 * fVar24 - fVar5 * fVar25) * fVar8 + fVar6 * fVar26;
          dVar22 = dVar11 + (double)(fVar19 + fVar19 + fVar21 * fVar12);
          if (dVar22 < dVar16) {
            param_1[2] = dVar22;
            dVar16 = dVar22;
          }
          if (dVar13 < dVar20) {
            param_1[3] = dVar20;
            dVar13 = dVar20;
          }
          if (dVar17 < dVar23) {
            param_1[4] = dVar23;
            dVar17 = dVar23;
          }
          if (dVar18 < dVar22) {
            param_1[5] = dVar22;
            dVar18 = dVar22;
          }
          lVar1 = lVar1 + 0xc;
        } while (lVar1 != 0x60);
        return;
      }
    }
  }
  *param_1 = 1.79769313486232e+308;
  param_1[1] = 1.79769313486232e+308;
  param_1[2] = 1.79769313486232e+308;
  param_1[3] = -1.79769313486232e+308;
  param_1[4] = -1.79769313486232e+308;
  param_1[5] = -1.79769313486232e+308;
  return;
}


