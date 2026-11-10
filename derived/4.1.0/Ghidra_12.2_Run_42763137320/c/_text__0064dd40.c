/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064dd40; name: FUN_.text__0064dd40
 */


void FUN__text__0064dd40(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0xf0);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 1;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}


