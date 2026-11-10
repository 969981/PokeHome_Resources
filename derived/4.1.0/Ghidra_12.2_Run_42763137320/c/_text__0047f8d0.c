/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047f8d0; name: FUN_.text__0047f8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047f8d0(long param_1,long *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long *local_d8;
  float local_cc;
  float local_c8;
  long *local_b0;
  float local_a8;
  undefined4 local_a4;
  
  lVar4 = FUN__text__0045b010();
  uVar5 = FUN__text__0047b064(param_1);
  if (lVar4 == 0) {
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)0x0;
      cVar2 = *(char *)(DAT_00ae9a78 + 4);
joined_r0x0047fa8c:
      plVar13 = (long *)0x0;
      if (cVar2 == '\0') goto LAB__text__0047fa0c;
LAB__text__0047fa90:
      plVar16 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x68) != 0) {
        plVar16 = (long *)(DAT_00ae9a78 + 0x68);
      }
      if (*(char *)(DAT_00ae9a78 + 5) == '\0') goto LAB__text__0047fa20;
LAB__text__0047fab0:
      local_b0 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x80) != 0) {
        local_b0 = (long *)(DAT_00ae9a78 + 0x80);
      }
    }
    else {
      if (*(char *)(DAT_00ae9a78 + 1) == '\0') {
        plVar7 = (long *)0x0;
        cVar2 = *(char *)(DAT_00ae9a78 + 2);
      }
      else {
        plVar7 = (long *)0x0;
        if (*(long *)(DAT_00ae9a78 + 0x20) != 0) {
          plVar7 = (long *)(DAT_00ae9a78 + 0x20);
        }
        cVar2 = *(char *)(DAT_00ae9a78 + 2);
      }
      if (cVar2 == '\0') {
        cVar2 = *(char *)(DAT_00ae9a78 + 4);
        goto joined_r0x0047fa8c;
      }
      plVar13 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x38) != 0) {
        plVar13 = (long *)(DAT_00ae9a78 + 0x38);
      }
      if (*(char *)(DAT_00ae9a78 + 4) != '\0') goto LAB__text__0047fa90;
LAB__text__0047fa0c:
      plVar16 = (long *)0x0;
      if (*(char *)(DAT_00ae9a78 + 5) != '\0') goto LAB__text__0047fab0;
LAB__text__0047fa20:
      local_b0 = (long *)0x0;
    }
    local_c8 = 0.0;
    local_cc = 0.0;
    plVar12 = (long *)0x0;
    plVar11 = (long *)0x0;
    plVar14 = plVar13;
    plVar15 = local_b0;
    plVar17 = plVar16;
    local_d8 = plVar7;
    goto LAB__text__0047fdd0;
  }
  if ((ulong)*(byte *)(lVar4 + 0x1fb) == 0xff) {
    plVar11 = (long *)0x0;
    uVar8 = (ulong)*(byte *)(lVar4 + 0x1fc);
    if (uVar8 != 0xff) goto LAB__text__0047f94c;
LAB__text__0047fa68:
    plVar12 = (long *)0x0;
    bVar3 = *(byte *)(lVar4 + 0x20b);
  }
  else {
    plVar7 = (long *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x1fb) * 0x18 + 0x30);
    plVar11 = (long *)0x0;
    if (*plVar7 != 0) {
      plVar11 = plVar7;
    }
    uVar8 = (ulong)*(byte *)(lVar4 + 0x1fc);
    if (uVar8 == 0xff) goto LAB__text__0047fa68;
