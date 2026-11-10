/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a4250; name: FUN_.text__002a4250
 */


undefined1  [16] FUN__text__002a4250(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  local_20 = 0;
  uStack_18 = 0;
  nn::crypto::detail::Md5Impl::GetHash((void *)(param_1 + 0x10),(ulong)&local_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}


