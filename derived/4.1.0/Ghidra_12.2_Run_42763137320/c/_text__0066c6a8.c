/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c6a8; name: FUN_.text__0066c6a8
 */


undefined1  [16] FUN__text__0066c6a8(void)

{
  undefined1 auVar1 [16];
  timeval local_20;
  
  local_20.tv_sec = 0;
  local_20.tv_usec._0_4_ = 0;
  local_20.tv_usec._4_4_ = 0;
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  auVar1._8_4_ = (undefined4)local_20.tv_usec;
  auVar1._0_8_ = local_20.tv_sec;
  auVar1._12_4_ = 0;
  return auVar1;
}


