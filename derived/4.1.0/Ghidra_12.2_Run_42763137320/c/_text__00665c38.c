/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665c38; name: FUN_.text__00665c38
 */


undefined8 FUN__text__00665c38(undefined8 *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN__text__00656c1c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN__text__00656b14(param_2,&LAB__text__00665cec);
    __s = (char *)*param_1;
    while (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      lVar2 = FUN__text__006783d4(sVar1 + 0x20);
      if (lVar2 == 0) {
        FUN__text__00656c1c(param_2,0);
        return 3;
      }
      strcpy((char *)(lVar2 + 0x18),(char *)*param_1);
      FUN__text__00656b20(param_2,*(undefined8 *)(param_2 + 8),lVar2,lVar2);
      __s = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


