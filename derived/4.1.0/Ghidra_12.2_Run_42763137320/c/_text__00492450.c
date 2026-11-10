/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00492450; name: FUN_.text__00492450
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00492450(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *****pppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined8 *puVar12;
  bool bVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  long *plVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 ******ppppppuVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 ******ppppppuVar26;
  undefined8 ******ppppppuVar27;
  undefined8 uVar28;
  uint uVar30;
  uint uVar29;
  ulong *puVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined1 auStack_b0 [8];
  undefined1 ******local_a8 [2];
  long local_98;
  undefined8 ******local_90 [4];
  long local_70;
  undefined8 *local_68;
  
  uVar11 = *(ushort *)(param_2 + 0x38);
  uVar14 = (ulong)uVar11;
  local_90[3] = (undefined8 ******)(auStack_b0 + uVar14 * -0x10);
  if (*(int *)(param_4 + 0x1b) != 0) {
    local_a8[0] = (undefined1 ******)(local_90 + uVar14 * -2);
    local_90[1] = *(undefined8 *******)(param_2 + 0x20);
    puVar31 = (ulong *)param_4[0x1a];
    local_98 = -((ulong)uVar11 & 0xfffe);
    local_a8[1] = (undefined1 ******)(local_90 + uVar14 * -2 + -2);
    local_90[0] = local_a8 + uVar14 * -2;
    local_90[2] = (undefined8 ******)&DAT_008874b8;
    local_70 = param_3;
    local_68 = param_4;
    do {
      uVar14 = *puVar31;
      uVar17 = *(uint *)(local_70 + 0x28);
      if (uVar17 != 0) {
        iVar20 = 0;
        do {
          iVar2 = iVar20 + (uVar17 >> 1);
          uVar24 = *(ulong *)(*(long *)(local_70 + 0x20) + (long)iVar2 * 8);
          if (uVar24 == uVar14) {
            uVar28 = 0x30;
            lVar15 = FUN__text__0047d7d0();
            goto joined_r0x00492558;
          }
          if (uVar24 < uVar14) {
            iVar20 = iVar2 + 1;
          }
          uVar29 = uVar17 - (uVar24 < uVar14);
          uVar17 = uVar29 >> 1;
        } while (1 < uVar29);
      }
      uVar28 = 0x10;
      lVar15 = FUN__text__0047d7d0();
joined_r0x00492558:
      if (lVar15 != 0) {
        plVar18 = *(long **)(param_2 + 0x28);
        uVar17 = *(uint *)(param_2 + 0x30);
        uVar29 = (uint)uVar11;
        uVar30 = (uint)uVar11;
        plVar22 = plVar18;
        if (uVar17 == 0) {
LAB__text__004925a8:
          plVar1 = plVar22 + 1;
          if (plVar22 == plVar18 + (ulong)uVar17 * 3) goto LAB__text__004925e4;
          uVar17 = *(uint *)(plVar22 + 2);
          uVar14 = (ulong)uVar17;
          if (uVar17 == 0) goto LAB__text__004925e4;
          uVar5 = uVar17;
          if (uVar11 <= uVar17) {
            uVar5 = uVar30;
          }
          if (uVar5 != 0) {
            if (uVar5 < 4) {
              lVar23 = 0;
            }
            else {
              lVar25 = 0;
              lVar23 = 0;
              do {
                puVar16 = (undefined8 *)((long)local_90[3] + lVar25);
                lVar23 = lVar23 + 4;
                uVar8 = ((undefined8 *)(*plVar1 + lVar25))[1];
                *puVar16 = *(undefined8 *)(*plVar1 + lVar25);
                puVar16[1] = uVar8;
                uVar8 = *(undefined8 *)(*plVar1 + lVar25 + 0x18);
                puVar16[2] = *(undefined8 *)(*plVar1 + lVar25 + 0x10);
                puVar16[3] = uVar8;
                uVar8 = *(undefined8 *)(*plVar1 + lVar25 + 0x28);
                puVar16[4] = *(undefined8 *)(*plVar1 + lVar25 + 0x20);
                puVar16[5] = uVar8;
                lVar3 = *plVar1 + lVar25;
                lVar25 = lVar25 + 0x40;
                uVar8 = *(undefined8 *)(lVar3 + 0x38);
                puVar16[6] = *(undefined8 *)(lVar3 + 0x30);
                puVar16[7] = uVar8;
              } while (((ulong)uVar5 & 0xfffffffc) * 0x10 != lVar25);
            }
            uVar24 = (ulong)uVar5 & 3;
            if ((uVar5 & 3) != 0) {
              lVar23 = lVar23 << 4;
              do {
                puVar16 = (undefined8 *)((long)local_90[3] + lVar23);
                uVar24 = uVar24 - 1;
                puVar4 = (undefined8 *)(*plVar1 + lVar23);
                lVar23 = lVar23 + 0x10;
                uVar8 = puVar4[1];
                *puVar16 = *puVar4;
                puVar16[1] = uVar8;
              } while (uVar24 != 0);
            }
          }
          if (uVar17 < uVar30) {
            uVar30 = uVar30 - uVar17 & 3;
            if (uVar30 != 0) {
              lVar25 = uVar14 * 0x10;
              uVar14 = uVar14 + (uVar30 - 1) + 1;
              puVar16 = (undefined8 *)((long)local_90[3] + lVar25);
              do {
                uVar30 = uVar30 - 1;
                puVar4 = (undefined8 *)(*plVar1 + (ulong)(uVar5 - 1) * 0x10);
                uVar8 = puVar4[1];
                *puVar16 = *puVar4;
                puVar16[1] = uVar8;
                puVar16 = puVar16 + 2;
              } while (uVar30 != 0);
            }
            if (2 < ~uVar17 + uVar29) {
              iVar20 = uVar29 - (int)uVar14;
              ppppppuVar21 = local_a8[0] + uVar14 * 2;
              do {
                lVar25 = (ulong)(uVar5 - 1) * 0x10;
                iVar20 = iVar20 + -4;
                pppppuVar7 = (undefined1 *****)((undefined8 *)(*plVar1 + lVar25))[1];
                ppppppuVar21[-4] = *(undefined1 ******)(*plVar1 + lVar25);
                ppppppuVar21[-3] = pppppuVar7;
                pppppuVar7 = (undefined1 *****)((undefined8 *)(*plVar1 + lVar25))[1];
                ppppppuVar21[-2] = *(undefined1 ******)(*plVar1 + lVar25);
                ppppppuVar21[-1] = pppppuVar7;
                pppppuVar7 = (undefined1 *****)((undefined8 *)(*plVar1 + lVar25))[1];
                *ppppppuVar21 = *(undefined1 ******)(*plVar1 + lVar25);
                ppppppuVar21[1] = pppppuVar7;
                pppppuVar7 = (undefined1 *****)((undefined8 *)(*plVar1 + lVar25))[1];
                ppppppuVar21[2] = *(undefined1 ******)(*plVar1 + lVar25);
                ppppppuVar21[3] = pppppuVar7;
                ppppppuVar21 = ppppppuVar21 + 8;
              } while (iVar20 != 0);
            }
          }
        }
        else {
          lVar25 = (ulong)uVar17 * 0x18;
          do {
            if (*plVar22 == *(long *)(*(long *)(lVar15 + 8) + 0x58)) goto LAB__text__004925a8;
            plVar22 = plVar22 + 3;
            lVar25 = lVar25 + -0x18;
          } while (lVar25 != 0);
LAB__text__004925e4:
          if (uVar29 != 0) {
            if (uVar30 == 1) {
              lVar25 = 0;
            }
            else {
              lVar25 = 0;
              ppppppuVar21 = local_a8[1];
              do {
                lVar25 = lVar25 + -2;
                ppppppuVar21[-2] = (undefined1 *****)0x0;
                ppppppuVar21[-1] = (undefined1 *****)0x42c8000000000000;
                *ppppppuVar21 = (undefined1 *****)0x0;
                ppppppuVar21[1] = (undefined1 *****)0x42c8000000000000;
                ppppppuVar21 = ppppppuVar21 + 4;
              } while (local_98 != lVar25);
              lVar25 = -lVar25;
            }
            if ((uVar11 & 1) != 0) {
              *(undefined8 *)((long)local_90[3] + lVar25 * 0x10) = 0;
              ((undefined8 *)((long)local_90[3] + lVar25 * 0x10))[1] = 0x42c8000000000000;
            }
          }
        }
        puVar16 = local_68;
        if (*(char *)(local_68 + 0x1c) == '\0') {
          puVar16 = DAT_00aea688;
          if (DAT_00aea688 == (undefined8 *)0x0) {
            do {
              if (puVar16 == (undefined8 *)0x0) {
                puVar16 = (undefined8 *)FUN__text__00400f80(4,0xf0);
                if (puVar16 != (undefined8 *)0x0) {
                  puVar16[1] = 0;
                  puVar16[2] = 0;
                  puVar12 = DAT_00ae9698;
                  bVar13 = DAT_00ae96a0 != 0;
                  puVar4 = puVar16;
                  puVar16[3] = DAT_00ae9698;
                  DAT_00ae9698 = puVar4;
                  puVar4 = (undefined8 *)&DAT_00ae9690;
                  if (bVar13) {
                    puVar4 = puVar12;
                  }
                  puVar4[2] = puVar16;
                  puVar16[8] = 0;
                  puVar16[9] = 0;
                  puVar16[0xc] = 0;
                  puVar16[0xd] = 0;
                  DAT_00ae9690 = DAT_00ae9690 + 1;
                  puVar16[0x12] = 0;
                  puVar16[0x13] = 0;
                  puVar16[0x16] = 0;
                  puVar16[0x17] = 0;
                  *puVar16 = local_90[2];
                  puVar16[0x1a] = 0;
                  puVar16[0x1b] = 0;
                  *(undefined2 *)(puVar16 + 0x1c) = 0x101;
                }
                DAT_00aea688 = puVar16;
              }
            } while (*(char *)(puVar16 + 0x1c) == '\0');
          }
          else if (*(char *)(DAT_00aea688 + 0x1c) == '\0') {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        uVar17 = *(uint *)(puVar16 + 0xd);
        if (uVar17 == 0) {
          bVar13 = false;
        }
        else {
          uVar14 = *puVar31;
          iVar20 = 0;
          do {
            iVar2 = iVar20 + (uVar17 >> 1);
            uVar24 = *(ulong *)(puVar16[0xc] + (long)iVar2 * 8);
            bVar13 = uVar24 == uVar14;
            if (bVar13) break;
            if (uVar24 < uVar14) {
              iVar20 = iVar2 + 1;
            }
            uVar29 = uVar17 - (uVar24 < uVar14);
            uVar17 = uVar29 >> 1;
          } while (1 < uVar29);
        }
        if (uVar11 != 0) {
          uVar14 = 0;
          ppppppuVar26 = local_90[1];
          ppppppuVar27 = local_90[0];
          do {
            puVar16 = (undefined8 *)FUN__text__00492bb0(param_1,uVar28,bVar13);
            if (puVar16 != (undefined8 *)0x0) {
              fVar33 = *(float *)(ppppppuVar27 + -1);
              fVar32 = *(float *)((long)ppppppuVar27 + -4);
              uVar8 = ppppppuVar26[1];
              uVar34 = *(undefined4 *)(ppppppuVar26 + 6);
              uVar19 = *(undefined8 *)(*(long *)(lVar15 + 8) + 0x58);
              *puVar16 = *ppppppuVar26;
              puVar16[1] = uVar8;
              uVar8 = ppppppuVar26[2];
              uVar9 = ppppppuVar26[3];
              uVar6 = ppppppuVar26[4];
              uVar10 = ppppppuVar26[5];
              puVar16[10] = 0;
              *(undefined4 *)((long)puVar16 + 100) = uVar34;
              *(int *)(puVar16 + 0xd) = (int)uVar14;
              puVar16[0xe] = uVar19;
              *(float *)(puVar16 + 9) = fVar33 * 100.0;
              *(float *)((long)puVar16 + 0x4c) = fVar32 * 100.0;
              uVar34 = *(undefined4 *)((long)ppppppuVar27 + 4);
              *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)ppppppuVar27;
              *(undefined4 *)((long)puVar16 + 0x5c) = uVar34;
              puVar16[4] = uVar6;
              puVar16[5] = uVar10;
              puVar16[2] = uVar8;
              puVar16[3] = uVar9;
              FUN__text__00480e64(lVar15,param_2,puVar16);
            }
            uVar14 = uVar14 + 1;
            ppppppuVar26 = ppppppuVar26 + 7;
            ppppppuVar27 = ppppppuVar27 + 2;
          } while (uVar11 != uVar14);
        }
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 != (ulong *)(local_68[0x1a] + (ulong)*(uint *)(local_68 + 0x1b) * 8));
  }
  return;
}


