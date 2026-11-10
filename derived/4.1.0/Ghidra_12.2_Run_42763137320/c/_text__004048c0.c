/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004048c0; name: FUN_.text__004048c0
 */


ulong FUN__text__004048c0(int param_1,long param_2,ulong param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 local_68;
  
  iVar15 = (int)param_3;
  if (*(uint *)(param_2 + 0xd00) < param_3) {
    puVar17 = &DAT_00ae8a40 + (long)param_1 * 199;
    uVar7 = *puVar17;
    uVar8 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638);
    if ((uVar7 < uVar8) ||
       (uVar11 = *(ulong *)(&DAT_00ae8a58 + (long)param_1 * 0x638),
       *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638) < uVar11)) {
      piVar1 = (int *)(&DAT_00ae8ff8 + (long)param_1 * 0x638);
LAB__text__00404944:
      if (*piVar1 == 0) goto code_r0x0040494c;
      iVar5 = 1000;
      ClearExclusiveLocal();
      do {
        Yield();
        iVar5 = iVar5 + -1;
        while (*piVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__004049f0;
        }
        ClearExclusiveLocal();
      } while (iVar5 != 0);
LAB__text__004049f0:
      if (iVar5 == 0) {
        do {
          FUN__text__00405bf0();
          while (*piVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB__text__00404a30;
          }
          ClearExclusiveLocal();
        } while( true );
      }
LAB__text__00404a30:
      uVar8 = *(ulong *)(&DAT_00ae8e70 + (long)param_1 * 0x638);
      if (uVar8 < param_3) {
        uVar8 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638);
        bVar4 = true;
        uVar11 = *(ulong *)(&DAT_00ae8a58 + (long)param_1 * 0x638);
        uVar7 = *puVar17;
        uVar13 = uVar11;
        if (uVar11 <= param_3) {
          uVar13 = param_3;
        }
        if (uVar7 < uVar8) goto LAB__text__00404a6c;
        goto LAB__text__00404a90;
      }
      uVar7 = param_3;
      if (*(int *)(param_2 + 0xd00) == 0) {
        uVar7 = *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638);
      }
      lVar16 = (long)param_1 * 0x638;
      if (uVar7 <= uVar8) {
        uVar8 = uVar7;
      }
      uVar7 = *(ulong *)(&DAT_00ae8e68 + lVar16);
      lVar9 = *(long *)(&DAT_00ae8e78 + lVar16);
      if (uVar7 - lVar9 != 0) {
        *(undefined4 *)(uVar7 + 0x28) = 2;
        uVar11 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638);
        *(undefined4 *)(uVar7 + 0x3c) = 0;
        *(int *)(uVar7 + 0x34) = (int)(uVar7 - lVar9 >> (uVar11 & 0x3f));
      }
      *(int *)(uVar7 + 0x2c) = (int)uVar8;
      lVar9 = *(long *)(&DAT_00ae8e70 + (long)param_1 * 0x638) - uVar8;
      *(long *)(&DAT_00ae8e70 + (long)param_1 * 0x638) = lVar9;
      if (lVar9 == 0) {
        *(long *)(&DAT_00ae8e68 + lVar16) = 0;
      }
      else {
        *(ulong *)(&DAT_00ae8e68 + lVar16) =
             uVar7 + (uVar8 << (*(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638) & 0x3f));
      }
      if (param_3 < uVar8) {
        uVar10 = *(undefined8 *)(&DAT_00ae8e78 + lVar16);
        uVar11 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638);
        *(int *)(param_2 + 0xd00) = (int)uVar8 - iVar15;
        *(undefined8 *)(param_2 + 0xcf8) = uVar10;
        *(ulong *)(param_2 + 0xcf0) = uVar7 + (param_3 << (uVar11 & 0x3f));
      }
      *(int *)(uVar7 + 0x2c) = iVar15;
      goto LAB__text__00404d5c;
    }
    bVar4 = false;
    uVar13 = uVar11;
    if (uVar11 <= param_3) {
      uVar13 = param_3;
    }
    if (uVar7 < uVar8) {
LAB__text__00404a6c:
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = (uVar7 * uVar13) / uVar8;
      }
      if (uVar7 * uVar13 != uVar14 * uVar8) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar13 / uVar11;
        }
        uVar13 = uVar11 + uVar8 * uVar11;
      }
    }
