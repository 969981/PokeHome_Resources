/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679b60; name: FUN_.text__00679b60
 */


undefined8 FUN__text__00679b60(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 + 0x218U < 0x24) {
                    /* WARNING: Could not emulate address calculation at 0x00679b78 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00679b84 +
                      (ulong)*(byte *)((ulong)(param_1 + 0x218U) + 0x760f44) * 4))();
    return uVar1;
  }
  if (param_1 + 0x388U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00679ba8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00679bb4 +
                      (ulong)*(byte *)((ulong)(param_1 + 0x388U) + 0x760f40) * 4))();
    return uVar1;
  }
  if (param_1 == 0) {
    return 0x70be42;
  }
  return 0x70feb9;
}


