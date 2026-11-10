/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656ddc; name: FUN_.text__00656ddc
 */


void FUN__text__00656ddc(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN__text__00656e2c();
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    FUN__text__00656d18(lVar1);
    FUN__text__006783e4(lVar1);
  }
  FUN__text__006783e4(param_1);
  return;
}


