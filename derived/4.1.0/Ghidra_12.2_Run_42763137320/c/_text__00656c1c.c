/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656c1c; name: FUN_.text__00656c1c
 */


void FUN__text__00656c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    while (lVar1 != 0) {
      FUN__text__00656b90(param_1,*(undefined8 *)(param_1 + 8),param_2);
      lVar1 = *(long *)(param_1 + 0x18);
    }
  }
  return;
}


