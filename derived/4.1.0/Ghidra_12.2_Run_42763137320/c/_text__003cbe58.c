/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cbe58; name: FUN_.text__003cbe58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cbe58(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  FUN__text__005d8a8c();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  lVar2 = _DAT_008a36b8;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  lVar3 = _DAT_008a36b8 + 0x10;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *param_1 = lVar3;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[9] = lVar2 + 0x68;
  param_1[10] = lVar2 + 0xa8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    lVar3 = FUN__text__005f52b0();
    param_1[0x3a] = lVar3;
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    param_1[0x3f] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    if (uVar1 == 0) goto LAB__text__003cbf34;
  }
  else {
    param_1[0x3a] = lVar3;
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    param_1[0x3f] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  if ((*(long *)(uVar1 + 0x98) != 0) &&
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 != 0)) {
    param_1[0x40] = lVar3;
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
    return;
  }
LAB__text__003cbf34:
  lVar3 = FUN__text__005f52b0();
  param_1[0x40] = lVar3;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  return;
}


