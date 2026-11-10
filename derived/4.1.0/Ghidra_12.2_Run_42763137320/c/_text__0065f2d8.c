/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f2d8; name: FUN_.text__0065f2d8
 */


void * FUN__text__0065f2d8(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  void *__dest;
  char *__s;
  ulong uVar5;
  
  while( true ) {
    cVar1 = *param_1;
    if ((cVar1 == '\0') || (cVar1 == ':')) break;
    param_1 = param_1 + 1;
  }
  __s = param_1;
  if (cVar1 != '\0') {
    __s = param_1 + 1;
  }
  uVar5 = (ulong)(cVar1 != '\0');
  if (*__s != '\0') {
    do {
      iVar2 = FUN__text__0065680c();
      __s = param_1 + uVar5;
      if (iVar2 == 0) goto LAB__text__0065f334;
      uVar5 = uVar5 + 1;
    } while (__s[1] != '\0');
    __s = param_1 + uVar5;
  }
LAB__text__0065f334:
  pcVar3 = strchr(__s,0xd);
  if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr(__s,10), pcVar3 == (char *)0x0)) {
    sVar4 = strlen(__s);
    pcVar3 = __s + sVar4;
  }
  while ((__s < pcVar3 && (iVar2 = FUN__text__0065680c(*pcVar3), iVar2 != 0))) {
    pcVar3 = pcVar3 + -1;
  }
  __dest = (void *)FUN__text__006783d4(pcVar3 + (2 - (long)__s));
  if (__dest != (void *)0x0) {
    memcpy(__dest,__s,(size_t)(pcVar3 + (1 - (long)__s)));
    *(char *)((long)__dest + (long)(pcVar3 + (1 - (long)__s))) = '\0';
  }
  return __dest;
}


