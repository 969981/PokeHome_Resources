/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00403d00; name: FUN_.text__00403d00
 */


void FUN__text__00403d00(undefined8 param_1,undefined8 *param_2,int param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long local_88;
  
  iVar7 = (int)param_1;
  FUN__text__00404130(param_1,param_2,0);
  if ((param_4 == 0) && (*(int *)((long)param_2 + 0xd1c) == 0)) {
    puVar10 = (undefined8 *)FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)iVar7 * 4));
  }
  else {
    lVar17 = 0;
    lVar4 = (long)iVar7 * 0x638;
    do {
      puVar3 = param_2 + 0x17b;
      if (lVar17 != 0) {
        puVar3 = param_2 + lVar17 * 0x21 + 0x184;
      }
      if (*puVar3 != 0) {
        uVar18 = 0;
        do {
          uVar9 = puVar3[uVar18 + 1];
          if ((*(uint *)(uVar9 + 0x28) & 1) == 0) {
            uVar13 = (&DAT_00ae8a40)[(long)iVar7 * 199];
            uVar15 = uVar9 - uVar13 * *(uint *)(uVar9 + 0x34);
            uVar16 = *(uint *)(uVar9 + 0x2c);
            if (*(ulong *)(&DAT_00ae8a28 + lVar4) <= uVar13) {
              (**(code **)(&DAT_00ae89e8 + lVar4))
                        (uVar9,uVar13 * uVar16,*(undefined8 *)(uVar9 + 0x58),0);
            }
          }
          else {
            uVar16 = *(uint *)(uVar9 + 0x2c);
            *(uint *)(uVar9 + 0x28) = *(uint *)(uVar9 + 0x28) | 0xb;
            uVar15 = uVar9;
          }
          piVar1 = (int *)(uVar15 + 0x38);
          do {
            iVar12 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 - uVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)(iVar12 - uVar16) < 1) {
            uVar9 = (&DAT_00ae8a40)[(long)iVar7 * 199];
            lVar14 = uVar9 * *(uint *)(uVar15 + 0x30);
            lVar11 = 0x30;
            if (*(ulong *)(&DAT_00ae8a28 + lVar4) <= uVar9) {
              lVar11 = 0x2c;
            }
            iVar12 = *(int *)(uVar15 + 0x3c);
            lVar11 = uVar9 * *(uint *)(uVar15 + lVar11);
            uVar13 = -((ulong)((uint)-iVar12 >> 0x1c) & 1) & 0xffffffff00000000 |
                     ((ulong)(uint)-iVar12 & 0x1fffffff) << 3;
            if (iVar12 == 0 || lVar14 == 0) {
              uVar9 = 0;
            }
            lVar2 = uVar9 + lVar14;
            if (iVar12 == 0 || lVar14 == 0) {
              uVar13 = 0;
            }
            (**(code **)(&DAT_00ae89e8 + lVar4))
                      (uVar15 + uVar13,lVar11,*(undefined8 *)(uVar15 + 0x58),lVar2);
            if (lVar2 != 0) {
              do {
                lVar11 = DAT_00ae89d0;
                lVar14 = DAT_00ae89d0 - lVar2;
                while (DAT_00ae89d0 == lVar11) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
                  if (bVar6) {
                    cVar5 = ExclusiveMonitorsStatus();
                    DAT_00ae89d0 = lVar14;
                  }
                  if (cVar5 == '\0') goto LAB__text__00403dd0;
                }
                ClearExclusiveLocal();
              } while( true );
            }
          }
LAB__text__00403dd0:
          uVar18 = uVar18 + 1;
        } while (uVar18 < *puVar3);
        *puVar3 = 0;
      }
      local_88 = (long)iVar7;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x20);
    puVar10 = (undefined8 *)FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + local_88 * 4));
  }
  if (puVar10 == param_2) {
    FUN__text__00405b80(*(undefined4 *)(&DAT_00ae89c0 + (long)iVar7 * 4),0);
  }
  piVar1 = (int *)(&DAT_00ae8ff8 + (long)iVar7 * 0x638);
  while (*piVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__00403fd0;
  }
  iVar12 = 1000;
  ClearExclusiveLocal();
  do {
    Yield();
    iVar12 = iVar12 + -1;
    while (*piVar1 == 0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB__text__00403fa0;
    }
    ClearExclusiveLocal();
  } while (iVar12 != 0);
LAB__text__00403fa0:
  if (iVar12 == 0) {
    do {
      FUN__text__00405bf0();
      while (*piVar1 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB__text__00403fd0;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB__text__00403fd0:
  *param_2 = 0xffffffffffffffff;
  puVar8 = &DAT_00ae9000;
  if (param_3 != 0) {
    puVar8 = &DAT_00ae9008;
  }
  param_2[0x1a2] = *(undefined8 *)(puVar8 + (long)iVar7 * 0x638);
  *(undefined8 **)(puVar8 + (long)iVar7 * 0x638) = param_2;
  *piVar1 = 0;
  return;
}


