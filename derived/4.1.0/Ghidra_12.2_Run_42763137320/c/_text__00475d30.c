/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475d30; name: FUN_.text__00475d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00475d30(long param_1,void *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  ushort uVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  long local_78;
  
  if ((*(ushort *)(param_1 + 0x220) >> 6 & 1) == 0) {
    auVar31 = FUN__text__00464848(*(undefined8 *)(param_1 + 0x1e8));
    lVar25 = auVar31._8_8_;
    if (param_2 != (void *)0x0) goto LAB__text__00475d84;
LAB__text__00475e58:
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    uVar29 = *(uint *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined2 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x11c) = 0;
    *(undefined8 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(ushort *)(param_1 + 0x162) = *(ushort *)(param_1 + 0x162) & 0xf800;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (uVar29 != 0) {
      puVar18 = *(undefined8 **)(param_1 + 0x248);
      puVar22 = puVar18 + (ulong)uVar29 * 3;
      puVar19 = puVar18;
      do {
        while ((*(byte *)(puVar19 + 1) >> 1 & 1) == 0) {
          if (puVar19 < puVar22 + -3) {
            uVar7 = puVar22[-3];
            uVar23 = puVar22[-1];
            puVar19[1] = puVar22[-2];
            puVar19[2] = uVar23;
            *puVar19 = uVar7;
            uVar29 = *(uint *)(param_1 + 0x250);
            puVar18 = *(undefined8 **)(param_1 + 0x248);
          }
          uVar29 = uVar29 - 1;
          *(uint *)(param_1 + 0x250) = uVar29;
          puVar22 = puVar18 + (ulong)uVar29 * 3;
          if (puVar19 == puVar22) goto LAB__text__00475f10;
        }
        puVar19 = puVar19 + 3;
        puVar22 = puVar18 + (ulong)uVar29 * 3;
      } while (puVar19 != puVar22);
    }
LAB__text__00475f10:
    if (lVar25 != 0) {
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0xff;
      local_1d8 = 0xff;
      local_1d0 = 0;
      FUN__text__0045df1c(lVar25,(undefined8 *)(param_1 + 0xa0),&local_1f8);
      plVar26 = (long *)0x0;
      bVar11 = true;
      goto LAB__text__00475f44;
    }
    uVar14 = *(ushort *)(param_1 + 0x220);
    if ((uVar14 >> 6 & 1) != 0) goto LAB__text__004764a8;
    plVar26 = (long *)0x0;
    bVar11 = true;
  }
  else {
    lVar25 = 0;
    auVar31 = ZEXT816(0);
    if (param_2 == (void *)0x0) goto LAB__text__00475e58;
LAB__text__00475d84:
    lVar25 = auVar31._8_8_;
    if (((lVar25 != *(long *)((long)param_2 + 0x250)) ||
        (auVar31._0_8_ != *(long *)((long)param_2 + 0x248))) ||
       ((*(ushort *)(param_1 + 0x220) >> 6 & 1) != 0)) goto LAB__text__00475e58;
    plVar26 = *(long **)((long)param_2 + 0x240);
    bVar11 = lVar25 == 0;
    puVar19 = (undefined8 *)(param_1 + 0x108);
    if (*(long *)(param_1 + 0x108) != 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN__text__00400fc0(0);
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    memcpy((void *)(param_1 + 0xa0),param_2,200);
    *puVar19 = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if ((*(int *)((long)param_2 + 0x70) != 0) &&
       (FUN__text__004628a0(puVar19), *(int *)((long)param_2 + 0x70) != 0)) {
      puVar18 = *(undefined8 **)((long)param_2 + 0x68);
      do {
        local_1f8 = *puVar18;
        local_1f0 = *(undefined4 *)(puVar18 + 1);
        lVar12 = FUN__text__004626a0(puVar19,&local_1f8,&local_a8);
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0xc) = *(undefined4 *)((long)puVar18 + 0xc);
        }
        puVar18 = puVar18 + 2;
      } while (puVar18 !=
               (undefined8 *)
               (*(long *)((long)param_2 + 0x68) + (ulong)*(uint *)((long)param_2 + 0x70) * 0x10));
    }
    uVar7 = *(undefined8 *)((long)param_2 + 0xd8);
    uVar23 = *(undefined8 *)((long)param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)((long)param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0x260) = uVar23;
    *(undefined8 *)(param_1 + 600) = uVar7;
    uVar29 = *(uint *)((long)param_2 + 0xd0);
    if (uVar29 == 0) goto LAB__text__00475f44;
    uVar5 = *(uint *)(param_1 + 0x250);
    if ((uVar29 < uVar5) || (uVar29 <= *(uint *)(param_1 + 0x254))) {
LAB__text__00476548:
      *(uint *)(param_1 + 0x250) = uVar29;
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      lVar12 = 0;
      do {
        puVar19 = (undefined8 *)(*(long *)((long)param_2 + 200) + lVar12);
        puVar18 = (undefined8 *)(*(long *)(param_1 + 0x248) + lVar12);
        lVar12 = lVar12 + 0x18;
        uVar7 = *puVar19;
        uVar23 = puVar19[2];
        puVar18[1] = puVar19[1];
        puVar18[2] = uVar23;
        *puVar18 = uVar7;
      } while ((ulong)uVar29 * 0x18 != lVar12);
    }
    else if (*(long *)(param_1 + 0x248) == 0) {
      lVar12 = FUN__text__00400f80(0,(ulong)uVar29 * 0x18);
      if (lVar12 != 0) {
        lVar16 = *(long *)(param_1 + 0x248);
        if ((lVar16 != 0) && (lVar16 != lVar12)) {
          if (uVar5 != 0) {
            lVar16 = 0;
            do {
              puVar19 = (undefined8 *)(lVar12 + lVar16);
              puVar18 = (undefined8 *)(*(long *)(param_1 + 0x248) + lVar16);
              lVar16 = lVar16 + 0x18;
              uVar7 = puVar18[1];
              uVar23 = puVar18[2];
              *puVar19 = *puVar18;
              puVar19[1] = uVar7;
              puVar19[2] = uVar23;
            } while ((ulong)uVar5 * 0x18 != lVar16);
            lVar16 = *(long *)(param_1 + 0x248);
          }
          FUN__text__00400fc0(0,lVar16);
        }
        goto LAB__text__00476540;
      }
    }
    else {
      lVar12 = FUN__text__00400fa0();
      if (lVar12 != 0) {
LAB__text__00476540:
        *(long *)(param_1 + 0x248) = lVar12;
        *(uint *)(param_1 + 0x254) = uVar29;
        goto LAB__text__00476548;
      }
    }
LAB__text__00475f44:
    uVar14 = *(ushort *)(param_1 + 0x220);
    if ((uVar14 >> 6 & 1) != 0) goto LAB__text__004764a8;
    if (lVar25 != 0) {
      FUN__text__0045df80(lVar25);
    }
  }
  fVar28 = *(float *)(param_1 + 0xb0);
  lVar25 = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) + fVar28;
  FUN__text__0046aeb0(*(undefined8 *)(param_1 + 0x1e8),lVar25,param_1 + 0x178,
                      *(undefined8 *)(param_1 + 0x1e0));
  if (*(long *)(param_1 + 0x2a8) != 0) {
    FUN__text__00450b10();
  }
  uVar9 = *(ushort *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x18c) = 0x42ca0000;
  plVar13 = *(long **)(param_1 + 0x1e8);
  lVar12 = param_1 + 0xa0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  uVar7 = 0x5d;
  if ((uVar9 & 0x80) != 0) {
    uVar7 = 0x20000005d;
  }
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  puVar19 = (undefined8 *)0x0;
  if (param_2 != (void *)0x0) {
    puVar19 = (undefined8 *)((long)param_2 + 0xf0);
  }
  puVar18 = puVar19;
  if ((uVar9 & 4) != 0) {
    puVar18 = &local_1f8;
  }
  if (plVar26 != plVar13) {
    *(ushort *)(param_1 + 0x162) = *(ushort *)(param_1 + 0x162) & 0xfd21;
    lVar16 = param_1 + 600;
    if ((uVar9 & 2) != 0) {
      lVar16 = 0;
    }
    (**(code **)(*plVar13 + 0x158))
              (plVar13,lVar12,param_1 + 0x248,lVar25,lVar16,puVar18,bVar11,plVar26);
  }
  piVar6 = _DAT_008a45a8;
  uVar14 = *(ushort *)(param_1 + 0x162);
  iVar17 = *_DAT_008a45a8;
  if ((uVar14 >> 10 & 1) != 0) {
    if (iVar17 == 1) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xdc) = 0;
      *(undefined8 *)(param_1 + 0xe4) = 0;
      *(undefined8 *)(param_1 + 0xec) = 0;
      *(undefined8 *)(param_1 + 0xf4) = 0;
      *(undefined8 *)(param_1 + 0xfc) = 0;
    }
    lVar16 = _DAT_008a4a70;
    if (*(int *)(param_1 + 0x110) != 0) {
      pbVar15 = *(byte **)(param_1 + 0x108);
      do {
        bVar8 = *pbVar15;
        pfVar1 = (float *)(pbVar15 + 0xc);
        pbVar15 = pbVar15 + 0x10;
        lVar20 = (ulong)*(uint *)(lVar16 + (ulong)bVar8 * 4) * 4;
        fVar28 = *(float *)(lVar12 + lVar20);
        if (fVar28 <= *pfVar1) {
          fVar28 = *pfVar1;
        }
        *(float *)(lVar12 + lVar20) = fVar28;
      } while (pbVar15 !=
               (byte *)(*(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0x110) * 0x10));
      uVar14 = *(ushort *)(param_1 + 0x162);
      iVar17 = *piVar6;
    }
  }
  *(ushort *)(param_1 + 0x162) = uVar14 & 0xfbff;
  *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 600);
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x260);
  *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0x264);
  if (iVar17 == 1) {
    uVar29 = (uint)*(undefined8 *)(param_1 + 0x140);
    if (((uVar29 >> 3 & 1) != 0) && (*(float *)(param_1 + 0x264) != 0.0)) {
      *(ulong *)(param_1 + 0x150) = *(ulong *)(param_1 + 0x150) | 8;
    }
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x268);
    if (((uVar29 >> 4 & 1) != 0) && (*(float *)(param_1 + 0x268) != 0.0)) {
      *(ulong *)(param_1 + 0x150) = *(ulong *)(param_1 + 0x150) | 0x10;
    }
    uVar29 = *(uint *)(param_1 + 0x250);
    if (uVar29 != 0) goto LAB__text__00476144;
