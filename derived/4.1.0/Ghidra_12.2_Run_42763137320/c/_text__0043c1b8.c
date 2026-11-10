/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043c1b8; name: FUN_.text__0043c1b8
 */


undefined2 * FUN__text__0043c1b8(long param_1,char *param_2,char *param_3,long *param_4)

{
  long lVar1;
  undefined2 *puVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  
  cVar3 = *param_2;
  if (((cVar3 == -1) && (param_2[8] == -1)) && (*(long *)(param_2 + 0x10) == 0)) {
    if (*(char *)(param_1 + 6) == '\0') {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    *param_3 = *(char *)(param_1 + 6);
    *(undefined1 *)(param_1 + 6) = 1;
    return (undefined2 *)(param_1 + 4);
  }
  if ((param_4 != (long *)0x0) && (*(char *)(param_1 + 6) != '\0')) {
    *param_4 = param_1 + 4;
    cVar3 = *param_2;
  }
  lVar1 = FUN__text__0043c410(param_1 + 8,cVar3,param_3);
  puVar2 = (undefined2 *)0x0;
  if (lVar1 != 0) {
    cVar3 = param_2[8];
    cVar5 = *(char *)(lVar1 + 4);
    if ((cVar3 != -1) || (*(long *)(param_2 + 0x10) != 0)) {
      if ((param_4 != (long *)0x0) && (cVar5 != '\0')) {
        *param_4 = lVar1 + 2;
        cVar3 = param_2[8];
      }
      lVar1 = FUN__text__0043c730(lVar1 + 8,cVar3,param_3);
      if (lVar1 == 0) {
        return (undefined2 *)0x0;
      }
      lVar4 = *(long *)(param_2 + 0x10);
      cVar5 = *(char *)(lVar1 + 4);
      if (lVar4 != 0) {
        if ((param_4 != (long *)0x0) && (cVar5 != '\0')) {
          *param_4 = lVar1 + 2;
          lVar4 = *(long *)(param_2 + 0x10);
        }
        lVar1 = FUN__text__0043ca50(lVar1 + 8,lVar4,param_3);
        puVar2 = (undefined2 *)0x0;
        if (lVar1 != 0) {
          puVar2 = (undefined2 *)(lVar1 + 8);
        }
        return puVar2;
      }
    }
    puVar2 = (undefined2 *)(lVar1 + 2);
    if (cVar5 == '\0') {
      *puVar2 = 0;
    }
    *param_3 = cVar5;
    *(undefined1 *)(lVar1 + 4) = 1;
  }
  return puVar2;
}


