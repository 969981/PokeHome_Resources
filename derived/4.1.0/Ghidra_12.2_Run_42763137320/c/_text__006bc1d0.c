/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bc1d0; name: FUN_.text__006bc1d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bc1d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                        long param_5,long param_6,long param_7)

{
  ushort uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  byte *pbVar34;
  byte *pbVar35;
  long lVar36;
  undefined4 uVar37;
  float fVar38;
  long local_88;
  
  FUN__text__006b2060();
  *param_1 = 0x89e1b0;
  lVar30 = param_5;
  lVar29 = param_5;
  lVar36 = param_5;
  if (param_6 == 0) {
    lVar31 = *(long *)(param_7 + 0x30);
    local_88 = lVar31;
LAB__text__006bc2a8:
    lVar33 = param_5;
  }
  else {
    uVar8 = *(ushort *)(param_7 + 0x40);
    if (uVar8 != 0 || *(short *)(param_7 + 0x44) != 0) {
      lVar31 = *(long *)(param_7 + 0x30);
      local_88 = lVar31;
      if ((uVar8 & 1) != 0) {
        local_88 = *(long *)(param_7 + 0x38);
        lVar36 = param_6;
      }
      if ((uVar8 & 2) != 0) {
        lVar29 = param_6;
      }
      if ((uVar8 & 4) != 0) {
        lVar30 = param_6;
      }
      goto LAB__text__006bc2a8;
    }
    lVar31 = *(long *)(param_7 + 0x38);
    lVar30 = param_6;
    lVar29 = param_6;
    lVar33 = param_6;
    lVar36 = param_6;
    local_88 = lVar31;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xff000000ff000000;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar8 = *(ushort *)(lVar33 + 0x54);
  uVar9 = *(ushort *)(lVar30 + 0x5e);
  uVar6 = 0;
  if (1 < *(ushort *)(lVar36 + 0x56)) {
    uVar6 = (*(ushort *)(lVar36 + 0x56) >> 1) - 1;
  }
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar33 + 0x68);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar33 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x116) = *(undefined1 *)(lVar29 + 0x5c);
  bVar7 = *(byte *)(lVar29 + 0x5d);
  *(ushort *)((long)param_1 + 0x114) = bVar7 & 3;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(lVar33 + 0x78);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar33 + 0x7c);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar33 + 0x60);
  uVar1 = *(short *)(lVar33 + 0x5e) << 3;
  uVar10 = (bVar7 | uVar1) & 0x103;
  *(ushort *)((long)param_1 + 0x114) = uVar10;
  uVar5 = (*(ushort *)(lVar33 + 0x5e) >> 10 & 1) << 0xb;
  *(ushort *)((long)param_1 + 0x114) = uVar10 | uVar5;
  uVar9 = bVar7 & 3 | (uVar9 & 1) << 3;
  uVar10 = *(ushort *)(lVar33 + 0x5e);
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar37 = *(undefined4 *)(lVar30 + 0x88);
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(lVar30 + 0x84);
  *(undefined4 *)(param_1 + 0x24) = uVar37;
  uVar37 = *(undefined4 *)(lVar30 + 0x90);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar30 + 0x8c);
  *(undefined4 *)(param_1 + 0x25) = uVar37;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar30 + 0x94);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar30 + 0x98);
  *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(lVar30 + 0x9c);
  uVar9 = uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 2 & 1) << 4;
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar9 = uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 3 & 1) << 5;
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar9 = uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 4 & 1) << 7;
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar5 = uVar5 | uVar1 & 0x100 | uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 8 & 1) << 9;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar33 + 0x5e) & 0x200) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar33 + 0x5e) & 0x800) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | *(ushort *)(lVar33 + 0x5e) & 0x2000;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar33 + 0x5e) >> 0xe) << 0xf;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  *(ushort *)((long)param_1 + 0x114) = uVar5 | (ushort)*(byte *)(param_7 + 0xd2) << 0xe | 0x40;
  if (((uVar10 >> 6 & 1) == 0) || (*(uint *)(lVar33 + 0xa0) == 0)) {
    param_1[0x27] = 0;
joined_r0x006bc4bc:
    if ((uVar10 >> 7 & 1) != 0) goto LAB__text__006bc7dc;
LAB__text__006bc4c0:
    uVar9 = *(ushort *)((long)param_1 + 0x114);
  }
  else {
    pbVar35 = (byte *)(lVar33 + (ulong)*(uint *)(lVar33 + 0xa0));
    pbVar34 = pbVar35 + 1;
    bVar7 = *pbVar35;
    uVar25 = FUN__text__006a0f04(0x10);
    param_1[0x27] = uVar25;
    uVar25 = FUN__text__006a0f04(0x40);
    *(undefined8 *)(param_1[0x27] + 8) = uVar25;
    uVar25 = FUN__text__006a0f04(0x40);
    *(undefined8 *)param_1[0x27] = uVar25;
    if (bVar7 == 0) {
      **(undefined4 **)(param_1[0x27] + 8) = 0;
LAB__text__006bc4d8:
      bVar11 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 4) = 0;
LAB__text__006bc4e8:
      bVar12 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 8) = 0;
