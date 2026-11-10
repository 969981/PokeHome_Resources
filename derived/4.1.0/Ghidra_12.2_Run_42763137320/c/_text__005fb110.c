/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fb110; name: FUN_.text__005fb110
 */


void FUN__text__005fb110(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined1 auStack_188 [328];
  
  *param_1 = param_2;
  puVar7 = param_1 + 1;
  *puVar7 = 0;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  param_1[2] = 0;
  if (((uVar6 == 0) || (*(long *)(uVar6 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    uVar2 = FUN__text__005f52b0();
    param_1[6] = 0;
    param_1[3] = uVar2;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (uVar6 != 0) goto LAB__text__005fb188;
LAB__text__005fb19c:
    lVar3 = FUN__text__005f52b0();
  }
  else {
    param_1[6] = 0;
    param_1[3] = lVar3;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
LAB__text__005fb188:
    if ((*(long *)(uVar6 + 0x98) == 0) ||
       (lVar3 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10), lVar3 == 0))
    goto LAB__text__005fb19c;
  }
  param_1[7] = lVar3;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  piVar4 = (int *)*param_1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
    return;
  }
  uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
  if (uVar6 == 0) {
    return;
  }
  puVar8 = (uint *)((long)piVar4 + uVar6);
  puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
  if (*puVar8 == 0) {
    return;
  }
  uVar6 = (ulong)(float)*puVar8;
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    uVar6 = std::__next_prime(uVar6);
  }
  uVar9 = param_1[2];
  if (uVar6 <= uVar9) {
    if (uVar9 <= uVar6) goto LAB__text__005fb2bc;
    uVar1 = (ulong)((float)(ulong)param_1[10] / *(float *)(param_1 + 0xb));
    if ((uVar9 < 3) ||
       (uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
       uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
       1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar1 = std::__next_prime(uVar1);
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (uVar9 <= uVar6) goto LAB__text__005fb2bc;
  }
  FUN__text__005fb330(puVar7,uVar6);
LAB__text__005fb2bc:
  if (*puVar8 != 0) {
    lVar3 = (ulong)*puVar8 << 2;
    do {
      puVar8 = puVar8 + 1;
      FUN__text__005faf10(auStack_188,(long)puVar8 + (ulong)*puVar8);
      uVar2 = FUN__text__005fb104(auStack_188);
      FUN__text__005fb5e0(puVar7,uVar2,uVar2,auStack_188);
      FUN__text__005f9600(auStack_188);
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  return;
}


