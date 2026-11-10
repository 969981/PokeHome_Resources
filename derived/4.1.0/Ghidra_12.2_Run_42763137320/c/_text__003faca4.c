/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003faca4; name: FUN_.text__003faca4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003faca4(long *param_1)

{
  *param_1 = _DAT_008a4370 + 0x10;
  if (*(char *)((long)param_1 + 0x69) != '\0') {
    (**(code **)(**(long **)(param_1[10] + 0x610) + 0x10))
              (*(long **)(param_1[10] + 0x610),param_1[4]);
  }
  if (param_1[3] != 0) {
    FUN__text__003f5cac();
    param_1[3] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN__text__00400fc0(7);
  }
  if (param_1[4] != 0) {
    FUN__text__00400fc0(7);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  FUN__text__003fdc30(param_1);
  return;
}


