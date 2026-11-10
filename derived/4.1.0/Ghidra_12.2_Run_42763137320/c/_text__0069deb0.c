/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069deb0; name: FUN_.text__0069deb0
 */


void FUN__text__0069deb0(long param_1,undefined8 param_2)

{
  FUN__text__006ee050(param_2,0,1,param_1 + 0x130);
  FUN__text__006edf20(param_2,0,1,param_1 + 0x100);
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN__text__006ecef4(param_2);
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return;
  }
  FUN__text__006ecd4c(param_2);
  return;
}


