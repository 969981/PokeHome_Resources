/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024ee80; name: FUN_.text__0024ee80
 */


void FUN__text__0024ee80(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  long local_38;
  
  lVar1 = *(long *)(param_2 + 0x60);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_38 = *param_3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__0019b970(lVar1,&local_38,param_4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  lVar1 = *param_3;
  *param_3 = 0;
  *param_1 = lVar1;
  return;
}


