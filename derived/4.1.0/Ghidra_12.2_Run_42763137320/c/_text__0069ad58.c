/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069ad58; name: FUN_.text__0069ad58
 */


void FUN__text__0069ad58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN__text__0069dfe0(param_1 + 0x80);
  FUN__text__006bffa0(param_1 + 0x90,param_2);
  FUN__text__006bbe90(param_1 + 0xa0,param_2);
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
      FUN__text__006ee718(*(long *)(lVar1 + 0x48),param_2);
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


