/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066e478; name: FUN_.text__0066e478
 */


long * FUN__text__0066e478(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN__text__00678414(0x58,1);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 == 0) {
LAB__text__0066e4b0:
    if (param_1[1] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[2] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[3] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[3] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[4] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[5] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[5] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[6] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[6] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[7] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[7] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    if (param_1[8] != 0) {
      lVar2 = FUN__text__00678404();
      plVar1[8] = lVar2;
      if (lVar2 == 0) goto LAB__text__0066e55c;
    }
    plVar1[10] = param_1[10];
  }
  else {
    lVar2 = FUN__text__00678404();
    *plVar1 = lVar2;
    if (lVar2 != 0) goto LAB__text__0066e4b0;
LAB__text__0066e55c:
    FUN__text__0066e410(plVar1);
    FUN__text__006783e4(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


