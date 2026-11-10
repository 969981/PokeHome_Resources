/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046be18; name: FUN_.text__0046be18
 */


void FUN__text__0046be18(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 *)(param_1 + 0x50) = param_2;
    FUN__text__0046be40(&DAT_00aea6f8,param_1);
    return;
  }
  return;
}


