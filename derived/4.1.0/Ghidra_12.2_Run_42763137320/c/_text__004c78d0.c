/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c78d0; name: FUN_.text__004c78d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c78d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_008a4c80;
  lVar1 = _DAT_008a4c80 + 0x2c0;
  *param_1 = _DAT_008a4c80 + 0x10;
  param_1[1] = lVar1;
  param_1[2] = lVar2 + 0x2d8;
  param_1[5] = lVar2 + 0x318;
  param_1[0x23] = lVar2 + 0x3b0;
  FUN__text__004c7920();
  FUN__text__0049cc7c(param_1);
  return;
}


