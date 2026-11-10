/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f3320; name: FUN_.text__002f3320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__002f3320(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  byte *pbVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  undefined8 local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  undefined8 local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [16];
  Sha256Impl aSStack_e0 [128];
  
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pLVar2 = (LightEventType *)(param_1 + 0x78);
  pbVar3 = (byte *)(param_1 + 0x7a);
  while (*pbVar3 == 0x4f) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
    if (bVar10) {
      *pbVar3 = bVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__002f33e4;
  }
  pcVar4 = (char *)(param_1 + 0x7b);
  ClearExclusiveLocal();
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
    if (bVar10) {
      *pcVar4 = *pcVar4 + '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar3 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*pbVar3 == 0x4f) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
          if (bVar10) {
            *pbVar3 = bVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__002f33d4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
    if (bVar10) {
      *pbVar3 = bVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__002f33d4:
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
    if (bVar10) {
      *pcVar4 = *pcVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__002f33e4:
  lVar14 = *(long *)(param_1 + 8);
  if (lVar14 == *(long *)(param_1 + 0x10)) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    do {
      plVar1 = (long *)(lVar14 + 0x18);
      lVar14 = lVar14 + 0x20;
      lVar15 = lVar15 + *plVar1 + 4;
    } while (lVar14 != *(long *)(param_1 + 0x10));
  }
  lVar14 = lVar15 + 0x20;
  lVar12 = (**(code **)(*param_2 + 0x10))(param_2,lVar14);
  lVar9 = _DAT_008a28f0;
  lVar8 = _DAT_008a25c0;
  if (lVar12 == 0) {
LAB__text__002f35e0:
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
      if (bVar10) {
        *pbVar3 = 0x4f;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (*(char *)(param_1 + 0x7b) != '\0') {
      nn::os::SignalLightEvent(pLVar2);
    }
    return false;
  }
  local_108 = 0x73399a;
  uStack_100 = 0x7f;
  local_110 = 0;
  local_f8 = 0;
  local_140 = _DAT_008a2908 + 0x10;
  lStack_128 = _DAT_008a25c0 + 0x10;
  local_130 = 0;
  lStack_138 = _DAT_008a28f0 + 0x10;
  local_120 = lVar12;
  lStack_118 = lVar15;
  uVar13 = FUN__text__002f3650(param_1,&local_140);
  if ((uVar13 & 1) == 0) goto LAB__text__002f35e0;
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
    if (bVar10) {
      *pbVar3 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x7b) != '\0') {
    nn::os::SignalLightEvent(pLVar2);
  }
  FUN__text__002ffeb0(auStack_f0);
  FUN__text__002ffec0(auStack_f0);
  FUN__text__002fff2c(auStack_f0,lVar12,lVar15,0);
  FUN__text__002fff78(&local_160,auStack_f0);
  nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_e0);
  plVar1 = (long *)(lVar12 + lVar15);
  plVar1[2] = local_150;
  plVar1[3] = lStack_148;
  *plVar1 = local_160;
  plVar1[1] = lStack_158;
  local_168 = 0;
  iVar11 = FUN__text__00214dfc(&local_168,param_3,lVar14,0);
  if (iVar11 == 0) {
    lStack_1a0 = lVar8 + 0x10;
    local_1a8 = 0;
    lStack_1b0 = lVar9 + 0x10;
    local_188 = 0;
    local_1b8 = _DAT_008a28e8 + 0x10;
    local_180 = 0x73399a;
    uStack_178 = 0x7f;
    local_170 = 0;
    local_198 = lVar12;
    lStack_190 = lVar15;
    uVar13 = FUN__text__002f3810(&local_1b8);
    if ((uVar13 & 1) != 0) {
      FUN__text__002ffeb0(auStack_f0);
      FUN__text__002ffec0(auStack_f0);
      FUN__text__002fff2c(auStack_f0,lVar12,lVar15,0);
      FUN__text__002fff78(&local_1d8,auStack_f0);
      nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_e0);
      if (((local_160 == local_1d8 && lStack_158 == lStack_1d0) && local_150 == local_1c8) &&
          lStack_148 == lStack_1c0) {
        iVar11 = FUN__text__005dc198(local_168,lVar12,lVar14);
        bVar10 = iVar11 == 0;
        goto joined_r0x002f35c0;
      }
    }
  }
  bVar10 = false;
joined_r0x002f35c0:
  if (local_168 == 0) {
    return bVar10;
  }
  (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  return bVar10;
}


