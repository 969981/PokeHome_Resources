/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1b00; name: FUN_.text__006c1b00
 */


int FUN__text__006c1b00(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = strlen(param_1);
  if ((int)sVar3 < 1) {
    iVar2 = 0;
  }
  else {
    if ((sVar3 & 0xffffffff) == 1) {
      lVar4 = 0;
      iVar2 = 0;
    }
    else {
      lVar4 = 0;
      iVar2 = 0;
      do {
        pcVar1 = param_1 + lVar4;
        lVar4 = lVar4 + 2;
        if (*pcVar1 == '%') {
          iVar2 = iVar2 + 1;
        }
        if (pcVar1[1] == '%') {
          iVar2 = iVar2 + 1;
        }
      } while ((sVar3 & 0xffffffff) - (sVar3 & 1) != lVar4);
    }
    if ((sVar3 & 1) != 0) {
      if (param_1[lVar4] == '%') {
        iVar2 = iVar2 + 1;
      }
      return iVar2;
    }
  }
  return iVar2;
}


