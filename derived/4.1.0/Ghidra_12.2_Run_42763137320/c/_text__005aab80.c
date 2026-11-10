/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aab80; name: FUN_.text__005aab80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005aab80(long *param_1)

{
  undefined8 *__src;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = _DAT_008a56d0 + 0x10;
  if (((DAT_00b11140 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00b11140), iVar7 != 0)) {
    nn::os::InitializeLightEvent(&DAT_00b11138,0,1);
    DAT_00b1113a = 0x4f;
    DAT_00b1113b = '\0';
    FUN__text__001001d0(_DAT_008a5658,&DAT_00b11138,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00b11140);
  }
  uVar5 = tpidr_el0;
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f;
  while (DAT_00b1113a == 0x4f) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_00b1113a = bVar4;
    }
    if (cVar2 == '\0') goto LAB__text__005aac64;
  }
  ClearExclusiveLocal();
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb1113b,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_00b1113b = DAT_00b1113b + '\x01';
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (DAT_00b1113a != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_00b11138);
        while (DAT_00b1113a == 0x4f) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            DAT_00b1113a = bVar4;
          }
          if (cVar2 == '\0') goto LAB__text__005aac54;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_00b1113a = bVar4;
    }
  } while (cVar2 != '\0');
LAB__text__005aac54:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb1113b,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_00b1113b = DAT_00b1113b + -1;
    }
  } while (cVar2 != '\0');
LAB__text__005aac64:
  puVar6 = _DAT_008a56d8;
  lVar9 = _DAT_008a56d8[0x100];
  puVar8 = _DAT_008a56d8;
  if (lVar9 != 0) {
    lVar10 = lVar9 << 3;
    while ((long *)*puVar8 != param_1) {
      puVar8 = puVar8 + 1;
      lVar10 = lVar10 + -8;
      if (lVar10 == 0) goto LAB__text__005aacd0;
    }
  }
  puVar1 = _DAT_008a56d8 + lVar9;
  if (puVar8 != puVar1) {
    __src = puVar8 + 1;
    if (__src != puVar1) {
      memmove(puVar8,__src,(long)puVar1 - (long)__src);
      lVar9 = puVar6[0x100];
    }
    puVar6[0x100] = lVar9 + -1;
  }
LAB__text__005aacd0:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
    if (bVar3) {
      DAT_00b1113a = 0x4f;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (DAT_00b1113b == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)&DAT_00b11138);
  return;
}


