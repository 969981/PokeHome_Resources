/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005874b0; name: FUN_.text__005874b0
 */


char FUN__text__005874b0(long *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
                        long param_5,long *param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  size_t __n;
  undefined4 *__s;
  char cVar40;
  void *pvVar41;
  int iVar42;
  ulong uVar43;
  uint *puVar44;
  ulong uVar45;
  int iVar46;
  ulong unaff_x26;
  ulong uVar47;
  uint uVar48;
  long lVar49;
  uint auStack_160 [6];
  ulong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  ulong local_130;
  size_t local_128;
  void *local_120;
  long *local_118;
  long local_110;
  long local_108;
  ulong local_100;
  uint local_f4;
  undefined8 local_f0 [16];
  undefined4 local_70;
  
  uVar48 = 1 << (ulong)(param_7 & 0x1f);
  *(short *)(param_1 + 3) = (short)uVar48 + -1;
  uVar9 = *(ushort *)(param_5 + 10);
  uVar20 = (uVar48 + (uint)uVar9 * 2) - 2;
  __s = (undefined4 *)
        ((long)auStack_160 -
        ((-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2) + 0xf &
        0xfffffffffffffff0));
  __n = (size_t)(int)uVar48;
  pvVar41 = (void *)((long)__s - (__n + 0xf & 0xfffffffffffffff0));
  local_128 = __n;
  local_120 = pvVar41;
  local_118 = param_1;
  if ((ulong)*(ushort *)(param_5 + 8) < 2) {
    *__s = 0x80000000;
    uVar48 = 0;
    uVar20 = 0;
  }
  else {
    local_108 = CONCAT44(local_108._4_4_,param_7);
    local_13c = param_3;
    local_138 = param_4;
    local_130 = (ulong)*(ushort *)(param_5 + 8);
    local_110 = param_5;
    memset(__s,0,__n << 2);
    memset(pvVar41,0,__n);
    uVar22 = 0;
    uVar20 = 0;
    uVar45 = (ulong)local_f0 | 4;
    local_70 = 0;
    local_148 = param_2;
    local_f0[0xe] = 0;
    local_f0[0xf] = 0;
    local_f0[0xc] = 0;
    local_f0[0xd] = 0;
    auStack_160[3] = ~(uint)local_108;
    auStack_160[4] = 0;
    local_f0[10] = 0;
    local_f0[0xb] = 0;
    local_f0[8] = 0;
    local_f0[9] = 0;
    local_f0[6] = 0;
    local_f0[7] = 0;
    local_f0[4] = 0;
    local_f0[5] = 0;
    local_f0[2] = 0;
    local_f0[3] = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    uVar47 = local_130;
    unaff_x26 = param_2;
    param_7 = (uint)local_108;
    uVar28 = 0;
    do {
      pvVar41 = local_120;
      bVar8 = *(byte *)(unaff_x26 + uVar22);
      uVar38 = (uint)bVar8;
      uVar16 = uVar28;
      if (uVar38 != 0) {
        uVar7 = *(uint *)((long)local_f0 + (ulong)bVar8 * 4);
        if ((uVar20 != 0) && (uVar7 == 0)) {
          uVar48 = 0xffffffff;
          goto LAB__text__005879e8;
        }
        uVar17 = (uint)bVar8;
        uVar39 = uVar17 - param_7;
        uVar33 = uVar17;
        if ((int)param_7 <= (int)uVar38) {
          uVar33 = param_7;
        }
        if (uVar39 == 0 || (int)uVar38 < (int)param_7) {
          uVar39 = 0;
        }
        if ((int)param_7 < 1) {
          uVar38 = 0;
        }
        else {
          uVar34 = uVar33 - 1;
          uVar29 = uVar7 >> (ulong)(uVar39 & 0x1f);
          uVar39 = uVar33;
          if (uVar34 == 0 || (int)uVar33 < 1) {
            uVar39 = 1;
          }
          if (uVar39 < 4) {
            uVar27 = 0;
            uVar38 = 0;
          }
          else {
            uVar27 = 0;
            uVar38 = 0;
            do {
              uVar12 = uVar27 & 0x1f;
              uVar13 = uVar27 + 1;
              uVar4 = uVar27 ^ 0xfffffffe;
              uVar11 = uVar34 & 0x1f;
              uVar34 = uVar34 - 4;
              uVar5 = uVar27 ^ 0xfffffffc;
              uVar6 = uVar27 ^ 0xfffffffd;
              uVar2 = uVar27 + 2;
              uVar3 = uVar27 + 3;
              uVar27 = uVar27 + 4;
              uVar38 = (uVar29 >> (ulong)(uVar3 & 0x1f) & 1) << (ulong)(uVar33 + uVar5 & 0x1f) |
                       (uVar29 >> (ulong)(uVar2 & 0x1f) & 1) << (ulong)(uVar33 + uVar6 & 0x1f) |
                       (uVar29 >> (ulong)(uVar13 & 0x1f) & 1) << (ulong)(uVar33 + uVar4 & 0x1f) |
                       (uVar29 >> (ulong)uVar12 & 1) << (ulong)uVar11 | uVar38;
            } while (uVar27 != (uVar39 & 0x7ffffffc));
          }
          uVar39 = uVar39 & 3;
          if (uVar39 != 0) {
            uVar33 = ~uVar27 + uVar33;
            do {
              uVar13 = uVar27 & 0x1f;
              uVar27 = uVar27 + 1;
              uVar39 = uVar39 - 1;
              uVar34 = uVar33 & 0x1f;
              uVar33 = uVar33 - 1;
              uVar38 = (uVar29 >> (ulong)uVar13 & 1) << (ulong)uVar34 | uVar38;
            } while (uVar39 != 0);
          }
        }
        uVar43 = (ulong)uVar38;
        uVar39 = (uint)bVar8;
        uVar33 = (uint)bVar8;
        if (__s[uVar38] == 0) {
          if ((int)param_7 < (int)uVar17) {
            __s[uVar43] = uVar48;
            *(char *)((long)pvVar41 + uVar43) = (char)param_7;
            puVar44 = __s + uVar48;
            uVar43 = (ulong)uVar48;
            local_f4 = uVar28;
            uVar47 = uVar43;
            auStack_160[5] = param_7;
            if ((int)param_7 < (int)(uVar39 - 1)) goto LAB__text__00587714;
LAB__text__005877a0:
            uVar47 = uVar43;
            goto LAB__text__005877a4;
          }
          auStack_160[4] = auStack_160[4] + 1;
          local_f4 = uVar20 + 1;
          uVar17 = FUN__text__00588dc0(uVar22 & 0xffffffff,uVar20,local_13c,local_118,local_138,
                                       local_110);
          pvVar41 = local_120;
          param_7 = (uint)local_108;
          uVar16 = uVar17;
          if (uVar17 <= uVar28) {
            uVar16 = uVar28;
          }
          uVar17 = uVar17 | 0x80000000;
          __s[uVar43] = uVar17;
          pvVar15 = local_120;
          *(byte *)((long)pvVar41 + uVar43) = bVar8;
          if (((int)uVar33 < (int)param_7) && (param_7 - uVar33 != 0x1f)) {
            uVar28 = 1 << (ulong)(param_7 - uVar33 & 0x1f);
            if ((int)uVar28 < 2) {
              uVar28 = 1;
            }
            if (uVar28 < 4) {
              uVar29 = 0;
            }
            else {
              uVar29 = 0;
              do {
                uVar20 = uVar29 << (ulong)(uVar33 & 0x1f) | uVar38;
                __s[(int)uVar20] = uVar17;
                *(byte *)((long)pvVar15 + (long)(int)uVar20) = bVar8;
                uVar20 = uVar29 + 1 << (ulong)(uVar33 & 0x1f) | uVar38;
                __s[(int)uVar20] = uVar17;
                *(byte *)((long)pvVar15 + (long)(int)uVar20) = bVar8;
                uVar20 = uVar29 + 2 << (ulong)(uVar33 & 0x1f) | uVar38;
                __s[(int)uVar20] = uVar17;
                *(byte *)((long)pvVar15 + (long)(int)uVar20) = bVar8;
                iVar30 = uVar29 + 3;
                uVar29 = uVar29 + 4;
                uVar20 = iVar30 << (ulong)(uVar33 & 0x1f) | uVar38;
                __s[(int)uVar20] = uVar17;
                *(byte *)((long)pvVar15 + (long)(int)uVar20) = bVar8;
              } while (uVar29 != (uVar28 & 0x7ffffffc));
            }
            uVar20 = local_f4;
            pvVar41 = local_120;
            uVar47 = local_130;
            unaff_x26 = local_148;
            for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              uVar34 = uVar29 << (ulong)(uVar39 & 0x1f);
              uVar29 = uVar29 + 1;
              uVar34 = uVar34 | uVar38;
              __s[(int)uVar34] = uVar17;
              *(byte *)((long)pvVar41 + (long)(int)uVar34) = bVar8;
            }
            goto LAB__text__005876f0;
          }
          uVar47 = local_130;
          unaff_x26 = local_148;
          uVar20 = local_f4;
        }
        else {
LAB__text__005876f0:
          if ((int)param_7 < (int)uVar39) {
            uVar43 = (ulong)(uint)__s[uVar43];
            puVar44 = __s + uVar43;
            local_f4 = uVar16;
            uVar47 = uVar43;
            auStack_160[5] = param_7;
            if ((int)(uVar39 - 1) <= (int)param_7) goto LAB__text__005877a0;
LAB__text__00587714:
            auStack_160[5] = uVar39 - 1;
            uVar43 = (ulong)(auStack_160[3] + uVar39);
            do {
              uVar32 = (ulong)(uVar7 >> (uVar43 & 0x3f)) & 1;
              if ((long)uVar47 < (long)(int)uVar48) {
                uVar28 = puVar44[uVar32];
                if (puVar44[uVar32] == 0) {
                  puVar44[uVar32] = uVar48;
                  uVar28 = uVar48;
                }
              }
              else {
                uVar48 = uVar48 + 2;
                *puVar44 = uVar48;
                puVar44[1] = 0;
                uVar28 = puVar44[uVar32];
              }
              puVar44 = __s + uVar28;
              uVar47 = (ulong)uVar28;
              uVar28 = (int)uVar43 - 1;
              uVar43 = (ulong)uVar28;
            } while (uVar28 != 0);
LAB__text__005877a4:
            local_100 = CONCAT44(local_100._4_4_,uVar20);
            uVar16 = FUN__text__00588dc0(uVar43,uVar22 & 0xffffffff,uVar20,local_13c,local_118,
                                         local_138,local_110);
            uVar20 = uVar16 | 0x80000000;
            if (uVar16 <= local_f4) {
              uVar16 = local_f4;
            }
            if ((long)uVar47 < (long)(int)uVar48) {
              uVar47 = (ulong)(uVar7 >> ((ulong)(~auStack_160[5] + uVar39) & 0x3f)) & 1;
            }
            else {
              uVar48 = uVar48 + 2;
              *puVar44 = uVar20;
              uVar47 = 1;
              uVar20 = 0;
            }
            iVar30 = (int)local_100;
            puVar44[uVar47] = uVar20;
            uVar47 = local_130;
            unaff_x26 = local_148;
            param_7 = (uint)local_108;
            uVar20 = iVar30 + 1;
          }
        }
        piVar25 = (int *)((long)local_f0 + (ulong)(uVar33 - 1) * 4);
        do {
          uVar43 = (ulong)uVar33;
          uVar28 = *(uint *)((long)local_f0 + uVar43 * 4);
          if ((uVar28 & 1) != 0) {
            *(int *)((long)local_f0 + uVar43 * 4) = *piVar25 << 1;
            break;
          }
          piVar25 = piVar25 + -1;
          *(uint *)((long)local_f0 + uVar43 * 4) = uVar28 + 1;
          uVar28 = uVar33 - 1;
          bVar1 = 0 < (int)uVar33;
          uVar33 = uVar28;
        } while (uVar28 != 0 && bVar1);
        if (bVar8 < 0x20) {
          lVar49 = (ulong)bVar8 * 4;
          iVar30 = *(int *)((long)local_f0 + lVar49);
          do {
            uVar28 = *(uint *)(uVar45 + lVar49);
            if (uVar7 != uVar28 >> 1) break;
            iVar30 = iVar30 << 1;
            *(int *)(uVar45 + lVar49) = iVar30;
            lVar49 = lVar49 + 4;
            uVar7 = uVar28;
          } while (lVar49 != 0x80);
        }
      }
      uVar22 = uVar22 + 1;
      uVar28 = uVar16;
    } while (uVar22 != uVar47);
    uVar20 = 2;
    if (0x7fff < uVar16) {
      uVar20 = 4;
    }
    if (uVar16 < 0x80) {
      uVar20 = 1;
    }
    unaff_x26 = (ulong)uVar20;
LAB__text__005879e8:
    uVar9 = *(ushort *)(local_110 + 10);
    __n = local_128;
    pvVar41 = local_120;
    param_1 = local_118;
    uVar20 = auStack_160[4];
  }
  cVar40 = '\x02';
  iVar23 = uVar9 - uVar20;
  uVar20 = (uint)unaff_x26;
  *(char *)((long)param_1 + 0x1b) = (char)unaff_x26;
  iVar30 = iVar23;
  if ((uVar20 & 0xff) != 2) {
    iVar30 = 0;
  }
  local_130 = FUN__text__00400f80(5,(((2 << (ulong)(param_7 & 0x1f)) + uVar48) - iVar23) +
                                    iVar23 * uVar20 + iVar30);
  *param_1 = local_130;
  if (local_130 != 0) {
    param_1[1] = local_130 + __n * 2;
    if (param_7 == 0x1f) {
      cVar40 = '\0';
    }
    else {
      lVar49 = 0;
      local_f4 = uVar20;
      uVar22 = (ulong)(uint)(3 << (ulong)(param_7 & 0x1f));
      do {
        local_110 = lVar49;
        *(undefined1 *)(param_1[1] + lVar49) = *(undefined1 *)((long)pvVar41 + lVar49);
        uVar48 = __s[lVar49];
        uVar9 = (ushort)uVar48;
        if ((int)uVar48 < 0) {
          cVar40 = '\0';
          *(ushort *)(local_130 + lVar49 * 2) = uVar9 | 0x8000;
        }
        else {
          uVar20 = (uint)uVar22;
          if ((int)uVar20 < 0) {
            uVar20 = uVar20 + 1;
          }
          *(short *)(local_130 + lVar49 * 2) = (short)(uVar20 >> 1);
          local_108 = *param_1;
          if ((int)param_6[1] < 2) {
            puVar18 = (ushort *)FUN__text__00400f80(5,0x100);
            if (puVar18 == (ushort *)0x0) {
              cVar40 = '\x02';
              goto LAB__text__00587fac;
            }
            if (*param_6 != 0) {
              FUN__text__00400fc0(5);
            }
            *param_6 = (long)puVar18;
            *(undefined4 *)(param_6 + 1) = 0x100;
            *puVar18 = uVar9;
            uVar20 = __s[uVar48];
            uVar48 = (__s + uVar48)[1];
            iVar30 = (int)param_6[3];
          }
          else {
            *(ushort *)*param_6 = uVar9;
            uVar20 = __s[uVar48];
            uVar48 = (__s + uVar48)[1];
            iVar30 = (int)param_6[3];
          }
          if (iVar30 < 1) {
            lVar49 = FUN__text__00400f80(5,0x100);
            if (lVar49 == 0) {
              cVar40 = '\x02';
              lVar49 = *param_1;
              goto joined_r0x00587fec;
            }
            if (param_6[2] != 0) {
              FUN__text__00400fc0(5);
            }
            param_6[2] = lVar49;
            *(undefined4 *)(param_6 + 3) = 0x100;
          }
          uVar28 = 1;
          iVar30 = -((int)~uVar20 >> 0x1f) - ((int)~uVar48 >> 0x1f);
          iVar23 = (int)param_6[5];
          uVar47 = 1;
          do {
            iVar24 = iVar30 * 2;
            iVar42 = (int)uVar47;
            iVar21 = (int)uVar22;
            if (iVar23 < iVar24) {
              if (iVar24 < 0x101) {
                iVar24 = 0x100;
              }
              lVar49 = FUN__text__00400f80(5,iVar24);
              if (lVar49 == 0) {
                bVar8 = 0;
                cVar40 = '\x02';
              }
              else {
                if (param_6[4] != 0) {
                  FUN__text__00400fc0(5);
                }
                cVar40 = '\0';
                bVar8 = 1;
                *(int *)(param_6 + 5) = iVar24;
                param_6[4] = lVar49;
              }
              unaff_x26 = (ulong)local_f4;
              uVar48 = iVar21 + iVar42 * 2;
              if (iVar30 * 4 <= (int)param_6[7]) goto LAB__text__00587bf0;
LAB__text__00587ebc:
              iVar30 = iVar30 * 4;
              if (iVar30 < 0x101) {
                iVar30 = 0x100;
              }
              local_100 = uVar22;
              lVar49 = FUN__text__00400f80(5,iVar30);
              if (lVar49 != 0) {
                if (param_6[6] != 0) {
                  FUN__text__00400fc0(5);
                }
                *(int *)(param_6 + 7) = iVar30;
                unaff_x26 = (ulong)local_f4;
                iVar21 = (int)local_100;
                param_6[6] = lVar49;
                bVar1 = (bool)(bVar8 ^ 1);
                lVar49 = local_108;
                uVar22 = local_100;
                if (iVar42 < 1) {
                  bVar1 = true;
                }
                goto joined_r0x00587f0c;
              }
              unaff_x26 = (ulong)local_f4;
              uVar45 = 0;
              iVar30 = 0;
              uVar20 = (uint)local_100;
              cVar40 = '\x02';
            }
            else {
              cVar40 = '\0';
              bVar8 = 1;
              uVar48 = iVar21 + iVar42 * 2;
              if ((int)param_6[7] < iVar30 * 4) goto LAB__text__00587ebc;
LAB__text__00587bf0:
              bVar1 = (bool)(bVar8 ^ 1);
              lVar49 = local_108;
              if (iVar42 < 1) {
                bVar1 = true;
              }
joined_r0x00587f0c:
              local_108 = lVar49;
              if (bVar1) {
                uVar20 = (uint)uVar22;
                uVar45 = 0;
                iVar30 = 0;
              }
              else {
                lVar26 = 0;
                iVar30 = 0;
                iVar23 = -iVar21;
                uVar22 = 1;
                uVar45 = 0;
                lVar31 = lVar49 + iVar21;
                do {
                  sVar10 = *(short *)(*param_6 + lVar26);
                  iVar46 = (int)unaff_x26;
                  iVar42 = (int)uVar45;
                  iVar24 = (int)lVar26;
                  if (uVar28 < 2) {
                    cVar40 = false;
                    iVar36 = __s[sVar10];
                    iVar35 = (__s + sVar10)[1];
                    if (iVar36 < 0) goto LAB__text__00587c7c;
LAB__text__00587cb4:
                    sVar14 = (short)iVar21 + (short)lVar26;
                    lVar37 = (long)iVar42 * 2;
                    if (iVar35 < 0) {
                      *(short *)(param_6[6] + (long)iVar42 * 2) = sVar14;
                      if (iVar46 == 1) {
                        *(byte *)(lVar31 + lVar26 + 1) = (byte)iVar35 | 0x80;
                      }
                      else {
                        uVar20 = uVar48 + iVar23;
                        if ((int)uVar20 < 0) {
                          uVar20 = uVar20 + 1;
                        }
                        *(byte *)(lVar31 + lVar26 + 1) = (byte)(uVar20 >> 1) | 0x80;
                        *(short *)(lVar49 + (int)uVar48) = (short)iVar35;
                        uVar48 = uVar48 + 2;
                      }
                      lVar19 = param_6[4];
                      __s[sVar10] = 0;
                      *(short *)(lVar19 + lVar37) = (short)iVar36;
                      sVar10 = *(short *)(param_6[4] + lVar37);
LAB__text__00587e04:
                      uVar45 = (ulong)(iVar42 + 1);
                      iVar30 = (iVar30 - ((int)~__s[sVar10] >> 0x1f)) -
                               ((int)~(__s + sVar10)[1] >> 0x1f);
                    }
                    else {
                      lVar19 = param_6[4];
                      *(undefined8 *)(__s + sVar10) = 0;
                      uVar45 = (ulong)(iVar42 + 2);
                      *(short *)(lVar19 + lVar37) = (short)iVar36;
                      lVar19 = lVar37 + 2;
                      *(short *)(param_6[4] + lVar19) = (short)iVar35;
                      *(short *)(param_6[6] + lVar37) = sVar14;
                      *(short *)(param_6[6] + lVar19) = sVar14 + 1;
                      iVar30 = (((iVar30 - ((int)~__s[*(short *)(param_6[4] + lVar37)] >> 0x1f)) -
                                ((int)~(__s + *(short *)(param_6[4] + lVar37))[1] >> 0x1f)) -
                               ((int)~__s[*(short *)(param_6[4] + lVar19)] >> 0x1f)) -
                               ((int)~(__s + *(short *)(param_6[4] + lVar19))[1] >> 0x1f);
                    }
                  }
                  else {
                    uVar16 = (iVar21 + iVar24) -
                             ((int)*(short *)(param_6[2] + lVar26) & 0xfffffffeU);
                    uVar20 = uVar16;
                    if ((int)uVar16 < 0) {
                      uVar20 = uVar16 + 1;
                    }
                    cVar40 = 0xff < (int)uVar16;
                    *(char *)(lVar49 + *(short *)(param_6[2] + lVar26)) = (char)(uVar20 >> 1);
                    iVar36 = __s[sVar10];
                    iVar35 = (__s + sVar10)[1];
                    if (-1 < iVar36) goto LAB__text__00587cb4;
LAB__text__00587c7c:
                    if (-1 < iVar35) {
                      *(short *)(param_6[6] + (long)iVar42 * 2) = (short)iVar21 + (short)lVar26 + 1;
                      if (iVar46 == 1) {
                        *(byte *)(lVar31 + lVar26) = (byte)iVar36 | 0x80;
                      }
                      else {
                        uVar20 = uVar48 + iVar23;
                        if ((int)uVar20 < 0) {
                          uVar20 = uVar20 + 1;
                        }
                        *(byte *)(lVar31 + lVar26) = (byte)(uVar20 >> 1) | 0x80;
                        *(short *)(lVar49 + (int)uVar48) = (short)iVar36;
                        uVar48 = uVar48 + 2;
                      }
                      lVar37 = param_6[4];
                      (__s + sVar10)[1] = 0;
                      *(short *)(lVar37 + (long)iVar42 * 2) = (short)iVar35;
                      sVar10 = *(short *)(param_6[4] + (long)iVar42 * 2);
                      goto LAB__text__00587e04;
                    }
                    if (iVar46 == 1) {
                      *(byte *)(lVar31 + lVar26) = (byte)iVar36 | 0x80;
                      ((byte *)(lVar31 + lVar26))[1] = (byte)iVar35 | 0x80;
                    }
                    else {
                      uVar20 = uVar48 + iVar23;
                      uVar16 = uVar20;
                      if ((int)uVar20 < 0) {
                        uVar16 = uVar20 + 1;
                      }
                      *(byte *)(lVar31 + lVar26) = (byte)(uVar16 >> 1) | 0x80;
                      uVar16 = uVar20 + 3;
                      if (-1 < (int)(uVar20 + 2)) {
                        uVar16 = uVar20 + 2;
                      }
                      ((byte *)(lVar31 + lVar26))[1] = (byte)(uVar16 >> 1) | 0x80;
                      lVar37 = (long)(int)uVar48;
                      uVar48 = uVar48 + 4;
                      *(undefined2 *)(lVar49 + lVar37) = (short)iVar36;
                      ((undefined2 *)(lVar49 + lVar37))[1] = (short)iVar35;
                    }
                  }
                  if (uVar47 <= uVar22) break;
                  lVar26 = lVar26 + 2;
                  iVar23 = iVar23 + -2;
                  uVar22 = uVar22 + 1;
                } while ((bool)cVar40 == false);
                uVar20 = iVar21 + iVar24 + 2;
              }
            }
            if ((int)unaff_x26 != 2) {
              uVar48 = uVar20;
            }
            uVar22 = (ulong)uVar48;
            lVar49 = *param_6;
            *param_6 = param_6[4];
            iVar23 = (int)param_6[1];
            *(int *)(param_6 + 1) = (int)param_6[5];
            param_6[4] = lVar49;
            *(int *)(param_6 + 5) = iVar23;
            lVar31 = param_6[2];
            param_6[2] = param_6[6];
            lVar49 = param_6[3];
            *(int *)(param_6 + 3) = (int)param_6[7];
            param_6[6] = lVar31;
            *(int *)(param_6 + 7) = (int)lVar49;
          } while ((cVar40 == '\0') && (uVar28 = uVar28 + 1, uVar47 = uVar45, (int)uVar45 != 0));
        }
        lVar49 = local_110 + 1;
        param_1 = local_118;
      } while ((lVar49 < (long)local_128) && (pvVar41 = local_120, cVar40 == '\0'));
      if (cVar40 != '\0') {
LAB__text__00587fac:
        lVar49 = *param_1;
joined_r0x00587fec:
        if (lVar49 != 0) {
          FUN__text__00400fc0(5);
          *param_1 = 0;
        }
      }
    }
  }
  return cVar40;
}


