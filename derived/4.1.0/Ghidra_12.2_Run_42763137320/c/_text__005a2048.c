/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a2048; name: FUN_.text__005a2048
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a2048(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*_DAT_008a0228 + 0x10);
  lVar1 = _DAT_008a55a8 + 0x10;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[2] = lVar2;
  *param_1 = lVar1;
  param_1[1] = param_2;
  return;
}


