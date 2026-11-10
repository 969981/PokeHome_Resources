/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004501b0; name: FUN_.text__004501b0
 */


void FUN__text__004501b0(long *param_1)

{
  long lVar1;
  size_t __n;
  char *__dest;
  size_t sVar2;
  char *__s;
  long lVar3;
  long lVar4;
  
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *param_1 + lVar3;
      __s = *(char **)(lVar1 + 8);
      if ((__s != (char *)0x0) && (*(char *)(lVar1 + 0x18) == '\0')) {
        __n = strlen(__s);
        __dest = (char *)FUN__text__00400f80(5,__n + 1);
        *(char **)(lVar1 + 8) = __dest;
        if (__dest != (char *)0x0) {
          sVar2 = strlen(__s);
          if (sVar2 + 1 <= __n) {
            __n = sVar2 + 1;
          }
          strncpy(__dest,__s,__n);
          __dest[__n] = '\0';
          *(undefined1 *)(*param_1 + lVar3 + 0x18) = 1;
        }
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar4 < (int)param_1[1]);
  }
  return;
}


