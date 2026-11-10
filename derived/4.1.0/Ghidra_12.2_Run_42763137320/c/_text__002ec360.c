/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ec360; name: FUN_.text__002ec360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__002ec360(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  uint *puVar10;
  long *plVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  long local_a0 [4];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar9 = tpidr_el0;
  bVar7 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x7a);
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__002ec424;
  }
  pcVar2 = (char *)(param_1 + 0x7b);
  ClearExclusiveLocal();
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__002ec414;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__002ec414:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__002ec424:
  plVar11 = *(long **)(param_1 + 0x58);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2);
  }
  puVar13 = *(uint **)(param_1 + 8);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar15 = (long)puVar4 - (long)puVar13;
  if (0 < (long)uVar15) {
    uVar12 = *param_2;
    puVar14 = puVar4;
    do {
      puVar10 = puVar13 + (uVar15 >> 6) * 8;
      if (*puVar10 == uVar12) {
        if (puVar10 != puVar4) {
          uStack_80 = *(undefined8 *)(puVar10 + 2);
          local_a0[0] = _DAT_008a25b8 + 0x10;
          local_78 = *(undefined8 *)(puVar10 + 6);
          if (uVar12 == 0) {
            uStack_60 = 0;
          }
          else {
            uVar8 = uVar12 - (uVar12 >> 1 & 0x55555555);
            uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
            uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
            if (uVar8 != 1) {
              uVar15 = (ulong)uVar8 & 0x3e;
              do {
                uVar12 = uVar12 ^ uVar12 << 2;
                uVar15 = uVar15 - 2;
                uVar12 = uVar12 ^ uVar12 >> 0xf;
                uVar12 = uVar12 ^ uVar12 << 0xd;
                uVar12 = uVar12 ^ uVar12 << 2;
                uVar12 = uVar12 ^ uVar12 >> 0xf;
                uVar12 = uVar12 ^ uVar12 << 0xd;
              } while (uVar15 != 0);
            }
            uVar3 = uVar12 ^ uVar12 << 2;
            uVar3 = uVar3 ^ uVar3 >> 0xf;
            if ((uVar8 & 1) != 0) {
              uVar12 = uVar3 ^ uVar3 << 0xd;
            }
            uStack_60 = CONCAT44(uVar12,uVar12);
          }
          local_68 = 0;
          local_70 = 0;
          local_58 = 0;
          local_a0[3] = _DAT_008a25c0 + 0x10;
          local_a0[1] = 0x87ad98;
          local_a0[2] = 0;
          auVar17 = FUN__text__002c8220(local_a0,*param_3,*param_4);
          param_4 = auVar17._8_8_;
          uVar16 = auVar17._0_8_ & 0xffffffffffffff00;
          uVar15 = auVar17._0_8_ & 0xff;
          goto LAB__text__002ec530;
        }
        break;
      }
      if (*puVar10 < uVar12) {
        puVar13 = puVar10 + 8;
        puVar10 = puVar14;
      }
      puVar14 = puVar10;
      uVar15 = (long)puVar14 - (long)puVar13;
    } while (0 < (long)uVar15);
  }
  uVar15 = 0;
  uVar16 = 0;
LAB__text__002ec530:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x7b) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x78));
  }
  auVar17._0_8_ = uVar16 | uVar15;
  auVar17._8_8_ = param_4;
  return auVar17;
}


