/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068596c; name: FUN_.text__0068596c
 */


void FUN__text__0068596c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN__text__0068588c(param_1);
    return;
  }
  if (lVar2 == param_1[2] + -1) {
    param_1[2] = lVar2;
    return;
  }
  *(undefined8 *)(*param_1 + lVar2 * 8) = *(undefined8 *)(*param_1 + (param_1[2] + -1) * 8);
  **(long **)(*param_1 + *param_2 * 8) = *param_2;
  param_1[2] = param_1[2] + -1;
  iVar1 = (*(code *)param_1[4])(param_2,*(undefined8 *)(*param_1 + *param_2 * 8));
  if (iVar1 == 0) {
    FUN__text__006857f8(param_1,*param_2);
    return;
  }
  FUN__text__006858c8(param_1);
  return;
}


