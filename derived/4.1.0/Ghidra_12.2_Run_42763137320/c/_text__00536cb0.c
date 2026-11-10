/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00536cb0; name: FUN_.text__00536cb0
 */


bool FUN__text__00536cb0(undefined1 param_1 [16],double param_2,double param_3,long *param_4,
                        double *param_5,double *param_6,long param_7,undefined8 param_8,long param_9
                        )

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_148;
  ulong local_140;
  undefined2 local_138;
  long local_130;
  long lStack_128;
  float local_11c;
  float fStack_118;
  float local_114;
  double local_110;
  double dStack_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 *local_78;
  
  local_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  iVar12 = FUN__text__005374d0();
  if (iVar12 == 2) {
    uVar17 = *(undefined8 *)(param_7 + 0x30);
    *(undefined4 *)(param_9 + 0x40) = 0;
    plVar1 = (long *)(param_9 + 0x38);
    *(undefined8 *)(param_9 + 0x30) = uVar17;
    uVar6 = *(uint *)(param_7 + 0x40);
    iVar12 = uVar6 - *(uint *)(param_9 + 0x44);
    if ((uVar6 < *(uint *)(param_9 + 0x44) || iVar12 == 0) ||
       (uVar14 = FUN__text__0051bfc0(plVar1,iVar12), (uVar14 & 1) != 0)) {
      if ((uVar6 != 0) && (lVar21 = *plVar1, lVar21 != 0)) {
        lVar18 = 0;
        while( true ) {
          if (lVar21 != 0) {
            puVar2 = (undefined8 *)(lVar21 + lVar18);
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
          }
          if ((ulong)uVar6 * 0x28 + -0x28 == lVar18) break;
          lVar21 = *plVar1;
          lVar18 = lVar18 + 0x28;
        }
      }
      *(uint *)(param_9 + 0x40) = uVar6;
      if (*(int *)(param_7 + 0x40) != 0) {
        lVar21 = 0;
        uVar14 = 0;
        do {
          uVar14 = uVar14 + 1;
          puVar2 = (undefined8 *)(*(long *)(param_7 + 0x38) + lVar21);
          puVar3 = (undefined8 *)(*plVar1 + lVar21);
          lVar21 = lVar21 + 0x28;
          uVar22 = puVar2[4];
          uVar17 = puVar2[1];
          uVar5 = puVar2[2];
          puVar3[3] = puVar2[3];
          puVar3[4] = uVar22;
          puVar3[1] = uVar17;
          puVar3[2] = uVar5;
          *puVar3 = *puVar2;
        } while (uVar14 < *(uint *)(param_7 + 0x40));
      }
    }
    uVar17 = *(undefined8 *)(param_7 + 8);
    bVar11 = false;
    uVar22 = *(undefined8 *)(param_7 + 0x18);
    *(undefined8 *)(param_9 + 0x10) = *(undefined8 *)(param_7 + 0x10);
    *(undefined8 *)(param_9 + 0x18) = uVar22;
    *(undefined8 *)(param_9 + 8) = uVar17;
    uVar17 = *(undefined8 *)(param_7 + 0x20);
    *(undefined4 *)(param_9 + 0x28) = *(undefined4 *)(param_7 + 0x28);
    *(undefined8 *)(param_9 + 0x20) = uVar17;
    *(undefined4 *)(param_9 + 0x48) = *(undefined4 *)(param_7 + 0x48);
    *(undefined4 *)(param_9 + 0x4c) = 0;
    if (1 < *(uint *)(param_9 + 0x40)) {
      memmove(*(void **)(param_9 + 0x38),(void *)((long)*(void **)(param_9 + 0x38) + 0x28),
              (ulong)(*(uint *)(param_9 + 0x40) * 0x28 - 0x28));
      *(int *)(param_9 + 0x40) = *(int *)(param_9 + 0x40) + -1;
      iVar12 = FUN__text__005374d0(param_4,param_5,param_6,param_9,param_8,0,0,0);
      bVar11 = iVar12 == 0;
    }
  }
  else {
    if (iVar12 - 3U < 2) {
      pdVar4 = param_6;
      if (iVar12 != 3) {
        pdVar4 = param_5;
      }
      local_110 = *pdVar4;
      dStack_108 = pdVar4[1];
      local_100 = pdVar4[2];
      dVar27 = (double)FUN__text__00538170(uStack_f0,local_f8,&local_e8,&local_110);
      dVar10 = local_100;
      dVar9 = dStack_108;
      dVar8 = local_110;
      local_138 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1d0 = *pdVar4;
      dStack_1c8 = pdVar4[1];
      local_1c0 = pdVar4[2];
      local_d0 = *pdVar4;
      local_c8 = pdVar4[1];
      local_200 = 0;
      uStack_1f8 = 0;
      local_11c = (float)(dVar27 - local_110);
      fStack_118 = (float)(param_2 - dStack_108);
      local_1b0 = (float)(param_3 - local_100);
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_b8 = (double)local_11c;
      dStack_b0 = (double)fStack_118;
      local_a8 = (double)local_1b0;
      uStack_1b8 = CONCAT44(fStack_118,local_11c);
      local_230 = 0;
      uStack_228 = 0;
      dStack_a0 = 1.0 / local_b8;
      local_98 = 1.0 / dStack_b0;
      dStack_c0 = pdVar4[2];
      local_240 = 0;
      uStack_238 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_290 = 0;
      uStack_288 = 0;
      local_180 = uStack_f0;
      uStack_178 = local_f8;
      local_130 = 0;
      lStack_128 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_148 = 0;
      local_140 = 0x3f80000000000000;
      local_78 = &local_2a0;
      dStack_90 = 1.0 / local_a8;
      lVar21 = *(long *)(*param_4 + 0x10);
      local_114 = local_1b0;
      if (lVar21 != 0) {
        FUN__text__0053e570(*param_4 + 8,lVar21,&local_d0,&local_78);
        if ((int)local_140 != 0) {
          FUN__text__0053edf8(&local_2a0);
          local_140 = local_140 & 0xffffffff00000000;
        }
      }
      lVar21 = local_130;
      if ((char)local_138 != '\0') {
        fVar30 = *(float *)(local_130 + 0x18);
        fVar31 = *(float *)(local_130 + 0x1c);
        fVar33 = *(float *)(local_130 + 0x10);
        fVar32 = *(float *)(local_130 + 0x14);
        fVar28 = (float)(dVar9 - *(double *)(local_130 + 0x28));
        fVar26 = (float)(dVar8 - *(double *)(local_130 + 0x20));
        fVar29 = (float)(dVar10 - *(double *)(local_130 + 0x30));
        fVar34 = fVar30 * fVar26 - fVar32 * fVar28;
        fVar35 = fVar31 * fVar28 - fVar30 * fVar29;
        fVar36 = fVar32 * fVar29 - fVar31 * fVar26;
        fVar34 = fVar34 + fVar34;
        fVar35 = fVar35 + fVar35;
        fVar36 = fVar36 + fVar36;
        lVar18 = *(long *)(lStack_128 + 0x38);
        local_d0 = (double)CONCAT44(((fVar28 + fVar32 * fVar34 + fVar33 * fVar36) - fVar31 * fVar35)
                                    / *(float *)(local_130 + 0x3c),
                                    ((fVar26 - fVar30 * fVar34) + fVar33 * fVar35 + fVar31 * fVar36)
                                    / *(float *)(local_130 + 0x38));
        local_c8 = (double)CONCAT44(local_c8._4_4_,
                                    ((fVar29 + fVar33 * fVar34 + fVar30 * fVar35) - fVar32 * fVar36)
                                    / *(float *)(local_130 + 0x40));
        if (*(int *)(lVar18 + 0x30) != 0) {
          uVar14 = 0;
          plVar1 = (long *)(param_9 + 0x38);
          do {
            lVar25 = *(long *)(*(long *)(lVar18 + 0x28) + uVar14 * 8);
            if (*(char *)(lVar25 + 0x54) == '\0') {
              iVar13 = FUN__text__00516f44(lVar25,&local_d0);
              if (iVar13 < 0) {
                if (iVar13 == -1) {
                  lVar23 = *(long *)(*(long *)(lVar25 + 0x40) + 0x38);
                  if (lVar23 == lVar18) {
                    lVar23 = *(long *)(*(long *)(lVar25 + 0x48) + 0x38);
                  }
                  if (*(int *)(lVar23 + 0x30) != 0) {
                    uVar15 = 0;
                    do {
                      lVar19 = *(long *)(*(long *)(lVar23 + 0x28) + uVar15 * 8);
                      if ((lVar19 != lVar25 && *(char *)(lVar19 + 0x54) == '\0') &&
                         (iVar13 = FUN__text__00516f44(lVar19,&local_d0), -1 < iVar13)) {
                        uVar17 = *(undefined8 *)(param_7 + 0x30);
                        *(undefined4 *)(param_9 + 0x40) = 0;
                        *(undefined8 *)(param_9 + 0x30) = uVar17;
                        uVar6 = *(uint *)(param_7 + 0x40);
                        iVar7 = uVar6 - *(uint *)(param_9 + 0x44);
                        if ((uVar6 < *(uint *)(param_9 + 0x44) || iVar7 == 0) ||
                           (uVar16 = FUN__text__0051bfc0(plVar1,iVar7), (uVar16 & 1) != 0)) {
                          if ((uVar6 != 0) && (lVar24 = *plVar1, lVar24 != 0)) {
                            lVar20 = 0;
                            while( true ) {
                              if (lVar24 != 0) {
                                puVar2 = (undefined8 *)(lVar24 + lVar20);
                                *puVar2 = 0;
                                *(undefined4 *)(puVar2 + 1) = 0;
                                puVar2[2] = 0;
                                puVar2[3] = 0;
                              }
                              if ((ulong)uVar6 * 0x28 + -0x28 == lVar20) break;
                              lVar24 = *plVar1;
                              lVar20 = lVar20 + 0x28;
                            }
                          }
                          *(uint *)(param_9 + 0x40) = uVar6;
                          if (*(int *)(param_7 + 0x40) != 0) {
                            lVar24 = 0;
                            uVar16 = 0;
                            do {
                              uVar16 = uVar16 + 1;
                              puVar2 = (undefined8 *)(*(long *)(param_7 + 0x38) + lVar24);
                              puVar3 = (undefined8 *)(*plVar1 + lVar24);
                              lVar24 = lVar24 + 0x28;
                              uVar22 = puVar2[4];
                              uVar17 = puVar2[1];
                              uVar5 = puVar2[2];
                              puVar3[3] = puVar2[3];
                              puVar3[4] = uVar22;
                              puVar3[1] = uVar17;
                              puVar3[2] = uVar5;
                              *puVar3 = *puVar2;
                            } while (uVar16 < *(uint *)(param_7 + 0x40));
                          }
                        }
                        uVar17 = *(undefined8 *)(param_7 + 8);
                        uVar22 = *(undefined8 *)(param_7 + 0x18);
                        *(undefined8 *)(param_9 + 0x10) = *(undefined8 *)(param_7 + 0x10);
                        *(undefined8 *)(param_9 + 0x18) = uVar22;
                        *(undefined8 *)(param_9 + 8) = uVar17;
                        uVar17 = *(undefined8 *)(param_7 + 0x20);
                        *(undefined4 *)(param_9 + 0x28) = *(undefined4 *)(param_7 + 0x28);
                        *(undefined8 *)(param_9 + 0x20) = uVar17;
                        *(undefined4 *)(param_9 + 0x48) = *(undefined4 *)(param_7 + 0x48);
                        *(undefined4 *)(param_9 + 0x4c) = 0;
                        uVar16 = FUN__text__005382c4(param_4,iVar12,param_5,lVar19,lVar21,iVar13,
                                                     param_6,&local_11c,&local_e8,param_8,param_9);
                        if ((uVar16 & 1) != 0) {
                          return true;
                        }
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(uint *)(lVar23 + 0x30));
                  }
                }
              }
              else {
                uVar17 = *(undefined8 *)(param_7 + 0x30);
                *(undefined4 *)(param_9 + 0x40) = 0;
                *(undefined8 *)(param_9 + 0x30) = uVar17;
                uVar6 = *(uint *)(param_7 + 0x40);
                iVar7 = uVar6 - *(uint *)(param_9 + 0x44);
                if ((uVar6 < *(uint *)(param_9 + 0x44) || iVar7 == 0) ||
                   (uVar15 = FUN__text__0051bfc0(plVar1,iVar7), (uVar15 & 1) != 0)) {
                  if ((uVar6 != 0) && (lVar23 = *plVar1, lVar23 != 0)) {
                    lVar19 = 0;
                    while( true ) {
                      if (lVar23 != 0) {
                        puVar2 = (undefined8 *)(lVar23 + lVar19);
                        *puVar2 = 0;
                        *(undefined4 *)(puVar2 + 1) = 0;
                        puVar2[2] = 0;
                        puVar2[3] = 0;
                      }
                      if ((ulong)uVar6 * 0x28 + -0x28 == lVar19) break;
                      lVar23 = *plVar1;
                      lVar19 = lVar19 + 0x28;
                    }
                  }
                  *(uint *)(param_9 + 0x40) = uVar6;
                  if (*(int *)(param_7 + 0x40) != 0) {
                    lVar23 = 0;
                    uVar15 = 0;
                    do {
                      uVar15 = uVar15 + 1;
                      puVar2 = (undefined8 *)(*(long *)(param_7 + 0x38) + lVar23);
                      puVar3 = (undefined8 *)(*plVar1 + lVar23);
                      lVar23 = lVar23 + 0x28;
                      uVar22 = puVar2[4];
                      uVar17 = puVar2[1];
                      uVar5 = puVar2[2];
                      puVar3[3] = puVar2[3];
                      puVar3[4] = uVar22;
                      puVar3[1] = uVar17;
                      puVar3[2] = uVar5;
                      *puVar3 = *puVar2;
                    } while (uVar15 < *(uint *)(param_7 + 0x40));
                  }
                }
                uVar17 = *(undefined8 *)(param_7 + 8);
                uVar22 = *(undefined8 *)(param_7 + 0x18);
                *(undefined8 *)(param_9 + 0x10) = *(undefined8 *)(param_7 + 0x10);
                *(undefined8 *)(param_9 + 0x18) = uVar22;
                *(undefined8 *)(param_9 + 8) = uVar17;
                uVar17 = *(undefined8 *)(param_7 + 0x20);
                *(undefined4 *)(param_9 + 0x28) = *(undefined4 *)(param_7 + 0x28);
                *(undefined8 *)(param_9 + 0x20) = uVar17;
                *(undefined4 *)(param_9 + 0x48) = *(undefined4 *)(param_7 + 0x48);
                *(undefined4 *)(param_9 + 0x4c) = 0;
                uVar15 = FUN__text__005382c4(param_4,iVar12,param_5,lVar25,lVar21,iVar13,param_6,
                                             &local_11c,&local_e8,param_8,param_9);
                if ((uVar15 & 1) != 0) {
                  return true;
                }
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(lVar18 + 0x30));
        }
      }
    }
    else if (iVar12 == 0) {
      uVar17 = *(undefined8 *)(param_7 + 0x30);
      *(undefined4 *)(param_9 + 0x40) = 0;
      plVar1 = (long *)(param_9 + 0x38);
      *(undefined8 *)(param_9 + 0x30) = uVar17;
      uVar6 = *(uint *)(param_7 + 0x40);
      iVar12 = uVar6 - *(uint *)(param_9 + 0x44);
      if ((uVar6 < *(uint *)(param_9 + 0x44) || iVar12 == 0) ||
         (uVar14 = FUN__text__0051bfc0(plVar1,iVar12), (uVar14 & 1) != 0)) {
        if ((uVar6 != 0) && (lVar21 = *plVar1, lVar21 != 0)) {
          lVar18 = 0;
          while( true ) {
            if (lVar21 != 0) {
              puVar2 = (undefined8 *)(lVar21 + lVar18);
              *puVar2 = 0;
              *(undefined4 *)(puVar2 + 1) = 0;
              puVar2[2] = 0;
              puVar2[3] = 0;
            }
            if ((ulong)uVar6 * 0x28 + -0x28 == lVar18) break;
            lVar21 = *plVar1;
            lVar18 = lVar18 + 0x28;
          }
        }
        *(uint *)(param_9 + 0x40) = uVar6;
        if (*(int *)(param_7 + 0x40) != 0) {
          lVar21 = 0;
          uVar14 = 0;
          do {
            uVar14 = uVar14 + 1;
            puVar2 = (undefined8 *)(*(long *)(param_7 + 0x38) + lVar21);
            puVar3 = (undefined8 *)(*plVar1 + lVar21);
            lVar21 = lVar21 + 0x28;
            uVar22 = puVar2[4];
            uVar17 = puVar2[1];
            uVar5 = puVar2[2];
            puVar3[3] = puVar2[3];
            puVar3[4] = uVar22;
            puVar3[1] = uVar17;
            puVar3[2] = uVar5;
            *puVar3 = *puVar2;
          } while (uVar14 < *(uint *)(param_7 + 0x40));
        }
      }
      uVar17 = *(undefined8 *)(param_7 + 8);
      uVar22 = *(undefined8 *)(param_7 + 0x18);
      *(undefined8 *)(param_9 + 0x10) = *(undefined8 *)(param_7 + 0x10);
      *(undefined8 *)(param_9 + 0x18) = uVar22;
      *(undefined8 *)(param_9 + 8) = uVar17;
      uVar17 = *(undefined8 *)(param_7 + 0x20);
      *(undefined4 *)(param_9 + 0x28) = *(undefined4 *)(param_7 + 0x28);
      *(undefined8 *)(param_9 + 0x20) = uVar17;
      *(undefined4 *)(param_9 + 0x48) = *(undefined4 *)(param_7 + 0x48);
      *(undefined4 *)(param_9 + 0x4c) = 0;
      return true;
    }
    bVar11 = false;
  }
  return bVar11;
}


