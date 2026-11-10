/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068c448; name: FUN_.text__0068c448
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068c448(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a66e8 + 0x10;
  *param_1 = _DAT_008a66f0 + 0x10;
  param_1[5] = lVar1;
  FUN__text__0068d4cc(param_1 + 5,0,0xc,0,0,0,1);
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  param_1[9] = -1;
  FUN__text__0068d50c(param_1);
  return;
}


