/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c7b30; name: FUN_.text__001c7b30
 */


void FUN__text__001c7b30(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  puVar2 = (uint *)**(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *puVar2;
    if (uVar1 < 2) {
      FUN__text__001c7b68();
      return;
    }
    if (uVar1 == 2) {
      FUN__text__001c7d54();
      return;
    }
  }
  return;
}


