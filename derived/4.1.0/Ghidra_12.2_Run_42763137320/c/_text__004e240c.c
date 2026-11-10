/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e240c; name: FUN_.text__004e240c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004e240c(void *param_1)

{
  long lVar1;
  ThreadType *pTVar2;
  ThreadType *pTVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  pTVar2 = _DAT_008a4ca8;
  if (_DAT_008a4ca8[0x40] != (ThreadType)0x0) {
    return 2;
  }
  *(undefined1 *)((long)param_1 + 0x128) = 0;
  nn::os::InitializeEvent((long)param_1 + 0x100,0,1);
  lVar1 = _DAT_008a4900;
  uVar6 = *(ulong *)(_DAT_008a4900 + 0x48);
  pvVar5 = (void *)aligned_alloc(0x10000,uVar6);
  *(void **)(pTVar2 + 0x1c0) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    *(int *)(pTVar2 + 0x1d0) = (int)uVar6;
    iVar4 = nn::os::CreateThread
                      (pTVar2,_DAT_008a4cb0,param_1,pvVar5,uVar6 & 0xffffffff,*(int *)(lVar1 + 0x40)
                      );
    pTVar3 = _DAT_008a4ca8;
    if (iVar4 == 0) {
      nn::os::SetThreadName(_DAT_008a4ca8,(char *)0x710638);
      nn::os::SetThreadCoreMask(pTVar3,*(int *)(lVar1 + 0x50),*(ulong *)(lVar1 + 0x58));
      nn::os::StartThread(pTVar3);
    }
    else {
      if (*(long *)(pTVar2 + 0x1c8) != 0) {
        free(*(void **)(pTVar2 + 0x1c0));
      }
      *(undefined8 *)(pTVar2 + 0x1c0) = 0;
    }
  }
  uVar7 = 1;
  if (pTVar2[0x40] == (ThreadType)0x0) {
    uVar7 = 2;
  }
  return uVar7;
}


