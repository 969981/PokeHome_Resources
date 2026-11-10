/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00402220; name: FUN_.text__00402220
 */


void FUN__text__00402220(int param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  long *plVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  
  iVar16 = *(int *)(param_2 + 0xd1c);
  *(int *)(param_2 + 0xd1c) = iVar16 + 1;
  if (iVar16 < 2) {
    if (*(int *)(param_2 + 0xd00) != 0) {
      uVar9 = FUN__text__004048c0(param_1,param_2);
      FUN__text__00404660(param_1,uVar9);
      *(undefined4 *)(param_2 + 0xd00) = 0;
    }
    FUN__text__00404130(param_1,param_2,0);
    lVar21 = (long)param_1 * 0x638;
    lVar28 = 0;
    puVar1 = (ulong *)(&DAT_00ae8a50 + lVar21);
    puVar2 = &DAT_00ae8a40 + (long)param_1 * 199;
    puVar3 = (ulong *)(&DAT_00ae8a28 + lVar21);
    puVar4 = (undefined8 *)(&DAT_00ae89e8 + lVar21);
    do {
      lVar21 = param_2 + lVar28 * 0x18;
      plVar22 = (long *)(lVar21 + 0x18);
      if (*plVar22 != 0) {
        FUN__text__00404660(param_1);
      }
      puVar25 = (ulong *)(lVar21 + 8);
      *plVar22 = 0;
      puVar23 = (ulong *)(param_2 + lVar28 * 0x18 + 0x10);
      puVar11 = (ulong *)*puVar23;
joined_r0x00402318:
      puVar10 = puVar11;
      if (puVar10 != (ulong *)0x0) {
        puVar18 = (ulong *)*puVar25;
        puVar11 = (ulong *)puVar10[9];
        if (puVar10 == (ulong *)(*puVar1 & (ulong)puVar18)) goto LAB__text__00402394;
        if ((int)puVar10[4] == *(int *)((long)puVar10 + 0x14)) goto LAB__text__004023f4;
        goto joined_r0x00402318;
      }
      puVar11 = (ulong *)*puVar25;
      if (puVar11 != (ulong *)0x0) {
        puVar10 = (ulong *)(*puVar1 & (ulong)puVar11);
        *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + -1;
        if ((ulong *)(*puVar1 & (ulong)puVar11) == puVar10) {
          puVar18 = puVar10;
          puVar17 = (ulong *)0x0;
          do {
            puVar20 = puVar17;
            puVar18 = (ulong *)*puVar18;
            puVar17 = puVar18;
          } while (puVar18 != (ulong *)0x0);
          iVar16 = 0;
          puVar18 = puVar11;
          do {
            puVar18 = (ulong *)*puVar18;
            iVar16 = iVar16 + -1;
          } while (puVar18 != (ulong *)0x0);
          puVar18 = puVar10;
          if (puVar20 != (ulong *)0x0) {
            puVar18 = puVar20;
          }
          *puVar18 = (ulong)puVar11;
          *puVar25 = 0;
          iVar16 = *(int *)((long)puVar10 + 0x14) + iVar16;
          *(int *)((long)puVar10 + 0x14) = iVar16;
        }
        else {
          iVar16 = *(int *)((long)puVar10 + 0x14);
        }
        puVar11 = (ulong *)(param_2 + lVar28 * 8 + 0x2d20);
        uVar12 = puVar10[9];
        if ((int)puVar10[4] == iVar16) {
          if ((ulong *)*puVar11 == puVar10) {
            *puVar11 = uVar12;
          }
          else {
            uVar14 = puVar10[10];
            *(ulong *)(uVar14 + 0x48) = uVar12;
            if (uVar12 != 0) {
              *(ulong *)(uVar12 + 0x50) = uVar14;
            }
          }
          FUN__text__00404660(param_1);
        }
        else {
          if ((ulong *)*puVar11 == puVar10) {
            *puVar11 = uVar12;
            uVar12 = *puVar23;
            if (uVar12 != 0) goto LAB__text__004025f0;
            uVar14 = 0;
          }
          else {
            uVar14 = puVar10[10];
            *(ulong *)(uVar14 + 0x48) = uVar12;
            if (uVar12 != 0) {
              *(ulong *)(uVar12 + 0x50) = uVar14;
            }
            uVar12 = *puVar23;
            uVar14 = 0;
            if (uVar12 != 0) {
LAB__text__004025f0:
              *(ulong **)(uVar12 + 0x50) = puVar10;
              uVar14 = *puVar23;
            }
          }
          puVar10[9] = uVar14;
          *puVar23 = (ulong)puVar10;
        }
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != 0x7e);
    lVar28 = 0;
    do {
      puVar11 = (ulong *)(param_2 + 0xbd8);
      if (lVar28 != 0) {
        puVar11 = (ulong *)(param_2 + 0xd28 + lVar28 * 0x108 + -0x108);
      }
      if (*puVar11 != 0) {
        uVar12 = 0;
        do {
          uVar14 = puVar11[uVar12 + 1];
          if ((*(uint *)(uVar14 + 0x28) & 1) == 0) {
            uVar13 = *puVar2;
            uVar24 = uVar14 - uVar13 * *(uint *)(uVar14 + 0x34);
            uVar27 = *(uint *)(uVar14 + 0x2c);
            if (*puVar3 <= uVar13) {
              (*(code *)*puVar4)(uVar14,uVar13 * uVar27,*(undefined8 *)(uVar14 + 0x58),0);
            }
          }
          else {
            uVar27 = *(uint *)(uVar14 + 0x2c);
            *(uint *)(uVar14 + 0x28) = *(uint *)(uVar14 + 0x28) | 0xb;
            uVar24 = uVar14;
          }
          piVar5 = (int *)(uVar24 + 0x38);
          do {
            iVar16 = *piVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = iVar16 - uVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((int)(iVar16 - uVar27) < 1) {
            uVar14 = *puVar2;
            lVar15 = uVar14 * *(uint *)(uVar24 + 0x30);
            lVar21 = 0x30;
            if (*puVar3 <= uVar14) {
              lVar21 = 0x2c;
            }
            iVar16 = *(int *)(uVar24 + 0x3c);
            lVar21 = uVar14 * *(uint *)(uVar24 + lVar21);
            uVar13 = -((ulong)((uint)-iVar16 >> 0x1c) & 1) & 0xffffffff00000000 |
                     ((ulong)(uint)-iVar16 & 0x1fffffff) << 3;
            if (iVar16 == 0 || lVar15 == 0) {
              uVar14 = 0;
            }
            lVar6 = uVar14 + lVar15;
            if (iVar16 == 0 || lVar15 == 0) {
              uVar13 = 0;
            }
            (*(code *)*puVar4)(uVar24 + uVar13,lVar21,*(undefined8 *)(uVar24 + 0x58),lVar6);
            if (lVar6 != 0) {
              do {
                lVar21 = DAT_00ae89d0;
                lVar15 = DAT_00ae89d0 - lVar6;
                while (DAT_00ae89d0 == lVar21) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
                  if (bVar8) {
                    cVar7 = ExclusiveMonitorsStatus();
                    DAT_00ae89d0 = lVar15;
                  }
                  if (cVar7 == '\0') goto LAB__text__00402670;
                }
                ClearExclusiveLocal();
              } while( true );
            }
          }
LAB__text__00402670:
          uVar12 = uVar12 + 1;
        } while (uVar12 < *puVar11);
      }
      lVar28 = lVar28 + 1;
      *puVar11 = 0;
    } while (lVar28 != 0x20);
    lVar28 = 0;
    do {
      puVar11 = (ulong *)(param_2 + 0xbd8);
      if (lVar28 != 0) {
        puVar11 = (ulong *)(param_2 + 0xd28 + lVar28 * 0x108 + -0x108);
      }
      if (*puVar11 != 0) {
        uVar12 = 0;
        do {
          uVar14 = puVar11[uVar12 + 1];
          if ((*(uint *)(uVar14 + 0x28) & 1) == 0) {
            uVar13 = *puVar2;
            uVar24 = uVar14 - uVar13 * *(uint *)(uVar14 + 0x34);
            uVar27 = *(uint *)(uVar14 + 0x2c);
            if (*puVar3 <= uVar13) {
              (*(code *)*puVar4)(uVar14,uVar13 * uVar27,*(undefined8 *)(uVar14 + 0x58),0);
            }
          }
          else {
            uVar27 = *(uint *)(uVar14 + 0x2c);
            *(uint *)(uVar14 + 0x28) = *(uint *)(uVar14 + 0x28) | 0xb;
            uVar24 = uVar14;
          }
          piVar5 = (int *)(uVar24 + 0x38);
          do {
            iVar16 = *piVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = iVar16 - uVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((int)(iVar16 - uVar27) < 1) {
            uVar14 = *puVar2;
            lVar15 = uVar14 * *(uint *)(uVar24 + 0x30);
            lVar21 = 0x30;
            if (*puVar3 <= uVar14) {
              lVar21 = 0x2c;
            }
            iVar16 = *(int *)(uVar24 + 0x3c);
            lVar21 = uVar14 * *(uint *)(uVar24 + lVar21);
            uVar13 = -((ulong)((uint)-iVar16 >> 0x1c) & 1) & 0xffffffff00000000 |
                     ((ulong)(uint)-iVar16 & 0x1fffffff) << 3;
            if (iVar16 == 0 || lVar15 == 0) {
              uVar14 = 0;
            }
            lVar6 = uVar14 + lVar15;
            if (iVar16 == 0 || lVar15 == 0) {
              uVar13 = 0;
            }
            (*(code *)*puVar4)(uVar24 + uVar13,lVar21,*(undefined8 *)(uVar24 + 0x58),lVar6);
            if (lVar6 != 0) {
              do {
                lVar21 = DAT_00ae89d0;
                lVar15 = DAT_00ae89d0 - lVar6;
                while (DAT_00ae89d0 == lVar21) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
                  if (bVar8) {
                    cVar7 = ExclusiveMonitorsStatus();
                    DAT_00ae89d0 = lVar15;
                  }
                  if (cVar7 == '\0') goto LAB__text__004027e0;
                }
                ClearExclusiveLocal();
              } while( true );
            }
          }
LAB__text__004027e0:
          uVar12 = uVar12 + 1;
        } while (uVar12 < *puVar11);
      }
      lVar28 = lVar28 + 1;
      *puVar11 = 0;
    } while (lVar28 != 0x20);
    lVar28 = 0;
    if (*(long *)(param_2 + 0xce8) == 0) {
      do {
        if ((*(long *)(param_2 + lVar28 + 8) != 0) || (*(long *)(param_2 + lVar28 + 0x10) != 0))
        goto LAB__text__00402914;
        lVar28 = lVar28 + 0x18;
      } while (lVar28 != 0xbd0);
      lVar28 = ((ulong)(long)*(int *)(param_2 + 0xd18) % 0x2f) * 8 + (long)param_1 * 0x638;
      uVar12 = *(ulong *)(&DAT_00ae89c0 + lVar28 + 0x4c0);
      if (uVar12 == param_2) {
        *(undefined8 *)(&DAT_00ae89c0 + lVar28 + 0x4c0) = *(undefined8 *)(param_2 + 0xd08);
        lVar28 = *(long *)(param_2 + 0xd20);
      }
      else {
        do {
          uVar14 = uVar12;
          uVar12 = *(ulong *)(uVar14 + 0xd08);
        } while (uVar12 != param_2);
        *(undefined8 *)(uVar14 + 0xd08) = *(undefined8 *)(param_2 + 0xd08);
        lVar28 = *(long *)(param_2 + 0xd20);
      }
      while (lVar28 != 0) {
        piVar5 = (int *)(lVar28 + 0xd04);
        do {
          iVar16 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = iVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar16 + -1 != 0) {
          return;
        }
        param_2 = *(ulong *)(param_2 + 0xd20);
        lVar28 = *(long *)(param_2 + 0xd20);
      }
      if ((1 < *(int *)(param_2 + 0xd1c)) && (*(int *)(param_2 + 0xd04) == 0)) {
        FUN__text__00404660(param_1,*puVar1 & param_2);
        return;
      }
    }
    else {
LAB__text__00402914:
      *(int *)(param_2 + 0xd1c) = *(int *)(param_2 + 0xd1c) + -1;
    }
  }
  else {
    *(int *)(param_2 + 0xd1c) = iVar16;
  }
  return;
LAB__text__00402394:
  puVar17 = puVar10;
  puVar20 = (ulong *)0x0;
  do {
    puVar19 = puVar20;
    puVar17 = (ulong *)*puVar17;
    puVar20 = puVar17;
  } while (puVar17 != (ulong *)0x0);
  iVar16 = 0;
  if (puVar18 != (ulong *)0x0) {
    puVar17 = puVar18;
    do {
      puVar17 = (ulong *)*puVar17;
      iVar16 = iVar16 + 1;
    } while (puVar17 != (ulong *)0x0);
  }
  puVar17 = puVar10;
  if (puVar19 != (ulong *)0x0) {
    puVar17 = puVar19;
  }
  *puVar17 = (ulong)puVar18;
  *puVar25 = 0;
  iVar16 = *(int *)((long)puVar10 + 0x14) - iVar16;
  *(int *)((long)puVar10 + 0x14) = iVar16;
  if ((int)puVar10[4] == iVar16) {
LAB__text__004023f4:
    uVar12 = puVar10[9];
    if ((ulong *)*puVar23 == puVar10) {
      *puVar23 = uVar12;
      uVar27 = (uint)puVar10[5];
    }
    else {
      uVar14 = puVar10[10];
      *(ulong *)(uVar14 + 0x48) = uVar12;
      if (uVar12 != 0) {
        *(ulong *)(uVar12 + 0x50) = uVar14;
      }
      uVar27 = (uint)puVar10[5];
    }
    if ((uVar27 & 1) == 0) {
      uVar12 = *puVar2;
      puVar18 = (ulong *)((long)puVar10 - uVar12 * *(uint *)((long)puVar10 + 0x34));
      uVar26 = *(uint *)((long)puVar10 + 0x2c);
      if (*puVar3 <= uVar12) {
        (*(code *)*puVar4)(puVar10,uVar12 * uVar26,puVar10[0xb],0);
      }
    }
    else {
      uVar26 = *(uint *)((long)puVar10 + 0x2c);
      *(uint *)(puVar10 + 5) = uVar27 | 0xb;
      puVar18 = puVar10;
    }
    puVar10 = puVar18 + 7;
    do {
      uVar12 = *puVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar8) {
        *(uint *)puVar10 = (int)uVar12 - uVar26;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)((int)uVar12 - uVar26) < 1) {
      uVar12 = *puVar2;
      lVar15 = uVar12 * (uint)puVar18[6];
      lVar21 = 0x30;
      if (*puVar3 <= uVar12) {
        lVar21 = 0x2c;
      }
      iVar16 = *(int *)((long)puVar18 + 0x3c);
      lVar21 = uVar12 * *(uint *)((long)puVar18 + lVar21);
      uVar14 = -((ulong)((uint)-iVar16 >> 0x1c) & 1) & 0xffffffff00000000 |
               ((ulong)(uint)-iVar16 & 0x1fffffff) << 3;
      if (iVar16 == 0 || lVar15 == 0) {
        uVar12 = 0;
      }
      lVar6 = uVar12 + lVar15;
      if (iVar16 == 0 || lVar15 == 0) {
        uVar14 = 0;
      }
      (*(code *)*puVar4)((long)puVar18 + uVar14,lVar21,puVar18[0xb],lVar6);
      if (lVar6 != 0) {
        do {
          lVar21 = DAT_00ae89d0;
          lVar15 = DAT_00ae89d0 - lVar6;
          while (DAT_00ae89d0 == lVar21) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
            if (bVar8) {
              cVar7 = ExclusiveMonitorsStatus();
              DAT_00ae89d0 = lVar15;
            }
            if (cVar7 == '\0') goto joined_r0x00402318;
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
  }
  goto joined_r0x00402318;
}


