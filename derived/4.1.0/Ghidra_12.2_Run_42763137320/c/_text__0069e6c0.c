/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e6c0; name: FUN_.text__0069e6c0
 */


long FUN__text__0069e6c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    if (lVar2 == param_1) {
      return 0;
    }
    uVar1 = FUN__text__0069e730(*(undefined8 *)(lVar2 + 0x20),param_2);
  } while ((uVar1 & 1) == 0);
  return lVar2 + -8;
}


