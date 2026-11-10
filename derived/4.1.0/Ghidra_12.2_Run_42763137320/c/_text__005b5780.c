/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b5780; name: FUN_.text__005b5780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b5780(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  piVar7 = _DAT_008a0300;
  lVar8 = param_1 + (long)*_DAT_008a0300 * 0x30;
  puVar11 = *(undefined8 **)(lVar8 + 0xf0);
  puVar9 = *(undefined8 **)(lVar8 + 0xf8);
  if (puVar11 != puVar9) {
    do {
      puVar10 = puVar11 + 1;
      (**(code **)(*(long *)*puVar11 + 0x28))((long *)*puVar11,param_2);
      puVar11 = puVar10;
    } while (puVar10 != puVar9);
    puVar9 = *(undefined8 **)(lVar8 + 0xf0);
  }
  *(undefined8 **)(lVar8 + 0xf8) = puVar9;
  lVar8 = param_1 + (long)*piVar7 * 0x30;
  puVar11 = *(undefined8 **)(lVar8 + 0x158);
  puVar9 = *(undefined8 **)(lVar8 + 0x150);
  if (*(undefined8 **)(lVar8 + 0x150) != puVar11) {
    do {
      puVar10 = puVar9 + 1;
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,param_2);
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
    puVar11 = *(undefined8 **)(lVar8 + 0x150);
  }
  *(undefined8 **)(lVar8 + 0x158) = puVar11;
  lVar8 = param_1 + (long)*piVar7 * 0x30;
  puVar11 = *(undefined8 **)(lVar8 + 0x1b8);
  puVar9 = *(undefined8 **)(lVar8 + 0x1b0);
  if (*(undefined8 **)(lVar8 + 0x1b0) != puVar11) {
    do {
      puVar10 = puVar9 + 1;
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,param_2);
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
    puVar11 = *(undefined8 **)(lVar8 + 0x1b0);
  }
  *(undefined8 **)(lVar8 + 0x1b8) = puVar11;
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x3f6);
  pcVar2 = (char *)(param_1 + 0x3f7);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005b5914;
  }
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3f4));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005b5904;
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
LAB__text__005b5904:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005b5914:
  lVar8 = param_1 + (long)*piVar7 * 0x30;
  puVar11 = *(undefined8 **)(lVar8 + 0x210);
  puVar9 = *(undefined8 **)(lVar8 + 0x218);
  if (puVar11 != puVar9) {
    do {
      puVar10 = puVar11 + 1;
      (**(code **)(*(long *)*puVar11 + 0x28))((long *)*puVar11,param_2);
      puVar11 = puVar10;
    } while (puVar10 != puVar9);
    puVar11 = *(undefined8 **)(lVar8 + 0x210);
  }
  *(undefined8 **)(lVar8 + 0x218) = puVar11;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*pcVar2 != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3f4));
  }
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  return;
}


