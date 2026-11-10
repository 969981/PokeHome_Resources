/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb85c; name: FUN_.text__003fb85c
 */


void FUN__text__003fb85c(long param_1)

{
  int iVar1;
  long *plVar2;
  MutexType *pMVar3;
  
  pMVar3 = (MutexType *)(param_1 + -0x48);
  nn::os::LockMutex(pMVar3);
  plVar2 = (long *)(param_1 + -0x70);
  iVar1 = (**(code **)(*plVar2 + 0xb8))(plVar2);
  if (iVar1 == 2) {
    FUN__text__003fdc68(plVar2);
    nn::os::UnlockMutex(pMVar3);
    FUN__text__003fe1b0(*(undefined8 *)(param_1 + -0x20),plVar2);
  }
  else {
    nn::os::UnlockMutex(pMVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x003fb8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2);
  return;
}


