/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051f870; name: FUN_.text__0051f870
 */


float FUN__text__0051f870(float *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float afStack_10 [4];
  
  fVar6 = *param_1;
  fVar7 = param_1[4];
  fVar8 = fVar7 + fVar6 + param_1[8];
  if (0.0 < fVar8) {
    return SQRT(fVar8 + 1.0) * 0.5;
  }
  uVar2 = 2;
  if (param_1[8] <= param_1[(ulong)(fVar6 < fVar7) * 4]) {
    uVar2 = (uint)(fVar6 < fVar7);
  }
  uVar4 = (ulong)uVar2;
  uVar1 = 0;
  if (uVar2 != 2) {
    uVar1 = uVar2 + 1;
  }
  uVar5 = (ulong)uVar1;
  uVar1 = uVar2 + 2;
  if (2 < uVar2 + 2) {
    uVar1 = uVar2 - 1;
  }
  uVar3 = (ulong)uVar1;
  fVar7 = SQRT((param_1[(ulong)uVar2 * 3 + (ulong)uVar2] + 1.0) -
               (param_1[uVar5 * 4] + param_1[uVar3 * 4]));
  fVar6 = 0.0;
  if (fVar7 != 0.0) {
    fVar6 = 0.5 / fVar7;
  }
  fVar8 = param_1[uVar5 * 3 + uVar4];
  afStack_10[uVar4] = fVar7 * 0.5;
  fVar7 = param_1[uVar4 * 3 + uVar3];
  afStack_10[uVar5] = (fVar8 + param_1[uVar4 * 3 + uVar5]) * fVar6;
  fVar8 = param_1[uVar3 * 3 + uVar5];
  afStack_10[uVar3] = (param_1[uVar3 * 3 + uVar4] + fVar7) * fVar6;
  return (param_1[uVar5 * 3 + uVar3] - fVar8) * fVar6;
}


