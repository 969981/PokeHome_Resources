/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b86dc; name: FUN_.text__004b86dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004b86dc(void *param_1)

{
  int *piVar1;
  ThreadType *pTVar2;
  ThreadType *pTVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  nn::os::InitializeEvent(param_1,0,1);
  *(undefined1 *)((long)param_1 + 0x28) = 0;
  piVar1 = _DAT_008a4900;
  uVar6 = *(ulong *)(_DAT_008a4900 + 2);
  pvVar5 = (void *)aligned_alloc(0x10000,uVar6);
  pTVar2 = _DAT_008a4f58;
  *(void **)(_DAT_008a4f58 + 0x1c0) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    *(int *)(pTVar2 + 0x1d0) = (int)uVar6;
    iVar4 = nn::os::CreateThread(pTVar2,_DAT_008a4f60,param_1,pvVar5,uVar6 & 0xffffffff,*piVar1);
    pTVar3 = _DAT_008a4f58;
    if (iVar4 == 0) {
      nn::os::SetThreadName(_DAT_008a4f58,(char *)0x711db1);
      nn::os::SetThreadCoreMask(pTVar3,piVar1[4],*(ulong *)(piVar1 + 6));
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


