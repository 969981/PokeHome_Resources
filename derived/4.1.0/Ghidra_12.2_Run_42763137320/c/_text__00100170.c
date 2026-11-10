/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100170; name: _fini
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _fini(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN__text__00100260(&__DT_FINI_ARRAY,0,DAT_008e1210);
  puVar1 = _DAT_0089f268;
  if (_DAT_0089f268 < _DAT_0089f270) {
    puVar2 = _DAT_0089f270;
    do {
      puVar2 = puVar2 + -1;
      (*(code *)*puVar2)();
    } while (puVar1 < puVar2);
  }
  return;
}


