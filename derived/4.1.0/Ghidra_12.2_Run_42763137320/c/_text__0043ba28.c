/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ba28; name: FUN_.text__0043ba28
 */


undefined2 * FUN__text__0043ba28(long param_1,int *param_2,char *param_3,long *param_4)

{
  long lVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 10) == '\0') {
      *(undefined2 *)(param_1 + 8) = 0;
    }
    *param_3 = *(char *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = 1;
    return (undefined2 *)(param_1 + 8);
  }
  if ((param_4 != (long *)0x0) && (*(char *)(param_1 + 10) != '\0')) {
    *param_4 = param_1 + 8;
    iVar3 = *param_2;
  }
  lVar1 = FUN__text__0043bc90(param_1 + 0x10,iVar3,param_3);
  if (lVar1 != 0) {
    iVar3 = param_2[2];
    if ((((iVar3 == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) &&
       (*(long *)(param_2 + 8) == 0)) {
      if (*(char *)(lVar1 + 6) == '\0') {
        *(undefined2 *)(lVar1 + 4) = 0;
      }
      *param_3 = *(char *)(lVar1 + 6);
      *(undefined1 *)(lVar1 + 6) = 1;
      return (undefined2 *)(lVar1 + 4);
    }
    if ((param_4 != (long *)0x0) && (*(char *)(lVar1 + 6) != '\0')) {
      *param_4 = lVar1 + 4;
      iVar3 = param_2[2];
    }
    lVar1 = FUN__text__0043bfb0(lVar1 + 8,iVar3,param_3);
    if (lVar1 != 0) {
      puVar2 = (undefined2 *)FUN__text__0043c1b8(lVar1,param_2 + 4,param_3,param_4);
      return puVar2;
    }
  }
  return (undefined2 *)0x0;
}


