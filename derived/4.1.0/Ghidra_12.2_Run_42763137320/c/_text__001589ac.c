/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001589ac; name: FUN_.text__001589ac
 */


bool FUN__text__001589ac(long param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = 1 < param_2;
  if (*(int *)(param_1 + 0xc08) != 3) {
    bVar1 = param_2 != 1;
  }
  return bVar1;
}


