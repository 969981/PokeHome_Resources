/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066f970; name: FUN_.text__0066f970
 */


char * FUN__text__0066f970(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  
  pcVar1 = strstr(param_1,(char *)0x71f664);
  pcVar2 = param_1;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1 + 2;
  }
  pcVar1 = strchr(pcVar2,0x3f);
  pcVar2 = strchr(pcVar2,0x2f);
  if (pcVar2 == (char *)0x0) {
    sVar3 = strlen(param_1);
    pcVar2 = param_1 + sVar3;
  }
  if (pcVar1 == (char *)0x0) {
    sVar3 = strlen(param_1);
    pcVar1 = param_1 + sVar3;
  }
  if (pcVar1 <= pcVar2) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


