/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d2f54; name: FUN_.text__003d2f54
 */


undefined8 FUN__text__003d2f54(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_1 + 0x68);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x170) == '\0')) {
    return 0;
  }
  FUN__text__00155da4(auStack_30,*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x180));
  FUN__text__00155358(param_1 + 0x170,auStack_30);
  return 1;
}


