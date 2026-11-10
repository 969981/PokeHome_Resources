/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638c84; name: FUN_.text__00638c84
 */


ulong FUN__text__00638c84(int param_1)

{
  ulong uVar1;
  
  if (param_1 - 0x12aU < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x00638c9c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00638cac +
                      (ulong)*(byte *)((ulong)(param_1 - 0x12aU) + 0x75ac54) * 4))(0);
    return uVar1;
  }
  if (param_1 == 0x284) {
    return (ulong)DAT_0075ae0a;
  }
  return 0;
}


