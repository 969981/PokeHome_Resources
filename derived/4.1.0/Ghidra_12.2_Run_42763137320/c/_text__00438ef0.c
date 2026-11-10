/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438ef0; name: FUN_.text__00438ef0
 */


/* WARNING: Removing unreachable block (ram,0x0043935c) */

uint * FUN__text__00438ef0(long param_1,ulong *param_2,long *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  
  uVar8 = *param_2;
  if ((((uVar8 == 0 && (int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1))
     && (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x10) != 0;
    }
    puVar6 = (uint *)0x0;
    if (*(char *)(param_1 + 4) != '\0') {
      puVar6 = (uint *)(param_1 + 2);
    }
    return puVar6;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
    *param_3 = param_1 + 2;
    uVar8 = *param_2;
  }
  uVar13 = *(uint *)(param_1 + 0x10);
  if (uVar13 == 0) {
    return (uint *)0x0;
  }
  lVar10 = *(long *)(param_1 + 8);
  iVar14 = 0;
  while( true ) {
    uVar9 = iVar14 + (uVar13 >> 1);
    lVar12 = (long)(int)uVar9;
    uVar15 = *(ulong *)(lVar10 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5))
    ;
    if (uVar15 == uVar8) break;
    if (uVar15 < uVar8) {
      iVar14 = uVar9 + 1;
    }
    uVar9 = uVar13 - (uVar15 < uVar8);
    uVar13 = uVar9 >> 1;
    if (uVar9 < 2) {
      return (uint *)0x0;
    }
  }
  uVar13 = (uint)param_2[1];
  if ((((uVar13 == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
     (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(lVar10 + lVar12 * 0x20 + 0x18) != 0;
    }
    lVar10 = lVar10 + lVar12 * 0x20;
    puVar6 = (uint *)0x0;
    if (*(char *)(lVar10 + 10) != '\0') {
      puVar6 = (uint *)(lVar10 + 8);
    }
    return puVar6;
  }
  lVar10 = lVar10 + lVar12 * 0x20;
  if ((param_3 != (long *)0x0) && (*(char *)(lVar10 + 10) != '\0')) {
    *param_3 = lVar10 + 8;
    uVar13 = (uint)param_2[1];
  }
  uVar9 = *(uint *)(lVar10 + 0x18);
  if (uVar9 == 0) {
    return (uint *)0x0;
  }
  iVar14 = 0;
  while( true ) {
    iVar1 = iVar14 + (uVar9 >> 1);
    puVar6 = (uint *)(*(long *)(lVar10 + 0x10) + (long)iVar1 * 0x18);
    uVar4 = *puVar6;
    if (uVar4 == uVar13) break;
    if (uVar4 < uVar13) {
      iVar14 = iVar1 + 1;
    }
    uVar4 = uVar9 - (uVar4 < uVar13);
    uVar9 = uVar4 >> 1;
    if (uVar4 < 2) {
      return (uint *)0x0;
    }
  }
  uVar13 = (uint)param_2[2];
  if ((((uVar13 == 0) && ((char)param_2[3] == -1)) && ((char)param_2[4] == -1)) && (param_2[5] == 0)
     ) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = puVar6[4] != 0;
    }
    puVar3 = (uint *)0x0;
    if (*(char *)((long)puVar6 + 6) != '\0') {
      puVar3 = puVar6 + 1;
    }
    return puVar3;
  }
  if ((param_3 != (long *)0x0) && (*(char *)((long)puVar6 + 6) != '\0')) {
    *param_3 = (long)(puVar6 + 1);
    uVar13 = (uint)param_2[2];
  }
  uVar9 = puVar6[4];
  if (uVar9 == 0) {
    return (uint *)0x0;
  }
  lVar10 = *(long *)(puVar6 + 2);
  iVar14 = 0;
  while( true ) {
    iVar1 = iVar14 + (uVar9 >> 1);
    uVar4 = *(uint *)(lVar10 + (long)iVar1 * 0x18);
    if (uVar4 == uVar13) break;
    if (uVar4 < uVar13) {
      iVar14 = iVar1 + 1;
    }
    uVar4 = uVar9 - (uVar4 < uVar13);
    uVar9 = uVar4 >> 1;
    if (uVar4 < 2) {
      return (uint *)0x0;
    }
  }
  bVar11 = (byte)param_2[3];
  if (((bVar11 == 0xff) && ((char)param_2[4] == -1)) && (param_2[5] == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(lVar10 + (long)iVar1 * 0x18 + 0x10) != 0;
    }
    lVar10 = lVar10 + (long)iVar1 * 0x18;
    puVar6 = (uint *)0x0;
    if (*(char *)(lVar10 + 6) != '\0') {
      puVar6 = (uint *)(lVar10 + 4);
    }
    return puVar6;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(lVar10 + (long)iVar1 * 0x18 + 6) != '\0')) {
    *param_3 = lVar10 + (long)iVar1 * 0x18 + 4;
    bVar11 = (byte)param_2[3];
  }
  uVar13 = *(uint *)(lVar10 + (long)iVar1 * 0x18 + 0x10);
  if (uVar13 == 0) {
    return (uint *)0x0;
  }
  iVar14 = 0;
  do {
    iVar2 = iVar14 + (uVar13 >> 1);
    pbVar7 = (byte *)(*(long *)(lVar10 + (long)iVar1 * 0x18 + 8) + (long)iVar2 * 0x18);
    bVar5 = *pbVar7;
    if (bVar5 == bVar11) {
      bVar11 = (byte)param_2[4];
      if (bVar11 == 0xff && param_2[5] == 0) {
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = *(int *)(pbVar7 + 0x10) != 0;
        }
        puVar6 = (uint *)0x0;
        if (pbVar7[4] != 0) {
          puVar6 = (uint *)(pbVar7 + 2);
        }
        return puVar6;
      }
      if ((param_3 != (long *)0x0) && (pbVar7[4] != 0)) {
        *param_3 = (long)(pbVar7 + 2);
        bVar11 = (byte)param_2[4];
      }
      uVar13 = *(uint *)(pbVar7 + 0x10);
      if (uVar13 != 0) {
        lVar10 = *(long *)(pbVar7 + 8);
        iVar14 = 0;
        do {
          iVar1 = iVar14 + (uVar13 >> 1);
          bVar5 = *(byte *)(lVar10 + (long)iVar1 * 0x18);
          if (bVar5 == bVar11) {
            if (param_2[5] == 0) {
              if (param_4 != (undefined1 *)0x0) {
                *param_4 = *(int *)(lVar10 + (long)iVar1 * 0x18 + 0x10) != 0;
              }
              lVar10 = lVar10 + (long)iVar1 * 0x18;
              puVar6 = (uint *)0x0;
              if (*(char *)(lVar10 + 4) != '\0') {
                puVar6 = (uint *)(lVar10 + 2);
              }
              return puVar6;
            }
            if ((param_3 != (long *)0x0) && (*(char *)(lVar10 + (long)iVar1 * 0x18 + 4) != '\0')) {
              *param_3 = lVar10 + (long)iVar1 * 0x18 + 2;
            }
            if (param_4 != (undefined1 *)0x0) {
              *param_4 = 0;
            }
            uVar13 = *(uint *)(lVar10 + (long)iVar1 * 0x18 + 0x10);
            if (uVar13 != 0) {
              uVar8 = param_2[5];
              iVar14 = 0;
              lVar10 = *(long *)(lVar10 + (long)iVar1 * 0x18 + 8);
              do {
                uVar9 = iVar14 + (uVar13 >> 1);
                uVar15 = *(ulong *)(lVar10 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 |
                                             (ulong)uVar9 << 4));
                if (uVar15 == uVar8) {
                  lVar10 = lVar10 + (long)(int)uVar9 * 0x10;
                  puVar6 = (uint *)0x0;
                  if (lVar10 != 0) {
                    puVar6 = (uint *)(lVar10 + 8);
                  }
                  return puVar6;
                }
                if (uVar15 < uVar8) {
                  iVar14 = uVar9 + 1;
                }
                uVar9 = uVar13 - (uVar15 < uVar8);
                uVar13 = uVar9 >> 1;
              } while (1 < uVar9);
            }
            return (uint *)0x0;
          }
          if (bVar5 < bVar11) {
            iVar14 = iVar1 + 1;
          }
          uVar9 = uVar13 - (bVar5 < bVar11);
          uVar13 = uVar9 >> 1;
        } while (1 < uVar9);
      }
      return (uint *)0x0;
    }
    if (bVar5 < bVar11) {
      iVar14 = iVar2 + 1;
    }
    uVar9 = uVar13 - (bVar5 < bVar11);
    uVar13 = uVar9 >> 1;
  } while (1 < uVar9);
  return (uint *)0x0;
}