LAB__text__006bc4f8:
      bVar13 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0xc) = 0;
LAB__text__006bc508:
      bVar14 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x10) = 0;
LAB__text__006bc518:
      bVar15 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x14) = 0;
LAB__text__006bc528:
      bVar16 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x18) = 0;
LAB__text__006bc538:
      bVar17 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x1c) = 0;
LAB__text__006bc548:
      bVar18 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x20) = 0;
LAB__text__006bc558:
      bVar19 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x24) = 0;
LAB__text__006bc568:
      bVar20 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x28) = 0;
LAB__text__006bc578:
      bVar21 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x2c) = 0;
LAB__text__006bc588:
      bVar22 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x30) = 0;
LAB__text__006bc598:
      bVar23 = false;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x34) = 0;
LAB__text__006bc5a8:
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x38) = 0;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = 0;
      if (bVar7 == 0) {
        **(undefined4 **)param_1[0x27] = 0;
        pbVar35 = pbVar34;
        if (bVar11) goto LAB__text__006bc5d8;
LAB__text__006bc6cc:
        *(undefined4 *)(*(long *)param_1[0x27] + 4) = 0;
        pbVar35 = pbVar34;
        if (!bVar12) goto LAB__text__006bc5ec;
LAB__text__006bc6dc:
        pbVar35 = pbVar34 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 8) = *(undefined4 *)pbVar34;
        if (bVar13) goto LAB__text__006bc5fc;
LAB__text__006bc6f0:
        *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = 0;
        pbVar34 = pbVar35;
        if (!bVar14) goto LAB__text__006bc610;
LAB__text__006bc700:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34;
        if (!bVar15) goto LAB__text__006bc624;
LAB__text__006bc718:
        pbVar35 = pbVar34 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = *(undefined4 *)pbVar34;
        if (bVar16) goto LAB__text__006bc634;
LAB__text__006bc72c:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = 0;
        pbVar34 = pbVar35;
        if (!bVar17) goto LAB__text__006bc648;
LAB__text__006bc73c:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = *(undefined4 *)pbVar35;
        if (bVar18) goto LAB__text__006bc658;
LAB__text__006bc750:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = 0;
        pbVar35 = pbVar34;
        if (!bVar19) goto LAB__text__006bc66c;
LAB__text__006bc760:
        pbVar35 = pbVar34 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = *(undefined4 *)pbVar34;
        if (bVar20) goto LAB__text__006bc67c;
LAB__text__006bc774:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = 0;
        pbVar34 = pbVar35;
        if (!bVar21) goto LAB__text__006bc690;
LAB__text__006bc784:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = *(undefined4 *)pbVar35;
        if (bVar22) goto LAB__text__006bc6a0;
LAB__text__006bc798:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = 0;
        pbVar35 = pbVar34;
      }
      else {
        pbVar35 = pbVar34 + 4;
        **(undefined4 **)param_1[0x27] = *(undefined4 *)pbVar34;
        pbVar34 = pbVar35;
        if (!bVar11) goto LAB__text__006bc6cc;
LAB__text__006bc5d8:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 4) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34;
        if (bVar12) goto LAB__text__006bc6dc;
LAB__text__006bc5ec:
        *(undefined4 *)(*(long *)param_1[0x27] + 8) = 0;
        if (!bVar13) goto LAB__text__006bc6f0;
LAB__text__006bc5fc:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34;
        if (bVar14) goto LAB__text__006bc700;
