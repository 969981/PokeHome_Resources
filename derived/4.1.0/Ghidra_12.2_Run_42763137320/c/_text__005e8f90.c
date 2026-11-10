/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8f90; name: FUN_.text__005e8f90
 */


void FUN__text__005e8f90(TlsSlot *param_1,_func_void_ulong *param_2)

{
  undefined4 *puVar1;
  int local_14;
  
  local_14 = nn::os::AllocateTlsSlot(param_1,param_2);
  if (local_14 == 0) {
    return;
  }
  puVar1 = (undefined4 *)nn::diag::detail::AbortImpl((Result *)&local_14);
  nn::os::FreeTlsSlot(*puVar1);
  return;
}


