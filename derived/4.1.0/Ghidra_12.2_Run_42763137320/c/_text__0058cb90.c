/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058cb90; name: FUN_.text__0058cb90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0058cb90(long param_1,int *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  uint *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  byte bVar31;
  byte bVar36;
  int iVar32;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined8 uVar33;
  byte bVar40;
  byte bVar41;
  byte bVar46;
  int iVar42;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined8 uVar43;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  int iVar68;
  byte bVar71;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  int iVar73;
  byte bVar76;
  byte bVar77;
  byte bVar79;
  byte bVar80;
  int iVar78;
  byte bVar81;
  byte bVar82;
  byte bVar84;
  byte bVar85;
  int iVar83;
  byte bVar86;
  uint auStack_20b0 [2];
  uint *local_20a8;
  int *piStack_20a0;
  long local_2098;
  undefined1 auStack_2090 [8240];
  
  lVar25 = *(long *)(param_1 + 0x18);
  iVar8 = *(int *)(lVar25 + (long)*(int *)(param_1 + 0x3c) * 4);
  auStack_20b0[1] = iVar8;
  iVar4 = *(int *)(param_1 + 0x10);
  uVar12 = (long)iVar4 * 8 + 0xfU & 0xfffffffffffffff0;
  lVar24 = -uVar12;
  lVar22 = (long)auStack_20b0 + lVar24;
  uVar15 = (long)iVar4 * 4 + 0xfU & 0xfffffffffffffff0;
  lVar23 = lVar22 - uVar15;
  lVar26 = lVar23 - uVar15;
  local_2098 = lVar26 - uVar12;
  if (0 < iVar4) {
    lVar21 = 0;
    do {
      lVar9 = FUN__text__00586fb0(param_1);
      *(long *)(local_2098 + lVar21 * 8) = lVar9;
      *(uint *)(lVar26 + lVar21 * 4) = (uint)(lVar9 != 0);
      memset(*(void **)(*(long *)(param_1 + 0x20) + lVar21 * 8),0,(ulong)(uint)(iVar8 << 1));
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)(param_1 + 0x10));
  }
  uVar12 = (ulong)(uint)param_2[6];
  if (0 < param_2[6]) {
    pbVar13 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      bVar31 = *pbVar13;
      if ((*(int *)(lVar26 + (ulong)pbVar13[-1] * 4) != 0) ||
         (*(int *)(lVar26 + (ulong)bVar31 * 4) != 0)) {
        *(undefined4 *)(lVar26 + (ulong)pbVar13[-1] * 4) = 1;
        *(undefined4 *)(lVar26 + (ulong)bVar31 * 4) = 1;
      }
      pbVar13 = pbVar13 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (0 < *param_2) {
    uVar12 = 0;
    local_20a8 = (uint *)(lVar23 + 8);
    piStack_20a0 = (int *)(lVar26 + 8);
    do {
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar15 = (ulong)uVar3;
      if ((int)uVar3 < 1) {
        uVar15 = 0;
      }
      else {
        lVar21 = *(long *)(param_2 + 2);
        if (lVar21 == 0) {
          lVar21 = *(long *)(param_1 + 0x20);
          if (uVar3 < 4) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            puVar14 = (undefined8 *)(lVar21 + 0x10);
            puVar19 = local_20a8;
            piVar18 = piStack_20a0;
            puVar17 = (undefined8 *)(auStack_2090 + lVar24 + -0x10);
            do {
              iVar8 = piVar18[-1];
              lVar9 = lVar9 + -4;
              puVar19[-2] = (uint)(piVar18[-2] != 0);
              uVar20 = puVar14[-2];
              puVar19[-1] = (uint)(iVar8 != 0);
              puVar17[-2] = uVar20;
              uVar20 = puVar14[-1];
              iVar8 = piVar18[1];
              *puVar19 = (uint)(*piVar18 != 0);
              puVar17[-1] = uVar20;
              uVar20 = *puVar14;
              puVar19[1] = (uint)(iVar8 != 0);
              puVar19 = puVar19 + 4;
              *puVar17 = uVar20;
              puVar2 = puVar14 + 1;
              puVar14 = puVar14 + 4;
              puVar17[1] = *puVar2;
              puVar17 = puVar17 + 4;
              piVar18 = piVar18 + 4;
            } while (-lVar9 != (uVar15 & 0xfffffffc));
            lVar9 = -lVar9;
          }
          if ((uVar3 & 3) != 0) {
            uVar16 = uVar15 & 3;
            puVar14 = (undefined8 *)(lVar21 + lVar9 * 8);
            puVar17 = (undefined8 *)(lVar22 + lVar9 * 8);
            puVar19 = (uint *)(lVar23 + lVar9 * 4);
            piVar18 = (int *)(lVar26 + lVar9 * 4);
            do {
              uVar16 = uVar16 - 1;
              *puVar19 = (uint)(*piVar18 != 0);
              *puVar17 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar17 = puVar17 + 1;
              puVar19 = puVar19 + 1;
              piVar18 = piVar18 + 1;
            } while (uVar16 != 0);
          }
        }
        else {
          if (uVar3 == 1) {
            uVar16 = 0;
            uVar11 = 0;
          }
          else {
            uVar16 = 0;
            uVar11 = 0;
            piVar18 = (int *)(lVar26 + 4);
            do {
              uVar10 = (uint)uVar11;
              if (uVar12 == *(byte *)(lVar21 + uVar16)) {
                *(uint *)(lVar23 + (long)(int)uVar10 * 4) = (uint)(piVar18[-1] != 0);
                *(undefined8 *)(lVar22 + (long)(int)uVar10 * 8) =
                     *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar16 * 8);
                uVar10 = uVar10 + 1;
                uVar11 = (ulong)uVar10;
                bVar31 = *(byte *)(lVar21 + uVar16 + 1);
              }
              else {
                bVar31 = *(byte *)(lVar21 + uVar16 + 1);
              }
              if (uVar12 == bVar31) {
                *(uint *)(lVar23 + (long)(int)uVar10 * 4) = (uint)(*piVar18 != 0);
                *(undefined8 *)(lVar22 + (long)(int)uVar10 * 8) =
                     *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar16 * 8 + 8);
                uVar11 = (ulong)(uVar10 + 1);
              }
              uVar16 = uVar16 + 2;
              piVar18 = piVar18 + 2;
            } while ((uVar15 & 0xfffffffe) != uVar16);
          }
          uVar15 = uVar11;
          if (((uVar3 & 1) != 0) && (uVar12 == *(byte *)(lVar21 + uVar16))) {
            iVar8 = (int)uVar11;
            *(uint *)(lVar23 + (long)iVar8 * 4) = (uint)(*(int *)(lVar26 + uVar16 * 4) != 0);
            *(undefined8 *)(lVar22 + (long)iVar8 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar16 * 8);
            uVar15 = (ulong)(iVar8 + 1);
          }
        }
      }
      FUN__text__0058d910(param_1,*(long *)(lVar25 + 0x38) +
                                  (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar12 * 2 + 1) * 0x28,
                          lVar22,lVar23,uVar15);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)*param_2);
  }
  if (((DAT_00aec940 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00aec940), iVar8 != 0)) {
    DAT_00aec950 = 0;
    DAT_00aec958 = 0;
    __cxa_guard_release(&DAT_00aec940);
  }
  uVar3 = auStack_20b0[1];
  if (((DAT_00aec948 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_00aec948), iVar8 != 0)) {
    uRam0000000000aec968 = 0xffffffffffffffff;
    _DAT_00aec960 = 0xffffffffffffffff;
    __cxa_guard_release(&DAT_00aec948);
  }
  uVar7 = uRam0000000000aec968;
  uVar6 = _DAT_00aec960;
  uVar5 = DAT_00aec958;
  uVar20 = DAT_00aec950;
  if ((0 < param_2[6]) && (7 < (int)uVar3)) {
    uVar10 = uVar3 + 7;
    if (-1 < (int)uVar3) {
      uVar10 = uVar3;
    }
    uVar12 = (ulong)(param_2[6] - 1);
    do {
      pbVar13 = (byte *)(*(long *)(param_2 + 8) + uVar12 * 2);
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)*pbVar13 * 8);
      puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)pbVar13[1] * 8);
      uVar15 = (ulong)(uint)((int)uVar10 >> 3);
      do {
        uVar15 = uVar15 - 1;
        iVar27 = (int)*puVar14;
        iVar8 = -(uint)(iVar27 < (int)uVar20);
        bVar52 = (byte)((uint)iVar8 >> 8);
        bVar53 = (byte)((uint)iVar8 >> 0x10);
        bVar54 = (byte)((uint)iVar8 >> 0x18);
        iVar28 = (int)((ulong)*puVar14 >> 0x20);
        iVar4 = -(uint)(iVar28 < (int)((ulong)uVar20 >> 0x20));
        bVar56 = (byte)((uint)iVar4 >> 8);
        bVar57 = (byte)((uint)iVar4 >> 0x10);
        bVar58 = (byte)((uint)iVar4 >> 0x18);
        iVar29 = (int)puVar14[1];
        iVar32 = -(uint)(iVar29 < (int)uVar5);
        bVar60 = (byte)((uint)iVar32 >> 8);
        bVar61 = (byte)((uint)iVar32 >> 0x10);
        bVar62 = (byte)((uint)iVar32 >> 0x18);
        iVar30 = (int)((ulong)puVar14[1] >> 0x20);
        iVar42 = -(uint)(iVar30 < (int)((ulong)uVar5 >> 0x20));
        bVar64 = (byte)((uint)iVar42 >> 8);
        bVar65 = (byte)((uint)iVar42 >> 0x10);
        bVar66 = (byte)((uint)iVar42 >> 0x18);
        uVar43 = puVar17[1];
        uVar33 = *puVar17;
        iVar68 = -(uint)((int)uVar6 < (int)uVar33);
        iVar73 = -(uint)((int)((ulong)uVar6 >> 0x20) < (int)((ulong)uVar33 >> 0x20));
        iVar78 = -(uint)((int)uVar7 < (int)uVar43);
        iVar83 = -(uint)((int)((ulong)uVar7 >> 0x20) < (int)((ulong)uVar43 >> 0x20));
        bVar67 = (byte)iVar68 ^ (byte)iVar8;
        bVar69 = (byte)((uint)iVar68 >> 8) ^ bVar52;
        bVar70 = (byte)((uint)iVar68 >> 0x10) ^ bVar53;
        bVar71 = (byte)((uint)iVar68 >> 0x18) ^ bVar54;
        bVar72 = (byte)iVar73 ^ (byte)iVar4;
        bVar74 = (byte)((uint)iVar73 >> 8) ^ bVar56;
        bVar75 = (byte)((uint)iVar73 >> 0x10) ^ bVar57;
        bVar76 = (byte)((uint)iVar73 >> 0x18) ^ bVar58;
        bVar77 = (byte)iVar78 ^ (byte)iVar32;
        bVar79 = (byte)((uint)iVar78 >> 8) ^ bVar60;
        bVar80 = (byte)((uint)iVar78 >> 0x10) ^ bVar61;
        bVar81 = (byte)((uint)iVar78 >> 0x18) ^ bVar62;
        bVar82 = (byte)iVar83 ^ (byte)iVar42;
        bVar84 = (byte)((uint)iVar83 >> 8) ^ bVar64;
        bVar85 = (byte)((uint)iVar83 >> 0x10) ^ bVar65;
        bVar86 = (byte)((uint)iVar83 >> 0x18) ^ bVar66;
        bVar31 = (byte)uVar33;
        bVar51 = bVar31 & (byte)iVar8;
        bVar34 = (byte)((ulong)uVar33 >> 8);
        bVar52 = bVar34 & bVar52;
        bVar35 = (byte)((ulong)uVar33 >> 0x10);
        bVar53 = bVar35 & bVar53;
        bVar36 = (byte)((ulong)uVar33 >> 0x18);
        bVar54 = bVar36 & bVar54;
        bVar37 = (byte)((ulong)uVar33 >> 0x20);
        bVar55 = bVar37 & (byte)iVar4;
        bVar38 = (byte)((ulong)uVar33 >> 0x28);
        bVar56 = bVar38 & bVar56;
        bVar39 = (byte)((ulong)uVar33 >> 0x30);
        bVar57 = bVar39 & bVar57;
        bVar40 = (byte)((ulong)uVar33 >> 0x38);
        bVar58 = bVar40 & bVar58;
        bVar41 = (byte)uVar43;
        bVar59 = bVar41 & (byte)iVar32;
        bVar44 = (byte)((ulong)uVar43 >> 8);
        bVar60 = bVar44 & bVar60;
        bVar45 = (byte)((ulong)uVar43 >> 0x10);
        bVar61 = bVar45 & bVar61;
        bVar46 = (byte)((ulong)uVar43 >> 0x18);
        bVar62 = bVar46 & bVar62;
        bVar47 = (byte)((ulong)uVar43 >> 0x20);
        bVar63 = bVar47 & (byte)iVar42;
        bVar48 = (byte)((ulong)uVar43 >> 0x28);
        bVar64 = bVar48 & bVar64;
        bVar49 = (byte)((ulong)uVar43 >> 0x30);
        bVar65 = bVar49 & bVar65;
        bVar50 = (byte)((ulong)uVar43 >> 0x38);
        bVar66 = bVar50 & bVar66;
        iVar32 = CONCAT13(bVar36 & bVar71,
                          CONCAT12(bVar35 & bVar70,CONCAT11(bVar34 & bVar69,bVar31 & bVar67)));
        iVar42 = CONCAT13(bVar46 & bVar81,
                          CONCAT12(bVar45 & bVar80,CONCAT11(bVar44 & bVar79,bVar41 & bVar77)));
        iVar8 = (iVar28 - CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55)))) +
                CONCAT13(((byte)((ulong)uVar6 >> 0x38) ^ bVar76) & bVar40,
                         CONCAT12(((byte)((ulong)uVar6 >> 0x30) ^ bVar75) & bVar39,
                                  CONCAT11(((byte)((ulong)uVar6 >> 0x28) ^ bVar74) & bVar38,
                                           ((byte)((ulong)uVar6 >> 0x20) ^ bVar72) & bVar37)));
        iVar4 = (iVar30 - CONCAT13(bVar66,CONCAT12(bVar65,CONCAT11(bVar64,bVar63)))) +
                CONCAT13(((byte)((ulong)uVar7 >> 0x38) ^ bVar86) & bVar50,
                         CONCAT12(((byte)((ulong)uVar7 >> 0x30) ^ bVar85) & bVar49,
                                  CONCAT11(((byte)((ulong)uVar7 >> 0x28) ^ bVar84) & bVar48,
                                           ((byte)((ulong)uVar7 >> 0x20) ^ bVar82) & bVar47)));
        puVar14[1] = CONCAT17((char)((uint)iVar4 >> 0x18),
                              CONCAT16((char)((uint)iVar4 >> 0x10),
                                       CONCAT15((char)((uint)iVar4 >> 8),
                                                CONCAT14((char)iVar4,
                                                         (iVar29 - CONCAT13(bVar62,CONCAT12(bVar61,
                                                  CONCAT11(bVar60,bVar59)))) +
                                                  CONCAT13(((byte)((ulong)uVar7 >> 0x18) ^ bVar81) &
                                                           bVar46,CONCAT12(((byte)((ulong)uVar7 >>
                                                                                  0x10) ^ bVar80) &
                                                                           bVar45,CONCAT11(((byte)((
                                                  ulong)uVar7 >> 8) ^ bVar79) & bVar44,
                                                  ((byte)uVar7 ^ bVar77) & bVar41)))))));
        *puVar14 = CONCAT17((char)((uint)iVar8 >> 0x18),
                            CONCAT16((char)((uint)iVar8 >> 0x10),
                                     CONCAT15((char)((uint)iVar8 >> 8),
                                              CONCAT14((char)iVar8,
                                                       (iVar27 - CONCAT13(bVar54,CONCAT12(bVar53,
                                                  CONCAT11(bVar52,bVar51)))) +
                                                  CONCAT13(((byte)((ulong)uVar6 >> 0x18) ^ bVar71) &
                                                           bVar36,CONCAT12(((byte)((ulong)uVar6 >>
                                                                                  0x10) ^ bVar70) &
                                                                           bVar35,CONCAT11(((byte)((
                                                  ulong)uVar6 >> 8) ^ bVar69) & bVar34,
                                                  ((byte)uVar6 ^ bVar67) & bVar31)))))));
        puVar17[1] = CONCAT44((CONCAT13(bVar66,CONCAT12(bVar65,CONCAT11(bVar64,bVar63))) + iVar30) -
                              (int)(CONCAT17(bVar50 & bVar86,
                                             CONCAT16(bVar49 & bVar85,
                                                      CONCAT15(bVar48 & bVar84,
                                                               CONCAT14(bVar47 & bVar82,iVar42))))
                                   >> 0x20),
                              (CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59))) + iVar29) -
                              iVar42);
        *puVar17 = CONCAT44((CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55))) + iVar28) -
                            (int)(CONCAT17(bVar40 & bVar76,
                                           CONCAT16(bVar39 & bVar75,
                                                    CONCAT15(bVar38 & bVar74,
                                                             CONCAT14(bVar37 & bVar72,iVar32)))) >>
                                 0x20),
                            (CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51))) + iVar27) -
                            iVar32);
        puVar14 = puVar14 + 2;
        puVar17 = puVar17 + 2;
      } while (uVar15 != 0);
      bVar1 = 0 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
  }
  puVar14 = _DAT_008a3ee0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar24 = 0;
    do {
      if (*param_2 < 2) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar24);
      }
      pbVar13 = (byte *)(*(long *)(param_2 + 4) + uVar12 * 2);
      iVar8 = *(int *)(lVar25 + (long)*(int *)(param_1 + 0x3c) * 4) >> 1;
      iVar4 = *(int *)(*(long *)(lVar25 + 0x38) + (ulong)pbVar13[1] * 0x28 + 0x1c);
      if (iVar8 <= iVar4) {
        iVar4 = iVar8;
      }
      (*(code *)*puVar14)(param_1,*(long *)(lVar25 + 0x30) + (ulong)*pbVar13 * 0x40,
                          *(undefined8 *)(local_2098 + lVar24 * 8),auStack_2090,iVar4);
      thunk_FUN__text__0058bab0
                (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar24 * 8),auStack_2090,iVar4);
      lVar24 = lVar24 + 1;
    } while (lVar24 < *(int *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return 0;
}


