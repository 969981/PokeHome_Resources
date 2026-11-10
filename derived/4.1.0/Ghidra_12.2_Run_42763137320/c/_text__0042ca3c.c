/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042ca3c; name: FUN_.text__0042ca3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042ca3c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = _DAT_008a4828 + 0x58;
  *param_1 = _DAT_008a4828 + 0x10;
  plVar2 = (long *)param_1[0x11];
  param_1[1] = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,_DAT_008a47f0);
    param_1[0x11] = 0;
  }
  FUN__text__0042c560(param_1);
  lVar1 = _DAT_008a4820 + 0x58;
  *param_1 = _DAT_008a4820 + 0x10;
  param_1[1] = lVar1;
  FUN__text__0042c560(param_1);
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN__text__00400fc0(0);
    param_1[0xf] = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
  }
  FUN__text__004335d0(param_1 + 1);
  operator_delete(param_1);
  return;
}


