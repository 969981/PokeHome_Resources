/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004062fc; name: FUN_.text__004062fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004062fc(long *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
  param_1[2] = param_2;
  lVar1 = _DAT_008a49a0;
  *(undefined1 *)(param_1 + 3) = param_3;
  *param_1 = lVar1 + 0x10;
  param_1[1] = -0x100000000;
  return;
}


