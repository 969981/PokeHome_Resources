/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ef774; name: FUN_.text__003ef774
 */


void FUN__text__003ef774(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb),false,0);
  uVar3 = (ulong)(256.0 / *(float *)(param_1 + 10));
  if (uVar3 - 1 == 0) {
    uVar3 = 2;
  }
  else if ((uVar3 & uVar3 - 1) != 0) {
    uVar3 = std::__next_prime(uVar3);
  }
  uVar4 = param_1[1];
  if (uVar4 < uVar3) {
LAB__text__003ef8a8:
    FUN__text__0015ec20(param_1,uVar3);
    return;
  }
  if (uVar3 < uVar4) {
    uVar1 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
    if ((uVar4 < 3) ||
       (uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
       uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333),
       1 < (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar1 = std::__next_prime(uVar1);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    if (uVar3 < uVar4) goto LAB__text__003ef8a8;
  }
  return;
}


