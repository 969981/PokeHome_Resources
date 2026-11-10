/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010d51c; name: FUN_.text__0010d51c
 */


void FUN__text__0010d51c(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__dest;
  char *__dest_00;
  char acStack_b0 [128];
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  __dest_00 = acStack_b0 + (0x80 - (sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0));
  *__dest_00 = '\0';
  __dest = strcat(__dest_00,param_2);
  strcat(__dest,param_3);
  FUN__text__00109fd4(param_1,__dest_00);
  return;
}


