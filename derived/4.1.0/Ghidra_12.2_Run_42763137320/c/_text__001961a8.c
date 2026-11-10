/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001961a8; name: FUN_.text__001961a8
 */


long FUN__text__001961a8(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (ulong)*param_2 * 0x20
                                                 + 0x10) + 0x30) + (ulong)param_2[1] * 0x20 + 0x10)
                    + (ulong)param_2[2] * 0xa0 + (ulong)param_2[3] * 0x20 + 0x10);
  lVar1 = 0;
  if (*(int *)(lVar2 + 0x18) != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}


