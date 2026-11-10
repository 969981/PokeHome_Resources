/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00588000; name: FUN_.text__00588000
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__00588000(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  char *pcVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  ushort auStack_b0 [4];
  ulong local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  int local_90;
  int iStack_8c;
  undefined2 local_88;
  undefined2 local_86;
  int local_84;
  ushort *local_78;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  
  lVar10 = _DAT_008a3f58;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  bVar6 = *(byte *)(param_1 + 1);
  uVar5 = *(undefined4 *)(lVar10 + 0x10);
  uVar18 = *(ulong *)*param_1;
  uVar31 = (ulong)bVar6 + 4;
  uVar22 = uVar31 >> 5;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar22;
  *param_1 = *param_1 + uVar22 * 4;
  *(byte *)(param_1 + 1) = (byte)uVar31 & 0x1f;
  *(byte *)((long)param_2 + 0x1a) = (byte)uVar5 & (byte)(uVar18 >> ((ulong)bVar6 & 0x3f));
  uVar31 = (ulong)*(byte *)(param_1 + 1) + 0xe;
  uVar22 = uVar31 >> 5;
  uVar18 = *(ulong *)*param_1 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f) &
           (ulong)*(uint *)(lVar10 + 0x38);
  puVar3 = (uint *)(*param_1 + uVar22 * 4);
  uVar14 = (uint)uVar31;
  uVar28 = uVar14 & 0x1f;
  uVar31 = uVar18 & 0xffff;
  *(char *)(param_1 + 1) = (char)uVar28;
  local_88 = (undefined2)uVar18;
  *param_1 = (long)puVar3;
  iVar16 = *(int *)((long)param_1 + 0xc) - (int)uVar22;
  iVar29 = (int)uVar31;
  *(int *)((long)param_1 + 0xc) = iVar16;
  pcVar27 = (char *)((long)auStack_b0 - ((ulong)(iVar29 + 0xf) & 0x1fff0));
  uVar28 = uVar28 + 1;
  uVar17 = *puVar3;
  uVar30 = uVar28 & 0x1f;
  uVar28 = uVar28 >> 5;
  iVar16 = iVar16 - uVar28;
  puVar21 = (ulong *)(puVar3 + uVar28);
  *(char *)(param_1 + 1) = (char)uVar30;
  *(int *)((long)param_1 + 0xc) = iVar16;
  *param_1 = (long)puVar21;
  uVar22 = *puVar21;
  local_86 = local_88;
  if ((uVar17 >> (ulong)(uVar14 & 0x1f) & 1) == 0) {
    uVar17 = *(uint *)(lVar10 + 0xc);
    uVar28 = uVar30 + 3;
    puVar3 = (uint *)((long)puVar21 + (ulong)(uVar28 >> 5) * 4);
    iVar16 = iVar16 - (uVar28 >> 5);
    *(int *)((long)param_1 + 0xc) = iVar16;
    uVar17 = uVar17 & (uint)(uVar22 >> uVar30);
    *param_1 = (long)puVar3;
    *(char *)(param_1 + 1) = (char)(uVar28 & 0x1f);
    uVar30 = (uVar28 & 0x1f) + 1;
    uVar14 = *puVar3;
    uVar8 = uVar30 >> 5;
    *(byte *)(param_1 + 1) = (byte)uVar30 & 0x1f;
    *(uint *)((long)param_1 + 0xc) = iVar16 - uVar8;
    *param_1 = (long)(puVar3 + uVar8);
    if ((uVar14 >> (ulong)(uVar28 & 0x1f) & 1) == 0) {
      if (iVar29 != 0) {
        uVar22 = uVar31;
        pcVar20 = pcVar27;
        do {
          uVar28 = *(uint *)(lVar10 + (long)(int)uVar17 * 4) &
                   (uint)(*(ulong *)*param_1 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f));
          iVar16 = uVar17 + *(byte *)(param_1 + 1);
          iVar2 = iVar16 >> 5;
          *(byte *)(param_1 + 1) = (byte)iVar16 & 0x1f;
          *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar2;
          *param_1 = *param_1 + (long)iVar2 * 4;
          cVar9 = (char)uVar28 + '\x01';
          bVar6 = *(byte *)((long)param_2 + 0x1c);
          *pcVar20 = cVar9;
          if ((int)(uint)bVar6 <= (int)uVar28) {
            *(char *)((long)param_2 + 0x1c) = cVar9;
          }
          pcVar20 = pcVar20 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB__text__005883c4;
    }
    uVar22 = 0;
    if (iVar29 != 0) {
      uVar19 = uVar31;
      pcVar20 = pcVar27;
      do {
        bVar6 = *(byte *)(param_1 + 1);
        uVar26 = (ulong)bVar6 + 1;
        uVar30 = *(uint *)*param_1;
        uVar28 = (uint)uVar26 & 0x1f;
        uVar26 = uVar26 >> 5;
        puVar21 = (ulong *)((uint *)*param_1 + uVar26);
        *(char *)(param_1 + 1) = (char)uVar28;
        *param_1 = (long)puVar21;
        iVar16 = *(int *)((long)param_1 + 0xc) - (int)uVar26;
        *(int *)((long)param_1 + 0xc) = iVar16;
        if ((uVar30 >> (ulong)(bVar6 & 0x1f) & 1) == 0) {
          *pcVar20 = '\0';
        }
        else {
          uVar22 = (ulong)((int)uVar22 + 1);
          uVar30 = *(uint *)(lVar10 + (long)(int)uVar17 * 4) & (uint)(*puVar21 >> uVar28);
          iVar2 = (int)(uVar28 + uVar17) >> 5;
          *(byte *)(param_1 + 1) = (byte)(uVar28 + uVar17) & 0x1f;
          *(int *)((long)param_1 + 0xc) = iVar16 - iVar2;
          *param_1 = (long)((long)puVar21 + (long)iVar2 * 4);
          cVar9 = (char)uVar30 + '\x01';
          bVar6 = *(byte *)((long)param_2 + 0x1c);
          *pcVar20 = cVar9;
          if ((int)(uint)bVar6 <= (int)uVar30) {
            *(char *)((long)param_2 + 0x1c) = cVar9;
          }
        }
        pcVar20 = pcVar20 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    local_86 = (undefined2)uVar22;
  }
  else {
    uVar28 = *(uint *)(lVar10 + 0x14);
    uVar17 = uVar30 + 5 >> 5;
    *(byte *)(param_1 + 1) = (byte)(uVar30 + 5) & 0x1f;
    *(uint *)((long)param_1 + 0xc) = iVar16 - uVar17;
    *param_1 = (long)((long)puVar21 + (ulong)uVar17 * 4);
    if (iVar29 == 0) {
LAB__text__005883c4:
      uVar22 = uVar18;
    }
    else {
      uVar17 = 0;
      uVar28 = uVar28 & (uint)(uVar22 >> uVar30);
      local_a8 = uVar18;
      uStack_a0 = param_3;
      local_94 = param_4;
      do {
        iVar16 = 0;
        uVar30 = iVar29 - uVar17;
        if (iVar29 - uVar17 != 0) {
          do {
            iVar16 = iVar16 + 1;
            bVar1 = 1 < uVar30;
            uVar30 = uVar30 >> 1;
          } while (bVar1);
        }
        uVar28 = uVar28 + 1;
        iVar2 = iVar16 + (uint)*(byte *)(param_1 + 1);
        uVar30 = *(uint *)(lVar10 + (long)iVar16 * 4) &
                 (uint)(*(ulong *)*param_1 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f));
        iVar16 = iVar2 >> 5;
        *(byte *)(param_1 + 1) = (byte)iVar2 & 0x1f;
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar16;
        *param_1 = *param_1 + (long)iVar16 * 4;
        if (0 < (int)uVar30 && (int)uVar17 < iVar29) {
          uVar14 = iVar29 + ~uVar17;
          if (uVar30 - 1 <= iVar29 + ~uVar17) {
            uVar14 = uVar30 - 1;
          }
          memset(pcVar27 + (int)uVar17,uVar28,(ulong)uVar14 + 1);
          lVar11 = 0;
          do {
            iVar16 = (int)(lVar11 + 1);
            if ((int)uVar30 <= iVar16) break;
            lVar4 = (long)(int)uVar17 + 1 + lVar11;
            lVar11 = lVar11 + 1;
          } while (lVar4 < (long)uVar31);
          uVar17 = uVar17 + iVar16;
        }
        *(char *)((long)param_2 + 0x1c) = (char)uVar28;
      } while ((int)uVar17 < iVar29);
      param_3 = uStack_a0;
      uVar22 = local_a8 & 0xffffffff;
      uVar18 = local_a8;
      param_4 = local_94;
    }
  }
  bVar6 = *(byte *)(param_1 + 1);
  uVar19 = (ulong)bVar6 + 1;
  uVar28 = *(uint *)*param_1;
  *(byte *)(param_1 + 1) = (byte)uVar19 & 0x1f;
  uVar28 = uVar28 >> (ulong)(bVar6 & 0x1f);
  uVar19 = uVar19 >> 5;
  *param_1 = (long)((uint *)*param_1 + uVar19);
  local_70 = uVar28 & 1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar19;
  uVar30 = (uint)uVar22;
  if ((uVar28 & 1) != 0) {
    lVar11 = FUN__text__00400f90(5,0x60,0x10);
    param_2[2] = lVar11;
    if (lVar11 == 0) {
      return 0xffffff75;
    }
    *(undefined8 *)(lVar11 + 0x48) = 0;
    uVar31 = (ulong)*(byte *)(param_1 + 1);
    uVar22 = *(ulong *)*param_1;
    uVar28 = *(uint *)(lVar10 + 0x80);
    uVar19 = uVar31 + 0x20 >> 5;
    puVar21 = (ulong *)(*param_1 + uVar19 * 4);
    *param_1 = (long)puVar21;
    uVar28 = uVar28 & (uint)(uVar22 >> (uVar31 & 0x3f));
    *(char *)(param_1 + 1) = (char)(uVar31 & 0x1f);
    iVar16 = *(int *)((long)param_1 + 0xc) - (int)uVar19;
    uVar17 = uVar28 & 0x1fffff;
    *(int *)((long)param_1 + 0xc) = iVar16;
    if (uVar17 == 0) {
      local_90 = 0;
      iStack_8c = -9999;
    }
    else {
      iVar29 = uVar17 << (ulong)((int)LZCOUNT(uVar17) - 1U & 0x1f);
      iStack_8c = ((uVar28 >> 0x15 & 0x3ff) - (int)LZCOUNT(uVar17)) + -0x313;
      local_90 = -iVar29;
      if (-1 < (int)uVar28) {
        local_90 = iVar29;
      }
    }
    uVar22 = *puVar21;
    uVar28 = *(uint *)(lVar10 + 0x80);
    *(int *)((long)param_1 + 0xc) = iVar16 + -1;
    *param_1 = (long)puVar21 + 4;
    uVar28 = uVar28 & (uint)(uVar22 >> (uVar31 & 0x1f));
    uVar17 = uVar28 & 0x1fffff;
    if (uVar17 == 0) {
      iVar16 = 0;
      local_84 = -9999;
    }
    else {
      iVar29 = uVar17 << (ulong)((int)LZCOUNT(uVar17) - 1U & 0x1f);
      local_84 = ((uVar28 >> 0x15 & 0x3ff) - (int)LZCOUNT(uVar17)) + -0x313;
      iVar16 = -iVar29;
      if (-1 < (int)uVar28) {
        iVar16 = iVar29;
      }
    }
    *(int *)(param_2[2] + 0x40) = iVar16;
    uVar5 = *(undefined4 *)(lVar10 + 0x10);
    bVar6 = *(byte *)(param_1 + 1);
    uVar22 = *(ulong *)*param_1;
    uVar31 = (ulong)bVar6 + 4;
    uVar19 = uVar31 >> 5;
    *(byte *)(param_1 + 1) = (byte)uVar31 & 0x1f;
    *param_1 = *param_1 + uVar19 * 4;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar19;
    iVar16 = -1;
    *(byte *)(param_2[2] + 0x50) = ((byte)uVar5 & (byte)(uVar22 >> ((ulong)bVar6 & 0x3f))) + 1;
    uVar31 = (ulong)*(byte *)(param_1 + 1) + 1 >> 5;
    *(byte *)(param_1 + 1) = (byte)((ulong)*(byte *)(param_1 + 1) + 1) & 0x1f;
    *param_1 = *param_1 + uVar31 * 4;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar31;
    lVar11 = param_2[2];
    uVar28 = (uint)uVar18 & 0xffff;
    *(int *)(lVar11 + 0x40) = *(int *)(lVar11 + 0x40) >> (*(byte *)(lVar11 + 0x50) & 0x1f);
    bVar6 = *(byte *)(param_2[2] + 0x50);
    local_84 = local_84 + (uint)bVar6;
    if ((uVar18 & 0xffff) != 0) {
      uVar17 = uVar28;
      do {
        iVar16 = iVar16 + 1;
        bVar1 = 1 < uVar17;
        uVar17 = uVar17 >> 1;
      } while (bVar1);
    }
    bVar7 = *(byte *)((long)param_2 + 0x1a);
    if (bVar7 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar31 = (ulong)((uint)uVar18 & 0xffff);
    uVar17 = 0;
    uVar14 = (uint)bVar7;
    if (uVar14 != 0) {
      uVar17 = (int)((bVar7 - 1) * iVar16) / (int)uVar14;
    }
    uVar28 = uVar28 >> (ulong)(uVar17 & 0x1f);
    while( true ) {
      uVar17 = uVar28;
      lVar4 = (long)(int)(uVar17 + 1);
      lVar11 = (long)(int)uVar17;
      uVar18 = (ulong)uVar17;
      if (bVar7 < 8) {
        lVar24 = 1;
        lVar23 = 1;
      }
      else {
        lVar24 = 1;
        lVar23 = 1;
        uVar28 = uVar14 & 0xf8;
        do {
          uVar28 = uVar28 - 8;
          lVar23 = lVar23 * lVar11 * lVar11 * lVar11 * lVar11 * lVar11 * lVar11 * lVar11 * lVar11;
          lVar24 = lVar24 * lVar4 * lVar4 * lVar4 * lVar4 * lVar4 * lVar4 * lVar4 * lVar4;
        } while (uVar28 != 0);
      }
      if ((bVar7 & 7) != 0) {
        uVar28 = uVar14 & 7;
        do {
          lVar23 = lVar23 * lVar11;
          uVar28 = uVar28 - 1;
          lVar24 = lVar24 * lVar4;
        } while (uVar28 != 0);
      }
      if (lVar23 <= (long)uVar31 && (long)uVar31 < lVar24) break;
      uVar28 = uVar17 - 1;
      if (lVar23 <= (long)uVar31) {
        uVar28 = uVar17 + 1;
      }
    }
    local_78 = (ushort *)(pcVar27 + -(lVar11 * 2 + 0xfU & 0xfffffffffffffff0));
    if (0 < (int)uVar17) {
      puVar21 = (ulong *)*param_1;
      uVar22 = (ulong)*(byte *)(param_1 + 1);
      iVar16 = *(int *)((long)param_1 + 0xc);
      puVar15 = local_78;
      uVar31 = uVar18;
      do {
        uVar31 = uVar31 - 1;
        uVar25 = *puVar21;
        uVar26 = uVar22 & 0x3f;
        uVar5 = *(undefined4 *)(lVar10 + (ulong)*(byte *)(param_2[2] + 0x50) * 4);
        uVar19 = *(byte *)(param_2[2] + 0x50) + uVar22;
        uVar22 = uVar19 & 0x1f;
        uVar19 = uVar19 >> 5;
        puVar21 = (ulong *)((long)puVar21 + uVar19 * 4);
        iVar16 = iVar16 - (int)uVar19;
        *(char *)(param_1 + 1) = (char)uVar22;
        *(int *)((long)param_1 + 0xc) = iVar16;
        *param_1 = (long)puVar21;
        *puVar15 = (ushort)uVar5 & (ushort)(uVar25 >> uVar26);
        puVar15 = puVar15 + 1;
      } while (uVar31 != 0);
    }
    uVar28 = (uint)bVar7 * (uint)bVar6 + 8 >> 3;
    local_68 = 4;
    local_6c = 1;
    if (1 < (uVar30 & 0xffff)) {
      local_68 = 4;
      if (uVar28 != 3) {
        local_68 = uVar28;
      }
      uVar30 = ((uVar30 & 0xffff) + (uVar30 & 0xffff) * 2) - 6;
      if (uVar30 == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = 0;
        do {
          iVar16 = iVar16 + 1;
          bVar1 = 1 < uVar30;
          uVar30 = uVar30 >> 1;
        } while (bVar1);
      }
      uVar30 = local_68 >> 1;
      if (local_68 < 2) {
        uVar30 = 1;
      }
      if (iVar16 < (int)(local_68 * 4)) {
        local_68 = uVar30;
      }
    }
    uVar13 = 1;
    if (local_68 < uVar28) {
      uVar13 = 2;
    }
    goto LAB__text__00588878;
  }
  if (iVar29 == 0) {
    uVar28 = 1;
  }
  else {
    uVar28 = 0;
    uVar18 = uVar31;
    do {
      uVar28 = uVar28 + 1;
      uVar17 = (uint)uVar18;
      uVar18 = uVar18 >> 1;
    } while (1 < uVar17);
    uVar28 = (uVar28 >> 3) + 1;
  }
  local_68 = 4;
  if (1 < (uVar30 & 0xffff)) {
    local_68 = 4;
    if (uVar28 != 3) {
      local_68 = uVar28;
    }
    uVar28 = (uVar30 & 0xffff) * 3 - 6;
    if (uVar28 == 0) {
      if (0 < (int)(local_68 * 4)) goto LAB__text__00588800;
    }
    else {
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        bVar1 = 1 < uVar28;
        uVar28 = uVar28 >> 1;
      } while (bVar1);
      if (iVar16 < (int)(local_68 * 4)) {
LAB__text__00588800:
        if (local_68 + 1 < 3) {
          local_68 = 1;
        }
        else {
          local_68 = local_68 >> 1;
        }
      }
    }
  }
  uVar28 = 0;
  if (iVar29 != 0) {
    do {
      uVar28 = uVar28 + 1;
      uVar30 = (uint)uVar31;
      uVar31 = uVar31 >> 1;
    } while (1 < uVar30);
    uVar28 = uVar28 >> 3;
  }
  local_6c = 0;
  uVar13 = 1;
  if (local_68 <= uVar28) {
    uVar13 = 2;
  }
  uVar18 = 0;
LAB__text__00588878:
  *(undefined1 *)((long)param_2 + 0x1b) = uVar13;
  uVar12 = FUN__text__005888c0(param_2,pcVar27,uVar18,param_1,&local_90,param_3,param_4);
  return uVar12;
}


