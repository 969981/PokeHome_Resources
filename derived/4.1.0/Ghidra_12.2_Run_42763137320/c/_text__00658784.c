/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00658784; name: FUN_.text__00658784
 */


char * FUN__text__00658784(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN__text__0066c2d8(*param_1);
  if ((iVar1 == 0) || (pcVar2 = (char *)(*param_1 + param_3), *pcVar2 != ':')) {
    pcVar2 = (char *)0x0;
  }
  else {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == ' ');
  }
  return pcVar2;
}


