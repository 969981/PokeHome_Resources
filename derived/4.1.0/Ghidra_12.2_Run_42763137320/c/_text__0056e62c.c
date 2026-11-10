/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056e62c; name: FUN_.text__0056e62c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0056e62c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = _DAT_008a3ca8;
  lVar2 = *_DAT_008a3ca8;
  if ((lVar2 == 0) &&
     (lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x48,0x71d19e,0xe4), lVar2 = 0, lVar3 != 0)) {
    FUN__text__0056e054(lVar3,param_1);
    return *plVar1;
  }
  return lVar2;
}


