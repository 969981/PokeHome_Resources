/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f248; name: FUN_.text__0065f248
 */


long FUN__text__0065f248(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  
  sVar2 = strlen(param_2);
  lVar3 = *param_1;
  if (((*(byte *)((long)param_1 + 0x3fc) >> 4 & 1) == 0) ||
     ((*(byte *)(lVar3 + 0xf40) >> 4 & 1) == 0)) {
    plVar4 = (long *)(lVar3 + 0x808);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x810);
  }
  plVar4 = (long *)*plVar4;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN__text__0066c2d8(*plVar4,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar4 + sVar2) & 0xfe) == 0x3a)) break;
    plVar4 = (long *)plVar4[1];
  }
  return *plVar4;
}


