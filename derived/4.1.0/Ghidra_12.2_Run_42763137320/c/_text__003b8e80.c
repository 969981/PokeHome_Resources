/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8e80; name: FUN_.text__003b8e80
 */


void FUN__text__003b8e80(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((long *)*param_1)[1];
  for (lVar1 = *(long *)*param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    *(undefined4 *)(lVar1 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar1 + 8) = 1;
  }
  return;
}


