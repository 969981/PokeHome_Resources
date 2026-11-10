/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00564f30; name: FUN_.text__00564f30
 */


/* WARNING: Removing unreachable block (ram,0x00565000) */

void FUN__text__00564f30(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  float *pfVar22;
  float *pfVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  uint local_94;
  uint local_84;
  
  if (*(int *)((long)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
    uVar13 = (uint)*(ushort *)((long)param_1 + 0x12);
    goto LAB__text__005650a4;
  }
  uVar13 = *(uint *)(param_2 + 0x48);
  uVar18 = *(uint *)(param_2 + 0xac);
  if (uVar13 == 0xffffffff) {
LAB__text__00564fa8:
    *(uint *)(param_2 + 0x48) = uVar18;
    uVar13 = uVar18;
LAB__text__00564fb4:
    *(uint *)(param_2 + 0x4c) = uVar18;
    uVar18 = (uint)*(ushort *)((long)param_1 + 0x12);
  }
  else {
    if (uVar13 == 0) {
      if (*(short *)((long)param_1 + 0x12) == 0) {
        return;
      }
      goto LAB__text__00564fa8;
    }
    if (*(short *)((long)param_1 + 0x12) != 0) goto LAB__text__00564fa8;
    if (*(uint *)(param_2 + 0x4c) < uVar18) {
      uVar13 = (uVar13 + uVar18) - *(uint *)(param_2 + 0x4c);
      *(uint *)(param_2 + 0x48) = uVar13;
      goto LAB__text__00564fb4;
    }
    uVar18 = 0;
  }
  iVar14 = 0;
  if (*(ushort *)(param_1 + 2) - uVar18 <= uVar13) {
    iVar14 = uVar13 - (*(ushort *)(param_1 + 2) - uVar18);
  }
  *(int *)(param_2 + 0x48) = iVar14;
  uVar8 = *(ushort *)((long)param_1 + 0x12);
  uVar25 = (ulong)uVar8;
  uVar9 = *(ushort *)(param_1 + 2);
  if ((uint)uVar8 < (uint)uVar9) {
    bVar6 = *(byte *)(param_1 + 1);
    if (bVar6 == 0) {
      uVar25 = (ulong)(uint)uVar9;
    }
    else {
      uVar26 = (ulong)(((uint)uVar9 - (uint)uVar8) * 4);
      if (bVar6 == 1) {
        lVar15 = 0;
LAB__text__00565070:
        memset((void *)(*param_1 + lVar15 * (ulong)*(ushort *)(param_1 + 2) + uVar25 * 4),0,uVar26);
      }
      else {
        uVar20 = (ulong)bVar6 & 0xfe;
        lVar11 = 4;
        do {
          lVar15 = lVar11;
          memset((void *)(*param_1 + (lVar15 + -4) * (ulong)*(ushort *)(param_1 + 2) + uVar25 * 4),0
                 ,uVar26);
          memset((void *)(*param_1 + lVar15 * (ulong)*(ushort *)(param_1 + 2) + uVar25 * 4),0,uVar26
                );
          uVar20 = uVar20 - 2;
          lVar11 = lVar15 + 8;
        } while (uVar20 != 0);
        lVar15 = lVar15 + 4;
        if ((bVar6 & 1) != 0) goto LAB__text__00565070;
      }
      uVar25 = (ulong)*(ushort *)(param_1 + 2);
    }
    *(short *)((long)param_1 + 0x12) = (short)uVar25;
    iVar14 = *(int *)(param_2 + 0x48);
  }
  uVar13 = (uint)uVar25;
  if (iVar14 != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
  }
LAB__text__005650a4:
  if (0x1f < uVar13) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar18 = uVar3 & 0xff;
    if (uVar18 != 0) {
      uVar4 = *(uint *)(param_2 + 0xa0);
      uVar26 = 0;
      uVar27 = 0;
      uVar24 = 0;
      local_94 = 0;
      local_84 = 0;
      iVar14 = 4 - (uVar13 & 3);
      uVar1 = uVar13 & 0xfffc;
      uVar25 = (ulong)uVar1;
      uVar19 = uVar3;
      do {
        uVar10 = 1 << (ulong)(uVar27 & 0x1f);
        if (((uVar10 & uVar3 >> 0xc) != 0) || (uVar3 < 0x1000)) {
          if (((uVar10 >> 3 & 1) == 0) || (uVar3 < 0x1000)) {
            uVar18 = local_94;
            local_94 = local_94 + 1;
LAB__text__005651b8:
            pfVar28 = (float *)(*param_1 + (ulong)*(ushort *)(param_1 + 2) * (ulong)uVar18 * 4);
            uVar18 = *(uint *)(param_2 + 0xa0);
            if ((uVar18 & 0xff) == 0) goto LAB__text__005651e8;
LAB__text__005651d4:
            if ((uVar4 != uVar3) && ((uVar10 & uVar18 >> 0xc) == 0)) goto LAB__text__005651e8;
            FUN__text__00564d20(param_2,pfVar28,param_3,uVar13,local_84);
            if (*(int *)(param_2 + 0x50) != 0) {
              uVar18 = uVar13;
              if ((uVar13 & 3) != 0) {
                memset((void *)((long)param_3 + (ulong)uVar13 * 4),0,(ulong)(uint)(iVar14 * 4));
                uVar18 = iVar14 + uVar13;
              }
              uVar10 = local_84 >> 2;
              uVar5 = *(uint *)(param_2 + 0x2c);
              uVar19 = local_84 & 3;
              if ((uVar5 - 1 == local_84) && ((uVar5 & 1) != 0)) {
                uVar2 = uVar10;
                if (1 < uVar19 && uVar5 != 1) {
                  uVar2 = uVar10 + 1;
                }
                pfVar17 = (float *)(*(long *)(param_2 + 0x20) + (ulong)(uVar2 << 4) * 4);
                pfVar16 = pfVar17 + 1;
                pfVar22 = pfVar17 + 2;
                pfVar23 = pfVar17 + 3;
              }
              else {
                pfVar17 = (float *)(*(long *)(param_2 + 0x20) + (ulong)(uVar10 << 4) * 4 +
                                   (ulong)uVar19 * 4);
                pfVar16 = pfVar17 + 4;
                pfVar22 = pfVar17 + 8;
                pfVar23 = pfVar17 + 0xc;
              }
              uVar20 = 0;
              fVar29 = *pfVar22;
              puVar21 = (undefined8 *)0x0;
              if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
                puVar21 = *(undefined8 **)(param_2 + 0x30);
              }
              fVar30 = *pfVar23;
              uVar40 = puVar21[1];
              uVar39 = *puVar21;
              uVar43 = puVar21[3];
              uVar42 = puVar21[2];
              uVar45 = puVar21[5];
              uVar44 = puVar21[4];
              uVar47 = puVar21[7];
              uVar46 = puVar21[6];
              uVar49 = puVar21[9];
              uVar48 = puVar21[8];
              uVar51 = puVar21[0xb];
              uVar50 = puVar21[10];
              uVar53 = puVar21[0xd];
              uVar52 = puVar21[0xc];
              uVar55 = puVar21[0xf];
              uVar54 = puVar21[0xe];
              puVar21 = param_3;
              fVar32 = *pfVar17;
              fVar31 = *pfVar16;
              do {
                uVar20 = uVar20 + 4;
                fVar36 = (float)*puVar21;
                fVar37 = (float)((ulong)*puVar21 >> 0x20);
                fVar56 = (float)puVar21[1];
                fVar57 = (float)((ulong)puVar21[1] >> 0x20);
                fVar38 = (float)uVar52 * fVar29;
                fVar33 = (float)((ulong)uVar52 >> 0x20) * fVar29;
                fVar41 = (float)uVar54 * fVar30;
                fVar34 = (float)((ulong)uVar54 >> 0x20) * fVar30;
                fVar35 = (float)((ulong)uVar55 >> 0x20) * fVar30;
                fVar30 = fVar56 * (float)uVar40 + (float)uVar49 * fVar32 + (float)uVar51 * fVar31 +
                         (float)uVar43 * fVar56 + (float)uVar45 * fVar37 + (float)uVar47 * fVar36 +
                         (float)uVar53 * fVar29 + (float)uVar55 * fVar30;
                fVar29 = fVar57 * (float)((ulong)uVar40 >> 0x20) +
                         (float)((ulong)uVar49 >> 0x20) * fVar32 +
                         (float)((ulong)uVar51 >> 0x20) * fVar31 +
                         (float)((ulong)uVar43 >> 0x20) * fVar56 +
                         (float)((ulong)uVar45 >> 0x20) * fVar37 +
                         (float)((ulong)uVar47 >> 0x20) * fVar36 +
                         (float)((ulong)uVar53 >> 0x20) * fVar29 + fVar35;
                puVar21[1] = CONCAT44(fVar29,fVar30);
                *puVar21 = CONCAT44(fVar37 * (float)((ulong)uVar39 >> 0x20) +
                                    (float)((ulong)uVar48 >> 0x20) * fVar32 +
                                    (float)((ulong)uVar50 >> 0x20) * fVar31 +
                                    (float)((ulong)uVar42 >> 0x20) * fVar56 +
                                    (float)((ulong)uVar44 >> 0x20) * fVar37 +
                                    (float)((ulong)uVar46 >> 0x20) * fVar36 + fVar33 + fVar34,
                                    fVar36 * (float)uVar39 + (float)uVar48 * fVar32 +
                                    (float)uVar50 * fVar31 + (float)uVar42 * fVar56 +
                                    (float)uVar44 * fVar37 + (float)uVar46 * fVar36 + fVar38 +
                                    fVar41);
                puVar21 = puVar21 + 2;
                fVar32 = fVar57;
                fVar31 = fVar56;
              } while (uVar20 < uVar18);
              uVar18 = *(uint *)(param_2 + 0x2c);
              if (((uVar18 & 1) == 0) || (uVar18 - 1 != local_84)) {
                lVar11 = (ulong)(uVar10 << 4) * 4;
                lVar15 = (ulong)uVar19 * 4;
                *(float *)(*(long *)(param_2 + 0x20) + lVar11 + lVar15) = fVar57;
                lVar11 = lVar11 + lVar15;
                *(float *)(*(long *)(param_2 + 0x20) + lVar11 + 0x10) = fVar56;
                *(float *)(*(long *)(param_2 + 0x20) + lVar11 + 0x20) = fVar29;
                pfVar17 = (float *)(*(long *)(param_2 + 0x20) + lVar11 + 0x30);
              }
              else {
                if (1 < uVar19 && uVar18 != 1) {
                  uVar10 = uVar10 + 1;
                }
                lVar11 = (ulong)(uVar10 << 4) * 4;
                *(float *)(*(long *)(param_2 + 0x20) + lVar11) = fVar57;
                *(float *)(*(long *)(param_2 + 0x20) + lVar11 + 4) = fVar56;
                *(float *)(*(long *)(param_2 + 0x20) + lVar11 + 8) = fVar29;
                pfVar17 = (float *)(*(long *)(param_2 + 0x20) + lVar11 + 0xc);
              }
              *pfVar17 = fVar30;
            }
            bVar12 = true;
            local_84 = local_84 + 1;
            cVar7 = *(char *)(param_2 + 0x75);
          }
          else {
            if ((uVar19 >> 0xf & 1) != 0) {
              uVar18 = uVar18 - 1;
              goto LAB__text__005651b8;
            }
            pfVar28 = (float *)0x0;
            uVar18 = *(uint *)(param_2 + 0xa0);
            if ((uVar18 & 0xff) != 0) goto LAB__text__005651d4;
LAB__text__005651e8:
            bVar12 = false;
            cVar7 = *(char *)(param_2 + 0x75);
          }
          if (cVar7 != '\0') {
            FUN__text__005636a0(*(long *)(param_2 + 0x40) + uVar26 * 0x18,pfVar28,uVar13);
            uVar26 = (ulong)((int)uVar26 + 1);
          }
          fVar29 = *(float *)(param_2 + 0x90);
          fVar30 = *(float *)(param_2 + 0x68);
          if (bVar12) {
            FUN__text__0054f710(fVar29,fVar30,*(undefined4 *)(param_2 + 0x94),
                                *(undefined4 *)(param_2 + 0x6c),pfVar28,param_3,uVar13);
          }
          else if (fVar30 == fVar29) {
            if (fVar29 != 1.0) {
              pfVar17 = pfVar28;
              if (uVar1 != 0) {
                pfVar16 = pfVar28;
                do {
                  pfVar17 = pfVar16 + 4;
                  *(ulong *)(pfVar16 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) * fVar29,
                                (float)*(undefined8 *)(pfVar16 + 2) * fVar29);
                  *(ulong *)pfVar16 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar16 >> 0x20) * fVar29,
                                (float)*(undefined8 *)pfVar16 * fVar29);
                  pfVar16 = pfVar17;
                } while (pfVar17 < pfVar28 + uVar25);
              }
              for (; pfVar17 < pfVar28 + uVar13; pfVar17 = pfVar17 + 1) {
                *pfVar17 = *pfVar17 * fVar29;
              }
            }
          }
          else {
            fVar30 = fVar30 - fVar29;
            pfVar17 = pfVar28;
            if (uVar1 != 0) {
              fVar33 = fVar30 * (1.0 / (float)uVar25);
              fVar38 = fVar33 + fVar29;
              fVar31 = fVar33 * 4.0;
              fVar41 = fVar38 + fVar33;
              fVar33 = fVar41 + fVar33;
              pfVar16 = pfVar28;
              fVar32 = fVar29;
              do {
                fVar34 = (float)*(undefined8 *)pfVar16 * fVar32;
                fVar35 = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20) * fVar38;
                fVar36 = (float)*(undefined8 *)(pfVar16 + 2) * fVar41;
                fVar37 = (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) * fVar33;
                fVar32 = fVar32 + fVar31;
                fVar38 = fVar38 + fVar31;
                fVar41 = fVar41 + fVar31;
                fVar33 = fVar33 + fVar31;
                pfVar17 = pfVar16 + 4;
                *(ulong *)(pfVar16 + 2) = CONCAT44(fVar37,fVar36);
                *(ulong *)pfVar16 = CONCAT44(fVar35,fVar34);
                pfVar16 = pfVar17;
              } while (pfVar17 < pfVar28 + uVar25);
            }
            if (pfVar17 < pfVar28 + uVar13) {
              do {
                fVar32 = *pfVar17 * fVar29;
                fVar29 = fVar29 + fVar30 * (1.0 / (float)uVar13);
                pfVar16 = pfVar17 + 1;
                *pfVar17 = fVar32;
                pfVar17 = pfVar16;
              } while (pfVar16 < pfVar28 + uVar13);
            }
          }
          uVar19 = *(uint *)(param_1 + 1);
          uVar24 = uVar24 + 1;
        }
        uVar18 = uVar19 & 0xff;
        uVar27 = uVar27 + 1;
      } while (uVar24 < uVar18);
    }
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x96) = *(undefined8 *)(param_2 + 0x6e);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x58);
  }
  return;
}


