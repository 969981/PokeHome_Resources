/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e591c; name: FUN_.text__005e591c
 */


undefined8 FUN__text__005e591c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar1 = FUN__text__005e8950();
  if ((uVar1 & 1) == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
    puVar2 = *(undefined8 **)(param_1 + 0x378);
    if (puVar2 == *(undefined8 **)(param_1 + 0x380)) {
      FUN__text__005e62c0(param_1 + 0x370,&local_28);
    }
    else {
      uVar1 = tpidr_el0;
      uVar1 = uVar1 & 0xffffffffffffe000;
      if (*(long *)(uVar1 + 0x98) == 0x10) goto LAB__text__005e5a70;
      *(undefined8 *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x388)
      ;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *puVar2 = local_28;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      *(undefined8 **)(param_1 + 0x378) = puVar2 + 1;
    }
    FUN__text__005e1f8c(*(undefined8 *)(param_1 + 0x3c8));
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3c0));
  }
  else {
    if (*(long *)(param_1 + 0x3f0) == 0) {
      *(undefined8 *)(param_1 + 0x3f0) = param_2;
      return 0;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
    puVar2 = *(undefined8 **)(param_1 + 0x378);
    if (puVar2 == *(undefined8 **)(param_1 + 0x380)) {
      FUN__text__005e62c0(param_1 + 0x370,&local_28);
    }
    else {
      uVar1 = tpidr_el0;
      uVar1 = uVar1 & 0xffffffffffffe000;
      if (*(long *)(uVar1 + 0x98) == 0x10) {
LAB__text__005e5a70:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x388)
      ;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *puVar2 = local_28;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      *(undefined8 **)(param_1 + 0x378) = puVar2 + 1;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
  return 1;
}


