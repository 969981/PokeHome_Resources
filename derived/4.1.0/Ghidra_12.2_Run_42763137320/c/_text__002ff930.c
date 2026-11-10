/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ff930; name: FUN_.text__002ff930
 */


void FUN__text__002ff930(long param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  LightEventType *pLVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  pLVar10 = *(LightEventType **)(param_1 + 0x378);
  uVar12 = *(undefined8 *)(param_1 + 0x370);
  uVar9 = (uint)(byte)pLVar10[2];
  uVar7 = tpidr_el0;
  uVar3 = (uint)uVar7 >> 0xd & 0x4f;
  if (uVar9 == 0x4f || uVar9 != uVar3) {
    pLVar1 = pLVar10 + 2;
LAB__text__002ff9a0:
    LVar6 = SUB41(uVar3,0);
    if (*pLVar1 == (LightEventType)0x4f) goto code_r0x002ff9ac;
    pLVar2 = pLVar10 + 3;
    ClearExclusiveLocal();
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
      if (bVar5) {
        *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    do {
      if (*pLVar1 != (LightEventType)0x4f) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar10);
          while (*pLVar1 == (LightEventType)0x4f) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
            if (bVar5) {
              *pLVar1 = LVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB__text__002ffa34;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
      if (bVar5) {
        *pLVar1 = LVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB__text__002ffa34:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
      if (bVar5) {
        *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar8 = FUN__text__002f3320(uVar12,*(undefined8 *)(pLVar10 + 8),param_1 + 0x380);
    uVar8 = uVar8 & 0xffffffff;
    if (uVar9 != 0x4f && uVar9 == uVar3) goto joined_r0x002ffa90;
    goto LAB__text__002ffa60;
  }
  uVar8 = FUN__text__002f3320(uVar12,*(undefined8 *)(pLVar10 + 8),param_1 + 0x380);
joined_r0x002ffa90:
  if ((uVar8 & 1) == 0) {
    uVar11 = 3;
  }
  else {
    uVar11 = 2;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b8));
  *(undefined4 *)(param_1 + 0x3b0) = uVar11;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b8));
  FUN__text__005e8c48(param_1);
  if (*(long *)(param_1 + 0x3d8) == 0) {
    return;
  }
  FUN__text__005e1f84();
  return;
code_r0x002ff9ac:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
  if (bVar5) {
    *pLVar1 = LVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x002ff9b4;
  goto LAB__text__002ff9a0;
code_r0x002ff9b4:
  uVar8 = FUN__text__002f3320(uVar12,*(undefined8 *)(pLVar10 + 8),param_1 + 0x380);
  uVar8 = uVar8 & 0xffffffff;
LAB__text__002ffa60:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar10 + 2,0x10);
    if (bVar5) {
      pLVar10[2] = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar10[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar10);
  }
  goto joined_r0x002ffa90;
}


