/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8a84; name: FUN_.text__006a8a84
 */


long FUN__text__006a8a84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  lVar1 = FUN__text__006a0f04(0x88);
  if (lVar1 != 0) {
    FUN__text__006a8958(lVar1,uVar2);
  }
  return lVar1;
}


