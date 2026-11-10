/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d84e0; name: FUN_.text__006d84e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d84e0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  MutexType *pMVar2;
  int *piVar3;
  
  pMVar2 = _DAT_008a6b50;
  if ((param_2 & 1) == 0) {
    nn::os::LockMutex(_DAT_008a6b50);
    piVar3 = _DAT_008a6b58;
    iVar1 = *_DAT_008a6b58;
    *(undefined8 *)(*_DAT_008a6b60 + (long)iVar1 * 8) = param_1;
    *piVar3 = iVar1 + 1;
    nn::os::UnlockMutex(pMVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d8514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*_DAT_008a6b48 + 0x18))((long *)*_DAT_008a6b48,param_1);
  return;
}


