/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d5628; name: FUN_.text__003d5628
 */


void FUN__text__003d5628(long param_1)

{
  long lVar1;
  
  FUN__text__00168178(param_1 + 0x170,*(long *)(param_1 + 0x68) + 0x60);
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(lVar1 + 0x180);
  *(ulong *)(param_1 + 0x1b8) = *(ulong *)(lVar1 + 0x180) >> 1;
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  return;
}


