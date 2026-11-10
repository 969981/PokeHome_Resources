/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00660220; name: FUN_.text__00660220
 */


ulong FUN__text__00660220(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *__s;
  
  sVar4 = strlen(param_2);
  uVar5 = FUN__text__0066c2d8(param_1,param_2,sVar4);
  if ((int)uVar5 != 0) {
    __s = (char *)(param_1 + sVar4);
    cVar1 = *__s;
    while ((cVar1 != '\0' && (iVar3 = FUN__text__0065680c(), iVar3 != 0))) {
      __s = __s + 1;
      cVar1 = *__s;
    }
    pcVar6 = strchr(__s,0xd);
    if ((pcVar6 == (char *)0x0) && (pcVar6 = strchr(__s,10), pcVar6 == (char *)0x0)) {
      sVar4 = strlen(__s);
      pcVar6 = __s + sVar4;
    }
    pcVar7 = (char *)strlen(param_3);
    if (pcVar6 + -(long)__s < pcVar7) {
      uVar5 = 0;
    }
    else {
      pcVar6 = pcVar6 + ~(ulong)__s;
      do {
        iVar3 = FUN__text__0066c2d8(__s,param_3,pcVar7);
        if (iVar3 != 0) {
          return (ulong)(iVar3 != 0);
        }
        __s = __s + 1;
        bVar2 = pcVar7 <= pcVar6;
        pcVar6 = pcVar6 + -1;
        uVar5 = 0;
      } while (bVar2);
    }
  }
  return uVar5;
}


