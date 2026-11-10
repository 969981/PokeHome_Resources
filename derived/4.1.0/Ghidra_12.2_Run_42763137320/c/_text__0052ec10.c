/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052ec10; name: FUN_.text__0052ec10
 */


void FUN__text__0052ec10(double param_1,double param_2,double param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined4 param_7,long *param_8,
                        long *param_9,undefined8 param_10,long param_11,long param_12,long param_13,
                        long *param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double *pdVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  double *pdVar18;
  double *pdVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  long *plVar27;
  double dVar28;
  undefined8 uVar29;
  uint *puVar30;
  undefined4 *puVar31;
  long lVar32;
  double dVar33;
  long lVar34;
  float fVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double *local_198;
  uint *local_160;
  double *local_148;
  uint *local_140;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  
  param_14[4] = 0;
  *(undefined4 *)(param_14 + 5) = 0;
  local_100 = param_4;
  uStack_f8 = param_5;
  local_f0 = param_6;
  (**(code **)(*param_14 + 0x10))(param_14);
  *(undefined4 *)((long)param_14 + 0x24) = param_7;
  if ((int)param_8[1] == 0) {
    return;
  }
  lVar32 = 0;
  uVar16 = 0;
  plVar1 = param_14 + 6;
LAB__text__0052eccc:
  lVar24 = *param_8;
  plVar22 = (long *)(lVar24 + uVar16 * 0x90);
  puVar17 = (uint *)(plVar22 + 0x10);
  uVar36 = *puVar17 - 1;
  if (((*(long *)(plVar22[uVar36] + 0x70) == param_12) &&
      (plVar2 = (long *)(lVar24 + uVar16 * 0x90 + 0x40),
      *(long *)(plVar2[uVar36] + 0x78) != param_13)) &&
     (uVar36 = *(uint *)(param_9 + 1), uVar36 != 0)) {
    iVar14 = 0;
    uVar20 = *(ulong *)(*plVar22 + 0x70);
    do {
      iVar5 = iVar14 + (uVar36 >> 1);
      puVar23 = *(ulong **)(*param_9 + (long)iVar5 * 8);
      uVar21 = *puVar23;
      if (uVar21 == uVar20) {
        if (((int)puVar23[8] != 0) && (*(char *)((long)puVar23 + 0x32) == '\0')) {
          local_160 = (uint *)puVar23[7];
          if (*puVar17 < 2) goto LAB__text__0052edf4;
          lVar10 = lVar24 + uVar16 * 0x90;
          plVar3 = (long *)(lVar10 + 0x48);
          pfVar4 = (float *)(lVar10 + 0x88);
          local_198 = (double *)(local_160 + 0xc);
          goto LAB__text__0052efc4;
        }
        break;
      }
      if (uVar21 < uVar20) {
        iVar14 = iVar5 + 1;
      }
      uVar40 = uVar36 - (uVar21 < uVar20);
      uVar36 = uVar40 >> 1;
    } while (1 < uVar40);
  }
  goto LAB__text__0052ecb4;
LAB__text__0052edf4:
  do {
    uVar36 = *(uint *)(param_14 + 7);
    uVar40 = *(uint *)((long)param_14 + 0x3c);
    if (uVar36 < uVar40) {
LAB__text__0052ee28:
      *(uint *)(param_14 + 7) = uVar36 + 1;
      if (param_14[6] != 0) {
        puVar31 = (undefined4 *)(param_14[6] + (ulong)uVar36 * 0x1e8);
        *puVar31 = 0;
        *(undefined8 *)(puVar31 + 8) = 0;
        *(undefined8 *)(puVar31 + 10) = 0;
        *(double *)(puVar31 + 2) = param_1;
        *(double *)(puVar31 + 4) = param_2;
        *(double *)(puVar31 + 6) = param_3;
        *(undefined8 *)(puVar31 + 0x45) = 0;
        *(undefined8 *)(puVar31 + 0x47) = 0;
        *(undefined8 *)(puVar31 + 0x49) = 0;
        *(undefined8 *)(puVar31 + 0x4b) = 0;
        puVar31[0x44] = 0x42c80000;
        *(undefined8 *)(puVar31 + 0xc) = 0;
        *(undefined8 *)(puVar31 + 0xe) = 0;
        *(undefined8 *)(puVar31 + 0x10) = 0;
        *(undefined8 *)(puVar31 + 0x12) = 0;
        *(undefined8 *)(puVar31 + 0x14) = 0;
        *(undefined8 *)(puVar31 + 0x16) = 0;
        *(undefined8 *)(puVar31 + 0x18) = 0;
        *(undefined8 *)(puVar31 + 0x1a) = 0;
        *(undefined8 *)(puVar31 + 0x1c) = 0;
        *(undefined8 *)(puVar31 + 0x1e) = 0;
        *(undefined8 *)(puVar31 + 0x20) = 0;
        *(undefined8 *)(puVar31 + 0x22) = 0;
        *(undefined8 *)(puVar31 + 0x24) = 0;
        *(undefined8 *)(puVar31 + 0x26) = 0;
        *(undefined8 *)(puVar31 + 0x28) = 0;
        *(undefined8 *)(puVar31 + 0x2a) = 0;
        *(undefined8 *)(puVar31 + 0x2c) = 0;
        *(undefined8 *)(puVar31 + 0x2e) = 0;
        *(undefined8 *)(puVar31 + 0x30) = 0;
        *(undefined8 *)(puVar31 + 0x32) = 0;
        *(undefined8 *)(puVar31 + 0x34) = 0;
        *(undefined8 *)(puVar31 + 0x36) = 0;
        *(undefined8 *)(puVar31 + 0x38) = 0;
        *(undefined8 *)(puVar31 + 0x3a) = 0;
        *(undefined8 *)(puVar31 + 0x3c) = 0;
        *(undefined8 *)(puVar31 + 0x3e) = 0;
        *(undefined8 *)(puVar31 + 0x40) = 0;
        *(undefined8 *)(puVar31 + 0x42) = 0;
        puVar31[0x40] = 0;
        *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
        FUN__text__0052aa30(*(undefined8 *)(local_160 + 0x38),*(undefined8 *)(local_160 + 0x3a),
                            *(undefined8 *)(local_160 + 0x3c),puVar31,local_160,param_10);
        FUN__text__0052b020(*(undefined8 *)(param_11 + 0x18),*(undefined8 *)(param_11 + 0x20),
                            *(undefined8 *)(param_11 + 0x28),puVar31,plVar22,0,1);
        FUN__text__0052b470(0,0,puVar31,&local_100,param_11);
      }
    }
    else {
      iVar14 = uVar40 + (uVar40 >> 1);
      if (uVar40 == 0) {
        iVar14 = 1;
      }
      uVar20 = FUN__text__00530820(plVar1,iVar14);
      if (((uVar20 & 1) != 0) && (uVar36 < *(uint *)((long)param_14 + 0x3c))) {
        uVar36 = *(uint *)(param_14 + 7);
        goto LAB__text__0052ee28;
      }
    }
    local_160 = local_160 + 0x46;
  } while (local_160 != (uint *)(puVar23[7] + (ulong)(uint)puVar23[8] * 0x118));
  goto LAB__text__0052ecb4;
LAB__text__0052efc4:
  do {
    lVar10 = FUN__text__00527e10(*plVar3,*plVar22,plVar22[1]);
    if (lVar10 == 0) {
      uVar36 = *(uint *)(param_14 + 7);
      uVar40 = *(uint *)((long)param_14 + 0x3c);
      if (uVar40 <= uVar36) {
        iVar14 = uVar40 + (uVar40 >> 1);
        if (uVar40 == 0) {
          iVar14 = 1;
        }
        uVar20 = FUN__text__00530820(plVar1,iVar14);
        if (((uVar20 & 1) == 0) || (*(uint *)((long)param_14 + 0x3c) <= uVar36))
        goto LAB__text__0052ef90;
        uVar36 = *(uint *)(param_14 + 7);
      }
      *(uint *)(param_14 + 7) = uVar36 + 1;
      if (param_14[6] != 0) {
        puVar31 = (undefined4 *)(param_14[6] + (ulong)uVar36 * 0x1e8);
        *puVar31 = 0;
        *(undefined8 *)(puVar31 + 0x42) = 0;
        *(undefined8 *)(puVar31 + 10) = 0;
        *(undefined8 *)(puVar31 + 0xc) = 0;
        *(undefined8 *)(puVar31 + 0x45) = 0;
        *(undefined8 *)(puVar31 + 0x47) = 0;
        *(double *)(puVar31 + 4) = param_2;
        *(undefined8 *)(puVar31 + 8) = 0;
        *(double *)(puVar31 + 2) = param_1;
        *(double *)(puVar31 + 6) = param_3;
        *(undefined8 *)(puVar31 + 0x49) = 0;
        *(undefined8 *)(puVar31 + 0x4b) = 0;
        puVar31[0x44] = 0x42c80000;
        *(undefined8 *)(puVar31 + 0xe) = 0;
        *(undefined8 *)(puVar31 + 0x10) = 0;
        *(undefined8 *)(puVar31 + 0x12) = 0;
        *(undefined8 *)(puVar31 + 0x14) = 0;
        *(undefined8 *)(puVar31 + 0x16) = 0;
        *(undefined8 *)(puVar31 + 0x18) = 0;
        *(undefined8 *)(puVar31 + 0x1a) = 0;
        *(undefined8 *)(puVar31 + 0x1c) = 0;
        *(undefined8 *)(puVar31 + 0x1e) = 0;
        *(undefined8 *)(puVar31 + 0x20) = 0;
        *(undefined8 *)(puVar31 + 0x22) = 0;
        *(undefined8 *)(puVar31 + 0x24) = 0;
        *(undefined8 *)(puVar31 + 0x26) = 0;
        *(undefined8 *)(puVar31 + 0x28) = 0;
        *(undefined8 *)(puVar31 + 0x2a) = 0;
        *(undefined8 *)(puVar31 + 0x2c) = 0;
        *(undefined8 *)(puVar31 + 0x2e) = 0;
        *(undefined8 *)(puVar31 + 0x30) = 0;
        *(undefined8 *)(puVar31 + 0x32) = 0;
        *(undefined8 *)(puVar31 + 0x34) = 0;
        *(undefined8 *)(puVar31 + 0x36) = 0;
        *(undefined8 *)(puVar31 + 0x38) = 0;
        *(undefined8 *)(puVar31 + 0x3a) = 0;
        *(undefined8 *)(puVar31 + 0x3c) = 0;
        *(undefined8 *)(puVar31 + 0x3e) = 0;
        *(undefined8 *)(puVar31 + 0x40) = 0;
        puVar31[0x40] = 0;
        *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
        *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
        FUN__text__0052aa30(*(undefined8 *)(local_160 + 0x38),*(undefined8 *)(local_160 + 0x3a),
                            *(undefined8 *)(local_160 + 0x3c),puVar31,local_160,param_10);
        local_a0 = *(double *)(param_11 + 0x18);
        dVar26 = *(double *)(param_11 + 0x20);
        uVar20 = 0;
        dVar33 = *(double *)(param_11 + 0x28);
        pdVar18 = (double *)(puVar31 + 2);
        if (puVar31[0x3e] != 0) {
          pdVar18 = (double *)((long)(puVar31 + 8) + (ulong)(puVar31[0x3e] - 1) * 3 * 8);
        }
        local_b8 = *pdVar18;
        local_b0 = pdVar18[1];
        local_a8 = pdVar18[2];
        local_98 = dVar26;
        local_90 = dVar33;
        if (*puVar17 != 1) {
          uVar21 = 0;
          do {
            uVar20 = uVar21 + 1;
            puVar7 = (undefined8 *)(lVar24 + lVar32 + uVar21 * 8);
            local_b8 = (double)FUN__text__0052acf0(puVar31,&local_b8,puVar7[1],
                                                   *(undefined8 *)(puVar7[8] + 0x78),*puVar7);
            uVar21 = uVar20;
            local_b0 = dVar26;
            local_a8 = dVar33;
          } while (uVar20 < *puVar17 - 1);
        }
        FUN__text__0052acf0(puVar31,&local_b8,&local_a0,
                            *(undefined8 *)
                             (*(long *)(lVar24 + uVar16 * 0x90 + (uVar20 & 0xffffffff) * 8 + 0x40) +
                             0x78),plVar22[uVar20 & 0xffffffff]);
        fVar42 = *pfVar4;
        fVar41 = (float)puVar31[0x42];
        if ((float)puVar31[0x42] <= fVar42) {
          fVar41 = fVar42;
        }
        puVar31[0x42] = fVar41;
        *(double *)(puVar31 + 0x3a) = local_98;
        *(double *)(puVar31 + 0x3c) = local_90;
        *(double *)(puVar31 + 0x38) = local_a0;
        FUN__text__0052b470(0,0,puVar31,&local_100,param_11);
      }
    }
    else if (*(int *)(lVar10 + 0x38) != 0) {
      local_140 = *(uint **)(lVar10 + 0x30);
      local_148 = (double *)(local_140 + 0xc);
      do {
        uVar40 = *(uint *)(param_14 + 7);
        uVar36 = *(uint *)((long)param_14 + 0x3c);
        lVar25 = param_14[6];
        if (uVar40 < uVar36) {
          *(uint *)(param_14 + 7) = uVar40 + 1;
          if (lVar25 == 0) goto LAB__text__0052f090;
LAB__text__0052f334:
          uVar20 = (ulong)uVar40;
          puVar30 = (uint *)(lVar25 + uVar20 * 0x1e8);
          puVar30[0x6a] = 0xffffffff;
          puVar30[0x6b] = 0xffffffff;
          puVar30[0x6c] = 0xffffffff;
          puVar30[0x6d] = 0xffffffff;
          puVar30[0x66] = 0xffffffff;
          puVar30[0x67] = 0xffffffff;
          puVar30[0x68] = 0xffffffff;
          puVar30[0x69] = 0xffffffff;
          *puVar30 = 0;
          *(double *)(puVar30 + 4) = param_2;
          *(double *)(puVar30 + 6) = param_3;
          puVar30[0x62] = 0xffffffff;
          puVar30[99] = 0xffffffff;
          puVar30[100] = 0xffffffff;
          puVar30[0x65] = 0xffffffff;
          puVar30[0x5e] = 0xffffffff;
          puVar30[0x5f] = 0xffffffff;
          puVar30[0x60] = 0xffffffff;
          puVar30[0x61] = 0xffffffff;
          puVar30[0x5a] = 0xffffffff;
          puVar30[0x5b] = 0xffffffff;
          puVar30[0x5c] = 0xffffffff;
          puVar30[0x5d] = 0xffffffff;
          puVar30[0x56] = 0xffffffff;
          puVar30[0x57] = 0xffffffff;
          puVar30[0x58] = 0xffffffff;
          puVar30[0x59] = 0xffffffff;
          puVar30[0x52] = 0xffffffff;
          puVar30[0x53] = 0xffffffff;
          puVar30[0x54] = 0xffffffff;
          puVar30[0x55] = 0xffffffff;
          puVar30[0x4e] = 0xffffffff;
          puVar30[0x4f] = 0xffffffff;
          puVar30[0x50] = 0xffffffff;
          puVar30[0x51] = 0xffffffff;
          pdVar18 = (double *)(puVar30 + 2);
          *pdVar18 = param_1;
          puVar30[0x44] = 0x42c80000;
          puVar30[8] = 0;
          puVar30[9] = 0;
          puVar30[10] = 0;
          puVar30[0xb] = 0;
          puVar30[0xc] = 0;
          puVar30[0xd] = 0;
          puVar30[0xe] = 0;
          puVar30[0xf] = 0;
          puVar30[0x10] = 0;
          puVar30[0x11] = 0;
          puVar30[0x12] = 0;
          puVar30[0x13] = 0;
          puVar30[0x14] = 0;
          puVar30[0x15] = 0;
          puVar30[0x16] = 0;
          puVar30[0x17] = 0;
          puVar30[0x18] = 0;
          puVar30[0x19] = 0;
          puVar30[0x1a] = 0;
          puVar30[0x1b] = 0;
          puVar30[0x1c] = 0;
          puVar30[0x1d] = 0;
          puVar30[0x1e] = 0;
          puVar30[0x1f] = 0;
          puVar30[0x20] = 0;
          puVar30[0x21] = 0;
          puVar30[0x22] = 0;
          puVar30[0x23] = 0;
          puVar30[0x24] = 0;
          puVar30[0x25] = 0;
          puVar30[0x26] = 0;
          puVar30[0x27] = 0;
          puVar30[0x28] = 0;
          puVar30[0x29] = 0;
          puVar30[0x2a] = 0;
          puVar30[0x2b] = 0;
          puVar30[0x2c] = 0;
          puVar30[0x2d] = 0;
          puVar30[0x2e] = 0;
          puVar30[0x2f] = 0;
          puVar30[0x30] = 0;
          puVar30[0x31] = 0;
          puVar30[0x32] = 0;
          puVar30[0x33] = 0;
          puVar30[0x34] = 0;
          puVar30[0x35] = 0;
          puVar30[0x36] = 0;
          puVar30[0x37] = 0;
          puVar30[0x38] = 0;
          puVar30[0x39] = 0;
          puVar30[0x3a] = 0;
          puVar30[0x3b] = 0;
          puVar30[0x3c] = 0;
          puVar30[0x3d] = 0;
          puVar30[0x3e] = 0;
          puVar30[0x3f] = 0;
          puVar30[0x40] = 0;
          puVar30[0x41] = 0;
          puVar30[0x42] = 0;
          puVar30[0x43] = 0;
          puVar30[0x40] = 0;
          puVar30[0x45] = 0;
          puVar30[0x46] = 0;
          puVar30[0x47] = 0;
          puVar30[0x48] = 0;
          puVar30[0x49] = 0;
          puVar30[0x4a] = 0;
          puVar30[0x4b] = 0;
          puVar30[0x4c] = 0;
          uVar39 = *(undefined8 *)(local_160 + 0x3c);
          uVar37 = *(undefined8 *)(local_160 + 0x38);
          uVar38 = *(undefined8 *)(local_160 + 0x3a);
          if (local_160[0x3e] == 0) {
            fVar41 = 0.0;
            uVar40 = 0x42c80000;
            fVar42 = 0.0;
            uVar36 = 0;
          }
          else {
            uVar36 = 0;
            uVar21 = 0;
            pdVar19 = local_198;
            dVar26 = param_3;
            dVar33 = param_2;
            dVar28 = param_1;
            do {
              if (7 < (uint)(uVar21 + uVar36)) break;
              dVar43 = pdVar19[-2];
              dVar44 = pdVar19[-1];
              uVar11 = uVar21 + uVar36 & 0xffffffff;
              dVar46 = *pdVar19;
              *(double *)(puVar30 + uVar11 * 6 + 10) = dVar44;
              *(double *)(puVar30 + uVar11 * 6 + 0xc) = dVar46;
              *(double *)(puVar30 + uVar11 * 6 + 8) = dVar43;
              uVar36 = puVar30[0x3e];
              fVar41 = (float)puVar30[0x40];
              iVar14 = (int)uVar21;
              uVar21 = uVar21 + 1;
              *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)(iVar14 + uVar36) * 8 + 0x138) =
                   param_10;
              puVar30[0x40] =
                   (uint)(fVar41 + (float)SQRT((dVar43 - dVar28) * (dVar43 - dVar28) +
                                               (dVar44 - dVar33) * (dVar44 - dVar33) +
                                               (dVar46 - dVar26) * (dVar46 - dVar26)));
              pdVar19 = pdVar19 + 3;
              dVar26 = dVar46;
              dVar33 = dVar44;
              dVar28 = dVar43;
            } while (uVar21 < local_160[0x3e]);
            fVar42 = (float)puVar30[0x42];
            fVar41 = (float)puVar30[0x43];
            uVar40 = puVar30[0x44];
          }
          *(undefined8 *)(puVar30 + 0x38) = uVar37;
          *(undefined8 *)(puVar30 + 0x3a) = uVar38;
          *(undefined8 *)(puVar30 + 0x3c) = uVar39;
          uVar36 = local_160[0x3e] + uVar36;
          if (7 < uVar36) {
            uVar36 = 8;
          }
          puVar30[0x3e] = uVar36;
          fVar35 = (float)local_160[0x42];
          if ((float)local_160[0x42] <= fVar42) {
            fVar35 = fVar42;
          }
          puVar30[0x42] = (uint)fVar35;
          fVar42 = (float)local_160[0x43];
          if ((float)local_160[0x43] <= fVar41) {
            fVar42 = fVar41;
          }
          puVar30[0x43] = (uint)fVar42;
          uVar40 = NEON_fminnm(local_160[0x44],uVar40);
          puVar30[0x44] = uVar40;
          if (*local_160 != 0) {
            *puVar30 = *local_160;
          }
          pdVar12 = (double *)plVar22[1];
          dVar26 = *(double *)(*plVar22 + 0x70);
          pdVar19 = pdVar18;
          if (uVar36 != 0) {
            pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8);
          }
          dVar33 = pdVar12[0xe];
          uVar37 = *(undefined8 *)(*plVar2 + 0x78);
          uVar29 = *(undefined8 *)(*plVar3 + 0x78);
          local_a0 = *pdVar19;
          local_98 = pdVar19[1];
          local_90 = pdVar19[2];
          if (local_140[0x3e] == 0) {
            local_b8 = *pdVar12;
            local_b0 = pdVar12[1];
            local_a8 = pdVar12[2];
            uVar37 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar37);
            if ((ulong)dVar33 <= (ulong)dVar26) goto LAB__text__0052f6ac;
LAB__text__0052f5c0:
            uVar40 = local_140[0x3e];
            uVar36 = puVar30[0x3e];
            if (uVar40 != 0) {
              uVar15 = 0;
              pdVar19 = pdVar18;
              if (uVar36 != 0) {
                pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8);
              }
              iVar14 = -1;
              dVar26 = pdVar19[2];
              dVar33 = pdVar19[1];
              dVar28 = *pdVar19;
              do {
                uVar6 = uVar36 + uVar15;
                if (7 < uVar6) break;
                uVar40 = uVar40 + iVar14;
                iVar14 = iVar14 + -1;
                dVar43 = *(double *)(local_140 + (ulong)uVar40 * 6 + 8);
                dVar44 = *(double *)(local_140 + (ulong)uVar40 * 6 + 10);
                dVar46 = *(double *)(local_140 + (ulong)uVar40 * 6 + 0xc);
                *(double *)(puVar30 + (ulong)uVar6 * 6 + 0xc) = dVar46;
                *(double *)(puVar30 + (ulong)uVar6 * 6 + 8) = dVar43;
                *(double *)(puVar30 + (ulong)uVar6 * 6 + 10) = dVar44;
                uVar36 = puVar30[0x3e];
                fVar41 = (float)puVar30[0x40];
                uVar40 = uVar15 + uVar36;
                uVar15 = uVar15 + 1;
                *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)uVar40 * 8 + 0x138) = uVar29;
                puVar30[0x40] =
                     (uint)(fVar41 + (float)SQRT((dVar43 - dVar28) * (dVar43 - dVar28) +
                                                 (dVar44 - dVar33) * (dVar44 - dVar33) +
                                                 (dVar46 - dVar26) * (dVar46 - dVar26)));
                uVar40 = local_140[0x3e];
                dVar26 = dVar46;
                dVar33 = dVar44;
                dVar28 = dVar43;
              } while (uVar15 < uVar40);
            }
          }
          else {
            if ((ulong)dVar26 < (ulong)dVar33) {
              uVar36 = local_140[0x3e] - 1;
              local_b8 = *(double *)(local_140 + (ulong)uVar36 * 6 + 8);
              local_b0 = *(double *)(local_140 + (ulong)uVar36 * 6 + 10);
              local_a8 = *(double *)(local_140 + (ulong)uVar36 * 6 + 0xc);
              uVar37 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar37);
              goto LAB__text__0052f5c0;
            }
            local_b8 = *(double *)(local_140 + 8);
            local_b0 = *(double *)(local_140 + 10);
            local_a8 = *(double *)(local_140 + 0xc);
            uVar37 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar37);
