/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004420d0; name: FUN_.text__004420d0
 */


undefined8 * FUN__text__004420d0(long param_1,char *param_2,char *param_3,long *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  
  cVar3 = *param_2;
  if (((cVar3 == -1) && (param_2[8] == -1)) && (*(long *)(param_2 + 0x10) == 0)) {
    cVar2 = *(char *)(param_1 + 0x10);
  }
  else {
    if ((param_4 != (long *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
      *param_4 = param_1 + 8;
      cVar3 = *param_2;
    }
    param_1 = FUN__text__00442310(param_1 + 0x18,cVar3,param_3);
    if (param_1 == 0) {
      return (undefined8 *)0x0;
    }
    cVar3 = param_2[8];
    cVar2 = *(char *)(param_1 + 0x10);
    if ((cVar3 != -1) || (*(long *)(param_2 + 0x10) != 0)) {
      if ((param_4 != (long *)0x0) && (cVar2 != '\0')) {
        *param_4 = param_1 + 8;
        cVar3 = param_2[8];
      }
      param_1 = FUN__text__00442630(param_1 + 0x18,cVar3,param_3);
      if (param_1 == 0) {
        return (undefined8 *)0x0;
      }
      lVar4 = *(long *)(param_2 + 0x10);
      cVar2 = *(char *)(param_1 + 0x10);
      if (lVar4 != 0) {
        if ((param_4 != (long *)0x0) && (cVar2 != '\0')) {
          *param_4 = param_1 + 8;
          lVar4 = *(long *)(param_2 + 0x10);
        }
        lVar4 = FUN__text__00442950(param_1 + 0x18,lVar4,param_3);
        puVar1 = (undefined8 *)0x0;
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 8);
        }
        return puVar1;
      }
    }
  }
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *param_3 = cVar2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return (undefined8 *)(param_1 + 8);
}


