/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a148c; name: FUN_.text__004a148c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__004a148c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = _DAT_008a4a80 + 0x10;
  if (plVar1 == (long *)0x0) {
    return param_1;
  }
  if (*plVar1 != 0) {
    FUN__text__0042eae0(param_1);
    FUN__text__0042db90(param_1,0);
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) goto LAB__text__004a1504;
  }
  *plVar1 = 0;
  if (plVar1[2] != 0) {
    *(undefined4 *)(plVar1 + 3) = 0;
    FUN__text__00400fc0(0);
    plVar1[2] = 0;
    *(undefined4 *)((long)plVar1 + 0x1c) = 0;
  }
  FUN__text__00400fc0(2,plVar1);
LAB__text__004a1504:
  param_1[2] = 0;
  return param_1;
}


