/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024428c; name: FUN_.text__0024428c
 */


undefined8 FUN__text__0024428c(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x9e0) == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x9dc) == '\0') {
    *(undefined1 *)(param_1 + 0x9dc) = 1;
    FUN__text__003d0e20();
    if (*(long *)(param_1 + 0xa10) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0x9e8) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa18) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0x9f0) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa20) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0x9f8) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa28) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa00) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa30) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa08) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0xa38) != 0) {
      FUN__text__003d0e20();
    }
    if (*(long *)(param_1 + 0x9e0) == 0) goto LAB__text__00244350;
  }
  iVar1 = FUN__text__003d0e70();
  if (iVar1 != 1) {
    return 0;
  }
LAB__text__00244350:
  if ((((((*(long *)(param_1 + 0xa10) == 0) || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)) &&
        ((*(long *)(param_1 + 0x9e8) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)))) &&
       ((*(long *)(param_1 + 0xa18) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)))) &&
      (((*(long *)(param_1 + 0x9f0) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)) &&
       ((((*(long *)(param_1 + 0xa20) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)) &&
         ((*(long *)(param_1 + 0x9f8) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)))) &&
        ((*(long *)(param_1 + 0xa28) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)))))))) &&
     (((*(long *)(param_1 + 0xa00) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)) &&
      ((((*(long *)(param_1 + 0xa30) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)) &&
        ((*(long *)(param_1 + 0xa08) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)))) &&
       ((*(long *)(param_1 + 0xa38) == 0 || (iVar1 = FUN__text__003d0e70(), iVar1 == 1)))))))) {
    return 1;
  }
  return 0;
}


