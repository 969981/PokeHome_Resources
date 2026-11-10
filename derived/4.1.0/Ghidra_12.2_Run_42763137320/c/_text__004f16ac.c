/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f16ac; name: FUN_.text__004f16ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f16ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_008a5040;
  lVar1 = _DAT_008a5040 + 0x168;
  *param_1 = _DAT_008a5040 + 0x10;
  param_1[2] = lVar2 + 0x150;
  param_1[3] = lVar1;
  param_1[0x10] = lVar2 + 0x238;
  param_1[0x71] = lVar2 + 0x280;
  FUN__text__004ec480(param_1 + 0x71);
  FUN__text__00473da4(param_1);
  return;
}


