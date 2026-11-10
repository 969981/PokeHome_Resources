/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce4c4; name: FUN_.text__002ce4c4
 */


void FUN__text__002ce4c4(undefined8 param_1,long param_2,long param_3)

{
  char *pcVar1;
  char *__dest;
  char acStack_b0 [128];
  
  __dest = acStack_b0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) + 0x10U &
                   0xfffffffffffffff0));
  pcVar1 = *(char **)(param_2 + 8);
  *__dest = '\0';
  pcVar1 = strcat(__dest,pcVar1);
  strcat(pcVar1,*(char **)(param_3 + 8));
  FUN__text__00109fd4(param_1,__dest);
  return;
}