LAB__text__004761b8:
    fVar28 = 1.0;
  }
  else {
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x268);
    uVar29 = *(uint *)(param_1 + 0x250);
    if (uVar29 == 0) goto LAB__text__004761b8;
LAB__text__00476144:
    lVar16 = *(long *)(param_1 + 0x248);
    fVar28 = 1.0;
    uVar21 = (ulong)uVar29 * 0x18 - 0x18;
    uVar5 = ((uint)(uVar21 / 0x18) & 0xfffffff) + 1;
    uVar24 = (ulong)uVar5 & 3;
    lVar12 = lVar16;
    if ((uVar5 & 3) != 0) {
      do {
        pfVar1 = (float *)(lVar12 + 0x10);
        lVar12 = lVar12 + 0x18;
        uVar24 = uVar24 - 1;
        fVar28 = *pfVar1 * fVar28;
      } while (uVar24 != 0);
    }
    if (0x47 < uVar21) {
      do {
        pfVar1 = (float *)(lVar12 + 0x10);
        pfVar2 = (float *)(lVar12 + 0x28);
        pfVar3 = (float *)(lVar12 + 0x40);
        pfVar4 = (float *)(lVar12 + 0x58);
        lVar12 = lVar12 + 0x60;
        fVar28 = *pfVar4 * *pfVar3 * *pfVar2 * *pfVar1 * fVar28;
      } while (lVar12 != lVar16 + (ulong)uVar29 * 0x18);
    }
  }
  fVar30 = *(float *)(param_1 + 0x2c4);
  *(ushort *)(param_1 + 0x220) = *(ushort *)(param_1 + 0x220) & 0xffef;
  fVar28 = *(float *)(param_1 + 0x2c0) * fVar28 * fVar30;
  if (fVar28 <= 0.0) {
    fVar28 = 0.0;
  }
  *(float *)(param_1 + 0x118) = fVar28;
  fVar28 = (float)FUN__text__00467330(*(undefined8 *)(param_1 + 0x1e8),
                                      *(undefined8 *)(param_1 + 0x20));
  if ((fVar28 != *(float *)(param_1 + 0x324)) || (fVar30 != *(float *)(param_1 + 0x328))) {
    *(float *)(param_1 + 0x324) = fVar28;
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    *(float *)(param_1 + 0x328) = fVar30;
    fVar28 = (float)NEON_fminnm(fVar28,0x42c80000);
    if (*(float *)(param_1 + 0x318) != fVar28) {
      if (*(int *)(param_1 + 0x378) != 0) {
        puVar22 = *(undefined8 **)(param_1 + 0x370);
        do {
          puVar27 = puVar22 + 1;
          FUN__text__00463684(fVar28,*puVar22,param_1);
          puVar22 = puVar27;
        } while (puVar27 !=
                 (undefined8 *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x378) * 8))
        ;
      }
      uVar29 = NEON_fminnm(fVar28,0x42c80000);
      if (((uVar29 ^ 0xffffffff) & 0x7f800000) != 0) {
        *(uint *)(param_1 + 0x318) = uVar29;
      }
    }
  }
  uVar14 = *(ushort *)(param_1 + 0x220);
  if ((uVar14 >> 2 & 1) != 0) {
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN__text__00458920();
    }
    if ((uVar9 & 4) != 0) {
      puVar19 = &local_1f8;
    }
    if (*(int *)(puVar19 + 0x29) != 0) {
      local_90 = *(undefined8 *)(param_1 + 0x360);
      uStack_a0 = *(undefined8 *)(param_1 + 0x350);
      local_98 = *(undefined4 *)(param_1 + 0x358);
      local_a8 = *(undefined8 *)(param_1 + 0x20);
      local_88 = *(undefined4 *)(param_1 + 0x30);
      uStack_84 = *(undefined4 *)(param_1 + 0x280);
      uStack_7c = 1;
      if ((uVar14 & 2) != 0) {
        uStack_7c = 2;
      }
      uStack_7c = uStack_7c & *(int *)(param_1 + 0x313) >> 0x1f;
      local_80 = *(undefined4 *)(param_1 + 0x330);
      local_78 = param_1;
      FUN__text__0046ce30(DAT_00ae9a90,puVar18,&local_a8,(long *)(param_1 + 0x90));
    }
    FUN__text__0046ab40(*(undefined8 *)(param_1 + 0x1e8),lVar25,param_1 + 0x178,param_1 + 0x1a0);
    uVar14 = *(ushort *)(param_1 + 0x220) & 0xfffb;
    *(ushort *)(param_1 + 0x220) = uVar14;
  }
  if (local_b8 != (undefined8 *)0x0) {
    if ((int)local_b0 != 0) {
      puVar18 = local_b8 + (local_b0 & 0xffffffff) * 5;
      puVar19 = local_b8;
      do {
        plVar26 = (long *)puVar19[3];
        plVar13 = plVar26;
        if (*(int *)(puVar19 + 4) != 0) {
          do {
            plVar13 = (long *)*plVar26;
            piVar6 = (int *)((long)plVar13 + 0x14);
            do {
              iVar17 = *piVar6;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar11) {
                *piVar6 = iVar17 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar17 + -1 == 0) {
              (**(code **)(*plVar13 + 0x20))();
            }
            plVar26 = plVar26 + 1;
            plVar13 = (long *)puVar19[3];
          } while (plVar26 != (long *)puVar19[3] + *(uint *)(puVar19 + 4));
        }
        if (plVar13 != (long *)0x0) {
          *(undefined4 *)(puVar19 + 4) = 0;
          FUN__text__00400fc0(0,plVar13);
          puVar19[3] = 0;
          *(undefined4 *)((long)puVar19 + 0x24) = 0;
        }
        puVar19 = puVar19 + 5;
      } while (puVar19 != puVar18);
    }
    local_b0 = local_b0 & 0xffffffff00000000;
    if (local_b8 != &local_1f8) {
      FUN__text__00400fc0(0,local_b8);
    }
    uVar14 = *(ushort *)(param_1 + 0x220);
  }
LAB__text__004764a8:
  *(ushort *)(param_1 + 0x220) = uVar14 | 3;
  FUN__text__00478c48(param_1 + 0x18);
  return;
}


