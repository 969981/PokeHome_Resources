/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065ab48; name: FUN_.text__0065ab48
 */


bool FUN__text__0065ab48(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (*(ulong *)(param_1 + 0xe8) & (long)param_2) != 0;
  }
  return bVar1;
}


