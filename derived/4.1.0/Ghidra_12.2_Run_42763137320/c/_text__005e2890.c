/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2890; name: FUN_.text__005e2890
 */


void FUN__text__005e2890(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = param_1 + 0x72;
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005e2954;
  }
  pbVar2 = param_1 + 0x73;
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar5) {
      *pbVar2 = *pbVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005e2944;
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
LAB__text__005e2944:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar5) {
      *pbVar2 = *pbVar2 - 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005e2954:
  param_1[0x78] = 1;
  FUN__text__005e2a20(param_1,param_2);
  if ((param_1[0x38] & 1) != 0) {
    FUN__text__005e2c20(param_1 + 8,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x40),
                        *(long *)(param_1 + 0x48),
                        *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 7);
    *param_1 = 1;
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    puVar10 = *(undefined8 **)(param_1 + 0x48);
    while (puVar8 = puVar10, puVar8 != puVar3) {
      pcVar9 = (code *)puVar8[-0xf];
      puVar10 = puVar8 + -0x10;
      if (pcVar9 != (code *)0x0) {
        puVar8[-0xe] = 0;
        puVar8[-0xd] = 0;
        *puVar10 = 0;
        puVar8[-0xf] = 0;
        (*pcVar9)(puVar8 + -0xc);
      }
    }
    *(undefined8 **)(param_1 + 0x48) = puVar3;
    param_1[0x38] = 0;
  }
  param_1[0x78] = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (param_1[0x73] == 0) {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  return;
}


