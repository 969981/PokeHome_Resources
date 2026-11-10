/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205730; name: FUN_.text__00205730
 */


bool FUN__text__00205730(uint param_1)

{
  return (param_1 & 0xff) - 0x1e < 5 ||
         ((param_1 & 0xfe) == 0x2a || ((param_1 & 0xfe) == 0x2c || (param_1 & 0xff) - 0x2f < 6));
}


