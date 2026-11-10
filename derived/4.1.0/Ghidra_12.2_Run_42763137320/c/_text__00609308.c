/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00609308; name: FUN_.text__00609308
 */


uint FUN__text__00609308(uint param_1)

{
  uint uVar1;
  
  uVar1 = 4;
  if ((param_1 & 0xff) < 0x1b) {
    uVar1 = param_1;
  }
  return uVar1;
}


