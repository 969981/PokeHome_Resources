/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d09b0; name: FUN_.text__005d09b0
 */


void FUN__text__005d09b0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *param_1 = 0;
  if (uVar1 == 0) {
    uVar3 = FUN__text__005f52b0();
    param_1[3] = uVar3;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[8] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar3 = FUN__text__005f52b0();
    param_1[9] = uVar3;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uVar3 = FUN__text__005f52b0();
    param_1[0xf] = uVar3;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0x14] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    goto LAB__text__005d0abc;
  }
  uVar4 = uVar1 | 0x18;
  if (*(long *)(uVar1 + 0x98) == 0) {
LAB__text__005d09f0:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    lVar2 = *(long *)(uVar4 + *(long *)(uVar1 + 0x98) * 8 + -8);
    if (lVar2 == 0) goto LAB__text__005d09f0;
  }
  param_1[3] = lVar2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(long *)(uVar1 + 0x98) == 0) {
LAB__text__005d0a18:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    lVar2 = *(long *)(uVar4 + *(long *)(uVar1 + 0x98) * 8 + -8);
    if (lVar2 == 0) goto LAB__text__005d0a18;
  }
  param_1[9] = lVar2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (*(long *)(uVar1 + 0x98) == 0) {
LAB__text__005d0a40:
    lVar2 = FUN__text__005f52b0();
  }
  else {
    lVar2 = *(long *)(uVar4 + *(long *)(uVar1 + 0x98) * 8 + -8);
    if (lVar2 == 0) goto LAB__text__005d0a40;
  }
  param_1[0xf] = lVar2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((*(long *)(uVar1 + 0x98) != 0) &&
     (lVar2 = *(long *)(uVar4 + *(long *)(uVar1 + 0x98) * 8 + -8), lVar2 != 0)) {
    param_1[0x15] = lVar2;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    return;
  }
LAB__text__005d0abc:
  uVar3 = FUN__text__005f52b0();
  param_1[0x15] = uVar3;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return;
}


