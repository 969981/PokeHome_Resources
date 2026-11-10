/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005928c0; name: FUN_.text__005928c0
 */


void FUN__text__005928c0(uint *param_1)

{
  exp2(ABS(*(double *)(param_1 + 0x10)) * 0.16609640474436813);
  tan(*(double *)(param_1 + 0xc) * 3.141592653589793);
  if (*param_1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00592934 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00592940 + (ulong)*(byte *)((ulong)*param_1 + 0x757bd7) * 4))();
    return;
  }
  return;
}