LAB__text__0047f94c:
    plVar7 = (long *)(lVar4 + uVar8 * 0x18 + 0x30);
    plVar12 = (long *)0x0;
    if (*plVar7 != 0) {
      plVar12 = plVar7;
    }
    bVar3 = *(byte *)(lVar4 + 0x20b);
  }
  local_c8 = 0.0;
  local_cc = 0.0;
  if ((bVar3 & 1) != 0) {
    local_cc = *(float *)(param_1 + 0x194);
    local_c8 = *(float *)(param_1 + 0x198);
  }
  if ((uVar5 & 1) == 0) {
    plVar14 = (long *)0x0;
    plVar7 = (long *)0x0;
    plVar13 = (long *)0x0;
    local_d8 = (long *)0x0;
    bVar3 = *(byte *)(lVar4 + 0x203);
joined_r0x0047fa50:
    if (bVar3 != 0xff) goto LAB__text__0047fc54;
LAB__text__0047fc78:
    plVar16 = (long *)0x0;
    bVar3 = *(byte *)(lVar4 + 0x204);
    if (bVar3 == 0xff) goto LAB__text__0047fcd4;
LAB__text__0047fcb0:
    if (bVar3 == 0xfe) {
      if (*(char *)(DAT_00ae9a78 + 5) == '\0') goto LAB__text__0047fcd4;
      plVar17 = (long *)(DAT_00ae9a78 + 0x80);
    }
    else {
      plVar17 = (long *)(lVar4 + (ulong)(uint)bVar3 * 0x18 + 0x30);
    }
    plVar15 = (long *)0x0;
    if (*plVar17 != 0) {
      plVar15 = plVar17;
    }
    bVar3 = *(byte *)(lVar4 + 0x209);
    if (bVar3 != 0xff) goto LAB__text__0047fd14;
LAB__text__0047fd4c:
    plVar17 = (long *)0x0;
    bVar3 = *(byte *)(lVar4 + 0x20a);
joined_r0x0047fd58:
    uVar6 = (uint)bVar3;
    if (bVar3 == 0xff) {
LAB__text__0047fda4:
      local_b0 = (long *)0x0;
      goto LAB__text__0047fdd0;
    }
  }
  else {
    bVar3 = *(byte *)(lVar4 + 0x200);
    if (bVar3 == 0xff) {
LAB__text__0047fadc:
      local_d8 = (long *)0x0;
      bVar3 = *(byte *)(lVar4 + 0x201);
      if (bVar3 != 0xff) goto LAB__text__0047fb10;
LAB__text__0047fb48:
      plVar13 = (long *)0x0;
      bVar3 = *(byte *)(lVar4 + 0x206);
joined_r0x0047fb78:
      if (bVar3 == 0xff) goto LAB__text__0047fbb4;
LAB__text__0047fb7c:
      if (bVar3 != 0xfe) {
        plVar16 = (long *)(lVar4 + (ulong)(uint)bVar3 * 0x18 + 0x30);
        plVar7 = (long *)0x0;
        if (*plVar16 != 0) {
          plVar7 = plVar16;
        }
        bVar3 = *(byte *)(lVar4 + 0x207);
        goto joined_r0x0047fbe4;
      }
      if (*(char *)(DAT_00ae9a78 + 1) == '\0') goto LAB__text__0047fbb4;
      plVar7 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x20) != 0) {
        plVar7 = (long *)(DAT_00ae9a78 + 0x20);
      }
      bVar3 = *(byte *)(lVar4 + 0x207);
      if (bVar3 != 0xff) goto LAB__text__0047fbe8;
LAB__text__0047fc20:
      plVar14 = (long *)0x0;
      bVar3 = *(byte *)(lVar4 + 0x203);
    }
    else {
      if (bVar3 == 0xfe) {
        if (*(char *)(DAT_00ae9a78 + 1) == '\0') goto LAB__text__0047fadc;
        local_d8 = (long *)0x0;
        if (*(long *)(DAT_00ae9a78 + 0x20) != 0) {
          local_d8 = (long *)(DAT_00ae9a78 + 0x20);
        }
        bVar3 = *(byte *)(lVar4 + 0x201);
      }
      else {
        plVar7 = (long *)(lVar4 + (ulong)bVar3 * 0x18 + 0x30);
        local_d8 = (long *)0x0;
        if (*plVar7 != 0) {
          local_d8 = plVar7;
        }
        bVar3 = *(byte *)(lVar4 + 0x201);
      }
      if (bVar3 == 0xff) goto LAB__text__0047fb48;
LAB__text__0047fb10:
      if (bVar3 != 0xfe) {
        plVar7 = (long *)(lVar4 + (ulong)(uint)bVar3 * 0x18 + 0x30);
        plVar13 = (long *)0x0;
        if (*plVar7 != 0) {
          plVar13 = plVar7;
        }
        bVar3 = *(byte *)(lVar4 + 0x206);
        goto joined_r0x0047fb78;
      }
      if (*(char *)(DAT_00ae9a78 + 2) == '\0') goto LAB__text__0047fb48;
      plVar13 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x38) != 0) {
        plVar13 = (long *)(DAT_00ae9a78 + 0x38);
      }
      bVar3 = *(byte *)(lVar4 + 0x206);
      if (bVar3 != 0xff) goto LAB__text__0047fb7c;
