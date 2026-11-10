/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00310610; name: FUN_.text__00310610
 */


void FUN__text__00310610(long *param_1,void *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong __n;
  void *__src;
  ulong uVar5;
  long lVar6;
  long *local_28;
  
  iVar3 = (**(code **)(*param_1 + 0x10))();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x18))(&local_28,param_1,iVar3);
      __n = (**(code **)(*local_28 + 0x30))();
      __src = (void *)(**(code **)(*local_28 + 0x28))();
      memcpy(param_2,__src,__n);
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = __n / uVar5;
      }
      lVar6 = __n - uVar2 * uVar5;
      lVar1 = 0;
      if (lVar6 != 0) {
        lVar1 = uVar5 - lVar6;
      }
      if (local_28 != (long *)0x0) {
        (**(code **)(local_28[9] + 0x18))();
      }
      iVar3 = iVar3 + 1;
      param_2 = (void *)((long)param_2 + lVar1 + __n);
      iVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    } while (iVar3 < iVar4);
  }
  return;
}