LAB__text__0052f6ac:
            uVar36 = puVar30[0x3e];
            if (local_140[0x3e] != 0) {
              uVar21 = 0;
              pdVar19 = pdVar18;
              if (uVar36 != 0) {
                pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8);
              }
              pdVar12 = local_148;
              dVar26 = pdVar19[2];
              dVar33 = pdVar19[1];
              dVar28 = *pdVar19;
              do {
                if (7 < (uint)(uVar21 + uVar36)) break;
                dVar43 = pdVar12[-2];
                dVar44 = pdVar12[-1];
                uVar11 = uVar21 + uVar36 & 0xffffffff;
                dVar46 = *pdVar12;
                *(double *)(puVar30 + uVar11 * 6 + 0xc) = dVar46;
                *(double *)(puVar30 + uVar11 * 6 + 8) = dVar43;
                *(double *)(puVar30 + uVar11 * 6 + 10) = dVar44;
                fVar41 = (float)puVar30[0x40];
                uVar36 = puVar30[0x3e];
                iVar14 = (int)uVar21;
                uVar21 = uVar21 + 1;
                *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)(iVar14 + uVar36) * 8 + 0x138) =
                     uVar29;
                puVar30[0x40] =
                     (uint)(fVar41 + (float)SQRT((dVar43 - dVar28) * (dVar43 - dVar28) +
                                                 (dVar44 - dVar33) * (dVar44 - dVar33) +
                                                 (dVar46 - dVar26) * (dVar46 - dVar26)));
                pdVar12 = pdVar12 + 3;
                dVar26 = dVar46;
                dVar33 = dVar44;
                dVar28 = dVar43;
              } while (uVar21 < local_140[0x3e]);
            }
          }
          *(undefined8 *)(puVar30 + 0x38) = uVar37;
          *(undefined8 *)(puVar30 + 0x3a) = uVar38;
          *(undefined8 *)(puVar30 + 0x3c) = uVar39;
          uVar36 = local_140[0x3e] + uVar36;
          if (7 < uVar36) {
            uVar36 = 8;
          }
          puVar30[0x3e] = uVar36;
          fVar41 = (float)local_140[0x42];
          if ((float)local_140[0x42] <= (float)puVar30[0x42]) {
            fVar41 = (float)puVar30[0x42];
          }
          puVar30[0x42] = (uint)fVar41;
          fVar41 = (float)local_140[0x43];
          if ((float)local_140[0x43] <= (float)puVar30[0x43]) {
            fVar41 = (float)puVar30[0x43];
          }
          puVar30[0x43] = (uint)fVar41;
          uVar36 = NEON_fminnm(local_140[0x44],puVar30[0x44]);
          puVar30[0x44] = uVar36;
          uVar36 = *local_140;
          if (uVar36 != 0) {
            if (*puVar30 != 0) {
              uVar36 = (((*puVar30 * 0x1000193 ^ uVar36 & 0xff) * 0x1000193 ^ uVar36 >> 8 & 0xff) *
                        0x1000193 ^ uVar36 >> 0x10 & 0xff) * 0x1000193 ^ uVar36 >> 0x18;
            }
            *puVar30 = uVar36;
          }
          local_d0 = *(undefined8 *)(param_11 + 0x18);
          dVar26 = *(double *)(param_11 + 0x20);
          dVar33 = *(double *)(param_11 + 0x28);
          pdVar19 = pdVar18;
          if (puVar30[0x3e] != 0) {
            pdVar19 = (double *)(puVar30 + (ulong)(puVar30[0x3e] - 1) * 6 + 8);
          }
          local_e8 = *pdVar19;
          local_e0 = pdVar19[1];
          local_d8 = pdVar19[2];
          dStack_c8 = dVar26;
          local_c0 = dVar33;
          if (*puVar17 - 3 < 0xfffffffe) {
            uVar11 = 1;
            do {
              while( true ) {
                uVar21 = uVar11 + 1;
                plVar27 = (long *)(lVar24 + uVar16 * 0x90 + uVar21 * 8 + 0x40);
                puVar8 = (uint *)FUN__text__00527e90(*plVar27,plVar22[uVar11],plVar22[uVar21]);
                if (puVar8 == (uint *)0x0) break;
                pdVar12 = (double *)plVar22[uVar21];
                uVar37 = *(undefined8 *)(*plVar27 + 0x78);
                dVar28 = pdVar12[0xe];
                dVar43 = *(double *)(plVar22[uVar11] + 0x70);
                pdVar19 = pdVar18;
                if (puVar30[0x3e] != 0) {
                  pdVar19 = (double *)(puVar30 + (ulong)(puVar30[0x3e] - 1) * 6 + 8);
                }
                uVar38 = *(undefined8 *)
                          (*(long *)(lVar24 + uVar16 * 0x90 + uVar11 * 8 + 0x40) + 0x78);
                local_a0 = *pdVar19;
                local_98 = pdVar19[1];
                local_90 = pdVar19[2];
                if (puVar8[0x3e] == 0) {
                  local_b8 = *pdVar12;
                  local_b0 = pdVar12[1];
                  local_a8 = pdVar12[2];
                  uVar38 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar38);
                  if ((ulong)dVar28 <= (ulong)dVar43) goto LAB__text__0052faa8;
LAB__text__0052f9bc:
                  uVar40 = puVar8[0x3e];
                  uVar36 = puVar30[0x3e];
                  if (uVar40 != 0) {
                    uVar15 = 0;
                    pdVar19 = pdVar18;
                    if (uVar36 != 0) {
                      pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8);
                    }
                    iVar14 = -1;
                    dVar28 = pdVar19[2];
                    dVar43 = pdVar19[1];
                    dVar44 = *pdVar19;
                    do {
                      uVar6 = uVar36 + uVar15;
                      if (7 < uVar6) break;
                      uVar40 = uVar40 + iVar14;
                      iVar14 = iVar14 + -1;
                      dVar46 = *(double *)(puVar8 + (ulong)uVar40 * 6 + 8);
                      dVar45 = *(double *)(puVar8 + (ulong)uVar40 * 6 + 10);
                      dVar47 = *(double *)(puVar8 + (ulong)uVar40 * 6 + 0xc);
                      *(double *)(puVar30 + (ulong)uVar6 * 6 + 0xc) = dVar47;
                      *(double *)(puVar30 + (ulong)uVar6 * 6 + 8) = dVar46;
                      *(double *)(puVar30 + (ulong)uVar6 * 6 + 10) = dVar45;
                      uVar36 = puVar30[0x3e];
                      fVar41 = (float)puVar30[0x40];
                      uVar40 = uVar15 + uVar36;
                      uVar15 = uVar15 + 1;
                      *(undefined8 *)(lVar25 + uVar20 * 0x1e8 + (ulong)uVar40 * 8 + 0x138) = uVar37;
                      puVar30[0x40] =
                           (uint)(fVar41 + (float)SQRT((dVar46 - dVar44) * (dVar46 - dVar44) +
                                                       (dVar45 - dVar43) * (dVar45 - dVar43) +
                                                       (dVar47 - dVar28) * (dVar47 - dVar28)));
                      uVar40 = puVar8[0x3e];
                      dVar28 = dVar47;
                      dVar43 = dVar45;
                      dVar44 = dVar46;
                    } while (uVar15 < uVar40);
                  }
                }
                else {
                  if ((ulong)dVar43 < (ulong)dVar28) {
                    uVar36 = puVar8[0x3e] - 1;
                    local_b8 = *(double *)(puVar8 + (ulong)uVar36 * 6 + 8);
                    local_b0 = *(double *)(puVar8 + (ulong)uVar36 * 6 + 10);
                    local_a8 = *(double *)(puVar8 + (ulong)uVar36 * 6 + 0xc);
                    uVar38 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar38);
                    goto LAB__text__0052f9bc;
                  }
                  local_b8 = *(double *)(puVar8 + 8);
                  local_b0 = *(double *)(puVar8 + 10);
                  local_a8 = *(double *)(puVar8 + 0xc);
                  uVar38 = FUN__text__0052acf0(puVar30,&local_a0,&local_b8,uVar38);
LAB__text__0052faa8:
                  uVar36 = puVar30[0x3e];
                  if (puVar8[0x3e] != 0) {
                    uVar11 = 0;
                    pdVar19 = pdVar18;
                    if (uVar36 != 0) {
                      pdVar19 = (double *)(puVar30 + (ulong)(uVar36 - 1) * 6 + 8);
                    }
                    pdVar12 = (double *)(puVar8 + 0xc);
                    dVar28 = pdVar19[2];
                    dVar43 = pdVar19[1];
                    dVar44 = *pdVar19;
                    do {
                      if (7 < (uint)(uVar11 + uVar36)) break;
                      dVar46 = pdVar12[-2];
                      dVar45 = pdVar12[-1];
                      uVar13 = uVar11 + uVar36 & 0xffffffff;
                      dVar47 = *pdVar12;
                      *(double *)(puVar30 + uVar13 * 6 + 0xc) = dVar47;
                      *(double *)(puVar30 + uVar13 * 6 + 8) = dVar46;
                      *(double *)(puVar30 + uVar13 * 6 + 10) = dVar45;
                      fVar41 = (float)puVar30[0x40];
                      uVar36 = puVar30[0x3e];
                      iVar14 = (int)uVar11;
                      uVar11 = uVar11 + 1;
                      *(undefined8 *)
                       (lVar25 + uVar20 * 0x1e8 + (ulong)(iVar14 + uVar36) * 8 + 0x138) = uVar37;
                      puVar30[0x40] =
                           (uint)(fVar41 + (float)SQRT((dVar46 - dVar44) * (dVar46 - dVar44) +
                                                       (dVar45 - dVar43) * (dVar45 - dVar43) +
                                                       (dVar47 - dVar28) * (dVar47 - dVar28)));
                      pdVar12 = pdVar12 + 3;
                      dVar28 = dVar47;
                      dVar43 = dVar45;
                      dVar44 = dVar46;
                    } while (uVar11 < puVar8[0x3e]);
                  }
                }
                *(undefined8 *)(puVar30 + 0x38) = uVar38;
                *(double *)(puVar30 + 0x3a) = dVar26;
                *(double *)(puVar30 + 0x3c) = dVar33;
                uVar36 = puVar8[0x3e] + uVar36;
                if (7 < uVar36) {
                  uVar36 = 8;
                }
                puVar30[0x3e] = uVar36;
                fVar41 = (float)puVar8[0x42];
                if ((float)puVar8[0x42] <= (float)puVar30[0x42]) {
                  fVar41 = (float)puVar30[0x42];
                }
                puVar30[0x42] = (uint)fVar41;
                fVar41 = (float)puVar8[0x43];
                if ((float)puVar8[0x43] <= (float)puVar30[0x43]) {
                  fVar41 = (float)puVar30[0x43];
                }
                dVar26 = (double)(ulong)puVar30[0x44];
                puVar30[0x43] = (uint)fVar41;
                uVar36 = NEON_fminnm(puVar8[0x44],puVar30[0x44]);
                puVar30[0x44] = uVar36;
                uVar36 = *puVar8;
                if (uVar36 != 0) {
                  if (*puVar30 != 0) {
                    uVar36 = (((*puVar30 * 0x1000193 ^ uVar36 & 0xff) * 0x1000193 ^
                              uVar36 >> 8 & 0xff) * 0x1000193 ^ uVar36 >> 0x10 & 0xff) * 0x1000193 ^
                             uVar36 >> 0x18;
                  }
                  *puVar30 = uVar36;
                }
                uVar11 = uVar21;
                if (*puVar17 - 1 <= uVar21) goto LAB__text__0052f008;
              }
              local_e8 = (double)FUN__text__0052acf0(puVar30,&local_e8,plVar22[uVar21],
                                                     *(undefined8 *)
                                                      (*(long *)(lVar24 + uVar16 * 0x90 + uVar11 * 8
                                                                + 0x40) + 0x78),plVar22[uVar11]);
              uVar11 = uVar21;
              local_e0 = dVar26;
              local_d8 = dVar33;
            } while (uVar21 < *puVar17 - 1);
          }
          else {
            uVar21 = 1;
          }
