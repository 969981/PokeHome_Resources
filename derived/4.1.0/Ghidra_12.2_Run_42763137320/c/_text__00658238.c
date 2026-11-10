/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00658238; name: FUN_.text__00658238
 */


undefined8 FUN__text__00658238(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    lVar4 = 0;
    do {
      __s = *(char **)(lVar4 + 0x899d30);
      sVar3 = strlen(__s);
      if ((sVar3 <= sVar2) &&
         (iVar1 = FUN__text__0066c234(param_1 + (sVar2 - sVar3),__s), iVar1 != 0)) {
        return *(undefined8 *)(lVar4 + 0x899d38);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0xa0);
  }
  return 0;
}


