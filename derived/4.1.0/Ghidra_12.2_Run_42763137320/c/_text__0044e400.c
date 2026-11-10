/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044e400; name: FUN_.text__0044e400
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0044e400(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  float *pfVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  byte bVar16;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 uVar22;
  int iVar23;
  undefined8 uVar24;
  long lVar25;
  byte *pbVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  byte *local_150;
  undefined8 *puStack_148;
  long local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined8 local_c0;
  long *local_b8;
  long local_b0;
  ulong local_a8;
  undefined4 local_a0;
  long *local_98;
  long local_90;
  char local_88;
  undefined1 local_80;
  undefined4 local_64;
  
  lVar25 = *(long *)(param_1 + 0xe0);
  uVar11 = *(uint *)(param_1 + 0x150);
  local_118 = (ulong)uVar11;
  plVar27 = *(long **)(lVar25 + 0x18);
  lVar13 = plVar27[0x70];
  if (((int)lVar13 != -1) && (*(undefined4 *)(param_1 + 0xf8) = 2, (int)lVar13 == 0)) {
    return 0;
  }
  *param_2 = 0;
  *(undefined2 *)((long)param_2 + 0x12) = 0;
  *(uint *)(param_2 + 1) = uVar11;
  *(short *)(param_2 + 2) = (short)_DAT_008ab03c;
  local_64 = (undefined4)plVar27[0x50];
  fVar28 = *(float *)((long)plVar27 + 0x25c) + *(float *)((long)plVar27 + 0xb4);
  if (fVar28 == *(float *)(param_1 + 0x154)) {
    fVar30 = *(float *)(param_1 + 0x158);
    lVar13 = *(long *)(param_1 + 0x30);
    if (lVar13 != 0) goto LAB__text__0044e584;
LAB__text__0044e4c4:
    if ((*(byte *)(param_1 + 0x58) >> 1 & 1) != 0) {
      bVar16 = 1;
      bVar18 = 1;
LAB__text__0044e638:
      if ((bVar18 == 0) || (bVar16 == 0)) {
        if ((*(ushort *)(*(long *)(param_1 + 8) + 0x208) & 0x300) == 0) {
          uVar11 = 1;
        }
        else {
          if (lVar13 == 0) {
            uVar11 = 1;
          }
          else {
            fVar28 = *_DAT_008a4f30;
            uVar11 = 1;
            do {
              *(undefined4 *)(lVar13 + 0x18c) = 0xc5800000;
              uVar11 = uVar11 & (*(byte *)(lVar13 + 0x198) & 2) >> 1;
              *(byte *)(lVar13 + 0x198) = *(byte *)(lVar13 + 0x198) & 0xfe | -4096.0 <= fVar28;
              lVar13 = *(long *)(lVar13 + 0x20);
            } while (lVar13 != 0);
          }
          uVar11 = uVar11 ^ 1;
        }
        goto LAB__text__0044e644;
      }
    }
LAB__text__0044e640:
    uVar11 = 0;
  }
  else {
    pfVar12 = *(float **)(lVar25 + 0x10);
    if (pfVar12 == (float *)0x0) {
      fVar29 = 1.0;
    }
    else {
      fVar29 = pfVar12[1];
      if ((*(ushort *)(*(long *)(lVar25 + 0x18) + 0x162) >> 5 & 1) != 0) {
        fVar29 = *pfVar12 * fVar29;
      }
    }
    fVar31 = fVar28 * 0.05;
    fVar30 = 0.0;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if (-37.0 <= fVar31) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar31)) {
        bVar4 = fVar31 < 37.0;
        bVar5 = fVar31 == 37.0;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      uVar11 = (uint)(fVar28 * 1393317.6 + 1.0653532e+09);
      fVar30 = (float)(uVar11 & 0x7fffff | 0x3f800000);
      fVar30 = (fVar30 * (fVar30 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar11 & 0xff800000);
    }
    fVar30 = fVar30 * fVar29;
    *(float *)(param_1 + 0x154) = fVar28;
    *(float *)(param_1 + 0x158) = fVar30;
    lVar13 = *(long *)(param_1 + 0x30);
    if (lVar13 == 0) goto LAB__text__0044e4c4;
LAB__text__0044e584:
    bVar16 = 1;
    bVar18 = 1;
    lVar20 = lVar13;
    do {
      while (bVar16 == 0) {
        bVar16 = 0;
        if (bVar18 == 0) goto LAB__text__0044e5c4;
LAB__text__0044e5a0:
        bVar18 = *(byte *)(lVar20 + 0x198) & 1;
        lVar20 = *(long *)(lVar20 + 0x20);
        if (lVar20 == 0) goto LAB__text__0044e5d0;
      }
      bVar16 = *(byte *)(lVar20 + 0x198) >> 1 & 1;
      if (bVar18 != 0) goto LAB__text__0044e5a0;
LAB__text__0044e5c4:
      bVar18 = 0;
      lVar20 = *(long *)(lVar20 + 0x20);
    } while (lVar20 != 0);
LAB__text__0044e5d0:
    if ((*(byte *)(param_1 + 0x58) >> 1 & 1) != 0) goto LAB__text__0044e638;
    if (bVar18 != 0) goto LAB__text__0044e640;
    uVar3 = *(ushort *)(*(long *)(param_1 + 8) + 0x208);
    uVar11 = (uint)((uVar3 & 0x300) == 0);
    if (((uVar3 & 0x300) != 0) && (lVar13 != 0)) {
      bVar4 = -4096.0 <= _DAT_008ab08c;
      do {
        *(undefined4 *)(lVar13 + 0x18c) = 0xc5800000;
        *(byte *)(lVar13 + 0x198) = *(byte *)(lVar13 + 0x198) & 0xfc | bVar4 | 2;
        lVar13 = *(long *)(lVar13 + 0x20);
      } while (lVar13 != 0);
      goto LAB__text__0044e640;
    }
  }
