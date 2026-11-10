/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aa320; name: FUN_.text__005aa320
 */


void FUN__text__005aa320(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  uVar9 = tpidr_el0;
  bVar5 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0xe2);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005aa3d4;
  }
  pcVar2 = (char *)(param_1 + 0xe3);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe0));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005aa3c4;
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
LAB__text__005aa3c4:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005aa3d4:
  puVar7 = (undefined4 *)
           FUN__text__005ade60(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                               param_1);
  puVar8 = *(undefined4 **)(param_1 + 0xf0);
  lVar6 = (long)puVar8 - (long)puVar7;
  if (lVar6 != 0) {
    if ((undefined4 *)((long)puVar7 + lVar6) != puVar8) {
      do {
        uVar9 = *(undefined8 *)(puVar7 + (lVar6 >> 4) * 4 + 2);
        *puVar7 = puVar7[(lVar6 >> 4) * 4];
        *(undefined8 *)(puVar7 + 2) = uVar9;
        puVar7 = puVar7 + 4;
      } while (puVar7 + (lVar6 >> 4) * 4 != puVar8);
    }
    *(undefined4 **)(param_1 + 0xf0) = puVar7;
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
  if (*(char *)(param_1 + 0xe3) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe0));
  return;
}


