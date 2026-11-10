/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638bb0; name: thunk_FUN_.text__0064980c
 */


uint thunk_FUN__text__0064980c(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 ^ 0x10000000;
  if (0xf < ((param_2 ^ param_1) & 0xfff0 ^ (param_2 ^ param_1) >> 0x10)) {
    uVar1 = param_2;
  }
  return uVar1;
}


