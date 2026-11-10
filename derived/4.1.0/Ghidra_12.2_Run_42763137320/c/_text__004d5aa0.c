/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d5aa0; name: FUN_.text__004d5aa0
 */


void FUN__text__004d5aa0(long param_1,uint param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  ulong __n;
  long *plVar18;
  char *pcVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long alStack_100 [3];
  char *local_e8;
  long *local_e0;
  ulong local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  
  plVar17 = (long *)((long)alStack_100 - ((ulong)*(uint *)(param_1 + 0x28) * 8 + 0xf & 0xffffffff0))
  ;
  if (param_2 != 0) {
    uVar14 = 0;
    uVar9 = (ulong)param_2;
    do {
      lVar11 = *param_3;
      if (*(int *)(lVar11 + 0x148) != 0) {
        lVar13 = *(long *)(*(long *)(lVar11 + 0x140) + 0x18);
        if (((lVar13 != 0) && (*(long *)(*(long *)(lVar11 + 0x140) + 0xe8) != 0)) &&
           (*(short *)(lVar13 + 0x12) != 0)) {
          plVar17[uVar14] = lVar11;
          uVar14 = (ulong)((int)uVar14 + 1);
        }
      }
      param_3 = param_3 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if ((int)uVar14 != 0) {
      if (*(int *)(param_1 + 0x1b0) == 4) {
        *(undefined4 *)(param_1 + 0x1b0) = 1;
      }
      if (*(int *)(param_1 + 0x170) == 0) {
        do {
          uVar9 = DAT_00aea6a0 + 1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0xaea6a0,0x10);
          if (bVar5) {
            cVar4 = ExclusiveMonitorsStatus();
            DAT_00aea6a0 = uVar9;
          }
        } while (cVar4 != '\0');
        lVar11 = FUN__text__004d234c(param_1,uVar9 & 0xffffffffffffff,
                                     *(undefined4 *)(param_1 + 0x160));
        if (lVar11 == 0) {
          return;
        }
      }
      alStack_100[1] = *(long *)(param_1 + 0x168);
      alStack_100[2] = param_1;
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x168) + 0x18) + 0x50) = 0x3f8000003f800000;
      plVar18 = plVar17 + uVar14 * -6;
      pcVar19 = (char *)((long)plVar18 - (uVar14 + 0xf & 0x1fffffff0));
      uVar9 = uVar14 * 8 + 0xf & 0xffffffff0;
      local_b8 = (long)pcVar19 - uVar9;
      local_c0 = ((long)pcVar19 - uVar9) - uVar9;
      local_d0 = plVar17;
      local_c8 = local_c0 - uVar9;
      uVar9 = 0;
      local_a8 = 0;
      local_e0 = plVar18;
      local_d8 = uVar14;
      local_e8 = pcVar19;
      do {
        while( true ) {
          lVar13 = plVar17[uVar9];
          lVar11 = *(long *)(lVar13 + 0x140);
          fVar6 = *(float *)(lVar13 + 0x178);
          if (*(float *)(lVar13 + 0x178) <= *(float *)(lVar13 + 0x180)) {
            fVar6 = *(float *)(lVar13 + 0x180);
          }
          fVar21 = *(float *)(lVar13 + 0x17c);
          fVar22 = *(float *)(lVar13 + 0x184);
          fVar23 = (float)NEON_fminnm(fVar6,0x42c80000);
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          if (fVar23 != *(float *)(lVar11 + 200)) {
            *(float *)(lVar11 + 200) = fVar23;
            *(byte *)(lVar11 + 0xcd) = *(byte *)(lVar11 + 0xcd) | 1;
          }
          if (fVar21 <= fVar22) {
            fVar21 = fVar22;
          }
          fVar21 = (float)NEON_fminnm(fVar21,0x42c80000);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (fVar21 != *(float *)(lVar11 + 0xd4)) {
            *(float *)(lVar11 + 0xd4) = fVar21;
            *(byte *)(lVar11 + 0xd9) = *(byte *)(lVar11 + 0xd9) | 1;
          }
          plVar15 = *(long **)(lVar11 + 0x18);
          uVar2 = *(ushort *)((long)plVar15 + 0x12);
          uVar3 = *(ushort *)(plVar15 + 2);
          if ((uint)uVar2 < (uint)uVar3) {
            bVar1 = *(byte *)(plVar15 + 1);
            uVar12 = (ulong)bVar1;
            if (bVar1 != 0) {
              __n = (ulong)(((uint)uVar3 - (uint)uVar2) * 4);
              uVar14 = 0;
              local_b0 = uVar12;
              if (3 < bVar1) {
                lVar20 = 0xc;
                do {
                  lVar16 = (ulong)uVar2 * 4;
                  memset((void *)(*plVar15 + (lVar20 + -0xc) * (ulong)*(ushort *)(plVar15 + 2) +
                                 lVar16),0,__n);
                  memset((void *)(*plVar15 + (lVar20 + -8) * (ulong)*(ushort *)(plVar15 + 2) +
                                 lVar16),0,__n);
                  memset((void *)(*plVar15 + (lVar20 + -4) * (ulong)*(ushort *)(plVar15 + 2) +
                                 lVar16),0,__n);
                  memset((void *)(*plVar15 + lVar20 * (ulong)*(ushort *)(plVar15 + 2) + lVar16),0,
                         __n);
                  uVar14 = uVar14 + 4;
                  lVar20 = lVar20 + 0x10;
                } while ((uVar12 & 0xfc) != uVar14);
              }
              uVar12 = local_b0 & 3;
              if (uVar12 != 0) {
                lVar20 = uVar14 << 2;
                do {
                  memset((void *)(*plVar15 + lVar20 * (ulong)*(ushort *)(plVar15 + 2) +
                                 (ulong)uVar2 * 4),0,__n);
                  lVar20 = lVar20 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar3 = *(ushort *)(plVar15 + 2);
              plVar17 = local_d0;
              uVar14 = local_d8;
              plVar18 = local_e0;
              pcVar19 = local_e8;
            }
            *(ushort *)((long)plVar15 + 0x12) = uVar3;
          }
          if ((*(int *)((long)plVar15 + 0xc) == 0x11) && (0.0 < fVar6)) {
            *(undefined4 *)(lVar13 + 0xc) = 0;
          }
          uStack_8e = 0;
          local_a0 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0xffffffff;
          uStack_80 = 0x3f800000;
          local_7c = 0xffffffff;
          uStack_78 = 1;
          local_98 = CONCAT44(0x2b,(int)plVar15[1]);
          local_90 = (undefined2)plVar15[2];
          iVar8 = FUN__text__0041ec00(&local_a0);
          pcVar19[uVar9] = iVar8 == 1;
          if (iVar8 != 1) break;
          uStack_8e = (short)plVar15[2];
          lVar13 = (local_a8 & 0xffffffff) * 8;
          plVar10 = plVar18 + uVar9 * 6;
          local_a8 = (ulong)((int)local_a8 + 1);
          *(long **)(local_b8 + lVar13) = plVar15;
          plVar10[4] = CONCAT44(local_7c,uStack_80);
          *(undefined4 *)(plVar10 + 5) = uStack_78;
          lVar20 = local_98;
          *(long **)(local_c0 + lVar13) = plVar10;
          *plVar10 = local_a0;
          plVar10[1] = lVar20;
          lVar20 = CONCAT44(uStack_84,uStack_88);
          plVar10[2] = CONCAT44(uStack_8c,CONCAT22(uStack_8e,local_90));
          plVar10[3] = lVar20;
          *(long *)(local_c8 + lVar13) = lVar11 + 0xc0;
          uVar9 = uVar9 + 1;
          if (uVar9 == uVar14) goto LAB__text__004d5ec8;
        }
        lVar13 = *plVar15;
        local_90 = (short)plVar15[2];
        uStack_8e = (short)plVar15[2];
        plVar10 = plVar18 + uVar9 * 6;
        local_98 = CONCAT44(local_98._4_4_,(int)plVar15[1]);
        lVar11 = CONCAT44(local_7c,uStack_80);
        local_a0 = lVar13;
        plVar10[3] = CONCAT44(uStack_84,uStack_88);
        plVar10[4] = lVar11;
        uVar7 = uStack_78;
        *plVar10 = lVar13;
        *(undefined4 *)(plVar10 + 5) = uVar7;
        lVar11 = CONCAT44(uStack_8c,CONCAT22(uStack_8e,local_90));
        plVar10[1] = local_98;
        plVar10[2] = lVar11;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar14);
LAB__text__004d5ec8:
      FUN__text__004556a0(local_a8,local_c8,local_b8,local_c0);
      lVar13 = alStack_100[2];
      lVar11 = alStack_100[1];
      do {
        lVar20 = *plVar17;
        plVar15 = *(long **)(*(long *)(lVar13 + 400) + 0x88);
        (**(code **)(*plVar15 + 0x50))
                  (*(undefined4 *)(lVar20 + 8),*(undefined4 *)(lVar20 + 0xc),
                   *(undefined4 *)(lVar20 + 0x10),*(undefined4 *)(lVar20 + 0x14),plVar15,lVar20,
                   plVar18,lVar11);
        if (*pcVar19 != '\0') {
          FUN__text__0041edb0(plVar18);
        }
        plVar17 = plVar17 + 1;
        plVar18 = plVar18 + 6;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar19 + 1;
      } while (uVar14 != 0);
    }
  }
  return;
}


