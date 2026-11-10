/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9510; name: FUN_.text__005e9510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e9510(long *param_1,long param_2,byte *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  byte *pbVar9;
  ulong local_68;
  byte *local_60;
  undefined1 uStack_51;
  ulong *local_38;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_2 + 0x52);
  while (local_60 = param_3, *pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005e95d4;
  }
  pcVar2 = (char *)(param_2 + 0x53);
  ClearExclusiveLocal();
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005e95c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005e95c4:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005e95d4:
  local_68 = 0xcbf29ce484222645;
  bVar5 = *local_60;
  pbVar9 = local_60;
  while (bVar5 != 0) {
    pbVar9 = pbVar9 + 1;
    local_68 = (local_68 ^ bVar5) * 0x100000001b3;
    bVar5 = *pbVar9;
  }
  local_38 = &local_68;
  lVar8 = FUN__text__005e99d0(param_2 + 0x58,&local_68,_DAT_008a01d8,&local_38,&uStack_51);
  lVar8 = *(long *)(lVar8 + 0x18);
  *param_1 = lVar8;
  if (lVar8 == 0) {
    FUN__text__005e96dc(&local_38,*(undefined8 *)(param_2 + 8),&local_60);
    puVar7 = local_38;
    *param_1 = (long)local_38;
    local_38 = &local_68;
    lVar8 = FUN__text__005e99d0(param_2 + 0x58,&local_68,_DAT_008a01d8,&local_38,&uStack_51);
    *(ulong **)(lVar8 + 0x18) = puVar7;
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_2 + 0x53) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  }
  return;
}


