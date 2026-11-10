/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306640; name: FUN_.text__00306640
 */


void FUN__text__00306640(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x90) == 2) {
    lVar1 = FUN__text__00321ac0();
    if (*(int *)(lVar1 + 0x9a20) == 1) {
      FUN__text__006347b0(*(undefined8 *)(param_1 + 0x58),0);
      return;
    }
  }
  FUN__text__00632698(*(undefined8 *)(param_1 + 0x58));
  return;
}


