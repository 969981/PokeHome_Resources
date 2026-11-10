/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066be80; name: FUN_.text__0066be80
 */


long * FUN__text__0066be80(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long local_38;
  long local_30;
  
  if (param_3 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = &local_38;
  local_38 = 0;
  local_30 = 0;
  plVar2 = &local_38;
  for (; param_1 < param_3[4]; param_3 = (long *)*param_3) {
LAB__text__0066beac:
    plVar1 = (long *)*param_3;
    if (plVar1 == (long *)0x0) goto LAB__text__0066bf60;
    if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 < (int)plVar1[5])))) {
      *param_3 = plVar1[1];
      plVar1[1] = (long)param_3;
      param_3 = plVar1;
      if (*plVar1 == 0) goto LAB__text__0066bf64;
    }
    *plVar3 = (long)param_3;
    plVar1 = plVar2;
    plVar3 = param_3;
LAB__text__0066bf58:
    plVar2 = plVar1;
  }
  if (param_3[4] < param_1) {
LAB__text__0066befc:
    plVar1 = (long *)param_3[1];
    if (plVar1 != (long *)0x0) {
      if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 <= (int)plVar1[5])))) {
        plVar1 = param_3;
LAB__text__0066bf4c:
        plVar2[1] = (long)plVar1;
        param_3 = plVar1 + 1;
        goto LAB__text__0066bf58;
      }
      param_3[1] = *plVar1;
      *plVar1 = (long)param_3;
      if (plVar1[1] != 0) goto LAB__text__0066bf4c;
      goto LAB__text__0066bf64;
    }
  }
  else {
    if (param_2 < (int)param_3[5]) goto LAB__text__0066beac;
    if ((int)param_3[5] < param_2) goto LAB__text__0066befc;
  }
LAB__text__0066bf60:
  plVar1 = param_3;
LAB__text__0066bf64:
  plVar2[1] = *plVar1;
  *plVar3 = plVar1[1];
  *plVar1 = local_30;
  plVar1[1] = local_38;
  return plVar1;
}


