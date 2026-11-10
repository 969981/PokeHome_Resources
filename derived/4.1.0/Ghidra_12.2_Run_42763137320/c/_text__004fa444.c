/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fa444; name: FUN_.text__004fa444
 */


void FUN__text__004fa444(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN__text__004eb980();
    if (*(long *)(param_1 + 8) != 0) {
      FUN__text__004eb980();
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}