LAB__text__0047fbb4:
      plVar7 = (long *)0x0;
      bVar3 = *(byte *)(lVar4 + 0x207);
joined_r0x0047fbe4:
      if (bVar3 == 0xff) goto LAB__text__0047fc20;
LAB__text__0047fbe8:
      if (bVar3 == 0xfe) {
        if (*(char *)(DAT_00ae9a78 + 2) != '\0') {
          plVar14 = (long *)0x0;
          if (*(long *)(DAT_00ae9a78 + 0x38) != 0) {
            plVar14 = (long *)(DAT_00ae9a78 + 0x38);
          }
          bVar3 = *(byte *)(lVar4 + 0x203);
          goto joined_r0x0047fa50;
        }
        goto LAB__text__0047fc20;
      }
      plVar16 = (long *)(lVar4 + (ulong)(uint)bVar3 * 0x18 + 0x30);
      plVar14 = (long *)0x0;
      if (*plVar16 != 0) {
        plVar14 = plVar16;
      }
      bVar3 = *(byte *)(lVar4 + 0x203);
    }
    if (bVar3 == 0xff) goto LAB__text__0047fc78;
LAB__text__0047fc54:
    if (bVar3 == 0xfe) {
      if (*(char *)(DAT_00ae9a78 + 4) == '\0') goto LAB__text__0047fc78;
      plVar15 = (long *)(DAT_00ae9a78 + 0x68);
    }
    else {
      plVar15 = (long *)(lVar4 + (ulong)(uint)bVar3 * 0x18 + 0x30);
    }
    plVar16 = (long *)0x0;
    if (*plVar15 != 0) {
      plVar16 = plVar15;
    }
    bVar3 = *(byte *)(lVar4 + 0x204);
    if (bVar3 != 0xff) goto LAB__text__0047fcb0;
LAB__text__0047fcd4:
    plVar15 = (long *)0x0;
    bVar3 = *(byte *)(lVar4 + 0x209);
    if (bVar3 == 0xff) goto LAB__text__0047fd4c;
LAB__text__0047fd14:
    if (bVar3 == 0xfe) {
      if (*(char *)(DAT_00ae9a78 + 4) == '\0') goto LAB__text__0047fd4c;
      plVar17 = (long *)0x0;
      if (*(long *)(DAT_00ae9a78 + 0x68) != 0) {
        plVar17 = (long *)(DAT_00ae9a78 + 0x68);
      }
      bVar3 = *(byte *)(lVar4 + 0x20a);
      goto joined_r0x0047fd58;
    }
    plVar9 = (long *)(lVar4 + (ulong)(uint)bVar3 * 0x18 + 0x30);
    plVar17 = (long *)0x0;
    if (*plVar9 != 0) {
      plVar17 = plVar9;
    }
    uVar6 = (uint)*(byte *)(lVar4 + 0x20a);
    if (uVar6 == 0xff) goto LAB__text__0047fda4;
  }
  if (uVar6 == 0xfe) {
    if (*(char *)(*_DAT_008a4628 + 5) == '\0') {
      local_b0 = (long *)0x0;
      goto LAB__text__0047fdd0;
    }
    plVar9 = (long *)(*_DAT_008a4628 + 0x80);
  }
  else {
    plVar9 = (long *)(lVar4 + (ulong)uVar6 * 0x18 + 0x30);
  }
  local_b0 = (long *)0x0;
  if (*plVar9 != 0) {
    local_b0 = plVar9;
  }
