/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2854; name: FUN_.text__006a2854
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006a2854(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1 || *_DAT_008a6990 < iVar1) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + (ulong)(iVar1 - 1) * 8);
}


