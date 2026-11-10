/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b75a0; name: FUN_.text__005b75a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b75a0(long param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  
  if (((*_DAT_008a01f8 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(_DAT_008a01f8), puVar7 = _DAT_008a0200, iVar8 != 0)) {
    *_DAT_008a0200 = 0xcbf29ce484222645;
    puVar7[1] = 0x70f683;
    puVar7[2] = 0;
    puVar7[3] = 0;
    FUN__text__001001d0(_DAT_008a0208,puVar7,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_008a01f8);
  }
  FUN__text__005b709c(param_1,_DAT_008a0200,0);
  uVar12 = tpidr_el0;
  bVar6 = (byte)((uint)uVar12 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x56);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005b7724;
  }
  ClearExclusiveLocal();
  pcVar2 = (char *)(param_1 + 0x57);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005b7714;
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
LAB__text__005b7714:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005b7724:
  puVar14 = (uint *)&DAT_00757c98;
  do {
    uVar3 = *puVar14;
    uVar15 = (ulong)uVar3;
    if ((*(uint *)(uVar15 * 4 + 0x757cb0) & *(uint *)(param_2 + 0x11c)) != 0) {
      lVar13 = *(long *)(param_2 + 8);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar16 = param_1 + 0x80 + uVar15 * 0x120;
      lVar10 = *(long *)(lVar16 + 8);
      *(long *)(lVar16 + 8) = lVar13;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      }
      pcVar11 = *(code **)(lVar16 + 0x18);
      if (pcVar11 != (code *)0x0) {
        *(undefined8 *)(lVar16 + 0x20) = 0;
        *(undefined8 *)(lVar16 + 0x28) = 0;
        *(undefined8 *)(lVar16 + 0x10) = 0;
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (*pcVar11)(lVar16 + 0x30);
      }
      if (*(code **)(param_2 + 0x20) != (code *)0x0) {
        (**(code **)(param_2 + 0x20))(param_2 + 0x30,lVar16 + 0x30);
        uVar12 = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(lVar16 + 0x28) = uVar12;
        uVar12 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
      }
      pcVar11 = *(code **)(lVar16 + 0x98);
      if (pcVar11 != (code *)0x0) {
        *(undefined8 *)(lVar16 + 0xa0) = 0;
        *(undefined8 *)(lVar16 + 0xa8) = 0;
        *(undefined8 *)(lVar16 + 0x90) = 0;
        *(undefined8 *)(lVar16 + 0x98) = 0;
        (*pcVar11)(lVar16 + 0xb0);
      }
      if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
        (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,lVar16 + 0xb0);
        uVar12 = *(undefined8 *)(param_2 + 0xa8);
        *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(param_2 + 0x98);
        *(undefined8 *)(lVar16 + 0xa8) = uVar12;
        uVar12 = *(undefined8 *)(param_2 + 0x90);
        *(undefined8 *)(lVar16 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
        *(undefined8 *)(lVar16 + 0x90) = uVar12;
      }
      lVar13 = param_1 + 0x80 + uVar15 * 0x120;
      *(undefined8 *)(lVar13 + 0x118) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(lVar13 + 0x110) = *(undefined8 *)(param_2 + 0x110);
      lVar10 = *(long *)(param_1 + 0x748);
      for (lVar13 = *(long *)(param_1 + 0x740); lVar13 != lVar10; lVar13 = lVar13 + 0x200) {
        if (*(uint *)(lVar13 + 0x1e8) == uVar3) {
          uVar9 = FUN__text__005cf99c(lVar16,uVar3,2,*(undefined8 *)(lVar13 + 0x28));
          *(undefined4 *)(lVar13 + 0x1ec) = uVar9;
        }
      }
    }
    puVar14 = puVar14 + 1;
  } while (puVar14 != (uint *)0x757cb0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x57) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  return;
}


