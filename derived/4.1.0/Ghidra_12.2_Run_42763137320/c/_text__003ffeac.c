/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ffeac; name: FUN_.text__003ffeac
 */


void FUN__text__003ffeac(undefined4 param_1,long param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 uStack_51;
  long local_50;
  undefined8 local_48;
  
  iVar2 = FUN__text__003fadb8(param_3);
  if (iVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x003fffcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x30))(param_3,0,2,0);
    return;
  }
  lVar3 = (**(code **)(*param_3 + 0x28))(param_3,&local_48,&local_50,&uStack_51,0);
  if (lVar3 == 0) {
    lVar4 = *param_3;
    iVar2 = 0x35;
    lVar3 = 0;
    bVar1 = false;
  }
  else {
    if (local_50 == 0) {
      bVar1 = false;
      iVar2 = 1;
    }
    else {
      local_58 = *(undefined1 *)((long)param_3 + 100);
      lVar4 = 0x30;
      if (*(char *)((long)param_3 + 0x66) != '\0') {
        lVar4 = 0x38;
      }
      local_5c = param_1;
      iVar2 = (**(code **)(**(long **)(param_2 + 0x610) + lVar4))
                        (*(long **)(param_2 + 0x610),local_48,&local_5c,
                         *(undefined8 *)(local_50 + 0x10));
      nn::os::LockMutex((MutexType *)(param_2 + 0x1e8));
      lVar4 = *(long *)(lVar3 + 8);
      *(undefined8 *)(lVar4 + 0x10) = 0;
      if ((iVar2 != 1) && (*(int *)(lVar4 + 0x20) != -1)) {
        FUN__text__003febd0(param_2 + 0x2a8);
      }
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x1e8));
      bVar1 = local_50 != 0;
    }
    lVar4 = *param_3;
  }
  (**(code **)(lVar4 + 0x30))(param_3,lVar3,iVar2,bVar1);
  return;
}


