/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056f9b0; name: FUN_.text__0056f9b0
 */


void FUN__text__0056f9b0(long *param_1,long *param_2)

{
  long *plVar1;
  float *pfVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar13 = param_1[3];
  if (*(char *)(lVar13 + 0x18) != '\0') {
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x2c));
    fVar17 = expf(-2.2 / (*(float *)(lVar13 + 0x10) * fVar17));
    *(float *)((long)param_1 + 100) = fVar17;
    *(undefined1 *)(lVar13 + 0x18) = 0;
    lVar13 = param_1[3];
  }
  if (*(char *)(lVar13 + 0x22) != '\0') {
    iVar6 = FUN__text__0056f6cc(param_1);
    if (iVar6 != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  if (*(int *)((long)param_2 + 0xc) != 0x11) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
    uVar7 = (uint)*(ushort *)((long)param_2 + 0x12);
    goto LAB__text__0056fb78;
  }
  uVar7 = *(uint *)((long)param_1 + 0x5c);
  uVar9 = *(uint *)(param_1 + 8);
  if (uVar7 == 0xffffffff) {
LAB__text__0056fa7c:
    *(uint *)((long)param_1 + 0x5c) = uVar9;
    uVar7 = uVar9;
LAB__text__0056fa88:
    *(uint *)(param_1 + 0xc) = uVar9;
    uVar9 = (uint)*(ushort *)((long)param_2 + 0x12);
  }
  else {
    if (uVar7 == 0) {
      if (*(short *)((long)param_2 + 0x12) == 0) {
        return;
      }
      goto LAB__text__0056fa7c;
    }
    if (*(short *)((long)param_2 + 0x12) != 0) goto LAB__text__0056fa7c;
    if (*(uint *)(param_1 + 0xc) < uVar9) {
      uVar7 = (uVar7 + uVar9) - *(uint *)(param_1 + 0xc);
      *(uint *)((long)param_1 + 0x5c) = uVar7;
      goto LAB__text__0056fa88;
    }
    uVar9 = 0;
  }
  iVar6 = 0;
  if (*(ushort *)(param_2 + 2) - uVar9 <= uVar7) {
    iVar6 = uVar7 - (*(ushort *)(param_2 + 2) - uVar9);
  }
  *(int *)((long)param_1 + 0x5c) = iVar6;
  uVar4 = *(ushort *)((long)param_2 + 0x12);
  uVar15 = (ulong)uVar4;
  uVar5 = *(ushort *)(param_2 + 2);
  if ((uint)uVar4 < (uint)uVar5) {
    bVar3 = *(byte *)(param_2 + 1);
    if (bVar3 == 0) {
      uVar15 = (ulong)(uint)uVar5;
    }
    else {
      uVar14 = (ulong)(((uint)uVar5 - (uint)uVar4) * 4);
      if (bVar3 == 1) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        lVar13 = 4;
        do {
          memset((void *)(*param_2 + (lVar13 + -4) * (ulong)*(ushort *)(param_2 + 2) + uVar15 * 4),0
                 ,uVar14);
          memset((void *)(*param_2 + lVar13 * (ulong)*(ushort *)(param_2 + 2) + uVar15 * 4),0,uVar14
                );
          uVar16 = uVar16 + 2;
          lVar13 = lVar13 + 8;
        } while (((ulong)bVar3 & 0xfe) != uVar16);
      }
      if ((bVar3 & 1) != 0) {
        memset((void *)(*param_2 + uVar16 * *(ushort *)(param_2 + 2) * 4 + uVar15 * 4),0,uVar14);
      }
      uVar15 = (ulong)*(ushort *)(param_2 + 2);
    }
    *(short *)((long)param_2 + 0x12) = (short)uVar15;
    iVar6 = *(int *)((long)param_1 + 0x5c);
  }
  uVar7 = (uint)uVar15;
  if (iVar6 != 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
  }
