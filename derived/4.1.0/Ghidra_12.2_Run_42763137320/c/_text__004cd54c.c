/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cd54c; name: FUN_.text__004cd54c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cd54c(long *param_1,ushort param_2)

{
  long lVar1;
  
  *(ushort *)(param_1 + 2) = param_2;
  lVar1 = _DAT_008a4af8;
  *(ushort *)((long)param_1 + 0x12) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(uint *)(param_1 + 1) = (uint)param_2 * 50000;
  *(uint *)((long)param_1 + 0xc) = (uint)param_2 * 50000;
  *param_1 = lVar1 + 0x10;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


