/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00443a90; name: FUN_.text__00443a90
 */


/* WARNING: Removing unreachable block (ram,0x00443d5c) */

byte * FUN__text__00443a90(long param_1,uint *param_2,long *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar9 = *param_2;
  if ((((uVar9 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x20) != 0;
    }
    pbVar6 = (byte *)0x0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      pbVar6 = (byte *)(param_1 + 8);
    }
    return pbVar6;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
    *param_3 = param_1 + 8;
    uVar9 = *param_2;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    lVar7 = *(long *)(param_1 + 0x18);
    iVar11 = 0;
    do {
      iVar1 = iVar11 + (uVar10 >> 1);
      uVar4 = *(uint *)(lVar7 + (long)iVar1 * 0x28);
      if (uVar4 == uVar9) {
        bVar8 = (byte)param_2[2];
        if (((bVar8 == 0xff) && ((char)param_2[4] == -1)) && (*(long *)(param_2 + 6) == 0)) {
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = *(int *)(lVar7 + (long)iVar1 * 0x28 + 0x20) != 0;
          }
          lVar7 = lVar7 + (long)iVar1 * 0x28;
          pbVar6 = (byte *)0x0;
          if (*(char *)(lVar7 + 0x10) != '\0') {
            pbVar6 = (byte *)(lVar7 + 8);
          }
          return pbVar6;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar7 + (long)iVar1 * 0x28 + 0x10) != '\0')) {
          *param_3 = lVar7 + (long)iVar1 * 0x28 + 8;
          bVar8 = (byte)param_2[2];
        }
        uVar9 = *(uint *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
        if (uVar9 == 0) {
          return (byte *)0x0;
        }
        iVar11 = 0;
        do {
          iVar2 = iVar11 + (uVar9 >> 1);
          pbVar6 = (byte *)(*(long *)(lVar7 + (long)iVar1 * 0x28 + 0x18) + (long)iVar2 * 0x28);
          bVar5 = *pbVar6;
          if (bVar5 == bVar8) {
            bVar8 = (byte)param_2[4];
            if (bVar8 == 0xff && *(long *)(param_2 + 6) == 0) {
              if (param_4 != (undefined1 *)0x0) {
                *param_4 = *(int *)(pbVar6 + 0x20) != 0;
              }
              pbVar3 = (byte *)0x0;
              if (pbVar6[0x10] != 0) {
                pbVar3 = pbVar6 + 8;
              }
              return pbVar3;
            }
            if ((param_3 != (long *)0x0) && (pbVar6[0x10] != 0)) {
              *param_3 = (long)(pbVar6 + 8);
              bVar8 = (byte)param_2[4];
            }
            uVar9 = *(uint *)(pbVar6 + 0x20);
            if (uVar9 != 0) {
              lVar7 = *(long *)(pbVar6 + 0x18);
              iVar11 = 0;
              do {
                iVar1 = iVar11 + (uVar9 >> 1);
                bVar5 = *(byte *)(lVar7 + (long)iVar1 * 0x28);
                if (bVar5 == bVar8) {
                  if (*(long *)(param_2 + 6) == 0) {
                    if (param_4 != (undefined1 *)0x0) {
                      *param_4 = *(int *)(lVar7 + (long)iVar1 * 0x28 + 0x20) != 0;
                    }
                    lVar7 = lVar7 + (long)iVar1 * 0x28;
                    pbVar6 = (byte *)0x0;
                    if (*(char *)(lVar7 + 0x10) != '\0') {
                      pbVar6 = (byte *)(lVar7 + 8);
                    }
                    return pbVar6;
                  }
                  if ((param_3 != (long *)0x0) &&
                     (*(char *)(lVar7 + (long)iVar1 * 0x28 + 0x10) != '\0')) {
                    *param_3 = lVar7 + (long)iVar1 * 0x28 + 8;
                  }
                  if (param_4 != (undefined1 *)0x0) {
                    *param_4 = 0;
                  }
                  uVar9 = *(uint *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
                  if (uVar9 != 0) {
                    uVar12 = *(ulong *)(param_2 + 6);
                    iVar11 = 0;
                    lVar7 = *(long *)(lVar7 + (long)iVar1 * 0x28 + 0x18);
                    do {
                      uVar10 = iVar11 + (uVar9 >> 1);
                      uVar13 = *(ulong *)(lVar7 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 |
                                                  (ulong)uVar10 << 4));
                      if (uVar13 == uVar12) {
                        lVar7 = lVar7 + (long)(int)uVar10 * 0x10;
                        pbVar6 = (byte *)0x0;
                        if (lVar7 != 0) {
                          pbVar6 = (byte *)(lVar7 + 8);
                        }
                        return pbVar6;
                      }
                      if (uVar13 < uVar12) {
                        iVar11 = uVar10 + 1;
                      }
                      uVar10 = uVar9 - (uVar13 < uVar12);
                      uVar9 = uVar10 >> 1;
                    } while (1 < uVar10);
                  }
                  return (byte *)0x0;
                }
                if (bVar5 < bVar8) {
                  iVar11 = iVar1 + 1;
                }
                uVar10 = uVar9 - (bVar5 < bVar8);
                uVar9 = uVar10 >> 1;
              } while (1 < uVar10);
            }
            return (byte *)0x0;
          }
          if (bVar5 < bVar8) {
            iVar11 = iVar2 + 1;
          }
          uVar10 = uVar9 - (bVar5 < bVar8);
          uVar9 = uVar10 >> 1;
        } while (1 < uVar10);
        return (byte *)0x0;
      }
      if (uVar4 < uVar9) {
        iVar11 = iVar1 + 1;
      }
      uVar4 = uVar10 - (uVar4 < uVar9);
      uVar10 = uVar4 >> 1;
    } while (1 < uVar4);
  }
  return (byte *)0x0;
}


