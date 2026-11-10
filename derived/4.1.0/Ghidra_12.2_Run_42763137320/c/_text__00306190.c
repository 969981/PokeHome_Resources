/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306190; name: FUN_.text__00306190
 */


undefined8 FUN__text__00306190(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 0xf3U < 0xfb) {
                    /* WARNING: Could not emulate address calculation at 0x003061b0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_1 - 0xf3U) + 0x733b35) * 4 + 0x3061bc))(1);
    return uVar1;
  }
  if ((param_1 - 0x90U < 8) && ((1 << (ulong)(param_1 - 0x90U & 0x1f) & 199U) != 0)) {
    return 1;
  }
  return 0;
}


