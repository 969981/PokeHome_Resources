/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9290; name: FUN_.text__005d9290
 */


void FUN__text__005d9290(long param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *__dest;
  long *plVar7;
  long local_48;
  
  pMVar1 = (MutexType *)(param_1 + 0x110);
  local_48 = param_2;
  uVar4 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  if ((uVar4 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0xe8);
    if (plVar7 == *(long **)(param_1 + 0xf0)) {
      FUN__text__005d95d0(param_1 + 0xe0,&local_48);
      return;
    }
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar7 = local_48;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_1 + 0xe8) = plVar7 + 1;
    return;
  }
  nn::os::LockMutex(pMVar1);
  plVar7 = *(long **)(param_1 + 0xb0);
  plVar5 = *(long **)(param_1 + 0xb8);
  if (plVar7 != plVar5) {
    do {
      if (*plVar7 == param_2) goto LAB__text__005d935c;
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar5);
    plVar7 = plVar5;
  }
LAB__text__005d935c:
  if (plVar7 != plVar5) {
    sVar3 = (long)plVar5 - (long)(plVar7 + 1);
    if (sVar3 != 0) {
      memmove(plVar7,plVar7 + 1,sVar3);
    }
    plVar5 = (long *)((long)plVar7 + sVar3);
    *(long **)(param_1 + 0xb8) = plVar5;
  }
  plVar7 = *(long **)(param_1 + 0xe0);
  plVar2 = *(long **)(param_1 + 0xe8);
  if (plVar7 != plVar2) {
    do {
      plVar6 = *(long **)(param_1 + 0xb0);
      __dest = plVar5;
      if (plVar6 != plVar5) {
        do {
          __dest = plVar6;
          if (*plVar6 == *plVar7) goto LAB__text__005d93dc;
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar5);
        __dest = plVar5;
      }
LAB__text__005d93dc:
      if (__dest != plVar5) {
        sVar3 = (long)plVar5 - (long)(__dest + 1);
        if (sVar3 != 0) {
          memmove(__dest,__dest + 1,sVar3);
        }
        plVar5 = (long *)((long)__dest + sVar3);
        *(long **)(param_1 + 0xb8) = plVar5;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
    plVar7 = *(long **)(param_1 + 0xe0);
  }
  *(long **)(param_1 + 0xe8) = plVar7;
  nn::os::UnlockMutex(pMVar1);
  return;
}