LAB__text__0052f008:
          FUN__text__0052acf0(puVar30,&local_e8,&local_d0,
                              *(undefined8 *)
                               (*(long *)(lVar24 + uVar16 * 0x90 + (uVar21 & 0xffffffff) * 8 + 0x40)
                               + 0x78),plVar22[uVar21 & 0xffffffff]);
          fVar42 = *pfVar4;
          fVar41 = (float)puVar30[0x42];
          if ((float)puVar30[0x42] <= fVar42) {
            fVar41 = fVar42;
          }
          puVar30[0x42] = (uint)fVar41;
          *(double *)(puVar30 + 0x3a) = dStack_c8;
          *(double *)(puVar30 + 0x3c) = local_c0;
          *(undefined8 *)(puVar30 + 0x38) = local_d0;
          FUN__text__0052b470(0,0,puVar30,&local_100,param_11);
        }
        else {
          iVar14 = uVar36 + (uVar36 >> 1);
          if (uVar36 == 0) {
            iVar14 = 1;
          }
          uVar36 = iVar14 + uVar36;
          if (lVar25 == 0) {
            lVar25 = FUN__text__00400f90(9,(ulong)uVar36 * 0x1e8,0x10);
            if (lVar25 != 0) {
              lVar9 = *plVar1;
              if ((lVar9 != 0) && (lVar9 != lVar25)) {
                if (uVar40 != 0) {
                  if (uVar40 == 1) {
                    lVar34 = 0;
                  }
                  else {
                    lVar9 = 0;
                    lVar34 = 0;
                    do {
                      puVar31 = (undefined4 *)(lVar25 + lVar9);
                      *puVar31 = 0;
                      memset(puVar31 + 2,0,0x108);
                      puVar31[0x44] = 0x42c80000;
                      *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0x45) = 0;
                      *(undefined8 *)(puVar31 + 0x47) = 0;
                      *(undefined8 *)(puVar31 + 0x49) = 0;
                      *(undefined8 *)(puVar31 + 0x4b) = 0;
                      memcpy(puVar31,(void *)(*plVar1 + lVar9),0x1e8);
                      puVar31[0x7a] = 0;
                      memset(puVar31 + 0x7c,0,0x108);
                      puVar31[0xbe] = 0x42c80000;
                      *(undefined8 *)(puVar31 + 200) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xca) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xcc) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xce) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd0) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd2) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd4) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd6) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xd8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xda) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xdc) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xde) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe0) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe2) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe4) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xe6) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar31 + 0xbf) = 0;
                      *(undefined8 *)(puVar31 + 0xc1) = 0;
                      *(undefined8 *)(puVar31 + 0xc3) = 0;
                      *(undefined8 *)(puVar31 + 0xc5) = 0;
                      memcpy(puVar31 + 0x7a,(void *)(*plVar1 + lVar9 + 0x1e8),0x1e8);
                      lVar9 = lVar9 + 0x3d0;
                      lVar34 = lVar34 + 2;
                    } while ((ulong)(uVar40 >> 1) * 0x3d0 != lVar9);
                  }
                  if ((uVar40 & 1) != 0) {
                    puVar31 = (undefined4 *)(lVar25 + lVar34 * 0x1e8);
                    *puVar31 = 0;
                    memset(puVar31 + 2,0,0x108);
                    puVar31[0x44] = 0x42c80000;
                    *(undefined8 *)(puVar31 + 0x4e) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x52) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x54) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x56) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x5a) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x5c) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x5e) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x62) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 100) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x66) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x6a) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x6c) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar31 + 0x45) = 0;
                    *(undefined8 *)(puVar31 + 0x47) = 0;
                    *(undefined8 *)(puVar31 + 0x49) = 0;
                    *(undefined8 *)(puVar31 + 0x4b) = 0;
                    memcpy(puVar31,(void *)(*plVar1 + lVar34 * 0x1e8),0x1e8);
                  }
                  lVar9 = *plVar1;
                }
                FUN__text__00400fc0(9,lVar9);
              }
              goto LAB__text__0052f314;
            }
          }
          else {
            lVar25 = FUN__text__00400fb0(9,lVar25,(ulong)uVar36 * 0x1e8,0x10);
            if (lVar25 != 0) {
LAB__text__0052f314:
              param_14[6] = lVar25;
              *(uint *)((long)param_14 + 0x3c) = uVar36;
              if (uVar40 < uVar36) {
                uVar40 = *(uint *)(param_14 + 7);
                *(uint *)(param_14 + 7) = uVar40 + 1;
                goto LAB__text__0052f334;
              }
            }
          }
        }
LAB__text__0052f090:
        local_140 = local_140 + 0x46;
        local_148 = local_148 + 0x23;
      } while (local_140 !=
               (uint *)(*(long *)(lVar10 + 0x30) + (ulong)*(uint *)(lVar10 + 0x38) * 0x118));
    }
LAB__text__0052ef90:
    local_160 = local_160 + 0x46;
    local_198 = local_198 + 0x23;
  } while (local_160 != (uint *)(puVar23[7] + (ulong)(uint)puVar23[8] * 0x118));
LAB__text__0052ecb4:
  lVar32 = lVar32 + 0x90;
  uVar16 = uVar16 + 1;
  if (*(uint *)(param_8 + 1) <= uVar16) {
    if (*(uint *)(param_8 + 1) == 0) {
      return;
    }
    if ((int)param_14[7] == 0) {
      (**(code **)(*param_14 + 0x10))(param_14);
      *(undefined2 *)((long)param_14 + 0x29) = 0x100;
      return;
    }
    return;
  }
  goto LAB__text__0052eccc;
}


