/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fba70; name: FUN_.text__005fba70
 */


void FUN__text__005fba70(undefined8 *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = uVar3;
  param_1[3] = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  uVar6 = *(ulong *)(param_2 + 8);
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) == 0) {
    uVar7 = 0;
    bVar1 = true;
    if (uVar6 == 0) {
LAB__text__005fbaf8:
      if (bVar1) goto LAB__text__005fbba0;
      uVar2 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
      if ((uVar7 < 3) ||
         (uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
         uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
         1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
        if (uVar6 <= uVar2) {
          uVar6 = uVar2;
        }
      }
      else {
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
        if (uVar6 <= uVar2) {
          uVar6 = uVar2;
        }
      }
      if (uVar7 <= uVar6) goto LAB__text__005fbba0;
    }
  }
  else {
    uVar6 = std::__next_prime(uVar6);
    uVar7 = param_1[1];
    bVar1 = uVar7 <= uVar6;
    if (uVar6 <= uVar7) goto LAB__text__005fbaf8;
  }
  FUN__text__005fa6d0(param_1,uVar6);
LAB__text__005fbba0:
  for (plVar5 = *(long **)(param_2 + 0x28); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    FUN__text__005fbbe0(param_1,plVar5 + 2,plVar5 + 2);
  }
  return;
}


