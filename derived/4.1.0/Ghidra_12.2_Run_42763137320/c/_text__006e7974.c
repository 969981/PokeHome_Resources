/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e7974; name: FUN_.text__006e7974
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006e7974(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = _DAT_008a6bd0;
  if (*_DAT_008a6bd0 != 0) {
    FUN__text__006d8380(0x70bf1f);
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x30,0x80);
  if (lVar2 == 0) {
    FUN__text__006d84b0(0x71596c,0x30);
    return;
  }
  FUN__text__006e764c(lVar2,param_2,param_3);
  *plVar1 = lVar2;
  return;
}


