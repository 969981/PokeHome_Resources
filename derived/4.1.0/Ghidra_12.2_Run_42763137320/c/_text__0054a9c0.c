/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054a9c0; name: FUN_.text__0054a9c0
 */


void FUN__text__0054a9c0(undefined4 param_1,undefined4 param_2,long param_3,ulong param_4,
                        long *param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  long *plVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong extraout_x16;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  float *__s;
  int iVar25;
  ulong uVar26;
  float afStack_70 [4];
  
  uVar26 = param_4 & 0xffffffff;
  plVar9 = (long *)(**(code **)(**(long **)(param_3 + 0x10) + 0x10))();
  uVar8 = (**(code **)(*plVar9 + 0x18))();
  cVar6 = *(char *)(param_3 + 0x50);
  iVar25 = (int)param_4;
  if (cVar6 == '\0') {
    if (iVar25 == 0) goto LAB__text__0054aa70;
    uVar24 = 0;
    uVar13 = uVar26;
    plVar9 = param_5;
    do {
      uVar13 = uVar13 - 1;
      uVar24 = (ulong)((int)uVar24 +
                      (*(int *)(*plVar9 + 8) + ((*(int *)(*plVar9 + 8) << 0x10) >> 0x1f) & 0xffU));
      plVar9 = plVar9 + 1;
    } while (uVar13 != 0);
  }
  else {
    if (iVar25 == 0) {
LAB__text__0054aa70:
      __s = (float *)((long)afStack_70 - ((ulong)((int)((ulong)uVar8 << 2) + 0xf) & 0x7fff0));
      memset(__s,0,(ulong)uVar8 << 2);
      uVar24 = 0;
      pfVar10 = afStack_70;
      goto LAB__text__0054af50;
    }
    if (iVar25 == 1) {
      uVar13 = 0;
      uVar24 = 0;
    }
    else {
      uVar13 = 0;
      uVar24 = 0;
      do {
        plVar9 = param_5 + uVar13;
        uVar13 = uVar13 + 2;
        uVar24 = (ulong)((uint)*(byte *)(plVar9[1] + 8) + (uint)*(byte *)(*plVar9 + 8) + (int)uVar24
                        );
      } while ((param_4 & 0xfffffffe) != uVar13);
    }
    if ((param_4 & 1) != 0) {
      uVar24 = (ulong)((uint)*(byte *)(param_5[uVar13] + 8) + (int)uVar24);
    }
  }
  uVar13 = (ulong)uVar8;
  __s = (float *)((long)afStack_70 - ((ulong)((int)(uVar13 << 2) + 0xf) & 0x7fff0));
  memset(__s,0,uVar13 << 2);
  pfVar10 = (float *)((long)__s - (uVar24 * 8 + 0xf & 0xffffffff0));
  if (cVar6 == '\0') {
    if (iVar25 != 0) {
      pfVar3 = __s + uVar13;
      uVar13 = 0;
      plVar9 = (long *)0x0;
      do {
        plVar17 = (long *)param_5[uVar13];
        uVar1 = (int)plVar17[1] + (((int)plVar17[1] << 0x10) >> 0x1f);
        uVar5 = uVar1 & 0xff;
        uVar14 = (ulong)uVar5;
        if (uVar5 != 0) {
          uVar20 = (ulong)*(ushort *)(plVar17 + 2);
          uVar21 = 0;
          lVar19 = *plVar17;
          plVar11 = plVar9;
          if (3 < uVar5) {
            lVar12 = lVar19;
            do {
              uVar2 = (int)plVar9 + (int)uVar21;
              uVar21 = uVar21 + 4;
              *(long *)(pfVar10 + (ulong)uVar2 * 2) = lVar12;
              *(ulong *)(pfVar10 + (ulong)(uVar2 + 1) * 2) = lVar12 + uVar20 * 4;
              *(ulong *)(pfVar10 + (ulong)(uVar2 + 2) * 2) = lVar12 + uVar20 * 8;
              lVar4 = lVar12 + uVar20 * 0xc;
              lVar12 = lVar12 + uVar20 * 0x10;
              *(long *)(pfVar10 + (ulong)(uVar2 + 3) * 2) = lVar4;
            } while ((uVar14 & 0xfc) != uVar21);
            plVar17 = (long *)(ulong)(uint)((int)plVar9 + (int)uVar21);
            plVar11 = plVar17;
          }
          if ((uVar1 & 3) != 0) {
            uVar23 = uVar14 & 3;
            lVar19 = lVar19 + uVar21 * uVar20 * 4;
            do {
              plVar17 = (long *)(ulong)((int)plVar11 + 1);
              *(long *)(pfVar10 + (long)plVar11 * 2) = lVar19;
              lVar19 = lVar19 + uVar20 * 4;
              uVar23 = uVar23 - 1;
              plVar11 = plVar17;
            } while (uVar23 != 0);
          }
          if ((uVar8 != 0) && (uVar5 != 0)) {
            if (uVar5 == 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              do {
                pfVar15 = *(float **)(pfVar10 + (long)plVar9 * 2 + uVar21 * 2);
                pfVar16 = __s;
                do {
                  pfVar22 = pfVar16 + 1;
                  *pfVar16 = *pfVar16 + *pfVar15 * *pfVar15;
                  pfVar15 = pfVar15 + 1;
                  pfVar16 = pfVar22;
                } while (pfVar22 < pfVar3);
                pfVar15 = *(float **)((long)pfVar10 + (uVar21 << 3 | 8) + (long)plVar9 * 8);
                pfVar16 = __s;
                do {
                  pfVar22 = pfVar16 + 1;
                  *pfVar16 = *pfVar16 + *pfVar15 * *pfVar15;
                  pfVar15 = pfVar15 + 1;
                  pfVar16 = pfVar22;
                } while (pfVar22 < pfVar3);
                uVar21 = uVar21 + 2;
              } while (uVar21 != (uVar14 & 0xfe));
            }
            if ((uVar1 & 1) != 0) {
              pfVar15 = *(float **)(pfVar10 + (long)plVar9 * 2 + uVar21 * 2);
              pfVar16 = __s;
              do {
                pfVar22 = pfVar16 + 1;
                *pfVar16 = *pfVar16 + *pfVar15 * *pfVar15;
                pfVar15 = pfVar15 + 1;
                pfVar16 = pfVar22;
              } while (pfVar22 < pfVar3);
            }
          }
          plVar9 = (long *)((ulong)plVar17 & 0xffffffff);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar26);
    }
  }
  else if (iVar25 != 0) {
    uVar14 = 0;
    if (uVar8 == 0) {
      uVar13 = 0;
      uVar21 = extraout_x16;
      do {
        plVar9 = (long *)param_5[uVar14];
        bVar7 = *(byte *)(plVar9 + 1);
        if (bVar7 == 0) {
          uVar21 = uVar13;
        }
        else {
          uVar23 = (ulong)*(ushort *)(plVar9 + 2);
          uVar20 = 0;
          lVar19 = *plVar9;
          if (3 < bVar7) {
            lVar12 = lVar19;
            do {
              uVar1 = (int)uVar13 + (int)uVar20;
              uVar20 = uVar20 + 4;
              *(long *)(pfVar10 + (ulong)uVar1 * 2) = lVar12;
              *(ulong *)(pfVar10 + (ulong)(uVar1 + 1) * 2) = lVar12 + uVar23 * 4;
              *(ulong *)(pfVar10 + (ulong)(uVar1 + 2) * 2) = lVar12 + uVar23 * 8;
              lVar4 = lVar12 + uVar23 * 0xc;
              lVar12 = lVar12 + uVar23 * 0x10;
              *(long *)(pfVar10 + (ulong)(uVar1 + 3) * 2) = lVar4;
            } while (((ulong)bVar7 & 0xfc) != uVar20);
            uVar13 = (ulong)(uint)((int)uVar13 + (int)uVar20);
            uVar21 = uVar13;
          }
          if ((bVar7 & 3) != 0) {
            uVar18 = (ulong)bVar7 & 3;
            lVar19 = lVar19 + uVar20 * uVar23 * 4;
            do {
              uVar21 = (ulong)((int)uVar13 + 1);
              *(long *)(pfVar10 + uVar13 * 2) = lVar19;
              lVar19 = lVar19 + uVar23 * 4;
              uVar18 = uVar18 - 1;
              uVar13 = uVar21;
            } while (uVar18 != 0);
          }
        }
        uVar14 = uVar14 + 1;
        uVar13 = uVar21 & 0xffffffff;
      } while (uVar14 != uVar26);
    }
    else {
      pfVar3 = __s + uVar13;
      plVar9 = (long *)0x0;
      do {
        plVar17 = (long *)param_5[uVar14];
        bVar7 = *(byte *)(plVar17 + 1);
        uVar13 = (ulong)bVar7;
        if (bVar7 != 0) {
          uVar20 = (ulong)*(ushort *)(plVar17 + 2);
          uVar21 = 0;
          lVar19 = *plVar17;
          plVar11 = plVar9;
          if (3 < bVar7) {
            lVar12 = lVar19;
            do {
              uVar1 = (int)plVar9 + (int)uVar21;
              uVar21 = uVar21 + 4;
              *(long *)(pfVar10 + (ulong)uVar1 * 2) = lVar12;
              *(ulong *)(pfVar10 + (ulong)(uVar1 + 1) * 2) = lVar12 + uVar20 * 4;
              *(ulong *)(pfVar10 + (ulong)(uVar1 + 2) * 2) = lVar12 + uVar20 * 8;
              lVar4 = lVar12 + uVar20 * 0xc;
              lVar12 = lVar12 + uVar20 * 0x10;
              *(long *)(pfVar10 + (ulong)(uVar1 + 3) * 2) = lVar4;
            } while ((uVar13 & 0xfc) != uVar21);
            plVar17 = (long *)(ulong)(uint)((int)plVar9 + (int)uVar21);
            plVar11 = plVar17;
          }
          if ((bVar7 & 3) != 0) {
            uVar23 = uVar13 & 3;
            lVar19 = lVar19 + uVar21 * uVar20 * 4;
            do {
              plVar17 = (long *)(ulong)((int)plVar11 + 1);
              *(long *)(pfVar10 + (long)plVar11 * 2) = lVar19;
              lVar19 = lVar19 + uVar20 * 4;
              uVar23 = uVar23 - 1;
              plVar11 = plVar17;
            } while (uVar23 != 0);
          }
          if (bVar7 != 0) {
            if (bVar7 == 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              do {
                pfVar15 = *(float **)(pfVar10 + (long)plVar9 * 2 + uVar21 * 2);
                pfVar16 = __s;
                do {
                  pfVar22 = pfVar16 + 1;
                  *pfVar16 = *pfVar16 + *pfVar15 * *pfVar15;
                  pfVar15 = pfVar15 + 1;
                  pfVar16 = pfVar22;
                } while (pfVar22 < pfVar3);
                pfVar15 = *(float **)((long)pfVar10 + (uVar21 << 3 | 8) + (long)plVar9 * 8);
                pfVar16 = __s;
                do {
                  pfVar22 = pfVar16 + 1;
                  *pfVar16 = *pfVar16 + *pfVar15 * *pfVar15;
                  pfVar15 = pfVar15 + 1;
                  pfVar16 = pfVar22;
                } while (pfVar22 < pfVar3);
                uVar21 = uVar21 + 2;
              } while (uVar21 != (uVar13 & 0xfe));
            }
            if ((bVar7 & 1) != 0) {
              pfVar15 = *(float **)(pfVar10 + (long)plVar9 * 2 + uVar21 * 2);
              pfVar16 = __s;
              do {
                pfVar22 = pfVar16 + 1;
                *pfVar16 = *pfVar16 + *pfVar15 * *pfVar15;
                pfVar15 = pfVar15 + 1;
                pfVar16 = pfVar22;
              } while (pfVar22 < pfVar3);
            }
          }
          plVar9 = (long *)((ulong)plVar17 & 0xffffffff);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar26);
    }
  }
LAB__text__0054af50:
  FUN__text__0054afa0(param_1,param_2,*(undefined4 *)(param_3 + 0x44),
                      *(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x30),pfVar10,__s,
                      uVar24,uVar8,*(undefined8 *)(param_3 + 0x38));
  return;
}


