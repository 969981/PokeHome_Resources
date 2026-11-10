/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b5bb0; name: FUN_.text__005b5bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b5bb0(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  size_t __n;
  code *pcVar7;
  void *__dest;
  void *__src;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  void *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  
  uVar11 = tpidr_el0;
  bVar6 = (byte)((uint)uVar11 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0xe6);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005b5c74;
  }
  pcVar2 = (char *)(param_1 + 0xe7);
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005b5c64;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005b5c64:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005b5c74:
  iVar3 = 0;
  if (*(int *)(param_1 + 0xe0) < 2) {
    iVar3 = *(int *)(param_1 + 0xe0) + 1;
  }
  lVar9 = param_1 + (long)iVar3 * 0x30;
  *(int *)(param_1 + 0xe0) = iVar3;
  plVar10 = (long *)(lVar9 + 0x50);
  if (*plVar10 != *(long *)(lVar9 + 0x58)) {
    __dest = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10))
                               (*(long **)(param_1 + 8),*(long *)(lVar9 + 0x58) - *plVar10,8);
    __src = (void *)*plVar10;
    __n = *(long *)(lVar9 + 0x58) - (long)__src;
    if (__n == 0) {
      pvVar8 = __src;
    }
    else {
      memmove(__dest,__src,__n);
      __src = (void *)*plVar10;
      pvVar8 = *(void **)(lVar9 + 0x58);
    }
    uVar15 = *(undefined8 *)(param_1 + 8);
    lVar13 = (long)pvVar8 - (long)__src >> 3;
    lVar12 = *(long *)(*_DAT_008a57e8 + 0x50);
    nn::os::LockMutex((MutexType *)(lVar12 + 0x3a0));
    puVar14 = *(undefined8 **)(lVar12 + 0x378);
    local_e0 = FUN__text__005b6a80;
    local_d8 = FUN__text__005b6b30;
    local_d0 = &LAB__text__005b6b34;
    local_c8 = FUN__text__005b6b48;
    local_c0 = __dest;
    lStack_b8 = lVar13;
    local_b0 = uVar15;
    if (puVar14 < *(undefined8 **)(lVar12 + 0x380)) {
      uVar11 = uVar11 & 0xffffffffffffe000;
      if (*(long *)(uVar11 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) =
           *(undefined8 *)(lVar12 + 0x388);
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      puVar14[2] = 0;
      puVar14[3] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      FUN__text__005b6b48(&local_c0,puVar14 + 4);
      pcVar7 = local_d8;
      puVar14[3] = local_c8;
      *puVar14 = local_e0;
      puVar14[1] = local_d8;
      puVar14[2] = local_d0;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar7)(&local_c0);
      }
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
      *(undefined8 **)(lVar12 + 0x378) = puVar14 + 0x10;
      pcVar7 = local_d8;
    }
    else {
      FUN__text__005b67e0(lVar12 + 0x370,&local_e0);
      pcVar7 = local_d8;
    }
    local_d8 = pcVar7;
    if (pcVar7 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar7)(&local_c0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar12 + 0x3c0));
    nn::os::UnlockMutex((MutexType *)(lVar12 + 0x3a0));
    *(long *)(lVar9 + 0x58) = *plVar10;
  }
  *_DAT_008a0300 = 1 - *_DAT_008a0300;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0xe7) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  }
  return;
}


