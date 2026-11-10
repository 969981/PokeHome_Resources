/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5c90; name: FUN_.text__003b5c90
 */


void FUN__text__003b5c90(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x40) + (ulong)param_2 * 0x10;
  *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) & 0xfffffffffffffffe | param_3 & 1;
  return;
}


