/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00441958; name: FUN_.text__00441958
 */


undefined8 * FUN__text__00441958(long param_1,int *param_2,char *param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) {
LAB__text__00441a54:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *param_3 = *(char *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = 1;
    return (undefined8 *)(param_1 + 8);
  }
  if ((param_4 != (long *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
    *param_4 = param_1 + 8;
    iVar3 = *param_2;
  }
  param_1 = FUN__text__00441ba0(param_1 + 0x18,iVar3,param_3);
  if (param_1 != 0) {
    iVar3 = param_2[2];
    if (((iVar3 == 0) && ((char)param_2[4] == -1)) &&
       (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) goto LAB__text__00441a54;
    if ((param_4 != (long *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
      *param_4 = param_1 + 8;
      iVar3 = param_2[2];
    }
    lVar1 = FUN__text__00441ec0(param_1 + 0x18,iVar3,param_3);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN__text__004420d0(lVar1,param_2 + 4,param_3,param_4);
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}


