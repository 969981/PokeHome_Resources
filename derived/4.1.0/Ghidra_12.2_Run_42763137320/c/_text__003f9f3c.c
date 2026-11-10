/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f9f3c; name: FUN_.text__003f9f3c
 */


long * FUN__text__003f9f3c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x48))();
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)((long)plVar1 + 0x6b) = 1;
    (**(code **)(*plVar1 + 0x40))(plVar1,param_4);
    nn::os::LockMutex((MutexType *)(param_1 + 0x51));
    if (param_1[0x50] == 0) {
      param_1[0x50] = (long)plVar1;
      plVar1[2] = 0;
    }
    else {
      plVar1[2] = param_1[0x50];
      param_1[0x50] = (long)plVar1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x51));
  }
  return plVar1;
}


