/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ed90; name: FUN_.text__0068ed90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068ed90(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a66e8;
  *param_1 = _DAT_008a6740 + 0x10;
  param_1[0x3d5] = lVar1 + 0x10;
  FUN__text__0068d4cc(param_1 + 0x3d5,0,0xc,0,0,0,1);
  *(undefined1 *)((long)param_1 + 0x1ec1) = 0;
  param_1[0x3d9] = -1;
  FUN__text__006ee67c(param_1 + 0x3af);
  FUN__text__006f5a84(param_1 + 0x3a6);
  FUN__text__006f5940(param_1 + 0x38b);
  return;
}


