/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067839c; name: FUN_.text__0067839c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0067839c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = _DAT_008a65f8;
  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    uVar2 = 1;
    *_DAT_008a65f8 = param_1;
    plVar1[1] = param_2;
    plVar1[4] = param_5;
    plVar1[2] = param_3;
    plVar1[3] = param_4;
  }
  return uVar2;
}