LAB__text__006bc610:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = 0;
        pbVar35 = pbVar34;
        if (bVar15) goto LAB__text__006bc718;
LAB__text__006bc624:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = 0;
        if (!bVar16) goto LAB__text__006bc72c;
LAB__text__006bc634:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34;
        if (bVar17) goto LAB__text__006bc73c;
LAB__text__006bc648:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = 0;
        if (!bVar18) goto LAB__text__006bc750;
LAB__text__006bc658:
        pbVar35 = pbVar34 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = *(undefined4 *)pbVar34;
        pbVar34 = pbVar35;
        if (bVar19) goto LAB__text__006bc760;
LAB__text__006bc66c:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = 0;
        if (!bVar20) goto LAB__text__006bc774;
LAB__text__006bc67c:
        pbVar34 = pbVar35 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34;
        if (bVar21) goto LAB__text__006bc784;
LAB__text__006bc690:
        *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = 0;
        if (!bVar22) goto LAB__text__006bc798;
LAB__text__006bc6a0:
        pbVar35 = pbVar34 + 4;
        *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = *(undefined4 *)pbVar34;
      }
      uVar37 = 0;
      if (bVar23) {
        uVar37 = *(undefined4 *)pbVar35;
      }
      *(undefined4 *)(*(long *)param_1[0x27] + 0x34) = uVar37;
      *(undefined4 *)(*(long *)param_1[0x27] + 0x38) = 0;
    }
    else {
      **(undefined4 **)(param_1[0x27] + 8) = *(undefined4 *)pbVar34;
      if (bVar7 == 1) {
        pbVar34 = pbVar35 + 5;
        goto LAB__text__006bc4d8;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 4) = *(undefined4 *)(pbVar35 + 5);
      if (bVar7 < 3) {
        pbVar34 = pbVar35 + 9;
        bVar11 = true;
        goto LAB__text__006bc4e8;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 8) = *(undefined4 *)(pbVar35 + 9);
      if (bVar7 == 3) {
        pbVar34 = pbVar35 + 0xd;
        bVar11 = true;
        bVar12 = true;
        goto LAB__text__006bc4f8;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0xc) = *(undefined4 *)(pbVar35 + 0xd);
      if (bVar7 < 5) {
        pbVar34 = pbVar35 + 0x11;
        bVar12 = true;
        bVar11 = true;
        bVar13 = true;
        goto LAB__text__006bc508;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x10) = *(undefined4 *)(pbVar35 + 0x11);
      if (bVar7 == 5) {
        pbVar34 = pbVar35 + 0x15;
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
        goto LAB__text__006bc518;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x14) = *(undefined4 *)(pbVar35 + 0x15);
      if (bVar7 < 7) {
        pbVar34 = pbVar35 + 0x19;
        bVar14 = true;
        bVar12 = true;
        bVar11 = true;
        bVar13 = true;
        bVar15 = true;
        goto LAB__text__006bc528;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x18) = *(undefined4 *)(pbVar35 + 0x19);
      if (bVar7 == 7) {
        pbVar34 = pbVar35 + 0x1d;
        bVar15 = true;
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
        bVar16 = true;
        goto LAB__text__006bc538;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x1c) = *(undefined4 *)(pbVar35 + 0x1d);
      if (bVar7 < 9) {
        pbVar34 = pbVar35 + 0x21;
        bVar16 = true;
        bVar14 = true;
        bVar12 = true;
        bVar11 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        goto LAB__text__006bc548;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x20) = *(undefined4 *)(pbVar35 + 0x21);
      if (bVar7 == 9) {
        pbVar34 = pbVar35 + 0x25;
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        goto LAB__text__006bc558;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x24) = *(undefined4 *)(pbVar35 + 0x25);
      if (bVar7 < 0xb) {
        pbVar34 = pbVar35 + 0x29;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar12 = true;
        bVar11 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        goto LAB__text__006bc568;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x28) = *(undefined4 *)(pbVar35 + 0x29);
      if (bVar7 == 0xb) {
        pbVar34 = pbVar35 + 0x2d;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        goto LAB__text__006bc578;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x2c) = *(undefined4 *)(pbVar35 + 0x2d);
      if (bVar7 < 0xd) {
        pbVar34 = pbVar35 + 0x31;
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar12 = true;
        bVar11 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        goto LAB__text__006bc588;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x30) = *(undefined4 *)(pbVar35 + 0x31);
      if (bVar7 == 0xd) {
        pbVar34 = pbVar35 + 0x35;
        bVar21 = true;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        goto LAB__text__006bc598;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x34) = *(undefined4 *)(pbVar35 + 0x35);
      if (bVar7 < 0xf) {
        pbVar34 = pbVar35 + 0x39;
        bVar22 = true;
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar12 = true;
        bVar11 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        bVar23 = true;
        goto LAB__text__006bc5a8;
      }
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x38) = *(undefined4 *)(pbVar35 + 0x39);
      if (bVar7 == 0xf) {
        pbVar35 = pbVar35 + 0x3d;
        *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = 0;
      }
      else {
        *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = *(undefined4 *)(pbVar35 + 0x3d);
        pbVar35 = pbVar35 + 0x41;
      }
      **(undefined4 **)param_1[0x27] = *(undefined4 *)pbVar35;
      *(undefined4 *)(*(long *)param_1[0x27] + 4) = *(undefined4 *)(pbVar35 + 4);
      *(undefined4 *)(*(long *)param_1[0x27] + 8) = *(undefined4 *)(pbVar35 + 8);
      *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = *(undefined4 *)(pbVar35 + 0xc);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = *(undefined4 *)(pbVar35 + 0x10);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = *(undefined4 *)(pbVar35 + 0x14);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = *(undefined4 *)(pbVar35 + 0x18);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = *(undefined4 *)(pbVar35 + 0x1c);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = *(undefined4 *)(pbVar35 + 0x20);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = *(undefined4 *)(pbVar35 + 0x24);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = *(undefined4 *)(pbVar35 + 0x28);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = *(undefined4 *)(pbVar35 + 0x2c);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = *(undefined4 *)(pbVar35 + 0x30);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x34) = *(undefined4 *)(pbVar35 + 0x34);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x38) = *(undefined4 *)(pbVar35 + 0x38);
      if (bVar7 != 0xf) {
        *(undefined4 *)(*(long *)param_1[0x27] + 0x3c) = *(undefined4 *)(pbVar35 + 0x3c);
        goto joined_r0x006bc4bc;
      }
    }
    *(undefined4 *)(*(long *)param_1[0x27] + 0x3c) = 0;
    if ((uVar10 >> 7 & 1) == 0) goto LAB__text__006bc4c0;
