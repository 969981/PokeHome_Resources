/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e4d10; name: FUN_.text__002e4d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002e4d10(long param_1,uint *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  long local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar8 = tpidr_el0;
  uVar15 = (uint)uVar8 >> 0xd & 0x4f;
  pcVar1 = (char *)(param_1 + 0x7a);
  while (cVar5 = (char)uVar15, *pcVar1 == 'O') {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar7) {
      *pcVar1 = cVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__002e4dd4;
  }
  pcVar2 = (char *)(param_1 + 0x7b);
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
    if (*pcVar1 != 'O') {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
        while (*pcVar1 == 'O') {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar7) {
            *pcVar1 = cVar5;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__002e4dc4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar7) {
      *pcVar1 = cVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__002e4dc4:
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__002e4dd4:
  plVar11 = *(long **)(param_1 + 0x58);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2);
  }
  puVar12 = *(uint **)(param_1 + 8);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar14 = (long)puVar4 - (long)puVar12;
  if (0 < (long)uVar14) {
    uVar10 = *param_2;
    puVar13 = puVar4;
    do {
      puVar9 = puVar12 + (uVar14 >> 6) * 8;
      if (*puVar9 == uVar10) {
        if (puVar9 != puVar4) {
          uStack_70 = *(undefined8 *)(puVar9 + 2);
          local_90 = _DAT_008a25b8 + 0x10;
          local_68 = *(undefined8 *)(puVar9 + 6);
          if (uVar10 == 0) {
            uStack_50 = 0;
          }
          else {
            uVar15 = uVar10 - (uVar10 >> 1 & 0x55555555);
            uVar15 = (uVar15 & 0x33333333) + (uVar15 >> 2 & 0x33333333);
            uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
            if (uVar15 != 1) {
              uVar14 = (ulong)uVar15 & 0x3e;
              do {
                uVar10 = uVar10 ^ uVar10 << 2;
                uVar14 = uVar14 - 2;
                uVar10 = uVar10 ^ uVar10 >> 0xf;
                uVar10 = uVar10 ^ uVar10 << 0xd;
                uVar10 = uVar10 ^ uVar10 << 2;
                uVar10 = uVar10 ^ uVar10 >> 0xf;
                uVar10 = uVar10 ^ uVar10 << 0xd;
              } while (uVar14 != 0);
            }
            uVar3 = uVar10 ^ uVar10 << 2;
            uVar3 = uVar3 ^ uVar3 >> 0xf;
            if ((uVar15 & 1) != 0) {
              uVar10 = uVar3 ^ uVar3 << 0xd;
            }
            uStack_50 = CONCAT44(uVar10,uVar10);
          }
          local_60 = 0;
          local_58 = 0;
          local_78 = _DAT_008a25c0 + 0x10;
          local_48 = 0;
          local_88 = _DAT_008a25c8 + 0x10;
          uStack_80 = 0;
          uVar10 = FUN__text__002e4f68(&local_90);
          uVar15 = uVar10 >> 8 & 0xff;
          goto LAB__text__002e4ee0;
        }
        break;
      }
      if (*puVar9 < uVar10) {
        puVar12 = puVar9 + 8;
        puVar9 = puVar13;
      }
      puVar13 = puVar9;
      uVar14 = (long)puVar13 - (long)puVar12;
    } while (0 < (long)uVar14);
  }
  uVar10 = 0;
LAB__text__002e4ee0:
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar7) {
      *pcVar1 = 'O';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x7b) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x78));
  }
  return uVar10 & 0xff | uVar15 << 8;
}


