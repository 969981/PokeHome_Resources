/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1a20; name: FUN_.text__006b1a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b1a20(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        float *param_5)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  void *__dest;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  uint *puVar21;
  void *__src;
  char *pcVar22;
  float *pfVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  param_1[3] = 0;
  lVar10 = lRam0000000000724ba8;
  lVar9 = _DAT_00724ba0;
  lVar1 = lRam0000000000724928;
  lVar14 = _DAT_00724920;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  pcVar19 = (char *)(param_4 + 0x2c);
  pcVar18 = (char *)(param_4 + 0x38);
  pfVar24 = (float *)(param_4 + 0x44);
  pfVar23 = (float *)(param_4 + 0x4c);
  param_1[0xf] = lVar1;
  param_1[0xe] = lVar14;
  param_1[0x11] = lVar10;
  param_1[0x10] = lVar9;
  lVar14 = _DAT_00724a00;
  pcVar22 = (char *)(param_4 + 10);
  pcVar20 = (char *)(param_4 + 0x24);
  param_1[0x13] = lRam0000000000724a08;
  param_1[0x12] = lVar14;
  pcVar12 = *(char **)(param_5 + 0x12);
  if (pcVar12 != (char *)0x0) {
    uVar8 = *(ushort *)((long)param_5 + 0x42);
    if ((uVar8 & 8) != 0) {
      pcVar19 = pcVar12 + 8;
    }
    if ((uVar8 & 0x40) != 0) {
      pcVar18 = pcVar12 + 0x14;
    }
    if ((uVar8 & 0x20) != 0) {
      pfVar24 = (float *)(pcVar12 + 0x20);
    }
    if ((uVar8 & 0x10) != 0) {
      pfVar23 = (float *)(pcVar12 + 0x28);
    }
    if ((uVar8 & 0x80) != 0) {
      pcVar22 = pcVar12 + 0x30;
    }
    if ((uVar8 & 4) != 0) {
      pcVar20 = pcVar12;
    }
  }
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)(param_4 + 9);
  pvVar11 = (void *)FUN__text__006b2090(param_1,param_4 + 0xc);
  if (*pcVar20 == '\0') {
    plVar13 = (long *)((long)param_1 + 0xc9);
  }
  else {
    *(char *)((long)param_1 + 0xc9) = *pcVar20;
    pcVar12 = pcVar20 + 1;
    if (*pcVar12 == '\0') {
      plVar13 = (long *)((long)param_1 + 0xca);
    }
    else {
      *(char *)((long)param_1 + 0xca) = *pcVar12;
      pcVar12 = pcVar20 + 2;
      if (*pcVar12 == '\0') {
        plVar13 = (long *)((long)param_1 + 0xcb);
      }
      else {
        *(char *)((long)param_1 + 0xcb) = *pcVar12;
        pcVar12 = pcVar20 + 3;
        if (*pcVar12 == '\0') {
          plVar13 = (long *)((long)param_1 + 0xcc);
        }
        else {
          *(char *)((long)param_1 + 0xcc) = *pcVar12;
          pcVar12 = pcVar20 + 4;
          if (*pcVar12 == '\0') {
            plVar13 = (long *)((long)param_1 + 0xcd);
          }
          else {
            *(char *)((long)param_1 + 0xcd) = *pcVar12;
            pcVar12 = pcVar20 + 5;
            if (*pcVar12 == '\0') {
              plVar13 = (long *)((long)param_1 + 0xce);
            }
            else {
              *(char *)((long)param_1 + 0xce) = *pcVar12;
              pcVar12 = pcVar20 + 6;
              if (*pcVar12 == '\0') {
                plVar13 = (long *)((long)param_1 + 0xcf);
              }
              else {
                *(char *)((long)param_1 + 0xcf) = *pcVar12;
                pcVar12 = pcVar20 + 7;
                if (*pcVar12 != '\0') {
                  plVar13 = (long *)((long)param_1 + 0xd1);
                  *(char *)(param_1 + 0x1a) = *pcVar12;
                  pcVar20 = pcVar20 + 8;
                  goto LAB__text__006b1bcc;
                }
                plVar13 = param_1 + 0x1a;
              }
            }
          }
        }
      }
    }
    pcVar20 = pcVar12;
  }
