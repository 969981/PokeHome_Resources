/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006db9c0; name: FUN_.text__006db9c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006db9c0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = _DAT_008a6bb0;
  if (*_DAT_008a6bb0 != 0) {
    FUN__text__006d8380(0x712d91);
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  if (lVar2 == 0) {
    FUN__text__006d84b0(0x712243,0x38);
    return;
  }
  FUN__text__006db1dc(lVar2,param_1,param_2,param_3,param_4);
  *plVar1 = lVar2;
  return;
}