LAB__text__006bc7dc:
    if (*(char *)(param_7 + 0xd1) == '\0') {
      uVar25 = FUN__text__006940b0();
      param_1[0x21] = uVar25;
      uVar9 = *(ushort *)((long)param_1 + 0x114);
    }
    else {
      uVar25 = FUN__text__006926f0();
      param_1[0x21] = uVar25;
      uVar9 = *(ushort *)((long)param_1 + 0x114);
    }
  }
  if (((uVar9 >> 7 & 1) == 0) || (*(uint *)(lVar33 + 0xa4) == 0)) goto LAB__text__006bc980;
  puVar3 = (undefined4 *)(lVar33 + (ulong)*(uint *)(lVar33 + 0xa4));
  if (*(char *)((long)puVar3 + 10) == '\0') {
    lVar29 = 0;
LAB__text__006bc860:
    lVar30 = 0x30;
  }
  else {
    lVar29 = 0xc;
    if (0x800 < *(ushort *)(param_7 + 0xd6)) {
      lVar29 = 0x20;
    }
    lVar29 = (long)puVar3 + lVar29;
    if ((ulong)*(byte *)(lVar29 + 4) == 0) goto LAB__text__006bc860;
    lVar30 = (ulong)*(byte *)(lVar29 + 4) * 0x10 + 0x20;
  }
  puVar26 = (undefined4 *)FUN__text__006a0f04(lVar30);
  param_1[0x2a] = puVar26;
  *puVar26 = *puVar3;
  *(undefined4 *)(param_1[0x2a] + 4) = puVar3[1];
  *(undefined8 *)(param_1[0x2a] + 8) = 0;
  *(undefined1 *)(param_1[0x2a] + 0x10) = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(param_1[0x2a] + 0x11) = *(undefined1 *)((long)puVar3 + 9);
  if (*(ushort *)(param_7 + 0xd6) < 0x801) {
    *(undefined4 *)(param_1[0x2a] + 0x14) = 0;
    *(undefined4 *)(param_1[0x2a] + 0x18) = 0;
    *(undefined4 *)(param_1[0x2a] + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(param_1[0x2a] + 0x14) = puVar3[3];
    *(undefined4 *)(param_1[0x2a] + 0x18) = puVar3[4];
    *(uint *)(param_1[0x2a] + 0x1c) = (uint)*(byte *)(puVar3 + 5);
  }
  if (lVar29 == 0) {
    *(undefined1 *)(param_1[0x2a] + 0x12) = 0;
  }
  else {
    *(undefined1 *)(param_1[0x2a] + 0x12) = *(undefined1 *)(lVar29 + 4);
    if (*(char *)(lVar29 + 4) != '\0') {
      lVar30 = 0;
      uVar32 = 0;
      do {
        lVar2 = uVar32 * 4;
        uVar32 = uVar32 + 1;
        lVar2 = lVar29 + (ulong)*(uint *)(lVar29 + 8 + lVar2);
        *(long *)(param_1[0x2a] + lVar30 + 0x20) = lVar2;
        lVar4 = param_1[0x2a] + lVar30;
        lVar30 = lVar30 + 0x10;
        *(uint *)(lVar4 + 0x28) = (uint)*(byte *)(lVar2 + 1);
      } while (uVar32 < *(byte *)(lVar29 + 4));
    }
  }
LAB__text__006bc980:
  lVar29 = *(long *)(lVar31 + 8) + 0xc;
  plVar27 = (long *)(**(code **)(**(long **)(lVar31 + 0x30) + 0x68))
                              (*(long **)(lVar31 + 0x30),param_3,
                               lVar29 + (ulong)*(uint *)(lVar29 + (ulong)*(ushort *)(lVar33 + 0x5a)
                                                                  * 4));
  param_1[0x1e] = plVar27;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x110))();
  }
  fVar38 = *(float *)(lVar33 + 0x70);
  if ((*(ushort *)(lVar33 + 0x5e) >> 0xc & 1) == 0) {
    *(float *)(param_1 + 0x1f) = fVar38;
    fVar38 = *(float *)(lVar33 + 0x74);
  }
  else {
    iVar24 = (**(code **)(*(long *)param_1[0x1e] + 0x20))();
    *(float *)(param_1 + 0x1f) = fVar38 * (float)iVar24;
    fVar38 = *(float *)(lVar33 + 0x74);
    iVar24 = (**(code **)(*(long *)param_1[0x1e] + 0x28))();
    fVar38 = fVar38 * (float)iVar24;
  }
  *(float *)((long)param_1 + 0xfc) = fVar38;
  uVar28 = FUN__text__0069d8f0(*(undefined8 *)(param_7 + 0x30),*(undefined2 *)(param_5 + 0x58));
  uVar25 = 0;
  if (param_6 != 0) {
    uVar25 = FUN__text__0069d8f0(*(undefined8 *)(param_7 + 0x38),*(undefined2 *)(param_6 + 0x58));
  }
  plVar27 = (long *)FUN__text__006a0f04(0x50);
  if (plVar27 != (long *)0x0) {
    *plVar27 = _DAT_008a69f0 + 0x10;
    FUN__text__006a9930(plVar27,param_2,param_3,uVar28,uVar25,param_7);
  }
  param_1[0x28] = plVar27;
  if (*(uint *)(lVar36 + 0x80) != 0) {
    param_1[0x1c] = lVar36 + (ulong)*(uint *)(lVar36 + 0x80);
  }
  *param_4 = (uint)*(ushort *)(lVar33 + 0x5e);
  uVar32 = 0;
  if (1 < uVar8) {
    uVar32 = (ulong)((uVar8 >> 1) - 1);
  }
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_88 + 0x38);
  *(ulong *)(param_4 + 4) = lVar36 + (ulong)*(uint *)(lVar36 + 100);
  *(ulong *)(param_4 + 6) = uVar32;
  param_4[8] = uVar6;
  *(undefined1 *)((long)param_1 + 0x117) = *(undefined1 *)(param_7 + 0xd1);
  if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
    lVar29 = FUN__text__006b44cc(param_1);
    *(byte *)(lVar29 + 0x228) = *(byte *)(lVar29 + 0x228) & 0xfd | *(char *)(param_7 + 0xdc) << 1;
  }
  return;
}


