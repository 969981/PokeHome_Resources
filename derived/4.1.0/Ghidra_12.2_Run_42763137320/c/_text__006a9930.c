/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a9930; name: FUN_.text__006a9930
 */


void FUN__text__006a9930(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  int iVar32;
  ulong uVar33;
  undefined8 uVar34;
  int iVar35;
  long *plVar36;
  byte *pbVar37;
  ulong uVar38;
  ulong uVar39;
  int iVar40;
  undefined8 *local_120;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_70;
  
  plVar36 = (long *)(param_1 + 0x18);
  *plVar36 = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  lVar24 = param_4;
  if (param_5 == 0) {
LAB__text__006a99f0:
    local_70 = *(undefined8 *)(param_6 + 0x30);
  }
  else {
    uVar18 = *(ushort *)(param_6 + 0x44);
    if (uVar18 == 0) {
      if ((*(ushort *)(param_6 + 0x40) == 0) || ((*(ushort *)(param_6 + 0x40) >> 2 & 1) != 0)) {
        local_70 = *(undefined8 *)(param_6 + 0x38);
        *(long *)(param_1 + 0x28) = param_5;
        cVar15 = *(char *)(param_6 + 0xda);
        lVar24 = param_5;
        param_4 = param_5;
        goto joined_r0x006a9a08;
      }
      goto LAB__text__006a99f0;
    }
    local_70 = *(undefined8 *)(param_6 + 0x30);
    if ((uVar18 & 1) != 0) {
      lVar24 = param_5;
    }
    if (((uVar18 >> 1 & 1) != 0) &&
       (((*(uint *)(param_5 + 0x1c) ^ *(uint *)(param_4 + 0x1c)) & 3) == 0)) {
      local_70 = *(undefined8 *)(param_6 + 0x38);
      *(long *)(param_1 + 0x28) = param_4;
      cVar15 = *(char *)(param_6 + 0xda);
      goto joined_r0x006a9a08;
    }
  }
  *(long *)(param_1 + 0x28) = param_4;
  cVar15 = *(char *)(param_6 + 0xda);
  param_5 = param_4;
joined_r0x006a9a08:
  if (cVar15 != '\0') {
    *(undefined1 *)(param_1 + 0x49) = 0x40;
  }
  pbVar37 = (byte *)(lVar24 + 0x20);
  if ((*pbVar37 & 3) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar37 + *(byte *)(lVar24 + 0x22));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pbVar37 + *(byte *)(lVar24 + 0x23));
    bVar16 = *(byte *)(lVar24 + 0x21);
  }
  else {
    puVar22 = (undefined8 *)FUN__text__006a0f04(0x20);
    *(undefined8 **)(param_1 + 8) = puVar22;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x28;
    uVar26 = *(undefined8 *)(pbVar37 + *(byte *)(lVar24 + 0x22) + 8);
    *puVar22 = *(undefined8 *)(pbVar37 + *(byte *)(lVar24 + 0x22));
    puVar22[1] = uVar26;
    lVar23 = *(long *)(param_1 + 8);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x10;
    uVar26 = *(undefined8 *)(pbVar37 + *(byte *)(lVar24 + 0x23) + 8);
    *(undefined8 *)(lVar23 + 0x10) = *(undefined8 *)(pbVar37 + *(byte *)(lVar24 + 0x23));
    *(undefined8 *)(lVar23 + 0x18) = uVar26;
    bVar16 = *(byte *)(lVar24 + 0x21);
  }
  lVar24 = (ulong)bVar16 + 2;
  if (bVar16 != 0) {
    bVar17 = *pbVar37;
    if (bVar16 == 1) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      do {
        uVar19 = uVar27 & 0x1f;
        uVar28 = uVar27 + 1;
        uVar27 = uVar27 + 2;
        lVar23 = 4;
        if ((bVar17 >> (ulong)uVar19 & 1) != 0) {
          lVar23 = 0x10;
        }
        lVar14 = 4;
        if ((bVar17 >> (ulong)(uVar28 & 0x1f) & 1) != 0) {
          lVar14 = 0x10;
        }
        lVar24 = lVar14 + lVar23 + lVar24;
      } while (uVar27 != (bVar16 & 0xfe));
    }
    if ((bVar16 & 1) != 0) {
      lVar23 = 4;
      if ((bVar17 >> (ulong)(uVar27 & 0x1f) & 1) != 0) {
        lVar23 = 0x10;
      }
      lVar24 = lVar23 + lVar24;
    }
  }
  uVar27 = *(uint *)(param_4 + 0x1c);
  uVar39 = (ulong)uVar27;
  uVar28 = uVar27 >> 2 & 3;
  uVar19 = uVar27 >> 4 & 3;
  uVar33 = uVar39 & 0x400;
  uVar29 = lVar24 + 0x20U + ((ulong)*(uint *)(param_5 + 0x1c) & 3) * 4;
  uVar4 = uVar29 + (uVar27 << 2 & (int)(uVar27 << 10) >> 0x1f & 0xc);
  uVar20 = uVar27 >> 6 & 7;
  uVar5 = uVar4 + (uVar28 << 2 | (uVar27 >> 2 & 3) << 4);
  uVar6 = uVar5 + (uVar19 << 4);
  lVar23 = 0xc;
  if ((uVar27 & 0x4000) == 0) {
    lVar23 = 0;
  }
  uVar1 = uVar6 + (ulong)uVar20 * 4;
  uVar7 = uVar1 + ((uVar39 & 0x200) >> 6);
  uVar8 = uVar7 + (uVar33 >> 8);
  uVar9 = uVar8 + ((uVar39 & 0x1000) >> 10);
  uVar38 = uVar9 + lVar23;
  if ((uVar27 >> 0x13 & 1) == 0) {
    local_120 = (undefined8 *)0x0;
    local_d0 = 0;
    local_c8 = (undefined8 *)0x0;
  }
  else {
    local_c8 = (undefined8 *)(param_4 + (uVar38 & 0xffffffff));
    uVar38 = uVar38 + 0x1c;
    local_120 = (undefined8 *)(param_4 + (uVar38 & 0xffffffff));
    local_d0 = (ulong)uVar20 << 4;
  }
  iVar35 = (int)(uVar39 & 0x200);
  iVar40 = (int)(uVar39 & 0x20000);
  lVar23 = 0x74;
  if ((uVar27 & 0x100000) == 0) {
    lVar23 = 0;
  }
  uVar13 = 6;
  if (uVar20 != 7) {
    uVar13 = uVar20;
  }
  uVar31 = (undefined4)(uVar33 >> 10);
  iVar32 = (int)(uVar39 & 0x1000);
  if (iVar32 != 0) {
    uVar31 = 2;
  }
  uVar20 = uVar27 >> 0xf & 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfb | (byte)(uVar27 >> 0x10) & 4;
  uVar21 = uVar27 >> 0x18 & 3;
  FUN__text__006aa8dc(param_1,uVar27 & 3,uVar28,uVar19,uVar13,iVar35 != 0,uVar31,uVar27 >> 0xe & 1,
                      uVar20,iVar40 != 0,(byte)(uVar27 >> 0x13) & 1,
                      (char)((uVar27 & 0x100000) >> 0x14),uVar27 >> 0x16 & 3,uVar21);
  *(byte *)(param_1 + 0x49) =
       (byte)(*(uint *)(param_4 + 0x1c) >> 10) & 2 | *(byte *)(param_1 + 0x49) & 0xfd;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar25 = *(uint *)(param_1 + 0x10);
    uVar10 = local_d0 + uVar38 + (ulong)(uVar20 << 2 | (uVar27 >> 0xf & 3) << 4);
    uVar39 = uVar10 + ((uVar39 & 0x20000) >> 0xe);
    uVar11 = uVar39 + lVar23;
    if ((uVar25 & 3) != 0) {
      FUN__text__006bc130(*(undefined8 *)(param_1 + 0x18));
      uVar25 = *(uint *)(param_1 + 0x10);
      if ((uVar25 >> 1 & 1) != 0) {
        FUN__text__006bc130(*(long *)(param_1 + 0x18) + 0x10);
        uVar25 = *(uint *)(param_1 + 0x10);
        if (((uVar25 ^ 0xffffffff) & 3) == 0) {
          FUN__text__006bc130(*(long *)(param_1 + 0x18) + 0x20);
          uVar25 = *(uint *)(param_1 + 0x10);
        }
      }
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffc | uVar27 & 3;
    if ((uVar27 & 3) != 0) {
      FUN__text__006aab80(param_1,param_3,local_70,param_6,param_5,
                          param_5 + (lVar24 + 0x20U & 0xffffffff),param_5 + (uVar29 & 0xffffffff),
                          param_4 + (uVar11 & 0xffffffff));
      uVar25 = *(uint *)(param_1 + 0x10);
    }
    puVar22 = (undefined8 *)(*plVar36 + (ulong)((uVar25 & 3) << 4));
    if ((uVar25 & 0xc) != 0) {
      *(undefined4 *)(puVar22 + 2) = 0;
      *puVar22 = 0;
      puVar22[1] = 0;
      uVar25 = *(uint *)(param_1 + 0x10);
      if ((uVar25 >> 3 & 1) != 0) {
        *(undefined4 *)((long)puVar22 + 0x24) = 0;
        *(undefined8 *)((long)puVar22 + 0x1c) = 0;
        *(undefined8 *)((long)puVar22 + 0x14) = 0;
        uVar25 = *(uint *)(param_1 + 0x10);
        if (((uVar25 ^ 0xffffffff) & 0xc) == 0) {
          *(undefined4 *)(puVar22 + 7) = 0;
          puVar22[5] = 0;
          puVar22[6] = 0;
          uVar25 = *(uint *)(param_1 + 0x10);
        }
      }
    }
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xfffffff0 | *(uint *)(param_1 + 0x14) & 3 | uVar28 << 2;
    if (uVar28 != 0) {
      puVar2 = (undefined8 *)(param_4 + (uVar4 & 0xffffffff));
      *puVar22 = *puVar2;
      *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar2 + 1);
      *(undefined8 *)((long)puVar22 + 0xc) = *(undefined8 *)((long)puVar2 + 0xc);
      if (uVar28 != 1) {
        *(undefined8 *)((long)puVar22 + 0x14) = *(undefined8 *)((long)puVar2 + 0x14);
        *(undefined4 *)((long)puVar22 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x1c);
        puVar22[4] = puVar2[4];
        if (uVar28 != 2) {
          puVar22[5] = puVar2[5];
          *(undefined4 *)(puVar22 + 6) = *(undefined4 *)(puVar2 + 6);
          *(undefined8 *)((long)puVar22 + 0x34) = *(undefined8 *)((long)puVar2 + 0x34);
        }
      }
      uVar25 = *(uint *)(param_1 + 0x10);
    }
    puVar22 = (undefined8 *)(*plVar36 + (ulong)((uVar25 & 3) * 0x10 + (uVar25 >> 2 & 3) * 0x14));
    if ((uVar25 & 0x30) != 0) {
      *(undefined4 *)puVar22 = 0;
      puVar22[1] = 0;
      if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
        *(undefined4 *)(puVar22 + 2) = 0;
        puVar22[3] = 0;
        if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x30) == 0) {
          *(undefined4 *)(puVar22 + 4) = 0;
          puVar22[5] = 0;
        }
      }
    }
    uVar28 = *(uint *)(param_1 + 0x14) & 0xffffffcf | uVar19 << 4;
    *(uint *)(param_1 + 0x14) = uVar28;
    if (uVar19 != 0) {
      puVar2 = (undefined8 *)(param_4 + (uVar5 & 0xffffffff));
      uVar26 = *puVar2;
      uVar30 = puVar2[1];
      *puVar22 = uVar26;
      puVar22[1] = uVar30;
      uVar28 = (uint)((ulong)uVar26 >> 8) & 0xff;
      if ((uVar28 == 6) || (uVar28 - 3 < 3)) {
        uVar28 = *(uint *)(param_1 + 0x10);
        uVar29 = 1;
        puVar22[1] = *(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                     (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8
                     ) + ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                     ((ulong)(uVar28 >> 2) & 3) * 0x14;
        uVar28 = *(uint *)(param_1 + 0x14);
      }
      else {
        uVar29 = 0;
        puVar22[1] = 0;
        uVar28 = *(uint *)(param_1 + 0x14);
      }
      if ((uVar28 >> 5 & 1) != 0) {
        uVar26 = puVar2[2];
        uVar30 = puVar2[3];
        puVar22[2] = uVar26;
        puVar22[3] = uVar30;
        uVar28 = (uint)((ulong)uVar26 >> 8) & 0xff;
        if ((uVar28 == 6) || (uVar28 - 3 < 3)) {
          uVar28 = *(uint *)(param_1 + 0x10);
          lVar24 = uVar29 * 0x14;
          uVar29 = (ulong)((int)uVar29 + 1);
          puVar22[3] = *(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                       (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) |
                       (ulong)(uVar28 >> 6) & 8) +
                       ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                       ((ulong)(uVar28 >> 2) & 3) * 0x14 + lVar24;
          uVar28 = *(uint *)(param_1 + 0x14);
        }
        else {
          puVar22[3] = 0;
          uVar28 = *(uint *)(param_1 + 0x14);
        }
        if (((uVar28 ^ 0xffffffff) & 0x30) == 0) {
          uVar26 = puVar2[4];
          uVar30 = puVar2[5];
          puVar22[4] = uVar26;
          puVar22[5] = uVar30;
          uVar28 = (uint)((ulong)uVar26 >> 8) & 0xff;
          if ((uVar28 == 6) || (uVar28 - 3 < 3)) {
            uVar28 = *(uint *)(param_1 + 0x10);
            lVar24 = *(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                     (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8
                     ) + ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                     ((ulong)(uVar28 >> 2) & 3) * 0x14 + uVar29 * 0x14;
          }
          else {
            lVar24 = 0;
          }
          puVar22[5] = lVar24;
          uVar28 = *(uint *)(param_1 + 0x14);
        }
      }
    }
    if (uVar13 != 0) {
      uVar19 = *(uint *)(param_1 + 0x10);
      puVar3 = (undefined4 *)(param_4 + (uVar6 & 0xffffffff));
      puVar12 = (undefined4 *)
                (*(long *)(param_1 + 0x18) + (ulong)(-(uVar19 >> 0xc & 1) & 0xc) +
                (((ulong)uVar19 & 3) * 0x10 + ((ulong)uVar19 & 0x30) | (ulong)(uVar19 >> 6) & 8) +
                ((ulong)(uVar19 >> 8) & 0xc) + ((ulong)(uVar19 >> 2) & 3) * 0x14);
      if ((uVar19 & 0x1c0) != 0) {
        *puVar12 = 0;
        if (((((*(ushort *)(param_1 + 0x10) & 0x180) != 0) &&
             (puVar12[1] = 0, 0x80 < (*(uint *)(param_1 + 0x10) & 0x1c0))) &&
            (puVar12[2] = 0, (*(byte *)(param_1 + 0x11) & 1) != 0)) &&
           (((puVar12[3] = 0, 0x100 < (*(uint *)(param_1 + 0x10) & 0x1c0) &&
             (puVar12[4] = 0, ((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x180) == 0)) &&
            (puVar12[5] = 0, ((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x1c0) == 0)))) {
          puVar12[6] = 0;
        }
        uVar28 = *(uint *)(param_1 + 0x14);
      }
      uVar19 = uVar13;
      if (uVar13 < 2) {
        uVar19 = 1;
      }
      *(uint *)(param_1 + 0x14) = uVar28 & 0xfffffe00 | uVar28 & 0x3f | uVar13 << 6;
      *puVar12 = *puVar3;
      if (((1 < uVar13) && (puVar12[1] = puVar3[1], uVar19 != 2)) &&
         ((puVar12[2] = puVar3[2], uVar19 != 3 &&
          (((puVar12[3] = puVar3[3], uVar19 != 4 && (puVar12[4] = puVar3[4], uVar19 != 5)) &&
           (puVar12[5] = puVar3[5], uVar19 != 6)))))) {
        puVar12[6] = puVar3[6];
      }
    }
    if (iVar35 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) +
       ((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) + ((ulong)(uVar28 >> 2) & 3) * 0x14) =
           *(undefined8 *)(param_4 + (uVar1 & 0xffffffff));
    }
    if ((int)uVar33 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)
       (*(long *)(param_1 + 0x18) +
       (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
       ((ulong)(uVar28 >> 2) & 3) * 0x14) = *(undefined4 *)(param_4 + (uVar7 & 0xffffffff));
    }
    if (iVar32 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)
       ((((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
        ((ulong)(uVar28 >> 2) & 3) * 0x14 + *(long *)(param_1 + 0x18) + 4) =
           *(undefined4 *)(param_4 + (uVar8 & 0xffffffff));
    }
    if ((uVar27 >> 0xe & 1) != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      puVar22 = (undefined8 *)(param_4 + (uVar9 & 0xffffffff));
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
               ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 2) & 3) * 0x14);
      uVar26 = *puVar22;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar22 + 1);
      *puVar2 = uVar26;
    }
    if (((uVar27 >> 0x13 & 1) != 0) && (local_c8 != (undefined8 *)0x0)) {
      uVar28 = *(uint *)(param_1 + 0x10);
      uVar34 = local_c8[2];
      uVar26 = *local_c8;
      uVar30 = local_c8[1];
      puVar22 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                ((ulong)(uVar28 >> 0xc) & 8) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14);
      *(undefined4 *)(puVar22 + 3) = *(undefined4 *)(local_c8 + 3);
      puVar22[1] = uVar30;
      puVar22[2] = uVar34;
      *puVar22 = uVar26;
      if (uVar13 != 0) {
        uVar28 = *(uint *)(param_1 + 0x10);
        puVar22 = (undefined8 *)
                  (*(long *)(param_1 + 0x18) +
                  (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                  ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                  ((ulong)(uVar28 >> 0xc) & 8) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                  (ulong)(-(uVar28 >> 0x10 & 1) & 0x1c) +
                  (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14);
        uVar26 = local_120[1];
        *puVar22 = *local_120;
        puVar22[1] = uVar26;
        if (uVar13 != 1) {
          uVar26 = local_120[3];
          puVar22[2] = local_120[2];
          puVar22[3] = uVar26;
          if (uVar13 != 2) {
            uVar26 = local_120[5];
            puVar22[4] = local_120[4];
            puVar22[5] = uVar26;
            if (uVar13 != 3) {
              uVar26 = local_120[7];
              puVar22[6] = local_120[6];
              puVar22[7] = uVar26;
              if (uVar13 != 4) {
                uVar26 = local_120[9];
                puVar22[8] = local_120[8];
                puVar22[9] = uVar26;
                if (uVar13 != 5) {
                  uVar26 = local_120[0xb];
                  puVar22[10] = local_120[10];
                  puVar22[0xb] = uVar26;
                  if (uVar13 != 6) {
                    uVar26 = local_120[0xd];
                    puVar22[0xc] = local_120[0xc];
                    puVar22[0xd] = uVar26;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar20 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      puVar22 = (undefined8 *)
                (*(long *)(param_1 + 0x18) + (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
                (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                ((ulong)(uVar28 >> 2) & 3) * 0x14);
      if ((uVar28 & 0x6000) != 0) {
        *(undefined4 *)(puVar22 + 2) = 0;
        *puVar22 = 0;
        puVar22[1] = 0;
        if ((*(byte *)(param_1 + 0x11) >> 6 & 1) != 0) {
          *(undefined4 *)((long)puVar22 + 0x24) = 0;
          *(undefined8 *)((long)puVar22 + 0x1c) = 0;
          *(undefined8 *)((long)puVar22 + 0x14) = 0;
          if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x6000) == 0) {
            *(undefined4 *)(puVar22 + 7) = 0;
            puVar22[5] = 0;
            puVar22[6] = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) & 0xffff8000 |
           *(uint *)(param_1 + 0x14) & 0x1fff | uVar20 << 0xd;
      if (uVar20 != 0) {
        puVar2 = (undefined8 *)(param_4 + (local_d0 + uVar38 & 0xffffffff));
        uVar26 = *puVar2;
        uVar30 = puVar2[1];
        *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar22 = uVar26;
        puVar22[1] = uVar30;
        if (uVar20 != 1) {
          uVar26 = *(undefined8 *)((long)puVar2 + 0x14);
          uVar30 = *(undefined8 *)((long)puVar2 + 0x1c);
          *(undefined4 *)((long)puVar22 + 0x24) = *(undefined4 *)((long)puVar2 + 0x24);
          *(undefined8 *)((long)puVar22 + 0x1c) = uVar30;
          *(undefined8 *)((long)puVar22 + 0x14) = uVar26;
          if (uVar20 != 2) {
            uVar26 = puVar2[5];
            uVar30 = puVar2[6];
            *(undefined4 *)(puVar22 + 7) = *(undefined4 *)(puVar2 + 7);
            puVar22[5] = uVar26;
            puVar22[6] = uVar30;
          }
        }
      }
    }
    if ((uVar27 & 0x3000000) != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      puVar22 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
                ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
                ((ulong)(uVar28 >> 0xc) & 8) + ((ulong)(uVar28 >> 0xd) & 0x60) +
                (ulong)(-(uVar28 >> 0xc & 1) & 0xc) + (ulong)(-(uVar28 >> 0x10 & 1) & 0x1c) +
                ((ulong)(uVar28 >> 0xc) & 0x10) * ((ulong)(uVar28 >> 6) & 7) +
                (ulong)((int)(uVar28 << 0xe) >> 0x1f & 0x74) +
                (ulong)((uVar28 & 0x300000) != 0) * 0x10 +
                (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14);
      if ((uVar28 & 0x300000) != 0) {
        puVar22[9] = 0;
        puVar22[10] = 0;
        *puVar22 = 0;
        puVar22[7] = 0;
        puVar22[8] = 0;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22[3] = 0;
        puVar22[4] = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        if ((*(byte *)(param_1 + 0x12) >> 5 & 1) != 0) {
          puVar22[0x14] = 0;
          puVar22[0x15] = 0;
          puVar22[0xb] = 0;
          puVar22[0x12] = 0;
          puVar22[0x13] = 0;
          puVar22[0x10] = 0;
          puVar22[0x11] = 0;
          puVar22[0xe] = 0;
          puVar22[0xf] = 0;
          puVar22[0xc] = 0;
          puVar22[0xd] = 0;
          if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x300000) == 0) {
            puVar22[0x1f] = 0;
            puVar22[0x20] = 0;
            puVar22[0x16] = 0;
            puVar22[0x1d] = 0;
            puVar22[0x1e] = 0;
            puVar22[0x1b] = 0;
            puVar22[0x1c] = 0;
            puVar22[0x19] = 0;
            puVar22[0x1a] = 0;
            puVar22[0x17] = 0;
            puVar22[0x18] = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) & 0xffc00000 |
           *(uint *)(param_1 + 0x14) & 0xfffff | uVar21 << 0x14;
      if (uVar21 != 0) {
        puVar2 = (undefined8 *)(param_4 + (ulong)((uVar27 >> 0x12 & 0x30) + (int)uVar11));
        uVar30 = puVar2[2];
        uVar26 = puVar2[1];
        *puVar22 = *puVar2;
        puVar22[1] = uVar26;
        puVar22[2] = uVar30;
        uVar26 = puVar2[3];
        uVar30 = puVar2[4];
        uVar34 = puVar2[6];
        puVar22[5] = puVar2[5];
        puVar22[6] = uVar34;
        puVar22[3] = uVar26;
        puVar22[4] = uVar30;
        uVar26 = puVar2[7];
        uVar30 = puVar2[8];
        uVar34 = puVar2[10];
        puVar22[9] = puVar2[9];
        puVar22[10] = uVar34;
        puVar22[7] = uVar26;
        puVar22[8] = uVar30;
        if (uVar21 != 1) {
          uVar26 = puVar2[0xb];
          uVar30 = puVar2[0xd];
          puVar22[0xc] = puVar2[0xc];
          puVar22[0xd] = uVar30;
          puVar22[0xb] = uVar26;
          uVar26 = puVar2[0xe];
          uVar30 = puVar2[0xf];
          uVar34 = puVar2[0x11];
          puVar22[0x10] = puVar2[0x10];
          puVar22[0x11] = uVar34;
          puVar22[0xe] = uVar26;
          puVar22[0xf] = uVar30;
          uVar26 = puVar2[0x12];
          uVar30 = puVar2[0x13];
          uVar34 = puVar2[0x15];
          puVar22[0x14] = puVar2[0x14];
          puVar22[0x15] = uVar34;
          puVar22[0x12] = uVar26;
          puVar22[0x13] = uVar30;
          if (uVar21 != 2) {
            uVar26 = puVar2[0x16];
            uVar30 = puVar2[0x18];
            puVar22[0x17] = puVar2[0x17];
            puVar22[0x18] = uVar30;
            puVar22[0x16] = uVar26;
            uVar26 = puVar2[0x19];
            uVar30 = puVar2[0x1a];
            uVar34 = puVar2[0x1c];
            puVar22[0x1b] = puVar2[0x1b];
            puVar22[0x1c] = uVar34;
            puVar22[0x19] = uVar26;
            puVar22[0x1a] = uVar30;
            uVar26 = puVar2[0x1d];
            uVar30 = puVar2[0x1e];
            uVar34 = puVar2[0x20];
            puVar22[0x1f] = puVar2[0x1f];
            puVar22[0x20] = uVar34;
            puVar22[0x1d] = uVar26;
            puVar22[0x1e] = uVar30;
          }
        }
      }
    }
    if (iVar40 != 0) {
      uVar28 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) +
       (((ulong)uVar28 & 3) * 0x10 + ((ulong)uVar28 & 0x30) | (ulong)(uVar28 >> 6) & 8) +
       ((ulong)(uVar28 >> 8) & 0xc) + ((ulong)(uVar28 >> 4) & 0x1c) +
       (ulong)(-(uVar28 >> 0xc & 1) & 0xc) +
       (((ulong)(uVar28 >> 0xd) & 3) + ((ulong)(uVar28 >> 2) & 3)) * 0x14) =
           *(undefined8 *)(param_4 + (uVar10 & 0xffffffff));
    }
    if ((uVar27 >> 0x14 & 1) != 0) {
      uVar27 = *(uint *)(param_1 + 0x10);
      puVar22 = (undefined8 *)(param_4 + (uVar39 & 0xffffffff));
      uVar30 = puVar22[4];
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (((ulong)uVar27 & 3) * 0x10 + ((ulong)uVar27 & 0x30) | (ulong)(uVar27 >> 6) & 8) +
               ((ulong)(uVar27 >> 8) & 0xc) + ((ulong)(uVar27 >> 4) & 0x1c) +
               ((ulong)(uVar27 >> 0xc) & 8) + (ulong)(-(uVar27 >> 0xc & 1) & 0xc) +
               (ulong)(-(uVar27 >> 0x10 & 1) & 0x1c) +
               ((ulong)(uVar27 >> 0xc) & 0x10) * ((ulong)(uVar27 >> 6) & 7) +
               (((ulong)(uVar27 >> 0xd) & 3) + ((ulong)(uVar27 >> 2) & 3)) * 0x14);
      uVar26 = puVar22[5];
      uVar34 = puVar22[6];
      puVar2[3] = puVar22[3];
      puVar2[4] = uVar30;
      puVar2[5] = uVar26;
      puVar2[6] = uVar34;
      uVar30 = puVar22[10];
      uVar26 = puVar22[7];
      uVar34 = puVar22[8];
      puVar2[9] = puVar22[9];
      puVar2[10] = uVar30;
      puVar2[7] = uVar26;
      puVar2[8] = uVar34;
      uVar26 = puVar22[0xc];
      uVar30 = puVar22[0xd];
      uVar34 = puVar22[0xb];
      *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(puVar22 + 0xe);
      puVar2[0xc] = uVar26;
      puVar2[0xd] = uVar30;
      puVar2[0xb] = uVar34;
      uVar26 = *puVar22;
      uVar30 = puVar22[2];
      puVar2[1] = puVar22[1];
      puVar2[2] = uVar30;
      *puVar2 = uVar26;
    }
  }
  FUN__text__006aae70(param_1,param_3,param_6,local_70);
  FUN__text__006ab094(param_1,param_2,param_3);
  FUN__text__006ab1fc(param_1,param_3);
  return;
}


