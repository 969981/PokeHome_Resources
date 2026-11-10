/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0d14; name: FUN_.text__001a0d14
 */


bool FUN__text__001a0d14(long param_1)

{
  int *piVar1;
  
  if ((*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) ||
     (piVar1 = (int *)**(undefined8 **)(param_1 + 0x18), piVar1 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return *piVar1 == 2;
}


