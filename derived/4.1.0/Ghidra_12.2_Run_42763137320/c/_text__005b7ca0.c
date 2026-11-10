/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b7ca0; name: FUN_.text__005b7ca0
 */


void FUN__text__005b7ca0(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  
  uVar3 = tpidr_el0;
  bVar8 = (byte)((uint)uVar3 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x56);
  while (*pbVar1 == 0x4f) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__005b7d54;
  }
  pcVar2 = (char *)(param_1 + 0x57);
  ClearExclusiveLocal();
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*pbVar1 == 0x4f) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__005b7d44;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005b7d44:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005b7d54:
  *(undefined1 *)(param_1 + 0x8d9) = 1;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x80c) = param_2[2];
  *(undefined8 *)(param_1 + 0x814) = uVar5;
  *(undefined8 *)(param_1 + 0x7fc) = uVar3;
  *(undefined8 *)(param_1 + 0x804) = uVar4;
  uVar4 = param_2[5];
  uVar3 = param_2[6];
  uVar5 = param_2[7];
  *(undefined8 *)(param_1 + 0x81c) = param_2[4];
  *(undefined8 *)(param_1 + 0x824) = uVar4;
  *(undefined8 *)(param_1 + 0x82c) = uVar3;
  *(undefined8 *)(param_1 + 0x834) = uVar5;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x57) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  return;
}


