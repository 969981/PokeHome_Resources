/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309bc0; name: FUN_.text__00309bc0
 */


undefined4 FUN__text__00309bc0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN__text__00308f30();
  lVar3 = *(long *)(param_1 + 0x200);
  do {
    if (lVar3 == 0) {
      cVar1 = *(char *)(param_1 + 0x20c);
joined_r0x00309c50:
      if (cVar1 != '\0') {
        return 0;
      }
      if (*(char *)(param_1 + 0x20d) != '\0') {
        return 3;
      }
      uVar2 = 1;
      if (*(int *)(param_1 + 0x208) - 1U < 2) {
        uVar2 = 2;
      }
      return uVar2;
    }
    if ((*(byte *)(lVar3 + 0x25a) & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x50));
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200));
      lVar3 = *(long *)(param_1 + 0x200);
      *(undefined8 *)(param_1 + 0x200) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
      cVar1 = *(char *)(param_1 + 0x20c);
      goto joined_r0x00309c50;
    }
    nn::os::SleepThread(1000000);
    lVar3 = *(long *)(param_1 + 0x200);
  } while( true );
}


