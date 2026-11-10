/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654428; name: FUN_.text__00654428
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN__text__00654428(void)

{
  int iVar1;
  
  if ((DAT_00c5f5d8 & 1) == 0) {
    iVar1 = FUN__text__00653dc4(&DAT_00c5f5e0,7,_DAT_008a6580,_DAT_008a6588,FUN__text__00654490);
    if (iVar1 != 0) {
      return (undefined *)0x0;
    }
    DAT_00c5f5d8 = 1;
  }
  return &DAT_00c5f5e0;
}


