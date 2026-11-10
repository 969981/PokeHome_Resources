/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a2328; name: FUN_.text__004a2328
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a2328(long *param_1)

{
  *param_1 = _DAT_008a46d8 + 0x10;
  FUN__text__004adf90(param_1 + 0x1f);
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    FUN__text__00400fc0(0);
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN__text__00400fc0(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xd));
  FUN__text__004ae384(param_1 + 1);
  return;
}


