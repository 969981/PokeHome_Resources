/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005da7f0; name: FUN_.text__005da7f0
 */


void FUN__text__005da7f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_48;
  int local_44;
  
  bVar6 = *(long *)(param_2 + 0x1a0) != 0;
  if ((!bVar6 && *(int *)(param_2 + 0x170) != *(int *)(param_2 + 0x16c)) &&
      (bVar6 || *(int *)(param_2 + 0x16c) <= *(int *)(param_2 + 0x170))) {
    FUN__text__005dd7d8(param_1);
    return;
  }
  uVar5 = tpidr_el0;
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_2 + 0x1b2);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005da904;
  }
  pcVar2 = (char *)(param_2 + 0x1b3);
  ClearExclusiveLocal();
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1b0));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005da8f4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005da8f4:
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005da904:
  if (*(long *)(param_2 + 0x1a0) == 0) {
    iVar11 = *(int *)(param_2 + 0x170);
    *(int *)(param_2 + 0x170) = iVar11 + 1;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x1a0) + -1;
    iVar11 = *(int *)(param_2 + lVar9 * 4 + 0x178);
    *(long *)(param_2 + 0x1a0) = lVar9;
  }
  *(ulong *)(param_2 + 0x1a8) =
       1L << ((ulong)(uint)(iVar11 - *(int *)(param_2 + 0x168)) & 0x3f) |
       *(ulong *)(param_2 + 0x1a8);
  *(int *)(param_2 + 0x174) = *(int *)(param_2 + 0x174) + 1;
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_2 + 0x1b3) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1b0));
  }
  local_d0 = 0;
  local_44 = iVar11;
  FUN__text__005dd364(&local_b0,iVar11,param_2 + 0x13c,&local_d0,param_3);
  uVar8 = nn::fs::IsSaveDataExisting(param_4,param_3);
  if ((uVar8 & 1) == 0) {
    uVar10 = 3;
  }
  else {
    FUN__text__005dd624(&local_d0,&local_b0);
    iVar7 = nn::fs::MountSaveData(local_c8,param_4,param_3);
    local_48 = iVar7;
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    }
    if (iVar7 != 0) {
      FUN__text__005da660(param_2 + 0x168,&local_44);
      FUN__text__005dd7d8(param_1);
      FUN__text__005dd810(param_1,&local_48);
      if (local_80 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      return;
    }
    FUN__text__005dd810(&local_b0,&local_48);
    uVar10 = 2;
  }
  *(undefined4 *)(param_2 + (long)iVar11 * 4 + 0x13c) = uVar10;
  *param_1 = local_b0;
  param_1[1] = uStack_a8;
  *(undefined4 *)(param_1 + 2) = local_a0;
  param_1[3] = local_98;
  param_1[4] = uStack_90;
  param_1[5] = local_88;
  param_1[6] = local_80;
  param_1[8] = local_70;
  param_1[9] = uStack_68;
  param_1[7] = local_78;
  return;
}


