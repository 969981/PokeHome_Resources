/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00586490; name: FUN_.text__00586490
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00586490(long *param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  undefined1 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  undefined1 uVar24;
  int iVar25;
  ushort uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  ushort uVar30;
  int iVar31;
  
  lVar13 = _DAT_008a3f58;
  bVar5 = *(byte *)(param_3 + 1);
  uVar19 = (ulong)bVar5 + 5;
  uVar18 = *(ulong *)*param_3;
  uVar17 = *(uint *)(_DAT_008a3f58 + 0x14);
  *(byte *)(param_3 + 1) = (byte)uVar19 & 0x1f;
  uVar19 = uVar19 >> 5;
  *param_3 = *param_3 + uVar19 * 4;
  uVar17 = uVar17 & (uint)(uVar18 >> ((ulong)bVar5 & 0x3f));
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar19;
  *(uint *)(param_1 + 6) = uVar17;
  if (uVar17 == 0) {
    param_1[1] = 0;
LAB__text__005865dc:
    *param_1 = 0;
  }
  else {
    uVar28 = uVar17 + 3 & 0xfffffffc;
    uVar22 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar22) {
      param_1[1] = 0;
    }
    else {
      lVar23 = *(long *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar22;
      *(ulong *)(param_4 + 0x48) = lVar23 + (ulong)uVar28;
      uVar17 = *(uint *)(param_1 + 6);
      param_1[1] = lVar23;
    }
    if ((int)uVar17 < 1) goto LAB__text__005865dc;
    lVar23 = 0;
    uVar17 = 0xffffffff;
    do {
      bVar5 = *(byte *)(param_3 + 1);
      uVar4 = *(undefined4 *)(lVar13 + 0x10);
      uVar18 = *(ulong *)*param_3;
      uVar19 = (ulong)bVar5 + 4;
      uVar20 = uVar19 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar19 & 0x1f;
      *param_3 = *param_3 + uVar20 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar20;
      *(byte *)(param_1[1] + lVar23) = (byte)uVar4 & (byte)(uVar18 >> ((ulong)bVar5 & 0x3f));
      pbVar1 = (byte *)(param_1[1] + lVar23);
      lVar23 = lVar23 + 1;
      if ((int)uVar17 <= (int)(uint)*pbVar1) {
        uVar17 = (uint)*pbVar1;
      }
    } while (lVar23 < (int)param_1[6]);
    uVar28 = uVar17 * 0xb + 0xe & 0x7ffffffc;
    uVar22 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar22) {
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar22;
      *(ulong *)(param_4 + 0x48) = lVar23 + (ulong)uVar28;
    }
    uVar19 = 0;
    *param_1 = lVar23;
    lVar23 = 3;
    do {
      bVar5 = *(byte *)(param_3 + 1);
      uVar4 = *(undefined4 *)(lVar13 + 0xc);
      uVar20 = *(ulong *)*param_3;
      uVar18 = (ulong)bVar5 + 3;
      uVar29 = uVar18 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar18 & 0x1f;
      *param_3 = *param_3 + uVar29 * 4;
      lVar27 = uVar19 * 0xb;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
      *(byte *)(*param_1 + lVar27) = ((byte)uVar4 & (byte)(uVar20 >> ((ulong)bVar5 & 0x3f))) + 1;
      bVar5 = *(byte *)(param_3 + 1);
      uVar4 = *(undefined4 *)(lVar13 + 8);
      uVar20 = *(ulong *)*param_3;
      uVar18 = (ulong)bVar5 + 2;
      uVar29 = uVar18 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar18 & 0x1f;
      *param_3 = *param_3 + uVar29 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
      *(byte *)(*param_1 + lVar27 + 1) = (byte)uVar4 & (byte)(uVar20 >> ((ulong)bVar5 & 0x3f));
      if (*(char *)(*param_1 + lVar27 + 1) == '\0') {
        *(undefined1 *)(*param_1 + uVar19 * 0xb + 2) = 0;
        lVar27 = *param_1;
        if (*(int *)(param_2 + 0x18) <= (int)(uint)*(byte *)(lVar27 + uVar19 * 0xb + 2)) {
          return 0xffffffff;
        }
      }
      else {
        bVar5 = *(byte *)(param_3 + 1);
        uVar4 = *(undefined4 *)(lVar13 + 0x20);
        uVar20 = *(ulong *)*param_3;
        uVar18 = (ulong)bVar5 + 8;
        uVar29 = uVar18 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar18 & 0x1f;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
        *param_3 = *param_3 + uVar29 * 4;
        *(byte *)(*param_1 + uVar19 * 0xb + 2) =
             (byte)uVar4 & (byte)(uVar20 >> ((ulong)bVar5 & 0x3f));
        lVar27 = *param_1;
        bVar5 = *(byte *)(lVar27 + uVar19 * 0xb + 2);
        if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar5) {
          return 0xffffffff;
        }
        if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar5) {
          return 0xffffffff;
        }
      }
      if (*(char *)(lVar27 + uVar19 * 0xb + 1) != '\x1f') {
        lVar27 = 0;
        do {
          bVar5 = *(byte *)(param_3 + 1);
          uVar4 = *(undefined4 *)(lVar13 + 0x20);
          uVar20 = *(ulong *)*param_3;
          uVar18 = (ulong)bVar5 + 8;
          uVar29 = uVar18 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar18 & 0x1f;
          *param_3 = *param_3 + uVar29 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
          *(byte *)(*param_1 + lVar23 + lVar27) =
               ((byte)uVar4 & (byte)(uVar20 >> ((ulong)bVar5 & 0x3f))) - 1;
          uVar22 = *(uint *)(param_2 + 0x18);
          bVar5 = *(byte *)(*param_1 + lVar23 + lVar27);
          uVar28 = (uint)bVar5;
          bVar11 = false;
          bVar12 = false;
          if (uVar28 != 0xff) {
            bVar11 = (int)(uVar22 - bVar5) < 0;
            bVar12 = uVar22 == bVar5;
          }
          if (bVar12 || bVar11 != (uVar28 != 0xff && SBORROW4(uVar22,uVar28))) {
            return 0xffffffff;
          }
          lVar27 = lVar27 + 1;
        } while (lVar27 < 1 << (ulong)(*(byte *)(*param_1 + uVar19 * 0xb + 1) & 0x1f));
      }
      uVar19 = uVar19 + 1;
      lVar23 = lVar23 + 0xb;
    } while (uVar19 != uVar17 + 1);
  }
  bVar5 = *(byte *)(param_3 + 1);
  uVar17 = *(uint *)(lVar13 + 8);
  uVar18 = *(ulong *)*param_3;
  uVar19 = (ulong)bVar5 + 2;
  uVar20 = uVar19 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar19 & 0x1f;
  *param_3 = *param_3 + uVar20 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar20;
  *(uint *)(param_1 + 7) = (uVar17 & (uint)(uVar18 >> ((ulong)bVar5 & 0x3f))) + 1;
  bVar5 = *(byte *)(param_3 + 1);
  uVar17 = *(uint *)(lVar13 + 0x10);
  uVar19 = (ulong)bVar5 + 4;
  uVar18 = *(ulong *)*param_3;
  uVar20 = uVar19 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar19 & 0x1f;
  *param_3 = *param_3 + uVar20 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar20;
  uVar22 = *(uint *)(param_1 + 6);
  if ((int)uVar22 < 1) {
    iVar21 = 0;
  }
  else {
    lVar23 = *param_1;
    uVar19 = 0;
    iVar21 = 0;
    if (uVar22 != 1) {
      do {
        pbVar1 = (byte *)(param_1[1] + uVar19);
        uVar19 = uVar19 + 2;
        iVar21 = iVar21 + (uint)*(byte *)(lVar23 + (ulong)*pbVar1 * 0xb) +
                 (uint)*(byte *)(lVar23 + (ulong)pbVar1[1] * 0xb);
      } while (((ulong)uVar22 & 0xfffffffe) != uVar19);
    }
    if ((uVar22 & 1) != 0) {
      iVar21 = iVar21 + (uint)*(byte *)(lVar23 + (ulong)*(byte *)(param_1[1] + uVar19) * 0xb);
    }
  }
  uVar28 = iVar21 * 2 + 7U & 0xfffffffc;
  uVar22 = *(int *)(param_4 + 0x50) + uVar28;
  if (*(uint *)(param_4 + 0x54) < uVar22) {
    lVar23 = 0;
  }
  else {
    lVar23 = *(long *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar22;
    *(ulong *)(param_4 + 0x48) = lVar23 + (ulong)uVar28;
  }
  param_1[2] = lVar23;
  uVar28 = iVar21 + 5U & 0xfffffffc;
  uVar22 = *(int *)(param_4 + 0x50) + uVar28;
  uVar14 = (uint)(uVar18 >> ((ulong)bVar5 & 0x3f));
  if (*(uint *)(param_4 + 0x54) < uVar22) {
    param_1[3] = 0;
  }
  else {
    lVar23 = *(long *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar22;
    *(ulong *)(param_4 + 0x48) = lVar23 + (ulong)uVar28;
    param_1[3] = lVar23;
  }
  if (iVar21 == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    iVar21 = (int)param_1[6];
    goto joined_r0x00586acc;
  }
  uVar28 = iVar21 + 3U & 0xfffffffc;
  uVar22 = *(int *)(param_4 + 0x50) + uVar28;
  if (*(uint *)(param_4 + 0x54) < uVar22) {
    param_1[5] = 0;
    uVar22 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar22) {
LAB__text__00586ab8:
      iVar21 = (int)param_1[6];
      param_1[4] = 0;
      goto joined_r0x00586acc;
    }
  }
  else {
    lVar23 = *(long *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar22;
    *(ulong *)(param_4 + 0x48) = lVar23 + (ulong)uVar28;
    param_1[5] = lVar23;
    uVar22 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar22) goto LAB__text__00586ab8;
  }
  lVar23 = *(long *)(param_4 + 0x48);
  *(uint *)(param_4 + 0x50) = uVar22;
  *(ulong *)(param_4 + 0x48) = lVar23 + (ulong)uVar28;
  iVar21 = (int)param_1[6];
  param_1[4] = lVar23;
joined_r0x00586acc:
  if (iVar21 < 1) {
    iVar25 = 0;
  }
  else {
    uVar22 = uVar17 & uVar14;
    lVar23 = 0;
    iVar15 = 0;
    iVar31 = 0;
    do {
      bVar5 = *(byte *)(*param_1 + (ulong)*(byte *)(param_1[1] + lVar23) * 0xb);
      iVar25 = iVar31 + (uint)bVar5;
      if (iVar15 < iVar25) {
        lVar27 = (long)iVar15;
        do {
          uVar28 = *(uint *)(lVar13 + (long)(int)uVar22 * 4) &
                   (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          iVar21 = uVar22 + *(byte *)(param_3 + 1);
          iVar15 = iVar21 >> 5;
          *(byte *)(param_3 + 1) = (byte)iVar21 & 0x1f;
          *param_3 = *param_3 + (long)iVar15 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - iVar15;
          *(short *)(param_1[2] + lVar27 * 2 + 4) = (short)uVar28;
          if (1 << (ulong)(uVar22 & 0x1f) <= (int)(uVar28 & 0xffff)) {
            return 0xffffffff;
          }
          lVar27 = lVar27 + 1;
        } while ((uint)bVar5 + iVar31 != (int)lVar27);
        iVar21 = (int)param_1[6];
        iVar15 = iVar25;
      }
      lVar23 = lVar23 + 1;
      iVar31 = iVar25;
    } while (lVar23 < iVar21);
  }
  if (*(int *)((long)param_3 + 0xc) < 0) {
    return 0xffffffff;
  }
  *(undefined2 *)param_1[2] = 0;
  *(short *)(param_1[2] + 2) = (short)(1 << (ulong)(uVar17 & uVar14 & 0x1f));
  *(int *)((long)param_1 + 0x34) = iVar25 + 2;
  if (-2 < iVar25) {
    lVar13 = 0;
    do {
      *(char *)(param_1[3] + lVar13) = (char)lVar13;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((long)param_1 + 0x34));
  }
  FUN__text__00586c70(param_1[3],param_1[2]);
  if (2 < *(int *)((long)param_1 + 0x34)) {
    lVar13 = 0;
    uVar19 = 2;
    bVar11 = false;
    do {
      lVar23 = param_1[2];
      uVar18 = 0;
      iVar21 = 0;
      uVar30 = *(ushort *)(lVar23 + 2);
      iVar25 = 1;
      uVar6 = *(ushort *)(lVar23 + lVar13 * 2 + 4);
      uVar26 = 0;
      do {
        puVar2 = (ushort *)(lVar23 + uVar18 * 2);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        iVar15 = (int)uVar18;
        iVar31 = iVar15;
        uVar3 = uVar7;
        if (uVar7 <= uVar26 || uVar6 <= uVar7) {
          iVar31 = iVar21;
          uVar3 = uVar26;
        }
        iVar9 = iVar15;
        if (uVar30 <= uVar7 || uVar7 <= uVar6) {
          iVar9 = iVar25;
          uVar7 = uVar30;
        }
        uVar16 = (undefined1)iVar31;
        iVar21 = iVar31;
        if (uVar3 < uVar8 && uVar8 < uVar6) {
          uVar16 = (undefined1)(iVar15 + 1);
          iVar21 = iVar15 + 1;
          uVar3 = uVar8;
        }
        uVar24 = (undefined1)iVar9;
        uVar30 = uVar7;
        iVar25 = iVar9;
        if (uVar8 < uVar7 && uVar6 < uVar8) {
          uVar24 = (undefined1)(iVar15 + 1);
          uVar30 = uVar8;
          iVar25 = iVar15 + 1;
        }
        uVar18 = uVar18 + 2;
        uVar26 = uVar3;
      } while (uVar18 != (uVar19 & 0x7ffffffffffffffe));
      if (bVar11) {
        uVar26 = *(ushort *)(lVar23 + uVar18 * 2);
        uVar10 = (char)uVar18;
        if (uVar26 <= uVar6 || uVar30 <= uVar26) {
          uVar10 = uVar24;
        }
        uVar24 = uVar10;
        uVar10 = (char)uVar18;
        if (uVar6 <= uVar26 || uVar26 <= uVar3) {
          uVar10 = uVar16;
        }
        uVar16 = uVar10;
      }
      uVar19 = uVar19 + 1;
      bVar11 = (bool)(bVar11 ^ 1);
      *(undefined1 *)(param_1[5] + lVar13) = uVar16;
      *(undefined1 *)(param_1[4] + lVar13) = uVar24;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (long)*(int *)((long)param_1 + 0x34) + -2);
  }
  return 0;
}


