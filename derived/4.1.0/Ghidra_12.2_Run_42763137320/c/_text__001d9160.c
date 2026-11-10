/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d9160; name: FUN_.text__001d9160
 */


void FUN__text__001d9160(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__0012cb14(*(long *)(param_1 + 8) + 0x110,param_1 + 0x5f8);
  if (lVar1 == 0) {
    return;
  }
  FUN__text__003a14c4(lVar1,param_2 & 1);
  return;
}


