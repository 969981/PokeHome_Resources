/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00658688; name: FUN_.text__00658688
 */


long FUN__text__00658688(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_2);
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN__text__00658784(param_1,param_2,sVar1);
    if (lVar2 != 0) break;
    param_1 = *(long *)(param_1 + 8);
  }
  return lVar2;
}


