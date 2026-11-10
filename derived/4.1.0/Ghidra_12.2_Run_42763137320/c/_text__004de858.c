/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de858; name: FUN_.text__004de858
 */


void FUN__text__004de858(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_3 + *(int *)(param_1 + 4) * param_2;
  lVar2 = (ulong)(uVar1 >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 8) + lVar2) =
       1 << (ulong)(uVar1 & 0x1f) | *(uint *)(*(long *)(param_1 + 8) + lVar2);
  return;
}