LAB__text__006b1bcc:
  *(undefined1 *)plVar13 = 0;
  do {
    cVar6 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  } while (cVar6 != '\0');
  bVar7 = *(byte *)(param_4 + 0xb);
  *(byte *)((long)param_1 + 0x5c) = bVar7;
  if (((bVar7 >> 2 & 1) == 0) || (__src = *(void **)(param_5 + 0x30), __src == (void *)0x0)) {
    *(byte *)((long)param_1 + 0x5c) = bVar7 & 0xfb;
    lVar14 = *(long *)(param_5 + 0x30);
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0x15] = lVar14;
    if (lVar14 != 0) {
      if (*(char *)(lVar14 + 0x16) == '\x03') {
        lVar1 = lVar14 + 0xc;
        puVar21 = (uint *)(lVar14 + 0x10);
        lVar14 = lVar1 + (ulong)*puVar21;
        uVar15 = (ulong)*(ushort *)(lVar14 + 2);
        if (uVar15 != 0) {
          uVar16 = 0;
          piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar14 + 4) + *puVar21));
          do {
            uVar17 = (ulong)(*(int *)((long)puVar21 + uVar16 * 4 + (ulong)*puVar21) + *puVar21);
            *(uint *)(param_1 + 0xc) =
                 *(uint *)(param_1 + 0xc) | 1 << (ulong)(*(uint *)(lVar1 + uVar17) & 0x1f);
            if (*piVar2 == 0x15) {
              iVar5 = *(int *)(lVar1 + uVar17);
              iVar3 = iVar5 + -9;
              if (iVar5 < 0x10) {
                iVar3 = iVar5;
              }
              *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)uVar16;
            }
            uVar16 = uVar16 + 1;
          } while (uVar15 != uVar16);
        }
      }
      goto LAB__text__006b1d48;
    }
  }
  else {
    __dest = (void *)FUN__text__006a0f04(*(undefined4 *)((long)__src + 4));
    pvVar11 = memcpy(__dest,__src,(ulong)*(uint *)((long)__src + 4));
    param_1[0x15] = (long)__dest;
    if (__dest != (void *)0x0) {
      if (*(char *)((long)__dest + 0x16) == '\x03') {
        puVar21 = (uint *)((long)__dest + 0x10);
        uVar4 = *puVar21;
        uVar15 = (ulong)*(ushort *)((long)__dest + (ulong)uVar4 + 0xe);
        if (uVar15 != 0) {
          uVar16 = 0;
          piVar2 = (int *)((long)__dest +
                          (ulong)(*(int *)((long)__dest + (ulong)uVar4 + 0x10) + uVar4) + 0xc);
          do {
            uVar17 = (ulong)(*(int *)((long)puVar21 + uVar16 * 4 + (ulong)*puVar21) + *puVar21);
            *(uint *)(param_1 + 0xc) =
                 *(uint *)(param_1 + 0xc) |
                 1 << (ulong)(*(uint *)((long)__dest + uVar17 + 0xc) & 0x1f);
            if (*piVar2 == 0x15) {
              iVar5 = *(int *)((long)__dest + uVar17 + 0xc);
              iVar3 = iVar5 + -9;
              if (iVar5 < 0x10) {
                iVar3 = iVar5;
              }
              *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)uVar16;
            }
            uVar16 = uVar16 + 1;
          } while (uVar15 != uVar16);
        }
      }
LAB__text__006b1d48:
      if ((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x16) == '\x03')) {
        local_88 = 2.94273e-44;
        fStack_84 = -NAN;
        uStack_80 = 0xffffffff;
        uStack_7c = 0xffffffff;
        uStack_78 = 0xff;
        pvVar11 = (void *)FUN__text__006b3b30(param_1,0x15,&local_88,0x14,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)pcVar19;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(pcVar19 + 4);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(pcVar19 + 8);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)pcVar18;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pcVar18 + 4);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(pcVar18 + 8);
  *(float *)(param_1 + 9) = *pfVar24;
  *(float *)((long)param_1 + 0x4c) = pfVar24[1];
  if ((*(long *)(param_5 + 0xe) == 0) ||
     (((*param_5 == 1.0 && (param_5[1] == 1.0)) || ((*(byte *)(param_4 + 0xb) & 1) != 0)))) {
    *(float *)(param_1 + 10) = *pfVar23;
    fVar25 = pfVar23[1];
LAB__text__006b1e24:
    *(float *)((long)param_1 + 0x54) = fVar25;
  }
  else {
    if ((*(byte *)(param_4 + 0xb) >> 1 & 1) != 0) {
      local_88 = 0.0;
      fStack_84 = 0.0;
      fVar25 = 1.0;
      if ((*(byte *)((long)param_1 + 0x5b) & 3) != 0) {
        fVar25 = 0.5;
      }
      fVar28 = 1.0;
      if ((*(byte *)((long)param_1 + 0x5b) & 0xc) != 0) {
        fVar28 = 0.5;
      }
      FUN__text__006b22f0(pvVar11,&local_88,*(undefined8 *)(param_5 + 0x26));
      fVar26 = param_5[3];
      fVar27 = param_5[1];
      *(float *)(param_1 + 10) =
           *pfVar23 + (fVar25 * (param_5[2] * *param_5 - param_5[2])) / (local_88 * *pfVar24);
      fVar25 = pfVar23[1] + (fVar28 * (fVar26 * fVar27 - fVar26)) / (fStack_84 * pfVar24[1]);
      goto LAB__text__006b1e24;
    }
    *(float *)(param_1 + 10) = *param_5 * *pfVar23;
    *(float *)((long)param_1 + 0x54) = pfVar23[1] * param_5[1];
  }
  cVar6 = *pcVar22;
  *(char *)((long)param_1 + 0x59) = cVar6;
  *(char *)((long)param_1 + 0x5a) = cVar6;
  bVar7 = *(byte *)(param_4 + 8);
  *(byte *)(param_1 + 0xb) = bVar7;
  if ((*(long *)(param_5 + 0xe) != 0) && ((*(ushort *)((long)param_5 + 0x42) & 1) != 0)) {
    *(byte *)(param_1 + 0xb) = bVar7 & 0xfe | (byte)(*(ushort *)((long)param_5 + 0x42) >> 1) & 1;
  }
  FUN__text__006b23f0(param_1,param_5);
  if (((*(uint *)(param_1 + 0xc) != 0) &&
      (lVar14 = param_1[0x15] + 0xc, uVar4 = *(uint *)(param_1[0x15] + 0x10),
      piVar2 = (int *)(lVar14 + (ulong)(*(int *)((ulong)uVar4 + lVar14 + 4) + uVar4)),
      *piVar2 == 0x15)) && (-1 < *(char *)((long)piVar2 + 10))) {
    local_94 = 0;
    uStack_90 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_a0 = 0x12;
    if ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0) {
      local_88 = 2.94273e-44;
      fStack_84 = -NAN;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffff;
      uStack_78 = 0xff;
      FUN__text__006b3b30(param_1,0x15,&local_88,0x14,1);
    }
    FUN__text__006b3b30(param_1,0x12,&local_a0,0x14,0);
  }
  if (*(char *)(param_5 + 0x36) == '\0') goto LAB__text__006b1f98;
  if (*(uint *)(param_1 + 0xc) == 0) {
LAB__text__006b1f54:
    local_94 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    local_a0 = 0x14;
    local_88 = 2.94273e-44;
    fStack_84 = -NAN;
    uStack_80 = 0xffffffff;
    uStack_7c = 0xffffffff;
    uStack_78 = 0xff;
    FUN__text__006b3b30(param_1,0x15,&local_88,0x14,1);
  }
  else {
    lVar14 = param_1[0x15] + 0xc;
    uVar4 = *(uint *)(param_1[0x15] + 0x10);
    piVar2 = (int *)(lVar14 + (ulong)(*(int *)((ulong)uVar4 + lVar14 + 4) + uVar4));
    if ((*piVar2 == 0x15) && (-1 < *(char *)((long)piVar2 + 0xf))) goto LAB__text__006b1f98;
    uStack_9c = 0;
    uStack_98 = 0;
    local_94 = 0;
    local_a0 = 0x14;
    if ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0) goto LAB__text__006b1f54;
  }
  FUN__text__006b3b30(param_1,0x14,&local_a0,0x10,0);
LAB__text__006b1f98:
  (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3,param_5);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  return;
}


