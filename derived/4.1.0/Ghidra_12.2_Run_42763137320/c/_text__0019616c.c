/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019616c; name: FUN_.text__0019616c
 */


long FUN__text__0019616c(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x20
                                                 + 0x10) + 0x30) + 0x150) + (ulong)*param_3 * 0xa0 +
                    (ulong)param_3[1] * 0x20 + 0x18);
  lVar1 = 0;
  if (*(int *)(lVar2 + 0x18) != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}


