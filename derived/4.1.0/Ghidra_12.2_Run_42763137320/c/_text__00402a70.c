/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00402a70; name: FUN_.text__00402a70
 */


void * FUN__text__00402a70(int param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  void *__s;
  ulong *puVar16;
  ulong uVar17;
  undefined8 *__s_00;
  ulong local_88;
  ulong local_78;
  undefined8 local_68;
  
  piVar1 = (int *)(&DAT_00ae8ff8 + (long)param_1 * 0x638);
  while (*piVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__00402b34;
  }
  iVar7 = 1000;
  ClearExclusiveLocal();
  do {
    Yield();
    iVar7 = iVar7 + -1;
    while (*piVar1 == 0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB__text__00402b10;
    }
    ClearExclusiveLocal();
  } while (iVar7 != 0);
LAB__text__00402b10:
  if (iVar7 == 0) {
    do {
      FUN__text__00405bf0();
      while (*piVar1 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__00402b34;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB__text__00402b34:
  if (param_2 == 0) {
    __s = *(void **)(&DAT_00ae9000 + (long)param_1 * 0x638);
    if (__s != (void *)0x0) {
      *(undefined8 *)(&DAT_00ae9000 + (long)param_1 * 0x638) = *(undefined8 *)((long)__s + 0xd10);
      goto LAB__text__00402fa8;
    }
    *(undefined8 *)(&DAT_00ae9000 + (long)param_1 * 0x638) = 0;
    lVar15 = (long)param_1 * 0x638;
    __s = *(void **)(&DAT_00ae9008 + lVar15);
  }
  else {
    lVar15 = (long)param_1 * 0x638;
    __s = *(void **)(&DAT_00ae9008 + lVar15);
  }
  puVar6 = (undefined8 *)(&DAT_00ae9008 + lVar15);
  if (__s == (void *)0x0) {
    lVar15 = (long)param_1 * 0x638;
    *puVar6 = 0;
    puVar16 = &DAT_00ae8a40 + (long)param_1 * 199;
    uVar9 = *puVar16;
    plVar2 = (long *)(&DAT_00ae8e70 + lVar15);
    local_88 = 0;
    if (uVar9 != 0) {
      local_88 = (uVar9 + 0x3125f) / uVar9;
    }
    local_78 = local_88;
    if (*(ulong *)(&DAT_00ae8e70 + lVar15) < local_88) {
      uVar10 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638);
      if (local_88 * uVar9 < uVar10) {
        local_88 = 0;
        if (uVar9 != 0) {
          local_88 = uVar10 / uVar9;
        }
        uVar14 = uVar10 - 0x60;
        if (uVar14 < 0x31200) {
          uVar13 = uVar14 / 0x3120;
        }
        else {
          uVar13 = 0x10;
        }
        uVar17 = 0x100;
        if (uVar14 >> 0xd < 0x189) {
          uVar17 = uVar13;
        }
        local_78 = 0;
        if (uVar9 != 0) {
          local_78 = (uVar9 + uVar17 * 0x3120 + 0x5f) / uVar9;
        }
      }
      else {
        uVar17 = 0x10;
        uVar10 = local_88 * uVar9;
      }
      uVar14 = 0;
      if (uVar9 <= uVar10) {
        if (uVar9 <= *(ulong *)(&DAT_00ae8a38 + (long)param_1 * 0x638)) {
          uVar9 = 0;
        }
        uVar14 = uVar9;
      }
      local_68 = 0;
      while( true ) {
        uVar13 = DAT_00ae89d0;
        uVar9 = DAT_00ae89d0 + uVar14 + uVar10;
        if (!(DAT_00ae89c8 == 0 || uVar9 <= DAT_00ae89c8)) break;
        while (DAT_00ae89d0 == uVar13) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
          if (bVar5) {
            cVar4 = ExclusiveMonitorsStatus();
            DAT_00ae89d0 = uVar9;
          }
          if (cVar4 == '\0') {
            uVar9 = (**(code **)(&DAT_00ae89e0 + (long)param_1 * 0x638))(uVar14 + uVar10,&local_68);
            uVar8 = 0;
            if ((uVar14 != 0) && (uVar9 != 0)) {
              uVar14 = uVar14 - (uVar9 & (*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) ^
                                         0xffffffffffffffff));
              uVar9 = uVar9 + uVar14;
              uVar8 = (undefined4)(uVar14 >> 3);
            }
            if (uVar9 == 0) goto LAB__text__00402fa4;
            *(undefined4 *)(uVar9 + 0x3c) = uVar8;
            *(undefined4 *)(uVar9 + 0x28) = 1;
            *(int *)(uVar9 + 0x2c) = (int)local_78;
            *(int *)(uVar9 + 0x30) = (int)local_88;
            *(undefined8 *)(uVar9 + 0x58) = local_68;
            *(int *)(uVar9 + 0x38) = (int)local_88;
            goto LAB__text__00402dac;
          }
        }
        ClearExclusiveLocal();
      }
LAB__text__00402fa4:
      __s = (void *)0x0;
    }
    else {
      lVar15 = (long)param_1 * 0x638;
      uVar9 = *(ulong *)(&DAT_00ae8e68 + lVar15);
      lVar11 = *(long *)(&DAT_00ae8e78 + lVar15);
      if (uVar9 - lVar11 != 0) {
        *(undefined4 *)(uVar9 + 0x28) = 2;
        uVar17 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638);
        *(undefined4 *)(uVar9 + 0x3c) = 0;
        *(int *)(uVar9 + 0x34) = (int)(uVar9 - lVar11 >> (uVar17 & 0x3f));
      }
      *(int *)(uVar9 + 0x2c) = (int)local_88;
      lVar12 = *plVar2;
      *plVar2 = lVar12 - local_88;
      lVar11 = 0;
      if (lVar12 - local_88 != 0) {
        lVar11 = uVar9 + (local_88 << (*(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638) & 0x3f));
      }
      *(long *)(&DAT_00ae8e68 + lVar15) = lVar11;
      uVar17 = 0x10;
LAB__text__00402dac:
      uVar10 = *puVar16;
      __s = (void *)(uVar9 + 0x60);
      memset(__s,0,0x3118);
      piVar3 = (int *)(&DAT_00ae8e60 + (long)param_1 * 0x638);
      do {
        iVar7 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iVar7 = iVar7 + 2;
      lVar15 = ((ulong)(long)iVar7 % 0x2f) * 8 + (long)param_1 * 0x638;
      *(int *)(uVar9 + 0xd78) = iVar7;
      uVar10 = (uVar10 - 0x60) / 0x3120;
      if (uVar10 <= uVar17) {
        uVar10 = uVar17;
      }
      *(undefined8 *)(uVar9 + 0xd68) = *(undefined8 *)(&DAT_00ae89c0 + lVar15 + 0x4c0);
      *(void **)(&DAT_00ae89c0 + lVar15 + 0x4c0) = __s;
      *(int *)(uVar9 + 0xd64) = (int)uVar10 + -1;
      if (1 < uVar10) {
        __s_00 = (undefined8 *)(uVar9 + 0x3180);
        do {
          memset(__s_00,0,0x3118);
          do {
            iVar7 = *piVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = iVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          iVar7 = iVar7 + 2;
          *(int *)(__s_00 + 0x1a3) = iVar7;
          uVar10 = uVar10 - 1;
          lVar15 = ((ulong)(long)iVar7 % 0x2f) * 8 + (long)param_1 * 0x638;
          __s_00[0x1a1] = *(undefined8 *)(&DAT_00ae89c0 + lVar15 + 0x4c0);
          *(undefined8 **)(&DAT_00ae89c0 + lVar15 + 0x4c0) = __s_00;
          __s_00[0x1a4] = __s;
          *__s_00 = 0xffffffffffffffff;
          __s_00[0x1a2] = *puVar6;
          *puVar6 = __s_00;
          __s_00 = __s_00 + 0x624;
        } while (1 < uVar10);
      }
      uVar17 = local_88 - local_78;
      if (!(local_88 < local_78 || uVar17 == 0)) {
        uVar10 = *puVar16;
        uVar14 = *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638);
        *(ulong *)(uVar9 + 0xd58) = uVar9;
        lVar15 = uVar9 + uVar10 * local_78;
        uVar10 = uVar17;
        if (uVar14 <= uVar17) {
          uVar10 = uVar14;
        }
        *(int *)(uVar9 + 0xd60) = (int)uVar10;
        *(long *)(uVar9 + 0xd50) = lVar15;
        if (uVar14 <= uVar17 && uVar17 - uVar14 != 0) {
          uVar10 = *puVar16;
          *(ulong *)(&DAT_00ae8e78 + (long)param_1 * 0x638) = uVar9;
          *plVar2 = uVar17 - uVar14;
          *(ulong *)(&DAT_00ae8e68 + (long)param_1 * 0x638) = lVar15 + uVar10 * uVar14;
        }
      }
    }
  }
  else {
    *puVar6 = *(undefined8 *)((long)__s + 0xd10);
  }
LAB__text__00402fa8:
  *piVar1 = 0;
  FUN__text__00404130(param_1,__s,0);
  return __s;
}


