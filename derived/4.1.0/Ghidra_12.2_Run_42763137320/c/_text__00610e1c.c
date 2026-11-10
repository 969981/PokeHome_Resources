/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00610e1c; name: FUN_.text__00610e1c
 */


undefined1 FUN__text__00610e1c(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar1 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    lVar1 = FUN__text__0060e7f8(param_1);
    uVar2 = *(undefined1 *)(lVar1 + 0x93);
    if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0')
    goto LAB__text__00610e9c;
  }
  else {
    uVar2 = DAT_00c15e45;
    if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') {
LAB__text__00610e9c:
      lVar1 = FUN__text__0060e7c4(param_1);
      if (lVar1 != 0) {
        FUN__text__0060e7c4(param_1);
        FUN__text__006305fc();
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      return uVar2;
    }
  }
  return uVar2;
}


