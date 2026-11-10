/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a1e0; name: FUN_.text__0019a1e0
 */


void FUN__text__0019a1e0(long *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN__text__0019b770(*param_1);
  if (param_2 < uVar1) {
    if (*(ulong *)(*(long *)(*param_1 + 0x60) + 0xf8) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x60) + 0xf0) + (ulong)param_2 * 0x1c + 0x14) =
         param_3;
  }
  return;
}


