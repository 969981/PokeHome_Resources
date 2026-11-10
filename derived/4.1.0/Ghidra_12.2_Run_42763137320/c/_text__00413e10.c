/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413e10; name: FUN_.text__00413e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00413e10(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  EventType *pEVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_50 [2];
  ulong local_48;
  ulong local_28;
  
  if (((DAT_00aea1e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_00aea1e8), iVar5 != 0)) {
    DAT_00aea1f4 = 0;
    DAT_00aea1f0 = 0;
    DAT_00aea200 = 0;
    DAT_00aea208 = 0;
    nn::os::InitializeMutex((MutexType *)&DAT_00aea1f0,true,0);
    FUN__text__001001d0(_DAT_008a38a0,&DAT_00aea1f0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00aea1e8);
  }
  nn::os::LockMutex((MutexType *)&DAT_00aea1f0);
  puVar8 = _DAT_008a4890;
  local_28 = 0xffffffffffffffff;
  do {
    uVar7 = *puVar8;
    uVar9 = (ulong)((int)uVar7 + 1) & 0xfff;
    while (*puVar8 == uVar7) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar2) {
        *puVar8 = uVar9;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = _DAT_008a4888;
      if (cVar1 == '\0') {
        lVar6 = *_DAT_008a4888;
        puVar8 = (ulong *)(lVar6 + uVar9 * 0x38);
        uVar7 = *puVar8;
        while ((uVar7 & 0xfff) != 0) {
          FUN__text__00405bf0();
          lVar6 = *plVar3;
          puVar8 = (ulong *)(lVar6 + uVar9 * 0x38);
          uVar7 = *puVar8;
        }
        do {
          uVar7 = *puVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar2) {
            *puVar8 = uVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar6 = lVar6 + uVar9 * 0x38;
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0x71adfd;
        *(undefined8 *)(lVar6 + 0x18) = 0x300000000;
        *(undefined8 *)(lVar6 + 0x20) = 0xffffffffffffffff;
        uVar7 = uVar7 + 1 & 0xfffffffffffff000;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        uVar10 = uVar7 | uVar9;
        *(undefined4 *)(lVar6 + 0x30) = 0x80000000;
        local_28 = uVar10;
        FUN__text__00413460(&local_28,*(undefined8 *)(param_1 + 8));
        FUN__text__00412dc0(&local_28,1,1);
        nn::os::WaitEvent(_DAT_008a48b0);
        local_50[0] = 3;
        local_48 = uVar10;
        FUN__text__00412340(local_50,0);
        pEVar4 = _DAT_008a48b0;
        if (uVar10 != 0xffffffffffffffff) {
          uVar10 = *(ulong *)(*plVar3 + uVar9 * 0x38);
          while (uVar10 == (uVar7 | 1)) {
            nn::os::WaitEvent(pEVar4);
            FUN__text__00412340(local_50,0);
            uVar10 = *(ulong *)(*plVar3 + uVar9 * 0x38);
          }
        }
        FUN__text__004142e0(_DAT_008a48c8);
        FUN__text__00401c50();
        nn::os::UnlockMutex((MutexType *)&DAT_00aea1f0);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


