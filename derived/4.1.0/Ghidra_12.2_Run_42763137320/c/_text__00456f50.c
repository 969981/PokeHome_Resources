/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00456f50; name: FUN_.text__00456f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00456f50(long *param_1,long param_2,uint param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long alStack_e0 [3];
  uint *local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 == 0) {
    return;
  }
  uVar6 = *_DAT_008a4b90;
  uVar18 = (ulong)uVar6;
  local_b8 = (long)alStack_e0 - ((ulong)((uint)uVar6 * 4 + 0xf) & 0x7fff0);
  uVar4 = *(uint *)(param_1 + 2);
  uVar21 = (ulong)uVar4 * 8 + 0xf & 0xffffffff0;
  lVar35 = local_b8 - uVar21;
  lVar30 = lVar35 - uVar21;
  lVar32 = lVar30 - (uVar3 * uVar18 * 0x14 + 0xf & 0x3ffffffffffff0);
  lVar33 = lVar32 - ((ulong)uVar4 * 8 * uVar18 + 0xf & 0xffffffffffff0);
  lVar34 = lVar33 - uVar21;
  alStack_e0[2] = uVar18;
  local_b0 = param_5;
  local_a8 = param_4;
  local_a0 = param_2;
  local_90 = lVar30;
  if (uVar6 == 0) {
    lVar19 = *param_1;
    local_c8 = (uint *)(param_1 + 1);
    uVar21 = (ulong)*local_c8;
    if (*local_c8 != 0) {
LAB__text__0045729c:
      lVar30 = local_90;
      uVar18 = 0;
      uVar31 = 0;
      param_2 = local_a0;
      do {
        uVar22 = (ulong)*(ushort *)(lVar19 + uVar18 * 2);
        plVar9 = *(long **)(local_a8 + uVar22 * 8);
        bVar5 = *(byte *)(plVar9 + 1);
        if (bVar5 != 0) {
          lVar11 = uVar22 * 8;
          lVar13 = *(long *)(*(long *)(param_2 + lVar11) + 0x20);
          plVar12 = *(long **)(local_b0 + lVar11);
          if (bVar5 == 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            lVar11 = 0x10;
            lVar26 = 4;
            do {
              uVar20 = (int)uVar31 + (int)uVar22;
              uVar22 = uVar22 + 2;
              lVar7 = (ulong)uVar20 * 8;
              lVar8 = (ulong)(uVar20 + 1) * 8;
              *(ulong *)(lVar35 + lVar7) = *plVar9 + (lVar26 + -4) * (ulong)*(ushort *)(plVar9 + 2);
              *(long *)(lVar30 + lVar7) = *(long *)(lVar13 + 0x28) + lVar11 + -0x10;
              *(ulong *)(lVar34 + lVar7) =
                   *plVar12 + (lVar26 + -4) * (ulong)*(ushort *)(plVar12 + 2);
              *(ulong *)(lVar35 + lVar8) = *plVar9 + lVar26 * (ulong)*(ushort *)(plVar9 + 2);
              lVar7 = *(long *)(lVar13 + 0x28) + lVar11;
              lVar11 = lVar11 + 0x20;
              *(long *)(lVar30 + lVar8) = lVar7;
              lVar7 = lVar26 * (ulong)*(ushort *)(plVar12 + 2);
              lVar26 = lVar26 + 8;
              *(long *)(lVar34 + lVar8) = *plVar12 + lVar7;
            } while (((ulong)bVar5 & 0xfe) != uVar22);
            uVar31 = (ulong)(uint)((int)uVar31 + (int)uVar22);
            param_2 = local_a0;
            if ((bVar5 & 1) == 0) goto LAB__text__004572b0;
          }
          lVar11 = uVar31 * 8;
          uVar31 = (ulong)((int)uVar31 + 1);
          *(ulong *)(lVar35 + lVar11) = *plVar9 + uVar22 * 4 * (ulong)*(ushort *)(plVar9 + 2);
          *(ulong *)(lVar30 + lVar11) = *(long *)(lVar13 + 0x28) + uVar22 * 0x10;
          *(ulong *)(lVar34 + lVar11) = *plVar12 + uVar22 * 4 * (ulong)*(ushort *)(plVar12 + 2);
        }
LAB__text__004572b0:
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar21);
      uVar20 = (uint)uVar21;
      goto joined_r0x004573e4;
    }
    uVar31 = 0;
  }
  else {
    uVar31 = 0;
    uVar21 = 0;
    uVar20 = 0;
    local_c8 = (uint *)CONCAT44(local_c8._4_4_,_DAT_008ab044);
    alStack_e0[1] = lVar34;
    local_c0 = param_1;
    local_98 = lVar35;
    do {
      uVar15 = (uint)local_c8;
      if (param_3 - uVar20 <= (uint)local_c8) {
        uVar15 = param_3 - uVar20;
      }
      local_88 = *local_c0;
      lStack_80 = local_c0[1];
      uVar20 = uVar15 + uVar20;
      local_78 = local_c0[2];
      FUN__text__00452a00((float)uVar20 * (1.0 / (float)param_3),&local_88,local_a0,
                          lVar32 + uVar31 * 0x14);
      param_1 = local_c0;
      lVar34 = alStack_e0[1];
      uVar31 = (ulong)((int)uVar31 + uVar3);
      *(uint *)(local_b8 + uVar21 * 4) = uVar15;
      uVar21 = uVar21 + 1;
    } while (uVar18 != uVar21);
    local_c8 = (uint *)(local_c0 + 1);
    uVar20 = *local_c8;
    uVar21 = (ulong)uVar20;
    lVar30 = local_90;
    lVar35 = local_98;
    if (uVar20 == 0) {
      uVar31 = 0;
      param_2 = local_a0;
      if (uVar3 == 0) goto LAB__text__00457680;
    }
    else {
      lVar19 = *local_c0;
      if (uVar6 == 0) {
        goto LAB__text__0045729c;
      }
      uVar22 = 0;
      uVar31 = 0;
      do {
        uVar10 = (ulong)*(ushort *)(lVar19 + uVar22 * 2);
        plVar9 = *(long **)(local_a8 + uVar10 * 8);
        bVar5 = *(byte *)(plVar9 + 1);
        if (bVar5 != 0) {
          lVar11 = uVar10 * 8;
          uVar10 = 0;
          plVar12 = *(long **)(local_b0 + lVar11);
          lVar11 = *(long *)(*(long *)(local_a0 + lVar11) + 0x20);
          uVar14 = uVar31;
          do {
            lVar13 = uVar10 * 4;
            *(ulong *)(lVar35 + uVar14 * 8) = *plVar9 + lVar13 * (ulong)*(ushort *)(plVar9 + 2);
            *(ulong *)(lVar30 + uVar14 * 8) = *(long *)(lVar11 + 0x28) + uVar10 * 0x10;
            if (uVar6 < 4) {
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              uVar29 = uVar22 & 0xffffffff;
              uVar17 = uVar14;
              do {
                iVar28 = (int)uVar29;
                uVar31 = uVar31 + 4;
                *(ulong *)(lVar33 + uVar17 * 8) = lVar32 + uVar29 * 0x14;
                iVar16 = (int)uVar17;
                *(ulong *)(lVar33 + (ulong)(uVar4 + iVar16) * 8) =
                     lVar32 + (ulong)(uVar3 + iVar28) * 0x14;
                *(ulong *)(lVar33 + (ulong)(uVar4 * 2 + iVar16) * 8) =
                     lVar32 + (ulong)(uVar3 * 2 + iVar28) * 0x14;
                uVar29 = (ulong)(iVar28 + uVar3 * 4);
                uVar17 = (ulong)(iVar16 + uVar4 * 4);
                *(ulong *)(lVar33 + (ulong)(uVar4 * 3 + iVar16) * 8) =
                     lVar32 + (ulong)(uVar3 * 3 + iVar28) * 0x14;
              } while ((uVar18 & 0xfffc) != uVar31);
            }
            if ((uVar6 & 3) != 0) {
              uVar27 = (int)uVar14 + uVar4 * (int)uVar31;
              uVar15 = (int)uVar22 + uVar3 * (int)uVar31;
              uVar31 = uVar18 & 3;
              do {
                uVar17 = (ulong)uVar15;
                uVar15 = uVar15 + uVar3;
                uVar31 = uVar31 - 1;
                *(ulong *)(lVar33 + (ulong)uVar27 * 8) = lVar32 + uVar17 * 0x14;
                uVar27 = uVar27 + uVar4;
              } while (uVar31 != 0);
            }
            uVar10 = uVar10 + 1;
            uVar31 = (ulong)((int)uVar14 + 1);
            *(ulong *)(lVar34 + uVar14 * 8) = *plVar12 + lVar13 * (ulong)*(ushort *)(plVar12 + 2);
            uVar14 = uVar31;
            lVar30 = local_90;
            lVar35 = local_98;
          } while (uVar10 != bVar5);
        }
        uVar22 = uVar22 + 1;
        param_2 = local_a0;
      } while (uVar22 != uVar21);
joined_r0x004573e4:
      if (uVar3 <= uVar20) goto LAB__text__00457680;
    }
    lVar19 = *param_1;
    if ((int)alStack_e0[2] != 0) {
      uVar18 = alStack_e0[2] & 3;
      uVar22 = alStack_e0[2] & 0xfffc;
      do {
        uVar10 = (ulong)*(ushort *)(lVar19 + uVar21 * 2);
        plVar9 = *(long **)(local_a8 + uVar10 * 8);
        bVar5 = *(byte *)(plVar9 + 1);
        if (bVar5 != 0) {
          lVar11 = uVar10 * 8;
          uVar10 = 0;
          plVar12 = *(long **)(local_b0 + lVar11);
          lVar11 = *(long *)(*(long *)(local_a0 + lVar11) + 0x20);
          uVar14 = uVar31;
          do {
            lVar13 = uVar10 * 4;
            *(ulong *)(lVar35 + uVar14 * 8) = *plVar9 + lVar13 * (ulong)*(ushort *)(plVar9 + 2);
            *(ulong *)(lVar30 + uVar14 * 8) = *(long *)(lVar11 + 0x30) + uVar10 * 0x10;
            if (uVar6 < 4) {
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              uVar29 = uVar21 & 0xffffffff;
              uVar17 = uVar14;
              do {
                iVar28 = (int)uVar29;
                uVar31 = uVar31 + 4;
                *(ulong *)(lVar33 + uVar17 * 8) = lVar32 + uVar29 * 0x14;
                iVar16 = (int)uVar17;
                *(ulong *)(lVar33 + (ulong)(uVar4 + iVar16) * 8) =
                     lVar32 + (ulong)(uVar3 + iVar28) * 0x14;
                *(ulong *)(lVar33 + (ulong)(uVar4 * 2 + iVar16) * 8) =
                     lVar32 + (ulong)(uVar3 * 2 + iVar28) * 0x14;
                uVar29 = (ulong)(iVar28 + uVar3 * 4);
                uVar17 = (ulong)(iVar16 + uVar4 * 4);
                *(ulong *)(lVar33 + (ulong)(uVar4 * 3 + iVar16) * 8) =
                     lVar32 + (ulong)(uVar3 * 3 + iVar28) * 0x14;
              } while (uVar22 != uVar31);
            }
            if (uVar18 != 0) {
              uVar15 = (int)uVar14 + uVar4 * (int)uVar31;
              uVar20 = (int)uVar21 + uVar3 * (int)uVar31;
              uVar31 = uVar18;
              do {
                uVar17 = (ulong)uVar20;
                uVar20 = uVar20 + uVar3;
                uVar31 = uVar31 - 1;
                *(ulong *)(lVar33 + (ulong)uVar15 * 8) = lVar32 + uVar17 * 0x14;
                uVar15 = uVar15 + uVar4;
              } while (uVar31 != 0);
            }
            lVar30 = local_90;
            uVar10 = uVar10 + 1;
            uVar31 = (ulong)((int)uVar14 + 1);
            *(ulong *)(lVar34 + uVar14 * 8) = *plVar12 + lVar13 * (ulong)*(ushort *)(plVar12 + 2);
            uVar14 = uVar31;
          } while (uVar10 != bVar5);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar3);
      goto LAB__text__00457680;
    }
  }
  do {
    uVar18 = (ulong)*(ushort *)(lVar19 + uVar21 * 2);
    plVar9 = *(long **)(local_a8 + uVar18 * 8);
    bVar5 = *(byte *)(plVar9 + 1);
    if (bVar5 != 0) {
      lVar11 = uVar18 * 8;
      lVar13 = *(long *)(*(long *)(param_2 + lVar11) + 0x20);
      plVar12 = *(long **)(local_b0 + lVar11);
      if (bVar5 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        lVar11 = 0x10;
        lVar26 = 4;
        do {
          uVar4 = (int)uVar31 + (int)uVar18;
          uVar18 = uVar18 + 2;
          lVar7 = (ulong)uVar4 * 8;
          lVar8 = (ulong)(uVar4 + 1) * 8;
          *(ulong *)(lVar35 + lVar7) = *plVar9 + (lVar26 + -4) * (ulong)*(ushort *)(plVar9 + 2);
          *(long *)(lVar30 + lVar7) = *(long *)(lVar13 + 0x30) + lVar11 + -0x10;
          *(ulong *)(lVar34 + lVar7) = *plVar12 + (lVar26 + -4) * (ulong)*(ushort *)(plVar12 + 2);
          *(ulong *)(lVar35 + lVar8) = *plVar9 + lVar26 * (ulong)*(ushort *)(plVar9 + 2);
          lVar7 = *(long *)(lVar13 + 0x30) + lVar11;
          lVar11 = lVar11 + 0x20;
          *(long *)(lVar30 + lVar8) = lVar7;
          lVar7 = lVar26 * (ulong)*(ushort *)(plVar12 + 2);
          lVar26 = lVar26 + 8;
          *(long *)(lVar34 + lVar8) = *plVar12 + lVar7;
        } while (((ulong)bVar5 & 0xfe) != uVar18);
        uVar31 = (ulong)(uint)((int)uVar31 + (int)uVar18);
        param_2 = local_a0;
        if ((bVar5 & 1) == 0) goto LAB__text__00457554;
      }
      lVar11 = uVar31 * 8;
      uVar31 = (ulong)((int)uVar31 + 1);
      *(ulong *)(lVar35 + lVar11) = *plVar9 + uVar18 * 4 * (ulong)*(ushort *)(plVar9 + 2);
      *(ulong *)(lVar30 + lVar11) = *(long *)(lVar13 + 0x30) + uVar18 * 0x10;
      *(ulong *)(lVar34 + lVar11) = *plVar12 + uVar18 * 4 * (ulong)*(ushort *)(plVar12 + 2);
    }
LAB__text__00457554:
    uVar21 = uVar21 + 1;
  } while (uVar21 != uVar3);
LAB__text__00457680:
  lVar19 = alStack_e0[2];
  thunk_FUN__text__00422210(lVar35,lVar34,lVar33,lVar30,local_b8,alStack_e0[2] & 0xffffffff);
  lVar32 = lVar32 + (ulong)(uint)(*(int *)((long)param_1 + 0xc) * ((int)lVar19 + -1)) * 0x14;
  if ((int)param_1[1] == 0) {
    uVar18 = 0;
    if (*(int *)((long)param_1 + 0xc) == 0) {
      return;
    }
  }
  else {
    uVar21 = 0;
    do {
      puVar25 = (undefined8 *)(lVar32 + uVar21 * 0x14);
      uVar1 = *puVar25;
      uVar2 = puVar25[1];
      pbVar24 = *(byte **)(local_a0 + (ulong)*(ushort *)(*param_1 + uVar21 * 2) * 8);
      puVar23 = *(undefined8 **)(pbVar24 + 0x20);
      bVar5 = *pbVar24;
      *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar25 + 2);
      *puVar23 = uVar1;
      puVar23[1] = uVar2;
      if (bVar5 != 0) {
        if (bVar5 < 4) {
          lVar35 = 0;
        }
        else {
          lVar34 = 0;
          lVar35 = 0;
          do {
            lVar30 = puVar23[6];
            lVar35 = lVar35 + 4;
            uVar1 = *(undefined8 *)(puVar23[5] + lVar34);
            ((undefined8 *)(lVar30 + lVar34))[1] = uVar1;
            *(undefined8 *)(lVar30 + lVar34) = uVar1;
            lVar30 = puVar23[6];
            uVar1 = *(undefined8 *)(puVar23[5] + lVar34 + 0x10);
            *(undefined8 *)(lVar30 + lVar34 + 0x18) = uVar1;
            *(undefined8 *)(lVar30 + lVar34 + 0x10) = uVar1;
            lVar30 = puVar23[6];
            uVar1 = *(undefined8 *)(puVar23[5] + lVar34 + 0x20);
            *(undefined8 *)(lVar30 + lVar34 + 0x28) = uVar1;
            *(undefined8 *)(lVar30 + lVar34 + 0x20) = uVar1;
            uVar1 = *(undefined8 *)(puVar23[5] + lVar34 + 0x30);
            lVar30 = puVar23[6] + lVar34;
            lVar34 = lVar34 + 0x40;
            *(undefined8 *)(lVar30 + 0x38) = uVar1;
            *(undefined8 *)(lVar30 + 0x30) = uVar1;
          } while (((ulong)bVar5 & 0xfc) * 0x10 != lVar34);
        }
        uVar18 = (ulong)bVar5 & 3;
        if ((bVar5 & 3) != 0) {
          lVar35 = lVar35 << 4;
          do {
            lVar34 = puVar23[6];
            uVar18 = uVar18 - 1;
            uVar1 = *(undefined8 *)(puVar23[5] + lVar35);
            ((undefined8 *)(lVar34 + lVar35))[1] = uVar1;
            *(undefined8 *)(lVar34 + lVar35) = uVar1;
            lVar35 = lVar35 + 0x10;
          } while (uVar18 != 0);
        }
      }
      uVar18 = (ulong)*local_c8;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar18);
    if (*(uint *)((long)param_1 + 0xc) <= *local_c8) {
      return;
    }
  }
  do {
    puVar23 = (undefined8 *)(lVar32 + uVar18 * 0x14);
    uVar1 = *puVar23;
    uVar2 = puVar23[1];
    pbVar24 = *(byte **)(local_a0 + (ulong)*(ushort *)(*param_1 + uVar18 * 2) * 8);
    lVar34 = *(long *)(pbVar24 + 0x20);
    bVar5 = *pbVar24;
    *(undefined4 *)(lVar34 + 0x24) = *(undefined4 *)(puVar23 + 2);
    *(undefined8 *)(lVar34 + 0x1c) = uVar2;
    *(undefined8 *)(lVar34 + 0x14) = uVar1;
    if (bVar5 != 0) {
      if (bVar5 < 4) {
        lVar30 = 0;
      }
      else {
        lVar35 = 0;
        lVar30 = 0;
        do {
          lVar30 = lVar30 + 4;
          uVar1 = *(undefined8 *)(*(long *)(lVar34 + 0x30) + lVar35 + 8);
          puVar23 = (undefined8 *)(*(long *)(lVar34 + 0x28) + lVar35);
          puVar23[1] = uVar1;
          *puVar23 = uVar1;
          lVar33 = *(long *)(lVar34 + 0x28) + lVar35;
          uVar1 = *(undefined8 *)(*(long *)(lVar34 + 0x30) + lVar35 + 0x18);
          *(undefined8 *)(lVar33 + 0x18) = uVar1;
          *(undefined8 *)(lVar33 + 0x10) = uVar1;
          lVar33 = *(long *)(lVar34 + 0x28) + lVar35;
          uVar1 = *(undefined8 *)(*(long *)(lVar34 + 0x30) + lVar35 + 0x28);
          *(undefined8 *)(lVar33 + 0x28) = uVar1;
          *(undefined8 *)(lVar33 + 0x20) = uVar1;
          lVar33 = *(long *)(lVar34 + 0x30) + lVar35;
          lVar19 = *(long *)(lVar34 + 0x28) + lVar35;
          lVar35 = lVar35 + 0x40;
          uVar1 = *(undefined8 *)(lVar33 + 0x38);
          *(undefined8 *)(lVar19 + 0x38) = uVar1;
          *(undefined8 *)(lVar19 + 0x30) = uVar1;
        } while (((ulong)bVar5 & 0xfc) * 0x10 != lVar35);
      }
      uVar21 = (ulong)bVar5 & 3;
      if ((bVar5 & 3) != 0) {
        lVar30 = lVar30 << 4;
        do {
          uVar21 = uVar21 - 1;
          uVar1 = *(undefined8 *)(*(long *)(lVar34 + 0x30) + lVar30 + 8);
          puVar23 = (undefined8 *)(*(long *)(lVar34 + 0x28) + lVar30);
          puVar23[1] = uVar1;
          *puVar23 = uVar1;
          lVar30 = lVar30 + 0x10;
        } while (uVar21 != 0);
      }
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < *(uint *)((long)param_1 + 0xc));
  return;
}


