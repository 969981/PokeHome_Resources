/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc434; name: FUN_.text__005dc434
 */


void FUN__text__005dc434(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN__text__005d8a8c();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *param_1 = 0x8972b8;
  param_1[9] = 0x897310;
  param_1[10] = 0x897350;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) {
      param_1[0x39] = lVar2;
      param_1[0x3a] = 0;
      *(undefined4 *)(param_1 + 0x3b) = 0;
      return;
    }
  }
  uVar3 = FUN__text__005f52b0();
  param_1[0x39] = uVar3;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  return;
}


