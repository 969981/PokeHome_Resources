/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a2674; name: FUN_.text__002a2674
 */


void FUN__text__002a2674(long param_1,int param_2,ushort param_3,uint param_4,uint param_5)

{
  if (param_2 - 0x182U < 0x6c) {
                    /* WARNING: Could not emulate address calculation at 0x002a268c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__002a2698 + (ulong)*(byte *)((ulong)(param_2 - 0x182U) + 0x7328a8) * 4))()
    ;
    return;
  }
  if (param_2 == 0x15f) {
    if (param_3 < 4) {
      param_1 = param_1 + (ulong)param_3 * 4;
      if ((param_4 & 1) == 0) {
        *(uint *)(param_1 + 0x27b8) = param_5 & 1;
        return;
      }
      *(uint *)(param_1 + 0x27c8) = param_5 & 1;
      return;
    }
  }
  else if ((param_2 == 0xc9) && (param_3 < 0x1c)) {
    param_1 = param_1 + (ulong)param_3 * 4;
    if ((param_4 & 1) == 0) {
      *(uint *)(param_1 + 0x26d8) = param_5 & 1;
      return;
    }
    *(uint *)(param_1 + 0x2748) = param_5 & 1;
    return;
  }
  return;
}


