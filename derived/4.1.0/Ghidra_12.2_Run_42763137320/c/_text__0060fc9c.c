/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060fc9c; name: FUN_.text__0060fc9c
 */


bool FUN__text__0060fc9c(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar2 = FUN__text__0060e7f8(param_1);
  cVar1 = *(char *)(lVar2 + 0xc);
  if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') {
    lVar2 = FUN__text__0060e7c4(param_1);
    if (lVar2 != 0) {
      FUN__text__0060e7c4(param_1);
      FUN__text__006305fc();
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return cVar1 != '\0';
}


