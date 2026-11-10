/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00455ab0; name: FUN_.text__00455ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00455ab0(long param_1,uint param_2,long param_3,uint param_4,long param_5,
                        long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint *puVar4;
  void *__src;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  void *__dest;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float *local_1b0;
  float *local_1a8 [3];
  ulong local_190;
  long local_188;
  long local_180;
  ulong local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  ulong local_160;
  long local_158;
  ulong local_150;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 *local_138;
  undefined8 *local_130;
  long local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  uint local_f0;
  uint local_ec;
  ulong local_e8;
  ulong local_e0;
  uint local_d4;
  undefined8 *local_d0;
  void *local_c8;
  void *pvStack_c0;
  uint local_b4;
  undefined4 *local_b0 [2];
  
  puVar4 = _DAT_008a4b88;
  local_100 = param_6;
  local_f8 = param_5;
  local_180 = param_3;
  local_188 = param_1;
  if (param_2 != 0) {
    uVar17 = (ulong)param_4;
    uVar9 = uVar17 * 4 + 0xf & 0x7fffffff0;
    lVar7 = -uVar9;
    lVar19 = (long)local_1a8 + lVar7 + -8;
    local_128 = lVar19;
    if (param_4 != 0) {
      uVar10 = uVar17 & 3;
      if (param_4 < 4) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        puVar13 = (undefined8 *)((long)local_1a8 + lVar7);
        do {
          lVar11 = lVar11 + -4;
          puVar13[-1] = 0x3f8000003f800000;
          *puVar13 = 0x3f8000003f800000;
          puVar13 = puVar13 + 2;
        } while (-lVar11 != (uVar17 & 0xfffffffc));
        lVar11 = -lVar11;
      }
      if ((param_4 & 3) != 0) {
        puVar12 = (undefined4 *)(lVar19 + lVar11 * 4);
        do {
          uVar10 = uVar10 - 1;
          *puVar12 = 0x3f800000;
          puVar12 = puVar12 + 1;
        } while (uVar10 != 0);
      }
    }
    __dest = (void *)(lVar19 - uVar9);
    uVar3 = *_DAT_008a4b90;
    uVar9 = (ulong)((uint)uVar3 * 0x14 + 0xf) & 0x3ffff0;
    local_130 = (undefined8 *)((long)__dest - uVar9);
    local_138 = (undefined8 *)((long)local_130 - uVar9);
    local_e0 = uVar17 * 4 & 0xfffffffc;
    fVar27 = -1.0 / (float)param_4;
    local_110 = (ulong)(param_4 - 1);
    local_108 = (ulong)(param_4 - 2);
    local_178 = (ulong)uVar3;
    uVar15 = uVar3 - 1;
    local_150 = 0;
    local_1a8[1] = (float *)((long)local_138 + (ulong)uVar15 * 0x14);
    if (param_2 < 2) {
      param_2 = 1;
    }
    local_190 = (ulong)param_2;
    local_1a8[0] = (float *)(local_130 + 1);
    local_1a8[2] = (float *)((long)local_130 + (ulong)uVar15 * 0x14);
    local_1b0 = (float *)(local_138 + 1);
    fVar29 = 1.0 / (float)param_4;
    do {
      puVar13 = local_130;
      local_160 = (ulong)*(ushort *)(local_188 + local_150 * 2);
      lVar7 = local_160 * 8;
      lVar19 = *(long *)(local_180 + lVar7);
      puVar14 = *(undefined8 **)(lVar19 + 0x20);
      local_f0 = (uint)*(byte *)(lVar19 + 0x19);
      local_ec = (uint)*(byte *)(lVar19 + 0xd);
      local_144 = *(float *)(lVar19 + 4);
      local_140 = *(float *)(lVar19 + 8);
      fVar28 = *(float *)(lVar19 + 0x14);
      local_13c = *(float *)(lVar19 + 0x10);
      local_e8 = (ulong)*(byte *)(*(long *)(local_f8 + lVar7) + 8);
      if ((*(byte *)(lVar19 + 0xd) >> 2 & 1) == 0) {
        if (*(float *)(lVar19 + 8) == *(float *)(lVar19 + 4)) {
          uVar1 = *puVar14;
          uVar2 = puVar14[1];
          *(undefined4 *)(local_130 + 2) = *(undefined4 *)(puVar14 + 2);
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
        }
        else if ((int)local_178 != 0) {
          uVar15 = 0;
          uVar6 = *puVar4;
          fVar21 = (float)NEON_ucvtf(*_DAT_008a4b68);
          uVar9 = local_178;
          pfVar20 = local_1a8[0];
          do {
            uVar5 = uVar6;
            if (param_4 - uVar15 <= uVar6) {
              uVar5 = param_4 - uVar15;
            }
            uVar15 = uVar5 + uVar15;
            fVar22 = *(float *)(lVar19 + 4) +
                     (float)uVar15 * (*(float *)(lVar19 + 8) - *(float *)(lVar19 + 4)) * fVar29;
            uVar5 = (uint)(fVar22 * -1042939.94 + 1.1696472e+09);
            fVar23 = (float)(uVar5 & 0x7fffff | 0x3f800000);
            fVar23 = (float)(uVar5 & 0xff800000) * 16.797443 *
                     (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar22 < 30.0) {
              fVar23 = fVar22 * -433.33334 + 20000.0;
            }
            fVar23 = (float)NEON_fminnm(fVar21 * 0.45,fVar23);
            fVar23 = tanf(fVar23 * (1.0 / fVar21) * 3.1415927);
            fVar23 = 1.0 / fVar23;
            uVar9 = uVar9 - 1;
            fVar22 = fVar23 * fVar23;
            fVar25 = 1.0 / (fVar23 * 1.4142135 + 1.0 + fVar22);
            pfVar20[-2] = fVar25;
            pfVar20[-1] = fVar25 + fVar25;
            *pfVar20 = fVar25;
            pfVar20[1] = fVar25 * (2.0 - (fVar22 + fVar22));
            pfVar20[2] = fVar25 * ((1.0 - fVar23 * 1.4142135) + fVar22);
            pfVar20 = pfVar20 + 5;
          } while (uVar9 != 0);
        }
      }
      puVar13 = local_138;
      local_168 = puVar14;
      local_170 = (undefined8 *)((long)puVar14 + 0x14);
      if ((local_f0 >> 2 & 1) == 0) {
        if (fVar28 == local_13c) {
          uVar1 = *(undefined8 *)((long)puVar14 + 0x1c);
          *local_138 = *(undefined8 *)((long)puVar14 + 0x14);
          puVar13[1] = uVar1;
          *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((long)puVar14 + 0x24);
        }
        else if ((int)local_178 != 0) {
          uVar15 = 0;
          uVar6 = *puVar4;
          fVar21 = (float)NEON_ucvtf(*_DAT_008a4b68);
          uVar9 = local_178;
          pfVar20 = local_1b0;
          do {
            uVar5 = uVar6;
            if (param_4 - uVar15 <= uVar6) {
              uVar5 = param_4 - uVar15;
            }
            uVar15 = uVar5 + uVar15;
            fVar22 = (100.0 - *(float *)(lVar19 + 0x10)) +
                     fVar29 * (*(float *)(lVar19 + 0x10) - *(float *)(lVar19 + 0x14)) *
                              (float)uVar15;
            uVar5 = (uint)(fVar22 * -1042939.94 + 1.1696472e+09);
            fVar23 = (float)(uVar5 & 0x7fffff | 0x3f800000);
            fVar23 = (float)(uVar5 & 0xff800000) * 16.797443 *
                     (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar22 < 30.0) {
              fVar23 = fVar22 * -433.33334 + 20000.0;
            }
            fVar23 = (float)NEON_fminnm(fVar21 * 0.45,fVar23);
            fVar23 = tanf(fVar23 * (1.0 / fVar21) * 3.1415927);
            fVar22 = fVar23 * fVar23 + 1.0;
            uVar9 = uVar9 - 1;
            fVar25 = 1.0 / (fVar22 + fVar23 * 1.4142135);
            fVar26 = fVar25 * -2.0;
            pfVar20[-2] = fVar25;
            *pfVar20 = fVar25;
            pfVar20[-1] = fVar26;
            pfVar20[2] = fVar25 * (fVar22 - fVar23 * 1.4142135);
            pfVar20[1] = fVar26 - fVar26 * fVar23 * fVar23;
            pfVar20 = pfVar20 + 5;
          } while (uVar9 != 0);
        }
      }
      fVar22 = local_13c;
      fVar23 = local_140;
      fVar21 = local_144;
      uVar9 = local_160;
      puVar13 = local_168;
      local_158 = lVar19;
      if ((int)local_e8 != 0) {
        uVar10 = 0;
        uVar6 = (uint)local_178;
        uVar15 = uVar6;
        if (local_140 == local_144) {
          uVar15 = 1;
        }
        if (fVar28 == local_13c) {
          uVar6 = 1;
        }
        local_120 = (ulong)uVar6;
        local_118 = (ulong)uVar15;
        uVar15 = local_ec;
        do {
          plVar8 = *(long **)(local_f8 + uVar9 * 8);
          __src = (void *)(*plVar8 + uVar10 * 4 * (ulong)*(ushort *)(plVar8 + 2));
          puVar12 = (undefined4 *)(puVar13[5] + uVar10 * 0x10);
          if ((uVar15 >> 2 & 1) == 0) {
            local_b0[0] = puVar12;
            local_b4 = param_4;
            local_c8 = __dest;
            pvStack_c0 = __src;
            if ((int)local_118 != 0) {
              if ((int)local_118 == 1) {
                local_d0 = local_130;
                thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_b4,1,1);
              }
              else {
                iVar18 = 0;
                uVar16 = local_118;
                puVar14 = local_130;
                do {
                  local_d4 = *puVar4;
                  if (param_4 - iVar18 <= *puVar4) {
                    local_d4 = param_4 - iVar18;
                  }
                  local_d0 = puVar14;
                  thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_d4,1,1);
                  uVar16 = uVar16 - 1;
                  puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                  iVar18 = local_d4 + iVar18;
                  local_c8 = (void *)((long)local_c8 + (ulong)local_d4 * 4);
                  pvStack_c0 = (void *)((long)pvStack_c0 + (ulong)local_d4 * 4);
                } while (uVar16 != 0);
              }
            }
            puVar12 = (undefined4 *)(puVar13[6] + uVar10 * 0x10);
            uVar15 = local_ec;
            if ((local_f0 >> 2 & 1) == 0) goto LAB__text__004562e4;
LAB__text__00456224:
            if ((local_f0 >> 3 & 1) == 0) {
              thunk_FUN__text__004207a0
                        ((float)puVar12[1] - (float)puVar12[3],
                         ((float)puVar12[1] - (float)puVar12[3]) * fVar27,local_128,__dest,uVar17);
            }
            uVar24 = *(undefined4 *)((long)__dest + local_108 * 4);
            puVar12[2] = uVar24;
            *puVar12 = uVar24;
            uVar24 = *(undefined4 *)((long)__dest + local_110 * 4);
            puVar12[3] = uVar24;
            puVar12[1] = uVar24;
          }
          else {
            memcpy(__dest,__src,local_e0);
            if ((uVar15 >> 3 & 1) == 0) {
              thunk_FUN__text__004207a0
                        ((float)puVar12[1] - (float)puVar12[3],
                         ((float)puVar12[1] - (float)puVar12[3]) * fVar27,local_128,__dest,uVar17);
            }
            uVar24 = *(undefined4 *)((long)__dest + local_108 * 4);
            puVar12[2] = uVar24;
            *puVar12 = uVar24;
            uVar24 = *(undefined4 *)((long)__dest + local_110 * 4);
            puVar12[3] = uVar24;
            puVar12[1] = uVar24;
            puVar12 = (undefined4 *)(puVar13[6] + uVar10 * 0x10);
            if ((local_f0 >> 2 & 1) != 0) goto LAB__text__00456224;
LAB__text__004562e4:
            local_c8 = __dest;
            pvStack_c0 = __dest;
            local_b4 = param_4;
            local_b0[0] = puVar12;
            if ((int)local_120 != 0) {
              if ((int)local_120 == 1) {
                local_d0 = local_138;
                thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_b4,1,1);
              }
              else {
                iVar18 = 0;
                uVar16 = local_120;
                puVar14 = local_138;
                do {
                  local_d4 = *puVar4;
                  if (param_4 - iVar18 <= *puVar4) {
                    local_d4 = param_4 - iVar18;
                  }
                  local_d0 = puVar14;
                  thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_d4,1,1);
                  uVar16 = uVar16 - 1;
                  puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                  iVar18 = local_d4 + iVar18;
                  pvStack_c0 = (void *)((long)pvStack_c0 + (ulong)local_d4 * 4);
                  local_c8 = (void *)((long)local_c8 + (ulong)local_d4 * 4);
                } while (uVar16 != 0);
              }
            }
            uVar15 = local_ec;
          }
          plVar8 = *(long **)(local_100 + uVar9 * 8);
          memcpy((void *)(*plVar8 + uVar10 * 4 * (ulong)*(ushort *)(plVar8 + 2)),__dest,local_e0);
          uVar10 = uVar10 + 1;
        } while (uVar10 != local_e8);
      }
      if (fVar23 != fVar21) {
        uVar1 = *(undefined8 *)local_1a8[2];
        uVar2 = *(undefined8 *)((long)local_1a8[2] + 8);
        *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((long)local_1a8[2] + 0x10);
        *puVar13 = uVar1;
        puVar13[1] = uVar2;
      }
      if (fVar28 != fVar22) {
        uVar1 = *(undefined8 *)local_1a8[1];
        uVar2 = *(undefined8 *)((long)local_1a8[1] + 8);
        *(undefined4 *)(local_170 + 2) = *(undefined4 *)((long)local_1a8[1] + 0x10);
        *local_170 = uVar1;
        local_170[1] = uVar2;
      }
      local_150 = local_150 + 1;
      *(byte *)(local_158 + 0xd) = *(byte *)(local_158 + 0xd) | 8;
      *(byte *)(local_158 + 0x19) = *(byte *)(local_158 + 0x19) | 8;
    } while (local_150 != local_190);
  }
  return;
}


