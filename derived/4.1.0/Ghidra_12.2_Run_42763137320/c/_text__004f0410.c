/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f0410; name: FUN_.text__004f0410
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f0410(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  uint *puVar18;
  undefined8 uVar19;
  int *piVar20;
  int *piVar21;
  uint *puVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  
  lVar23 = *(long *)(param_1 + 0x80);
  uVar8 = *(uint *)(lVar23 + 0x120);
  if (uVar8 != 0) {
    uVar25 = 0;
    lVar1 = _DAT_008a5140 + 0x10;
    do {
      lVar26 = *(long *)(lVar23 + 0x118);
      piVar20 = (int *)(lVar26 + uVar25 * 0x1c);
      if (*(int *)(param_1 + 0x88) == *piVar20) {
        lVar13 = FUN__text__004ef680(*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(lVar26 + uVar25 * 0x1c + 4));
        if (lVar13 != 0) {
          if ((*(ushort *)(lVar13 + 0xc) & 0x7c) == 4) {
            if ((((*(ushort *)(lVar13 + 0xc) >> 1 & 1) != 0) &&
                (lVar17 = lVar26 + uVar25 * 0x1c, *(int *)(param_1 + 0xa8) <= *(int *)(lVar17 + 0xc)
                )) && (*(int *)(lVar17 + 0x18) == 0)) {
              sVar10 = *(short *)(lVar13 + 0x1a);
              goto joined_r0x004f0510;
            }
            iVar24 = *(int *)(lVar13 + 0x24);
            sVar10 = *(short *)(lVar13 + 0x1a);
          }
          else {
            sVar10 = *(short *)(lVar13 + 0x1a);
joined_r0x004f0510:
            iVar24 = 0;
          }
          if (sVar10 == 0x11) {
            uVar2 = *_DAT_008a4b70 & 0xffff;
            if (*(int *)(lVar26 + uVar25 * 0x1c + 0x18) != 0) {
              uVar2 = (*_DAT_008a4b70 & 0xffff) * 4;
            }
            iVar24 = iVar24 + uVar2;
          }
          lVar17 = lVar26 + uVar25 * 0x1c;
          iVar9 = *(int *)(param_1 + 0xa8);
          piVar21 = (int *)(lVar17 + 0xc);
          iVar3 = *piVar21;
          iVar5 = *(int *)(lVar17 + 0x10);
          if (iVar9 < iVar5 + iVar3) {
            iVar11 = iVar9 - iVar3;
            if (iVar11 == 0 || iVar9 < iVar3) {
              iVar11 = *(int *)(lVar26 + uVar25 * 0x1c + 0x18);
              puVar14 = (undefined8 *)FUN__text__00400f80(0,0x48);
              iVar9 = iVar3;
            }
            else {
              lVar17 = lVar26 + uVar25 * 0x1c;
              iVar5 = iVar5 - iVar11;
              uVar4 = *(uint *)(lVar17 + 0x14);
              uVar2 = *(int *)(lVar17 + 0x18) + iVar11;
              uVar12 = 0;
              if (uVar4 != 0) {
                uVar12 = uVar2 / uVar4;
              }
              iVar11 = uVar2 - uVar12 * uVar4;
              puVar14 = (undefined8 *)FUN__text__00400f80(0,0x48);
            }
            if (puVar14 != (undefined8 *)0x0) {
              *(int *)(puVar14 + 2) = iVar9 - iVar24;
              *puVar14 = 0x88fb58;
              uVar6 = *(undefined8 *)piVar20;
              uVar7 = *(undefined8 *)(piVar20 + 2);
              uVar19 = *(undefined8 *)(piVar20 + 4);
              iVar3 = piVar20[6];
              *(int *)((long)puVar14 + 0x34) = iVar11;
              *(int *)(puVar14 + 7) = iVar24;
              puVar14[8] = 0;
              *(undefined8 *)((long)puVar14 + 0x24) = uVar19;
              *(undefined8 *)((long)puVar14 + 0x1c) = uVar7;
              *(undefined8 *)((long)puVar14 + 0x14) = uVar6;
              *(int *)((long)puVar14 + 0x2c) = iVar3;
              *(int *)(puVar14 + 6) = iVar5;
              FUN__text__004ed750(param_1 + 0x60,puVar14);
              if (*(short *)(lVar13 + 0x1a) != 0x10) {
                iVar24 = *piVar21;
                puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
                if (uVar2 != 0) {
                  lVar13 = (ulong)uVar2 << 5;
                  puVar22 = puVar18;
                  do {
                    if ((uVar25 == *puVar22) && (puVar22[1] == 0)) {
                      if (((puVar22 != puVar18 + (ulong)uVar2 * 8) &&
                          ((puVar22 != (uint *)0x0 && (*(long *)(puVar22 + 2) != 0)))) &&
                         (puVar16 = (undefined8 *)FUN__text__00400f80(0,0x20),
                         puVar16 != (undefined8 *)0x0)) {
                        *puVar16 = puVar22;
                        puVar16[1] = 0;
                        *(int *)(puVar16 + 2) = iVar24;
                        if (puVar14[8] == 0) {
                          puVar14[8] = puVar16;
                          puVar16[3] = 0;
                          iVar24 = *piVar21;
                          puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                          uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
                          goto joined_r0x004f078c;
                        }
                        puVar16[3] = puVar14[8];
                        puVar14[8] = puVar16;
                      }
                      break;
                    }
                    puVar22 = puVar22 + 8;
                    lVar13 = lVar13 + -0x20;
                  } while (lVar13 != 0);
                }
                iVar24 = *piVar21;
                puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
joined_r0x004f078c:
                if (uVar2 != 0) {
                  lVar13 = (ulong)uVar2 << 5;
                  puVar22 = puVar18;
                  do {
                    if ((uVar25 == *puVar22) && (puVar22[1] == 1)) {
                      if ((puVar22 != puVar18 + (ulong)uVar2 * 8) &&
                         (((puVar22 != (uint *)0x0 && (*(long *)(puVar22 + 2) != 0)) &&
                          (puVar16 = (undefined8 *)FUN__text__00400f80(0,0x20),
                          puVar16 != (undefined8 *)0x0)))) {
                        *puVar16 = puVar22;
                        puVar16[1] = 0;
                        *(int *)(puVar16 + 2) = iVar24;
                        if (puVar14[8] == 0) {
                          puVar14[8] = puVar16;
                          puVar16[3] = 0;
                          iVar24 = *piVar21;
                          puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                          uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
                          goto joined_r0x004f084c;
                        }
                        puVar16[3] = puVar14[8];
                        puVar14[8] = puVar16;
                      }
                      break;
                    }
                    puVar22 = puVar22 + 8;
                    lVar13 = lVar13 + -0x20;
                  } while (lVar13 != 0);
                }
                iVar24 = *piVar21;
                puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
joined_r0x004f084c:
                if (uVar2 != 0) {
                  lVar13 = (ulong)uVar2 << 5;
                  puVar22 = puVar18;
                  do {
                    if ((uVar25 == *puVar22) && (puVar22[1] == 2)) {
                      if (((puVar22 != puVar18 + (ulong)uVar2 * 8) &&
                          ((puVar22 != (uint *)0x0 && (*(long *)(puVar22 + 2) != 0)))) &&
                         (puVar16 = (undefined8 *)FUN__text__00400f80(0,0x20),
                         puVar16 != (undefined8 *)0x0)) {
                        *puVar16 = puVar22;
                        puVar16[1] = 0;
                        *(int *)(puVar16 + 2) = iVar24;
                        if (puVar14[8] == 0) {
                          puVar14[8] = puVar16;
                          puVar16[3] = 0;
                          iVar24 = *piVar21;
                          puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                          uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
                          goto joined_r0x004f090c;
                        }
                        puVar16[3] = puVar14[8];
                        puVar14[8] = puVar16;
                      }
                      break;
                    }
                    puVar22 = puVar22 + 8;
                    lVar13 = lVar13 + -0x20;
                  } while (lVar13 != 0);
                }
                iVar24 = *piVar21;
                puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
joined_r0x004f090c:
                if (uVar2 != 0) {
                  lVar13 = (ulong)uVar2 << 5;
                  puVar22 = puVar18;
                  do {
                    if ((uVar25 == *puVar22) && (puVar22[1] == 3)) {
                      if ((puVar22 != puVar18 + (ulong)uVar2 * 8) &&
                         (((puVar22 != (uint *)0x0 && (*(long *)(puVar22 + 2) != 0)) &&
                          (puVar16 = (undefined8 *)FUN__text__00400f80(0,0x20),
                          puVar16 != (undefined8 *)0x0)))) {
                        *puVar16 = puVar22;
                        puVar16[1] = 0;
                        *(int *)(puVar16 + 2) = iVar24;
                        if (puVar14[8] == 0) {
                          puVar14[8] = puVar16;
                          puVar16[3] = 0;
                          iVar24 = *piVar21;
                          puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                          uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
                          goto joined_r0x004f0968;
                        }
                        puVar16[3] = puVar14[8];
                        puVar14[8] = puVar16;
                      }
                      break;
                    }
                    puVar22 = puVar22 + 8;
                    lVar13 = lVar13 + -0x20;
                  } while (lVar13 != 0);
                }
                iVar24 = *piVar21;
                puVar18 = *(uint **)(*(long *)(param_1 + 0x80) + 0x100);
                uVar2 = *(uint *)(*(long *)(param_1 + 0x80) + 0x108);
joined_r0x004f0968:
                if (uVar2 != 0) {
                  lVar13 = (ulong)uVar2 << 5;
                  puVar22 = puVar18;
                  do {
                    if ((uVar25 == *puVar22) && (puVar22[1] == 4)) {
                      if (((puVar22 != puVar18 + (ulong)uVar2 * 8) &&
                          ((puVar22 != (uint *)0x0 && (*(long *)(puVar22 + 2) != 0)))) &&
                         (puVar16 = (undefined8 *)FUN__text__00400f80(0,0x20),
                         puVar16 != (undefined8 *)0x0)) {
                        *puVar16 = puVar22;
                        puVar16[1] = 0;
                        *(int *)(puVar16 + 2) = iVar24;
                        if (puVar14[8] == 0) {
                          puVar14[8] = puVar16;
                          puVar16[3] = 0;
                        }
                        else {
                          puVar16[3] = puVar14[8];
                          puVar14[8] = puVar16;
                        }
                      }
                      break;
                    }
                    puVar22 = puVar22 + 8;
                    lVar13 = lVar13 + -0x20;
                  } while (lVar13 != 0);
                }
              }
            }
          }
        }
        iVar24 = *(int *)(lVar26 + uVar25 * 0x1c + 8);
        if (((iVar24 != 0) &&
            (lVar26 = lVar26 + uVar25 * 0x1c, iVar3 = *(int *)(lVar26 + 0xc),
            *(int *)(param_1 + 0xa8) <= *(int *)(lVar26 + 0x10) + iVar3)) &&
           (plVar15 = (long *)FUN__text__00400f80(0,0x18), plVar15 != (long *)0x0)) {
          *(int *)(plVar15 + 2) = iVar3;
          *(int *)((long)plVar15 + 0x14) = iVar24;
          *plVar15 = lVar1;
          FUN__text__004ed750(param_1 + 0x60,plVar15);
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar8);
  }
  return;
}


