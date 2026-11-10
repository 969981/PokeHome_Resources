/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527960; name: FUN_.text__00527960
 */


void FUN__text__00527960(float param_1,float param_2,float param_3,float param_4,float param_5,
                        float param_6,double *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  undefined8 local_4c;
  float local_44;
  
  local_4c = 0;
  local_44 = 0.0;
  fVar4 = (float)(in_stack_00000050 - in_stack_00000020);
  fVar1 = (float)(in_stack_00000040 - in_stack_00000010);
  fVar2 = (float)(in_stack_00000048 - in_stack_00000018);
  fVar3 = ABS(param_2 * fVar2 + fVar1 * param_1 + fVar4 * param_3);
  fVar5 = ABS(param_5 * fVar2 + fVar1 * param_4 + fVar4 * param_6);
  fVar1 = ABS(fStack0000000000000004 * fVar2 + fVar1 * fStack0000000000000000 +
              fVar4 * in_stack_00000008);
  fVar2 = fVar3 - fStack0000000000000028;
  fVar2 = fVar2 * fVar2;
  if (fVar3 <= fStack0000000000000028) {
    fVar2 = 0.0;
  }
  fVar3 = fVar5 - fStack000000000000002c;
  fVar3 = fVar3 * fVar3;
  if (fVar5 <= fStack000000000000002c) {
    fVar3 = -0.0;
  }
  fVar4 = fVar1 - in_stack_00000030;
  fVar4 = fVar4 * fVar4;
  if (fVar1 <= in_stack_00000030) {
    fVar4 = -0.0;
  }
  fVar1 = SQRT(fVar3 + fVar2 + fVar4);
  if (fVar1 <= 0.0) {
    FUN__text__00529000(&local_4c);
  }
  else {
    FUN__text__005288e0(&local_4c);
  }
  param_7[2] = in_stack_00000050 + (double)(local_44 * fVar1);
  *param_7 = in_stack_00000040 + (double)((float)local_4c * fVar1);
  param_7[1] = in_stack_00000048 + (double)(local_4c._4_4_ * fVar1);
  return;
}


