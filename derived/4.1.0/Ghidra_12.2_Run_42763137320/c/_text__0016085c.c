/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016085c; name: FUN_.text__0016085c
 */


void FUN__text__0016085c(long param_1,int param_2,int param_3)

{
  if (param_3 - 2U < 9) {
    FUN__text__001625ac(*(undefined8 *)
                         (param_1 + *(long *)((long)(int)(param_3 - 2U) * 8 + 0x725258) * 0x20 +
                          (long)param_2 * 8 + 0x1c0));
    return;
  }
  FUN__text__001625ac(*(undefined8 *)(param_1 + (long)param_2 * 8 + 0x1c0));
  return;
}


