/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b7dd0; name: FUN_.text__005b7dd0
 */


void FUN__text__005b7dd0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  byte bVar10;
  
  uVar3 = tpidr_el0;
  bVar10 = (byte)((uint)uVar3 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x56);
  while (*pbVar1 == 0x4f) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar9) {
      *pbVar1 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB__text__005b7e94;
  }
  pcVar2 = (char *)(param_1 + 0x57);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar9) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*pbVar1 == 0x4f) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar9) {
            *pbVar1 = bVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__005b7e84;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar9) {
      *pbVar1 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005b7e84:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar9) {
      *pcVar2 = *pcVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005b7e94:
  *(undefined1 *)(param_1 + 0x8da) = 1;
  uVar3 = *param_3;
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  *(undefined8 *)(param_1 + 0x8b0) = param_3[3];
  *(undefined8 *)(param_1 + 0x8a8) = uVar4;
  *(undefined8 *)(param_1 + 0x8a0) = uVar5;
  *(undefined8 *)(param_1 + 0x898) = uVar3;
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0x868) = *param_2;
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar4 = param_2[2];
  uVar7 = param_2[3];
  *(undefined8 *)(param_1 + 0x870) = uVar5;
  *(undefined1 *)(param_1 + 0x868) = 1;
  *(undefined8 *)(param_1 + 0x880) = uVar7;
  *(undefined8 *)(param_1 + 0x890) = uVar6;
  *(undefined8 *)(param_1 + 0x888) = uVar3;
  *(undefined8 *)(param_1 + 0x878) = uVar4;
  *(long *)(param_1 + 0x880) = param_1 + 0x898;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar9) {
      *pbVar1 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x57) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  return;
}


