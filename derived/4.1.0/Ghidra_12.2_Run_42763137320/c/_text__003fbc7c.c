/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fbc7c; name: FUN_.text__003fbc7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003fbc7c(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a4380 + 0x10;
  param_1[0xe] = _DAT_008a4380 + 0x138;
  *param_1 = lVar1;
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
    FUN__text__003fe090(param_1[10]);
  }
  FUN__text__003faca4(param_1);
  return;
}


