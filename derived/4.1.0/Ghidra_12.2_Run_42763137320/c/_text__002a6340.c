/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a6340; name: FUN_.text__002a6340
 */


/* WARNING: Removing unreachable block (ram,0x002a6834) */
/* WARNING: Removing unreachable block (ram,0x002a6838) */
/* WARNING: Removing unreachable block (ram,0x002a6848) */
/* WARNING: Removing unreachable block (ram,0x002a6858) */

void FUN__text__002a6340(long param_1,int param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  char cVar25;
  char cVar26;
  long lVar27;
  ulong uVar28;
  ushort *puVar29;
  long lVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  uint *puVar34;
  undefined4 uVar35;
  int iVar36;
  long lVar37;
  
  if (param_3 != 0) {
    piVar20 = *(int **)(param_1 + 0x120);
    if ((6 < *(ushort *)((long)piVar20 - (long)*piVar20)) &&
       (uVar18 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3], uVar18 != 0)) {
      uVar23 = (ulong)*(uint *)((long)piVar20 + uVar18);
      puVar34 = (uint *)((long)((long)piVar20 + uVar18) + uVar23);
      if (*puVar34 != 0) {
        lVar1 = uVar18 + uVar23;
        lVar22 = 0;
LAB__text__002a63b0:
        uVar18 = (ulong)*(uint *)((long)puVar34 + lVar22 + 4);
        lVar27 = (long)*(int *)((long)puVar34 + uVar18 + lVar22 + 4);
        lVar13 = lVar22 + lVar1;
        lVar24 = (uVar18 - lVar27) + lVar13;
        uVar9 = *(ushort *)((long)piVar20 + lVar24 + 4);
        if (uVar9 < 5) {
          iVar36 = 0;
        }
        else {
          uVar23 = (ulong)*(ushort *)((long)piVar20 + lVar24 + 8);
          iVar36 = 0;
          if (uVar23 != 0) {
            iVar36 = *(int *)((long)piVar20 + uVar18 + uVar23 + lVar13 + 4);
          }
        }
        if (iVar36 != param_2) goto code_r0x002a63fc;
        if ((6 < uVar9) &&
           (uVar23 = (ulong)*(ushort *)((long)piVar20 + uVar18 + lVar22 + (lVar1 - lVar27) + 10),
           uVar23 != 0)) {
          uVar28 = (ulong)*(uint *)((long)piVar20 + uVar23 + uVar18 + lVar13 + 4);
          lVar13 = uVar23 + uVar28 + uVar18 + lVar13;
          if (*(int *)((long)piVar20 + lVar13 + 4) != 0) {
            uVar17 = 0;
            lVar27 = uVar28 + uVar23 + uVar18;
            puVar19 = (uint *)((long)piVar20 + lVar13 + 8);
            lVar24 = (long)puVar34 + lVar27 + lVar22 + 0x14;
            do {
              piVar2 = (int *)((long)puVar19 + (ulong)*puVar19);
              puVar29 = (ushort *)((long)piVar2 - (long)*piVar2);
              if (4 < *puVar29) {
                if ((ulong)puVar29[2] == 0) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar29[2]);
                }
                if ((6 < *puVar29) && (uVar18 = (ulong)puVar29[3], uVar18 != 0)) {
                  uVar23 = (ulong)*(uint *)((long)piVar2 + uVar18);
                  puVar3 = (uint *)((long)((long)piVar2 + uVar18) + uVar23);
                  puVar34 = puVar3 + 1;
                  uVar8 = *puVar3;
                  if (uVar8 != 0) {
                    puVar3 = puVar34 + uVar8;
                    uVar31 = 0;
                    uVar32 = 0;
                    bVar12 = false;
                    iVar36 = 0;
                    uVar35 = 0;
                    uVar33 = 0;
                    bVar11 = false;
                    lVar37 = lVar24 + (ulong)*puVar19 + uVar23 + uVar18;
                    do {
                      piVar2 = (int *)((long)puVar34 + (ulong)*puVar34);
                      puVar29 = (ushort *)((long)piVar2 - (long)*piVar2);
                      if (4 < *puVar29) {
                        if ((ulong)puVar29[2] == 0) {
                          cVar25 = '\0';
                        }
                        else {
                          cVar25 = *(char *)((long)piVar2 + (ulong)puVar29[2]);
                        }
                        if ((6 < *puVar29) && (uVar18 = (ulong)puVar29[3], uVar18 != 0)) {
                          uVar23 = (ulong)*(uint *)((long)piVar2 + uVar18);
                          puVar4 = (uint *)((long)((long)piVar2 + uVar18) + uVar23);
                          puVar14 = puVar4 + 1;
                          uVar8 = *puVar4;
                          if (uVar8 != 0) {
                            puVar4 = puVar14 + uVar8;
                            lVar15 = lVar37 + uVar18 + uVar23 + *puVar34;
                            do {
                              piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
                              puVar29 = (ushort *)((long)piVar2 - (long)*piVar2);
                              if (4 < *puVar29) {
                                if ((ulong)puVar29[2] == 0) {
                                  cVar26 = '\0';
                                }
                                else {
                                  cVar26 = *(char *)((long)piVar2 + (ulong)puVar29[2]);
                                }
                                if ((6 < *puVar29) && (uVar18 = (ulong)puVar29[3], uVar18 != 0)) {
                                  uVar23 = (ulong)*(uint *)((long)piVar2 + uVar18);
                                  uVar8 = *(uint *)((long)((long)piVar2 + uVar18) + uVar23);
                                  if (uVar8 != 0) {
                                    lVar30 = 0;
                                    lVar5 = lVar15 + (ulong)*puVar14 + uVar23 + uVar18;
                                    do {
                                      puVar6 = (uint *)(lVar5 + lVar30);
                                      uVar18 = (ulong)*puVar6;
                                      lVar21 = uVar18 - (long)*(int *)((long)puVar6 + uVar18);
                                      if ((4 < *(ushort *)(lVar5 + lVar30 + lVar21)) &&
                                         (uVar23 = (ulong)*(ushort *)((long)puVar6 + lVar21 + 4),
                                         uVar23 != 0)) {
                                        lVar21 = uVar18 + uVar23;
                                        lVar21 = lVar21 + (ulong)*(uint *)(lVar5 + lVar21 + lVar30);
                                        lVar7 = lVar5 + lVar21;
                                        lVar21 = lVar21 - *(int *)(lVar7 + lVar30);
                                        if ((4 < *(ushort *)(lVar5 + lVar30 + lVar21)) &&
                                           ((uVar18 = (ulong)*(ushort *)((long)puVar6 + lVar21 + 4),
                                            uVar18 != 0 &&
                                            (uVar10 = *(byte *)(lVar7 + uVar18 + lVar30) - 1,
                                            uVar10 < 5)))) {
                    /* WARNING: Could not emulate address calculation at 0x002a6708 */
                    /* WARNING: Treating indirect jump as call */
                                          (*(code *)(&UNK__text__002a6714 +
                                                    (ulong)*(byte *)((ulong)uVar10 + 0x73339c) * 4))
                                                    ();
                                          return;
                                        }
                                        if (!bVar11) {
                                          bVar11 = true;
                                          iVar36 = param_2;
                                          uVar35 = uVar16;
                                        }
                                        if (cVar26 == '\x01') {
                                          if (cVar25 == '\x01') {
                                            uVar33 = 1;
                                          }
                                          else {
                                            uVar32 = 1;
                                          }
                                        }
                                        else if (cVar26 == '\0') {
                                          if (cVar25 == '\x01') {
                                            uVar31 = 1;
                                          }
                                          else {
                                            bVar12 = true;
                                          }
                                        }
                                      }
                                      lVar30 = lVar30 + 4;
                                    } while ((ulong)uVar8 * 4 != lVar30);
                                  }
                                }
                              }
                              puVar14 = puVar14 + 1;
                              lVar15 = lVar15 + 4;
                            } while (puVar14 != puVar4);
                          }
                        }
                      }
                      puVar34 = puVar34 + 1;
                      lVar37 = lVar37 + 4;
                    } while (puVar34 != puVar3);
                    if ((bVar11) && (bVar12)) {
                      if (0x7f < uVar17) {
                    /* WARNING: Subroutine does not return */
                        FUN__text__0011a180(0x717b65);
                      }
                      piVar2 = (int *)(param_3 + uVar17 * 0x10);
                      uVar17 = uVar17 + 1;
                      *piVar2 = iVar36;
                      *(short *)(piVar2 + 1) = (short)uVar35;
                      piVar2[2] = 0;
                      *(undefined1 *)(piVar2 + 3) = uVar31;
                      *(undefined1 *)((long)piVar2 + 0xd) = uVar32;
                      *(undefined1 *)((long)piVar2 + 0xe) = uVar33;
                    }
                  }
                }
              }
              puVar19 = puVar19 + 1;
              lVar24 = lVar24 + 4;
            } while ((uint *)((long)piVar20 +
                             lVar27 + (ulong)*(uint *)((long)piVar20 + lVar13 + 4) * 4 +
                             lVar1 + lVar22 + 8) != puVar19);
            goto LAB__text__002a6480;
          }
        }
      }
    }
LAB__text__002a647c:
    uVar17 = 0;
LAB__text__002a6480:
    *(int *)(param_3 + 0x800) = (int)uVar17;
  }
  return;
code_r0x002a63fc:
  lVar22 = lVar22 + 4;
  if ((ulong)*puVar34 * 4 == lVar22) goto LAB__text__002a647c;
  goto LAB__text__002a63b0;
}


