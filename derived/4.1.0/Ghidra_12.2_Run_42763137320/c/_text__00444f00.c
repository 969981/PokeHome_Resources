/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444f00; name: FUN_.text__00444f00
 */


void FUN__text__00444f00(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)param_1[3];
  uVar1 = param_1[5];
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00444f58 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00444f6c + (ulong)*(ushort *)((ulong)uVar1 * 2 + 0x73b17a) * 4))();
    return;
  }
  if ((float)param_1[4] != 0.0) {
    *param_1 = *param_1;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    param_1[3] = fVar2;
    param_1[4] = param_1[4];
    param_1[5] = uVar1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 6);
    if (uVar1 == 0) {
      fVar2 = fmodf(fVar2,6.2831855);
      param_1[3] = fVar2;
      return;
    }
    if (uVar1 != 5) {
      fVar2 = fmodf(fVar2,1.0);
      param_1[3] = fVar2;
      return;
    }
  }
  return;
}


