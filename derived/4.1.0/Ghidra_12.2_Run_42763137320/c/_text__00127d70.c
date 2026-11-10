/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127d70; name: FUN_.text__00127d70
 */


void FUN__text__00127d70(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  for (puVar2 = *(undefined8 **)(param_1 + 0x78); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN__text__001285f4(*puVar2);
  }
  return;
}


