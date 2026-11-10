/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00114ad0; name: FUN_.text__00114ad0
 */


long FUN__text__00114ad0(long param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  int local_4c;
  ushort local_48;
  int local_44;
  ushort local_40;
  int local_3c;
  int iStack_38;
  int local_34;
  
  local_44 = param_2[2];
  local_4c = *param_2;
  local_3c = param_2[4];
  iStack_38 = param_2[5];
  local_48 = *(ushort *)(param_2 + 1);
  uVar20 = (uint)local_48;
  cVar17 = (char)*(ushort *)(param_2 + 3);
  local_40 = *(ushort *)(param_2 + 3);
  local_34 = param_2[6];
  if (*(char *)((long)param_2 + 0xd) != '\0') {
    bVar9 = local_4c == 0x1ea;
    local_4c = 0;
    cVar17 = '\0';
    local_44 = 2;
    uVar20 = (uint)bVar9;
    local_48 = (ushort)bVar9;
    local_40 = 0x100;
    local_3c = 0;
    iStack_38 = 0;
    local_34 = 0;
  }
  iVar8 = iStack_38;
  piVar11 = *(int **)(param_1 + 0x120);
  uVar12 = (ulong)*(ushort *)((long)piVar11 + (4 - (long)*piVar11));
  puVar1 = (uint *)((long)piVar11 + uVar12);
  uVar14 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar14);
  if (*puVar1 == 0) {
    return 0x71e360;
  }
  lVar19 = 0;
  while( true ) {
    uVar21 = (ulong)*(uint *)((long)puVar1 + lVar19 + 4);
    lVar22 = (long)*(int *)((long)puVar1 + uVar21 + lVar19 + 4);
    lVar18 = (uVar21 - lVar22) + lVar19;
    if (*(ushort *)((long)puVar1 + lVar18 + 4) < 5) {
      iVar23 = 0;
    }
    else {
      uVar24 = (ulong)*(ushort *)((long)puVar1 + lVar18 + 8);
      iVar23 = 0;
      if (uVar24 != 0) {
        iVar23 = *(int *)((long)puVar1 + uVar21 + uVar24 + lVar19 + 4);
      }
    }
    if (iVar23 == local_4c) break;
    lVar19 = lVar19 + 4;
    if ((ulong)*puVar1 * 4 == lVar19) {
      return 0x71e360;
    }
  }
  uVar24 = (ulong)*(ushort *)((long)puVar1 + ((uVar21 + lVar19) - lVar22) + 10);
  lVar22 = lVar19 + uVar21;
  lVar18 = uVar24 + *(uint *)((long)puVar1 + uVar24 + lVar22 + 4);
  uVar5 = *(uint *)((long)puVar1 + lVar18 + lVar22 + 4);
  if (uVar5 != 0) {
    lVar2 = lVar18 + uVar21;
    lVar15 = 0;
    lVar4 = lVar19 + uVar12 + uVar14;
    lVar13 = lVar2;
    do {
      lVar3 = lVar13 + (ulong)*(uint *)((long)puVar1 + lVar19 + lVar15 + lVar2 + 8);
      lVar16 = (long)*(int *)((long)piVar11 + lVar3 + lVar4 + 8);
      lVar6 = (lVar3 - lVar16) + lVar4;
      if (*(ushort *)((long)piVar11 + lVar6 + 8) < 5) {
        uVar25 = 0;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)piVar11 + lVar6 + 0xc);
        uVar25 = 0;
        if (uVar12 != 0) {
          uVar25 = *(uint *)((long)puVar1 + uVar12 + lVar19 + lVar3 + 8);
        }
      }
      if (uVar25 == uVar20) {
        lVar16 = -lVar16;
        piVar11 = (int *)((long)puVar1 + lVar3 + lVar19 + 8);
        goto LAB__text__00114dbc;
      }
      lVar15 = lVar15 + 4;
      lVar13 = lVar13 + 4;
    } while ((ulong)uVar5 * 4 != lVar15);
    local_48 = 0;
    if (uVar5 != 0) {
      lVar15 = 0;
      lVar13 = lVar2;
      do {
        lVar4 = lVar13 + (ulong)*(uint *)((long)puVar1 + lVar19 + lVar15 + lVar2 + 8);
        lVar16 = (long)*(int *)((long)puVar1 + lVar4 + lVar19 + 8);
        lVar3 = (lVar4 - lVar16) + lVar19;
        if (((*(ushort *)((long)puVar1 + lVar3 + 8) < 5) ||
            (uVar12 = (ulong)*(ushort *)((long)puVar1 + lVar3 + 0xc), uVar12 == 0)) ||
           (*(int *)((long)puVar1 + uVar12 + lVar19 + lVar4 + 8) == 0)) {
          lVar16 = -lVar16;
          piVar11 = (int *)((long)puVar1 + lVar4 + lVar19 + 8);
          goto LAB__text__00114dbc;
        }
        lVar15 = lVar15 + 4;
        lVar13 = lVar13 + 4;
      } while ((ulong)uVar5 * 4 != lVar15);
    }
  }
  lVar18 = lVar18 + (ulong)*(uint *)((long)puVar1 + lVar18 + lVar22 + 8);
  lVar15 = lVar18 + uVar21;
  piVar11 = (int *)((long)puVar1 + lVar15 + lVar19 + 8);
  lVar16 = -(long)*piVar11;
  lVar22 = (lVar18 - *piVar11) + lVar22;
  if ((*(ushort *)((long)puVar1 + lVar22 + 8) < 5) ||
     (uVar12 = (ulong)*(ushort *)((long)puVar1 + lVar22 + 0xc), uVar12 == 0)) {
    local_48 = 0;
  }
  else {
    local_48 = (ushort)*(undefined4 *)((long)puVar1 + uVar12 + lVar19 + lVar15 + 8);
  }
