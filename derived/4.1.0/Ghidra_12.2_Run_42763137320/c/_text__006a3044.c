/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a3044; name: FUN_.text__006a3044
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a3044(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == param_1) {
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar1 = (long *)param_2[2];
    lVar2 = *plVar1;
    *(long **)(param_2[1] + 8) = plVar1;
    *plVar1 = param_2[1];
    *(long **)(lVar2 + 8) = param_2 + 1;
    param_2[1] = lVar2;
  }
  (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x006a30b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6968)(param_2,DAT_00c5fab8);
  return;
}


