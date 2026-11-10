/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c66b0; name: thunk_FUN_.text__0049392c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__0049392c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = _DAT_008a4a98;
  lVar1 = _DAT_008a4a98 + 0x2a0;
  *param_1 = _DAT_008a4a98 + 0x10;
  param_1[1] = lVar1;
  param_1[2] = lVar2 + 0x2b8;
  param_1[5] = lVar2 + 0x2f8;
  FUN__text__0046ab10();
  plVar3 = (long *)param_1[0x1c];
  if (plVar3 == (long *)0x0) goto LAB__text__004939a0;
  if (*plVar3 == 0) {
LAB__text__00493990:
    FUN__text__00400fc0(2,plVar3);
  }
  else {
    *(undefined4 *)(plVar3 + 1) = 0;
    FUN__text__00400fc0(0);
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    plVar3 = (long *)param_1[0x1c];
    if (plVar3 != (long *)0x0) goto LAB__text__00493990;
  }
  param_1[0x1c] = 0;
LAB__text__004939a0:
  if (param_1[0x1b] != 0) {
    FUN__text__00400fc0(2);
  }
  param_1[0x1b] = 0;
  FUN__text__00463c74(param_1);
  return;
}


