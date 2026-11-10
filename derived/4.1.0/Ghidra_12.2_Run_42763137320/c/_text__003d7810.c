/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7810; name: FUN_.text__003d7810
 */


void FUN__text__003d7810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN__text__003da760();
  *puVar1 = 0x884ea8;
  if (puVar1[1] != 0) {
    FUN__text__003d7520(puVar1);
    if ((void *)puVar1[1] != (void *)0x0) {
      operator_delete((void *)puVar1[1]);
    }
  }
  operator_delete(puVar1);
  return;
}


