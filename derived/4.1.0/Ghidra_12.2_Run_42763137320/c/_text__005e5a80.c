/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e5a80; name: FUN_.text__005e5a80
 */


long FUN__text__005e5a80(long param_1,long param_2)

{
  size_t __n;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
  plVar2 = *(long **)(param_1 + 0x370);
  plVar1 = *(long **)(param_1 + 0x378);
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
    if (*(int *)(param_2 + 0xc) == 0) {
      lVar4 = *plVar2;
LAB__text__005e5af0:
      __n = (long)plVar1 - (long)(plVar3 + 1);
      if (__n != 0) {
        memmove(plVar3,plVar3 + 1,__n);
      }
      *(size_t *)(param_1 + 0x378) = (long)plVar3 + __n;
      goto LAB__text__005e5b10;
    }
    do {
      lVar4 = *plVar2;
      if ((*(byte *)(lVar4 + 0x130) >> 1 & 1) == 0) goto LAB__text__005e5af0;
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (plVar2 != plVar1);
  }
  lVar4 = 0;
LAB__text__005e5b10:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
  return lVar4;
}


