/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030ae18; name: FUN_.text__0030ae18
 */


byte FUN__text__0030ae18(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == -0x340d631b7bddd9bb) {
    return 0;
  }
  uVar1 = FUN__text__0030ae84();
  if ((int)uVar1 < 0) {
    return 0;
  }
  return *(byte *)(param_1 + (ulong)(uVar1 >> 3) + 0xff8) >> (ulong)(uVar1 & 7) & 1;
}


