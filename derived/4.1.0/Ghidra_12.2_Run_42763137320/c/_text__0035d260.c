/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035d260; name: FUN_.text__0035d260
 */


long FUN__text__0035d260(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
  return param_1 + (ulong)uVar1 * 0x22 + 0x60;
}


