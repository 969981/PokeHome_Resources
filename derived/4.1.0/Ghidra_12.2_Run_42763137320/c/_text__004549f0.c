/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004549f0; name: FUN_.text__004549f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004549f0(ulong *param_1,long param_2,uint param_3,long param_4,long *param_5,
                        long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  int aiStack_150 [8];
  long lStack_130;
  ulong *local_128;
  ulong local_120 [4];
  long local_100;
  long local_f8;
  ulong *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 == 0) {
    return;
  }
  uVar5 = *_DAT_008a4b90;
  uVar15 = (ulong)uVar5;
  lVar14 = (long)aiStack_150 + (0x20 - ((ulong)((uint)uVar5 * 4 + 0xf) & 0x7fff0));
  uVar3 = (uint)param_1[2];
  uVar16 = (ulong)uVar3 * 8 + 0xf & 0xffffffff0;
  lVar35 = lVar14 - uVar16;
  lVar8 = lVar35 - uVar16;
  lVar32 = lVar8 - (uVar2 * uVar15 * 0x14 + 0xf & 0x3ffffffffffff0);
  lVar38 = lVar32 - ((ulong)uVar3 * 8 * uVar15 + 0xf & 0xffffffffffff0);
  param_5 = (long *)*param_5;
  bVar4 = *(byte *)(param_5 + 1);
  uVar23 = (ulong)bVar4;
  lVar24 = lVar38 - ((ulong)((uint)bVar4 * 8 + 0xf) & 0xff0);
  local_e8 = param_6;
  local_e0 = param_7;
  local_d8 = param_8;
  if (bVar4 != 0) {
    if (bVar4 == 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      lVar11 = 4;
      do {
        plVar9 = (long *)(lVar24 + uVar18 * 8);
        uVar18 = uVar18 + 2;
        *plVar9 = *param_5 + (lVar11 + -4) * (ulong)*(ushort *)(param_5 + 2);
        lVar10 = lVar11 * (ulong)*(ushort *)(param_5 + 2);
        lVar11 = lVar11 + 8;
        plVar9[1] = *param_5 + lVar10;
      } while ((uVar23 & 0xfe) != uVar18);
    }
    if ((bVar4 & 1) != 0) {
      *(ulong *)(lVar24 + uVar18 * 8) = *param_5 + uVar18 * *(ushort *)(param_5 + 2) * 4;
    }
  }
  lVar10 = lVar24 - uVar16;
  lVar11 = lVar10 - uVar16;
  lVar13 = lVar11 - uVar16;
  local_120[1] = lVar24;
  local_120[2] = uVar23;
  local_f0 = param_1;
  local_d0 = param_2;
  local_b0 = lVar13;
  local_a8 = lVar11;
  local_a0 = lVar10;
  local_98 = lVar8;
  if (uVar5 == 0) {
    local_128 = param_1 + 1;
    uVar23 = (ulong)(uint)*local_128;
    uVar16 = uVar15;
    if ((uint)*local_128 != 0) {
      local_b8 = *param_1;
      uVar18 = (ulong)(bVar4 + 3 & 0x1fc);
LAB__text__00454e84:
      lVar8 = local_98;
      lVar10 = local_a0;
      lVar11 = local_a8;
      lVar24 = local_b0;
      param_2 = local_d0;
      uVar33 = 0;
      uVar19 = 0;
      local_c0 = uVar23;
      do {
        uVar37 = (ulong)*(ushort *)(local_b8 + uVar33 * 2);
        plVar9 = *(long **)(param_4 + uVar37 * 8);
        bVar4 = *(byte *)(plVar9 + 1);
        if (bVar4 != 0) {
          lVar27 = uVar37 * 8;
          uVar37 = 0;
          uVar12 = *(undefined8 *)(local_e8 + lVar27);
          lVar25 = *(long *)(*(long *)(param_2 + lVar27) + 0x20);
          lVar26 = *(long *)(local_e0 + lVar27);
          lVar27 = *(long *)(local_d8 + lVar27);
          do {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(lVar35 + lVar7) = *plVar9 + uVar37 * *(ushort *)(plVar9 + 2) * 4;
            lVar31 = *(long *)(lVar25 + 0x28);
            *(undefined8 *)(lVar10 + lVar7) = uVar12;
            lVar28 = uVar37 * uVar18 * 4;
            *(long *)(lVar24 + lVar7) = lVar27 + lVar28;
            lVar6 = uVar37 * 0x10;
            uVar37 = uVar37 + 1;
            *(long *)(lVar11 + lVar7) = lVar26 + lVar28;
            *(long *)(lVar8 + lVar7) = lVar31 + lVar6;
          } while (uVar37 != bVar4);
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar23);
      uVar17 = (uint)local_c0;
      uVar23 = local_c0;
      goto joined_r0x00454f44;
    }
    if (uVar2 == 0) {
      uVar19 = 0;
      param_2 = param_2;
      goto LAB__text__004551ec;
    }
    uVar23 = 0;
    uVar19 = 0;
    local_120[3] = *param_1;
    local_c0 = (ulong)(bVar4 + 3 & 0x1fc);
    lVar24 = lVar13;
  }
  else {
    uVar23 = 0;
    uVar16 = 0;
    uVar17 = 0;
    local_c0 = CONCAT44(local_c0._4_4_,_DAT_008ab044);
    local_120[0] = uVar15;
    local_100 = param_4;
    local_f8 = lVar14;
    do {
      uVar29 = (uint)local_c0;
      if (param_3 - uVar17 <= (uint)local_c0) {
        uVar29 = param_3 - uVar17;
      }
      uVar17 = uVar29 + uVar17;
      local_b8 = CONCAT44(local_b8._4_4_,uVar29);
      local_90 = *local_f0;
      uStack_88 = local_f0[1];
      local_80 = local_f0[2];
      FUN__text__00452a00((float)uVar17 * (1.0 / (float)param_3),&local_90,local_d0,
                          lVar32 + uVar23 * 0x14);
      uVar23 = (ulong)((int)uVar23 + uVar2);
      *(undefined4 *)(local_f8 + uVar16 * 4) = (undefined4)local_b8;
      uVar16 = uVar16 + 1;
    } while (uVar15 != uVar16);
    local_128 = local_f0 + 1;
    uVar23 = (ulong)(uint)*local_128;
    param_4 = local_100;
    lVar14 = local_f8;
    uVar16 = local_120[0];
    if ((uint)*local_128 == 0) {
      uVar23 = 0;
      uVar19 = 0;
      lVar8 = local_98;
      lVar10 = local_a0;
      lVar11 = local_a8;
      lVar24 = local_b0;
      param_2 = local_d0;
      if (uVar2 == 0) goto LAB__text__004551ec;
    }
    else {
      local_b8 = *local_f0;
      uVar18 = (ulong)((int)local_120[2] + 3U & 0x1fc);
      if (uVar5 == 0) {
        goto LAB__text__00454e84;
      }
      uVar16 = 0;
      uVar19 = 0;
      local_c0 = uVar23;
      do {
        uVar23 = (ulong)*(ushort *)(local_b8 + uVar16 * 2);
        plVar9 = *(long **)(local_100 + uVar23 * 8);
        bVar4 = *(byte *)(plVar9 + 1);
        if (bVar4 != 0) {
          lVar24 = uVar23 * 8;
          uVar23 = 0;
          uVar12 = *(undefined8 *)(local_e8 + lVar24);
          lVar8 = *(long *)(*(long *)(local_d0 + lVar24) + 0x20);
          lVar14 = *(long *)(local_e0 + lVar24);
          lVar24 = *(long *)(local_d8 + lVar24);
          do {
            *(ulong *)(lVar35 + uVar19 * 8) = *plVar9 + uVar23 * *(ushort *)(plVar9 + 2) * 4;
            *(ulong *)(local_98 + uVar19 * 8) = *(long *)(lVar8 + 0x28) + uVar23 * 0x10;
            if (uVar5 < 4) {
              uVar33 = 0;
            }
            else {
              uVar33 = 0;
              uVar36 = uVar16 & 0xffffffff;
              uVar37 = uVar19;
              do {
                iVar34 = (int)uVar36;
                uVar33 = uVar33 + 4;
                *(ulong *)(lVar38 + uVar37 * 8) = lVar32 + uVar36 * 0x14;
                iVar30 = (int)uVar37;
                *(ulong *)(lVar38 + (ulong)(uVar3 + iVar30) * 8) =
                     lVar32 + (ulong)(uVar2 + iVar34) * 0x14;
                *(ulong *)(lVar38 + (ulong)(uVar3 * 2 + iVar30) * 8) =
                     lVar32 + (ulong)(uVar2 * 2 + iVar34) * 0x14;
                uVar36 = (ulong)(iVar34 + uVar2 * 4);
                uVar37 = (ulong)(iVar30 + uVar3 * 4);
                *(ulong *)(lVar38 + (ulong)(uVar3 * 3 + iVar30) * 8) =
                     lVar32 + (ulong)(uVar2 * 3 + iVar34) * 0x14;
              } while ((uVar15 & 0xfffc) != uVar33);
            }
            if ((uVar5 & 3) != 0) {
              uVar29 = (int)uVar19 + uVar3 * (int)uVar33;
              uVar17 = (int)uVar16 + uVar2 * (int)uVar33;
              uVar33 = uVar15 & 3;
              do {
                uVar37 = (ulong)uVar17;
                uVar17 = uVar17 + uVar2;
                uVar33 = uVar33 - 1;
                *(ulong *)(lVar38 + (ulong)uVar29 * 8) = lVar32 + uVar37 * 0x14;
                uVar29 = uVar29 + uVar3;
              } while (uVar33 != 0);
            }
            lVar11 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(undefined8 *)(local_a0 + lVar11) = uVar12;
            lVar10 = uVar23 * uVar18;
            uVar23 = uVar23 + 1;
            lVar10 = lVar10 * 4;
            *(long *)(local_a8 + lVar11) = lVar14 + lVar10;
            *(long *)(local_b0 + lVar11) = lVar24 + lVar10;
          } while (uVar23 != bVar4);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != local_c0);
      uVar17 = (uint)local_c0;
      param_4 = local_100;
      lVar14 = local_f8;
      uVar16 = local_120[0];
      param_2 = local_d0;
      uVar23 = local_c0;
      lVar24 = local_b0;
      lVar11 = local_a8;
      lVar10 = local_a0;
      lVar8 = local_98;
joined_r0x00454f44:
      local_c0 = uVar23;
      if (uVar2 <= uVar17) goto LAB__text__004551ec;
    }
    local_120[3] = *local_f0;
    local_c0 = (ulong)((int)local_120[2] + 3U & 0x1fc);
    if ((int)uVar16 != 0) {
      uVar23 = uVar23 & 0xffffffff;
      local_120[0] = uVar16;
      local_100 = param_4;
      local_f8 = lVar14;
      local_c8 = uVar15;
      do {
        uVar15 = (ulong)*(ushort *)(local_120[3] + uVar23 * 2);
        plVar9 = *(long **)(local_100 + uVar15 * 8);
        local_b8 = (ulong)*(byte *)(plVar9 + 1);
        if (*(byte *)(plVar9 + 1) != 0) {
          lVar14 = uVar15 * 8;
          uVar15 = 0;
          uVar12 = *(undefined8 *)(local_e8 + lVar14);
          lVar11 = *(long *)(local_e0 + lVar14);
          lVar24 = *(long *)(*(long *)(param_2 + lVar14) + 0x20);
          lVar14 = *(long *)(local_d8 + lVar14);
          uVar18 = uVar19;
          do {
            *(ulong *)(lVar35 + uVar18 * 8) = *plVar9 + uVar15 * *(ushort *)(plVar9 + 2) * 4;
            *(ulong *)(lVar8 + uVar18 * 8) = *(long *)(lVar24 + 0x30) + uVar15 * 0x10;
            if ((uint)local_c8 < 4) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              uVar37 = uVar23 & 0xffffffff;
              uVar33 = uVar18;
              do {
                iVar34 = (int)uVar37;
                uVar19 = uVar19 + 4;
                *(ulong *)(lVar38 + uVar33 * 8) = lVar32 + uVar37 * 0x14;
                iVar30 = (int)uVar33;
                *(ulong *)(lVar38 + (ulong)(uVar3 + iVar30) * 8) =
                     lVar32 + (ulong)(uVar2 + iVar34) * 0x14;
                *(ulong *)(lVar38 + (ulong)(uVar3 * 2 + iVar30) * 8) =
                     lVar32 + (ulong)(uVar2 * 2 + iVar34) * 0x14;
                uVar37 = (ulong)(iVar34 + uVar2 * 4);
                uVar33 = (ulong)(iVar30 + uVar3 * 4);
                *(ulong *)(lVar38 + (ulong)(uVar3 * 3 + iVar30) * 8) =
                     lVar32 + (ulong)(uVar2 * 3 + iVar34) * 0x14;
              } while ((uVar16 & 0xfffc) != uVar19);
            }
            if ((uVar16 & 3) != 0) {
              uVar29 = (int)uVar18 + uVar3 * (int)uVar19;
              uVar17 = (int)uVar23 + uVar2 * (int)uVar19;
              uVar19 = uVar16 & 3;
              do {
                uVar33 = (ulong)uVar17;
                uVar17 = uVar17 + uVar2;
                uVar19 = uVar19 - 1;
                *(ulong *)(lVar38 + (ulong)uVar29 * 8) = lVar32 + uVar33 * 0x14;
                uVar29 = uVar29 + uVar3;
              } while (uVar19 != 0);
            }
            uVar19 = (ulong)((int)uVar18 + 1);
            lVar8 = uVar18 * 8;
            lVar10 = uVar15 * local_c0;
            uVar15 = uVar15 + 1;
            *(undefined8 *)(local_a0 + lVar8) = uVar12;
            lVar10 = lVar10 * 4;
            *(long *)(local_a8 + lVar8) = lVar11 + lVar10;
            *(long *)(local_b0 + lVar8) = lVar14 + lVar10;
            lVar8 = local_98;
            uVar18 = uVar19;
          } while (uVar15 != local_b8);
        }
        uVar23 = uVar23 + 1;
        param_2 = local_d0;
      } while (uVar23 != uVar2);
      uVar16 = local_120[0];
      goto LAB__text__004551ec;
    }
  }
  uVar15 = local_c0;
  uVar23 = uVar23 & 0xffffffff;
  do {
    uVar18 = (ulong)*(ushort *)(local_120[3] + uVar23 * 2);
    plVar9 = *(long **)(param_4 + uVar18 * 8);
    bVar4 = *(byte *)(plVar9 + 1);
    if (bVar4 != 0) {
      lVar27 = uVar18 * 8;
      uVar18 = 0;
      uVar12 = *(undefined8 *)(local_e8 + lVar27);
      lVar14 = *(long *)(local_e0 + lVar27);
      lVar25 = *(long *)(*(long *)(param_2 + lVar27) + 0x20);
      lVar27 = *(long *)(local_d8 + lVar27);
      do {
        lVar6 = uVar19 * 8;
        uVar19 = (ulong)((int)uVar19 + 1);
        *(ulong *)(lVar35 + lVar6) = *plVar9 + uVar18 * *(ushort *)(plVar9 + 2) * 4;
        lVar28 = *(long *)(lVar25 + 0x30);
        *(undefined8 *)(lVar10 + lVar6) = uVar12;
        lVar7 = uVar18 * uVar15 * 4;
        *(long *)(lVar24 + lVar6) = lVar27 + lVar7;
        lVar26 = uVar18 * 0x10;
        uVar18 = uVar18 + 1;
        *(long *)(lVar11 + lVar6) = lVar14 + lVar7;
        *(long *)(lVar8 + lVar6) = lVar28 + lVar26;
      } while (uVar18 != bVar4);
    }
    uVar23 = uVar23 + 1;
  } while (uVar23 != uVar2);
LAB__text__004551ec:
  uVar23 = local_120[2];
  uVar15 = local_120[1];
  *(int *)(lVar13 + -0x18) = (int)uVar19;
  *(int *)(lVar13 + -0x20) = (int)uVar16;
  *(int *)(lVar13 + -0x10) = (int)uVar23;
  FUN__text__0041f150(lVar35,lVar38,lVar8,uVar15);
  lVar32 = lVar32 + (ulong)(uint)(*(int *)((long)local_f0 + 0xc) * ((int)uVar16 + -1)) * 0x14;
  if ((int)local_f0[1] == 0) {
    uVar15 = 0;
    if (*(int *)((long)local_f0 + 0xc) == 0) {
      return;
    }
  }
  else {
    uVar16 = 0;
    do {
      puVar22 = (undefined8 *)(lVar32 + uVar16 * 0x14);
      uVar12 = *puVar22;
      uVar1 = puVar22[1];
      pbVar21 = *(byte **)(param_2 + (ulong)*(ushort *)(*local_f0 + uVar16 * 2) * 8);
      puVar20 = *(undefined8 **)(pbVar21 + 0x20);
      bVar4 = *pbVar21;
      *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar22 + 2);
      *puVar20 = uVar12;
      puVar20[1] = uVar1;
      if (bVar4 != 0) {
        if (bVar4 < 4) {
          lVar8 = 0;
        }
        else {
          lVar14 = 0;
          lVar8 = 0;
          do {
            lVar24 = puVar20[6];
            lVar8 = lVar8 + 4;
            uVar12 = *(undefined8 *)(puVar20[5] + lVar14);
            ((undefined8 *)(lVar24 + lVar14))[1] = uVar12;
            *(undefined8 *)(lVar24 + lVar14) = uVar12;
            lVar24 = puVar20[6];
            uVar12 = *(undefined8 *)(puVar20[5] + lVar14 + 0x10);
            *(undefined8 *)(lVar24 + lVar14 + 0x18) = uVar12;
            *(undefined8 *)(lVar24 + lVar14 + 0x10) = uVar12;
            lVar24 = puVar20[6];
            uVar12 = *(undefined8 *)(puVar20[5] + lVar14 + 0x20);
            *(undefined8 *)(lVar24 + lVar14 + 0x28) = uVar12;
            *(undefined8 *)(lVar24 + lVar14 + 0x20) = uVar12;
            uVar12 = *(undefined8 *)(puVar20[5] + lVar14 + 0x30);
            lVar24 = puVar20[6] + lVar14;
            lVar14 = lVar14 + 0x40;
            *(undefined8 *)(lVar24 + 0x38) = uVar12;
            *(undefined8 *)(lVar24 + 0x30) = uVar12;
          } while (((ulong)bVar4 & 0xfc) * 0x10 != lVar14);
        }
        uVar15 = (ulong)bVar4 & 3;
        if ((bVar4 & 3) != 0) {
          lVar8 = lVar8 << 4;
          do {
            lVar14 = puVar20[6];
            uVar15 = uVar15 - 1;
            uVar12 = *(undefined8 *)(puVar20[5] + lVar8);
            ((undefined8 *)(lVar14 + lVar8))[1] = uVar12;
            *(undefined8 *)(lVar14 + lVar8) = uVar12;
            lVar8 = lVar8 + 0x10;
          } while (uVar15 != 0);
        }
      }
      uVar15 = (ulong)(uint)*local_128;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar15);
    if (*(uint *)((long)local_f0 + 0xc) <= (uint)*local_128) {
      return;
    }
  }
  do {
    puVar20 = (undefined8 *)(lVar32 + uVar15 * 0x14);
    uVar12 = *puVar20;
    uVar1 = puVar20[1];
    pbVar21 = *(byte **)(param_2 + (ulong)*(ushort *)(*local_f0 + uVar15 * 2) * 8);
    lVar14 = *(long *)(pbVar21 + 0x20);
    bVar4 = *pbVar21;
    *(undefined4 *)(lVar14 + 0x24) = *(undefined4 *)(puVar20 + 2);
    *(undefined8 *)(lVar14 + 0x1c) = uVar1;
    *(undefined8 *)(lVar14 + 0x14) = uVar12;
    if (bVar4 != 0) {
      if (bVar4 < 4) {
        lVar24 = 0;
      }
      else {
        lVar8 = 0;
        lVar24 = 0;
        do {
          lVar24 = lVar24 + 4;
          uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + lVar8 + 8);
          puVar20 = (undefined8 *)(*(long *)(lVar14 + 0x28) + lVar8);
          puVar20[1] = uVar12;
          *puVar20 = uVar12;
          lVar35 = *(long *)(lVar14 + 0x28) + lVar8;
          uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + lVar8 + 0x18);
          *(undefined8 *)(lVar35 + 0x18) = uVar12;
          *(undefined8 *)(lVar35 + 0x10) = uVar12;
          lVar35 = *(long *)(lVar14 + 0x28) + lVar8;
          uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + lVar8 + 0x28);
          *(undefined8 *)(lVar35 + 0x28) = uVar12;
          *(undefined8 *)(lVar35 + 0x20) = uVar12;
          lVar35 = *(long *)(lVar14 + 0x30) + lVar8;
          lVar38 = *(long *)(lVar14 + 0x28) + lVar8;
          lVar8 = lVar8 + 0x40;
          uVar12 = *(undefined8 *)(lVar35 + 0x38);
          *(undefined8 *)(lVar38 + 0x38) = uVar12;
          *(undefined8 *)(lVar38 + 0x30) = uVar12;
        } while (((ulong)bVar4 & 0xfc) * 0x10 != lVar8);
      }
      uVar16 = (ulong)bVar4 & 3;
      if ((bVar4 & 3) != 0) {
        lVar24 = lVar24 << 4;
        do {
          uVar16 = uVar16 - 1;
          uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + lVar24 + 8);
          puVar20 = (undefined8 *)(*(long *)(lVar14 + 0x28) + lVar24);
          puVar20[1] = uVar12;
          *puVar20 = uVar12;
          lVar24 = lVar24 + 0x10;
        } while (uVar16 != 0);
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < *(uint *)((long)local_f0 + 0xc));
  return;
}


