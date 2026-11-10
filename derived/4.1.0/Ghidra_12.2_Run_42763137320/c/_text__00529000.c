/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00529000; name: FUN_.text__00529000
 */


float FUN__text__00529000(float param_1,float param_2,float param_3,float param_4,float param_5,
                         float param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  if (0.0 < in_stack_00000038) {
    fVar6 = (float)(in_stack_00000050 - in_stack_00000020);
    fVar4 = (float)(in_stack_00000040 - in_stack_00000010);
    fVar5 = (float)(in_stack_00000048 - in_stack_00000018);
    fVar9 = param_1 * fVar4 + fVar5 * param_2 + fVar6 * param_3;
    fStack0000000000000028 = fStack0000000000000028 - ABS(fVar9);
    uVar8 = NEON_fminnm(fStack0000000000000028,0x7f7fffff);
    fStack0000000000000028 = fStack0000000000000028 / in_stack_00000038;
    fVar3 = 0.0;
    if ((0.0 <= fStack0000000000000028) && (fVar3 = 1.0, fStack0000000000000028 <= 1.0)) {
      fVar3 = fStack0000000000000028;
    }
    fVar3 = 1.0 - fVar3;
    fVar1 = -fVar3;
    if (fVar9 <= 0.0) {
      fVar1 = fVar3;
    }
    fVar10 = param_4 * fVar4 + fVar5 * param_5 + fVar6 * param_6;
    fStack000000000000002c = fStack000000000000002c - ABS(fVar10);
    uVar8 = NEON_fminnm(fStack000000000000002c,uVar8);
    fStack000000000000002c = fStack000000000000002c / in_stack_00000038;
    fVar9 = 0.0;
    if ((0.0 <= fStack000000000000002c) && (fVar9 = 1.0, fStack000000000000002c <= 1.0)) {
      fVar9 = fStack000000000000002c;
    }
    fVar9 = 1.0 - fVar9;
    fVar7 = -fVar9;
    if (fVar10 <= 0.0) {
      fVar7 = fVar9;
    }
    fVar6 = fStack0000000000000000 * fVar4 + fVar5 * fStack0000000000000004 +
            fVar6 * in_stack_00000008;
    in_stack_00000030 = in_stack_00000030 - ABS(fVar6);
    fVar5 = (float)NEON_fminnm(in_stack_00000030,uVar8);
    in_stack_00000030 = in_stack_00000030 / in_stack_00000038;
    fVar4 = 0.0;
    if ((0.0 <= in_stack_00000030) && (fVar4 = 1.0, in_stack_00000030 <= 1.0)) {
      fVar4 = in_stack_00000030;
    }
    fVar4 = 1.0 - fVar4;
    fVar10 = -fVar4;
    if (fVar6 <= 0.0) {
      fVar10 = fVar4;
    }
    fVar6 = fVar1 * param_1 + param_4 * fVar7 + fStack0000000000000000 * fVar10;
    fVar2 = fVar1 * param_2 + param_5 * fVar7 + fStack0000000000000004 * fVar10;
    fVar1 = fVar1 * param_3 + param_6 * fVar7 + in_stack_00000008 * fVar10;
    *param_7 = fVar6;
    param_7[1] = fVar2;
    param_7[2] = fVar1;
    if (fVar5 < in_stack_00000038) {
      fVar3 = 1.0 / (fVar4 + fVar9 + fVar3);
      fVar6 = fVar6 * fVar3;
      fVar2 = fVar2 * fVar3;
      fVar1 = fVar1 * fVar3;
      fVar3 = SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar3 == 0.0) {
        fVar6 = 0.0;
        fVar2 = 0.0;
        fVar1 = 0.0;
      }
      else {
        fVar3 = 1.0 / fVar3;
        fVar6 = fVar6 * fVar3;
        fVar2 = fVar2 * fVar3;
        fVar1 = fVar1 * fVar3;
      }
      *param_7 = fVar6;
      param_7[1] = fVar2;
      param_7[2] = fVar1;
      return (fVar5 * 3.1415927) / in_stack_00000038 + 3.1415927;
    }
  }
  return 6.2831855;
}


