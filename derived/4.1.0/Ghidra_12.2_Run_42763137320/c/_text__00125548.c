/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00125548; name: FUN_.text__00125548
 */


void FUN__text__00125548(long param_1,long param_2,undefined8 param_3)

{
  if ((param_2 == 0) || (*(long *)(param_1 + 0x90) != 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  *(long *)(param_1 + 0x90) = param_2;
  FUN__text__0012fde8(param_2,*(undefined8 *)(param_1 + 0x88));
                    /* WARNING: Could not emulate address calculation at 0x00125584 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x10))(*(long **)(param_1 + 0x90),param_3);
  return;
}


