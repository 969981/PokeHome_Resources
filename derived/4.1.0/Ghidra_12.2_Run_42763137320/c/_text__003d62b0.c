/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d62b0; name: FUN_.text__003d62b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__003d62b0(int *param_1,byte *param_2,ulong param_3,undefined1 (*param_4) [16],
                   ulong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  uint5 uVar17;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char cVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  uint6 uVar37;
  uint7 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  iVar11 = *param_1;
  if (iVar11 < 0) {
    if (iVar11 != -1) {
      return ZEXT816(0x16);
    }
    *param_1 = 0;
    uVar9 = _DAT_00717597;
    uVar8 = uRam000000000071758f;
    uVar7 = _DAT_00717587;
    iVar11 = 0;
    *(undefined8 *)((long)param_1 + 0x1e) = uRam000000000071759f;
    *(undefined8 *)((long)param_1 + 0x16) = uVar9;
    *(undefined8 *)((long)param_1 + 0xe) = uVar8;
    *(undefined8 *)((long)param_1 + 6) = uVar7;
    uVar9 = _DAT_007175b7;
    uVar8 = uRam00000000007175af;
    uVar7 = _DAT_007175a7;
    *(undefined8 *)((long)param_1 + 0x3e) = uRam00000000007175bf;
    *(undefined8 *)((long)param_1 + 0x36) = uVar9;
    *(undefined8 *)((long)param_1 + 0x2e) = uVar8;
    *(undefined8 *)((long)param_1 + 0x26) = uVar7;
  }
  if ((long)param_5 < 0) {
    *param_1 = -0x16;
    return ZEXT816(0x16);
  }
  if (param_3 < ((param_5 + 2) / 3 << 2 | 1)) {
    *param_1 = -0x22;
    return ZEXT816(0x22);
  }
  if (iVar11 == 0) {
    pbVar13 = param_2;
    pbVar12 = param_2;
    if (param_5 < 0x20) goto LAB__text__003d6330;
LAB__text__003d63ac:
    uVar8 = uRam0000000000724b08;
    uVar7 = _DAT_00724b00;
    bVar1 = *(byte *)(param_1 + 0x11);
    bVar2 = *(byte *)((long)param_1 + 0x45);
    pauVar10 = param_4;
    do {
      param_4 = (undefined1 (*) [16])(*pauVar10 + 0xc);
      param_5 = param_5 - 0xc;
      auVar18._8_8_ = uVar8;
      auVar18._0_8_ = uVar7;
      auVar18 = a64_TBL(ZEXT816(0),*pauVar10,auVar18);
      auVar36._8_4_ = 0xfffffffe;
      auVar36._0_8_ = 0xfffffffefffffffe;
      auVar36._12_4_ = 0xfffffffe;
      auVar36 = NEON_ushl(auVar18,auVar36,4);
      auVar39._8_4_ = 0xfffffffc;
      auVar39._0_8_ = 0xfffffffcfffffffc;
      auVar39._12_4_ = 0xfffffffc;
      auVar39 = NEON_ushl(auVar18,auVar39,4);
      uVar35 = CONCAT17(auVar36[7],(uint7)((auVar36[3] & 0x3f) << 0x18)) & 0x3fffffffffffffff;
      auVar40._8_4_ = 0xfffffffa;
      auVar40._0_8_ = 0xfffffffafffffffa;
      auVar40._12_4_ = 0xfffffffa;
      auVar40 = NEON_ushl(auVar18,auVar40,4);
      uVar38 = CONCAT16(auVar39[6],(uint6)(uint3)((auVar39[2] & 0x3f) << 0x10)) & 0x3fffffffffffff;
      uVar17 = CONCAT14(auVar18[4],(uint)(auVar18[0] & 0x3f)) & 0x3fffffffff;
      auVar19[8] = auVar18[8] & 0x3f;
      auVar19[0xc] = auVar18[0xc] & 0x3f;
      uVar37 = CONCAT15(auVar40[5],(uint5)(ushort)((auVar40[1] & 0x3f) << 8)) & 0x3fffffffffff;
      auVar19[0] = (undefined1)uVar17;
      auVar19[1] = (char)(uVar37 >> 8);
      auVar19[4] = (undefined1)(uVar17 >> 0x20);
      auVar19[9] = auVar40[9] & 0x3f;
      auVar19[2] = (char)(uVar38 >> 0x10);
      auVar19[3] = (char)(uVar35 >> 0x18);
      auVar19[5] = (char)(uVar37 >> 0x28);
      auVar19[6] = (char)(uVar38 >> 0x30);
      auVar19[7] = (char)(uVar35 >> 0x38);
      auVar19[10] = auVar39[10] & 0x3f;
      auVar19[0xb] = auVar36[0xb] & 0x3f;
      auVar19[0xd] = auVar40[0xd] & 0x3f;
      auVar19[0xe] = auVar39[0xe] & 0x3f;
      auVar19[0xf] = auVar36[0xf] & 0x3f;
      auVar36 = NEON_rev32(auVar19,1);
      cVar16 = auVar36[0];
      cVar20 = auVar36[1];
      cVar21 = auVar36[2];
      cVar22 = auVar36[3];
      cVar23 = auVar36[4];
      cVar24 = auVar36[5];
      cVar25 = auVar36[6];
      cVar26 = auVar36[7];
      cVar27 = auVar36[8];
      cVar28 = auVar36[9];
      cVar29 = auVar36[10];
      cVar30 = auVar36[0xb];
      cVar31 = auVar36[0xc];
      cVar32 = auVar36[0xd];
      cVar33 = auVar36[0xe];
      cVar34 = auVar36[0xf];
      pbVar13 = pbVar12 + 0x10;
      pbVar12[8] = bVar2 & ~-(cVar27 < '?') | cVar27 + 0x41U & -(cVar27 < '\x1a') |
                   bVar1 & -(cVar27 == '>') |
                   -(cVar27 < '4') & ~-(cVar27 < '\x1a') & cVar27 + 0x47U |
                   -('3' < cVar27) & ~-('=' < cVar27) & cVar27 - 4U;
      pbVar12[9] = bVar2 & ~-(cVar28 < '?') | cVar28 + 0x41U & -(cVar28 < '\x1a') |
                   bVar1 & -(cVar28 == '>') |
                   -(cVar28 < '4') & ~-(cVar28 < '\x1a') & cVar28 + 0x47U |
                   -('3' < cVar28) & ~-('=' < cVar28) & cVar28 - 4U;
      pbVar12[10] = bVar2 & ~-(cVar29 < '?') | cVar29 + 0x41U & -(cVar29 < '\x1a') |
                    bVar1 & -(cVar29 == '>') |
                    -(cVar29 < '4') & ~-(cVar29 < '\x1a') & cVar29 + 0x47U |
                    -('3' < cVar29) & ~-('=' < cVar29) & cVar29 - 4U;
      pbVar12[0xb] = bVar2 & ~-(cVar30 < '?') | cVar30 + 0x41U & -(cVar30 < '\x1a') |
                     bVar1 & -(cVar30 == '>') |
                     -(cVar30 < '4') & ~-(cVar30 < '\x1a') & cVar30 + 0x47U |
                     -('3' < cVar30) & ~-('=' < cVar30) & cVar30 - 4U;
      pbVar12[0xc] = bVar2 & ~-(cVar31 < '?') | cVar31 + 0x41U & -(cVar31 < '\x1a') |
                     bVar1 & -(cVar31 == '>') |
                     -(cVar31 < '4') & ~-(cVar31 < '\x1a') & cVar31 + 0x47U |
                     -('3' < cVar31) & ~-('=' < cVar31) & cVar31 - 4U;
      pbVar12[0xd] = bVar2 & ~-(cVar32 < '?') | cVar32 + 0x41U & -(cVar32 < '\x1a') |
                     bVar1 & -(cVar32 == '>') |
                     -(cVar32 < '4') & ~-(cVar32 < '\x1a') & cVar32 + 0x47U |
                     -('3' < cVar32) & ~-('=' < cVar32) & cVar32 - 4U;
      pbVar12[0xe] = bVar2 & ~-(cVar33 < '?') | cVar33 + 0x41U & -(cVar33 < '\x1a') |
                     bVar1 & -(cVar33 == '>') |
                     -(cVar33 < '4') & ~-(cVar33 < '\x1a') & cVar33 + 0x47U |
                     -('3' < cVar33) & ~-('=' < cVar33) & cVar33 - 4U;
      pbVar12[0xf] = bVar2 & ~-(cVar34 < '?') | cVar34 + 0x41U & -(cVar34 < '\x1a') |
                     bVar1 & -(cVar34 == '>') |
                     -(cVar34 < '4') & ~-(cVar34 < '\x1a') & cVar34 + 0x47U |
                     -('3' < cVar34) & ~-('=' < cVar34) & cVar34 - 4U;
      *pbVar12 = bVar2 & ~-(cVar16 < '?') | cVar16 + 0x41U & -(cVar16 < '\x1a') |
                 bVar1 & -(cVar16 == '>') |
                 -(cVar16 < '4') & ~-(cVar16 < '\x1a') & cVar16 + 0x47U |
                 -('3' < cVar16) & ~-('=' < cVar16) & cVar16 - 4U;
      pbVar12[1] = bVar2 & ~-(cVar20 < '?') | cVar20 + 0x41U & -(cVar20 < '\x1a') |
                   bVar1 & -(cVar20 == '>') |
                   -(cVar20 < '4') & ~-(cVar20 < '\x1a') & cVar20 + 0x47U |
                   -('3' < cVar20) & ~-('=' < cVar20) & cVar20 - 4U;
      pbVar12[2] = bVar2 & ~-(cVar21 < '?') | cVar21 + 0x41U & -(cVar21 < '\x1a') |
                   bVar1 & -(cVar21 == '>') |
                   -(cVar21 < '4') & ~-(cVar21 < '\x1a') & cVar21 + 0x47U |
                   -('3' < cVar21) & ~-('=' < cVar21) & cVar21 - 4U;
      pbVar12[3] = bVar2 & ~-(cVar22 < '?') | cVar22 + 0x41U & -(cVar22 < '\x1a') |
                   bVar1 & -(cVar22 == '>') |
                   -(cVar22 < '4') & ~-(cVar22 < '\x1a') & cVar22 + 0x47U |
                   -('3' < cVar22) & ~-('=' < cVar22) & cVar22 - 4U;
      pbVar12[4] = bVar2 & ~-(cVar23 < '?') | cVar23 + 0x41U & -(cVar23 < '\x1a') |
                   bVar1 & -(cVar23 == '>') |
                   -(cVar23 < '4') & ~-(cVar23 < '\x1a') & cVar23 + 0x47U |
                   -('3' < cVar23) & ~-('=' < cVar23) & cVar23 - 4U;
      pbVar12[5] = bVar2 & ~-(cVar24 < '?') | cVar24 + 0x41U & -(cVar24 < '\x1a') |
                   bVar1 & -(cVar24 == '>') |
                   -(cVar24 < '4') & ~-(cVar24 < '\x1a') & cVar24 + 0x47U |
                   -('3' < cVar24) & ~-('=' < cVar24) & cVar24 - 4U;
      pbVar12[6] = bVar2 & ~-(cVar25 < '?') | cVar25 + 0x41U & -(cVar25 < '\x1a') |
                   bVar1 & -(cVar25 == '>') |
                   -(cVar25 < '4') & ~-(cVar25 < '\x1a') & cVar25 + 0x47U |
                   -('3' < cVar25) & ~-('=' < cVar25) & cVar25 - 4U;
      pbVar12[7] = bVar2 & ~-(cVar26 < '?') | cVar26 + 0x41U & -(cVar26 < '\x1a') |
                   bVar1 & -(cVar26 == '>') |
                   -(cVar26 < '4') & ~-(cVar26 < '\x1a') & cVar26 + 0x47U |
                   -('3' < cVar26) & ~-('=' < cVar26) & cVar26 - 4U;
      pauVar10 = param_4;
      pbVar12 = pbVar13;
    } while (0xf < param_5);
  }
  else {
    if (iVar11 == 1) {
      if (param_5 < 2) {
        if (param_5 == 1) {
          *param_1 = 2;
          *(undefined1 *)((long)param_1 + 5) = (*param_4)[0];
          return ZEXT816(0);
        }
LAB__text__003d65cc:
        return ZEXT816(0);
      }
      lVar15 = 2;
      bVar1 = *(byte *)(param_1 + 1);
      uVar4 = (uint)(byte)(*param_4)[0] << 8 | (uint)bVar1 << 0x10;
      bVar2 = (*param_4)[1];
      uVar6 = CONCAT11((*param_4)[0],bVar2);
      lVar14 = -2;
    }
    else {
      if (param_5 == 0) goto LAB__text__003d65cc;
      lVar15 = 1;
      bVar1 = *(byte *)(param_1 + 1);
      uVar4 = (uint)*(byte *)((long)param_1 + 5) << 8 | (uint)bVar1 << 0x10;
      bVar2 = (*param_4)[0];
      uVar6 = CONCAT11(*(byte *)((long)param_1 + 5),bVar2);
      lVar14 = -1;
    }
    param_5 = lVar14 + param_5;
    param_4 = (undefined1 (*) [16])(*param_4 + lVar15);
    *param_2 = *(byte *)((long)param_1 + (ulong)(bVar1 >> 2) + 6);
    param_2[1] = *(byte *)((long)param_1 + ((ulong)(uVar4 >> 0xc) & 0x3f) + 6);
    param_2[2] = *(byte *)((long)param_1 + ((ulong)(uVar6 >> 6) & 0x3f) + 6);
    param_2[3] = *(byte *)((long)param_1 + ((ulong)bVar2 & 0x3f) + 6);
    pbVar13 = param_2 + 4;
    pbVar12 = param_2 + 4;
    if (0x1f < param_5) goto LAB__text__003d63ac;
LAB__text__003d6330:
    if (param_5 < 3) goto LAB__text__003d64f0;
  }
  do {
    bVar1 = (*param_4)[0];
    param_5 = param_5 - 3;
    bVar2 = (*param_4)[1];
    bVar3 = (*param_4)[2];
    param_4 = (undefined1 (*) [16])(*param_4 + 3);
    *pbVar13 = *(byte *)((long)param_1 + (ulong)(bVar1 >> 2) + 6);
    pbVar13[1] = *(byte *)((long)param_1 +
                          ((ulong)(((uint)bVar2 << 8 | (uint)bVar1 << 0x10) >> 0xc) & 0x3f) + 6);
    pbVar13[2] = *(byte *)((long)param_1 + ((ulong)(ushort)(CONCAT11(bVar2,bVar3) >> 6) & 0x3f) + 6)
    ;
    pbVar13[3] = *(byte *)((long)param_1 + ((ulong)bVar3 & 0x3f) + 6);
    pbVar13 = pbVar13 + 4;
  } while (2 < param_5);
LAB__text__003d64f0:
  if ((param_5 != 0) && (*(undefined1 *)(param_1 + 1) = (*param_4)[0], param_5 == 2)) {
    *(undefined1 *)((long)param_1 + 5) = (*param_4)[1];
  }
  *param_1 = (int)param_5;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (long)pbVar13 - (long)param_2;
  return auVar5 << 0x40;
}


