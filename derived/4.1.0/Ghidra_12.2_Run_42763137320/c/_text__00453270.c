/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00453270; name: FUN_.text__00453270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00453270(long param_1,uint param_2,long param_3,uint param_4,long param_5,
                        long *param_6,long param_7,long param_8,long param_9)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  float *pfVar19;
  void *__dest;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float *local_1c0;
  float *local_1b8 [3];
  ulong local_1a0;
  long local_198;
  long local_190;
  ulong local_188;
  undefined8 *local_180;
  long local_178;
  ulong local_170;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  ulong local_140;
  long local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  long local_118;
  long *local_110;
  long local_108;
  long local_100;
  ulong local_f8;
  long local_f0;
  uint local_e8;
  uint local_e4;
  ulong local_e0;
  uint local_d4;
  undefined8 *local_d0;
  void *local_c8;
  void *pvStack_c0;
  uint local_b4;
  undefined4 *local_b0 [2];
  
  puVar4 = _DAT_008a4b88;
  local_108 = param_7;
  local_100 = param_8;
  local_190 = param_3;
  local_110 = param_6;
  local_f0 = param_5;
  local_198 = param_1;
  if (param_2 != 0) {
    uVar17 = (ulong)param_4;
    local_118 = param_9;
    uVar8 = uVar17 * 4 + 0xf & 0x7fffffff0;
    lVar13 = -uVar8;
    lVar16 = (long)local_1b8 + lVar13 + -8;
    local_138 = lVar16;
    fVar26 = 1.0 / (float)param_4;
    if (param_4 != 0) {
      uVar9 = uVar17 & 3;
      if (param_4 < 4) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar12 = (undefined8 *)((long)local_1b8 + lVar13);
        do {
          lVar10 = lVar10 + -4;
          puVar12[-1] = 0x3f8000003f800000;
          *puVar12 = 0x3f8000003f800000;
          puVar12 = puVar12 + 2;
        } while (-lVar10 != (uVar17 & 0xfffffffc));
        lVar10 = -lVar10;
      }
      if ((param_4 & 3) != 0) {
        puVar11 = (undefined4 *)(lVar16 + lVar10 * 4);
        do {
          uVar9 = uVar9 - 1;
          *puVar11 = 0x3f800000;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    __dest = (void *)(lVar16 - uVar8);
    uVar3 = *_DAT_008a4b90;
    uVar8 = (ulong)((uint)uVar3 * 0x14 + 0xf) & 0x3ffff0;
    local_148 = (undefined8 *)((long)__dest - uVar8);
    local_150 = (undefined8 *)((long)local_148 - uVar8);
    local_140 = uVar17 * 4 & 0xfffffffc;
    local_128 = (ulong)(param_4 - 1);
    local_120 = (ulong)(param_4 - 2);
    local_188 = (ulong)uVar3;
    uVar15 = uVar3 - 1;
    local_170 = 0;
    local_1b8[1] = (float *)((long)local_150 + (ulong)uVar15 * 0x14);
    if (param_2 < 2) {
      param_2 = 1;
    }
    local_1a0 = (ulong)param_2;
    local_1b8[2] = (float *)((long)local_148 + (ulong)uVar15 * 0x14);
    local_1b8[0] = (float *)(local_148 + 1);
    local_1c0 = (float *)(local_150 + 1);
    do {
      puVar12 = local_148;
      local_f8 = (ulong)*(ushort *)(local_198 + local_170 * 2);
      lVar16 = local_f8 * 8;
      lVar13 = *(long *)(local_190 + lVar16);
      local_e8 = (uint)*(byte *)(lVar13 + 0x19);
      local_e4 = (uint)*(byte *)(lVar13 + 0xd);
      local_160 = *(float *)(lVar13 + 8);
      local_164 = *(float *)(lVar13 + 4);
      fVar27 = *(float *)(lVar13 + 0x14);
      local_15c = *(float *)(lVar13 + 0x10);
      local_e0 = (ulong)*(byte *)(*(long *)(local_f0 + lVar16) + 8);
      local_158 = *(undefined8 **)(lVar13 + 0x20);
      if ((*(byte *)(lVar13 + 0xd) >> 2 & 1) == 0) {
        if (*(float *)(lVar13 + 8) == *(float *)(lVar13 + 4)) {
          uVar1 = *local_158;
          uVar2 = local_158[1];
          *(undefined4 *)(local_148 + 2) = *(undefined4 *)(local_158 + 2);
          *puVar12 = uVar1;
          puVar12[1] = uVar2;
        }
        else if ((int)local_188 != 0) {
          uVar15 = 0;
          uVar6 = *puVar4;
          fVar20 = (float)NEON_ucvtf(*_DAT_008a4b68);
          pfVar19 = local_1b8[0];
          uVar8 = local_188;
          do {
            uVar5 = uVar6;
            if (param_4 - uVar15 <= uVar6) {
              uVar5 = param_4 - uVar15;
            }
            uVar15 = uVar5 + uVar15;
            fVar21 = *(float *)(lVar13 + 4) +
                     (float)uVar15 * (*(float *)(lVar13 + 8) - *(float *)(lVar13 + 4)) * fVar26;
            uVar5 = (uint)(fVar21 * -1042939.94 + 1.1696472e+09);
            fVar22 = (float)(uVar5 & 0x7fffff | 0x3f800000);
            fVar22 = (float)(uVar5 & 0xff800000) * 16.797443 *
                     (fVar22 * (fVar22 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar21 < 30.0) {
              fVar22 = fVar21 * -433.33334 + 20000.0;
            }
            fVar22 = (float)NEON_fminnm(fVar20 * 0.45,fVar22);
            fVar22 = tanf(fVar22 * (1.0 / fVar20) * 3.1415927);
            fVar22 = 1.0 / fVar22;
            uVar8 = uVar8 - 1;
            fVar21 = fVar22 * fVar22;
            fVar24 = 1.0 / (fVar22 * 1.4142135 + 1.0 + fVar21);
            pfVar19[-2] = fVar24;
            pfVar19[-1] = fVar24 + fVar24;
            *pfVar19 = fVar24;
            pfVar19[1] = fVar24 * (2.0 - (fVar21 + fVar21));
            pfVar19[2] = fVar24 * ((1.0 - fVar22 * 1.4142135) + fVar21);
            pfVar19 = pfVar19 + 5;
          } while (uVar8 != 0);
        }
      }
      puVar14 = local_150;
      puVar12 = local_158;
      local_180 = (undefined8 *)((long)local_158 + 0x14);
      if ((local_e8 >> 2 & 1) == 0) {
        if (fVar27 == local_15c) {
          uVar1 = *(undefined8 *)((long)local_158 + 0x1c);
          *local_150 = *(undefined8 *)((long)local_158 + 0x14);
          puVar14[1] = uVar1;
          *(undefined4 *)(puVar14 + 2) = *(undefined4 *)((long)puVar12 + 0x24);
        }
        else if ((int)local_188 != 0) {
          uVar15 = 0;
          local_130 = CONCAT44(local_130._4_4_,*puVar4);
          fVar20 = (float)NEON_ucvtf(*_DAT_008a4b68);
          uVar8 = local_188;
          pfVar19 = local_1c0;
          do {
            uVar6 = (uint)local_130;
            if (param_4 - uVar15 <= (uint)local_130) {
              uVar6 = param_4 - uVar15;
            }
            uVar15 = uVar6 + uVar15;
            fVar21 = (100.0 - *(float *)(lVar13 + 0x10)) +
                     fVar26 * (*(float *)(lVar13 + 0x10) - *(float *)(lVar13 + 0x14)) *
                              (float)uVar15;
            uVar6 = (uint)(fVar21 * -1042939.94 + 1.1696472e+09);
            fVar22 = (float)(uVar6 & 0x7fffff | 0x3f800000);
            fVar22 = (float)(uVar6 & 0xff800000) * 16.797443 *
                     (fVar22 * (fVar22 * 0.32518977 + 0.020805772) + 0.65304345);
            if (fVar21 < 30.0) {
              fVar22 = fVar21 * -433.33334 + 20000.0;
            }
            fVar22 = (float)NEON_fminnm(fVar20 * 0.45,fVar22);
            fVar22 = tanf(fVar22 * (1.0 / fVar20) * 3.1415927);
            fVar21 = fVar22 * fVar22 + 1.0;
            uVar8 = uVar8 - 1;
            fVar24 = 1.0 / (fVar21 + fVar22 * 1.4142135);
            fVar25 = fVar24 * -2.0;
            pfVar19[-2] = fVar24;
            *pfVar19 = fVar24;
            pfVar19[-1] = fVar25;
            pfVar19[2] = fVar24 * (fVar21 - fVar22 * 1.4142135);
            pfVar19[1] = fVar25 - fVar25 * fVar22 * fVar22;
            pfVar19 = pfVar19 + 5;
          } while (uVar8 != 0);
        }
      }
      puVar12 = local_158;
      fVar21 = local_15c;
      fVar22 = local_160;
      fVar20 = local_164;
      local_178 = lVar13;
      if ((int)local_e0 != 0) {
        uVar8 = 0;
        uVar6 = (uint)local_188;
        uVar15 = uVar6;
        if (local_160 == local_164) {
          uVar15 = 1;
        }
        local_130 = (ulong)uVar15;
        if (fVar27 == local_15c) {
          uVar6 = 1;
        }
        uVar15 = local_e4;
        do {
          plVar7 = *(long **)(local_f0 + local_f8 * 8);
          __src = (void *)(*plVar7 + uVar8 * *(ushort *)(plVar7 + 2) * 4);
          puVar11 = (undefined4 *)(puVar12[5] + uVar8 * 0x10);
          if ((uVar15 >> 2 & 1) == 0) {
            local_b0[0] = puVar11;
            local_b4 = param_4;
            local_c8 = __dest;
            pvStack_c0 = __src;
            if ((int)local_130 != 0) {
              if ((int)local_130 == 1) {
                local_d0 = local_148;
                thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_b4,1,1);
              }
              else {
                iVar18 = 0;
                puVar14 = local_148;
                uVar9 = local_130;
                do {
                  local_d4 = *puVar4;
                  if (param_4 - iVar18 <= *puVar4) {
                    local_d4 = param_4 - iVar18;
                  }
                  local_d0 = puVar14;
                  thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_d4,1,1);
                  uVar9 = uVar9 - 1;
                  puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                  iVar18 = local_d4 + iVar18;
                  local_c8 = (void *)((long)local_c8 + (ulong)local_d4 * 4);
                  pvStack_c0 = (void *)((long)pvStack_c0 + (ulong)local_d4 * 4);
                } while (uVar9 != 0);
              }
            }
            puVar11 = (undefined4 *)(puVar12[6] + uVar8 * 0x10);
            uVar15 = local_e4;
            if ((local_e8 >> 2 & 1) == 0) goto LAB__text__00453b20;
LAB__text__00453a60:
            if ((local_e8 >> 3 & 1) == 0) {
              thunk_FUN__text__004207a0
                        ((float)puVar11[1] - (float)puVar11[3],
                         ((float)puVar11[1] - (float)puVar11[3]) * -fVar26,local_138,__dest,uVar17);
            }
            uVar23 = *(undefined4 *)((long)__dest + local_120 * 4);
            puVar11[2] = uVar23;
            *puVar11 = uVar23;
            uVar23 = *(undefined4 *)((long)__dest + local_128 * 4);
            puVar11[3] = uVar23;
            puVar11[1] = uVar23;
          }
          else {
            memcpy(__dest,__src,local_140);
            if ((uVar15 >> 3 & 1) == 0) {
              thunk_FUN__text__004207a0
                        ((float)puVar11[1] - (float)puVar11[3],
                         ((float)puVar11[1] - (float)puVar11[3]) * -fVar26,local_138,__dest,uVar17);
            }
            uVar23 = *(undefined4 *)((long)__dest + local_120 * 4);
            puVar11[2] = uVar23;
            *puVar11 = uVar23;
            uVar23 = *(undefined4 *)((long)__dest + local_128 * 4);
            puVar11[3] = uVar23;
            puVar11[1] = uVar23;
            puVar11 = (undefined4 *)(puVar12[6] + uVar8 * 0x10);
            if ((local_e8 >> 2 & 1) != 0) goto LAB__text__00453a60;
LAB__text__00453b20:
            local_c8 = __dest;
            pvStack_c0 = __dest;
            local_b4 = param_4;
            if (uVar6 != 0) {
              local_b0[0] = puVar11;
              if (uVar6 == 1) {
                local_d0 = local_150;
                thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_b4,1,1);
              }
              else {
                iVar18 = 0;
                puVar14 = local_150;
                uVar9 = (ulong)uVar6;
                do {
                  local_d4 = *puVar4;
                  if (param_4 - iVar18 <= *puVar4) {
                    local_d4 = param_4 - iVar18;
                  }
                  local_d0 = puVar14;
                  thunk_FUN__text__00422210(&pvStack_c0,&local_c8,&local_d0,local_b0,&local_d4,1,1);
                  uVar9 = uVar9 - 1;
                  puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                  iVar18 = local_d4 + iVar18;
                  pvStack_c0 = (void *)((long)pvStack_c0 + (ulong)local_d4 * 4);
                  local_c8 = (void *)((long)local_c8 + (ulong)local_d4 * 4);
                } while (uVar9 != 0);
              }
            }
            uVar15 = local_e4;
          }
          uVar5 = *(uint *)(*local_110 + 8);
          local_b0[0] = *(undefined4 **)(local_108 + lVar16);
          lVar13 = (ulong)(((uVar5 & 0xff) + 3 & 0x1fc) * (int)uVar8) * 4;
          FUN__text__0041f110(fVar26,__dest,*local_110,uVar5,local_b0,
                              *(long *)(local_100 + lVar16) + lVar13,
                              *(long *)(local_118 + lVar16) + lVar13,uVar17);
          uVar8 = uVar8 + 1;
        } while (uVar8 != local_e0);
      }
      if (fVar22 != fVar20) {
        uVar1 = *(undefined8 *)local_1b8[2];
        uVar2 = *(undefined8 *)((long)local_1b8[2] + 8);
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)((long)local_1b8[2] + 0x10);
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
      }
      if (fVar27 != fVar21) {
        uVar1 = *(undefined8 *)local_1b8[1];
        uVar2 = *(undefined8 *)((long)local_1b8[1] + 8);
        *(undefined4 *)(local_180 + 2) = *(undefined4 *)((long)local_1b8[1] + 0x10);
        *local_180 = uVar1;
        local_180[1] = uVar2;
      }
      local_170 = local_170 + 1;
      *(byte *)(local_178 + 0xd) = *(byte *)(local_178 + 0xd) | 8;
      *(byte *)(local_178 + 0x19) = *(byte *)(local_178 + 0x19) | 8;
    } while (local_170 != local_1a0);
  }
  return;
}


