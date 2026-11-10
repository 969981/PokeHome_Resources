/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010a50c; name: FUN_.text__0010a50c
 */


void FUN__text__0010a50c(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  char acStack_b0 [128];
  
  pcVar3 = (char *)*param_2;
  sVar1 = strlen(pcVar3);
  sVar2 = strlen(param_3);
  __dest = acStack_b0 + (0x80 - (sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  pcVar3 = strcat(__dest,pcVar3);
  strcat(pcVar3,param_3);
  FUN__text__00109fd4(param_1,__dest);
  return;
}