LAB__text__0047fdd0:
  lVar10 = *(long *)(param_3 + 0x170);
  bVar3 = FUN__text__00478ecc(param_1);
  lVar4 = *param_2;
  fVar26 = 0.0;
  fVar23 = 0.0;
  if ((bVar3 & 1) == 0) {
    fVar23 = 100.0;
  }
  fVar24 = fVar23;
  do {
    if (lVar10 == *(long *)(lVar4 + 0x70)) {
      uVar19 = *(undefined4 *)(lVar4 + 0x30);
      fVar21 = 0.0;
      if ((plVar11 != (long *)0x0) && (*plVar11 != 0)) {
        local_a4 = (undefined4)plVar11[2];
        local_a8 = 0.0;
        FUN__text__0041a060(uVar19,plVar11,&local_a4,&local_a8);
        *(undefined4 *)(plVar11 + 2) = local_a4;
        fVar21 = local_a8;
      }
      fVar22 = 0.0;
      if ((plVar12 != (long *)0x0) && (*plVar12 != 0)) {
        local_a4 = (undefined4)plVar12[2];
        local_a8 = 0.0;
        FUN__text__0041a060(uVar19,plVar12,&local_a4,&local_a8);
        *(undefined4 *)(plVar12 + 2) = local_a4;
        fVar22 = local_a8;
      }
      fVar25 = *(float *)(lVar4 + 0x78);
      fVar18 = fVar25 * local_cc;
      fVar20 = *(float *)(lVar4 + 0x54);
      if (fVar21 <= fVar18) {
        fVar21 = fVar18;
      }
      fVar18 = *(float *)(lVar4 + 0x48);
      if ((plVar16 != (long *)0x0) && (fVar18 != 0.0)) {
        if (*plVar16 == 0) {
          local_a8 = 0.0;
        }
        else {
          local_a4 = (undefined4)plVar16[2];
          local_a8 = 0.0;
          FUN__text__0041a060(fVar18,plVar16,&local_a4,&local_a8);
          *(undefined4 *)(plVar16 + 2) = local_a4;
        }
        if (fVar21 <= local_a8) {
          fVar21 = local_a8;
        }
      }
      fVar25 = fVar25 * local_c8;
      if (fVar22 <= fVar25) {
        fVar22 = fVar25;
      }
      if ((plVar15 != (long *)0x0) && (fVar18 != 0.0)) {
        if (*plVar15 == 0) {
          local_a8 = 0.0;
        }
        else {
          local_a4 = (undefined4)plVar15[2];
          local_a8 = 0.0;
          FUN__text__0041a060(fVar18,plVar15,&local_a4,&local_a8);
          *(undefined4 *)(plVar15 + 2) = local_a4;
        }
        if (fVar22 <= local_a8) {
          fVar22 = local_a8;
        }
      }
      if ((plVar17 != (long *)0x0) && (fVar20 != 0.0)) {
        if (*plVar17 == 0) {
          local_a8 = 0.0;
        }
        else {
          local_a4 = (undefined4)plVar17[2];
          local_a8 = 0.0;
          FUN__text__0041a060(fVar20,plVar17,&local_a4,&local_a8);
          *(undefined4 *)(plVar17 + 2) = local_a4;
        }
        if (fVar21 <= local_a8) {
          fVar21 = local_a8;
        }
      }
      if ((local_b0 != (long *)0x0) && (fVar20 != 0.0)) {
        if (*local_b0 == 0) {
          local_a8 = 0.0;
        }
        else {
          local_a4 = (undefined4)local_b0[2];
          local_a8 = 0.0;
          FUN__text__0041a060(fVar20,local_b0,&local_a4,&local_a8);
          *(undefined4 *)(local_b0 + 2) = local_a4;
        }
        if (fVar22 <= local_a8) {
          fVar22 = local_a8;
        }
      }
      if (*(int *)(param_3 + 0x194) == 0) {
        fVar18 = *(float *)(lVar4 + 0x4c);
        if ((local_d8 != (long *)0x0) && (fVar18 != 0.0)) {
          if (*local_d8 == 0) {
            local_a8 = 0.0;
          }
          else {
            local_a4 = (undefined4)local_d8[2];
            local_a8 = 0.0;
            FUN__text__0041a060(fVar18,local_d8,&local_a4,&local_a8);
            *(undefined4 *)(local_d8 + 2) = local_a4;
          }
          if (fVar21 <= local_a8) {
            fVar21 = local_a8;
          }
        }
        if ((plVar13 != (long *)0x0) && (fVar18 != 0.0)) {
          if (*plVar13 == 0) {
            local_a8 = 0.0;
          }
          else {
            local_a4 = (undefined4)plVar13[2];
            local_a8 = 0.0;
            FUN__text__0041a060(fVar18,plVar13,&local_a4,&local_a8);
            *(undefined4 *)(plVar13 + 2) = local_a4;
          }
          if (fVar22 <= local_a8) {
            fVar22 = local_a8;
          }
        }
        fVar18 = *(float *)(lVar4 + 0x50);
        if ((plVar7 != (long *)0x0) && (fVar18 != 0.0)) {
          if (*plVar7 == 0) {
            local_a8 = 0.0;
          }
          else {
            local_a4 = (undefined4)plVar7[2];
            local_a8 = 0.0;
            FUN__text__0041a060(fVar18,plVar7,&local_a4,&local_a8);
            *(undefined4 *)(plVar7 + 2) = local_a4;
          }
          if (fVar21 <= local_a8) {
            fVar21 = local_a8;
          }
        }
        if ((plVar14 != (long *)0x0) && (fVar18 != 0.0)) {
          if (*plVar14 == 0) {
            local_a8 = 0.0;
          }
          else {
            local_a4 = (undefined4)plVar14[2];
            local_a8 = 0.0;
            FUN__text__0041a060(fVar18,plVar14,&local_a4,&local_a8);
            *(undefined4 *)(plVar14 + 2) = local_a4;
          }
          if (fVar22 <= local_a8) {
            fVar22 = local_a8;
          }
        }
      }
      *(float *)(lVar4 + 0x7c) = fVar21;
      *(float *)(lVar4 + 0x80) = fVar22;
      if ((bVar3 & 1) == 0) {
        fVar23 = (float)NEON_fminnm(fVar23,fVar21);
        fVar24 = (float)NEON_fminnm(fVar24,fVar22);
      }
      else {
        iVar1 = *(int *)(param_3 + 0x194);
        if (iVar1 == 2) {
          fVar18 = *(float *)(lVar4 + 0x44);
        }
        else if (iVar1 == 1) {
          fVar18 = *(float *)(lVar4 + 0x40);
        }
        else {
          fVar18 = 1.0;
          if (iVar1 == 0) {
            fVar18 = *(float *)(lVar4 + 0x3c);
          }
        }
        fVar20 = (float)NEON_fminnm(fVar21,0x42c80000);
        fVar25 = (float)NEON_fminnm(fVar22,0x42c80000);
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar25 = (float)NEON_fminnm(fVar25 * (fVar25 * fVar25 * -1.3191276e-10 + 0.0031678583) +
                                    0.98224795,0x3f800000);
        fVar25 = fVar25 * (fVar20 * (fVar20 * (fVar20 * 9.302722e-07 + -0.00017546544) +
                                    -0.0011517591) + 0.9843052) * fVar18;
        fVar25 = fVar25 * fVar25;
        fVar26 = fVar25 + fVar26;
        fVar23 = fVar23 + fVar21 * fVar25;
        fVar24 = fVar24 + fVar22 * fVar25;
      }
    }
    lVar4 = lVar4 + 0x88;
  } while (lVar4 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x88);
  if ((bVar3 & 0.0 < fVar26) == 1) {
    fVar24 = fVar24 / fVar26;
    fVar23 = fVar23 / fVar26;
  }
  *(float *)(param_3 + 0x180) = fVar23;
  *(float *)(param_3 + 0x184) = fVar24;
  return;
}


