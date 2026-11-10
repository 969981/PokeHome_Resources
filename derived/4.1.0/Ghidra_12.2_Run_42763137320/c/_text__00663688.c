/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663688; name: FUN_.text__00663688
 */


undefined8 FUN__text__00663688(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN__text__0067fd24(param_1,*(undefined4 *)(param_2 + 8));
  if ((((lVar1 != 0) && (*(char *)(param_2 + 0xc) == '\x01')) &&
      (lVar1 = *(long *)(lVar1 + 0x1e8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x21c) != '\0' && (*(long *)(lVar1 + 0x230) == 0)))) {
    lVar2 = FUN__text__0065fd58();
    *(long *)(lVar1 + 0x230) = lVar2;
    if (lVar2 == 0) {
      return 0xfffffdf7;
    }
  }
  return 0;
}


