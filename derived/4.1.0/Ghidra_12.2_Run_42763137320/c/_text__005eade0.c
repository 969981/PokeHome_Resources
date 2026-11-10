/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eade0; name: FUN_.text__005eade0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005eade0(long *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long local_148;
  long local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined *local_b8;
  long *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar10 = _DAT_0089f690;
  uVar7 = tpidr_el0;
  uVar11 = uVar7 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar10 + 0x10;
  lVar10 = _DAT_008a5b80;
  if (uVar11 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(uVar11 + 0x98) != 0) {
      lVar9 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = lVar10 + 0x10;
  lVar8 = _DAT_008a5b88;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = lVar10 + 0x10;
  plVar14 = param_1 + 0xf;
  *plVar14 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *param_1 = lVar8 + 0x10;
  param_1[1] = lVar9;
  param_1[9] = lVar8 + 0x48;
  *(undefined8 *)((long)param_1 + 0xac) = 0xff;
  nn::os::InitializeLightEvent(param_1 + 0x9c,0,1);
  *(undefined1 *)((long)param_1 + 0x4e2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x4e3) = 0;
  param_1[0x9d] = 0x3f00000000;
  param_1[0x9e] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  nn::os::InitializeLightEvent(param_1 + 0xc1,0,1);
  *(undefined1 *)((long)param_1 + 0x60a) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x60b) = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  if (((uVar11 == 0) || (*(long *)(uVar11 + 0x98) == 0)) ||
     (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0)) {
    lVar10 = FUN__text__005f52b0();
    param_1[0xc5] = 0;
    param_1[0xc4] = lVar10;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    param_1[199] = 0;
    if (uVar11 != 0) goto LAB__text__005eaf60;
LAB__text__005eaf74:
    lVar10 = FUN__text__005f52b0();
  }
  else {
    param_1[0xc4] = lVar10;
    param_1[0xc5] = 0;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    param_1[199] = 0;
LAB__text__005eaf60:
    if ((*(long *)(uVar11 + 0x98) == 0) ||
       (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0))
    goto LAB__text__005eaf74;
  }
  param_1[200] = lVar10;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  if (((uVar11 == 0) || (*(long *)(uVar11 + 0x98) == 0)) ||
     (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0)) {
    lVar10 = FUN__text__005f52b0();
    param_1[0xd0] = 0;
    param_1[0xcf] = lVar10;
    *(undefined4 *)(param_1 + 0xd1) = 0;
    param_1[0xd2] = 0;
    if (uVar11 != 0) goto LAB__text__005eafe0;
LAB__text__005eaff4:
    lVar10 = FUN__text__005f52b0();
  }
  else {
    param_1[0xcf] = lVar10;
    param_1[0xd0] = 0;
    *(undefined4 *)(param_1 + 0xd1) = 0;
    param_1[0xd2] = 0;
LAB__text__005eafe0:
    if ((*(long *)(uVar11 + 0x98) == 0) ||
       (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0))
    goto LAB__text__005eaff4;
  }
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd3] = lVar10;
  param_1[0xd4] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f800000;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  if (((uVar11 == 0) || (*(long *)(uVar11 + 0x98) == 0)) ||
     (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0)) {
    lVar10 = FUN__text__005f52b0();
    param_1[0xdb] = 0;
    param_1[0xda] = lVar10;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    param_1[0xdd] = 0;
    if (uVar11 != 0) goto LAB__text__005eb064;
  }
  else {
    param_1[0xda] = lVar10;
    param_1[0xdb] = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    param_1[0xdd] = 0;
LAB__text__005eb064:
    if ((*(long *)(uVar11 + 0x98) != 0) &&
       (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 != 0))
    goto LAB__text__005eb07c;
  }
  lVar10 = FUN__text__005f52b0();
