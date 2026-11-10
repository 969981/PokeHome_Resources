/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00227bc4; name: FUN_.text__00227bc4
 */


void FUN__text__00227bc4(long param_1,int param_2)

{
  *(ulong *)(param_1 + 0xc) = CONCAT44(param_2 % 10,param_2 / 10);
  return;
}


