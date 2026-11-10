/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637830; name: FUN_.text__00637830
 */


uint FUN__text__00637830(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0x7fff) << 1;
  return (3 << (ulong)(uVar1 & 0x1f) & param_1 & 0xffff) >> (ulong)(uVar1 & 0x1f);
}


