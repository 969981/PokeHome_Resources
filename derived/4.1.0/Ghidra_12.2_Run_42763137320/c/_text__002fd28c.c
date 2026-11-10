/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd28c; name: FUN_.text__002fd28c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002fd28c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[4];
  *param_1 = _DAT_008a2920 + 0x10;
  if (lVar1 != 0) {
    param_1[5] = lVar1;
    (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],lVar1,param_1[6] - lVar1,0x1000);
  }
  operator_delete(param_1);
  return;
}


