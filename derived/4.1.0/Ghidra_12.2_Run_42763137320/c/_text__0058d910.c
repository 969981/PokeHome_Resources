/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058d910; name: FUN_.text__0058d910
 */


undefined8 FUN__text__0058d910(long param_1,int *param_2,long *param_3,int *param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  char cVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  undefined1 uStack_f1;
  long local_f0;
  uint local_e4;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  local_80 = *(long *)(param_1 + 0x18);
  local_98 = *(long *)(local_80 + 0x40) + (ulong)*(byte *)((long)param_2 + 0x25) * 0x20;
  iVar30 = param_2[8];
  local_90 = (long)iVar30;
  local_88 = param_3;
  bVar12 = *(byte *)(local_98 + 0x1a);
  uVar20 = (ulong)bVar12;
  iVar11 = *(int *)(local_80 + (long)*(int *)(param_1 + 0x3c) * 4);
  local_78 = uVar20;
  local_70 = param_1;
  uVar17 = (uint)bVar12;
  if (*param_2 < 2) {
    iVar11 = iVar11 >> 1;
    iVar29 = param_2[7];
    if (iVar11 <= param_2[7]) {
      iVar29 = iVar11;
    }
    if ((0 < iVar29 - param_2[6]) && (0 < (int)param_5)) {
      uVar31 = 0;
      uVar34 = 0;
      if (iVar30 != 0) {
        uVar34 = (iVar29 - param_2[6]) / iVar30;
      }
      local_b0 = (ulong)uVar34;
      uVar28 = (uint)bVar12;
      iVar11 = uVar34 + uVar28 + -1;
      uVar19 = (ulong)param_5;
      plVar24 = param_3;
      do {
        if (*param_4 != 0) {
          param_3[(int)uVar31] = *plVar24;
          uVar31 = (ulong)((int)uVar31 + 1);
        }
        plVar24 = plVar24 + 1;
        uVar19 = uVar19 - 1;
        param_4 = param_4 + 1;
      } while (uVar19 != 0);
      iVar30 = (int)uVar31;
      if (iVar30 != 0) {
        local_a8 = (long *)((long)&local_f0 -
                           ((-(uVar31 >> 0x1f) & 0xfffffff800000000 | uVar31 << 3) + 0xf &
                           0xfffffffffffffff0));
        iVar29 = 0;
        if (uVar28 != 0) {
          iVar29 = iVar11 / (int)uVar28;
        }
        iVar29 = iVar29 * uVar28;
        lVar35 = (long)local_a8 - ((long)(iVar29 * iVar30) + 0xfU & 0xfffffffffffffff0);
        *local_a8 = lVar35;
        if (1 < iVar30) {
          if (iVar30 == 2) {
            lVar21 = 1;
          }
          else {
            iVar26 = 0;
            uVar19 = 0;
            plVar24 = local_a8;
            do {
              uVar33 = uVar19;
              iVar2 = iVar29 + iVar26;
              iVar3 = (int)local_b0 * 2 + uVar17 * 2 + (iVar11 - iVar29) * -2 + -2 + iVar26;
              uVar19 = uVar33 + 2;
              iVar26 = iVar26 + iVar29 * 2;
              plVar24[1] = lVar35 + iVar2;
              plVar24[2] = lVar35 + iVar3;
              plVar24 = plVar24 + 2;
            } while ((uVar31 - 1 & 0xfffffffffffffffe) != uVar19);
            lVar21 = uVar33 + 3;
          }
          if ((uVar31 - 1 & 1) != 0) {
            local_a8[lVar21] = lVar35 + iVar29 * (int)lVar21;
          }
        }
        if ((*(char *)((long)param_2 + 0x26) != '\0') && (0 < (int)local_b0)) {
          local_d8 = uVar20 - 2;
          local_c0 = uVar20 - 1;
          uVar34 = 0;
          local_f0 = lVar35 + local_c0;
          local_c8 = local_c0 & 3;
          local_d0 = uVar20 & 3;
          uVar17 = uVar17 - 1;
          local_b8 = uVar20 & 0xfe;
          local_e4 = uVar17;
          local_e0 = lVar35;
          local_a0 = uVar31;
          do {
            uVar31 = 0;
            do {
              uVar19 = local_c8;
              uVar33 = local_d0;
              uVar28 = (uint)uVar31;
              if (uVar34 == 0) {
                uVar18 = (uint)uVar20;
                *(undefined1 *)(lVar35 + (int)(uVar17 + uVar28)) = 1;
                if (1 < uVar18) {
                  cVar13 = (char)param_2[9];
                  cVar22 = *(char *)(local_f0 + (int)uVar28);
                  lVar21 = lVar35 + (int)uVar28;
                  uVar25 = local_d8;
                  if (uVar19 != 0) {
                    do {
                      cVar22 = cVar13 * cVar22;
                      uVar19 = uVar19 - 1;
                      *(char *)(lVar21 + uVar25) = cVar22;
                      uVar25 = uVar25 - 1;
                    } while (uVar19 != 0);
                  }
                  if (2 < local_d8) {
                    do {
                      pcVar5 = (char *)(lVar21 + uVar25);
                      cVar14 = cVar13 * cVar13 * cVar22;
                      *pcVar5 = cVar13 * cVar22;
                      cVar15 = cVar13 * cVar14;
                      pcVar5[-1] = cVar14;
                      cVar22 = cVar13 * cVar15;
                      pcVar5[-2] = cVar15;
                      pcVar5[-3] = cVar22;
                      bVar1 = 3 < (long)uVar25;
                      uVar25 = uVar25 - 4;
                    } while (bVar1);
                  }
                }
                if (1 < iVar30) {
                  if (uVar18 != 0) {
                    lVar21 = *local_a8;
                    uVar19 = 1;
                    do {
                      lVar6 = lVar21 + (int)uVar28;
                      lVar21 = local_a8[uVar19];
                      lVar7 = lVar21 + (int)uVar28;
                      uVar25 = uVar20;
                      if (uVar33 != 0) {
                        uVar27 = uVar33;
                        do {
                          uVar27 = uVar27 - 1;
                          *(undefined1 *)(lVar7 + -1 + uVar25) =
                               *(undefined1 *)(lVar6 + -1 + uVar25);
                          uVar25 = uVar25 - 1;
                        } while (uVar27 != 0);
                      }
                      if (3 < uVar18) {
                        do {
                          puVar8 = (undefined1 *)(lVar6 + -4 + uVar25);
                          puVar9 = (undefined1 *)(lVar7 + -2 + uVar25);
                          uVar27 = uVar25 - 4;
                          puVar9[1] = puVar8[3];
                          *puVar9 = puVar8[2];
                          puVar9[-1] = puVar8[1];
                          puVar9[-2] = *puVar8;
                          bVar1 = 3 < (long)uVar25;
                          uVar25 = uVar27;
                        } while (uVar27 != 0 && bVar1);
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != local_a0);
                    goto LAB__text__0058e104;
                  }
LAB__text__0058e10c:
                  uVar19 = 0;
                  do {
                    lVar21 = local_70;
                    uVar18 = FUN__text__00588c90(local_98,local_70);
                    if (*(int *)(lVar21 + 0xc) < 0) {
                      return 0;
                    }
                    if ((int)local_78 != 0) {
                      lVar21 = local_a8[uVar19];
                      uVar20 = 0;
                      if (local_c0 != 0) {
                        uVar20 = 0;
                        do {
                          pbVar10 = (byte *)(lVar21 + (int)uVar28 + uVar20);
                          uVar20 = uVar20 + 2;
                          bVar12 = *pbVar10;
                          uVar23 = 0;
                          if (bVar12 != 0) {
                            uVar23 = uVar18 / bVar12;
                          }
                          *pbVar10 = (byte)uVar23;
                          uVar18 = uVar18 - (uVar23 & 0xff) * (uint)bVar12;
                          bVar12 = pbVar10[1];
                          uVar23 = 0;
                          if (bVar12 != 0) {
                            uVar23 = uVar18 / bVar12;
                          }
                          pbVar10[1] = (byte)uVar23;
                          uVar18 = uVar18 - (uVar23 & 0xff) * (uint)bVar12;
                        } while (local_b8 != uVar20);
                      }
                      if ((local_78 & 1) != 0) {
                        lVar6 = uVar20 + (long)(int)uVar28;
                        uVar16 = 0;
                        uVar23 = (uint)*(byte *)(lVar21 + lVar6);
                        if (uVar23 != 0) {
                          uVar16 = (undefined1)(uVar18 / uVar23);
                        }
                        *(undefined1 *)(lVar21 + lVar6) = uVar16;
                      }
                    }
                    uVar19 = uVar19 + 1;
                    uVar20 = local_78;
                  } while (uVar19 != local_a0);
                  goto LAB__text__0058dec4;
                }
LAB__text__0058e104:
                if (0 < iVar30) goto LAB__text__0058e10c;
                if ((uVar18 != 0) && ((int)uVar28 < (int)local_b0)) goto LAB__text__0058de98;
              }
              else {
LAB__text__0058dec4:
                if ((int)uVar20 != 0) {
                  if ((int)uVar28 < (int)local_b0) {
                    if (iVar30 < 1) {
LAB__text__0058de98:
                      uVar18 = (int)local_b0 + ~uVar28;
                      if (uVar17 <= uVar18) {
                        uVar18 = uVar17;
                      }
                      uVar31 = (ulong)(uVar28 + uVar18 + 1);
                    }
                    else {
                      uVar17 = 0;
                      uVar31 = (ulong)(int)uVar28;
                      do {
                        lVar35 = uVar31 * local_90;
                        plVar32 = local_88;
                        uVar19 = local_a0;
                        plVar24 = local_a8;
                        do {
                          if ((1 << (ulong)(uVar34 & 0x1f) &
                              (uint)*(byte *)(*(long *)(param_2 + 2) +
                                             (ulong)*(byte *)(*plVar24 + uVar31))) != 0) {
                            puVar4 = (undefined8 *)
                                     (*(long *)(local_80 + 0x40) +
                                     (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                     (ulong)*(byte *)(*plVar24 + uVar31) * 8 +
                                                     (ulong)uVar34) * 0x20);
                            Hint_Prefetch(*puVar4,0,0,0);
                            local_68 = *plVar32 + (lVar35 + param_2[6]) * 4;
                            (**(code **)(puVar4[2] + 0x48))(puVar4,&local_68,0,local_70,local_90);
                            uVar20 = local_78;
                          }
                          plVar24 = plVar24 + 1;
                          plVar32 = plVar32 + 1;
                          uVar19 = uVar19 - 1;
                        } while (uVar19 != 0);
                        uVar17 = uVar17 + 1;
                        uVar31 = uVar31 + 1;
                      } while ((uVar17 < (uint)uVar20) && ((long)uVar31 < (long)local_b0));
                      lVar35 = local_e0;
                      uVar17 = local_e4;
                    }
                  }
                }
              }
            } while ((int)uVar31 < (int)local_b0);
            uVar34 = uVar34 + 1;
          } while (uVar34 < *(byte *)((long)param_2 + 0x26));
        }
      }
    }
  }
  else {
    iVar11 = (int)(iVar11 * param_5) >> 1;
    iVar29 = param_2[6];
    iVar26 = param_2[7];
    if (iVar11 <= param_2[7]) {
      iVar26 = iVar11;
    }
    if (0 < iVar26 - iVar29) {
      uVar34 = 0;
      if (iVar30 != 0) {
        uVar34 = (iVar26 - iVar29) / iVar30;
      }
      iVar11 = 0;
      if (uVar17 != 0) {
        iVar11 = (int)(uVar34 + bVar12 + -1) / (int)uVar17;
      }
      uVar31 = (long)&local_f0 - ((long)(int)(iVar11 * uVar17) + 0xfU & 0xfffffffffffffff0);
      if (iVar29 < 0) {
        iVar29 = iVar29 + 1;
      }
      if (param_4[1] != 0 || *param_4 != 0) {
        iVar11 = iVar30;
        if (iVar30 < 0) {
          iVar11 = iVar30 + 1;
        }
        if ((*(char *)((long)param_2 + 0x26) != '\0') && (0 < (int)uVar34)) {
          uVar28 = 0;
          local_90 = CONCAT44(iVar30 >> 0x1f,iVar29 >> 1);
          iVar11 = iVar11 >> 1;
          local_a8 = (long *)CONCAT44(local_a8._4_4_,uVar17 - 1);
          uVar19 = uVar20 & 0xfe;
          local_a0 = uVar19;
          local_b8 = uVar31;
          local_b0 = uVar20 - 2;
          local_c0 = uVar20 - 1;
          local_d8 = local_c0 & 3;
          local_d0 = uVar31 + local_c0;
          do {
            if (uVar28 == 0) {
              uVar33 = 0;
              do {
                iVar30 = (int)uVar33;
                *(undefined1 *)(uVar31 + (long)((int)local_a8 + iVar30)) = 1;
                if (1 < (uint)uVar20) {
                  cVar13 = (char)param_2[9];
                  cVar22 = *(char *)(local_d0 + (long)iVar30);
                  lVar35 = uVar31 + (long)iVar30;
                  uVar20 = local_b0;
                  if (local_d8 != 0) {
                    uVar25 = local_d8;
                    do {
                      cVar22 = cVar13 * cVar22;
                      uVar25 = uVar25 - 1;
                      *(char *)(lVar35 + uVar20) = cVar22;
                      uVar20 = uVar20 - 1;
                    } while (uVar25 != 0);
                  }
                  if (2 < local_b0) {
                    do {
                      pcVar5 = (char *)(lVar35 + uVar20);
                      cVar14 = cVar13 * cVar13 * cVar22;
                      *pcVar5 = cVar13 * cVar22;
                      cVar15 = cVar13 * cVar14;
                      pcVar5[-1] = cVar14;
                      cVar22 = cVar13 * cVar15;
                      pcVar5[-2] = cVar15;
                      pcVar5[-3] = cVar22;
                      bVar1 = 3 < (long)uVar20;
                      uVar20 = uVar20 - 4;
                    } while (bVar1);
                  }
                }
                uVar17 = FUN__text__00588c90(local_98,local_70);
                uVar20 = local_78;
                iVar29 = (int)local_78;
                if (iVar29 != 0) {
                  lVar35 = (long)iVar30;
                  uVar25 = 0;
                  if (local_c0 != 0) {
                    uVar25 = 0;
                    do {
                      pbVar10 = (byte *)(uVar31 + lVar35 + uVar25);
                      uVar25 = uVar25 + 2;
                      bVar12 = *pbVar10;
                      uVar18 = 0;
                      if (bVar12 != 0) {
                        uVar18 = uVar17 / bVar12;
                      }
                      *pbVar10 = (byte)uVar18;
                      uVar17 = uVar17 - (uVar18 & 0xff) * (uint)bVar12;
                      bVar12 = pbVar10[1];
                      uVar18 = 0;
                      if (bVar12 != 0) {
                        uVar18 = uVar17 / bVar12;
                      }
                      pbVar10[1] = (byte)uVar18;
                      uVar17 = uVar17 - (uVar18 & 0xff) * (uint)bVar12;
                    } while (uVar19 != uVar25);
                  }
                  if ((uVar20 & 1) != 0) {
                    uVar16 = 0;
                    uVar18 = (uint)*(byte *)(uVar31 + uVar25 + lVar35);
                    if (uVar18 != 0) {
                      uVar16 = (undefined1)(uVar17 / uVar18);
                    }
                    *(undefined1 *)(uVar31 + uVar25 + lVar35) = uVar16;
                  }
                  if ((iVar29 != 0) && (iVar30 < (int)uVar34)) {
                    local_c8 = uVar33;
                    iVar30 = (int)local_90 + iVar11 * iVar30;
                    lVar21 = 0;
                    do {
                      uVar19 = (ulong)*(byte *)(uVar31 + lVar35 + lVar21);
                      if ((*(byte *)(*(long *)(param_2 + 2) + uVar19) & 1) != 0) {
                        lVar6 = *(long *)(local_80 + 0x40) +
                                (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar19 * 8) * 0x20;
                        (**(code **)(*(long *)(lVar6 + 0x10) + 0x48))
                                  (lVar6,local_88,iVar30,local_70,iVar11);
                        uVar20 = local_78;
                      }
                      uVar17 = (uint)(lVar21 + 1);
                      if ((uint)uVar20 <= uVar17) break;
                      lVar6 = lVar35 + 1 + lVar21;
                      iVar30 = iVar30 + iVar11;
                      lVar21 = lVar21 + 1;
                    } while (lVar6 < (long)(ulong)uVar34);
                    uVar33 = (ulong)((int)local_c8 + uVar17);
                    uVar19 = local_a0;
                  }
                }
              } while ((int)uVar33 < (int)uVar34);
            }
            else {
              if ((int)uVar20 == 0) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              iVar30 = 0;
              do {
                if (iVar30 < (int)uVar34) {
                  iVar29 = (int)local_90 + iVar11 * iVar30;
                  lVar35 = 0;
                  do {
                    uVar19 = (ulong)*(byte *)(uVar31 + (long)iVar30 + lVar35);
                    if ((1 << (ulong)(uVar28 & 0x1f) &
                        (uint)*(byte *)(*(long *)(param_2 + 2) + uVar19)) != 0) {
                      lVar21 = *(long *)(local_80 + 0x40) +
                               (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar19 * 8 + (ulong)uVar28)
                               * 0x20;
                      (**(code **)(*(long *)(lVar21 + 0x10) + 0x48))
                                (lVar21,local_88,iVar29,local_70,iVar11);
                      uVar20 = local_78;
                    }
                    uVar17 = (uint)(lVar35 + 1);
                    if ((uint)uVar20 <= uVar17) break;
                    lVar21 = (long)iVar30 + 1 + lVar35;
                    iVar29 = iVar29 + iVar11;
                    lVar35 = lVar35 + 1;
                  } while (lVar21 < (long)(ulong)uVar34);
                  iVar30 = iVar30 + uVar17;
                  uVar19 = local_a0;
                  uVar31 = local_b8;
                }
              } while (iVar30 < (int)uVar34);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(byte *)((long)param_2 + 0x26));
        }
      }
    }
  }
  return 0;
}


