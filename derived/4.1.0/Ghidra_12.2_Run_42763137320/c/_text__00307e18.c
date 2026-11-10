/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307e18; name: FUN_.text__00307e18
 */


bool FUN__text__00307e18(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN__text__00631314(*(undefined8 *)(param_1 + 0x58));
  return param_2 - 3U < 2 && (uVar1 & 0xfe) == 0x2c;
}


