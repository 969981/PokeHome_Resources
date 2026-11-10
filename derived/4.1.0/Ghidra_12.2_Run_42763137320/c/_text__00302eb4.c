/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00302eb4; name: FUN_.text__00302eb4
 */


undefined8 * FUN__text__00302eb4(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 < 0x1e) && (param_2 < *(uint *)(param_1 + 0x700fdc))) {
    return (undefined8 *)(param_1 + (ulong)param_2 * 0x5fa0 + (ulong)param_3 * 0x330 + 0x354);
  }
  if ((DAT_008e5590 & 1) != 0) {
    return &DAT_008e5598;
  }
  iVar1 = __cxa_guard_acquire(&DAT_008e5590);
  if (iVar1 == 0) {
    return &DAT_008e5598;
  }
  DAT_008e55c8 = 0;
  DAT_008e55b8 = 0;
  DAT_008e55c0 = 0;
  DAT_008e55a0 = 0;
  DAT_008e55a8 = 0;
  DAT_008e55b0 = 0;
  DAT_008e5598 = 0;
  __cxa_guard_release();
  return &DAT_008e5598;
}


