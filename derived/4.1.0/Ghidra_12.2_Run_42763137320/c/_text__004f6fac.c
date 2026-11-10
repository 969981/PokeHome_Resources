/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6fac; name: FUN_.text__004f6fac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f6fac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_008a50d8;
  lVar1 = _DAT_008a50d8 + 0x2d8;
  *param_1 = _DAT_008a50d8 + 0x10;
  param_1[1] = lVar1;
  param_1[2] = lVar2 + 0x2f0;
  param_1[5] = lVar2 + 0x330;
  FUN__text__004f7010(param_1 + 0x25);
  FUN__text__004f7010(param_1 + 0x25);
  FUN__text__004f2220(param_1);
  return;
}


