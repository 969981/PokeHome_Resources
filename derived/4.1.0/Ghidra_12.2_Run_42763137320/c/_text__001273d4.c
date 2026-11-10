/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001273d4; name: FUN_.text__001273d4
 */


long FUN__text__001273d4(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)param_2 * 400 + 0x90;
  if (*(uint *)(param_1 + 0xc90) <= param_2) {
    lVar1 = 0;
  }
  return lVar1;
}


