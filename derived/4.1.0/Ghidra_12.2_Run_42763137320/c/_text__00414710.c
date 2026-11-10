/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414710; name: FUN_.text__00414710
 */


void FUN__text__00414710(long param_1,long param_2)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [72];
  
  if (*(char *)(param_2 + 0x55a) != '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0x55a) = 1;
  puVar6 = (undefined8 *)(param_1 + 0x168);
  if (*(short *)(param_1 + 0x1a8) == 0) {
    if ((*(char *)(param_1 + 0x157) == '\0') && (*(short *)(param_1 + 0x15c) == 0)) {
      lVar8 = 3;
    }
    else if ((*(char *)(param_1 + 0x127) == '\0') && (*(short *)(param_1 + 300) == 0)) {
      lVar8 = 2;
    }
    else if ((*(char *)(param_1 + 0xf7) == '\0') && (*(short *)(param_1 + 0xfc) == 0)) {
      lVar8 = 1;
    }
    else {
      if ((*(char *)(param_1 + 199) != '\0') || (*(short *)(param_1 + 0xcc) != 0))
      goto LAB__text__004147c0;
      lVar8 = 0;
    }
    puVar6 = (undefined8 *)(param_1 + lVar8 * 0x30 + 0xb0);
  }
LAB__text__004147c0:
  if (*(int *)(puVar6 + 1) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x558) != '\0') {
    local_b8 = *(undefined8 *)(param_2 + 0x90);
    uStack_b0 = *(undefined8 *)(param_2 + 0x98);
    plVar12 = (long *)(param_2 + 0x4d0);
    plVar5 = (long *)(param_2 + 0x500);
    FUN__text__004de928(auStack_a8,param_2 + 0xa0,plVar12,plVar5,(undefined8 *)(param_2 + 0x530),
                        &local_b8);
    uVar4 = FUN__text__0045cdec(param_1 + 0x68);
    if (*(long *)(param_1 + 0x68) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x20);
    }
    FUN__text__004def5c(auStack_a8,uVar4,uVar18);
    FUN__text__004de94c(auStack_a8,puVar6,param_2 + 0x418);
    uVar3 = *(ushort *)(param_2 + 0x4e2);
    uVar7 = *(ushort *)(param_2 + 0x4e0);
    if ((uint)uVar3 < (uint)uVar7) {
      bVar2 = *(byte *)(param_2 + 0x4d8);
      if (bVar2 != 0) {
        uVar16 = (ulong)(((uint)uVar7 - (uint)uVar3) * 4);
        if (bVar2 == 1) {
          lVar9 = 0;
        }
        else {
          uVar17 = (ulong)bVar2 & 0xfe;
          lVar13 = (ulong)uVar3 * 4;
          lVar8 = 4;
          do {
            lVar9 = lVar8;
            memset((void *)(*(long *)(param_2 + 0x4d0) +
                            (lVar9 + -4) * (ulong)*(ushort *)(param_2 + 0x4e0) + lVar13),0,uVar16);
            memset((void *)(*(long *)(param_2 + 0x4d0) + lVar9 * (ulong)*(ushort *)(param_2 + 0x4e0)
                           + lVar13),0,uVar16);
            uVar17 = uVar17 - 2;
            lVar8 = lVar9 + 8;
          } while (uVar17 != 0);
          lVar9 = lVar9 + 4;
        }
        if ((bVar2 & 1) != 0) {
          memset((void *)(*(long *)(param_2 + 0x4d0) + lVar9 * (ulong)*(ushort *)(param_2 + 0x4e0) +
                         (ulong)uVar3 * 4),0,uVar16);
        }
        uVar7 = *(ushort *)(param_2 + 0x4e0);
      }
      *(ushort *)(param_2 + 0x4e2) = uVar7;
    }
    if (*plVar5 != 0) {
      uVar3 = *(ushort *)(param_2 + 0x512);
      uVar7 = *(ushort *)(param_2 + 0x510);
      if ((uint)uVar3 < (uint)uVar7) {
        bVar2 = *(byte *)(param_2 + 0x508);
        if (bVar2 != 0) {
          uVar16 = (ulong)(((uint)uVar7 - (uint)uVar3) * 4);
          if (bVar2 == 1) {
            lVar9 = 0;
          }
          else {
            uVar17 = (ulong)bVar2 & 0xfe;
            lVar13 = (ulong)uVar3 * 4;
            lVar8 = 4;
            do {
              lVar9 = lVar8;
              memset((void *)(*(long *)(param_2 + 0x500) +
                              (lVar9 + -4) * (ulong)*(ushort *)(param_2 + 0x510) + lVar13),0,uVar16)
              ;
              memset((void *)(*(long *)(param_2 + 0x500) +
                              lVar9 * (ulong)*(ushort *)(param_2 + 0x510) + lVar13),0,uVar16);
              uVar17 = uVar17 - 2;
              lVar8 = lVar9 + 8;
            } while (uVar17 != 0);
            lVar9 = lVar9 + 4;
          }
          if ((bVar2 & 1) != 0) {
            memset((void *)(*(long *)(param_2 + 0x500) + lVar9 * (ulong)*(ushort *)(param_2 + 0x510)
                           + (ulong)uVar3 * 4),0,uVar16);
          }
          uVar7 = *(ushort *)(param_2 + 0x510);
        }
        *(ushort *)(param_2 + 0x512) = uVar7;
      }
    }
    uVar18 = *(undefined4 *)(param_1 + 0x88);
    uVar20 = *(undefined4 *)(param_1 + 0x8c);
    puVar6 = &local_e8;
    local_e8 = *(undefined8 *)(param_2 + 0x530);
    uStack_e0 = *(undefined8 *)(param_2 + 0x538);
    local_d8 = *(undefined8 *)(param_2 + 0x540);
    goto LAB__text__00414b34;
  }
  if (*(int *)(puVar6 + 1) == 1) {
    plVar12 = (long *)*puVar6;
    uVar15 = *(uint *)(plVar12 + 1);
    if (uVar15 != *(uint *)(param_2 + 0x60)) goto LAB__text__00414868;
    uVar17 = (ulong)uVar15 & 0xff;
    uVar3 = *(ushort *)((long)plVar12 + 0x12);
    uVar16 = (ulong)uVar3;
    uVar7 = *(ushort *)(plVar12 + 2);
    if ((uint)uVar3 < (uint)uVar7) {
      if ((int)uVar17 == 0) {
        uVar16 = (ulong)(uint)uVar7;
      }
      else {
        uVar14 = (ulong)(((uint)uVar7 - (uint)uVar3) * 4);
        if ((int)uVar17 == 1) {
          lVar13 = 0;
        }
        else {
          uVar17 = (ulong)uVar15 & 0xfe;
          lVar8 = 4;
          do {
            lVar13 = lVar8;
            memset((void *)(*plVar12 + (lVar13 + -4) * (ulong)*(ushort *)(plVar12 + 2) + uVar16 * 4)
                   ,0,uVar14);
            memset((void *)(*plVar12 + lVar13 * (ulong)*(ushort *)(plVar12 + 2) + uVar16 * 4),0,
                   uVar14);
            uVar17 = uVar17 - 2;
            lVar8 = lVar13 + 8;
          } while (uVar17 != 0);
          lVar13 = lVar13 + 4;
        }
        if ((uVar15 & 1) != 0) {
          memset((void *)(*plVar12 + lVar13 * (ulong)*(ushort *)(plVar12 + 2) + uVar16 * 4),0,uVar14
                );
        }
        uVar16 = (ulong)*(ushort *)(plVar12 + 2);
        uVar17 = (ulong)*(byte *)(plVar12 + 1);
      }
      *(short *)((long)plVar12 + 0x12) = (short)uVar16;
      plVar5 = (long *)*puVar6;
    }
    else {
      plVar5 = plVar12;
    }
    fVar19 = *(float *)(plVar5[3] + 0x50);
    fVar21 = *(float *)(plVar5[3] + 0x54);
    uVar15 = (uint)uVar16;
    if (fVar21 == fVar19) {
      if (((int)uVar17 != 0) && (fVar19 != 1.0)) {
        if (uVar15 < 4) {
          if (uVar15 != 0) {
            uVar14 = 0;
            do {
              pfVar1 = (float *)(*plVar12 + uVar14 * *(ushort *)(plVar12 + 2) * 4);
              pfVar10 = pfVar1;
              do {
                pfVar11 = pfVar10 + 1;
                *pfVar10 = *pfVar10 * fVar19;
                pfVar10 = pfVar11;
              } while (pfVar11 < pfVar1 + uVar16);
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar17);
          }
        }
        else {
          uVar14 = 0;
          do {
            pfVar1 = (float *)(*plVar12 + uVar14 * *(ushort *)(plVar12 + 2) * 4);
            if ((uVar16 & 0xfffc) == 0) {
              pfVar10 = pfVar1;
            }
            else {
              pfVar11 = pfVar1;
              do {
                pfVar10 = pfVar11 + 4;
                *(ulong *)(pfVar11 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) * fVar19,
                              (float)*(undefined8 *)(pfVar11 + 2) * fVar19);
                *(ulong *)pfVar11 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * fVar19,
                              (float)*(undefined8 *)pfVar11 * fVar19);
                pfVar11 = pfVar10;
              } while (pfVar10 < pfVar1 + (uVar15 & 0xfffc));
            }
            for (; pfVar10 < pfVar1 + uVar16; pfVar10 = pfVar10 + 1) {
              *pfVar10 = *pfVar10 * fVar19;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar17);
        }
      }
    }
    else if ((int)uVar17 != 0) {
      fVar21 = fVar21 - fVar19;
      fVar22 = fVar21 / (float)uVar16;
      if (uVar15 < 4) {
        if (uVar15 != 0) {
          uVar14 = 0;
          do {
            pfVar1 = (float *)(*plVar12 + uVar14 * *(ushort *)(plVar12 + 2) * 4);
            pfVar10 = pfVar1;
            fVar21 = fVar19;
            do {
              fVar23 = *pfVar10 * fVar21;
              fVar21 = fVar21 + fVar22;
              pfVar11 = pfVar10 + 1;
              *pfVar10 = fVar23;
              pfVar10 = pfVar11;
            } while (pfVar11 < pfVar1 + uVar16);
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar17);
        }
      }
      else if ((uVar16 & 0xfffc) == 0) {
        uVar14 = 0;
        do {
          pfVar1 = (float *)(*plVar12 + uVar14 * *(ushort *)(plVar12 + 2) * 4);
          pfVar10 = pfVar1;
          fVar21 = fVar19;
          do {
            fVar23 = *pfVar10 * fVar21;
            fVar21 = fVar21 + fVar22;
            pfVar11 = pfVar10 + 1;
            *pfVar10 = fVar23;
            pfVar10 = pfVar11;
          } while (pfVar11 < pfVar1 + uVar16);
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar17);
      }
      else {
        uVar14 = 0;
        fVar21 = fVar21 / (float)(uVar15 & 0xfffc);
        fVar23 = fVar21 * 4.0;
        fVar28 = fVar21 + fVar19 + fVar21;
        do {
          pfVar1 = (float *)(*plVar12 + uVar14 * *(ushort *)(plVar12 + 2) * 4);
          pfVar10 = pfVar1;
          fVar24 = fVar19;
          fVar25 = fVar21 + fVar19;
          fVar26 = fVar28;
          fVar27 = fVar28 + fVar21;
          do {
            fVar29 = (float)*(undefined8 *)pfVar10 * fVar24;
            fVar30 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar25;
            fVar31 = (float)*(undefined8 *)(pfVar10 + 2) * fVar26;
            fVar32 = (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) * fVar27;
            fVar24 = fVar24 + fVar23;
            fVar25 = fVar25 + fVar23;
            fVar26 = fVar26 + fVar23;
            fVar27 = fVar27 + fVar23;
            pfVar11 = pfVar10 + 4;
            *(ulong *)(pfVar10 + 2) = CONCAT44(fVar32,fVar31);
            *(ulong *)pfVar10 = CONCAT44(fVar30,fVar29);
            pfVar10 = pfVar11;
          } while (pfVar11 < pfVar1 + (uVar15 & 0xfffc));
          if (pfVar11 < pfVar1 + uVar16) {
            fVar24 = fVar19;
            do {
              fVar25 = *pfVar11 * fVar24;
              fVar24 = fVar24 + fVar22;
              pfVar10 = pfVar11 + 1;
              *pfVar11 = fVar25;
              pfVar11 = pfVar10;
            } while (pfVar10 < pfVar1 + uVar16);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar17);
      }
    }
  }
  else {
LAB__text__00414868:
    local_b8 = *(undefined8 *)(param_2 + 0x90);
    uStack_b0 = *(undefined8 *)(param_2 + 0x98);
    plVar12 = (long *)(param_2 + 0x4d0);
    FUN__text__004de928(auStack_a8,param_2 + 0xa0,plVar12,0,0,&local_b8);
    FUN__text__004de94c(auStack_a8,puVar6,param_2 + 0x418);
    uVar3 = *(ushort *)(param_2 + 0x4e2);
    uVar7 = *(ushort *)(param_2 + 0x4e0);
    if ((uint)uVar3 < (uint)uVar7) {
      bVar2 = *(byte *)(param_2 + 0x4d8);
      if (bVar2 != 0) {
        uVar16 = (ulong)(((uint)uVar7 - (uint)uVar3) * 4);
        if (bVar2 == 1) {
          lVar9 = 0;
        }
        else {
          uVar17 = (ulong)bVar2 & 0xfe;
          lVar13 = (ulong)uVar3 * 4;
          lVar8 = 4;
          do {
            lVar9 = lVar8;
            memset((void *)(*(long *)(param_2 + 0x4d0) +
                            (lVar9 + -4) * (ulong)*(ushort *)(param_2 + 0x4e0) + lVar13),0,uVar16);
            memset((void *)(*(long *)(param_2 + 0x4d0) + lVar9 * (ulong)*(ushort *)(param_2 + 0x4e0)
                           + lVar13),0,uVar16);
            uVar17 = uVar17 - 2;
            lVar8 = lVar9 + 8;
          } while (uVar17 != 0);
          lVar9 = lVar9 + 4;
        }
        if ((bVar2 & 1) != 0) {
          memset((void *)(*(long *)(param_2 + 0x4d0) + lVar9 * (ulong)*(ushort *)(param_2 + 0x4e0) +
                         (ulong)uVar3 * 4),0,uVar16);
        }
        uVar7 = *(ushort *)(param_2 + 0x4e0);
      }
      *(ushort *)(param_2 + 0x4e2) = uVar7;
    }
  }
  uVar18 = *(undefined4 *)(param_1 + 0x88);
  uVar20 = *(undefined4 *)(param_1 + 0x8c);
  local_d0[0] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  puVar6 = (undefined8 *)local_d0;
  plVar5 = (long *)0x0;
LAB__text__00414b34:
  FUN__text__004078fc(uVar18,uVar20,param_2,plVar12,plVar5,puVar6);
  return;
}