LAB__text__0056fb78:
  if (uVar7 != 0) {
    pcVar8 = (code *)param_1[1];
    plVar1 = (long *)((long)param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar8 = *(code **)(pcVar8 + *plVar1);
    }
    (*pcVar8)(plVar1,param_2);
    iVar6 = -(*(uint *)(param_2 + 1) >> 0xf & 1);
    fVar18 = *(float *)(param_1[3] + 0x14);
    fVar17 = *(float *)(param_1 + 5);
    if (*(char *)(param_1[3] + 0x20) != '\0') {
      iVar6 = 0;
    }
    uVar7 = iVar6 + (*(uint *)(param_2 + 1) & 0xff);
    uVar15 = (ulong)uVar7;
    uVar4 = *(ushort *)((long)param_2 + 0x12);
    uVar14 = (ulong)uVar4;
    if (fVar18 == fVar17) {
      if ((uVar7 != 0) && (fVar17 != 1.0)) {
        if (uVar4 < 4) {
          if (uVar4 != 0) {
            uVar16 = 0;
            do {
              pfVar2 = (float *)(*param_2 + uVar16 * *(ushort *)(param_2 + 2) * 4);
              pfVar10 = pfVar2;
              do {
                pfVar12 = pfVar10 + 1;
                *pfVar10 = *pfVar10 * fVar17;
                pfVar10 = pfVar12;
              } while (pfVar12 < pfVar2 + uVar14);
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar15);
          }
        }
        else {
          uVar16 = 0;
          do {
            pfVar2 = (float *)(*param_2 + uVar16 * *(ushort *)(param_2 + 2) * 4);
            if ((int)(uVar14 & 0xfffc) == 0) {
              pfVar10 = pfVar2;
            }
            else {
              pfVar12 = pfVar2;
              do {
                pfVar10 = pfVar12 + 4;
                *(ulong *)(pfVar12 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) * fVar17,
                              (float)*(undefined8 *)(pfVar12 + 2) * fVar17);
                *(ulong *)pfVar12 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar17,
                              (float)*(undefined8 *)pfVar12 * fVar17);
                pfVar12 = pfVar10;
              } while (pfVar10 < pfVar2 + (uVar14 & 0xfffc));
            }
            for (; pfVar10 < pfVar2 + uVar14; pfVar10 = pfVar10 + 1) {
              *pfVar10 = *pfVar10 * fVar17;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
      }
    }
    else if (uVar7 != 0) {
      fVar18 = fVar18 - fVar17;
      fVar19 = fVar18 / (float)uVar14;
      if (uVar4 < 4) {
        if (uVar4 != 0) {
          uVar16 = 0;
          do {
            pfVar2 = (float *)(*param_2 + uVar16 * *(ushort *)(param_2 + 2) * 4);
            pfVar10 = pfVar2;
            fVar18 = fVar17;
            do {
              fVar20 = *pfVar10 * fVar18;
              fVar18 = fVar18 + fVar19;
              pfVar12 = pfVar10 + 1;
              *pfVar10 = fVar20;
              pfVar10 = pfVar12;
            } while (pfVar12 < pfVar2 + uVar14);
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
      }
      else {
        uVar16 = uVar14 & 0xfffc;
        if ((int)uVar16 == 0) {
          uVar16 = 0;
          do {
            pfVar2 = (float *)(*param_2 + uVar16 * *(ushort *)(param_2 + 2) * 4);
            pfVar10 = pfVar2;
            fVar18 = fVar17;
            do {
              fVar20 = *pfVar10 * fVar18;
              fVar18 = fVar18 + fVar19;
              pfVar12 = pfVar10 + 1;
              *pfVar10 = fVar20;
              pfVar10 = pfVar12;
            } while (pfVar12 < pfVar2 + uVar14);
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
        else {
          uVar11 = 0;
          fVar18 = fVar18 / (float)uVar16;
          fVar20 = fVar18 * 4.0;
          fVar25 = fVar18 + fVar17 + fVar18;
          do {
            pfVar2 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
            pfVar10 = pfVar2;
            fVar21 = fVar17;
            fVar22 = fVar18 + fVar17;
            fVar23 = fVar25;
            fVar24 = fVar25 + fVar18;
            do {
              fVar26 = (float)*(undefined8 *)pfVar10 * fVar21;
              fVar27 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar22;
              fVar28 = (float)*(undefined8 *)(pfVar10 + 2) * fVar23;
              fVar29 = (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) * fVar24;
              fVar21 = fVar21 + fVar20;
              fVar22 = fVar22 + fVar20;
              fVar23 = fVar23 + fVar20;
              fVar24 = fVar24 + fVar20;
              pfVar12 = pfVar10 + 4;
              *(ulong *)(pfVar10 + 2) = CONCAT44(fVar29,fVar28);
              *(ulong *)pfVar10 = CONCAT44(fVar27,fVar26);
              pfVar10 = pfVar12;
            } while (pfVar12 < pfVar2 + uVar16);
            if (pfVar12 < pfVar2 + uVar14) {
              fVar21 = fVar17;
              do {
                fVar22 = *pfVar12 * fVar21;
                fVar21 = fVar21 + fVar19;
                pfVar10 = pfVar12 + 1;
                *pfVar12 = fVar22;
                pfVar12 = pfVar10;
              } while (pfVar10 < pfVar2 + uVar14);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar15);
        }
      }
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1[3] + 0x14);
  }
  return;
}


