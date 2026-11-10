/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004865b0; name: FUN_.text__004865b0
 */


void FUN__text__004865b0(uint param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  int *piVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  void *__s;
  int *piVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 local_e0 [14];
  uint local_70;
  uint uStack_6c;
  uint local_68;
  byte local_64;
  char cStack_63;
  undefined1 local_62;
  
  puVar5 = &local_70;
  uVar10 = (uint)param_3;
  if ((((uint)((ulong)param_3 >> 0x10) & 0xffff ^ uVar10 >> 0x15) & 1) != 0) {
    uVar10 = uVar10 & 0xff9fffff | 0x30000;
  }
  uVar12 = uVar10 >> 0xc;
  uVar15 = uVar10 + ((int)(uVar10 << 0x10) >> 0x1f);
  uVar4 = uVar15 & 0xff;
  uVar14 = uVar10 & 0xff9c0000;
  if (uVar14 == 0) {
    uVar18 = uVar10 >> 0xe & 1;
    local_64 = (byte)uVar18;
    puVar5 = (uint *)local_e0;
    cStack_63 = (uVar12 & 0x210) == 0x210;
    uVar26 = 0;
    uVar25 = 0;
    uVar6 = uVar12 & 0xfffffff7;
    puVar16 = (undefined8 *)puVar5;
    if (uVar6 != 0) {
      uVar25 = 0;
      uVar18 = 1;
      do {
        if ((uVar18 & uVar6) != 0) {
          uVar26 = uVar26 + 1;
          uVar30 = *(undefined4 *)(&DAT_0073b938 + (ulong)uVar25 * 0xc);
          *puVar16 = *(undefined8 *)(&DAT_0073b930 + (ulong)uVar25 * 0xc);
          *(undefined4 *)(puVar16 + 1) = uVar30;
          puVar16 = (undefined8 *)((long)puVar16 + 0xc);
        }
        uVar18 = uVar18 * 2;
        uVar25 = uVar25 + 1;
      } while (uVar18 - 1 < uVar6);
      uVar18 = (uint)local_64;
      uVar25 = uVar26;
    }
    puVar11 = (undefined8 *)puVar5;
    if (((uVar12 & 0x210) != 0) && (uVar18 != 0)) {
      *(undefined4 *)(puVar16 + 1) = 0;
      *puVar16 = 0xbf80000000000000;
      if (cStack_63 == '\0') {
        uVar25 = uVar25 + 1;
      }
      else {
        *(undefined8 *)((long)puVar16 + 0xc) = 0;
        uVar25 = uVar25 + 2;
        *(undefined4 *)((long)puVar16 + 0x14) = 0;
      }
    }
  }
  else {
    local_64 = 1;
    cStack_63 = '\x01';
    uVar25 = 0x1b;
    local_62 = 1;
    puVar11 = (undefined8 *)0x8ab0b8;
  }
  if (uVar4 < 2) {
    iVar13 = 0;
  }
  else {
    iVar13 = 1;
    if ((uVar10 & 0x210000) != 0) {
      iVar13 = 2;
    }
    if (uVar14 != 0) {
      iVar13 = iVar13 + 1;
    }
  }
  lVar27 = (long)puVar5 - ((ulong)(uVar25 * param_1) * 4 + 0xf & 0x7fffffff0);
  FUN__text__00487010(param_1,param_2,uVar25,puVar11,iVar13,&local_64,lVar27);
  if (uVar14 != 0) {
    uVar10 = (uVar10 & 0xff) + 3;
    uVar15 = uVar10 & 0x1fc;
    if (uVar15 * param_1 != 0) {
      memset(param_4,0,(ulong)(uVar15 * param_1) << 2);
    }
    local_68 = uVar12;
    local_70 = uVar12 & 0x637;
    uVar4 = local_70 - (local_70 >> 1 & 0xf1f1f1f1);
    uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar4 - 4 < 4) {
      piVar28 = (int *)((long)*(int *)((long)(char)(uVar4 - 4) * 4 + 0x73d8c0) + 0x73d8c0);
    }
    else {
      piVar28 = (int *)0x0;
    }
    if (param_1 == 0) {
      uVar22 = 1;
      do {
        lVar17 = uVar22 * 3;
        uVar22 = (ulong)((int)uVar22 + 1);
      } while ((uint)piVar28[lVar17] < 9);
    }
    else {
      uVar14 = 0;
      do {
        piVar19 = piVar28 + (ulong)uVar14 * 3;
        pfVar1 = (float *)(piVar19 + 2);
        puVar5 = (uint *)(piVar19 + 1);
        if (param_1 == 1) {
          uVar22 = 0;
        }
        else {
          iVar13 = 0;
          uVar9 = 0;
          uVar22 = 0;
          do {
            uVar22 = uVar22 + 2;
            *(float *)((long)param_4 + (ulong)*puVar5 * 4 + uVar9 * 4) =
                 *(float *)((long)param_4 + (ulong)*puVar5 * 4 + uVar9 * 4) +
                 *(float *)(lVar27 + (ulong)(uint)(iVar13 + *piVar19) * 4) * *pfVar1;
            iVar21 = uVar25 + iVar13;
            iVar13 = iVar13 + uVar25 * 2;
            uVar12 = uVar15 + (int)uVar9;
            uVar9 = (ulong)((int)uVar9 + (uVar10 * 2 & 0x3f8));
            *(float *)((long)param_4 + (ulong)*puVar5 * 4 + (ulong)uVar12 * 4) =
                 *(float *)((long)param_4 + (ulong)*puVar5 * 4 + (ulong)uVar12 * 4) +
                 *(float *)(lVar27 + (ulong)(uint)(iVar21 + *piVar19) * 4) * *pfVar1;
          } while (((ulong)param_1 & 0xfffffffe) != uVar22);
        }
        if ((param_1 & 1) != 0) {
          uVar12 = uVar15 * (int)uVar22;
          *(float *)((long)param_4 + (ulong)*puVar5 * 4 + (ulong)uVar12 * 4) =
               *(float *)((long)param_4 + (ulong)*puVar5 * 4 + (ulong)uVar12 * 4) +
               *(float *)(lVar27 + (ulong)(*piVar19 + uVar25 * (int)uVar22) * 4) * *pfVar1;
        }
        uVar14 = uVar14 + 1;
      } while ((uint)piVar28[(ulong)uVar14 * 3] < 9);
    }
    uStack_6c = uVar10 * 2;
    __s = (void *)(lVar27 - (ulong)((uVar4 * 4 + 0xc & 0x30) * param_1));
    uVar10 = uVar4 + 3 & 0xc;
    uVar14 = local_70;
    uVar12 = uStack_6c;
    if (uVar10 * param_1 != 0) {
      memset(__s,0,(ulong)(uVar10 * param_1) << 2);
      uVar14 = local_70;
      uVar12 = uStack_6c;
    }
    if (param_1 == 0) {
      uVar22 = 1;
      do {
        lVar17 = uVar22 * 3;
        uVar22 = (ulong)((int)uVar22 + 1);
      } while (piVar28[lVar17] + 0x12U < 0x1b);
    }
    else {
      iVar13 = *piVar28;
      uVar26 = 0;
      do {
        uVar6 = piVar28[(ulong)uVar26 * 3 + 1];
        fVar29 = (float)piVar28[(ulong)uVar26 * 3 + 2];
        if (param_1 == 1) {
          uVar22 = 0;
        }
        else {
          uVar9 = 0;
          uVar22 = 0;
          uVar18 = iVar13 + 0x12U;
          do {
            uVar20 = (ulong)uVar18;
            uVar3 = uVar25 + uVar18;
            uVar22 = uVar22 + 2;
            uVar18 = uVar18 + uVar25 * 2;
            *(float *)((long)__s + uVar9 * 4 + (ulong)uVar6 * 4) =
                 *(float *)((long)__s + uVar9 * 4 + (ulong)uVar6 * 4) +
                 *(float *)(lVar27 + uVar20 * 4) * fVar29;
            iVar21 = (int)uVar9;
            uVar9 = (ulong)(iVar21 + ((uVar4 + 3) * 2 & 0x3f8));
            lVar17 = (ulong)(uVar10 + iVar21) * 4;
            *(float *)((long)__s + lVar17 + (ulong)uVar6 * 4) =
                 *(float *)((long)__s + lVar17 + (ulong)uVar6 * 4) +
                 *(float *)(lVar27 + (ulong)uVar3 * 4) * fVar29;
          } while (((ulong)param_1 & 0xfffffffe) != uVar22);
        }
        if ((param_1 & 1) != 0) {
          lVar17 = (ulong)(uVar10 * (int)uVar22) * 4;
          *(float *)((long)__s + lVar17 + (ulong)uVar6 * 4) =
               *(float *)((long)__s + lVar17 + (ulong)uVar6 * 4) +
               *(float *)(lVar27 + (ulong)(iVar13 + 0x12U + uVar25 * (int)uVar22) * 4) * fVar29;
        }
        uVar26 = uVar26 + 1;
        iVar13 = piVar28[(ulong)uVar26 * 3];
      } while (iVar13 + 0x12U < 0x1b);
    }
    if ((param_1 != 0) && (uVar14 != 0)) {
      uVar26 = 0;
      uVar14 = 0;
      uVar6 = uVar4;
      if (uVar4 < 2) {
        uVar6 = 1;
      }
      uVar22 = (ulong)param_1;
      do {
        pfVar1 = (float *)((long)param_4 + (ulong)uVar26 * 4);
        pfVar2 = (float *)((long)__s + (ulong)uVar14 * 4);
        *pfVar1 = *pfVar1 + *pfVar2;
        if (((((1 < uVar4) && (pfVar1[1] = pfVar1[1] + pfVar2[1], uVar6 != 2)) &&
             (pfVar1[2] = pfVar1[2] + pfVar2[2], uVar6 != 3)) &&
            ((pfVar1[3] = pfVar1[3] + pfVar2[3], uVar6 != 4 &&
             (pfVar1[4] = pfVar1[4] + pfVar2[4], uVar6 != 5)))) &&
           (pfVar1[5] = pfVar1[5] + pfVar2[5], uVar6 != 6)) {
          pfVar1[6] = pfVar1[6] + pfVar2[6];
        }
        uVar14 = uVar14 + uVar10;
        uVar26 = uVar26 + uVar15;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    local_68 = local_68 & 0x3f800;
    if (local_68 < 0x2d800) {
      if (local_68 == 0x5000) {
        piVar28 = (int *)0x73bd08;
      }
      else if (local_68 == 0x2d000) {
        piVar28 = (int *)0x73bda4;
      }
    }
    else if (local_68 == 0x2d800) {
      piVar28 = (int *)0x73be70;
    }
    else if (local_68 == 0x2f000) {
      piVar28 = (int *)0x73bf18;
    }
    else if (local_68 == 0x2f800) {
      piVar28 = (int *)&DAT_0073bfe4;
    }
    if (param_1 == 0) {
      uVar22 = 1;
      do {
        lVar27 = uVar22 * 3;
        uVar22 = (ulong)((int)uVar22 + 1);
      } while (piVar28[lVar27] + 9U < 0x12);
    }
    else {
      uVar10 = 0;
      do {
        piVar24 = piVar28 + (ulong)uVar10 * 3;
        pfVar1 = (float *)(piVar24 + 2);
        piVar19 = piVar24 + 1;
        if (param_1 == 1) {
          uVar22 = 0;
        }
        else {
          uVar9 = 0;
          uVar22 = 0;
          iVar13 = 9;
          do {
            uVar22 = uVar22 + 2;
            lVar17 = (ulong)(*piVar19 + uVar4) * 4;
            *(float *)((long)param_4 + lVar17 + uVar9 * 4) =
                 *(float *)((long)param_4 + lVar17 + uVar9 * 4) +
                 *(float *)(lVar27 + (ulong)(uint)(iVar13 + *piVar24) * 4) * *pfVar1;
            iVar21 = uVar25 + iVar13;
            iVar13 = iVar13 + uVar25 * 2;
            uVar14 = uVar15 + (int)uVar9;
            uVar9 = (ulong)((int)uVar9 + (uVar12 & 0x3f8));
            lVar17 = (ulong)(*piVar19 + uVar4) * 4;
            *(float *)((long)param_4 + lVar17 + (ulong)uVar14 * 4) =
                 *(float *)((long)param_4 + lVar17 + (ulong)uVar14 * 4) +
                 *(float *)(lVar27 + (ulong)(uint)(iVar21 + *piVar24) * 4) * *pfVar1;
          } while (((ulong)param_1 & 0xfffffffe) != uVar22);
        }
        if ((param_1 & 1) != 0) {
          uVar14 = uVar15 * (int)uVar22;
          lVar17 = (ulong)(*piVar19 + uVar4) * 4;
          *(float *)((long)param_4 + lVar17 + (ulong)uVar14 * 4) =
               *(float *)((long)param_4 + lVar17 + (ulong)uVar14 * 4) +
               *(float *)(lVar27 + (ulong)(*piVar24 + uVar25 * (int)uVar22 + 9) * 4) * *pfVar1;
        }
        uVar10 = uVar10 + 1;
      } while (piVar28[(ulong)uVar10 * 3] + 9U < 0x12);
    }
    return;
  }
  if (((uVar10 >> 0xe & 1) != 0) && ((uVar10 & 0x210000) != 0)) {
    uVar14 = 9;
    if (uVar4 != 7) {
      uVar14 = 6;
    }
    uVar10 = (uVar10 & 0xff) + 3;
    uVar12 = uVar10 & 0x1fc;
    if (uVar12 * param_1 != 0) {
      memset(param_4,0,(ulong)(uVar12 * param_1) << 2);
    }
    if (param_1 == 0) {
      uVar22 = 1;
      do {
        lVar27 = uVar22 * 0xc;
        uVar22 = (ulong)((int)uVar22 + 1);
      } while (*(int *)(lVar27 + 0x73ba08) + uVar4 < uVar14);
      return;
    }
    if (uVar4 != 0) {
      uVar9 = 0;
      iVar13 = 0;
      uVar22 = 0;
      do {
        if (uVar4 < 4) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          puVar7 = (undefined4 *)((long)param_4 + uVar9 * 4 + 8);
          do {
            uVar26 = iVar13 + (int)uVar20;
            uVar20 = uVar20 + 4;
            uVar30 = *(undefined4 *)(lVar27 + (ulong)(uVar26 + 1) * 4);
            uVar31 = *(undefined4 *)(lVar27 + (ulong)(uVar26 + 2) * 4);
            uVar32 = *(undefined4 *)(lVar27 + (ulong)(uVar26 + 3) * 4);
            puVar7[-2] = *(undefined4 *)(lVar27 + (ulong)uVar26 * 4);
            puVar7[-1] = uVar30;
            *puVar7 = uVar31;
            puVar7[1] = uVar32;
            puVar7 = puVar7 + 4;
          } while (((ulong)uVar4 & 0xfc) != uVar20);
        }
        if ((uVar15 & 3) != 0) {
          uVar23 = (ulong)uVar4 & 3;
          do {
            uVar23 = uVar23 - 1;
            *(undefined4 *)((long)param_4 + uVar20 * 4 + uVar9 * 4) =
                 *(undefined4 *)(lVar27 + (ulong)(uint)(iVar13 + (int)uVar20) * 4);
            uVar20 = uVar20 + 1;
          } while (uVar23 != 0);
        }
        uVar22 = uVar22 + 1;
        iVar13 = iVar13 + uVar25;
        uVar9 = (ulong)((int)uVar9 + uVar12);
      } while (uVar22 != param_1);
    }
    iVar13 = 0;
    uVar15 = 0;
    do {
      fVar29 = *(float *)(&DAT_0073ba10 + (ulong)uVar15 * 0xc);
      uVar26 = *(uint *)(&DAT_0073ba0c + (ulong)uVar15 * 0xc);
      if (param_1 == 1) {
        uVar22 = 0;
      }
      else {
        uVar9 = 0;
        uVar22 = 0;
        uVar6 = uVar4 + iVar13;
        do {
          uVar20 = (ulong)uVar6;
          uVar18 = uVar25 + uVar6;
          uVar22 = uVar22 + 2;
          uVar6 = uVar6 + uVar25 * 2;
          *(float *)((long)param_4 + uVar9 * 4 + (ulong)uVar26 * 4) =
               *(float *)((long)param_4 + uVar9 * 4 + (ulong)uVar26 * 4) +
               *(float *)(lVar27 + uVar20 * 4) * fVar29;
          iVar21 = (int)uVar9;
          uVar9 = (ulong)(iVar21 + (uVar10 * 2 & 0x3f8));
          lVar17 = (ulong)(uVar12 + iVar21) * 4;
          *(float *)((long)param_4 + lVar17 + (ulong)uVar26 * 4) =
               *(float *)((long)param_4 + lVar17 + (ulong)uVar26 * 4) +
               *(float *)(lVar27 + (ulong)uVar18 * 4) * fVar29;
        } while (((ulong)param_1 & 0xfffffffe) != uVar22);
      }
      if ((param_1 & 1) != 0) {
        lVar17 = (ulong)(uVar12 * (int)uVar22) * 4;
        *(float *)((long)param_4 + lVar17 + (ulong)uVar26 * 4) =
             *(float *)((long)param_4 + lVar17 + (ulong)uVar26 * 4) +
             *(float *)(lVar27 + (ulong)(iVar13 + uVar4 + uVar25 * (int)uVar22) * 4) * fVar29;
      }
      uVar15 = uVar15 + 1;
      iVar13 = *(int *)((ulong)uVar15 * 0xc + 0x73ba08);
    } while (iVar13 + uVar4 < uVar14);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (uVar25 == 0) {
    return;
  }
  uVar20 = (ulong)uVar25;
  uVar9 = 0;
  lVar17 = 0;
  uVar22 = 0;
  do {
    if (uVar25 < 4) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      puVar7 = (undefined4 *)((long)param_4 + uVar9 * 4 + 8);
      do {
        uVar15 = (int)lVar17 + (int)uVar23;
        uVar23 = uVar23 + 4;
        uVar30 = *(undefined4 *)(lVar27 + (ulong)(uVar15 + 1) * 4);
        uVar31 = *(undefined4 *)(lVar27 + (ulong)(uVar15 + 2) * 4);
        uVar32 = *(undefined4 *)(lVar27 + (ulong)(uVar15 + 3) * 4);
        puVar7[-2] = *(undefined4 *)(lVar27 + (ulong)uVar15 * 4);
        puVar7[-1] = uVar30;
        *puVar7 = uVar31;
        puVar7[1] = uVar32;
        puVar7 = puVar7 + 4;
      } while ((uVar20 & 0xfffffffc) != uVar23);
    }
    if ((uVar25 & 3) != 0) {
      uVar8 = uVar20 & 3;
      do {
        uVar8 = uVar8 - 1;
        *(undefined4 *)((long)param_4 + uVar23 * 4 + uVar9 * 4) =
             *(undefined4 *)(lVar27 + (ulong)(uint)((int)lVar17 + (int)uVar23) * 4);
        uVar23 = uVar23 + 1;
      } while (uVar8 != 0);
    }
    uVar22 = uVar22 + 1;
    lVar17 = lVar17 + uVar20;
    uVar9 = (ulong)((int)uVar9 + ((uVar10 & 0xff) + 3 & 0x1fc));
  } while (uVar22 != param_1);
  return;
}


