/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd06c; name: FUN_.text__005fd06c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fd06c(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*_DAT_008a0488 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar1 = FUN__text__005fd784();
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}


