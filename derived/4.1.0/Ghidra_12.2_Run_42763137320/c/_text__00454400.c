/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00454400; name: FUN_.text__00454400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00454400(long param_1,ulong param_2,long param_3,uint param_4,long param_5,
                        long *param_6,long param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long *plVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  long lVar37;
  undefined4 uVar38;
  uint *puVar39;
  long lVar40;
  long lVar41;
  long alStack_140 [2];
  undefined4 auStack_130 [8];
  uint auStack_110 [2];
  long local_108 [2];
  uint *local_f8;
  ulong local_f0;
  uint local_e8;
  uint local_e4;
  long local_e0;
  long local_d8;
  long local_d0;
  uint local_c4;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  
  local_d8 = param_7;
  local_d0 = param_5;
  uVar31 = (uint)param_2;
  if (uVar31 == 0) {
    return;
  }
  local_e0 = param_9;
  uVar20 = (ulong)_DAT_008ab040;
  puVar39 = (uint *)((long)auStack_110 - ((ulong)((uint)_DAT_008ab040 * 4 + 0xf) & 0x7fff0));
  lVar24 = (param_2 >> 0x20) * 8;
  uVar21 = lVar24 + 0xfU & 0xffffffff0;
  lVar32 = (long)puVar39 - uVar21;
  lVar34 = lVar32 - uVar21;
  lVar27 = lVar34 - uVar21;
  uVar25 = (param_2 & 0xffffffff) * uVar20 * 0x14 + 0xf & 0x3ffffffffffff0;
  lVar35 = lVar27 - uVar25;
  lVar37 = lVar35 - uVar25;
  uVar25 = lVar24 * uVar20 + 0xf & 0xffffffffffff0;
  lVar40 = lVar37 - uVar25;
  lVar41 = lVar40 - uVar25;
  param_6 = (long *)*param_6;
  bVar5 = *(byte *)(param_6 + 1);
  lVar24 = lVar41 - ((ulong)((uint)bVar5 * 8 + 0xf) & 0xff0);
  if (bVar5 != 0) {
    if (bVar5 == 1) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      lVar22 = 4;
      do {
        plVar30 = (long *)(lVar24 + uVar25 * 8);
        uVar25 = uVar25 + 2;
        *plVar30 = *param_6 + (lVar22 + -4) * (ulong)*(ushort *)(param_6 + 2);
        lVar14 = lVar22 * (ulong)*(ushort *)(param_6 + 2);
        lVar22 = lVar22 + 8;
        plVar30[1] = *param_6 + lVar14;
      } while (((ulong)bVar5 & 0xfe) != uVar25);
    }
    if ((bVar5 & 1) != 0) {
      *(ulong *)(lVar24 + uVar25 * 8) = *param_6 + uVar25 * *(ushort *)(param_6 + 2) * 4;
    }
  }
  local_80 = lVar24 - uVar21;
  local_88 = (lVar24 - uVar21) - uVar21;
  lVar22 = local_88 - uVar21;
  local_90 = lVar22;
  local_b8 = param_1;
  local_b0 = param_3;
  local_108[1] = lVar24;
  local_f8 = puVar39;
  local_f0 = (ulong)bVar5;
  if (_DAT_008ab040 == 0) {
    uVar21 = (ulong)-uVar31;
    uVar20 = (ulong)(bVar5 + 3 & 0x1fc);
  }
  else {
    uVar25 = (ulong)param_4;
    uVar21 = 0;
    uVar33 = 0;
    local_e8 = *_DAT_008a4b88;
    local_108[0] = param_8;
    local_e4 = param_4;
    local_a8 = lVar34;
    lStack_a0 = lVar32;
    local_98 = uVar20;
    do {
      local_c4 = local_e8;
      if (param_4 - uVar33 <= local_e8) {
        local_c4 = param_4 - uVar33;
      }
      uVar33 = local_c4 + uVar33;
      lVar32 = ((uVar21 & 0xffffffff) + (uVar21 & 0xffffffff) * 4) * 4;
      local_c0 = uVar20;
      FUN__text__00452d40((float)uVar33 * (1.0 / (float)uVar25),param_1,param_2,local_b0,
                          lVar35 + lVar32,lVar37 + lVar32);
      param_3 = local_b0;
      param_1 = local_b8;
      param_4 = local_e4;
      uVar21 = uVar21 + param_2;
      uVar20 = local_c0 - 1;
      *puVar39 = local_c4;
      lVar24 = local_108[0];
      puVar39 = puVar39 + 1;
    } while (uVar20 != 0);
    uVar21 = (ulong)(((int)local_98 + -1) * uVar31);
    uVar20 = (ulong)((int)local_f0 + 3U & 0x1fc);
    lVar32 = lStack_a0;
    lVar34 = local_a8;
    if ((int)local_98 != 0) {
      uVar23 = 0;
      uVar33 = uVar31;
      if (uVar31 < 2) {
        uVar33 = 1;
      }
      uVar26 = local_98 & 0xfffe;
      iVar36 = (int)(param_2 >> 0x20);
      uVar29 = 0;
      uVar25 = local_98;
      do {
        lVar14 = (ulong)*(ushort *)(param_1 + uVar29 * 2) * 8;
        plVar30 = *(long **)(local_d0 + lVar14);
        puVar28 = *(undefined8 **)(*(long *)(param_3 + lVar14) + 0x20);
        bVar5 = *(byte *)(plVar30 + 1);
        if (bVar5 != 0) {
          uVar9 = 0;
          lVar13 = *(long *)(lVar24 + lVar14);
          uVar11 = *(undefined8 *)(local_d8 + lVar14);
          lVar14 = *(long *)(local_e0 + lVar14);
          do {
            lVar10 = uVar23 * 8;
            *(ulong *)(lVar32 + lVar10) = *plVar30 + uVar9 * *(ushort *)(plVar30 + 2) * 4;
            *(ulong *)(lVar34 + lVar10) = puVar28[5] + uVar9 * 0x10;
            *(ulong *)(lVar27 + lVar10) = puVar28[6] + uVar9 * 0x10;
            if ((int)uVar25 == 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              uVar25 = uVar29;
              uVar19 = uVar23;
              do {
                uVar16 = uVar16 + 2;
                lVar32 = ((uVar25 & 0xffffffff) + (uVar25 & 0xffffffff) * 4) * 4;
                *(long *)(lVar40 + uVar19 * 8) = lVar35 + lVar32;
                uVar6 = uVar31 + (int)uVar25;
                *(long *)(lVar41 + uVar19 * 8) = lVar37 + lVar32;
                iVar18 = (int)uVar19;
                uVar19 = (ulong)(uint)(iVar18 + iVar36 * 2);
                lVar32 = (ulong)(uint)(iVar36 + iVar18) * 8;
                uVar25 = uVar25 + param_2 * 2;
                *(ulong *)(lVar40 + lVar32) = lVar35 + (ulong)uVar6 * 0x14;
                *(ulong *)(lVar41 + lVar32) = lVar37 + (ulong)uVar6 * 0x14;
              } while (uVar26 != uVar16);
            }
            uVar25 = local_98;
            if ((local_98 & 1) != 0) {
              uVar6 = (int)uVar29 + (int)uVar16 * uVar31;
              lVar32 = (ulong)(uint)((int)uVar23 + (int)uVar16 * iVar36) * 8;
              *(ulong *)(lVar40 + lVar32) = lVar35 + (ulong)uVar6 * 0x14;
              *(ulong *)(lVar41 + lVar32) = lVar37 + (ulong)uVar6 * 0x14;
            }
            lVar32 = uVar23 * 8;
            uVar23 = (ulong)((int)uVar23 + 1);
            *(undefined8 *)(local_80 + lVar32) = uVar11;
            lVar34 = uVar9 * uVar20;
            uVar9 = uVar9 + 1;
            lVar34 = lVar34 * 4;
            *(long *)(local_88 + lVar32) = lVar13 + lVar34;
            *(long *)(local_90 + lVar32) = lVar14 + lVar34;
            lVar32 = lStack_a0;
            lVar34 = local_a8;
          } while (uVar9 != bVar5);
        }
        uVar38 = (undefined4)uVar25;
        uVar9 = uVar29 + 1;
        puVar1 = (undefined8 *)(lVar35 + uVar21 * 0x14 + uVar29 * 0x14);
        puVar2 = (undefined8 *)(lVar37 + uVar21 * 0x14 + uVar29 * 0x14);
        uVar11 = *puVar1;
        uVar3 = puVar1[1];
        *(undefined4 *)(puVar28 + 2) = *(undefined4 *)(puVar1 + 2);
        *puVar28 = uVar11;
        puVar28[1] = uVar3;
        uVar11 = puVar2[1];
        uVar4 = *(undefined4 *)(puVar2 + 2);
        *(undefined8 *)((long)puVar28 + 0x14) = *puVar2;
        *(undefined4 *)((long)puVar28 + 0x24) = uVar4;
        *(undefined8 *)((long)puVar28 + 0x1c) = uVar11;
        param_1 = local_b8;
        param_3 = local_b0;
        uVar29 = uVar9;
      } while (uVar9 != uVar33);
      goto LAB__text__00454984;
    }
    param_8 = local_108[0];
  }
  lVar13 = local_80;
  lVar14 = local_88;
  lVar24 = local_90;
  uVar38 = 0;
  if (uVar31 < 2) {
    uVar31 = 1;
  }
  uVar23 = 0;
  uVar25 = 0;
  do {
    lVar10 = (ulong)*(ushort *)(param_1 + uVar25 * 2) * 8;
    plVar30 = *(long **)(local_d0 + lVar10);
    puVar28 = *(undefined8 **)(*(long *)(param_3 + lVar10) + 0x20);
    bVar5 = *(byte *)(plVar30 + 1);
    if (bVar5 != 0) {
      uVar29 = 0;
      lVar8 = *(long *)(param_8 + lVar10);
      uVar11 = *(undefined8 *)(local_d8 + lVar10);
      lVar10 = *(long *)(local_e0 + lVar10);
      do {
        lVar15 = uVar29 * 0x10;
        lVar7 = uVar23 * 8;
        uVar23 = (ulong)((int)uVar23 + 1);
        *(ulong *)(lVar32 + lVar7) = *plVar30 + uVar29 * *(ushort *)(plVar30 + 2) * 4;
        *(long *)(lVar34 + lVar7) = puVar28[5] + lVar15;
        lVar12 = uVar29 * uVar20;
        uVar29 = uVar29 + 1;
        lVar17 = puVar28[6];
        *(undefined8 *)(lVar13 + lVar7) = uVar11;
        lVar12 = lVar12 * 4;
        *(long *)(lVar24 + lVar7) = lVar10 + lVar12;
        *(long *)(lVar14 + lVar7) = lVar8 + lVar12;
        *(long *)(lVar27 + lVar7) = lVar17 + lVar15;
      } while (uVar29 != bVar5);
    }
    uVar29 = uVar25 + 1;
    puVar1 = (undefined8 *)(lVar35 + uVar21 * 0x14 + uVar25 * 0x14);
    puVar2 = (undefined8 *)(lVar37 + uVar21 * 0x14 + uVar25 * 0x14);
    uVar11 = *puVar1;
    uVar3 = puVar1[1];
    *(undefined4 *)(puVar28 + 2) = *(undefined4 *)(puVar1 + 2);
    *puVar28 = uVar11;
    puVar28[1] = uVar3;
    uVar11 = *puVar2;
    uVar3 = puVar2[1];
    *(undefined4 *)((long)puVar28 + 0x24) = *(undefined4 *)(puVar2 + 2);
    *(undefined8 *)((long)puVar28 + 0x1c) = uVar3;
    *(undefined8 *)((long)puVar28 + 0x14) = uVar11;
    param_1 = local_b8;
    param_3 = local_b0;
    uVar25 = uVar29;
  } while (uVar29 != uVar31);
LAB__text__00454984:
  uVar20 = local_f0;
  lVar24 = local_108[1];
  *(int *)(lVar22 + -0x18) = (int)uVar23;
  *(undefined4 *)(lVar22 + -0x20) = uVar38;
  lVar37 = local_80;
  lVar35 = local_88;
  *(int *)(lVar22 + -0x10) = (int)uVar20;
  *(uint **)(lVar22 + -0x28) = local_f8;
  *(long *)(lVar22 + -0x30) = local_90;
  FUN__text__0041f180(lVar32,lVar40,lVar34,lVar41,lVar27,lVar24,lVar37,lVar35);
  return;
}


