/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067847c; name: FUN_.text__0067847c
 */


void FUN__text__0067847c(long param_1)

{
  if (DAT_00c5f818 == (code *)0x0) {
    nndetailDiagAbortNoMessageImpl();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00678490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00c5f818)(*(undefined8 *)(param_1 + -8));
  return;
}


