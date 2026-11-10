/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047ec80; name: FUN_.text__0047ec80
 */


void FUN__text__0047ec80(long param_1,uint param_2,undefined8 param_3,float *param_4,
                        undefined8 param_5,ulong param_6,ulong param_7,long param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  size_t sVar13;
  undefined1 *__s;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  float *pfVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long alStack_130 [2];
  long local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  float *pfStack_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  uint local_dc;
  ulong local_d8;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  uint local_b4;
  ulong local_b0;
  ulong local_a8;
  uint local_9c;
  long local_98;
  size_t local_90;
  uint local_84;
  undefined1 *local_80;
  
  local_b4 = (uint)param_7;
  local_c4 = local_b4 & 0xf00;
  uVar1 = local_b4 >> 0xc & 0x637;
  uVar5 = uVar1 - (uVar1 >> 1 & 0xf1f1f1f1);
  uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
  uVar28 = local_b4;
  if (local_c4 == 0x100) {
    uVar28 = uVar1 << 0xc | (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
  }
  local_b4 = local_b4 & 0xff;
  uVar5 = *(uint *)(param_9 + 0xc0);
  if ((*(uint *)(param_9 + 0xb8) & 0xf00) != 0x300) {
    uVar5 = *(uint *)(param_9 + 0xb8);
  }
  local_a8 = (ulong)uVar5;
  uVar1 = uVar5 & 0xff;
  local_90 = (size_t)(uVar1 * 4);
  local_98 = param_9;
  local_dc = uVar1 * 4 + 0xc & 0x7f0;
  local_e8 = (ulong)local_dc;
  local_dc = local_dc * local_b4;
  uVar15 = local_dc >> 2;
  lVar9 = -(ulong)(local_dc * param_2);
  __s = (undefined1 *)((long)alStack_130 + lVar9 + 0x10);
  local_c0 = param_8;
  local_b0 = param_7;
  local_9c = param_2;
  memset(__s,0,(ulong)(local_dc * param_2));
  lVar8 = local_98;
  uVar31 = local_9c;
  local_84 = uVar15;
  uVar3 = uVar28 & 0xff;
  uVar30 = (ulong)uVar3;
  local_80 = __s;
  puVar10 = __s;
  if ((uVar28 & 0xff) != 0) {
    if (*(char *)(param_1 + 0x94) == '\0') {
      fVar32 = 1.0 / SQRT((float)uVar30);
      if ((local_a8 & 0xe00) == 0) {
        uVar28 = (int)local_a8 + (((int)local_a8 << 0x10) >> 0x1f);
        uVar31 = uVar28 & 0xff;
        uVar20 = (ulong)uVar31;
        fVar32 = fVar32 / (float)uVar31;
        if (uVar3 < 2) {
          if (uVar31 != 0) {
            uVar19 = 0;
            uVar30 = 0;
            uVar3 = local_9c;
            if (local_9c < 2) {
              uVar3 = 1;
            }
            do {
              if (uVar31 < 8) {
                lVar8 = 0;
              }
              else {
                lVar8 = 0;
                pfVar12 = (float *)((long)&local_110 + uVar19 * 4 + lVar9);
                do {
                  lVar8 = lVar8 + -8;
                  pfVar12[-4] = fVar32;
                  pfVar12[-3] = fVar32;
                  pfVar12[-2] = fVar32;
                  pfVar12[-1] = fVar32;
                  *pfVar12 = fVar32;
                  pfVar12[1] = fVar32;
                  pfVar12[2] = fVar32;
                  pfVar12[3] = fVar32;
                  pfVar12 = pfVar12 + 8;
                } while (-lVar8 != (uVar20 & 0xf8));
                lVar8 = -lVar8;
              }
              if ((uVar28 & 7) != 0) {
                pfVar12 = (float *)(__s + uVar19 * 4 + lVar8 * 4);
                uVar23 = uVar20 & 7;
                do {
                  uVar23 = uVar23 - 1;
                  *pfVar12 = fVar32;
                  pfVar12 = pfVar12 + 1;
                } while (uVar23 != 0);
              }
              uVar30 = uVar30 + 1;
              uVar19 = (ulong)((int)uVar19 + uVar15);
            } while (uVar30 != uVar3);
          }
        }
        else {
          local_110 = uVar20;
          uVar23 = 0;
          uVar19 = 0;
          local_108 = uVar30;
          pfStack_100 = param_4;
          uVar28 = local_9c;
          if (local_9c < 2) {
            uVar28 = 1;
          }
          local_d8 = (ulong)uVar28;
          local_d0 = uVar20 & 7;
          uVar25 = uVar30 - 1;
          local_f0 = uVar25;
          uVar14 = uVar20 & 0xf8;
          local_120 = (long)&local_110 + lVar9;
          local_118 = (ulong)(uVar1 + 3 & 0x1fc);
          uVar18 = (local_a8 & 0xff) + 3 >> 2;
          do {
            lVar9 = uVar23 * 4;
            if ((uint)uVar20 != 0) {
              if ((uint)uVar20 < 8) {
                lVar8 = 0;
              }
              else {
                lVar8 = 0;
                pfVar12 = (float *)(local_120 + lVar9);
                do {
                  lVar8 = lVar8 + -8;
                  pfVar12[-4] = fVar32;
                  pfVar12[-3] = fVar32;
                  pfVar12[-2] = fVar32;
                  pfVar12[-1] = fVar32;
                  *pfVar12 = fVar32;
                  pfVar12[1] = fVar32;
                  pfVar12[2] = fVar32;
                  pfVar12[3] = fVar32;
                  pfVar12 = pfVar12 + 8;
                } while (-lVar8 != uVar14);
                lVar8 = -lVar8;
              }
              if (local_d0 != 0) {
                pfVar12 = (float *)(puVar10 + lVar9 + lVar8 * 4);
                uVar22 = local_d0;
                do {
                  uVar22 = uVar22 - 1;
                  *pfVar12 = fVar32;
                  pfVar12 = pfVar12 + 1;
                } while (uVar22 != 0);
              }
            }
            sVar13 = local_90;
            if (uVar1 != 0) {
              if ((int)uVar30 == 2) {
                lVar9 = 1;
              }
              else {
                puVar10 = puVar10 + lVar9;
                uVar30 = 0;
                local_f8 = uVar23;
                do {
                  uVar20 = uVar30;
                  puVar11 = puVar10 + uVar18 * 0x10;
                  memcpy(puVar11,puVar10,sVar13);
                  puVar10 = puVar10 + uVar18 * 0x20;
                  memcpy(puVar10,puVar11,sVar13);
                  uVar30 = uVar20 + 2;
                } while ((uVar25 & 0xfffffffffffffffe) != uVar30);
                lVar9 = uVar20 + 3;
                uVar20 = local_110;
                uVar30 = local_108;
                param_4 = pfStack_100;
                uVar23 = local_f8;
                uVar15 = local_84;
                puVar10 = local_80;
              }
              if ((local_f0 & 1) != 0) {
                uVar15 = uVar15 * (int)uVar19;
                memcpy(puVar10 + lVar9 * local_118 * 4 + (ulong)uVar15 * 4,
                       puVar10 + (lVar9 + -1) * local_118 * 4 + (ulong)uVar15 * 4,local_90);
                puVar10 = local_80;
                uVar15 = local_84;
              }
            }
            uVar19 = uVar19 + 1;
            uVar23 = (ulong)((int)uVar23 + uVar15);
          } while (uVar19 != local_d8);
        }
      }
      else {
        uVar23 = 0;
        uVar20 = 0;
        uVar19 = (local_a8 & 0xff) + 3 >> 2;
        if (local_9c < 2) {
          uVar31 = 1;
        }
        do {
          if (uVar3 < 8) {
            uVar25 = 0;
          }
          else {
            uVar25 = 0;
            pfVar12 = (float *)(__s + uVar23 * 4);
            do {
              uVar25 = uVar25 + 8;
              *pfVar12 = fVar32;
              pfVar12[uVar19 * 4] = fVar32;
              pfVar12[uVar19 * 8] = fVar32;
              pfVar12[uVar19 * 0xc] = fVar32;
              pfVar12[uVar19 * 0x10] = fVar32;
              pfVar12[uVar19 * 0x14] = fVar32;
              pfVar12[uVar19 * 0x18] = fVar32;
              pfVar12[uVar19 * 0x1c] = fVar32;
              pfVar12 = pfVar12 + uVar19 * 0x20;
            } while ((uVar30 & 0xf8) != uVar25);
          }
          if ((uVar28 & 7) != 0) {
            pfVar12 = (float *)(__s + uVar23 * 4 + uVar19 * 0x10 * uVar25);
            uVar25 = uVar30 & 7;
            do {
              *pfVar12 = fVar32;
              pfVar12 = pfVar12 + uVar19 * 4;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
          uVar20 = uVar20 + 1;
          uVar23 = (ulong)((int)uVar23 + uVar15);
        } while (uVar20 != uVar31);
      }
    }
    else if (*(char *)(local_98 + 0x6c) == '\0') {
      if ((((param_6 & 1) == 0) && (local_9c < 2)) && ((*(byte *)(local_c0 + 0x198) >> 1 & 1) == 0))
      {
        iVar7 = (uVar1 + 3 & 0x1fc) * local_b4;
        if (iVar7 == 0) goto LAB__text__0047f2a8;
        sVar13 = (size_t)(uint)(iVar7 * 4);
        puVar11 = *(undefined1 **)(local_98 + 0x100);
      }
      else {
        FUN__text__0045c1d8(local_c0);
        lVar9 = FUN__text__0040a740();
        FUN__text__00485210(*(undefined4 *)(lVar8 + 0x5c),*(undefined4 *)(lVar8 + 0x60),
                            *(undefined4 *)(lVar8 + 100),*(undefined4 *)(lVar8 + 0x58),
                            *(undefined1 *)(lVar8 + 0x6d),local_b0 & 0xffffffff,local_a8,local_80,
                            lVar9 + 200);
        puVar10 = local_80;
        uVar15 = local_84;
        if ((uVar31 < 2) || (iVar7 = (uVar1 + 3 & 0x1fc) * local_b4, iVar7 == 0))
        goto LAB__text__0047f2a8;
        sVar13 = (size_t)(uint)(iVar7 * 4);
        uVar30 = (ulong)local_9c;
        if (local_9c == 2) {
          iVar7 = 1;
        }
        else {
          uVar28 = 0;
          iVar7 = local_84 * 2;
          uVar20 = 0;
          do {
            uVar19 = uVar20;
            memcpy(local_80 + (ulong)(local_84 + uVar28) * 4,local_80,sVar13);
            uVar28 = iVar7 + uVar28;
            memcpy(local_80 + (ulong)uVar28 * 4,local_80,sVar13);
            uVar20 = uVar19 + 2;
          } while ((uVar30 - 1 & 0xfffffffffffffffe) != uVar20);
          iVar7 = (int)uVar19 + 3;
        }
        puVar10 = local_80;
        uVar15 = local_84;
        if ((uVar30 - 1 & 1) == 0) goto LAB__text__0047f2a8;
        puVar10 = local_80 + (ulong)(local_84 * iVar7) * 4;
        puVar11 = local_80;
      }
      memcpy(puVar10,puVar11,sVar13);
      puVar10 = local_80;
      uVar15 = local_84;
    }
    else {
      FUN__text__0045c1d8(local_c0);
      lVar8 = FUN__text__0040a740();
      uVar3 = local_84;
      puVar10 = local_80;
      uVar15 = local_84;
      if (lVar8 != 0) {
        lVar16 = local_98 + 0x58;
        uVar30 = local_b0 & 0xffffffff;
        *(undefined1 **)((long)alStack_130 + lVar9) = local_80;
        FUN__text__0047dfb0(lVar16,param_5,local_9c,uVar30,uVar28,local_a8,uVar3,lVar8 + 200);
        puVar10 = local_80;
        uVar15 = local_84;
      }
    }
  }
LAB__text__0047f2a8:
  sVar13 = local_90;
  uVar28 = local_9c;
  uVar20 = local_a8;
  uVar30 = local_b0;
  uVar3 = local_b4;
  uVar31 = (uint)local_a8;
  if ((((uint)local_b0 >> 0xf & 1) != 0) && ((uVar31 >> 0xf & 1) != 0)) {
    uVar21 = local_9c;
    if (local_9c < 2) {
      uVar21 = 1;
    }
    lVar9 = (long)(int)(uVar1 - 1) * 4 + (ulong)((uVar1 + 3 & 0x1fc) * (local_b4 - 1)) * 4;
    uVar19 = (ulong)uVar21 & 3;
    if (uVar21 < 4) {
      uVar23 = 0;
    }
    else {
      uVar24 = 0;
      uVar23 = 0;
      do {
        *(undefined4 *)(puVar10 + (ulong)uVar24 * 4 + lVar9) = 0x3f800000;
        *(undefined4 *)(puVar10 + (ulong)(uVar15 + uVar24) * 4 + lVar9) = 0x3f800000;
        uVar23 = uVar23 + 4;
        *(undefined4 *)(puVar10 + (ulong)(uVar15 * 2 + uVar24) * 4 + lVar9) = 0x3f800000;
        uVar29 = uVar15 * 3 + uVar24;
        uVar24 = uVar24 + uVar15 * 4;
        *(undefined4 *)(puVar10 + (ulong)uVar29 * 4 + lVar9) = 0x3f800000;
      } while (((ulong)uVar21 & 0xfffffffc) != uVar23);
    }
    if ((uVar21 & 3) != 0) {
      uVar21 = uVar15 * (int)uVar23;
      do {
        *(undefined4 *)(puVar10 + (ulong)uVar21 * 4 + lVar9) = 0x3f800000;
        uVar21 = uVar21 + uVar15;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  lVar9 = local_98;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((((lVar8 != 0) && (local_c4 == 0x100)) && (*(char *)(local_98 + 0x6c) != '\0')) &&
     ((uVar31 & 0xf00) == 0x100)) {
    uVar21 = uVar28;
    if (uVar28 < 2) {
      uVar21 = 1;
    }
    uVar23 = 0;
    uVar19 = 0;
    iVar7 = (int)local_e8;
    uVar25 = (ulong)((int)sVar13 + 0xc) & 0x7f0;
    do {
      __s = __s + -((ulong)(iVar7 + 0xf) & 0xff0);
      if (uVar1 != 0) {
        uVar24 = 0;
        uVar29 = 0;
        puVar11 = puVar10 + uVar23 * 4;
        uVar4 = *(uint *)(param_1 + 0x38);
        pfVar12 = (float *)(puVar10 + uVar23 * 4 + 8);
        uVar26 = 1;
        do {
          uVar2 = uVar4 >> 0xc & uVar26;
          if ((uVar26 & uVar31 >> 0xc) == 0) {
            if (uVar2 != 0) {
              uVar24 = uVar24 + 1;
            }
          }
          else if (uVar2 == 0) {
            *(undefined4 *)(__s + (ulong)uVar29 * 4) = 0x3f800000;
            uVar29 = uVar29 + 1;
          }
          else {
            uVar14 = (ulong)uVar24;
            uVar24 = uVar24 + 1;
            *(undefined4 *)(__s + (ulong)uVar29 * 4) = *(undefined4 *)(lVar8 + uVar14 * 4);
            uVar29 = uVar29 + 1;
          }
          uVar26 = uVar26 << 1;
        } while (uVar29 < uVar1);
        if (uVar3 != 0 && uVar1 != 0) {
          uVar14 = 0;
          do {
            if (uVar1 < 4) {
              lVar16 = 0;
            }
            else {
              lVar16 = 0;
              pfVar17 = pfVar12;
              pfVar27 = (float *)(__s + 8);
              do {
                fVar32 = pfVar27[-1];
                lVar16 = lVar16 + -4;
                fVar33 = *pfVar27;
                fVar34 = pfVar27[1];
                pfVar17[-2] = pfVar17[-2] * pfVar27[-2];
                pfVar17[-1] = pfVar17[-1] * fVar32;
                *pfVar17 = *pfVar17 * fVar33;
                pfVar17[1] = pfVar17[1] * fVar34;
                pfVar17 = pfVar17 + 4;
                pfVar27 = pfVar27 + 4;
              } while (-lVar16 != ((ulong)uVar1 & 0xfc));
              lVar16 = -lVar16;
            }
            if ((uVar5 & 3) != 0) {
              pfVar17 = (float *)(puVar11 + lVar16 * 4);
              pfVar27 = (float *)(__s + lVar16 * 4);
              uVar18 = (ulong)uVar1 & 3;
              do {
                uVar18 = uVar18 - 1;
                *pfVar17 = *pfVar17 * *pfVar27;
                pfVar17 = pfVar17 + 1;
                pfVar27 = pfVar27 + 1;
              } while (uVar18 != 0);
            }
            uVar14 = uVar14 + 1;
            pfVar12 = (float *)((long)pfVar12 + uVar25);
            puVar11 = puVar11 + uVar25;
          } while (uVar14 != (uVar30 & 0xff));
        }
      }
      uVar19 = uVar19 + 1;
      uVar23 = (ulong)((int)uVar23 + uVar15);
    } while (uVar19 != uVar21);
  }
  if (uVar28 == 1) {
    uVar3 = (uVar1 + 3 & 0x1fc) * uVar3;
    uVar30 = (ulong)uVar3;
    if (uVar3 != 0) {
      fVar32 = *param_4;
      pfVar12 = (float *)(puVar10 + 4);
      pfVar17 = (float *)(*(long *)(lVar9 + 0xf8) + 4);
      do {
        uVar30 = uVar30 - 2;
        pfVar17[-1] = pfVar12[-1] * fVar32;
        *pfVar17 = *pfVar12 * fVar32;
        pfVar12 = pfVar12 + 2;
        pfVar17 = pfVar17 + 2;
      } while (uVar30 != 0);
    }
  }
  else {
    uVar5 = *(uint *)(lVar9 + 0xc0);
    if ((*(uint *)(lVar9 + 0xb8) & 0xf00) != 0x300) {
      uVar5 = *(uint *)(lVar9 + 0xb8);
    }
    lVar8 = (ulong)((uVar5 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(lVar9 + 0xc0) & 0xff);
    if ((int)lVar8 != 0) {
      memset(*(void **)(lVar9 + 0xf8),0,lVar8 * 4);
    }
    cVar6 = FUN__text__00478e78(*(undefined8 *)(*(long *)(local_c0 + 0x150) + 8));
    if (cVar6 == '\x01') {
      uVar3 = (uVar1 + 3 & 0x1fc) * uVar3;
      if (uVar3 != 0) {
        uVar20 = 0;
        uVar30 = 0;
        if (uVar28 < 2) {
          uVar28 = 1;
        }
        do {
          fVar32 = param_4[uVar30];
          pfVar17 = (float *)(local_80 + uVar20 * 4 + 8);
          pfVar12 = (float *)(__s + (8 - ((ulong)(local_dc + 0xf) & 0xffff0)));
          uVar19 = (ulong)uVar3;
          do {
            fVar33 = pfVar17[-2];
            uVar19 = uVar19 - 4;
            fVar34 = *pfVar17;
            fVar35 = pfVar17[1];
            pfVar12[-1] = pfVar17[-1] * fVar32;
            *pfVar12 = fVar34 * fVar32;
            pfVar12[-2] = fVar33 * fVar32;
            pfVar12[1] = fVar35 * fVar32;
            pfVar12 = pfVar12 + 4;
            pfVar17 = pfVar17 + 4;
          } while (uVar19 != 0);
          pfVar12 = (float *)(*(long *)(lVar9 + 0xf8) + 8);
          pfVar17 = (float *)(__s + (8 - ((ulong)(local_dc + 0xf) & 0xffff0)));
          uVar19 = (ulong)uVar3;
          do {
            fVar32 = pfVar17[-2];
            uVar19 = uVar19 - 4;
            fVar33 = *pfVar17;
            fVar34 = pfVar17[1];
            pfVar12[-1] = pfVar12[-1] + pfVar17[-1];
            pfVar12[-2] = pfVar12[-2] + fVar32;
            *pfVar12 = *pfVar12 + fVar33;
            pfVar12[1] = pfVar12[1] + fVar34;
            pfVar12 = pfVar12 + 4;
            pfVar17 = pfVar17 + 4;
          } while (uVar19 != 0);
          uVar30 = uVar30 + 1;
          uVar20 = (ulong)((int)uVar20 + local_84);
        } while (uVar30 != uVar28);
      }
    }
    else if ((uVar31 & 0xf00) == 0x200) {
      FUN__text__00488610(uVar30 & 0xffffffff,uVar20,local_80,local_84,param_4,uVar28,
                          *(undefined8 *)(lVar9 + 0xf8));
    }
    else {
      uVar30 = (ulong)(local_dc + 0xf) & 0xffff0;
      uVar3 = (uVar1 + 3 & 0x1fc) * uVar3;
      if (uVar3 != 0) {
        uVar19 = 0;
        uVar20 = 0;
        if (uVar28 < 2) {
          uVar28 = 1;
        }
        do {
          fVar32 = param_4[uVar20];
          pfVar12 = (float *)(local_80 + uVar19 * 4 + 8);
          pfVar17 = (float *)(__s + (8 - uVar30));
          uVar23 = (ulong)uVar3;
          do {
            fVar33 = pfVar12[-1];
            uVar23 = uVar23 - 4;
            fVar34 = *pfVar12;
            fVar35 = pfVar12[1];
            pfVar17[-2] = pfVar12[-2] * fVar32;
            pfVar17[-1] = fVar33 * fVar32;
            *pfVar17 = fVar34 * fVar32;
            pfVar17[1] = fVar35 * fVar32;
            pfVar12 = pfVar12 + 4;
            pfVar17 = pfVar17 + 4;
          } while (uVar23 != 0);
          pfVar12 = (float *)(*(long *)(lVar9 + 0xf8) + 4);
          uVar23 = (ulong)uVar3;
          pfVar17 = (float *)(__s + (4 - uVar30));
          do {
            fVar32 = pfVar12[-1];
            fVar33 = *pfVar12;
            fVar34 = pfVar17[-1];
            fVar35 = *pfVar17;
            if (fVar32 * fVar32 <= fVar34 * fVar34) {
              fVar32 = fVar34;
            }
            if (fVar33 * fVar33 <= fVar35 * fVar35) {
              fVar33 = fVar35;
            }
            uVar23 = uVar23 - 2;
            pfVar12[-1] = fVar32;
            *pfVar12 = fVar33;
            pfVar12 = pfVar12 + 2;
            pfVar17 = pfVar17 + 2;
          } while (uVar23 != 0);
          uVar20 = uVar20 + 1;
          uVar19 = (ulong)((int)uVar19 + local_84);
        } while (uVar20 != uVar28);
      }
    }
  }
  return;
}


