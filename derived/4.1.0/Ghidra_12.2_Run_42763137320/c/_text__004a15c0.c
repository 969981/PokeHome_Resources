/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a15c0; name: FUN_.text__004a15c0
 */


void FUN__text__004a15c0(long param_1,uint param_2,uint *param_3,ulong param_4)

{
  ulong uVar1;
  
  FUN__text__0042d2a0();
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = 0;
    if (param_2 != 0) {
      uVar1 = (ulong)param_2;
      do {
        uVar1 = uVar1 - 1;
        *(ulong *)(*(long *)(param_1 + 0x10) + 8) =
             1L << ((ulong)*param_3 & 0x3f) | *(ulong *)(*(long *)(param_1 + 0x10) + 8);
        param_3 = param_3 + 2;
      } while (uVar1 != 0);
    }
    if ((param_4 & 1) != 0) {
      FUN__text__0042d4a0(param_1);
      return;
    }
  }
  return;
}