LAB__text__00114dbc:
  uVar12 = (ulong)*(ushort *)((long)piVar11 + lVar16 + 6);
  uVar14 = (ulong)*(uint *)((long)piVar11 + uVar12);
  puVar1 = (uint *)((long)((long)piVar11 + uVar12) + uVar14);
  if (*puVar1 != 0) {
    lVar19 = (ulong)*puVar1 * 4;
    if (cVar17 == '\0') {
      lVar18 = 0;
      do {
        uVar21 = (ulong)*(uint *)((long)puVar1 + lVar18 + 4);
        lVar22 = lVar18 + uVar12 + uVar14;
        lVar15 = (uVar21 - (long)*(int *)((long)puVar1 + uVar21 + lVar18 + 4)) + lVar22;
        if (((*(ushort *)((long)piVar11 + lVar15 + 4) < 5) ||
            (uVar24 = (ulong)*(ushort *)((long)piVar11 + lVar15 + 8), uVar24 == 0)) ||
           (*(char *)((long)piVar11 + uVar21 + uVar24 + lVar22 + 4) == '\0'))
        goto LAB__text__00114e40;
        lVar18 = lVar18 + 4;
      } while (lVar19 != lVar18);
    }
    else {
      lVar18 = 0;
      do {
        uVar21 = (ulong)*(uint *)((long)puVar1 + lVar18 + 4);
        lVar22 = lVar18 + uVar12 + uVar14;
        lVar15 = (uVar21 - (long)*(int *)((long)puVar1 + uVar21 + lVar18 + 4)) + lVar22;
        if (((4 < *(ushort *)((long)piVar11 + lVar15 + 4)) &&
            (uVar24 = (ulong)*(ushort *)((long)piVar11 + lVar15 + 8), uVar24 != 0)) &&
           (*(char *)((long)piVar11 + uVar21 + uVar24 + lVar22 + 4) == '\x01'))
        goto LAB__text__00114e40;
        lVar18 = lVar18 + 4;
      } while (lVar19 != lVar18);
    }
  }
  uVar7 = local_40 >> 8;
  local_40 = local_40 & 0xff00;
  uVar12 = (ulong)*(ushort *)((long)piVar11 + (6 - (long)*piVar11));
  puVar1 = (uint *)((long)piVar11 + uVar12);
  uVar14 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar14);
  if (*puVar1 != 0) {
    lVar19 = 0;
    do {
      uVar21 = (ulong)*(uint *)((long)puVar1 + lVar19 + 4);
      lVar18 = lVar19 + uVar12 + uVar14;
      lVar22 = (uVar21 - (long)*(int *)((long)puVar1 + uVar21 + lVar19 + 4)) + lVar18;
      if (((*(ushort *)((long)piVar11 + lVar22 + 4) < 5) ||
          (uVar24 = (ulong)*(ushort *)((long)piVar11 + lVar22 + 8), uVar24 == 0)) ||
         (*(char *)((long)piVar11 + uVar21 + uVar24 + lVar18 + 4) == '\0')) {
        lVar19 = (long)puVar1 + lVar19 + uVar21;
        goto LAB__text__00114f70;
      }
      lVar19 = lVar19 + 4;
    } while ((ulong)*puVar1 * 4 != lVar19);
  }
  piVar11 = (int *)((long)(puVar1 + 1) + (ulong)puVar1[1]);
  if (((4 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
      (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 != 0)) &&
     (*(char *)((long)piVar11 + uVar12) == '\x01')) {
    local_40 = CONCAT11((char)uVar7,1);
  }
LAB__text__00114f74:
  uVar12 = (ulong)*(ushort *)((long)piVar11 + (6 - (long)*piVar11));
  puVar1 = (uint *)((long)piVar11 + uVar12);
  uVar14 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar14);
  if (*puVar1 != 0) {
    lVar18 = uVar12 + uVar14;
    lVar19 = 0;
    lVar22 = (ulong)*puVar1 * 4;
    do {
      uVar12 = (ulong)*(uint *)((long)puVar1 + lVar19 + 4);
      lVar15 = lVar19 + lVar18;
      lVar13 = (uVar12 - (long)*(int *)((long)puVar1 + uVar12 + lVar19 + 4)) + lVar15;
      if ((*(ushort *)((long)piVar11 + lVar13 + 4) < 5) ||
         (uVar14 = (ulong)*(ushort *)((long)piVar11 + lVar13 + 8), uVar14 == 0)) {
        if ((param_3 & 1) == 0) goto LAB__text__0011500c;
      }
      else if ((int)*(char *)((long)piVar11 + uVar12 + uVar14 + lVar15 + 4) == (param_3 & 1)) {
LAB__text__0011500c:
        piVar11 = (int *)((long)puVar1 + lVar19 + uVar12 + 4);
        piVar10 = (int *)FUN__text__00115190(piVar11,&local_4c);
        goto joined_r0x001150b0;
      }
      lVar19 = lVar19 + 4;
    } while (lVar22 != lVar19);
    lVar19 = 0;
    do {
      uVar12 = (ulong)*(uint *)((long)puVar1 + lVar19 + 4);
      lVar15 = lVar19 + lVar18;
      lVar13 = (uVar12 - (long)*(int *)((long)puVar1 + uVar12 + lVar19 + 4)) + lVar15;
      if (((*(ushort *)((long)piVar11 + lVar13 + 4) < 5) ||
          (uVar14 = (ulong)*(ushort *)((long)piVar11 + lVar13 + 8), uVar14 == 0)) ||
         (*(char *)((long)piVar11 + uVar12 + uVar14 + lVar15 + 4) == '\0')) {
        piVar11 = (int *)((long)puVar1 + lVar19 + uVar12 + 4);
        piVar10 = (int *)FUN__text__00115190(piVar11,&local_4c);
        goto joined_r0x001150b0;
      }
      lVar19 = lVar19 + 4;
    } while (lVar22 != lVar19);
  }
  piVar11 = (int *)((long)(puVar1 + 1) + (ulong)puVar1[1]);
  piVar10 = (int *)FUN__text__00115190(piVar11,&local_4c);
