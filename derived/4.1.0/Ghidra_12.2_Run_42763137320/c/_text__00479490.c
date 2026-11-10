/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00479490; name: FUN_.text__00479490
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00479490(long *param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long **pplVar26;
  long *plVar27;
  long **pplVar28;
  float *pfVar29;
  long lVar30;
  undefined8 *puVar31;
  uint uVar32;
  long *plVar33;
  undefined8 *puVar34;
  undefined4 *puVar35;
  undefined8 *puVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  long *local_c0;
  long *local_b8;
  long local_b0;
  undefined4 *puStack_a8;
  long local_a0;
  long **pplStack_98;
  long local_90;
  ulong uStack_88;
  
  FUN__text__0047a020();
  if ((*(ushort *)((long)param_1 + 0x19c) & 7) == 2) {
    lVar14 = FUN__text__0044a594(param_1[1]);
    uVar8 = *(uint *)(lVar14 + 0x18);
    plVar27 = param_1 + 0x35;
    uVar32 = *(uint *)(param_1 + 0x36);
    if (uVar32 <= uVar8) {
      iVar13 = uVar8 - *(uint *)((long)param_1 + 0x1b4);
      if ((*(uint *)((long)param_1 + 0x1b4) <= uVar8 && iVar13 != 0) &&
         (uVar15 = FUN__text__00451a80(plVar27,iVar13), (uVar15 & 1) == 0)) {
        return 0;
      }
      if ((uVar32 < uVar8) && (lVar25 = *plVar27, lVar25 != 0)) {
        lVar21 = ~(ulong)uVar32 + (ulong)uVar8;
        lVar30 = (ulong)uVar32 * 0x88 + 0x80;
        while( true ) {
          if (lVar25 != 0) {
            puVar35 = (undefined4 *)(lVar25 + lVar30);
            *(undefined8 *)(puVar35 + -0x14) = 0;
            *(undefined8 *)(puVar35 + -0x12) = 0x3f80000000000000;
            *(undefined8 *)(puVar35 + -0xc) = 0;
            puVar35[-10] = 0;
            *(undefined8 *)(puVar35 + -9) = 0x3f80000042c80000;
            *(undefined8 *)(puVar35 + -7) = 0xffffffff;
            *puVar35 = 0;
            *(undefined8 *)(puVar35 + -0x10) = 0x3f8000003f800000;
            *(undefined8 *)(puVar35 + -0xe) = 0;
            *(undefined8 *)(puVar35 + -4) = 0;
            *(undefined8 *)(puVar35 + -2) = 0x3f800000;
          }
          if (lVar21 == 0) break;
          lVar25 = *plVar27;
          lVar21 = lVar21 + -1;
          lVar30 = lVar30 + 0x88;
        }
      }
    }
    *(uint *)(param_1 + 0x36) = uVar8;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB__text__00479be8;
    plVar33 = *(long **)(lVar14 + 0x10);
    iVar13 = 0;
    uVar46 = 0x501502f9;
    puVar36 = (undefined8 *)*plVar27;
    do {
      lVar30 = *plVar33;
      lVar25 = FUN__text__0047d7d0(lVar30);
      if (lVar25 != 0) {
        plVar18 = *(long **)(*(long *)(param_1[1] + 8) + 0x28);
        uVar8 = *(uint *)(*(long *)(param_1[1] + 8) + 0x30);
        plVar27 = plVar18;
        if (uVar8 == 0) {
LAB__text__00479684:
          if ((plVar27 == plVar18 + (ulong)uVar8 * 3) || ((int)plVar27[2] == 0))
          goto LAB__text__004795c0;
          pfVar29 = (float *)plVar27[1];
          fVar40 = *pfVar29;
          fVar49 = pfVar29[1];
          fVar47 = pfVar29[2];
          fVar48 = pfVar29[3];
        }
        else {
          lVar21 = (ulong)uVar8 * 0x18;
          do {
            if (*plVar27 == lVar30) goto LAB__text__00479684;
            plVar27 = plVar27 + 3;
            lVar21 = lVar21 + -0x18;
          } while (lVar21 != 0);
LAB__text__004795c0:
          fVar47 = 0.0;
          fVar48 = 100.0;
          fVar49 = 0.0;
          fVar40 = 0.0;
        }
        uVar20 = *(undefined8 *)(lVar25 + 0x68);
        *puVar36 = *(undefined8 *)(lVar25 + 0x60);
        puVar36[1] = uVar20;
        uVar20 = *(undefined8 *)(lVar25 + 0x70);
        uVar7 = *(undefined8 *)(lVar25 + 0x78);
        uVar6 = *(undefined8 *)(lVar25 + 0x80);
        uVar19 = *(undefined8 *)(lVar25 + 0x88);
        *(float *)(puVar36 + 0xb) = fVar47;
        *(float *)((long)puVar36 + 0x5c) = fVar48;
        puVar36[10] = 0;
        puVar36[0xe] = lVar30;
        puVar36[4] = uVar6;
        puVar36[5] = uVar19;
        *(undefined4 *)((long)puVar36 + 100) = 0xffffffff;
        *(int *)(puVar36 + 0xd) = iVar13;
        puVar36[2] = uVar20;
        puVar36[3] = uVar7;
        *(float *)((long)puVar36 + 0x4c) = fVar49 * 100.0;
        *(float *)(puVar36 + 9) = fVar40 * 100.0;
      }
      plVar33 = plVar33 + 1;
      puVar36 = puVar36 + 0x11;
      iVar13 = iVar13 + 1;
    } while (plVar33 != (long *)(*(long *)(lVar14 + 0x10) + (ulong)*(uint *)(lVar14 + 0x18) * 8));
  }
  else if ((*(ushort *)((long)param_1 + 0x19c) >> 7 & 1) == 0) {
    lVar14 = param_1[1];
    plVar27 = *(long **)(lVar14 + 0x18);
    if (plVar27 == (long *)0x0) {
      plVar27 = (long *)FUN__text__00400f80(4,0x50);
      if (plVar27 != (long *)0x0) {
        plVar27[1] = 0;
        plVar27[2] = 0;
        *plVar27 = 0;
        plVar27[5] = 0;
        plVar27[8] = 0;
        plVar27[9] = 0;
        plVar27[6] = 0;
        plVar27[7] = 0;
        piVar12 = _DAT_008a3fa0;
        piVar3 = *(int **)(_DAT_008a3fa0 + 2);
        lVar25 = *(long *)(_DAT_008a3fa0 + 4);
        plVar27[3] = (long)piVar3;
        plVar27[4] = 0;
        piVar1 = piVar12;
        if (lVar25 != 0) {
          piVar1 = piVar3;
        }
        *(long **)(piVar12 + 2) = plVar27;
        *(long **)(piVar1 + 4) = plVar27;
        *piVar12 = *piVar12 + 1;
        plVar27[4] = 0;
        plVar27[5] = 0;
        plVar27[6] = 0;
        plVar27[7] = 0;
        plVar27[8] = 0;
        *(undefined2 *)(plVar27 + 9) = 0;
        *plVar27 = (long)&DAT_00889e18;
        *(undefined1 *)((long)plVar27 + 0x4a) = 1;
        *(long **)(lVar14 + 0x18) = plVar27;
        plVar27[1] = lVar14;
        iVar13 = (**(code **)(*plVar27 + 0x10))(plVar27,*(undefined8 *)(lVar14 + 0x58));
        if (iVar13 == 1) goto LAB__text__004796bc;
        (**(code **)*plVar27)(plVar27);
        FUN__text__00400fc0(4,plVar27);
        *(undefined8 *)(lVar14 + 0x18) = 0;
      }
LAB__text__00479be8:
      uVar46 = 0x501502f9;
    }
    else {
LAB__text__004796bc:
      uVar46 = FUN__text__00493300(plVar27,param_1 + 0x35,param_1[0x3b]);
    }
  }
  else {
    if (((*(ushort *)(param_1 + 0x41) >> 3 & 1) == 0) &&
       (iVar13 = FUN__text__00479300(param_1), iVar13 != 1)) {
      return 0;
    }
    uVar8 = *(uint *)(param_1 + 0x38);
    uVar15 = (ulong)uVar8;
    lVar14 = FUN__text__0044a594(param_1[1]);
    plVar27 = param_1 + 0x35;
    uVar32 = *(uint *)(param_1 + 0x36);
    uVar8 = *(int *)(lVar14 + 0x18) * uVar8;
    if (uVar32 <= uVar8) {
      iVar13 = uVar8 - *(uint *)((long)param_1 + 0x1b4);
      if ((*(uint *)((long)param_1 + 0x1b4) <= uVar8 && iVar13 != 0) &&
         (uVar16 = FUN__text__00451a80(plVar27,iVar13), (uVar16 & 1) == 0)) {
        return 0;
      }
      if ((uVar32 < uVar8) && (lVar25 = *plVar27, lVar25 != 0)) {
        lVar21 = ~(ulong)uVar32 + (ulong)uVar8;
        lVar30 = (ulong)uVar32 * 0x88 + 0x80;
        while( true ) {
          if (lVar25 != 0) {
            puVar35 = (undefined4 *)(lVar25 + lVar30);
            *(undefined8 *)(puVar35 + -0x14) = 0;
            *(undefined8 *)(puVar35 + -0x12) = 0x3f80000000000000;
            *(undefined8 *)(puVar35 + -0xc) = 0;
            puVar35[-10] = 0;
            *(undefined8 *)(puVar35 + -9) = 0x3f80000042c80000;
            *(undefined8 *)(puVar35 + -7) = 0xffffffff;
            *puVar35 = 0;
            *(undefined8 *)(puVar35 + -0x10) = 0x3f8000003f800000;
            *(undefined8 *)(puVar35 + -0xe) = 0;
            *(undefined8 *)(puVar35 + -4) = 0;
            *(undefined8 *)(puVar35 + -2) = 0x3f800000;
          }
          if (lVar21 == 0) break;
          lVar25 = *plVar27;
          lVar21 = lVar21 + -1;
          lVar30 = lVar30 + 0x88;
        }
      }
    }
    pplVar28 = &local_c0 + uVar15 * -2;
    *(uint *)(param_1 + 0x36) = uVar8;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB__text__00479be8;
    local_c0 = &local_a0 + uVar15 * -2;
    puVar36 = *(undefined8 **)(lVar14 + 0x10);
    lVar25 = -(uVar15 & 0xfffffffe);
    puVar31 = (undefined8 *)*plVar27;
    local_b8 = &local_b0 + uVar15 * -2;
    local_b0 = uVar15 * 0x38;
    puStack_a8 = (undefined4 *)(&local_b8 + uVar15 * 0xfffffffffffffffe);
    uVar46 = 0x501502f9;
    local_a0 = lVar25;
    pplStack_98 = pplVar28;
    local_90 = lVar14;
    uStack_88 = uVar15;
    do {
      lVar30 = FUN__text__0047d7d0(*puVar36);
      if (lVar30 != 0) {
        plVar33 = *(long **)(*(long *)(param_1[1] + 8) + 0x28);
        uVar8 = *(uint *)(*(long *)(param_1[1] + 8) + 0x30);
        uVar32 = (uint)uVar15;
        plVar27 = plVar33;
        if (uVar8 == 0) {
LAB__text__00479894:
          plVar18 = plVar27 + 1;
          if (plVar27 == plVar33 + (ulong)uVar8 * 3) goto LAB__text__004798d0;
          uVar8 = *(uint *)(plVar27 + 2);
          uVar16 = (ulong)uVar8;
          if (uVar8 == 0) goto LAB__text__004798d0;
          uVar11 = uVar8;
          if (uVar32 <= uVar8) {
            uVar11 = uVar32;
          }
          if (uVar11 != 0) {
            if (uVar11 < 4) {
              lVar22 = 0;
            }
            else {
              lVar21 = 0;
              lVar22 = 0;
              do {
                puVar34 = (undefined8 *)((long)pplVar28 + lVar21);
                lVar22 = lVar22 + 4;
                uVar20 = ((undefined8 *)(*plVar18 + lVar21))[1];
                *puVar34 = *(undefined8 *)(*plVar18 + lVar21);
                puVar34[1] = uVar20;
                uVar20 = *(undefined8 *)(*plVar18 + lVar21 + 0x18);
                puVar34[2] = *(undefined8 *)(*plVar18 + lVar21 + 0x10);
                puVar34[3] = uVar20;
                uVar20 = *(undefined8 *)(*plVar18 + lVar21 + 0x28);
                puVar34[4] = *(undefined8 *)(*plVar18 + lVar21 + 0x20);
                puVar34[5] = uVar20;
                lVar4 = *plVar18 + lVar21;
                lVar21 = lVar21 + 0x40;
                uVar20 = *(undefined8 *)(lVar4 + 0x38);
                puVar34[6] = *(undefined8 *)(lVar4 + 0x30);
                puVar34[7] = uVar20;
              } while (((ulong)uVar11 & 0xfffffffc) * 0x10 != lVar21);
            }
            uVar24 = (ulong)uVar11 & 3;
            if ((uVar11 & 3) != 0) {
              lVar22 = lVar22 << 4;
              do {
                puVar34 = (undefined8 *)((long)pplVar28 + lVar22);
                uVar24 = uVar24 - 1;
                puVar5 = (undefined8 *)(*plVar18 + lVar22);
                lVar22 = lVar22 + 0x10;
                uVar20 = puVar5[1];
                *puVar34 = *puVar5;
                puVar34[1] = uVar20;
              } while (uVar24 != 0);
            }
          }
          if (uVar8 < uVar32) {
            uVar23 = uVar32 - uVar8 & 3;
            if (uVar23 != 0) {
              lVar21 = uVar16 * 2;
              uVar16 = uVar16 + (uVar23 - 1) + 1;
              pplVar26 = pplVar28 + lVar21;
              do {
                uVar23 = uVar23 - 1;
                puVar34 = (undefined8 *)(*plVar18 + (ulong)(uVar11 - 1) * 0x10);
                plVar27 = (long *)puVar34[1];
                *pplVar26 = (long *)*puVar34;
                pplVar26[1] = plVar27;
                pplVar26 = pplVar26 + 2;
              } while (uVar23 != 0);
            }
            if (2 < uVar32 + ~uVar8) {
              iVar13 = uVar32 - (int)uVar16;
              plVar27 = local_c0 + uVar16 * 2;
              do {
                lVar22 = (ulong)(uVar11 - 1) * 0x10;
                iVar13 = iVar13 + -4;
                lVar21 = ((long *)(*plVar18 + lVar22))[1];
                plVar27[-4] = *(long *)(*plVar18 + lVar22);
                plVar27[-3] = lVar21;
                lVar21 = ((long *)(*plVar18 + lVar22))[1];
                plVar27[-2] = *(long *)(*plVar18 + lVar22);
                plVar27[-1] = lVar21;
                lVar21 = ((long *)(*plVar18 + lVar22))[1];
                *plVar27 = *(long *)(*plVar18 + lVar22);
                plVar27[1] = lVar21;
                lVar21 = ((long *)(*plVar18 + lVar22))[1];
                plVar27[2] = *(long *)(*plVar18 + lVar22);
                plVar27[3] = lVar21;
                plVar27 = plVar27 + 8;
              } while (iVar13 != 0);
            }
          }
        }
        else {
          lVar21 = (ulong)uVar8 * 0x18;
          do {
            if (*plVar27 == *(long *)(*(long *)(lVar30 + 8) + 0x58)) goto LAB__text__00479894;
            plVar27 = plVar27 + 3;
            lVar21 = lVar21 + -0x18;
          } while (lVar21 != 0);
LAB__text__004798d0:
          if (uVar32 == 0) goto LAB__text__00479820;
          if (uVar32 == 1) {
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            plVar27 = local_b8;
            do {
              lVar21 = lVar21 + -2;
              plVar27[-2] = 0;
              plVar27[-1] = 0x42c8000000000000;
              *plVar27 = 0;
              plVar27[1] = 0x42c8000000000000;
              plVar27 = plVar27 + 4;
            } while (lVar25 != lVar21);
            lVar21 = -lVar21;
          }
          if ((uVar15 & 1) != 0) {
            pplVar28[lVar21 * 2] = (long *)0x0;
            (pplVar28 + lVar21 * 2)[1] = (long *)0x42c8000000000000;
          }
        }
        if (uVar32 != 0) {
          iVar13 = 0;
          puVar34 = (undefined8 *)param_1[0x37];
          puVar35 = puStack_a8;
          lVar14 = local_b0;
          do {
            uVar6 = puVar34[5];
            uVar39 = *(undefined4 *)(puVar34 + 6);
            uVar20 = puVar34[2];
            uVar7 = puVar34[3];
            uVar19 = *(undefined8 *)(*(long *)(lVar30 + 8) + 0x58);
            puVar31[4] = puVar34[4];
            puVar31[5] = uVar6;
            puVar31[2] = uVar20;
            puVar31[3] = uVar7;
            uVar20 = puVar34[1];
            *puVar31 = *puVar34;
            puVar31[1] = uVar20;
            *(float *)((long)puVar31 + 0x4c) = (float)puVar35[-1] * 100.0;
            *(float *)(puVar31 + 9) = (float)puVar35[-2] * 100.0;
            *(undefined4 *)(puVar31 + 0xb) = *puVar35;
            uVar37 = puVar35[1];
            puVar31[10] = 0;
            puVar31[0xe] = uVar19;
            *(undefined4 *)((long)puVar31 + 100) = uVar39;
            *(int *)(puVar31 + 0xd) = iVar13;
            *(undefined4 *)((long)puVar31 + 0x5c) = uVar37;
            uVar39 = FUN__text__00480e64(lVar30,*(undefined8 *)(param_1[1] + 8),puVar31);
            uVar46 = NEON_fminnm(uVar39,uVar46);
            puVar31 = puVar31 + 0x11;
            lVar14 = lVar14 + -0x38;
            puVar35 = puVar35 + 4;
            iVar13 = iVar13 + 1;
            puVar34 = puVar34 + 7;
          } while (lVar14 != 0);
          pplVar28 = pplStack_98;
          uVar15 = uStack_88;
          lVar14 = local_90;
          lVar25 = local_a0;
        }
      }
LAB__text__00479820:
      puVar36 = puVar36 + 1;
    } while (puVar36 !=
             (undefined8 *)(*(long *)(lVar14 + 0x10) + (ulong)*(uint *)(lVar14 + 0x18) * 8));
  }
  if (((*(ushort *)((long)param_1 + 0x19c) & 7) - 1 < 2) && (lVar14 = param_1[0x39], lVar14 != 0)) {
    if ((param_1[0x2a] != 0) &&
       (((uVar8 = *(uint *)(lVar14 + 0x30), FUN__text__0047d158(param_1[0x2a],uVar8 >> 0x1f),
         (int)uVar8 < 0 && ((*(byte *)(param_1[0x2a] + 0x28) >> 1 & 1) != 0)) &&
        (uVar15 = FUN__text__0047cd40(), (uVar15 & 1) != 0)))) {
      FUN__text__004786dc(param_1);
    }
    if ((int)param_1[0x36] == 0) {
      uVar46 = 0x501502f9;
    }
    else {
      uVar46 = 0x501502f9;
      pfVar29 = (float *)param_1[0x35];
      do {
        lVar25 = FUN__text__0047d7d0(*(undefined8 *)(pfVar29 + 0x1c));
        if (lVar25 != 0) {
          fVar48 = *(float *)(lVar14 + 4);
          fVar49 = *(float *)(lVar14 + 8);
          fVar47 = *(float *)(lVar14 + 0xc);
          if ((*(ushort *)((long)param_1 + 0x19c) & 7) == 2) {
            if (((*(ushort *)((long)param_1 + 0x19c) >> 8 & 1) == 0) ||
               (lVar30 = param_1[0x2a], lVar30 == 0)) {
              uVar20 = *(undefined8 *)(lVar25 + 0x60);
              pfVar29[2] = *(float *)(lVar25 + 0x68);
              *(undefined8 *)pfVar29 = uVar20;
              uVar20 = *(undefined8 *)(lVar25 + 0x6c);
              pfVar29[5] = *(float *)(lVar25 + 0x74);
              *(undefined8 *)(pfVar29 + 3) = uVar20;
              fVar47 = *(float *)(lVar14 + 4);
              fVar40 = *(float *)(lVar14 + 8);
              fVar38 = *(float *)(lVar14 + 0xc);
              fVar48 = *(float *)(lVar25 + 0x3c) * fVar47 + fVar40 * *(float *)(lVar25 + 0x48) +
                       fVar38 * *(float *)(lVar25 + 0x54);
              fVar49 = *(float *)(lVar25 + 0x40) * fVar47 + fVar40 * *(float *)(lVar25 + 0x4c) +
                       fVar38 * *(float *)(lVar25 + 0x58);
              fVar47 = *(float *)(lVar25 + 0x44) * fVar47 + fVar40 * *(float *)(lVar25 + 0x50) +
                       fVar38 * *(float *)(lVar25 + 0x5c);
            }
            else {
              plVar33 = *(long **)(lVar30 + 0x88);
              uVar8 = *(uint *)(lVar30 + 0x90);
              plVar27 = plVar33;
              if (uVar8 == 0) {
LAB__text__00479de8:
                if (plVar27 == plVar33 + (ulong)uVar8 * 6) goto LAB__text__00479dfc;
                pfVar17 = (float *)(plVar27 + 1);
              }
              else {
                lVar30 = (ulong)uVar8 * 0x30;
                do {
                  if (*plVar27 == *(long *)(pfVar29 + 0x1c)) goto LAB__text__00479de8;
                  plVar27 = plVar27 + 6;
                  lVar30 = lVar30 + -0x30;
                } while (lVar30 != 0);
LAB__text__00479dfc:
                pfVar17 = (float *)FUN__text__0047d1c0();
                if (pfVar17 == (float *)0x0) goto LAB__text__00479e50;
                fVar48 = *(float *)(lVar14 + 4);
                fVar49 = *(float *)(lVar14 + 8);
                fVar47 = *(float *)(lVar14 + 0xc);
              }
              fVar41 = pfVar17[1] * fVar48;
              fVar42 = pfVar17[3];
              fVar44 = pfVar17[7];
              fVar43 = pfVar17[2] * fVar48;
              fVar48 = *pfVar17 * fVar48 + fVar49 * fVar42 + fVar47 * pfVar17[6];
              fVar38 = pfVar17[4];
              fVar45 = pfVar17[5];
              fVar40 = fVar49 * fVar45;
              fVar49 = fVar41 + fVar49 * fVar38 + fVar47 * fVar44;
              fVar41 = pfVar17[8];
              *pfVar29 = pfVar17[6];
              pfVar29[1] = fVar44;
              pfVar29[4] = fVar38;
              pfVar29[5] = fVar45;
              pfVar29[2] = fVar41;
              pfVar29[3] = fVar42;
              fVar47 = fVar43 + fVar40 + fVar47 * fVar41;
            }
LAB__text__00479e50:
            *(double *)(pfVar29 + 10) = *(double *)(pfVar29 + 10) + (double)fVar47;
            *(double *)(pfVar29 + 6) = *(double *)(pfVar29 + 6) + (double)fVar48;
            *(double *)(pfVar29 + 8) = *(double *)(pfVar29 + 8) + (double)fVar49;
            uVar39 = FUN__text__00480e64(lVar25,*(undefined8 *)(param_1[1] + 8),pfVar29);
            uVar46 = NEON_fminnm(uVar39,uVar46);
            pfVar29[0xd] = pfVar29[0xe];
          }
          else {
            fVar40 = pfVar29[4];
            fVar38 = pfVar29[5];
            fVar43 = pfVar29[2];
            fVar44 = pfVar29[3];
            fVar42 = *pfVar29;
            fVar41 = pfVar29[1];
            *(double *)(pfVar29 + 10) =
                 *(double *)(pfVar29 + 10) +
                 (double)(fVar49 * fVar38 + fVar48 * (fVar44 * fVar41 - fVar42 * fVar40) +
                         fVar43 * fVar47);
            *(double *)(pfVar29 + 6) =
                 *(double *)(pfVar29 + 6) +
                 (double)((fVar43 * fVar40 - fVar41 * fVar38) * fVar48 + fVar44 * fVar49 +
                         fVar42 * fVar47);
            *(double *)(pfVar29 + 8) =
                 *(double *)(pfVar29 + 8) +
                 (double)(fVar49 * fVar40 + fVar48 * (fVar42 * fVar38 - fVar44 * fVar43) +
                         fVar41 * fVar47);
            uVar39 = FUN__text__00480e64(lVar25,*(undefined8 *)(param_1[1] + 8),pfVar29);
            uVar46 = NEON_fminnm(uVar39,uVar46);
          }
        }
        pfVar29 = pfVar29 + 0x22;
      } while (pfVar29 != (float *)(param_1[0x35] + (ulong)*(uint *)(param_1 + 0x36) * 0x88));
    }
  }
  lVar14 = DAT_00ae9a38;
  lVar25 = param_1[0x34];
  if (lVar25 == 0) {
    uVar8 = *(uint *)((long)param_1 + 0x18c);
    if (uVar8 == 0) goto LAB__text__00479ec8;
    piVar1 = (int *)(DAT_00ae9a38 + 0x2d0);
    pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x2e0);
    while( true ) {
      while (iVar13 = *piVar1, -1 < iVar13) {
        while (*piVar1 == iVar13) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar13 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB__text__00479f64;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__00479f64:
    uVar32 = *(uint *)(lVar14 + 0x338);
    if (uVar32 == 0) {
      lVar25 = 0;
    }
    else {
      uVar11 = 0;
      if (uVar32 != 0) {
        uVar11 = uVar8 / uVar32;
      }
      lVar25 = *(long *)(*(long *)(lVar14 + 0x330) + (ulong)(uVar8 - uVar11 * uVar32) * 8);
      if (lVar25 != 0) {
LAB__text__00479f80:
        if (*(uint *)(lVar25 + 0x10) != uVar8) goto code_r0x00479f8c;
        piVar3 = (int *)(lVar25 + 0x14);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = *piVar3 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
    }
LAB__text__00479fbc:
    while (iVar13 = *piVar1, -1 < iVar13) {
      while (*piVar1 == iVar13) {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 == '\0') {
          if ((iVar13 + -1 == 0) && (0 < *(int *)(lVar14 + 0x300))) {
            nn::os::SignalEvent((EventType *)(lVar14 + 0x308));
          }
          param_1[0x34] = lVar25;
          goto joined_r0x0047a004;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
    param_1[0x34] = lVar25;
joined_r0x0047a004:
    if (lVar25 == 0) goto LAB__text__00479ec8;
  }
  (**(code **)(*param_1 + 0x90))(uVar46,param_1,lVar25);
LAB__text__00479ec8:
  return (int)param_1[0x36];
code_r0x00479f8c:
  lVar25 = *(long *)(lVar25 + 8);
  if (lVar25 == 0) goto LAB__text__00479fbc;
  goto LAB__text__00479f80;
}


