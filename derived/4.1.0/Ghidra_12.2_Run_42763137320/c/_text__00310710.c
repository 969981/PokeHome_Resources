/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00310710; name: FUN_.text__00310710
 */


void FUN__text__00310710(long *param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong __n;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long *local_28;
  
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      (**(code **)(*param_1 + 0x18))(&local_28,param_1,iVar2);
      __n = (**(code **)(*local_28 + 0x30))();
      __dest = (void *)(**(code **)(*local_28 + 0x28))();
      memcpy(__dest,param_2,__n);
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = __n / uVar4;
      }
      lVar5 = __n - uVar1 * uVar4;
      iVar3 = 0;
      if (lVar5 != 0) {
        iVar3 = (int)uVar4 - (int)lVar5;
      }
      if (local_28 != (long *)0x0) {
        (**(code **)(local_28[9] + 0x18))();
      }
      param_2 = (void *)((long)param_2 + (long)(iVar3 + (int)__n));
      iVar2 = iVar2 + 1;
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    } while (iVar2 < iVar3);
  }
  return;
}


