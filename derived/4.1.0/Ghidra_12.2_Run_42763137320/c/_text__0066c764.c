/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c764; name: FUN_.text__0066c764
 */


long FUN__text__0066c764(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  
  sVar2 = strlen(param_2);
  plVar3 = *(long **)(*param_1 + 0x808);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN__text__0066c2d8(*plVar3,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar3 + sVar2) & 0xfe) == 0x3a)) break;
    plVar3 = (long *)plVar3[1];
  }
  return *plVar3;
}


