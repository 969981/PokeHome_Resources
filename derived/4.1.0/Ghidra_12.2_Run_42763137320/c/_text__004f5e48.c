/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f5e48; name: thunk_FUN_.text__004eb808
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__004eb808(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  lVar1 = _DAT_008a5030 + 0xa0;
  lVar2 = _DAT_008a5030 + 200;
  *param_1 = _DAT_008a5030 + 0x10;
  param_1[3] = lVar1;
  plVar4 = param_1 + 5;
  *plVar4 = lVar2;
  puVar3 = _DAT_008a4648;
  if (param_1[7] != 0) {
    FUN__text__0042f5a0(*_DAT_008a4648,param_1[7],plVar4);
  }
  if (param_1[8] != 0) {
    FUN__text__0042f5a0(*puVar3,param_1[8],plVar4);
  }
  param_1[6] = 0;
  FUN__text__004ec480(param_1);
  return;
}


