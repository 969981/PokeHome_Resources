/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065615c; name: FUN_.text__0065615c
 */


uint FUN__text__0065615c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + param_2) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + param_2) & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


