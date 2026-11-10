/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686404; name: FUN_.text__00686404
 */


long FUN__text__00686404(long param_1)

{
  long lVar1;
  long lVar2;
  
  while ((*(long *)(param_1 + 0xa8) == 0 || ((*(byte *)(param_1 + 0xe4) & 0xc) != 0))) {
    lVar1 = FUN__text__00685870(param_1 + 0x18);
    param_1 = lVar1 + -0x10;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return *(long *)(param_1 + 0xa8);
  }
  lVar2 = param_1;
  do {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar2 + 0x58);
    lVar2 = *(long *)(lVar2 + 0x70);
    lVar1 = *(long *)(lVar2 + 0x70);
  } while (lVar1 != 0);
  return *(long *)(param_1 + 0xa8);
}


