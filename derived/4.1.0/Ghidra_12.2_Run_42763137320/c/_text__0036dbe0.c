/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036dbe0; name: FUN_.text__0036dbe0
 */


undefined8 FUN__text__0036dbe0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x329) {
    if (param_2 - 3U < 0x42) {
                    /* WARNING: Could not emulate address calculation at 0x0036dc2c */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_2 - 3U) + 0x735020) * 4 + 0x36dc10))(1);
      return uVar1;
    }
    if (((param_2 - 0x5eU < 0x32) &&
        ((1L << ((ulong)(param_2 - 0x5eU) & 0x3f) & 0x200a000000021U) != 0)) || (param_2 == 0x239))
    {
      return 1;
    }
  }
  else if (param_2 - 0x329U < 0x54) {
                    /* WARNING: Could not emulate address calculation at 0x0036dc04 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_2 - 0x329U) + 0x735062) * 4 + 0x36dc10))();
    return uVar1;
  }
  return 0;
}


