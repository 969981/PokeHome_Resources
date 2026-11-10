/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404da0; name: FUN_.text__00404da0
 */


long FUN__text__00404da0(int param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_2 + (ulong)(ushort)(&DAT_00ae8a6e)
                                             [(ulong)((int)(param_3 + 0x1fffffffbffU >> 9) + 0x41) *
                                              4 + (long)param_1 * 0x31c] * 0x18 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    lVar1 = FUN__text__00405120();
    return lVar1;
  }
  *plVar2 = *plVar3;
  return (long)plVar3;
}


