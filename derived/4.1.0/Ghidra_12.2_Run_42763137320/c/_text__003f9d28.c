/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f9d28; name: FUN_.text__003f9d28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f9d28(long *param_1)

{
  *param_1 = _DAT_008a4368 + 0x10;
  FUN__text__003fe3c0(param_1 + 0x55);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x51));
  FUN__text__003fdd20(param_1);
  return;
}


