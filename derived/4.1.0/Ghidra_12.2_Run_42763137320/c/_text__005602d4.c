/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005602d4; name: FUN_.text__005602d4
 */


void FUN__text__005602d4(float *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == 0) {
    return;
  }
  param_1[0xe4] = 8.0;
  if (*(int *)(param_2 + 0xc) == 1) {
    fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe6));
    fVar3 = exp2f(fVar3 * 0.083333336 + -5.75);
    fVar3 = fVar3 * 440.0;
    fVar4 = 8.0;
    param_1[0xe4] = fVar3;
    if (8.0 <= fVar3) goto LAB__text__00560380;
  }
  else {
    if (*(int *)(param_2 + 0xc) == 0) {
      fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x10),0x469c4000);
      if (fVar3 <= 8.0) {
        fVar3 = 8.0;
      }
      fVar4 = 8.0;
      param_1[0xe4] = fVar3;
      if (fVar3 < 8.0) goto LAB__text__00560394;
    }
    else {
      fVar3 = 8.0;
    }
LAB__text__00560380:
    if (fVar3 < param_1[4]) goto LAB__text__00560398;
    fVar4 = param_1[4] + -1.0;
  }
LAB__text__00560394:
  param_1[0xe4] = fVar4;
LAB__text__00560398:
  *(bool *)((long)param_1 + 0x15) = *(int *)(param_2 + 8) == 0;
  *(bool *)(param_1 + 0x15) = (*(char *)(param_2 + 0x2c) != '\0') != (*(int *)(param_2 + 0x28) == 3)
  ;
  *(bool *)(param_1 + 0x25) = (*(char *)(param_2 + 0x40) != '\0') != (*(int *)(param_2 + 0x3c) == 3)
  ;
  param_1[10] = *(float *)(param_2 + 0x28);
  param_1[0x1a] = *(float *)(param_2 + 0x3c);
  FUN__text__0055ffac(param_1,param_2,param_3);
  fVar3 = *(float *)(param_2 + 0x18);
  if (fVar3 == param_1[0x9c]) {
    return;
  }
  param_1[0x9c] = fVar3;
  fVar4 = *param_1;
  if (2 < (int)fVar3 - 1U) {
    fVar3 = 0.0;
  }
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0xe8) + 0x10))();
  uVar1 = (**(code **)(*plVar2 + 0xe0))();
  FUN__text__00561608(param_1 + 0xa0,fVar3,(int)fVar4,uVar1);
  return;
}


