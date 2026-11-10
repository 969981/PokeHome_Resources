/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006229b0; name: FUN_.text__006229b0
 */


undefined4 FUN__text__006229b0(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__00622a64;
  }
  pcVar2 = (char *)(param_1 + 0x17);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__00622a54;
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
LAB__text__00622a54:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__00622a64:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar7 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar7 + 0xc) == '\0') {
    lVar7 = FUN__text__0060e7f8(param_1);
    uVar8 = *(undefined4 *)(lVar7 + 0x94);
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__00622af0;
  }
  else {
    uVar8 = DAT_00c15e46;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__00622af0;
  }
  lVar7 = FUN__text__0060e7c4(param_1);
  if (lVar7 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__00622af0:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  return uVar8;
}


