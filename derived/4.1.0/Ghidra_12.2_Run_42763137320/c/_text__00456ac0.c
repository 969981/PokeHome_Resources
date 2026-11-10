/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00456ac0; name: FUN_.text__00456ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00456ac0(long param_1,ulong param_2,long param_3,uint param_4,ulong param_5,
                        ulong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  uint *puVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  undefined4 auStack_e0 [4];
  ulong local_d0 [3];
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  long local_a8;
  long lStack_a0;
  uint local_94;
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  
  uVar30 = (uint)param_2;
  if (uVar30 == 0) {
    return;
  }
  uVar7 = *_DAT_008a4b90;
  uVar18 = (ulong)uVar7;
  local_b8 = (uint *)((long)local_d0 - ((ulong)((uint)uVar7 * 4 + 0xf) & 0x7fff0));
  lVar20 = (param_2 >> 0x20) * 8;
  uVar22 = lVar20 + 0xfU & 0xffffffff0;
  lVar36 = (long)local_b8 - uVar22;
  lVar14 = lVar36 - uVar22;
  lVar39 = lVar14 - uVar22;
  uVar21 = (param_2 & 0xffffffff) * uVar18 * 0x14 + 0xf & 0x3ffffffffffff0;
  lVar32 = lVar39 - uVar21;
  lVar31 = lVar32 - uVar21;
  uVar21 = lVar20 * uVar18 + 0xf & 0xffffffffffff0;
  lVar38 = lVar31 - uVar21;
  lVar34 = lVar38 - uVar21;
  lVar20 = lVar34 - uVar22;
  if (uVar7 == 0) {
    uVar18 = (ulong)-uVar30;
  }
  else {
    uVar22 = (ulong)param_4;
    uVar21 = 0;
    uVar35 = 0;
    local_b0 = *_DAT_008a4b88;
    puVar28 = local_b8;
    local_d0[0] = uVar18;
    local_d0[1] = param_5;
    local_d0[2] = param_6;
    local_ac = param_4;
    local_a8 = param_1;
    lStack_a0 = param_3;
    local_88 = lVar39;
    local_80 = lVar14;
    local_78 = lVar36;
    do {
      local_94 = local_b0;
      if (param_4 - uVar35 <= local_b0) {
        local_94 = param_4 - uVar35;
      }
      uVar35 = local_94 + uVar35;
      lVar14 = ((uVar21 & 0xffffffff) + (uVar21 & 0xffffffff) * 4) * 4;
      local_90 = uVar18;
      FUN__text__00452d40((float)uVar35 * (1.0 / (float)uVar22),param_1,param_2,param_3,
                          lVar32 + lVar14,lVar31 + lVar14);
      param_3 = lStack_a0;
      param_1 = local_a8;
      param_4 = local_ac;
      uVar21 = uVar21 + param_2;
      uVar18 = local_90 - 1;
      *puVar28 = local_94;
      uVar10 = local_d0[2];
      uVar9 = local_d0[1];
      uVar27 = local_d0[0];
      puVar28 = puVar28 + 1;
    } while (uVar18 != 0);
    iVar17 = (int)local_d0[0];
    uVar18 = (ulong)((iVar17 + -1) * uVar30);
    lVar14 = local_80;
    lVar36 = local_78;
    lVar39 = local_88;
    if (iVar17 != 0) {
      uVar22 = 0;
      uVar35 = uVar30;
      if (uVar30 < 2) {
        uVar35 = 1;
      }
      uVar23 = local_d0[0] & 0xfffe;
      iVar33 = (int)(param_2 >> 0x20);
      uVar21 = 0;
      do {
        uVar11 = (ulong)*(ushort *)(param_1 + uVar21 * 2);
        lVar25 = uVar11 * 8;
        puVar24 = *(undefined8 **)(*(long *)(param_3 + lVar25) + 0x20);
        plVar26 = *(long **)(uVar9 + lVar25);
        bVar6 = *(byte *)(plVar26 + 1);
        if (bVar6 != 0) {
          plVar12 = *(long **)(uVar10 + uVar11 * 8);
          uVar11 = 0;
          uVar19 = uVar22;
          do {
            lVar13 = uVar11 * 4;
            lVar25 = uVar19 * 8;
            *(ulong *)(lVar36 + lVar25) = *plVar26 + lVar13 * (ulong)*(ushort *)(plVar26 + 2);
            *(ulong *)(lVar14 + lVar25) = puVar24[5] + uVar11 * 0x10;
            *(ulong *)(lVar39 + lVar25) = puVar24[6] + uVar11 * 0x10;
            if (iVar17 == 1) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              uVar16 = uVar19;
              uVar37 = uVar21;
              do {
                uVar22 = uVar22 + 2;
                lVar14 = ((uVar37 & 0xffffffff) + (uVar37 & 0xffffffff) * 4) * 4;
                *(long *)(lVar38 + uVar16 * 8) = lVar32 + lVar14;
                uVar8 = uVar30 + (int)uVar37;
                *(long *)(lVar34 + uVar16 * 8) = lVar31 + lVar14;
                iVar15 = (int)uVar16;
                uVar16 = (ulong)(uint)(iVar15 + iVar33 * 2);
                lVar14 = (ulong)(uint)(iVar33 + iVar15) * 8;
                uVar37 = uVar37 + param_2 * 2;
                *(ulong *)(lVar38 + lVar14) = lVar32 + (ulong)uVar8 * 0x14;
                *(ulong *)(lVar34 + lVar14) = lVar31 + (ulong)uVar8 * 0x14;
              } while (uVar23 != uVar22);
            }
            if ((uVar27 & 1) != 0) {
              uVar8 = (int)uVar21 + (int)uVar22 * uVar30;
              lVar14 = (ulong)(uint)((int)uVar19 + (int)uVar22 * iVar33) * 8;
              *(ulong *)(lVar38 + lVar14) = lVar32 + (ulong)uVar8 * 0x14;
              *(ulong *)(lVar34 + lVar14) = lVar31 + (ulong)uVar8 * 0x14;
            }
            uVar11 = uVar11 + 1;
            uVar22 = (ulong)((int)uVar19 + 1);
            *(ulong *)(lVar20 + uVar19 * 8) = *plVar12 + lVar13 * (ulong)*(ushort *)(plVar12 + 2);
            lVar14 = local_80;
            uVar19 = uVar22;
            lVar36 = local_78;
            lVar39 = local_88;
          } while (uVar11 != bVar6);
        }
        uVar11 = uVar21 + 1;
        puVar1 = (undefined8 *)(lVar32 + uVar18 * 0x14 + uVar21 * 0x14);
        puVar2 = (undefined8 *)(lVar31 + uVar18 * 0x14 + uVar21 * 0x14);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(puVar1 + 2);
        *puVar24 = uVar3;
        puVar24[1] = uVar4;
        uVar3 = *puVar2;
        uVar5 = *(undefined4 *)(puVar2 + 2);
        *(undefined8 *)((long)puVar24 + 0x1c) = puVar2[1];
        *(undefined4 *)((long)puVar24 + 0x24) = uVar5;
        *(undefined8 *)((long)puVar24 + 0x14) = uVar3;
        param_1 = local_a8;
        param_3 = lStack_a0;
        uVar21 = uVar11;
      } while (uVar11 != uVar35);
      goto LAB__text__00456f08;
    }
    param_5 = local_d0[1];
    param_6 = local_d0[2];
  }
  if (uVar30 < 2) {
    uVar30 = 1;
  }
  uVar22 = 0;
  uVar21 = 0;
  do {
    uVar27 = (ulong)*(ushort *)(param_1 + uVar21 * 2);
    lVar25 = uVar27 * 8;
    puVar24 = *(undefined8 **)(*(long *)(param_3 + lVar25) + 0x20);
    plVar26 = *(long **)(param_5 + lVar25);
    bVar6 = *(byte *)(plVar26 + 1);
    if (bVar6 != 0) {
      plVar12 = *(long **)(param_6 + uVar27 * 8);
      uVar27 = 0;
      do {
        lVar13 = uVar27 * 4;
        lVar29 = uVar27 * 0x10;
        uVar27 = uVar27 + 1;
        lVar25 = uVar22 * 8;
        uVar22 = (ulong)((int)uVar22 + 1);
        *(ulong *)(lVar36 + lVar25) = *plVar26 + lVar13 * (ulong)*(ushort *)(plVar26 + 2);
        *(long *)(lVar14 + lVar25) = puVar24[5] + lVar29;
        *(long *)(lVar39 + lVar25) = puVar24[6] + lVar29;
        *(ulong *)(lVar20 + lVar25) = *plVar12 + lVar13 * (ulong)*(ushort *)(plVar12 + 2);
      } while (uVar27 != bVar6);
    }
    uVar27 = uVar21 + 1;
    puVar1 = (undefined8 *)(lVar32 + uVar18 * 0x14 + uVar21 * 0x14);
    puVar2 = (undefined8 *)(lVar31 + uVar18 * 0x14 + uVar21 * 0x14);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(puVar1 + 2);
    *puVar24 = uVar3;
    puVar24[1] = uVar4;
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    *(undefined4 *)((long)puVar24 + 0x24) = *(undefined4 *)(puVar2 + 2);
    *(undefined8 *)((long)puVar24 + 0x1c) = uVar4;
    *(undefined8 *)((long)puVar24 + 0x14) = uVar3;
    uVar21 = uVar27;
  } while (uVar27 != uVar30);
LAB__text__00456f08:
  *(int *)(lVar20 + -0x10) = (int)uVar22;
  FUN__text__0041f170(lVar36,lVar20,lVar38,lVar14,lVar34,lVar39,local_b8);
  return;
}


