/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00318240; name: FUN_.text__00318240
 */


void FUN__text__00318240(long param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *__dest;
  void *__s;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  uint5 uVar11;
  uint7 uVar12;
  undefined3 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  size_t sVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  undefined8 uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined1 uStack_179;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 uStack_f1;
  undefined1 local_f0 [8];
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  __dest = (char *)(param_1 + 0x2668da0);
  __s = (void *)(param_1 + 0x1cdf720);
  memset(__s,0,20000000);
  lVar16 = FUN__text__00321ac0();
  uVar21 = *(int *)(lVar16 + 0x19352c) - 2;
  uVar3 = uVar21 & 0x3f;
  uVar21 = -uVar21;
  if (-1 < (int)uVar21) {
    uVar3 = -(uVar21 & 0x3f);
  }
  lVar16 = FUN__text__00321ac0();
  local_d0 = *(undefined8 *)(lVar16 + 0x193550);
  uStack_c8 = *(undefined8 *)(lVar16 + 0x193558);
  local_c0 = *(undefined8 *)(lVar16 + 0x193560);
  uStack_b8 = *(undefined8 *)(lVar16 + 0x193568);
  local_f0 = *(undefined1 (*) [8])(lVar16 + 0x193530);
  uStack_e8 = *(undefined8 *)(lVar16 + 0x193538);
  local_e0 = *(undefined8 *)(lVar16 + 0x193540);
  uStack_d8 = *(undefined8 *)(lVar16 + 0x193548);
  lVar16 = FUN__text__00321ac0();
  local_70 = 0;
  local_90 = *(undefined8 *)(lVar16 + 0x193550);
  uStack_88 = *(undefined8 *)(lVar16 + 0x193558);
  local_80 = *(undefined8 *)(lVar16 + 0x193560);
  uStack_78 = *(undefined8 *)(lVar16 + 0x193568);
  local_b0 = *(undefined8 *)(lVar16 + 0x193530);
  uStack_a8 = *(undefined8 *)(lVar16 + 0x193538);
  local_a0 = *(undefined8 *)(lVar16 + 0x193540);
  uStack_98 = *(undefined8 *)(lVar16 + 0x193548);
  puVar17 = (undefined8 *)FUN__text__00321ac0();
  local_158 = puVar17[4];
  uStack_150 = puVar17[5];
  local_148 = puVar17[6];
  uStack_140 = puVar17[7];
  local_178 = *puVar17;
  uStack_170 = puVar17[1];
  local_168 = puVar17[2];
  uStack_160 = puVar17[3];
  puVar17 = (undefined8 *)FUN__text__00321ac0();
  local_118 = puVar17[4];
  local_110 = puVar17[5];
  local_f8 = 0;
  local_1b0 = 0;
  local_1f8 = 0;
  local_108 = puVar17[6];
  local_100 = puVar17[7];
  local_138 = *puVar17;
  uStack_130 = puVar17[1];
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_128 = puVar17[2];
  uStack_120 = puVar17[3];
  local_180 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_238 = 0;
  local_230 = 0;
  sVar18 = strnlen(param_2,10000000);
  lVar16 = FUN__text__00321ac0();
  cVar7 = *(char *)(lVar16 + 0x1935b0);
  if (cVar7 == '\0') {
    strncpy(__dest,param_2,10000000);
    goto LAB__text__00318f58;
  }
  lVar16 = FUN__text__00321ac0();
  iVar25 = *(int *)(lVar16 + 0x7a878);
  iVar39 = (int)sVar18;
  if (iVar25 == 3) {
    *(undefined2 *)__dest = *(undefined2 *)param_2;
    uVar4 = *(undefined4 *)(param_2 + 2);
    uVar10 = *(undefined2 *)(param_2 + 6);
    *(undefined2 *)(param_1 + 0x2668da2) = *(undefined2 *)(param_2 + 8);
    local_1a0._0_6_ = CONCAT42(uVar4,(undefined2)local_1a0);
    local_1a0 = CONCAT26(uVar10,(undefined6)local_1a0);
    local_188._0_6_ = CONCAT42(*(undefined4 *)(param_2 + 10),(undefined2)local_188);
    local_188 = CONCAT26(*(undefined2 *)(param_2 + 0xe),(undefined6)local_188);
    strncpy((char *)(param_1 + 0x2668da4),param_2 + 0x10,(long)(iVar39 + -0x10));
    iVar25 = 0;
    uVar24 = *(undefined8 *)(local_f0 + (int)uVar3);
    lVar16 = 0;
    uVar20 = (uint)uVar24;
    uVar21 = (uint)((ulong)uVar24 >> 0x20);
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((uint)*(byte *)(lVar19 + 0x193530) == (uVar20 & 0xff)) {
        iVar25 = iVar25 + 1;
      }
    } while (lVar16 != 0x40);
    iVar39 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((uint)*(byte *)(lVar19 + 0x193530) == (uVar20 >> 8 & 0xff)) {
        iVar39 = iVar39 + 1;
      }
    } while (lVar16 != 0x40);
    iVar22 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((uint)*(byte *)(lVar19 + 0x193530) == (uVar20 >> 0x10 & 0xff)) {
        iVar22 = iVar22 + 1;
      }
    } while (lVar16 != 0x40);
    iVar30 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((uint)*(byte *)(lVar19 + 0x193530) == ((uint)((ulong)uVar24 >> 0x18) & 0xff)) {
        iVar30 = iVar30 + 1;
      }
    } while (lVar16 != 0x40);
    iVar33 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((uint)*(byte *)(lVar19 + 0x193530) == (uVar21 & 0xff)) {
        iVar33 = iVar33 + 1;
      }
    } while (lVar16 != 0x40);
    iVar36 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((uint)*(byte *)(lVar19 + 0x193530) == (uVar21 >> 8 & 0xff)) {
        iVar36 = iVar36 + 1;
      }
    } while (lVar16 != 0x40);
    iVar40 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if ((ushort)*(byte *)(lVar19 + 0x193530) == ((ushort)((ulong)uVar24 >> 0x30) & 0xff)) {
        iVar40 = iVar40 + 1;
      }
    } while (lVar16 != 0x40);
    iVar41 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      lVar19 = lVar19 + lVar16;
      lVar16 = lVar16 + 1;
      if (*(char *)(lVar19 + 0x193530) == (char)((ulong)uVar24 >> 0x38)) {
        iVar41 = iVar41 + 1;
      }
    } while (lVar16 != 0x40);
    iVar31 = 0;
    lVar16 = 0;
    uVar24 = *(undefined8 *)((long)&local_178 + (long)(int)uVar3);
    uVar21 = (uint)uVar24;
    uVar3 = (uint)((ulong)uVar24 >> 0x20);
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((uint)*pbVar1 == (uVar21 & 0xff)) {
        iVar31 = iVar31 + 1;
      }
    } while (lVar16 != 0x40);
    iVar42 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((uint)*pbVar1 == (uVar21 >> 8 & 0xff)) {
        iVar42 = iVar42 + 1;
      }
    } while (lVar16 != 0x40);
    iVar43 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((uint)*pbVar1 == (uVar21 >> 0x10 & 0xff)) {
        iVar43 = iVar43 + 1;
      }
    } while (lVar16 != 0x40);
    iVar34 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((uint)*pbVar1 == ((uint)((ulong)uVar24 >> 0x18) & 0xff)) {
        iVar34 = iVar34 + 1;
      }
    } while (lVar16 != 0x40);
    iVar37 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((uint)*pbVar1 == (uVar3 & 0xff)) {
        iVar37 = iVar37 + 1;
      }
    } while (lVar16 != 0x40);
    iVar38 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((uint)*pbVar1 == (uVar3 >> 8 & 0xff)) {
        iVar38 = iVar38 + 1;
      }
    } while (lVar16 != 0x40);
    iVar32 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      pbVar1 = (byte *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if ((ushort)*pbVar1 == ((ushort)((ulong)uVar24 >> 0x30) & 0xff)) {
        iVar32 = iVar32 + 1;
      }
    } while (lVar16 != 0x40);
    iVar35 = 0;
    lVar16 = 0;
    do {
      lVar19 = FUN__text__00321ac0();
      uVar15 = local_190;
      uVar14 = local_1a8;
      pcVar2 = (char *)(lVar19 + lVar16);
      lVar16 = lVar16 + 1;
      if (*pcVar2 == (char)((ulong)uVar24 >> 0x38)) {
        iVar35 = iVar35 + 1;
      }
    } while (lVar16 != 0x40);
    lVar16 = (long)(iVar41 + iVar40 + iVar36 + iVar33 + iVar30 + iVar22 + iVar39 + iVar25);
    uVar4 = *(undefined4 *)(local_f0 + lVar16 + -1);
    uVar5 = *(undefined4 *)(local_f0 + lVar16 + 3);
    uVar6 = *(undefined4 *)(local_f0 + lVar16 + 7);
    local_1a8 = CONCAT71(local_1a8._1_7_,(char)uVar4);
    local_1a8._0_5_ = CONCAT14((char)uVar5,(undefined4)local_1a8);
    uVar11 = (uint5)(undefined5)local_1a8 >> 0x10;
    local_1a8._0_2_ = CONCAT11((char)((uint)uVar4 >> 0x10),(char)uVar4);
    local_1a8._6_2_ = SUB82(uVar14,6);
    local_1a8._0_6_ =
         CONCAT15((char)((uint)uVar5 >> 0x10),CONCAT32((int3)uVar11,(undefined2)local_1a8));
    local_1a0._0_2_ = CONCAT11((char)((uint)uVar6 >> 0x10),(char)uVar6);
    local_190._0_2_ = CONCAT11((char)((uint)uVar4 >> 0x18),(char)((uint)uVar4 >> 8));
    uVar10 = (undefined2)local_190;
    lVar16 = (long)(iVar35 + iVar32 + iVar38 + iVar37 + iVar34 + iVar43 + iVar42 + iVar31 + -1);
    local_190._0_5_ = CONCAT14((char)((uint)uVar5 >> 8),(undefined4)local_190);
    local_190._6_2_ = SUB82(uVar15,6);
    local_190._0_6_ = CONCAT15((char)((uint)uVar5 >> 0x18),(undefined5)local_190);
    uVar24 = local_190;
    uVar4 = *(undefined4 *)(local_f0 + lVar16 + -0x80);
    uVar5 = *(undefined4 *)(local_f0 + lVar16 + -0x7c);
    local_1a8._0_3_ = CONCAT12((char)uVar5,(undefined2)local_1a8);
    uVar13 = (undefined3)local_1a8;
    local_1a8._0_7_ = CONCAT16((char)uVar4,(undefined6)local_1a8);
    uVar12 = (uint7)(undefined7)local_1a8 >> 0x20;
    local_1a8._0_4_ = CONCAT13((char)((uint)uVar5 >> 0x10),uVar13);
    local_1a8 = CONCAT17((char)((uint)uVar4 >> 0x10),CONCAT34((int3)uVar12,(undefined4)local_1a8));
    local_190._0_3_ = CONCAT12((char)((uint)uVar5 >> 8),uVar10);
    local_190._4_4_ = SUB84(uVar24,4);
    local_190._0_4_ = CONCAT13((char)((uint)uVar5 >> 0x18),(undefined3)local_190);
    local_190._0_7_ = CONCAT16((char)((uint)uVar4 >> 8),(undefined6)local_190);
    local_190 = CONCAT17((char)((uint)uVar4 >> 0x18),(undefined7)local_190);
    local_188._0_2_ = CONCAT11((char)((uint)uVar6 >> 0x18),(char)((uint)uVar6 >> 8));
    goto LAB__text__00318f58;
  }
  if (iVar25 != 2) {
    if (iVar25 == 1) {
      *(undefined4 *)__dest = *(undefined4 *)param_2;
      uVar4 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x2668da4) = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
      strncpy((char *)(param_1 + 0x2668da8),param_2 + 0x10,(long)(iVar39 + -0x10));
      local_240 = 0;
      local_248 = *(undefined8 *)(local_f0 + (int)uVar3);
      local_2a0 = 0;
      uStack_298 = 0;
      FUN__text__00597110(&local_248,8,&local_2a0);
      local_250 = 0;
      local_258 = *(undefined8 *)((long)&local_178 + (long)(int)uVar3);
      bVar8 = (byte)local_2a0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      FUN__text__00597110(&local_258,8,&local_2e8);
      uVar3 = 0x40;
      if (bVar8 != 0) {
        uVar3 = (uint)bVar8;
      }
      local_1a0 = CONCAT44(uVar4,(undefined4)local_1a0);
      local_188 = CONCAT44(uVar5,(undefined4)local_188);
      uVar21 = 0x40;
      if (uStack_2e0._7_1_ != 0) {
        uVar21 = (uint)uStack_2e0._7_1_;
      }
      uVar3 = uVar3 - 1;
      uVar21 = uVar21 - 1;
      lVar16 = (long)(int)(uVar3 - (uVar3 + ((uVar3 & 0xfc00) >> 10) & 0xffffffc0));
      lVar19 = (long)(int)(uVar21 - (uVar21 + ((uVar21 & 0xfc00) >> 10) & 0xffffffc0));
      local_1a8 = *(undefined8 *)(local_f0 + lVar16);
      local_190 = *(undefined8 *)((long)&local_178 + lVar19);
      local_1a0 = CONCAT44(uVar4,*(undefined4 *)(local_f0 + lVar16 + 8));
      local_188 = CONCAT44(uVar5,*(undefined4 *)(local_f0 + lVar19 + -0x80));
    }
    goto LAB__text__00318f58;
  }
  lVar16 = FUN__text__00321ac0();
  bVar8 = *(byte *)(lVar16 + (int)uVar3 + 0x193530);
  lVar16 = FUN__text__00321ac0();
  bVar9 = *(byte *)(lVar16 + (int)uVar3);
  uVar26 = (ulong)bVar8 & 0x3f;
  local_260 = 0;
  local_270 = 0;
  uStack_268 = 0;
  uVar23 = (ulong)bVar9 & 0x3f;
  local_280 = 0;
  uStack_278 = 0;
  local_2a8 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  iVar25 = (int)uVar26;
  if (iVar25 != 0) {
    lVar16 = uVar26 + (long)(int)uVar3;
    if (iVar25 == 1) {
      uVar28 = 0;
    }
    else {
      uVar27 = 0;
      puVar29 = local_f0 + lVar16 + -1;
      do {
        *(undefined1 *)((long)&local_2a0 + uVar27) = *puVar29;
        uVar28 = uVar27 + 2;
        *(undefined1 *)((long)&local_2a0 + uVar27 + 1) =
             local_f0[(uVar27 ^ 0xfffffffffffffffe) + lVar16];
        uVar27 = uVar28;
        puVar29 = puVar29 + -2;
      } while (((ulong)bVar8 & 0x3e) != uVar28);
    }
    if ((bVar8 & 1) != 0) {
      *(undefined1 *)((long)&local_2a0 + uVar28) = local_f0[lVar16 + ~uVar28];
    }
  }
  iVar22 = (int)uVar23;
  if (iVar22 != 0) {
    lVar16 = uVar23 + (long)(int)uVar3;
    if (iVar22 == 1) {
      uVar28 = 0;
    }
    else {
      uVar27 = 0;
      puVar29 = &uStack_179 + lVar16;
      do {
        *(undefined1 *)((long)&local_2e8 + uVar27) = *puVar29;
        uVar28 = uVar27 + 2;
        *(undefined1 *)((long)&local_2e8 + uVar27 + 1) =
             *(undefined1 *)((long)&local_178 + (uVar27 ^ 0xfffffffffffffffe) + lVar16);
        uVar27 = uVar28;
        puVar29 = puVar29 + -2;
      } while (((ulong)bVar9 & 0x3e) != uVar28);
    }
    if ((bVar9 & 1) != 0) {
      *(undefined1 *)((long)&local_2e8 + uVar28) =
           *(undefined1 *)((long)&local_178 + lVar16 + ~uVar28);
    }
  }
  if (iVar25 == 0) {
    iVar25 = 0;
    if (iVar22 == 0) goto LAB__text__00318bb4;
LAB__text__00318b60:
    uVar26 = 0;
    iVar22 = 0;
    do {
      if ((uVar26 & 1) != 0) {
        *(undefined1 *)((long)&local_238 + (long)iVar22) =
             *(undefined1 *)((long)&local_2e8 + uVar26);
        iVar22 = iVar22 + 1;
        if (iVar22 == 0x10) {
          iVar22 = 0x10;
          break;
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar23 != uVar26);
  }
  else {
    uVar27 = 0;
    iVar25 = 0;
    do {
      if ((uVar27 & 1) == 0) {
        *(undefined1 *)((long)&local_1f0 + (long)iVar25) =
             *(undefined1 *)((long)&local_2a0 + uVar27);
        iVar25 = iVar25 + 1;
        if (iVar25 == 0x10) {
          iVar25 = 0x10;
          break;
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar26 != uVar27);
    if (iVar22 != 0) goto LAB__text__00318b60;
LAB__text__00318bb4:
    iVar22 = 0;
  }
  if (0 < iVar25) {
    local_1a8 = CONCAT71(local_1a8._1_7_,(undefined1)local_1f0);
  }
  if (0 < iVar22) {
    local_190 = CONCAT71(local_190._1_7_,(undefined1)local_238);
  }
  if (iVar25 < 2) {
    if (iVar22 < 2) goto LAB__text__00318bf0;
LAB__text__00318d00:
    local_190._0_2_ = CONCAT11(local_238._1_1_,(undefined1)local_190);
    if (2 < iVar25) goto LAB__text__00318d10;
LAB__text__00318bf8:
    if (iVar22 < 3) goto LAB__text__00318c00;
LAB__text__00318d20:
    local_190._0_3_ = CONCAT12(local_238._2_1_,(undefined2)local_190);
    if (3 < iVar25) goto LAB__text__00318d30;
LAB__text__00318c08:
    if (iVar22 < 4) goto LAB__text__00318c10;
LAB__text__00318d40:
    local_190._0_4_ = CONCAT13(local_238._3_1_,(undefined3)local_190);
    if (4 < iVar25) goto LAB__text__00318d50;
LAB__text__00318c18:
    if (iVar22 < 5) goto LAB__text__00318c20;
LAB__text__00318d60:
    local_190._0_5_ = CONCAT14(local_238._4_1_,(undefined4)local_190);
    if (5 < iVar25) goto LAB__text__00318d70;
LAB__text__00318c28:
    if (iVar22 < 6) goto LAB__text__00318c30;
LAB__text__00318d80:
    local_190._0_6_ = CONCAT15(local_238._5_1_,(undefined5)local_190);
    if (6 < iVar25) goto LAB__text__00318d90;
LAB__text__00318c38:
    if (iVar22 < 7) goto LAB__text__00318c40;
LAB__text__00318da0:
    local_190._0_7_ = CONCAT16(local_238._6_1_,(undefined6)local_190);
    if (7 < iVar25) goto LAB__text__00318db0;
LAB__text__00318c48:
    if (iVar22 < 8) goto LAB__text__00318c50;
LAB__text__00318dc0:
    local_190 = CONCAT17(local_238._7_1_,(undefined7)local_190);
    if (8 < iVar25) goto LAB__text__00318dd0;
LAB__text__00318c58:
    if (iVar22 < 9) goto LAB__text__00318c60;
LAB__text__00318de0:
    local_188 = CONCAT71(local_188._1_7_,(undefined1)local_230);
    if (9 < iVar25) goto LAB__text__00318df0;
LAB__text__00318c68:
    if (iVar22 < 10) goto LAB__text__00318c70;
LAB__text__00318e00:
    local_188._0_2_ = CONCAT11(local_230._1_1_,(undefined1)local_188);
    if (10 < iVar25) goto LAB__text__00318e10;
LAB__text__00318c78:
    if (iVar22 < 0xb) goto LAB__text__00318c80;
LAB__text__00318e20:
    local_188._0_3_ = CONCAT12(local_230._2_1_,(undefined2)local_188);
    if (0xb < iVar25) goto LAB__text__00318e30;
LAB__text__00318c88:
    if (iVar22 < 0xc) goto LAB__text__00318c90;
LAB__text__00318e40:
    local_188._0_4_ = CONCAT13(local_230._3_1_,(undefined3)local_188);
    if (0xc < iVar25) goto LAB__text__00318e50;
LAB__text__00318c98:
    if (iVar22 < 0xd) goto LAB__text__00318ca0;
LAB__text__00318e60:
    local_188._0_5_ = CONCAT14(local_230._4_1_,(undefined4)local_188);
    if (0xd < iVar25) goto LAB__text__00318e70;
LAB__text__00318ca8:
    if (iVar22 < 0xe) goto LAB__text__00318cb0;
LAB__text__00318e80:
    local_188._0_6_ = CONCAT15(local_230._5_1_,(undefined5)local_188);
    if (0xe < iVar25) goto LAB__text__00318e90;
LAB__text__00318cb8:
    if (iVar22 < 0xf) goto LAB__text__00318cc0;
LAB__text__00318ea0:
    local_188._0_7_ = CONCAT16(local_230._6_1_,(undefined6)local_188);
    if (0xf < iVar25) goto LAB__text__00318eb0;
LAB__text__00318cc8:
    if (iVar22 < 0x10) goto LAB__text__00318cd0;
LAB__text__00318ec0:
    local_188 = CONCAT17(local_230._7_1_,(undefined7)local_188);
    if (iVar25 != 0x10) goto LAB__text__00318ed0;
LAB__text__00318cd8:
    *(undefined4 *)__dest = *(undefined4 *)param_2;
  }
  else {
    local_1a8._0_2_ = CONCAT11(local_1f0._1_1_,(undefined1)local_1a8);
    if (1 < iVar22) goto LAB__text__00318d00;
LAB__text__00318bf0:
    if (iVar25 < 3) goto LAB__text__00318bf8;
LAB__text__00318d10:
    local_1a8._0_3_ = CONCAT12(local_1f0._2_1_,(undefined2)local_1a8);
    if (2 < iVar22) goto LAB__text__00318d20;
LAB__text__00318c00:
    if (iVar25 < 4) goto LAB__text__00318c08;
LAB__text__00318d30:
    local_1a8._0_4_ = CONCAT13(local_1f0._3_1_,(undefined3)local_1a8);
    if (3 < iVar22) goto LAB__text__00318d40;
LAB__text__00318c10:
    if (iVar25 < 5) goto LAB__text__00318c18;
LAB__text__00318d50:
    local_1a8._0_5_ = CONCAT14(local_1f0._4_1_,(undefined4)local_1a8);
    if (4 < iVar22) goto LAB__text__00318d60;
LAB__text__00318c20:
    if (iVar25 < 6) goto LAB__text__00318c28;
LAB__text__00318d70:
    local_1a8._0_6_ = CONCAT15(local_1f0._5_1_,(undefined5)local_1a8);
    if (5 < iVar22) goto LAB__text__00318d80;
LAB__text__00318c30:
    if (iVar25 < 7) goto LAB__text__00318c38;
LAB__text__00318d90:
    local_1a8._0_7_ = CONCAT16(local_1f0._6_1_,(undefined6)local_1a8);
    if (6 < iVar22) goto LAB__text__00318da0;
LAB__text__00318c40:
    if (iVar25 < 8) goto LAB__text__00318c48;
LAB__text__00318db0:
    local_1a8 = CONCAT17(local_1f0._7_1_,(undefined7)local_1a8);
    if (7 < iVar22) goto LAB__text__00318dc0;
LAB__text__00318c50:
    if (iVar25 < 9) goto LAB__text__00318c58;
LAB__text__00318dd0:
    local_1a0 = CONCAT71(local_1a0._1_7_,(undefined1)local_1e8);
    if (8 < iVar22) goto LAB__text__00318de0;
LAB__text__00318c60:
    if (iVar25 < 10) goto LAB__text__00318c68;
LAB__text__00318df0:
    local_1a0._0_2_ = CONCAT11(local_1e8._1_1_,(undefined1)local_1a0);
    if (9 < iVar22) goto LAB__text__00318e00;
LAB__text__00318c70:
    if (iVar25 < 0xb) goto LAB__text__00318c78;
LAB__text__00318e10:
    local_1a0._0_3_ = CONCAT12(local_1e8._2_1_,(undefined2)local_1a0);
    if (10 < iVar22) goto LAB__text__00318e20;
LAB__text__00318c80:
    if (iVar25 < 0xc) goto LAB__text__00318c88;
LAB__text__00318e30:
    local_1a0._0_4_ = CONCAT13(local_1e8._3_1_,(undefined3)local_1a0);
    if (0xb < iVar22) goto LAB__text__00318e40;
LAB__text__00318c90:
    if (iVar25 < 0xd) goto LAB__text__00318c98;
LAB__text__00318e50:
    local_1a0._0_5_ = CONCAT14(local_1e8._4_1_,(undefined4)local_1a0);
    if (0xc < iVar22) goto LAB__text__00318e60;
LAB__text__00318ca0:
    if (iVar25 < 0xe) goto LAB__text__00318ca8;
LAB__text__00318e70:
    local_1a0._0_6_ = CONCAT15(local_1e8._5_1_,(undefined5)local_1a0);
    if (0xd < iVar22) goto LAB__text__00318e80;
LAB__text__00318cb0:
    if (iVar25 < 0xf) goto LAB__text__00318cb8;
LAB__text__00318e90:
    local_1a0._0_7_ = CONCAT16(local_1e8._6_1_,(undefined6)local_1a0);
    if (0xe < iVar22) goto LAB__text__00318ea0;
LAB__text__00318cc0:
    if (iVar25 < 0x10) goto LAB__text__00318cc8;
LAB__text__00318eb0:
    local_1a0 = CONCAT17(local_1e8._7_1_,(undefined7)local_1a0);
    if (0xf < iVar22) goto LAB__text__00318ec0;
LAB__text__00318cd0:
    if (iVar25 == 0x10) goto LAB__text__00318cd8;
LAB__text__00318ed0:
    memcpy((void *)((long)&local_1a8 + (long)iVar25),param_2,(long)(0x10 - iVar25));
    *(undefined4 *)__dest = *(undefined4 *)(param_2 + (0x10 - iVar25));
  }
  if (iVar22 != 0x10) {
    memcpy((void *)((long)&local_190 + (long)iVar22),param_2 + (0x14 - iVar25),(long)(0x10 - iVar22)
          );
  }
  iVar22 = (0x24 - iVar25) - iVar22;
  strncpy((char *)(param_1 + 0x2668da4),param_2 + iVar22,(long)(iVar39 - iVar22));
LAB__text__00318f58:
  sVar18 = strlen(__dest);
  FUN__text__003d5a80(&local_2a0,__s,&DAT_00989680,__dest,sVar18,0);
  uVar23 = local_2a0;
  if (cVar7 == '\0') {
    memcpy(__dest,__s,10000000);
  }
  else {
    memset(__dest,0,10000000);
    nn::crypto::DecryptAes128Cbc(__dest,10000000,&local_1a8,0x10,&local_190,0x10,__s,uVar23);
  }
  nn::util::DecompressGzip(param_2,10000000,__dest,10000000,(void *)(param_1 + 0x9896e8),0x1bf8);
  memset(__s,0,20000000);
  return;
}


