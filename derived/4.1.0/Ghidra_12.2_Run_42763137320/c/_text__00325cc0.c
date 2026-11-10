/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00325cc0; name: FUN_.text__00325cc0
 */


bool FUN__text__00325cc0(ulong param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__0030d5f0();
  return *(char *)(lVar1 + (param_1 & 0xffffffff) * 99 + (ulong)param_2 + 0x40d) != '\0';
}


