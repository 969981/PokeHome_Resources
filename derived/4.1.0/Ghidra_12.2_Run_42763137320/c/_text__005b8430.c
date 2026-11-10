/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b8430; name: FUN_.text__005b8430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b8430(long param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  uVar10 = tpidr_el0;
  bVar8 = (byte)((uint)uVar10 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x56);
  while (*pbVar1 == 0x4f) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__005b84f4;
  }
  pcVar2 = (char *)(param_1 + 0x57);
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
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*pbVar1 == 0x4f) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__005b84e4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005b84e4:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005b84f4:
  if (-1 < *(int *)(param_1 + 0x198)) {
    FUN__text__005cf8ec(param_1 + 0x80,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x2b8)) {
    FUN__text__005cf8ec(param_1 + 0x1a0,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x3d8)) {
    FUN__text__005cf8ec(param_1 + 0x2c0,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x4f8)) {
    FUN__text__005cf8ec(param_1 + 0x3e0,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x618)) {
    FUN__text__005cf8ec(param_1 + 0x500,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x738)) {
    FUN__text__005cf8ec(param_1 + 0x620,param_2);
  }
  uVar10 = _DAT_008a0448;
  if (*(char *)(param_1 + 0x8d8) != '\0') {
    FUN__text__006f45d0(param_1 + 0x770,_DAT_008a0448);
    FUN__text__006f4424(param_1 + 0x770,uVar10,param_1 + 0x7a0);
    *(undefined1 *)(param_1 + 0x8d8) = 0;
  }
  piVar9 = _DAT_008a0300;
  FUN__text__006ecd4c(*(long *)(param_2 + 0x58) + (long)*_DAT_008a0300 * 0x168,param_1 + 0x770);
  uVar10 = _DAT_008a0448;
  if (*(char *)(param_1 + 0x8d9) != '\0') {
    FUN__text__006f49e0(param_1 + 0x7e0,_DAT_008a0448);
    FUN__text__006f483c(param_1 + 0x7e0,uVar10,param_1 + 0x7fc);
    *(undefined1 *)(param_1 + 0x8d9) = 0;
  }
  FUN__text__006ecef4(*(long *)(param_2 + 0x58) + (long)*piVar9 * 0x168,param_1 + 0x7e0);
  if (*(char *)(param_1 + 0x8da) != '\0') {
    if (*(long *)(param_1 + 0x8b8) != 0) {
      FUN__text__006f4820(param_1 + 0x840,_DAT_008a0448);
      lVar12 = *(long *)(param_1 + 0x8b8);
      *(undefined8 *)(param_1 + 0x8b8) = 0;
      if (lVar12 != 0) {
        (**(code **)(**(long **)(param_1 + 0x8c0) + 0x18))
                  (*(long **)(param_1 + 0x8c0),lVar12,*(undefined8 *)(param_1 + 0x8c8),
                   *(undefined8 *)(param_1 + 0x8d0));
      }
    }
    uVar10 = FUN__text__006f45d8(param_1 + 0x868);
    plVar14 = *(long **)(param_1 + 8);
    uVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,uVar10,8);
    lVar12 = *(long *)(param_1 + 0x8b8);
    *(undefined8 *)(param_1 + 0x8b8) = uVar11;
    if (lVar12 != 0) {
      (**(code **)(**(long **)(param_1 + 0x8c0) + 0x18))
                (*(long **)(param_1 + 0x8c0),lVar12,*(undefined8 *)(param_1 + 0x8c8),
                 *(undefined8 *)(param_1 + 0x8d0));
      uVar11 = *(undefined8 *)(param_1 + 0x8b8);
    }
    *(long **)(param_1 + 0x8c0) = plVar14;
    *(undefined8 *)(param_1 + 0x8c8) = uVar10;
    *(undefined8 *)(param_1 + 0x8d0) = 8;
    FUN__text__006f45f8(param_1 + 0x840,uVar11,uVar10);
    FUN__text__006f4610(param_1 + 0x840,_DAT_008a0448,param_1 + 0x868);
    *(undefined1 *)(param_1 + 0x8da) = 0;
  }
  FUN__text__006ece50(*(long *)(param_2 + 0x58) + (long)*piVar9 * 0x168,param_1 + 0x840);
  lVar15 = *(long *)(param_1 + 0x748);
  for (lVar12 = *(long *)(param_1 + 0x740); lVar12 != lVar15; lVar12 = lVar12 + 0x200) {
    if (-1 < *(int *)(lVar12 + 0x1ec)) {
      FUN__text__005d5480(lVar12);
      iVar5 = *piVar9;
      lVar13 = *(long *)(param_2 + 0x58);
      uVar3 = *(undefined4 *)(lVar12 + 0x1ec);
      uVar4 = *(undefined4 *)(lVar12 + 0x1e8);
      uVar10 = FUN__text__005d54d0(lVar12);
      FUN__text__006ee15c(lVar13 + (long)iVar5 * 0x168,uVar3,uVar4,uVar10,
                          *(long *)(lVar12 + 0x178) + 0xd0);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x57) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  return;
}


