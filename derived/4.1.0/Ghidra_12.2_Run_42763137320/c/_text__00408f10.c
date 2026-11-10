/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00408f10; name: FUN_.text__00408f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00408f10(void)

{
  long *plVar1;
  ThreadType TVar2;
  long lVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ThreadType *pTVar8;
  ThreadType *pTVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [16];
  undefined4 local_14;
  
  puVar7 = _DAT_008a49f0;
  puVar6 = _DAT_008a49e8;
  puVar5 = _DAT_008a49e0;
  *_DAT_008a49d8 = 0;
  *puVar5 = 0;
  *puVar6 = 1;
  puVar5 = _DAT_008a4a00;
  *puVar7 = 0;
  *puVar5 = 0xbf800000;
  nn::os::InitializeEvent(_DAT_008a49f8,0,1);
  lVar3 = _DAT_008a4900;
  uVar13 = *(ulong *)(_DAT_008a4900 + 0x28);
  pvVar11 = (void *)aligned_alloc(0x10000,uVar13);
  pTVar8 = _DAT_008a4a08;
  *(void **)(_DAT_008a4a08 + 0x1c0) = pvVar11;
  if (pvVar11 != (void *)0x0) {
    *(int *)(pTVar8 + 0x1d0) = (int)uVar13;
    iVar10 = nn::os::CreateThread
                       (pTVar8,_DAT_008a4a10,(void *)0x0,pvVar11,uVar13 & 0xffffffff,
                        *(int *)(lVar3 + 0x20));
    pTVar9 = _DAT_008a4a08;
    if (iVar10 == 0) {
      nn::os::SetThreadName(_DAT_008a4a08,(char *)0x70d338);
      nn::os::SetThreadCoreMask(pTVar9,*(int *)(lVar3 + 0x30),*(ulong *)(lVar3 + 0x38));
      nn::os::StartThread(pTVar9);
      TVar2 = pTVar8[0x40];
      goto joined_r0x004090dc;
    }
    if (*(long *)(pTVar8 + 0x1c8) != 0) {
      free(*(void **)(pTVar8 + 0x1c0));
    }
    *(undefined8 *)(pTVar8 + 0x1c0) = 0;
  }
  TVar2 = pTVar8[0x40];
joined_r0x004090dc:
  if (TVar2 == (ThreadType)0x0) {
    return 2;
  }
  local_44 = 0;
  local_48 = 0;
  local_50 = 0xffffffff00000000;
  puVar12 = (undefined8 *)FUN__text__00400f80(0,0x560);
  if (puVar12 != (undefined8 *)0x0) {
    FUN__text__0040632c(puVar12,&local_50,local_50,1,1);
    iVar10 = FUN__text__00406cc0(puVar12,1);
    if (iVar10 == 1) {
      FUN__text__004881d0(*(undefined4 *)(puVar12 + 0xc),auStack_40,&local_14);
      iVar10 = FUN__text__004892a0(local_14,puVar12 + 0x19,auStack_40,3);
      piVar4 = _DAT_008a49d0;
      if (iVar10 != 1) {
        (**(code **)*puVar12)(puVar12);
        FUN__text__00400fc0(0,puVar12);
        return iVar10;
      }
      plVar1 = (long *)(_DAT_008a49d0 + 4);
      if (*plVar1 == 0) {
        *(undefined8 **)(_DAT_008a49d0 + 2) = puVar12;
      }
      puVar12[4] = *plVar1;
      *(undefined8 **)(piVar4 + 4) = puVar12;
      *piVar4 = *piVar4 + 1;
      return 1;
    }
    (**(code **)*puVar12)(puVar12);
    FUN__text__00400fc0(0,puVar12);
  }
  return 0x34;
}


