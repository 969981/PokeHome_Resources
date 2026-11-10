/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aa950; name: FUN_.text__005aa950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005aa950(long *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  *param_1 = _DAT_008a56d0 + 0x10;
  if (((DAT_00b11140 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00b11140), iVar6 != 0)) {
    nn::os::InitializeLightEvent(&DAT_00b11138,0,1);
    DAT_00b1113a = 0x4f;
    DAT_00b1113b = '\0';
    FUN__text__001001d0(_DAT_008a5658,&DAT_00b11138,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00b11140);
  }
  uVar4 = tpidr_el0;
  bVar3 = (byte)((uint)uVar4 >> 0xd) & 0x4f;
  while (DAT_00b1113a == 0x4f) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b1113a = bVar3;
    }
    if (cVar1 == '\0') goto LAB__text__005aaa34;
  }
  ClearExclusiveLocal();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113b,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b1113b = DAT_00b1113b + '\x01';
    }
  } while (cVar1 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (DAT_00b1113a != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_00b11138);
        while (DAT_00b1113a == 0x4f) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            DAT_00b1113a = bVar3;
          }
          if (cVar1 == '\0') goto LAB__text__005aaa24;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b1113a = bVar3;
    }
  } while (cVar1 != '\0');
LAB__text__005aaa24:
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113b,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b1113b = DAT_00b1113b + -1;
    }
  } while (cVar1 != '\0');
LAB__text__005aaa34:
  lVar5 = _DAT_008a56d8;
  if (*(long *)(_DAT_008a56d8 + 0x800) == 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(_DAT_008a56d8 + *(long *)(_DAT_008a56d8 + 0x800) * 8) = param_1;
  *(long *)(lVar5 + 0x800) = *(long *)(lVar5 + 0x800) + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10);
    if (bVar2) {
      DAT_00b1113a = 0x4f;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  DataMemoryBarrier(2,3);
  if (DAT_00b1113b == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)&DAT_00b11138);
  return;
}


