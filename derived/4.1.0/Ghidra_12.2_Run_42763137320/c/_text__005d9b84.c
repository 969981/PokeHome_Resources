/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9b84; name: FUN_.text__005d9b84
 */


void FUN__text__005d9b84(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  *param_1 = 0;
  param_1[1] = 0;
  if (((uVar4 == 0) || (*(long *)(uVar4 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    uVar1 = FUN__text__005f52b0();
    param_1[5] = 0;
    param_1[2] = uVar1;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (uVar4 != 0) goto LAB__text__005d9be8;
LAB__text__005d9bfc:
    lVar3 = FUN__text__005f52b0();
  }
  else {
    param_1[5] = 0;
    param_1[2] = lVar3;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
LAB__text__005d9be8:
    if ((*(long *)(uVar4 + 0x98) == 0) ||
       (lVar3 = *(long *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x10), lVar3 == 0))
    goto LAB__text__005d9bfc;
  }
  param_1[6] = lVar3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar4 = param_1[1];
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  if (uVar4 < 8) {
    FUN__text__0010b420(param_1,8);
    return;
  }
  if (uVar4 != 8) {
    if ((uVar4 & uVar4 - 1) == 0) {
      if (8 < uVar4) {
LAB__text__005d9c8c:
        FUN__text__0010b420(param_1);
        return;
      }
    }
    else {
      uVar2 = std::__next_prime(0);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      if (uVar2 < uVar4) goto LAB__text__005d9c8c;
    }
  }
  return;
}