LAB__text__005eb07c:
  param_1[0xde] = lVar10;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x3f800000;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  if (((uVar11 == 0) || (*(long *)(uVar11 + 0x98) == 0)) ||
     (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0)) {
    lVar10 = FUN__text__005f52b0();
  }
  param_1[0xe7] = lVar10;
  pbVar3 = (byte *)(param_1 + 0x2b3);
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  nn::os::InitializeLightEvent(param_1 + 0xea,0,1);
  *(undefined1 *)((long)param_1 + 0x752) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x753) = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  if (((uVar11 == 0) || (*(long *)(uVar11 + 0x98) == 0)) ||
     (lVar10 = *(long *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x10), lVar10 == 0)) {
    lVar10 = FUN__text__005f52b0();
  }
  lVar9 = 0x798;
  param_1[0xee] = lVar10;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  param_1[0xf2] = 0;
  do {
    FUN__text__006f4828((long)param_1 + lVar9);
    lVar9 = lVar9 + 0x1c;
  } while (lVar9 != 0x1598);
  param_1[0x2b8] = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  plVar15 = param_1 + 0x2b7;
  *plVar15 = 0;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  param_1[0x2b4] = 0;
  FUN__text__006f45e4();
  plVar16 = (long *)param_1[1];
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  param_1[0xc] = (long)plVar16;
  local_c0 = _DAT_0089fc88 + 0x10;
  param_1[0xe] = param_3;
  local_88 = *(undefined8 *)(param_2 + 0x38);
  uStack_80 = *(undefined8 *)(param_2 + 0x40);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  local_98 = *(undefined8 *)(param_2 + 0x28);
  uStack_90 = *(undefined8 *)(param_2 + 0x30);
  local_a0 = *(undefined8 *)(param_2 + 0x20);
  local_b8 = &DAT_00b0d830;
  _local_78 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20),
                       *(int *)(param_2 + 0x48) * 3);
  local_b0 = param_1 + 0xb;
  plStack_a8 = param_1 + 0xd;
  lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x1708,8);
  if (*(long *)(uVar11 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = plVar16;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  FUN__text__006e1400(lVar10,&local_c0);
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
  puVar17 = (undefined8 *)*plVar14;
  *plVar14 = lVar10;
  if (puVar17 != (undefined8 *)0x0) {
    (**(code **)*puVar17)(puVar17);
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],puVar17,param_1[0x11],param_1[0x12]);
    lVar10 = param_1[0xf];
  }
  param_1[0x10] = (long)plVar16;
  param_1[0x11] = 0x1708;
  param_1[0x12] = 8;
  FUN__text__006e2e18(lVar10,_DAT_008a5b90,param_1);
  FUN__text__006e2e30(param_1[0xf],_DAT_008a5b98,param_1);
  uVar11 = (ulong)*(int *)(param_2 + 0x48);
  uVar13 = param_1[0xec] - param_1[0xeb] >> 3;
  if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
    if (uVar11 < uVar13) {
      param_1[0xec] = param_1[0xeb] + uVar11 * 8;
    }
  }
  else {
    FUN__text__005ec590(param_1 + 0xeb,uVar11 - uVar13);
  }
  local_100 = 0;
  lVar10 = FUN__text__0015223c(&local_140,param_1[1],&local_100);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  pcVar12 = *(code **)(lVar10 + 0x278);
  *(undefined4 *)(lVar10 + 0x268) = 0;
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x280) = 0;
    *(undefined8 *)(lVar10 + 0x288) = 0;
    *(undefined8 *)(lVar10 + 0x270) = 0;
    *(undefined8 *)(lVar10 + 0x278) = 0;
    (*pcVar12)(lVar10 + 0x290);
  }
  *(long **)(lVar10 + 0x290) = param_1;
  *(undefined1 **)(lVar10 + 0x270) = &LAB__text__005ec790;
  *(undefined1 **)(lVar10 + 0x280) = &LAB__text__005ecd58;
  *(undefined1 **)(lVar10 + 0x288) = &LAB__text__005ecd64;
  *(undefined **)(lVar10 + 0x278) = &DAT__text__005ecbfc;
  pbVar1 = (byte *)(lVar10 + 0x146);
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005eb414;
  }
  pcVar2 = (char *)(lVar10 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005eb404;
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
LAB__text__005eb404:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005eb414:
  FUN__text__005e75f8(lVar10,0,*(undefined8 *)(*_DAT_0089fd80 + 0x50));
  lVar9 = param_1[0xe3];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  param_1[0xe3] = lVar10;
  FUN__text__005eb7a0(param_1 + 0xe4,0x40);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar10 + 0x147) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x144));
  }
  uStack_cc = uStack_cc & 0xffffff00;
  local_100 = 0;
  uStack_f8 = 0x43800000780;
  local_c8 = 0;
  local_f0 = 0x50000000b01;
  uStack_e8 = 0xb01000002d0;
  local_e0 = 0x800000008;
  uStack_d8 = 0x100000b01;
  local_d0 = 1;
  FUN__text__00146354(&local_140,param_1[1],&local_100);
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
  }
  param_1[0x13] = local_140;
  local_120 = local_e0;
  uStack_118 = uStack_d8;
  local_110 = CONCAT44(uStack_cc,local_d0);
  uStack_108 = CONCAT44(uStack_c4,local_c8);
  local_140 = local_100;
  uStack_138 = uStack_f8;
  _uStack_128 = CONCAT44(0x1307,(int)uStack_e8);
  _local_130 = CONCAT44((int)((ulong)local_f0 >> 0x20),0x1307);
  FUN__text__00146470(&local_148,param_1[1],&local_140);
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
  }
  param_1[0x14] = local_148;
  FUN__text__006ebd10(pbVar3);
  *(undefined1 *)((long)param_1 + 0x159b) = 0;
  *(undefined2 *)((long)param_1 + 0x1599) = 0x701;
  *(undefined1 *)((long)param_1 + 0x159e) = 0;
  *pbVar3 = *pbVar3 | 1;
  *(undefined2 *)((long)param_1 + 0x159c) = 0x700;
  FUN__text__006ebd38(plVar15);
  param_1[0x2ba] = (long)pbVar3;
  *(undefined1 *)(param_1 + 0x2b7) = 1;
  lVar10 = FUN__text__006f45d8(plVar15);
  plVar14 = (long *)param_1[1];
  lVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar10,8);
  lVar8 = param_1[0x2c2];
  param_1[0x2c2] = lVar9;
  if (lVar8 != 0) {
    (**(code **)(*(long *)param_1[0x2c3] + 0x18))
              ((long *)param_1[0x2c3],lVar8,param_1[0x2c4],param_1[0x2c5]);
    lVar9 = param_1[0x2c2];
  }
  param_1[0x2c3] = (long)plVar14;
  param_1[0x2c4] = lVar10;
  param_1[0x2c5] = 8;
  FUN__text__006f45f8(param_1 + 0x2bd,lVar9,lVar10);
  FUN__text__006f4610(param_1 + 0x2bd,_DAT_008a0448,plVar15);
  return;
}


