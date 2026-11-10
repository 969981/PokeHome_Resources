/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a080c; name: FUN_.text__003a080c
 */


void FUN__text__003a080c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
      (**(code **)(param_1 + 0xb0))(param_1 + 0xd0,param_1);
      lVar1 = *(long *)(param_1 + 0x20);
      if (lVar1 == 0) {
        return;
      }
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


