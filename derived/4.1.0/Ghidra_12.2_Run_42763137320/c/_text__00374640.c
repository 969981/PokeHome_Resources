/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00374640; name: FUN_.text__00374640
 */


void FUN__text__00374640(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    iVar1 = FUN__text__0037a850();
    if (iVar1 == 2) {
      FUN__text__00374690(param_1);
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  return;
}


