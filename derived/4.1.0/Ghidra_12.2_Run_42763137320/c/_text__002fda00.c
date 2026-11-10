/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fda00; name: FUN_.text__002fda00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002fda00(long param_1,uint *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  long local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar8 = tpidr_el0;
  bVar6 = (byte)((uint)uVar8 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x7a);
  while (*pbVar1 == 0x4f) {
    cVar10 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB__text__002fdac4;
  }
  pcVar2 = (char *)(param_1 + 0x7b);
  ClearExclusiveLocal();
  do {
    cVar10 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
        while (*pbVar1 == 0x4f) {
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB__text__002fdab4;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB__text__002fdab4:
  do {
    cVar10 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB__text__002fdac4:
  if (*(int *)(param_1 + 0x80) == 0) {
    puVar13 = *(uint **)(param_1 + 8);
    puVar4 = *(uint **)(param_1 + 0x10);
    uVar14 = (long)puVar4 - (long)puVar13;
    if (0 < (long)uVar14) {
      uVar11 = *param_2;
      puVar15 = puVar4;
      do {
        puVar9 = puVar13 + (uVar14 >> 6) * 8;
        if (*puVar9 == uVar11) {
          if (puVar9 != puVar4) {
            uStack_80 = *(undefined8 *)(puVar9 + 2);
            local_a0 = _DAT_008a25b8 + 0x10;
            local_78 = *(undefined8 *)(puVar9 + 6);
            if (uVar11 == 0) {
              uStack_60 = 0;
            }
            else {
              uVar7 = uVar11 - (uVar11 >> 1 & 0x55555555);
              uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
              uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
              if (uVar7 != 1) {
                uVar14 = (ulong)uVar7 & 0x3e;
                do {
                  uVar11 = uVar11 ^ uVar11 << 2;
                  uVar14 = uVar14 - 2;
                  uVar11 = uVar11 ^ uVar11 >> 0xf;
                  uVar11 = uVar11 ^ uVar11 << 0xd;
                  uVar11 = uVar11 ^ uVar11 << 2;
                  uVar11 = uVar11 ^ uVar11 >> 0xf;
                  uVar11 = uVar11 ^ uVar11 << 0xd;
                } while (uVar14 != 0);
              }
              uVar3 = uVar11 ^ uVar11 << 2;
              uVar3 = uVar3 ^ uVar3 >> 0xf;
              if ((uVar7 & 1) != 0) {
                uVar11 = uVar3 ^ uVar3 << 0xd;
              }
              uStack_60 = CONCAT44(uVar11,uVar11);
            }
            local_70 = 0;
            local_68 = 0;
            local_88 = _DAT_008a25c0 + 0x10;
            local_58 = 0;
            local_98 = _DAT_008a25c8 + 0x10;
            uStack_90 = 0;
            cVar10 = FUN__text__002c8ae4(&local_a0);
            if ((cVar10 != '\v') && (plVar12 = *(long **)(param_1 + 0x58), plVar12 != (long *)0x0))
            {
              (**(code **)(*plVar12 + 0x58))(plVar12,param_2);
            }
            uVar11 = FUN__text__002fdcb0(param_1,puVar9,param_3);
            goto LAB__text__002fdbf4;
          }
          break;
        }
        if (*puVar9 < uVar11) {
          puVar13 = puVar9 + 8;
          puVar9 = puVar15;
        }
        puVar15 = puVar9;
        uVar14 = (long)puVar15 - (long)puVar13;
      } while (0 < (long)uVar14);
    }
    uVar11 = FUN__text__002fde80(param_1,param_2,param_3);
  }
  else if (*(long **)(param_1 + 0x58) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    uVar11 = 0;
  }
LAB__text__002fdbf4:
  do {
    cVar10 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x7b) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x78));
  }
  return uVar11 & 1;
}


