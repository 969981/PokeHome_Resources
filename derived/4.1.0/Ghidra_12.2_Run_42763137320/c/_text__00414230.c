/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414230; name: FUN_.text__00414230
 */


void FUN__text__00414230(ulong *param_1)

{
  int iVar1;
  ulong *puVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 1));
  iVar1 = *(int *)((long)param_1 + 0x44);
  while (iVar1 != 0) {
    puVar2 = (ulong *)*param_1;
    if (puVar2 != (ulong *)0x0) {
      *param_1 = *puVar2;
      *puVar2 = 0;
    }
    FUN__text__00400fc0(0x12,param_1[7] & (ulong)puVar2);
    iVar1 = *(int *)((long)param_1 + 0x44) + -1;
    *(int *)((long)param_1 + 0x44) = iVar1;
  }
  if ((int)param_1[8] != 0) {
    FUN__text__00400fc0(0x12,param_1[7] & *param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *param_1 = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 1));
  FUN__text__00405ac0((int)param_1[5]);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


