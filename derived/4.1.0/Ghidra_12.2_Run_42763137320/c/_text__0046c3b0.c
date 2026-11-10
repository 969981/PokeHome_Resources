/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c3b0; name: FUN_.text__0046c3b0
 */


void FUN__text__0046c3b0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN__text__0046c410(&DAT_00aea6f8,param_1);
    FUN__text__00469530(*(undefined8 *)(param_1 + 0x50),param_1,param_2,param_3 & 1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}