LAB__text__00404a90:
    uVar11 = uVar13 * uVar7;
    local_68 = 0;
    uVar8 = 0;
    if (uVar7 <= uVar11) {
      if (uVar7 <= *(ulong *)(&DAT_00ae8a38 + (long)param_1 * 0x638)) {
        uVar7 = 0;
      }
      uVar8 = uVar7;
    }
    lVar16 = uVar8 + uVar11;
    while (uVar11 = DAT_00ae89d0, uVar7 = DAT_00ae89d0 + lVar16,
          DAT_00ae89c8 == 0 || uVar7 <= DAT_00ae89c8) {
      while (DAT_00ae89d0 == uVar11) {
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
        if (bVar2) {
          cVar3 = ExclusiveMonitorsStatus();
          DAT_00ae89d0 = uVar7;
        }
        if (cVar3 == '\0') {
          uVar7 = (**(code **)(&DAT_00ae89e0 + (long)param_1 * 0x638))(lVar16,&local_68);
          uVar6 = 0;
          if ((uVar8 != 0) && (uVar7 != 0)) {
            uVar8 = uVar8 - (uVar7 & (*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) ^
                                     0xffffffffffffffff));
            uVar7 = uVar7 + uVar8;
            uVar6 = (undefined4)(uVar8 >> 3);
          }
          if (uVar7 != 0) {
            *(undefined4 *)(uVar7 + 0x3c) = uVar6;
            *(undefined4 *)(uVar7 + 0x28) = 1;
            uVar8 = uVar13 - param_3;
            *(int *)(uVar7 + 0x2c) = iVar15;
            *(int *)(uVar7 + 0x30) = (int)uVar13;
            *(undefined8 *)(uVar7 + 0x58) = local_68;
            *(int *)(uVar7 + 0x38) = (int)uVar13;
            if (param_3 <= uVar13 && uVar8 != 0) {
              lVar16 = uVar7 + *puVar17 * param_3;
              iVar15 = *(int *)(param_2 + 0xd00);
              if (iVar15 != 0) {
                lVar9 = *(long *)(param_2 + 0xcf0);
                uVar11 = lVar9 - *(long *)(param_2 + 0xcf8);
                if (uVar11 != 0) {
                  *(undefined4 *)(lVar9 + 0x28) = 2;
                  uVar13 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638);
                  *(undefined4 *)(lVar9 + 0x3c) = 0;
                  *(int *)(lVar9 + 0x34) = (int)(uVar11 >> (uVar13 & 0x3f));
                }
                *(int *)(lVar9 + 0x2c) = iVar15;
                FUN__text__00404260(param_1,param_2,*(undefined8 *)(param_2 + 0xcf0));
              }
              uVar11 = *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638);
              if (uVar11 <= uVar8 && uVar8 - uVar11 != 0) {
                uVar13 = *puVar17;
                lVar9 = *(long *)(&DAT_00ae8e68 + (long)param_1 * 0x638);
                if (lVar9 != 0) {
                  lVar12 = *(long *)(&DAT_00ae8e78 + (long)param_1 * 0x638);
                  uVar10 = *(undefined8 *)(&DAT_00ae8e70 + (long)param_1 * 0x638);
                  if (lVar9 - lVar12 != 0) {
                    *(undefined4 *)(lVar9 + 0x28) = 2;
                    uVar14 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638);
                    *(undefined4 *)(lVar9 + 0x3c) = 0;
                    *(int *)(lVar9 + 0x34) = (int)((ulong)(lVar9 - lVar12) >> (uVar14 & 0x3f));
                  }
                  *(int *)(lVar9 + 0x2c) = (int)uVar10;
                  FUN__text__00404660(param_1,*(long *)(&DAT_00ae8e68 + (long)param_1 * 0x638));
                }
                *(ulong *)(&DAT_00ae8e68 + (long)param_1 * 0x638) = lVar16 + uVar13 * uVar11;
                *(ulong *)(&DAT_00ae8e78 + (long)param_1 * 0x638) = uVar7;
                *(ulong *)(&DAT_00ae8e70 + (long)param_1 * 0x638) = uVar8 - uVar11;
                uVar8 = uVar11;
              }
              *(ulong *)(param_2 + 0xcf8) = uVar7;
              *(long *)(param_2 + 0xcf0) = lVar16;
              *(int *)(param_2 + 0xd00) = (int)uVar8;
            }
          }
          goto joined_r0x00404d94;
        }
      }
      ClearExclusiveLocal();
    }
    uVar7 = 0;
joined_r0x00404d94:
    if (bVar4) {
LAB__text__00404d5c:
      *(undefined4 *)(&DAT_00ae8ff8 + (long)param_1 * 0x638) = 0;
    }
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0xcf0);
    lVar16 = (&DAT_00ae8a40)[(long)param_1 * 199];
    *(uint *)(param_2 + 0xd00) = *(uint *)(param_2 + 0xd00) - iVar15;
    uVar8 = uVar7 - *(long *)(param_2 + 0xcf8);
    *(ulong *)(param_2 + 0xcf0) = uVar7 + lVar16 * param_3;
    if (uVar8 != 0) {
      *(undefined4 *)(uVar7 + 0x28) = 2;
      uVar11 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638);
      *(undefined4 *)(uVar7 + 0x3c) = 0;
      *(int *)(uVar7 + 0x34) = (int)(uVar8 >> (uVar11 & 0x3f));
    }
    *(int *)(uVar7 + 0x2c) = iVar15;
  }
  return uVar7;
code_r0x0040494c:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar4) {
    *piVar1 = 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB__text__00404a30;
  goto LAB__text__00404944;
}


