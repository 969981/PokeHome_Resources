/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00216844; name: FUN_.text__00216844
 */


void FUN__text__00216844(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if ((*(long *)(param_1 + 0x60) != 0) && (lVar1 = FUN__text__00215f84(), lVar1 != 0)) {
    *(long *)(param_1 + 0x80) = lVar1;
    *(long *)(param_1 + 0x88) = lVar1 + 0xf80;
    *(long *)(param_1 + 0x90) = lVar1 + 0x4d80;
  }
  return;
}


