/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff9c0; name: FUN_.text__003ff9c0
 */


void FUN__text__003ff9c0(long param_1,long *param_2,ulong param_3,char *param_4)

{
  MutexType *pMVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *local_60;
  undefined8 auStack_58 [2];
  long local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  pMVar1 = (MutexType *)(lVar4 + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (((lVar3 != 0) && (*(long *)(*(long *)(lVar3 + 0x38) + 0x18) == 0)) &&
     (*(long *)(*(long *)(lVar3 + 0x38) + 0x20) == *(long *)(lVar3 + 0x40))) {
    if (*(int *)(*(long *)(param_1 + 8) + 0x20) != -1) {
      FUN__text__003febd0(lVar4 + 0x2a8);
    }
    cVar2 = *param_4;
    if ((param_3 & 1) != 0) {
      if ((*(byte *)(lVar3 + 0x48) & 1) == 0) {
        local_48 = lVar3 + 8;
        auStack_58[0] = *(undefined8 *)(*(long *)(lVar3 + 0x40) + 0x20);
        local_60 = param_4;
        (**(code **)(*param_2 + 0x40))(param_2,1,auStack_58,&local_60);
      }
      else {
        *param_4 = '\0';
      }
    }
    *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
    if ((cVar2 == '\0') && (*param_4 != '\0')) {
      *param_4 = '\0';
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


