/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00516598; name: FUN_.text__00516598
 */


void FUN__text__00516598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *param_2;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar8 = 0.0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *param_3;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  fVar11 = *(float *)((long)param_1 + 0xc);
  fVar12 = *(float *)(param_1 + 2);
  fVar13 = *(float *)((long)param_1 + 0x14);
  fVar14 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
  *(float *)(param_1 + 3) = fVar14;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)param_1 + 0x1c) = *param_4;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  fVar6 = *(float *)((long)param_1 + 0x1c);
  fVar7 = *(float *)(param_1 + 4);
  fVar9 = *(float *)((long)param_1 + 0x24);
  fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9);
  *(float *)(param_1 + 5) = fVar10;
  if (fVar14 != 0.0) {
    fVar14 = 1.0 / fVar14;
    fVar4 = fVar11 * fVar14;
    fVar5 = fVar12 * fVar14;
    fVar8 = fVar13 * fVar14;
  }
  fVar14 = 0.0;
  *(float *)((long)param_1 + 0xc) = fVar4;
  *(float *)(param_1 + 2) = fVar5;
  fVar11 = 0.0;
  *(float *)((long)param_1 + 0x14) = fVar8;
  if (fVar10 != 0.0) {
    fVar10 = 1.0 / fVar10;
    fVar3 = fVar6 * fVar10;
    fVar14 = fVar7 * fVar10;
    fVar11 = fVar9 * fVar10;
  }
  fVar6 = fVar11 * fVar5 - fVar14 * fVar8;
  *(float *)((long)param_1 + 0x1c) = fVar3;
  *(float *)(param_1 + 4) = fVar14;
  fVar7 = fVar3 * fVar8 - fVar11 * fVar4;
  *(float *)((long)param_1 + 0x24) = fVar11;
  fVar4 = fVar14 * fVar4 - fVar3 * fVar5;
  fVar3 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar3 == 0.0) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    return;
  }
  fVar3 = 1.0 / fVar3;
  *(float *)((long)param_1 + 0x2c) = fVar6 * fVar3;
  *(float *)(param_1 + 6) = fVar7 * fVar3;
  *(float *)((long)param_1 + 0x34) = fVar4 * fVar3;
  return;
}


