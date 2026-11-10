/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046cdd0; name: FUN_.text__0046cdd0
 */


void FUN__text__0046cdd0(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN__text__0046e090();
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN__text__0046e088(lVar1);
      FUN__text__00400fc0(0,lVar1);
    }
    *param_1 = 0;
  }
  return;
}


