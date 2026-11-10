/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019cc24; name: FUN_.text__0019cc24
 */


bool FUN__text__0019cc24(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long local_28;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x458));
  cVar1 = *(char *)(param_1 + 0x3ec);
  cVar2 = *(char *)(param_1 + 0x454);
  if (cVar1 == '\0' && cVar2 == '\0') {
    if (*param_2 != 0) {
      local_28 = *(long *)(param_1 + 0x378);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      }
      FUN__text__00197440(&local_28,param_2);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    if (*param_3 != 0) {
      local_28 = *(long *)(param_1 + 0x380);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      }
      FUN__text__00197440(&local_28,param_3);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x458));
  return cVar1 == '\0' && cVar2 == '\0';
}


