/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a2f4; name: FUN_.text__0030a2f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0030a2f4(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long local_b8;
  long local_b0 [6];
  undefined1 auStack_80 [48];
  long local_50;
  
  plVar4 = _DAT_0089f550;
  if (*_DAT_0089f550 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar8 = *param_1;
  FUN__text__005da7f0(auStack_80,*_DAT_0089f550,lVar8 + 0x180,*(undefined8 *)(lVar8 + 400));
  pMVar1 = (MutexType *)(lVar8 + 0x50);
  nn::os::LockMutex(pMVar1);
  uVar5 = FUN__text__005dd608(auStack_80);
  *(undefined4 *)(lVar8 + 0x208) = uVar5;
  nn::os::UnlockMutex(pMVar1);
  if (*(int *)(lVar8 + 0x208) - 1U < 2) {
    local_b8 = lVar8 + 0x199;
    if ((*(byte *)(lVar8 + 0x198) & 1) != 0) {
      local_b8 = *(long *)(lVar8 + 0x1a8);
    }
    FUN__text__002148dc(local_b0,&local_b8,auStack_80);
    plVar2 = _DAT_0089f5d0;
    if (local_b0[0] != 0) {
      plVar2 = (long *)(local_b0[0] + 0x60);
    }
    plVar3 = local_b0 + 2;
    if (local_b0[3] != 0) {
      plVar3 = plVar2;
    }
    uVar6 = nn::fs::DeleteFile((char *)*plVar3);
    *(uint *)(lVar8 + 0x210) = uVar6;
    nn::os::LockMutex(pMVar1);
    iVar7 = FUN__text__005dd758(auStack_80);
    if ((uVar6 & 0x3fffff) != 0xe02) {
      *(int *)(lVar8 + 0x210) = iVar7;
      *(bool *)(lVar8 + 0x20c) = iVar7 == 0;
    }
    nn::os::UnlockMutex(pMVar1);
    if ((local_b0[3] != 0) && (local_b0[0] != 0)) {
      (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))();
    }
    local_b0[0] = 0;
    local_b0[1] = 0xcbf29ce484222645;
    local_b0[2] = 0x70f683;
    local_b0[3] = 0;
    if (local_b0[4] != 0) {
      (**(code **)(*(long *)(local_b0[4] + 0x48) + 0x18))();
    }
  }
  FUN__text__005daa98(*plVar4,auStack_80);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return 1;
}


