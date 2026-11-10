/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b4050; name: FUN_.text__001b4050
 */


void FUN__text__001b4050(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x5b19) != '\0') {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    lVar1 = *(long *)(lVar2 + 0x250);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar2 + 0x158);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(uint *)(param_1 + 0x5b1c) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x001b40e4 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__001b40f0 +
                (ulong)*(ushort *)((ulong)*(uint *)(param_1 + 0x5b1c) * 2 + 0x725e3e) * 4))();
      return;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  return;
}


