/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047a550; name: FUN_.text__0047a550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047a550(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 local_88;
  
  plVar20 = (long *)FUN__text__0044a4e4(*(undefined8 *)(param_1 + 8));
  uVar37 = 0;
  uVar38 = 0;
  fVar36 = 0.0;
  if ((*(ushort *)(param_1 + 0x14a) & 1) != 0) {
    fVar34 = *(float *)(param_1 + 0xb0) * 0.05;
    bVar17 = false;
    bVar18 = false;
    bVar19 = false;
    if (-37.0 <= fVar34) {
      bVar17 = false;
      bVar18 = false;
      bVar19 = true;
      if (!NAN(fVar34)) {
        bVar17 = fVar34 < 37.0;
        bVar18 = fVar34 == 37.0;
        bVar19 = false;
      }
    }
    if (bVar18 || bVar17 != bVar19) {
      uVar22 = (uint)(*(float *)(param_1 + 0xb0) * 1393317.6 + 1.0653532e+09);
      fVar36 = (float)(uVar22 & 0x7fffff | 0x3f800000);
      fVar34 = (fVar36 * (fVar36 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar22 & 0xff800000);
      fVar36 = 4.0;
      if (fVar34 < 4.0) {
        fVar36 = fVar34;
      }
    }
    uVar38 = *(undefined4 *)(param_1 + 0xe4);
    uVar37 = *(undefined4 *)(param_1 + 0xe8);
    FUN__text__0047aaf0(fVar36,uVar38,uVar37,plVar20,param_2);
  }
  puVar24 = _DAT_008a4768;
  piVar15 = _DAT_008a3828;
  local_88 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x58);
  if ((*(byte *)(param_1 + 0x170) >> 3 & 1) == 0) {
    uVar22 = 1;
    puVar24 = &local_88;
  }
  else {
    if ((char)plVar20[0x1c] == '\0') {
      plVar20 = (long *)*_DAT_008a4768;
      if (plVar20 == (long *)0x0) {
        lVar1 = _DAT_008a3f88 + 0x10;
        do {
          if (plVar20 == (long *)0x0) {
            plVar20 = (long *)FUN__text__00400f80(4,0xf0);
            if (plVar20 != (long *)0x0) {
              plVar20[1] = 0;
              plVar20[2] = 0;
              piVar10 = *(int **)(piVar15 + 2);
              lVar30 = *(long *)(piVar15 + 4);
              iVar12 = *piVar15;
              plVar20[3] = (long)piVar10;
              *(long **)(piVar15 + 2) = plVar20;
              piVar7 = piVar15;
              if (lVar30 != 0) {
                piVar7 = piVar10;
              }
              *(long **)(piVar7 + 4) = plVar20;
              *(undefined2 *)(plVar20 + 0x1c) = 0x101;
              plVar20[8] = 0;
              plVar20[9] = 0;
              plVar20[0xc] = 0;
              plVar20[0xd] = 0;
              *piVar15 = iVar12 + 1;
              *plVar20 = lVar1;
              plVar20[0x12] = 0;
              plVar20[0x13] = 0;
              plVar20[0x16] = 0;
              plVar20[0x17] = 0;
              plVar20[0x1a] = 0;
              plVar20[0x1b] = 0;
            }
            *puVar24 = plVar20;
          }
        } while ((char)plVar20[0x1c] == '\0');
      }
      else if ((char)plVar20[0x1c] == '\0') {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    uVar22 = *(uint *)(plVar20 + 0xd);
    if (uVar22 == 0) goto LAB__text__0047a9d0;
    puVar24 = (undefined8 *)plVar20[0xc];
  }
  pfVar16 = _DAT_008a4f30;
  lVar30 = 0;
  lVar1 = param_1 + 0x88;
  iVar12 = *(int *)(_DAT_008a4a70 + 0x4c);
  iVar13 = *(int *)(_DAT_008a4a70 + 0xf0);
  iVar14 = *(int *)(_DAT_008a4a70 + 0x100);
  do {
    lVar3 = param_1 + lVar30 * 4;
    if (*(int *)(lVar3 + 0x104) != 0) {
      iVar29 = (int)lVar30;
      uVar31 = (ulong)(uint)(iVar12 + iVar29);
      if (*pfVar16 < *(float *)(lVar1 + uVar31 * 4)) {
        uVar32 = 0;
        do {
          if (*pfVar16 < *(float *)(lVar1 + uVar31 * 4)) {
            uVar8 = *(uint *)(param_2 + 1);
            uVar28 = (ulong)uVar8;
            uVar23 = *(uint *)((long)param_2 + 0xc);
            lVar27 = *param_2;
            if (uVar8 < uVar23) {
              *(uint *)(param_2 + 1) = uVar8 + 1;
              if (lVar27 != 0) {
LAB__text__0047a90c:
                puVar6 = (undefined8 *)(lVar27 + uVar28 * 0x20);
                *puVar6 = puVar24[uVar32];
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar3 + 0x104);
                fVar34 = *(float *)(lVar1 + uVar31 * 4);
                fVar35 = fVar34 * 0.05;
                bVar17 = false;
                bVar18 = false;
                bVar19 = false;
                if (-37.0 <= fVar35) {
                  bVar17 = false;
                  bVar18 = false;
                  bVar19 = true;
                  if (!NAN(fVar35)) {
                    bVar17 = fVar35 < 37.0;
                    bVar18 = fVar35 == 37.0;
                    bVar19 = false;
                  }
                }
                fVar35 = 0.0;
                if (bVar18 || bVar17 != bVar19) {
                  uVar23 = (uint)(fVar34 * 1393317.6 + 1.0653532e+09);
                  fVar34 = (float)(uVar23 & 0x7fffff | 0x3f800000);
                  fVar34 = (fVar34 * (fVar34 * 0.32518977 + 0.020805772) + 0.65304345) *
                           (float)(uVar23 & 0xff800000);
                  fVar35 = 4.0;
                  if (fVar34 < 4.0) {
                    fVar35 = fVar34;
                  }
                }
                *(float *)((long)puVar6 + 0xc) = fVar35;
                lVar27 = lVar27 + uVar28 * 0x20;
                *(undefined4 *)(lVar27 + 0x14) =
                     *(undefined4 *)(lVar1 + (ulong)(uint)(iVar13 + iVar29) * 4);
                uVar33 = *(undefined4 *)(lVar1 + (ulong)(uint)(iVar14 + iVar29) * 4);
                *(undefined4 *)(lVar27 + 0x10) = 2;
                *(undefined4 *)(lVar27 + 0x18) = uVar33;
              }
            }
            else {
              iVar2 = uVar23 + (uVar23 >> 1);
              if (uVar23 == 0) {
                iVar2 = 1;
              }
              uVar23 = iVar2 + uVar23;
              if (lVar27 == 0) {
                lVar27 = FUN__text__00400f80(0,(ulong)uVar23 << 5);
                if (lVar27 != 0) {
                  lVar21 = *param_2;
                  if ((lVar21 != 0) && (lVar21 != lVar27)) {
                    if (uVar8 != 0) {
                      if (uVar8 < 4) {
                        lVar25 = 0;
                      }
                      else {
                        lVar21 = 0;
                        lVar25 = 0;
                        do {
                          puVar6 = (undefined8 *)(lVar27 + lVar21);
                          lVar25 = lVar25 + -4;
                          puVar5 = (undefined8 *)(*param_2 + lVar21);
                          uVar26 = puVar5[2];
                          uVar9 = *puVar5;
                          uVar11 = puVar5[1];
                          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar5 + 3);
                          puVar6[1] = uVar11;
                          puVar6[2] = uVar26;
                          *puVar6 = uVar9;
                          lVar4 = *param_2 + lVar21;
                          uVar9 = *(undefined8 *)(lVar4 + 0x20);
                          uVar11 = *(undefined8 *)(lVar4 + 0x28);
                          uVar26 = *(undefined8 *)(lVar4 + 0x30);
                          *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar4 + 0x38);
                          puVar6[4] = uVar9;
                          puVar6[5] = uVar11;
                          puVar6[6] = uVar26;
                          lVar4 = *param_2 + lVar21;
                          uVar9 = *(undefined8 *)(lVar4 + 0x40);
                          uVar11 = *(undefined8 *)(lVar4 + 0x48);
                          uVar26 = *(undefined8 *)(lVar4 + 0x50);
                          *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(lVar4 + 0x58);
                          puVar6[9] = uVar11;
                          puVar6[10] = uVar26;
                          puVar6[8] = uVar9;
                          lVar4 = *param_2 + lVar21;
                          lVar21 = lVar21 + 0x80;
                          uVar9 = *(undefined8 *)(lVar4 + 0x60);
                          uVar11 = *(undefined8 *)(lVar4 + 0x68);
                          uVar26 = *(undefined8 *)(lVar4 + 0x70);
                          *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(lVar4 + 0x78);
                          puVar6[0xc] = uVar9;
                          puVar6[0xd] = uVar11;
                          puVar6[0xe] = uVar26;
                        } while (-lVar25 != (uVar28 & 0xfffffffc));
                        lVar25 = -lVar25;
                      }
                      if ((uVar8 & 3) != 0) {
                        uVar28 = uVar28 & 3;
                        lVar25 = lVar25 << 5;
                        do {
                          puVar6 = (undefined8 *)(lVar27 + lVar25);
                          uVar28 = uVar28 - 1;
                          puVar5 = (undefined8 *)(*param_2 + lVar25);
                          lVar25 = lVar25 + 0x20;
                          uVar26 = puVar5[2];
                          uVar9 = *puVar5;
                          uVar11 = puVar5[1];
                          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar5 + 3);
                          puVar6[1] = uVar11;
                          puVar6[2] = uVar26;
                          *puVar6 = uVar9;
                        } while (uVar28 != 0);
                      }
                      lVar21 = *param_2;
                    }
                    FUN__text__00400fc0(0,lVar21);
                  }
                  goto LAB__text__0047a8f0;
                }
              }
              else {
                lVar27 = FUN__text__00400fa0(0,lVar27);
                if (lVar27 != 0) {
LAB__text__0047a8f0:
                  *param_2 = lVar27;
                  *(uint *)((long)param_2 + 0xc) = uVar23;
                  if (uVar8 < uVar23) {
                    uVar28 = (ulong)*(uint *)(param_2 + 1);
                    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) + 1;
                    goto LAB__text__0047a90c;
                  }
                }
              }
            }
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar22);
      }
    }
    lVar30 = lVar30 + 1;
  } while (lVar30 != 4);
LAB__text__0047a9d0:
  plVar20 = *(long **)(param_1 + 0x1d8);
  if (plVar20 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0047aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar20 + 0x28))(fVar36,uVar38,uVar37,plVar20,param_2);
  return;
}


