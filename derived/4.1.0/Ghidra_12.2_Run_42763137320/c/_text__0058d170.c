/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058d170; name: FUN_.text__0058d170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0058d170(uint *param_1,long param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar8 = _DAT_008a3f58;
  param_1[5] = 0;
  bVar15 = *(byte *)(param_3 + 1);
  uVar12 = *(ulong *)*param_3;
  uVar4 = *(uint *)(_DAT_008a3f58 + 8);
  uVar14 = (ulong)bVar15 + 2;
  uVar13 = uVar14 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *param_1 = uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f));
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(lVar8 + 0x60);
  uVar12 = *(ulong *)*param_3;
  uVar14 = (ulong)bVar15 + 0x18;
  uVar13 = uVar14 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[6] = uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f));
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(lVar8 + 0x60);
  uVar12 = *(ulong *)*param_3;
  uVar14 = (ulong)bVar15 + 0x18;
  uVar13 = uVar14 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[7] = uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f));
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(lVar8 + 0x60);
  uVar12 = *(ulong *)*param_3;
  uVar14 = (ulong)bVar15 + 0x18;
  uVar13 = uVar14 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[8] = (uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f))) + 1;
  bVar15 = *(byte *)(param_3 + 1);
  uVar5 = *(undefined4 *)(lVar8 + 0x18);
  uVar12 = *(ulong *)*param_3;
  uVar14 = (ulong)bVar15 + 6;
  uVar13 = uVar14 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *(byte *)(param_1 + 9) = ((byte)uVar5 & (byte)(uVar12 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar4 = *(uint *)(lVar8 + 0x20) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar14 = (ulong)*(byte *)(param_3 + 1) + 8;
  uVar12 = uVar14 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(char *)((long)param_1 + 0x25) = (char)uVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
    return 1;
  }
  bVar15 = (byte)param_1[9];
  if (bVar15 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
LAB__text__0058d390:
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar3 = bVar15 + 3 & 0x1fc;
    uVar4 = *(int *)(param_4 + 0x50) + uVar3;
    if (*(uint *)(param_4 + 0x54) < uVar4) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      lVar9 = *(long *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar4;
      *(ulong *)(param_4 + 0x48) = lVar9 + (ulong)uVar3;
      *(long *)(param_1 + 2) = lVar9;
      bVar15 = (byte)param_1[9];
      if (bVar15 == 0) goto LAB__text__0058d390;
    }
    puVar10 = param_1 + 2;
    uVar4 = *(int *)(param_4 + 0x50) + (uint)bVar15 * 8;
    if (*(uint *)(param_4 + 0x54) < uVar4) {
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else {
      lVar9 = *(long *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar4;
      *(ulong *)(param_4 + 0x48) = lVar9 + (ulong)((uint)bVar15 * 8);
      *(long *)(param_1 + 4) = lVar9;
      if ((char)param_1[9] == '\0') goto LAB__text__0058d8e8;
    }
    puVar11 = param_1 + 4;
    uVar14 = 0;
    do {
      uVar12 = (ulong)*(byte *)(param_3 + 1) + 3;
      uVar13 = uVar12 >> 5;
      puVar2 = (uint *)(*param_3 + uVar13 * 4);
      bVar15 = (byte)*(undefined4 *)(lVar8 + 0xc) &
               (byte)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
      uVar16 = (uint)uVar12;
      uVar4 = uVar16 & 0x1f;
      iVar7 = *(int *)((long)param_3 + 0xc) - (int)uVar13;
      *(char *)(param_3 + 1) = (char)uVar4;
      *(int *)((long)param_3 + 0xc) = iVar7;
      uVar4 = uVar4 + 1;
      *param_3 = (long)puVar2;
      uVar6 = uVar4 >> 5;
      uVar4 = uVar4 & 0x1f;
      uVar3 = *puVar2;
      iVar7 = iVar7 - uVar6;
      puVar1 = (ulong *)(puVar2 + uVar6);
      *(char *)(param_3 + 1) = (char)uVar4;
      *(int *)((long)param_3 + 0xc) = iVar7;
      *param_3 = (long)puVar1;
      if ((uVar3 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
        uVar3 = uVar4 + 5 >> 5;
        bVar15 = bVar15 | (byte)((*(uint *)(lVar8 + 0x14) & (uint)(*puVar1 >> uVar4)) << 3);
        *(byte *)(param_3 + 1) = (byte)(uVar4 + 5) & 0x1f;
        *(uint *)((long)param_3 + 0xc) = iVar7 - uVar3;
        *param_3 = (long)((long)puVar1 + (ulong)uVar3 * 4);
      }
      *(byte *)(*(long *)(param_1 + 2) + uVar14) = bVar15;
      uVar14 = uVar14 + 1;
    } while (uVar14 < (byte)param_1[9]);
    if ((byte)param_1[9] != 0) {
      uVar14 = 0;
      lVar9 = 3;
      do {
        if ((*(byte *)(*(long *)puVar10 + uVar14) & 1) == 0) {
          *(undefined1 *)(*(long *)puVar11 + lVar9 + -3) = 0xff;
          bVar15 = *(byte *)(*(long *)puVar10 + uVar14);
joined_r0x0058d584:
          if ((bVar15 >> 1 & 1) == 0) goto LAB__text__0058d568;
LAB__text__0058d590:
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 2) {
            *(undefined1 *)((long)param_1 + 0x26) = 2;
          }
        }
        else {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -3) = (char)uVar4;
          if (*(char *)((long)param_1 + 0x26) == '\0') {
            *(undefined1 *)((long)param_1 + 0x26) = 1;
            bVar15 = *(byte *)(*(long *)puVar10 + uVar14);
            goto joined_r0x0058d584;
          }
          if ((*(byte *)(*(long *)puVar10 + uVar14) >> 1 & 1) != 0) goto LAB__text__0058d590;
LAB__text__0058d568:
          *(undefined1 *)(*(long *)puVar11 + lVar9 + -2) = 0xff;
        }
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 2 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar11 + lVar9 + -1) = 0xff;
        }
        else {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 3) {
            *(undefined1 *)((long)param_1 + 0x26) = 3;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 3 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar11 + lVar9) = 0xff;
        }
        else {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 4) {
            *(undefined1 *)((long)param_1 + 0x26) = 4;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 4 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 1) = 0xff;
        }
        else {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 5) {
            *(undefined1 *)((long)param_1 + 0x26) = 5;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 5 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 2) = 0xff;
        }
        else {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 6) {
            *(undefined1 *)((long)param_1 + 0x26) = 6;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 6 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 3) = 0xff;
        }
        else {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 3) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 7) {
            *(undefined1 *)((long)param_1 + 0x26) = 7;
          }
        }
        if (*(char *)(*(long *)puVar10 + uVar14) < '\0') {
          uVar4 = *(uint *)(lVar8 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 4) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 8) {
            *(undefined1 *)((long)param_1 + 0x26) = 8;
          }
        }
        else {
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 4) = 0xff;
        }
        uVar14 = uVar14 + 1;
        lVar9 = lVar9 + 8;
      } while (uVar14 < (byte)param_1[9]);
    }
  }
LAB__text__0058d8e8:
  if (*(int *)((long)param_3 + 0xc) < 0) {
    return 1;
  }
  return 0;
}


