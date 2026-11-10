/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00327760; name: FUN_.text__00327760
 */


long FUN__text__00327760(ulong param_1)

{
  long lVar1;
  
  lVar1 = FUN__text__0030d5f0();
  return lVar1 + (param_1 & 0xffffffff) * 0xcea8 + 0x1410;
}


