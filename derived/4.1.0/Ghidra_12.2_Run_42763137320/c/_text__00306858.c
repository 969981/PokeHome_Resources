/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306858; name: FUN_.text__00306858
 */


undefined1 FUN__text__00306858(long param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 2) {
    uVar1 = FUN__text__00634754(*(undefined8 *)(param_1 + 0x58));
    return uVar1;
  }
  return 0;
}


