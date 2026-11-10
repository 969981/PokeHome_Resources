/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4b7c; name: FUN_.text__003d4b7c
 */


void FUN__text__003d4b7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x138);
  lVar1 = *(long *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined1 *)(lVar2 + 0x28) = 0;
  return;
}


