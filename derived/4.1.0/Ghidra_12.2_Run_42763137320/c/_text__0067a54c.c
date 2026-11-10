/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a54c; name: FUN_.text__0067a54c
 */


undefined8 FUN__text__0067a54c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  lVar1 = param_2 + 0x890;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x90) == '\0')) && (lVar2 != *(long *)(param_2 + 0x150)))
  {
    FUN__text__00683bec(lVar2,lVar1);
    FUN__text__006809e4(lVar1,lVar2);
  }
  FUN__text__00685b28(param_1);
  FUN__text__006809e4(lVar1,param_1);
  return 0;
}