joined_r0x001150b0:
  if (piVar10 == (int *)0x0) {
    iStack_38 = 0;
    piVar10 = (int *)FUN__text__00115190(piVar11,&local_4c);
    if (piVar10 == (int *)0x0) {
      local_34 = 0;
      iStack_38 = iVar8;
      piVar10 = (int *)FUN__text__00115190(piVar11,&local_4c);
      if (piVar10 == (int *)0x0) {
        iStack_38 = 0;
        local_34 = 0;
        piVar10 = (int *)FUN__text__00115190(piVar11,&local_4c);
        if (piVar10 == (int *)0x0) {
          if (*(ushort *)((long)piVar11 - (long)*piVar11) < 7) {
            lVar19 = 0;
          }
          else {
            uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3];
            lVar19 = 0;
            if (uVar12 != 0) {
              puVar1 = (uint *)((long)piVar11 + uVar12);
              lVar19 = (long)puVar1 + (ulong)*puVar1;
            }
          }
          piVar10 = (int *)(lVar19 + 4 + (ulong)*(uint *)(lVar19 + 4));
        }
      }
    }
  }
  if (*(ushort *)((long)piVar10 - (long)*piVar10) < 7) {
    return 4;
  }
  uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3];
  lVar19 = 0;
  if (uVar12 != 0) {
    puVar1 = (uint *)((long)piVar10 + uVar12);
    lVar19 = (long)puVar1 + (ulong)*puVar1;
  }
  return lVar19 + 4;
LAB__text__00114e40:
  lVar19 = (long)puVar1 + lVar18 + uVar21;
LAB__text__00114f70:
  piVar11 = (int *)(lVar19 + 4);
  goto LAB__text__00114f74;
}


