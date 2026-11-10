/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d5570; name: FUN_.text__004d5570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d5570(long param_1,uint param_2,long param_3,long param_4)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  void *__dest;
  long lVar9;
  void *__src;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong __n_00;
  long *plVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  size_t local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  
  uVar11 = (ulong)param_2 * 8 + 0xf & 0xffffffff0;
  local_78 = (long)&local_b0 - uVar11;
  local_80 = local_78 - uVar11;
  local_88 = local_80 - uVar11;
  uVar10 = *(int *)(param_1 + 0x170) + param_2;
  iVar5 = uVar10 - *(uint *)(param_1 + 0x174);
  local_a8 = param_3;
  local_98 = param_4;
  if (*(uint *)(param_1 + 0x174) <= uVar10 && iVar5 != 0) {
    FUN__text__004d8b50(param_1 + 0x168,iVar5);
  }
  if (param_2 == 0) {
    local_70 = 0;
  }
  else {
    local_68 = (ulong)param_2;
    uVar11 = 0;
    local_70 = 0;
    local_a0 = (ulong)_DAT_008ab03c;
    local_b0 = (local_a0 & 0xffff) << 2;
    lVar19 = local_a8;
    local_90 = param_1;
    do {
      lVar20 = *(long *)(lVar19 + uVar11 * 8);
      plVar15 = *(long **)(lVar20 + 0x18);
      uVar2 = *(ushort *)((long)plVar15 + 0x12);
      uVar3 = *(ushort *)(plVar15 + 2);
      uVar10 = *(uint *)(plVar15 + 1);
      uVar17 = (ulong)uVar10;
      if ((uint)uVar2 < (uint)uVar3) {
        if ((uVar10 & 0xff) != 0) {
          __n_00 = (ulong)(((uint)uVar3 - (uint)uVar2) * 4);
          if ((uVar10 & 0xff) < 4) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            lVar19 = 0xc;
            do {
              lVar9 = (ulong)uVar2 * 4;
              memset((void *)(*plVar15 + (lVar19 + -0xc) * (ulong)*(ushort *)(plVar15 + 2) + lVar9),
                     0,__n_00);
              memset((void *)(*plVar15 + (lVar19 + -8) * (ulong)*(ushort *)(plVar15 + 2) + lVar9),0,
                     __n_00);
              memset((void *)(*plVar15 + (lVar19 + -4) * (ulong)*(ushort *)(plVar15 + 2) + lVar9),0,
                     __n_00);
              memset((void *)(*plVar15 + lVar19 * (ulong)*(ushort *)(plVar15 + 2) + lVar9),0,__n_00)
              ;
              uVar18 = uVar18 + 4;
              lVar19 = lVar19 + 0x10;
            } while ((uVar17 & 0xfc) != uVar18);
          }
          uVar17 = uVar17 & 3;
          if ((uVar10 & 3) != 0) {
            lVar19 = uVar18 << 2;
            do {
              memset((void *)(*plVar15 + lVar19 * (ulong)*(ushort *)(plVar15 + 2) + (ulong)uVar2 * 4
                             ),0,__n_00);
              lVar19 = lVar19 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          uVar3 = *(ushort *)(plVar15 + 2);
          uVar17 = (ulong)*(uint *)(plVar15 + 1);
          param_1 = local_90;
          lVar19 = local_a8;
        }
        *(ushort *)((long)plVar15 + 0x12) = uVar3;
      }
      uVar10 = (uint)(uVar17 >> 0xc);
      uVar16 = (uint)uVar17;
      lVar9 = *(long *)(lVar20 + 8);
      bVar6 = (uVar10 & (*(uint *)(lVar20 + 0x54) ^ 0xffffffff)) == 0;
      uVar8 = *(uint *)(param_1 + 0x170);
      bVar7 = (uVar17 & 0xff9c0000) != 0;
      plVar13 = *(long **)(param_1 + 0x168);
      plVar22 = plVar13;
      if (uVar8 == 0) {
LAB__text__004d57f4:
        plVar21 = (long *)0x0;
        if (plVar22 != plVar13 + (ulong)uVar8 * 6) {
          plVar21 = plVar22;
        }
        if ((uVar16 >= 0x1000 && !bVar7) && !bVar6) goto LAB__text__004d5808;
        bVar6 = plVar21 == (long *)0x0;
        plVar21 = plVar22;
        if (bVar6) goto LAB__text__004d5934;
LAB__text__004d5948:
        if (*(uint *)(plVar21 + 1) != uVar16) {
          FUN__text__00451ee8(lVar20 + 0xc0);
          *(undefined4 *)((long)plVar21 + 0xc) = 0x11;
          goto LAB__text__004d5640;
        }
        plVar22 = plVar15;
LAB__text__004d59d8:
        *(short *)((long)plVar21 + 0x12) = (short)local_a0;
        FUN__text__0044f220(plVar21[3],lVar20 + 0x20);
        *(undefined4 *)(plVar21[3] + 0x34) = 0xffffffff;
        iVar5 = *(int *)((long)plVar21 + 0xc);
        if (*(int *)((long)plVar21 + 0xc) <= *(int *)((long)plVar15 + 0xc)) {
          iVar5 = *(int *)((long)plVar15 + 0xc);
        }
        *(int *)((long)plVar21 + 0xc) = iVar5;
        pfVar1 = (float *)(local_98 + uVar11 * 8);
        fVar23 = *(float *)(lVar20 + 0x74);
        fVar25 = pfVar1[1];
        lVar9 = plVar21[3];
        fVar24 = **(float **)(lVar20 + 0xf8);
        *(float *)(lVar9 + 0x50) =
             *pfVar1 * *(float *)(lVar20 + 0x70) * **(float **)(lVar20 + 0x100);
        *(float *)(lVar9 + 0x54) = fVar25 * fVar23 * fVar24;
        lVar9 = (local_70 & 0xffffffff) * 8;
        local_70 = (ulong)((int)local_70 + 1);
        *(long *)(local_78 + lVar9) = lVar20 + 0xc0;
        *(long **)(local_80 + lVar9) = plVar22;
        *(long **)(local_88 + lVar9) = plVar21;
      }
      else {
        lVar14 = (ulong)uVar8 * 0x30;
        do {
          if (*(long *)plVar22[3] == lVar9) goto LAB__text__004d57f4;
          plVar22 = plVar22 + 6;
          lVar14 = lVar14 + -0x30;
        } while (lVar14 != 0);
        if ((uVar16 < 0x1000 || bVar7) || bVar6) {
LAB__text__004d5934:
          plVar21 = (long *)FUN__text__004d234c(param_1,lVar9,uVar17);
          if (plVar21 == (long *)0x0) {
            return;
          }
          goto LAB__text__004d5948;
        }
        plVar21 = (long *)0x0;
LAB__text__004d5808:
        uVar10 = uVar10 & *(uint *)(lVar20 + 0x54);
        uVar12 = uVar10 & 0xfffffff7;
        uVar10 = uVar10 & 8;
        uVar8 = uVar12 - (uVar12 >> 1 & 0x55555555);
        uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
        uVar8 = *(uint *)((ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 4 +
                         0x724e30);
        uVar4 = uVar8 | uVar10;
        if (uVar4 != 0) {
          uVar8 = uVar4 - ((uVar8 & 0xaaaaaaaa | uVar10) >> 1);
          uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
          uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar4 << 0xc | 0x100;
          if ((plVar21 == (long *)0x0) &&
             (plVar21 = (long *)FUN__text__004d234c(param_1,lVar9,uVar8), plVar21 == (long *)0x0)) {
            return;
          }
          if (*(uint *)(plVar21 + 1) == uVar8) {
            uVar8 = FUN__text__00488f70(uVar16 + ((int)(uVar16 << 0x10) >> 0x1f) & 0xff,uVar12);
            __n = local_b0;
            if (uVar8 != 0) {
              uVar17 = 0;
              uVar16 = 0;
              uVar12 = uVar8;
              do {
                uVar12 = (uVar12 & 0xaaaaaaaa) >> 1 | (uVar12 & 0x55555555) << 1;
                uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                uVar16 = (int)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10) + uVar16;
                memcpy((void *)(*plVar21 + *(ushort *)(plVar21 + 2) * uVar17 * 4),
                       (void *)(*plVar15 + (ulong)*(ushort *)(plVar15 + 2) * (ulong)uVar16 * 4),__n)
                ;
                uVar16 = uVar16 + 1;
                uVar17 = (ulong)((int)uVar17 + 1);
                uVar12 = uVar8 >> (ulong)(uVar16 & 0x1f);
              } while (uVar12 != 0);
            }
            param_1 = local_90;
            if (uVar10 != 0) {
              if ((*(uint *)(plVar21 + 1) >> 0xf & 1) == 0) {
                __dest = (void *)0x0;
                uVar10 = *(uint *)(plVar15 + 1);
                if ((uVar10 >> 0xf & 1) != 0) goto LAB__text__004d5988;
LAB__text__004d59c8:
                __src = (void *)0x0;
              }
              else {
                __dest = (void *)(*plVar21 +
                                 (ulong)*(ushort *)(plVar21 + 2) *
                                 (ulong)((*(uint *)(plVar21 + 1) & 0xff) - 1) * 4);
                uVar10 = *(uint *)(plVar15 + 1);
                if ((uVar10 >> 0xf & 1) == 0) goto LAB__text__004d59c8;
LAB__text__004d5988:
                __src = (void *)(*plVar15 +
                                (ulong)*(ushort *)(plVar15 + 2) * (ulong)((uVar10 & 0xff) - 1) * 4);
              }
              memcpy(__dest,__src,__n);
            }
            plVar22 = plVar21;
            goto LAB__text__004d59d8;
          }
          FUN__text__00451ee8(lVar20 + 0xc0);
          *(undefined4 *)((long)plVar21 + 0xc) = 0x11;
        }
      }
LAB__text__004d5640:
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_68);
  }
  FUN__text__004556a0(local_70,local_78,local_80,local_88);
  return;
}


