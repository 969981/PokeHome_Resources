/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d6bc4; name: thunk_FUN_.text__005d6bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__005d6bd0(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar8 = _DAT_008a5690;
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  lVar9 = *_DAT_008a5690;
  pbVar1 = (byte *)(lVar9 + 0xe2);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005d6c94;
  }
  pcVar2 = (char *)(lVar9 + 0xe3);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xe0));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005d6c84;
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
LAB__text__005d6c84:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005d6c94:
  FUN__text__005d6f3c(param_1,*plVar8);
  lVar10 = *param_1;
  lVar3 = *plVar8 + 0x50;
  FUN__text__006ee594(lVar3);
  FUN__text__006ee608(lVar3,*(undefined4 *)(lVar10 + 0x68),param_2);
  FUN__text__006ee624(lVar3,lVar10 + 0x58,*(undefined4 *)(lVar10 + 0x68));
  FUN__text__006ee5a0(lVar3);
  *(undefined8 *)(lVar10 + 0x60) = param_2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar9 + 0xe3) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xe0));
  return;
}


