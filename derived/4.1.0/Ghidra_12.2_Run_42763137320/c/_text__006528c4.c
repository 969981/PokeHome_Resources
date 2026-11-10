/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006528c4; name: FUN_.text__006528c4
 */


char * FUN__text__006528c4(void)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  
  pcVar1 = (char *)FUN__text__00678404();
  if (pcVar1 != (char *)0x0) {
    __n = strlen(pcVar1);
    if (*pcVar1 == '\"') {
      memmove(pcVar1,pcVar1 + 1,__n);
      __n = __n - 1;
    }
    if (__n == 0) {
      if (*pcVar1 != '/') goto LAB__text__00652968;
    }
    else {
      sVar2 = __n - 1;
      if (pcVar1[sVar2] == '\"') {
        pcVar1[sVar2] = '\0';
        __n = sVar2;
      }
      if (*pcVar1 != '/') {
LAB__text__00652968:
        FUN__text__006783e4(pcVar1);
        pcVar1 = (char *)FUN__text__00678404(0x70eff8);
        return pcVar1;
      }
      if ((__n != 0) && (pcVar1[__n - 1] == '/')) {
        pcVar1[__n - 1] = '\0';
      }
    }
  }
  return pcVar1;
}


