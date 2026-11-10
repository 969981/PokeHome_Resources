/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056e0c0; name: FUN_.text__0056e0c0
 */


void FUN__text__0056e0c0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  plVar2 = (long *)(param_1 + 0x20);
  if (*plVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = 0;
    lVar1 = *plVar2;
    do {
      lVar4 = lVar1;
      if (*(uint *)(lVar4 + 100) <= *(uint *)(param_2 + 100)) {
        if (((*(uint *)(param_2 + 100) != *(uint *)(lVar4 + 100)) ||
            (*(ulong *)(lVar4 + 0x68) <= *(ulong *)(param_2 + 0x68))) &&
           ((*(ulong *)(param_2 + 0x68) != *(ulong *)(lVar4 + 0x68) ||
            (*(uint *)(lVar4 + 0x70) <= *(uint *)(param_2 + 0x70))))) {
          *(long *)(param_2 + 8) = lVar4;
          if (lVar3 != 0) {
            plVar2 = (long *)(lVar3 + 8);
          }
          goto LAB__text__0056e174;
        }
      }
      lVar3 = lVar4;
      lVar1 = *(long *)(lVar4 + 8);
    } while (*(long *)(lVar4 + 8) != 0);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 8);
  }
  *plVar2 = param_2;
  plVar2 = (long *)(param_1 + 0x18);
LAB__text__0056e174:
  *plVar2 = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


