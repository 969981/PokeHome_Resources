/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9450; name: FUN_.text__005d9450
 */


void FUN__text__005d9450(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t __n;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *__dest;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x110));
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  plVar6 = *(long **)(param_1 + 0xb0);
  plVar1 = *(long **)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x170) = 1;
  do {
    if (plVar6 == plVar1) {
      plVar6 = *(long **)(param_1 + 0xe0);
      plVar1 = *(long **)(param_1 + 0xe8);
      if (plVar6 != plVar1) {
        plVar3 = *(long **)(param_1 + 0xb8);
        do {
          plVar5 = *(long **)(param_1 + 0xb0);
          __dest = plVar3;
          if (plVar5 != plVar3) {
            do {
              __dest = plVar5;
              if (*plVar5 == *plVar6) goto LAB__text__005d954c;
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar3);
            __dest = plVar3;
          }
LAB__text__005d954c:
          if (__dest != plVar3) {
            __n = (long)plVar3 - (long)(__dest + 1);
            if (__n != 0) {
              memmove(__dest,__dest + 1,__n);
            }
            plVar3 = (long *)((long)__dest + __n);
            *(long **)(param_1 + 0xb8) = plVar3;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar1);
        plVar6 = *(long **)(param_1 + 0xe0);
      }
      *(long **)(param_1 + 0xe8) = plVar6;
      nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x150));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x110));
      return;
    }
    puVar4 = *(undefined8 **)(param_1 + 0xe0);
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar4 != puVar2) {
      do {
        if ((undefined8 *)*puVar4 == (undefined8 *)*plVar6) goto LAB__text__005d9494;
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar2);
      puVar4 = puVar2;
    }
LAB__text__005d9494:
    if (puVar4 == puVar2) {
      (*(code *)**(undefined8 **)*plVar6)();
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