LAB__text__0044e644:
  pbVar26 = (byte *)(param_1 + 0x58);
  fVar28 = (float)NEON_fminnm((int)plVar27[0x15],0x42c80000);
  if (fVar28 <= 0.0) {
    fVar28 = 0.0;
  }
  if (fVar28 != *(float *)(param_1 + 0x88)) {
    *(float *)(param_1 + 0x88) = fVar28;
    *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 1;
  }
  fVar28 = (float)NEON_fminnm(*(undefined4 *)((long)plVar27 + 0xac),0x42c80000);
  if (fVar28 != *(float *)(param_1 + 0x94)) {
    *(float *)(param_1 + 0x94) = fVar28;
    *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 1;
  }
  local_128 = plVar27 + 3;
  local_130 = (long *)(param_1 + 0x70);
  fVar28 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 2));
  fVar28 = *(float *)((long)plVar27 + 700) * fVar28;
  fVar29 = 0.5;
  if (fVar28 <= 0.0) {
    fVar29 = -0.5;
  }
  iVar23 = (int)(fVar29 + fVar28);
  if (uVar11 == 0) {
    if (*(int *)(param_1 + 0x114) == 1) {
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN__text__004286a0();
      }
      bVar5 = false;
      *(undefined4 *)(param_1 + 0xf8) = 2;
      bVar4 = false;
      *(undefined4 *)(param_1 + 300) = 0x11;
    }
    else if (*(int *)(param_1 + 0x114) == 2) {
      if (((*pbVar26 & 1) != 0) &&
         ((**(code **)(*(long *)(param_1 + 0x70) + 0x28))
                    (local_130,*(undefined4 *)(param_1 + 0x110)), *(int *)(param_1 + 0x110) != 2)) {
        (**(code **)(*(long *)(param_1 + 0x70) + 0x18))(local_130);
        uVar11 = *(uint *)(param_1 + 0x108);
        uVar24 = 0;
        if (uVar11 != 0) {
          uVar24 = *(undefined8 *)(param_1 + 0x100);
        }
        FUN__text__0048d920(DAT_00ae9a80,uVar24,uVar11);
        if (0 < (int)uVar11) {
          lVar13 = 0;
          do {
            lVar20 = *(long *)(param_1 + 0x100) + lVar13;
            if (*(char *)(lVar20 + 0x18) != '\0') {
              FUN__text__00400fc0(5,*(undefined8 *)(lVar20 + 8));
              *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar13 + 8) = 0;
            }
            lVar13 = lVar13 + 0x20;
          } while ((ulong)uVar11 * 0x20 != lVar13);
        }
        uVar7 = *(int *)(param_1 + 0x108) - uVar11;
        if (uVar7 != 0) {
          memmove(*(void **)(param_1 + 0x100),
                  (void *)((long)*(void **)(param_1 + 0x100) + (ulong)uVar11 * 0x20),
                  (ulong)uVar7 << 5);
        }
        *(uint *)(param_1 + 0x108) = uVar7;
      }
      if ((*(int *)(param_1 + 0x110) == 1) && ((int)plVar27[0x66] < iVar23)) {
        local_110 = CONCAT44(local_110._4_4_,iVar23);
        iVar9 = (**(code **)(*local_130 + 0x20))(local_130,&local_110);
        bVar5 = false;
        iVar8 = 0x2c;
        if (iVar9 != 0x2d) {
          iVar8 = iVar9;
        }
        *(int *)((long)param_2 + 0x2c) = iVar8;
        bVar4 = false;
      }
      else {
        bVar5 = false;
        bVar4 = false;
      }
    }
    else {
      bVar4 = false;
      bVar5 = true;
    }
  }
  else {
    local_c4 = 0;
    local_110 = 0xffffffffffffffff;
    uStack_108 = 0;
    local_e0 = 0xffff3f800000;
    local_c8 = 0x3f800000;
    local_c2 = 1;
    local_f0 = 0;
    uStack_e8 = 0x3f80000000000000;
    local_100 = 0x3f800000;
    uStack_f8 = 0x3f800000;
    local_d8 = 0x3f800000;
    uStack_d0 = 0;
    uVar2 = *(uint *)(plVar27 + 0x43);
    local_a0 = *(undefined4 *)((long)plVar27 + 0x20c);
    local_88 = '\0';
    local_80 = (undefined1)(int)*(float *)(plVar27 + 99);
    local_c0 = 0x3f8000003f800000;
    local_b8 = _DAT_008a47f0;
    uVar7 = (uint)(plVar27[0x37] != 0) & (uint)(*(ushort *)((long)plVar27 + 0x1b4) >> 6);
    uVar11 = uVar2 + uVar7;
    local_98 = (long *)0x0;
    local_90 = 0;
    local_b0 = 0;
    local_a8 = 0;
    lVar13 = (long)&local_150 - ((ulong)uVar11 * 0x18 + 0xf & 0x3ffffffff0);
    local_150 = pbVar26;
    puStack_148 = param_2;
    local_140 = lVar25;
    FUN__text__0047b0a0(local_128,lVar13,uVar2);
    if (uVar7 == 1) {
      puVar14 = (undefined4 *)(lVar13 + (ulong)uVar2 * 0x18);
      *puVar14 = 0x3850009;
      puVar14[4] = 0;
      *(long **)(puVar14 + 2) = plVar27 + 0x10;
    }
    local_138 = plVar27;
    local_120 = param_1;
    for (lVar25 = *(long *)(param_1 + 0x30); lVar25 != 0; lVar25 = *(long *)(lVar25 + 0x20)) {
      while (uVar7 = *(uint *)(lVar25 + 0x148), uVar7 == 1) {
        uVar7 = FUN__text__0045c058(lVar25);
        if ((((uVar7 & 0xf00) == 0x300) && (*(int *)(*(long *)(local_120 + 8) + 0x1b0) != 1)) &&
           (*(int *)(lVar25 + 0x194) != 3)) {
          uVar7 = *(uint *)(lVar25 + 0x148);
          break;
        }
        lVar20 = *(long *)(lVar25 + 0x140);
        *(undefined1 *)(lVar20 + 0x110) = 0;
        *(int *)(lVar20 + 0x10c) = (int)local_118;
        FUN__text__0044f220(*(long *)(lVar25 + 0x140) + 0x20,&local_110);
        FUN__text__0044f3a0(*(long *)(lVar25 + 0x140) + 0x20,lVar13,uVar11);
        *(undefined1 *)(*(long *)(lVar25 + 0x140) + 0x108) = 1;
        lVar25 = *(long *)(lVar25 + 0x20);
        if (lVar25 == 0) goto LAB__text__0044eb78;
      }
      uVar17 = (ulong)uVar7;
      plVar27 = *(long **)(lVar25 + 0x140);
      if (uVar17 == 0) {
        uVar22 = 1;
        iVar8 = *(int *)(lVar25 + 0x194);
joined_r0x0044e91c:
        if (iVar8 == 3) goto LAB__text__0044e930;
LAB__text__0044e920:
        lVar20 = *(long *)(local_120 + 8);
        if ((*(byte *)(lVar20 + 0x170) >> 3 & 1) == 0) goto LAB__text__0044e930;
        if (*(int *)(lVar20 + 0x1b0) != 0) {
          lVar21 = *(long *)(lVar25 + 0x170);
          uVar17 = 0;
          do {
            lVar15 = *(long *)(lVar20 + 0x1a8) + uVar17 * 0x88;
            if (lVar21 == *(long *)(lVar15 + 0x70)) {
              uVar7 = *(uint *)(lVar25 + 0x148);
              if (uVar7 != 0) {
                lVar19 = (ulong)uVar7 * 0x118;
                plVar27 = *(long **)(lVar25 + 0x140);
                do {
                  if ((*plVar27 == 0) && ((int)plVar27[2] == *(int *)(lVar15 + 0x68))) {
                    if (plVar27 != *(long **)(lVar25 + 0x140) + (ulong)uVar7 * 0x23)
                    goto LAB__text__0044ea60;
                    break;
                  }
                  plVar27 = plVar27 + 0x23;
                  lVar19 = lVar19 + -0x118;
                } while (lVar19 != 0);
              }
              plVar27 = (long *)FUN__text__0045bc90(lVar25,0);
LAB__text__0044ea60:
              if (plVar27 != (long *)0x0) {
                *(undefined1 *)(plVar27 + 0x22) = 0;
                *(int *)((long)plVar27 + 0x10c) = (int)local_118;
                FUN__text__0044f220(plVar27 + 4,&local_110);
                FUN__text__0044f3a0(plVar27 + 4,lVar13,uVar11);
                *(undefined1 *)(plVar27 + 0x21) = uVar22;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(uint *)(lVar20 + 0x1b0));
        }
      }
      else {
        lVar20 = 0;
        do {
          uVar7 = *(uint *)((long)plVar27 + lVar20 + 0x10c);
          uVar2 = uVar7 >> 8 & 0xf;
          if ((uVar2 < 4) && ((uVar7 & 0xff) != 0 || uVar2 == 3)) {
            uVar22 = 0;
            goto joined_r0x0044e8b8;
          }
          lVar20 = lVar20 + 0x118;
        } while (uVar17 * 0x118 != lVar20);
        uVar22 = 1;
joined_r0x0044e8b8:
        if (uVar17 != 0) {
          do {
            *(undefined4 *)((long)plVar27 + 0x10c) = 0;
            plVar27 = plVar27 + 0x23;
            uVar17 = (ulong)*(uint *)(lVar25 + 0x148);
          } while (plVar27 != *(long **)(lVar25 + 0x140) + uVar17 * 0x23);
          iVar8 = *(int *)(lVar25 + 0x194);
          plVar27 = *(long **)(lVar25 + 0x140);
          goto joined_r0x0044e91c;
        }
        if (*(int *)(lVar25 + 0x194) != 3) goto LAB__text__0044e920;
LAB__text__0044e930:
        plVar10 = plVar27;
        if (uVar17 == 0) {
LAB__text__0044e960:
          if (plVar10 == plVar27 + uVar17 * 0x23) goto LAB__text__0044e96c;
        }
        else {
          lVar20 = uVar17 * 0x118;
          do {
            if ((*plVar10 == 0) && ((int)plVar10[2] == 0)) goto LAB__text__0044e960;
            plVar10 = plVar10 + 0x23;
            lVar20 = lVar20 + -0x118;
          } while (lVar20 != 0);
LAB__text__0044e96c:
          plVar10 = (long *)FUN__text__0045bc90(lVar25,0,0);
        }
        if (plVar10 != (long *)0x0) {
          *(undefined1 *)(plVar10 + 0x22) = 0;
          *(int *)((long)plVar10 + 0x10c) = (int)local_118;
          FUN__text__0044f220(plVar10 + 4,&local_110);
          FUN__text__0044f3a0(plVar10 + 4,lVar13,uVar11);
          *(undefined1 *)(plVar10 + 0x21) = uVar22;
        }
      }
      FUN__text__0045c070(lVar25,local_118);
    }
LAB__text__0044eb78:
    param_1 = local_120;
    plVar27 = local_138;
    lVar25 = local_140;
    puVar14 = (undefined4 *)0x0;
    if ((*(uint *)(local_138 + 1) & 0x10) != 0) {
      puVar14 = &local_64;
    }
    FUN__text__0045acd0(fVar30,local_120,local_128,
                        *(uint *)(*(long *)(local_140 + 0x18) + 0x313) >> 0x1b & 1,puVar14);
    param_2 = puStack_148;
    pbVar26 = local_150;
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      if (*(int *)(param_1 + 0x114) != 2) goto joined_r0x0044ecbc;
      bVar18 = *(byte *)(lVar25 + 0x20);
LAB__text__0044ec48:
      if ((bVar18 & 1) == 0) {
        iVar8 = FUN__text__00428800(lVar25);
        if (iVar8 == 1) goto joined_r0x0044ecbc;
        if (iVar8 != 0x3f) {
          if (*(long *)(param_1 + 0xe0) != 0) {
            FUN__text__004286a0();
          }
          *(undefined4 *)(param_1 + 0xf8) = 2;
          *(undefined4 *)(param_1 + 300) = 0x11;
        }
        bVar4 = false;
        bVar6 = true;
      }
      else {
        iVar8 = (**(code **)(*plVar27 + 0x88))(plVar27,*(undefined4 *)(param_1 + 0x110));
        if (iVar8 == 1) {
          uVar24 = 1;
LAB__text__0044edb0:
          iVar8 = (**(code **)(*(long *)(param_1 + 0x70) + 0x30))
                            (local_130,*(undefined4 *)(param_1 + 0x110),uVar24);
          if (iVar8 == 1) goto joined_r0x0044ecbc;
        }
        else if (iVar8 != 2) {
          uVar24 = 0;
          goto LAB__text__0044edb0;
        }
        if (*(long *)(param_1 + 0xe0) != 0) {
          FUN__text__004286a0();
        }
        bVar6 = false;
        *(undefined4 *)(param_1 + 0xf8) = 2;
        bVar4 = true;
        *(undefined4 *)(param_1 + 300) = 0x11;
      }
    }
    else {
      bVar18 = *(byte *)(lVar25 + 0x20);
      if (((bVar18 & 1) == 0) && (*(int *)(param_1 + 0x114) == 2)) goto LAB__text__0044ec48;
joined_r0x0044ecbc:
      bVar4 = true;
      bVar6 = true;
    }
    if (local_b0 != 0) {
      local_a8 = local_a8 & 0xffffffff00000000;
      (**(code **)(*local_b8 + 0x18))();
      local_b0 = 0;
      local_a8 = local_a8 & 0xffffffff;
    }
    if ((local_90 != 0) && (local_88 != '\0')) {
      (**(code **)(*local_98 + 0x18))();
    }
    bVar5 = bVar4;
    if (!bVar6) {
      return 0;
    }
  }
  if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
    iVar8 = (**(code **)(*plVar27 + 0x88))(plVar27,*(undefined4 *)(param_1 + 0x110));
    plVar10 = local_130;
    if (iVar8 == 2) {
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN__text__004286a0();
      }
      bVar5 = false;
      *(undefined4 *)(param_1 + 0xf8) = 2;
      *(undefined4 *)(param_1 + 300) = 0x11;
    }
    else if (iVar8 == 1) {
      if ((*(int *)(param_1 + 0x110) == 0) && (*(int *)(param_1 + 0x114) == 2)) {
        lVar13 = *(long *)(param_1 + 8);
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x2f4) = 0;
          *(uint *)(lVar13 + 0x2fb) = *(uint *)(lVar13 + 0x2fb) & 0xfe3fffff;
        }
      }
      else if ((*(long *)(param_1 + 0xe0) != 0) &&
              ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) & 1) != 0)) {
        (**(code **)(*(long *)(param_1 + 0x70) + 0x18))(local_130);
        FUN__text__004590a0(param_1);
        iVar8 = (**(code **)(*(long *)(param_1 + 0x70) + 0x38))(plVar10);
        if (iVar8 != 1) {
          if (*(long *)(param_1 + 0xe0) != 0) {
            FUN__text__004286a0();
          }
          *(undefined4 *)(param_1 + 0xf8) = 2;
          *(undefined4 *)(param_1 + 300) = 0x11;
        }
      }
      FUN__text__0045b360(param_1,1);
    }
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfe;
  }
  iVar8 = (int)plVar27[0x66];
  bVar6 = false;
  if (iVar8 < iVar23) {
    bVar6 = bVar5;
  }
  if (-1 < iVar8) {
    *(int *)(plVar27 + 0x66) = iVar8 - iVar23;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    if ((*pbVar26 & 1) == 0) {
      if (bVar4) {
        FUN__text__00475880(plVar27,1);
      }
    }
    else if (bVar4 == false) {
      FUN__text__00477030(plVar27);
    }
  }
  *pbVar26 = bVar4;
  if (!bVar6) {
    uVar24 = 0;
    goto LAB__text__0044f1d8;
  }
  if ((*(byte *)(param_1 + 0x118) >> 1 & 1) == 0) {
    iVar23 = FUN__text__0044f5b0(param_1);
    if (iVar23 == 1) {
      if ((*(ushort *)(plVar27 + 0x44) & 1) == 0) {
        (**(code **)(plVar27[3] + 0x70))(local_128,0);
      }
      else {
        (**(code **)(plVar27[3] + 0x78))(local_128);
        if ((*(ushort *)(plVar27 + 0x44) >> 4 & 1) != 0) {
          (**(code **)(*local_128 + 0x80))();
        }
      }
      *(undefined4 *)((long)plVar27 + 0x18c) = 0x42ca0000;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x150);
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfd;
      FUN__text__00459bc0(param_1);
      fVar28 = *(float *)((long)plVar27 + 0x25c) + *(float *)((long)plVar27 + 0xb4);
      if (fVar28 == *(float *)(param_1 + 0x154)) {
        fVar30 = *(float *)(param_1 + 0x158);
      }
      else {
        pfVar12 = *(float **)(lVar25 + 0x10);
        if (pfVar12 == (float *)0x0) {
          fVar29 = 1.0;
        }
        else {
          fVar29 = pfVar12[1];
          if ((*(ushort *)(*(long *)(lVar25 + 0x18) + 0x162) >> 5 & 1) != 0) {
            fVar29 = *pfVar12 * fVar29;
          }
        }
        fVar30 = 0.0;
        if ((-37.0 <= fVar28 * 0.05) && (fVar28 * 0.05 <= 37.0)) {
          uVar11 = (uint)(fVar28 * 1393317.6 + 1.0653532e+09);
          fVar30 = (float)(uVar11 & 0x7fffff | 0x3f800000);
          fVar30 = (fVar30 * (fVar30 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar11 & 0xff800000);
        }
        fVar30 = fVar30 * fVar29;
        *(float *)(param_1 + 0x154) = fVar28;
        *(float *)(param_1 + 0x158) = fVar30;
      }
      for (lVar13 = *(long *)(param_1 + 0x30); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x20)) {
        lVar20 = *(long *)(lVar13 + 0x140);
        *(undefined4 *)(lVar20 + 0x10c) = *(undefined4 *)(param_1 + 0x150);
        *(undefined1 *)(lVar20 + 0x110) = 0;
      }
      local_110 = CONCAT44(local_110._4_4_,(int)plVar27[0x50]);
      puVar1 = (undefined8 *)0x0;
      if ((*(uint *)(plVar27 + 1) & 0x10) != 0) {
        puVar1 = &local_110;
      }
      FUN__text__0045acd0(fVar30,param_1,local_128,
                          *(uint *)(*(long *)(lVar25 + 0x18) + 0x313) >> 0x1b & 1,puVar1);
      lVar13 = *(long *)(param_1 + 0xe8);
      goto joined_r0x0044eff8;
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN__text__004286a0();
    }
    uVar24 = 0;
    *(undefined4 *)(param_1 + 0xf8) = 2;
    *(undefined4 *)(param_1 + 300) = 0x11;
    lVar13 = *(long *)(param_1 + 0xe8);
  }
  else {
    lVar13 = *(long *)(param_1 + 0xe8);
joined_r0x0044eff8:
    uVar24 = 1;
  }
  if ((((lVar13 != 0) && ((*(byte *)(lVar13 + 0x20) & 1) == 0)) &&
      (iVar23 = FUN__text__00428800(), iVar23 != 1)) && (iVar23 != 0x3f)) {
    *(undefined4 *)((long)param_2 + 0x2c) = 2;
    return 0;
  }
LAB__text__0044f1d8:
  *pbVar26 = *pbVar26 | 2;
  return uVar24;
}


