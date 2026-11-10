/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309640; name: FUN_.text__00309640
 */


undefined8 FUN__text__00309640(long param_1)

{
  uint uVar1;
  long lVar2;
  
  FUN__text__00309460();
  lVar2 = *(long *)(param_1 + 0x200);
  do {
    if (lVar2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x210);
joined_r0x003096f0:
      if (uVar1 == 0) {
        return 0;
      }
      if (((uVar1 & 0x1ff) == 2) && ((uVar1 >> 9 & 0x1ffe) - 0x1e < 0x10)) {
        return 1;
      }
      if ((uVar1 & 0x3fffff) != 0xe02) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      return 2;
    }
    if ((*(byte *)(lVar2 + 0x25a) & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x50));
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200));
      lVar2 = *(long *)(param_1 + 0x200);
      *(undefined8 *)(param_1 + 0x200) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
      uVar1 = *(uint *)(param_1 + 0x210);
      goto joined_r0x003096f0;
    }
    nn::os::SleepThread(1000000);
    lVar2 = *(long *)(param_1 + 0x200);
  } while( true );
}


