/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0844; name: FUN_.text__001a0844
 */


void FUN__text__001a0844(long param_1)

{
  FUN__text__001ca664(*(undefined8 *)(param_1 + 0x68),1);
  FUN__text__001ca664(*(undefined8 *)(param_1 + 0x88),1);
  FUN__text__001ca664(*(undefined8 *)(param_1 + 0xa8),1);
  FUN__text__001ca664(*(undefined8 *)(param_1 + 200),1);
  FUN__text__001a45b0(*(undefined8 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x1e8) == 5) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  return;
}


