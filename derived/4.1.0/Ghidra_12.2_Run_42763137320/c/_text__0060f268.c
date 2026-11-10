/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060f268; name: FUN_.text__0060f268
 */


void FUN__text__0060f268(long param_1,void *param_2)

{
  char cVar1;
  void *__src;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x11);
  if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0x11) = 0, *(char *)(param_1 + 0x10) == '\0')) {
    lVar2 = FUN__text__0060e7c4(param_1);
    if (lVar2 != 0) {
      FUN__text__0060e7c4(param_1);
      FUN__text__006305fc();
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (param_2 != (void *)0x0) {
    __src = (void *)FUN__text__0060e7c4(param_1);
    memcpy(param_2,__src,0x296);
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN__text__0060e7c4(param_1);
      FUN__text__006306b4();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  return;
}


