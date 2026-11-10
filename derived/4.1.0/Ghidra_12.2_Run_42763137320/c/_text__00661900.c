/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661900; name: FUN_.text__00661900
 */


void FUN__text__00661900(long param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar3 = *(char **)(param_1 + 0x170);
  iVar1 = strncmp(pcVar3,(char *)0x70f1da,4);
  if (((iVar1 != 0) || (pcVar3 = strchr(pcVar3,0x20), pcVar3 == (char *)0x0)) ||
     (pcVar3 = pcVar3 + 1, *pcVar3 == '\0')) {
LAB__text__00661930:
    FUN__text__0066713c(param_1,0x71ea53,*(undefined4 *)(param_1 + 0x180));
    return;
  }
  cVar4 = '\r';
  pcVar2 = strchr(pcVar3,0xd);
  if (pcVar2 == (char *)0x0) {
    cVar4 = '\n';
    pcVar2 = strchr(pcVar3,10);
    if (pcVar2 == (char *)0x0) goto LAB__text__00661930;
  }
  *pcVar2 = '\0';
  FUN__text__0066713c(param_1,0x70f207,pcVar3);
  *pcVar2 = cVar4;
  return;
}


