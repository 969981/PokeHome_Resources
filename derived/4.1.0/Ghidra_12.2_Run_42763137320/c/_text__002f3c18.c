/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f3c18; name: FUN_.text__002f3c18
 */


void FUN__text__002f3c18(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    iVar1 = FUN__text__002fe9d0();
    if (iVar1 == 2) {
      FUN__text__002f3c70(param_1);
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  return;
}


