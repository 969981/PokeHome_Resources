/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c238; name: FUN_.text__0046c238
 */


void FUN__text__0046c238(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  if (param_2 != 0) {
    FUN__text__004691f0(param_2,param_1,param_3,param_4 & 1);
    if (*(long *)(param_1 + 0x50) == 0) {
      *(long *)(param_1 + 0x50) = param_2;
      FUN__text__0046be40(&DAT_00aea6f8,param_1);
      return;
    }
  }
  return;
}


