/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb7d4; name: FUN_.text__003fb7d4
 */


void FUN__text__003fb7d4(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  
  pMVar1 = (MutexType *)(param_1 + 5);
  nn::os::LockMutex(pMVar1);
  iVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (iVar2 == 2) {
    FUN__text__003fdc68(param_1);
    nn::os::UnlockMutex(pMVar1);
    FUN__text__003fe1b0(param_1[10],param_1);
                    /* WARNING: Could not recover jumptable at 0x003fb838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
                    /* WARNING: Could not recover jumptable at 0x003fb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}


