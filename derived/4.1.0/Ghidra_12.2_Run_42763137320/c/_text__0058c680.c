/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058c680; name: FUN_.text__0058c680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0058c680(int *param_1,long param_2,uint param_3,long *param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  bVar6 = *(byte *)(param_4 + 1);
  uVar11 = (ulong)bVar6 + 1;
  uVar15 = *(uint *)*param_4;
  uVar14 = (uint)uVar11 & 0x1f;
  uVar11 = uVar11 >> 5;
  *(char *)(param_4 + 1) = (char)uVar14;
  iVar9 = *(int *)((long)param_4 + 0xc) - (int)uVar11;
  puVar3 = (ulong *)((uint *)*param_4 + uVar11);
  *(int *)((long)param_4 + 0xc) = iVar9;
  *param_4 = (long)puVar3;
  lVar8 = _DAT_008a3f58;
  if ((uVar15 >> (ulong)(bVar6 & 0x1f) & 1) == 0) {
    iVar9 = 1;
  }
  else {
    uVar11 = *puVar3;
    uVar15 = *(uint *)(_DAT_008a3f58 + 0x10);
    *(byte *)(param_4 + 1) = (byte)(uVar14 + 4) & 0x1f;
    uVar7 = uVar14 + 4 >> 5;
    *(uint *)((long)param_4 + 0xc) = iVar9 - uVar7;
    iVar9 = (uVar15 & (uint)(uVar11 >> uVar14)) + 1;
    *param_4 = (long)((long)puVar3 + (ulong)uVar7 * 4);
  }
  *param_1 = iVar9;
  bVar6 = *(byte *)(param_4 + 1);
  uVar11 = (ulong)bVar6 + 1;
  uVar15 = *(uint *)*param_4;
  uVar14 = (uint)uVar11 & 0x1f;
  uVar11 = uVar11 >> 5;
  puVar3 = (ulong *)((uint *)*param_4 + uVar11);
  *(char *)(param_4 + 1) = (char)uVar14;
  *param_4 = (long)puVar3;
  iVar9 = *(int *)((long)param_4 + 0xc) - (int)uVar11;
  *(int *)((long)param_4 + 0xc) = iVar9;
  if ((uVar15 >> (ulong)(bVar6 & 0x1f) & 1) != 0) {
    uVar11 = *puVar3;
    uVar15 = *(uint *)(lVar8 + 0x20);
    uVar7 = uVar14 + 8 >> 5;
    *(byte *)(param_4 + 1) = (byte)(uVar14 + 8) & 0x1f;
    *(uint *)((long)param_4 + 0xc) = iVar9 - uVar7;
    *param_4 = (long)((long)puVar3 + (ulong)uVar7 * 4);
    iVar9 = (uVar15 & (uint)(uVar11 >> uVar14)) + 1;
    param_1[6] = iVar9;
    if (iVar9 * 2 == 0) {
LAB__text__0058c79c:
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      uVar15 = iVar9 * 2 + 3U & 0xfffffffc;
      uVar14 = *(int *)(param_5 + 0x50) + uVar15;
      if (*(uint *)(param_5 + 0x54) < uVar14) goto LAB__text__0058c79c;
      lVar13 = *(long *)(param_5 + 0x48);
      *(uint *)(param_5 + 0x50) = uVar14;
      *(ulong *)(param_5 + 0x48) = lVar13 + (ulong)uVar15;
      iVar9 = param_1[6];
      *(long *)(param_1 + 8) = lVar13;
    }
    if (0 < iVar9) {
      lVar13 = 0;
      do {
        if (param_3 < 2) {
          iVar9 = 0;
        }
        else {
          iVar9 = 0;
          uVar14 = param_3 - 1;
          do {
            iVar9 = iVar9 + 1;
            bVar1 = 1 < uVar14;
            uVar14 = uVar14 >> 1;
          } while (bVar1);
        }
        iVar2 = iVar9 + (uint)*(byte *)(param_4 + 1);
        uVar14 = *(uint *)(lVar8 + (long)iVar9 * 4) &
                 (uint)(*(ulong *)*param_4 >> ((ulong)*(byte *)(param_4 + 1) & 0x3f));
        iVar9 = iVar2 >> 5;
        *(byte *)(param_4 + 1) = (byte)iVar2 & 0x1f;
        *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - iVar9;
        *param_4 = *param_4 + (long)iVar9 * 4;
        *(char *)(*(long *)(param_1 + 8) + lVar13 * 2) = (char)uVar14;
        if (param_3 < 2) {
          iVar9 = 0;
        }
        else {
          iVar9 = 0;
          uVar15 = param_3 - 1;
          do {
            iVar9 = iVar9 + 1;
            bVar1 = 1 < uVar15;
            uVar15 = uVar15 >> 1;
          } while (bVar1);
        }
        bVar6 = *(byte *)(param_4 + 1);
        uVar14 = uVar14 & 0xff;
        iVar2 = iVar9 + (uint)bVar6;
        iVar4 = iVar2 >> 5;
        uVar7 = *(uint *)(lVar8 + (long)iVar9 * 4);
        uVar11 = *(ulong *)*param_4;
        *(byte *)(param_4 + 1) = (byte)iVar2 & 0x1f;
        *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - iVar4;
        *param_4 = *param_4 + (long)iVar4 * 4;
        uVar7 = uVar7 & (uint)(uVar11 >> ((ulong)bVar6 & 0x3f));
        uVar15 = uVar7 & 0xff;
        *(char *)(*(long *)(param_1 + 8) + lVar13 * 2 + 1) = (char)uVar7;
        if (((int)param_3 <= (int)uVar15 || (int)param_3 <= (int)uVar14) || uVar14 == uVar15) {
          return 0xffffffff;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < param_1[6]);
    }
  }
  bVar6 = *(byte *)(param_4 + 1);
  uVar11 = (ulong)bVar6 + 2;
  uVar12 = *(ulong *)*param_4;
  uVar14 = *(uint *)(lVar8 + 8);
  *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
  uVar11 = uVar11 >> 5;
  *param_4 = *param_4 + uVar11 * 4;
  *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar11;
  if (0 < (int)(uVar14 & (uint)(uVar12 >> ((ulong)bVar6 & 0x3f)))) {
    return 0xffffffff;
  }
  iVar9 = *param_1;
  if (1 < iVar9) {
    if (param_3 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      uVar15 = param_3 + 3 & 0xfffffffc;
      uVar14 = *(int *)(param_5 + 0x50) + uVar15;
      if (*(uint *)(param_5 + 0x54) < uVar14) {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        lVar13 = *(long *)(param_5 + 0x48);
        *(uint *)(param_5 + 0x50) = uVar14;
        *(ulong *)(param_5 + 0x48) = lVar13 + (ulong)uVar15;
        *(long *)(param_1 + 2) = lVar13;
      }
      if (0 < (int)param_3) {
        uVar11 = 0;
        do {
          bVar6 = *(byte *)(param_4 + 1);
          uVar5 = *(undefined4 *)(lVar8 + 0x10);
          uVar17 = *(ulong *)*param_4;
          uVar12 = (ulong)bVar6 + 4;
          uVar16 = uVar12 >> 5;
          *(byte *)(param_4 + 1) = (byte)uVar12 & 0x1f;
          *param_4 = *param_4 + uVar16 * 4;
          *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar16;
          *(byte *)(*(long *)(param_1 + 2) + uVar11) =
               (byte)uVar5 & (byte)(uVar17 >> ((ulong)bVar6 & 0x3f));
          iVar9 = *param_1;
          if (iVar9 <= (int)(uint)*(byte *)(*(long *)(param_1 + 2) + uVar11)) {
            return 0xffffffff;
          }
          uVar11 = uVar11 + 1;
        } while (param_3 != uVar11);
        goto LAB__text__0058ca20;
      }
    }
    iVar9 = *param_1;
  }
LAB__text__0058ca20:
  if (iVar9 * 2 != 0) {
    uVar15 = iVar9 * 2 + 3U & 0xfffffffc;
    uVar14 = *(int *)(param_5 + 0x50) + uVar15;
    if (uVar14 <= *(uint *)(param_5 + 0x54)) {
      lVar13 = *(long *)(param_5 + 0x48);
      *(uint *)(param_5 + 0x50) = uVar14;
      *(ulong *)(param_5 + 0x48) = lVar13 + (ulong)uVar15;
      iVar9 = *param_1;
      *(long *)(param_1 + 4) = lVar13;
      goto joined_r0x0058cb7c;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
joined_r0x0058cb7c:
  if (iVar9 < 1) {
    return 0;
  }
  lVar10 = 0;
  lVar13 = 0;
  while( true ) {
    uVar11 = (ulong)*(byte *)(param_4 + 1) + 8;
    uVar14 = (uint)uVar11 & 0x1f;
    puVar3 = (ulong *)(*param_4 + (uVar11 >> 5) * 4);
    iVar9 = *(int *)((long)param_4 + 0xc) - (int)(uVar11 >> 5);
    *(char *)(param_4 + 1) = (char)uVar14;
    uVar14 = uVar14 + 8;
    *(int *)((long)param_4 + 0xc) = iVar9;
    *param_4 = (long)puVar3;
    uVar12 = *puVar3;
    uVar5 = *(undefined4 *)(lVar8 + 0x20);
    uVar15 = uVar14 >> 5;
    *(byte *)(param_4 + 1) = (byte)uVar14 & 0x1f;
    *(uint *)((long)param_4 + 0xc) = iVar9 - uVar15;
    *param_4 = (long)puVar3 + (ulong)uVar15 * 4;
    *(byte *)(*(long *)(param_1 + 4) + lVar10) = (byte)uVar5 & (byte)(uVar12 >> (uVar11 & 0x1f));
    if (*(int *)(param_2 + 0x10) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar10)) {
      return 0xffffffff;
    }
    bVar6 = *(byte *)(param_4 + 1);
    uVar5 = *(undefined4 *)(lVar8 + 0x20);
    uVar12 = *(ulong *)*param_4;
    uVar11 = (ulong)bVar6 + 8;
    uVar17 = uVar11 >> 5;
    *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
    *param_4 = *param_4 + uVar17 * 4;
    *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar17;
    *(byte *)(*(long *)(param_1 + 4) + lVar10 + 1) =
         (byte)uVar5 & (byte)(uVar12 >> ((ulong)bVar6 & 0x3f));
    if (*(int *)(param_2 + 0x14) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar10 + 1))
    break;
    lVar13 = lVar13 + 1;
    lVar10 = lVar10 + 2;
    if (*param_1 <= lVar13) {
      return 0;
    }
  }
  return 0xffffffff;
}


