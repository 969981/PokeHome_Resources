/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4780; name: FUN_.text__006b4780
 */


long FUN__text__006b4780(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN__text__0069a120(param_1 + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == param_1 + 0x20) {
      return 0;
    }
    do {
      lVar2 = (**(code **)(*(long *)(lVar3 + -8) + 0x100))((long *)(lVar3 + -8),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_1 + 0x20);
    param_1 = 0;
  }
  return param_1;
}


