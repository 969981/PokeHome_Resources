/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cd394; name: FUN_.text__003cd394
 */


void FUN__text__003cd394(undefined8 param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *__s;
  char *__dest;
  char acStack_c0 [128];
  
  sVar1 = strlen(param_2);
  __s = (char *)*param_3;
  sVar2 = strlen(__s);
  sVar3 = strlen(param_4);
  __dest = acStack_c0 + (0x80 - (sVar1 + sVar3 + sVar2 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  pcVar4 = strcat(__dest,param_2);
  pcVar4 = strcat(pcVar4,__s);
  strcat(pcVar4,param_4);
  FUN__text__00109fd4(param_1,__dest);
  return;
}


