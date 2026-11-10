/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004319c0; name: FUN_.text__004319c0
 */


long * FUN__text__004319c0(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  lVar2 = param_1 + 0x88;
  if (param_3 != 1) {
    lVar2 = param_1 + 0x98;
  }
  plVar1 = (long *)(lVar2 + 8);
  lVar3 = 0x88;
  if (param_3 != 1) {
    lVar3 = 0x98;
  }
  plVar4 = plVar1;
  do {
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN__text__00400f80(2,0x30);
      if (plVar4 != (long *)0x0) {
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        *(int *)(plVar4 + 3) = param_2;
        plVar4[4] = 0;
        plVar4[5] = 0;
        if (*plVar1 == 0) {
          *(long **)(lVar2 + 8) = plVar4;
          *(long **)(param_1 + lVar3) = plVar4;
          *plVar4 = 0;
        }
        else {
          *plVar4 = *plVar1;
          *plVar1 = (long)plVar4;
        }
      }
      break;
    }
  } while ((int)plVar4[3] != param_2);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return plVar4;
}


