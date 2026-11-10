/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4f34; name: FUN_.text__005b4f34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b4f34(long param_1)

{
  FUN__text__006ec5bc(param_1,_DAT_008a0448);
  FUN__text__005b509c(param_1 + 0x48);
  FUN__text__005b509c(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN__text__006ec4c8(param_1);
  return;
}


