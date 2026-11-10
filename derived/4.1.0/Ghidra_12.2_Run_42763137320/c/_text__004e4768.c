/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e4768; name: FUN_.text__004e4768
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004e4768(void *param_1)

{
  ThreadType *pTVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  
  puVar3 = _DAT_008a4fa8;
  if (*_DAT_008a4fa8 == 0) {
    plVar5 = (long *)FUN__text__00400f80(5,0x40);
    lVar2 = _DAT_008a4fa0;
    if (plVar5 == (long *)0x0) {
      return 2;
    }
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    *(undefined4 *)(plVar5 + 7) = 0;
    *plVar5 = lVar2 + 0x10;
    plVar5[1] = 0;
    uVar6 = nn::codec::GetHardwareOpusDecoderWorkBufferSize(8000,1,0);
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,12000,1);
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,16000,1);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,24000,1);
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,48000,1);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    *puVar3 = uVar6;
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,8000,2);
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,12000,2);
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,16000,2);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,24000,2);
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,48000,2);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    puVar3[1] = uVar6;
    (**(code **)*plVar5)(plVar5);
    FUN__text__00400fc0(5,plVar5);
  }
  if (*(char *)((long)param_1 + 0x8a0) != '\0') {
    return 2;
  }
  *(undefined1 *)((long)param_1 + 0xa60) = 0;
  nn::os::InitializeEvent((long)param_1 + 0xa38,0,1);
  lVar2 = _DAT_008a4900;
  if (DAT_00ae9a30 == '\0') {
    uVar7 = *(ulong *)(_DAT_008a4900 + 0x88);
    pvVar8 = (void *)aligned_alloc(0x10000,uVar7);
    *(void **)((long)param_1 + 0xa20) = pvVar8;
    if (pvVar8 != (void *)0x0) {
      *(int *)((long)param_1 + 0xa30) = (int)uVar7;
      pTVar1 = (ThreadType *)((long)param_1 + 0x860);
      iVar4 = nn::os::CreateThread
                        (pTVar1,_DAT_008a4fb8,param_1,pvVar8,uVar7 & 0xffffffff,
                         *(int *)(lVar2 + 0x80));
      if (iVar4 == 0) {
        nn::os::SetThreadName(pTVar1,(char *)0x72101a);
        nn::os::SetThreadCoreMask(pTVar1,*(int *)(lVar2 + 0x90),*(ulong *)(lVar2 + 0x98));
        nn::os::StartThread(pTVar1);
        if (*(char *)((long)param_1 + 0x8a0) == '\0') {
          return 2;
        }
        return 1;
      }
      if (*(long *)((long)param_1 + 0xa28) != 0) {
        free(*(void **)((long)param_1 + 0xa20));
      }
      *(undefined8 *)((long)param_1 + 0xa20) = 0;
    }
    if (*(char *)((long)param_1 + 0x8a0) == '\0') {
      return 2;
    }
  }
  return 1;
}


