/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004437a0; name: FUN_.text__004437a0
 */


void FUN__text__004437a0(long param_1,byte *param_2,long *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  bVar4 = *param_2;
  if (((bVar4 == 0xff && *(long *)(param_2 + 8) == 0) && *(char *)(param_1 + 0x10) != '\0') &&
      *param_3 != 0) {
    FUN__text__004449ec(*(undefined8 *)(param_1 + 8));
    bVar4 = *param_2;
  }
  if (bVar4 == 0xff) {
    uVar7 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar7) {
      uVar11 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0x18);
        pbVar5 = (byte *)(lVar12 + uVar11 * 0x28);
        *param_4 = *pbVar5;
        if (pbVar5[0x10] != 0 && *param_3 != 0) {
          FUN__text__004449ec(*(undefined8 *)(lVar12 + uVar11 * 0x28 + 8));
        }
        uVar6 = *(ulong *)(param_2 + 8);
        if (uVar6 == 0) {
          lVar12 = lVar12 + uVar11 * 0x28;
          puVar13 = (uint *)(lVar12 + 0x20);
          if (*puVar13 != 0) {
            plVar14 = (long *)(lVar12 + 0x18);
            puVar15 = (undefined8 *)*plVar14;
            do {
              *(undefined8 *)(param_4 + 8) = *puVar15;
              if (*param_3 != 0) {
                FUN__text__004449ec(puVar15[1]);
              }
              puVar15 = puVar15 + 2;
            } while (puVar15 != (undefined8 *)(*plVar14 + (ulong)*puVar13 * 0x10));
          }
        }
        else {
          uVar8 = *(uint *)(lVar12 + uVar11 * 0x28 + 0x20);
          if (uVar8 != 0) {
            iVar9 = 0;
            lVar12 = *(long *)(lVar12 + uVar11 * 0x28 + 0x18);
            do {
              uVar1 = iVar9 + (uVar8 >> 1);
              uVar10 = *(ulong *)(lVar12 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                           (ulong)uVar1 << 4));
              if (uVar10 == uVar6) {
                *(ulong *)(param_4 + 8) = uVar6;
                if (*param_3 != 0) {
                  FUN__text__004449ec(*(undefined8 *)(lVar12 + (long)(int)uVar1 * 0x10 + 8));
                }
                break;
              }
              if (uVar10 < uVar6) {
                iVar9 = uVar1 + 1;
              }
              uVar1 = uVar8 - (uVar10 < uVar6);
              uVar8 = uVar1 >> 1;
            } while (1 < uVar1);
          }
        }
        uVar11 = uVar11 + 1;
        param_4[8] = 0;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      } while (uVar11 != uVar7);
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x20);
    if (uVar7 != 0) {
      lVar12 = *(long *)(param_1 + 0x18);
      iVar9 = 0;
      do {
        iVar2 = iVar9 + (uVar7 >> 1);
        bVar3 = *(byte *)(lVar12 + (long)iVar2 * 0x28);
        if (bVar3 == bVar4) {
          *param_4 = bVar4;
          if (*(char *)(lVar12 + (long)iVar2 * 0x28 + 0x10) != '\0' && *param_3 != 0) {
            FUN__text__004449ec(*(undefined8 *)(lVar12 + (long)iVar2 * 0x28 + 8));
          }
          uVar11 = *(ulong *)(param_2 + 8);
          if (uVar11 == 0) {
            lVar12 = lVar12 + (long)iVar2 * 0x28;
            puVar13 = (uint *)(lVar12 + 0x20);
            if (*puVar13 != 0) {
              plVar14 = (long *)(lVar12 + 0x18);
              puVar15 = (undefined8 *)*plVar14;
              do {
                *(undefined8 *)(param_4 + 8) = *puVar15;
                if (*param_3 != 0) {
                  FUN__text__004449ec(puVar15[1]);
                }
                puVar15 = puVar15 + 2;
              } while (puVar15 != (undefined8 *)(*plVar14 + (ulong)*puVar13 * 0x10));
            }
            goto LAB__text__00443a5c;
          }
          uVar7 = *(uint *)(lVar12 + (long)iVar2 * 0x28 + 0x20);
          if (uVar7 == 0) goto LAB__text__00443a5c;
          iVar9 = 0;
          lVar12 = *(long *)(lVar12 + (long)iVar2 * 0x28 + 0x18);
          goto LAB__text__004439c0;
        }
        if (bVar3 < bVar4) {
          iVar9 = iVar2 + 1;
        }
        uVar8 = uVar7 - (bVar3 < bVar4);
        uVar7 = uVar8 >> 1;
      } while (1 < uVar8);
    }
  }
  goto LAB__text__00443a60;
  while( true ) {
    if (uVar6 < uVar11) {
      iVar9 = uVar8 + 1;
    }
    uVar8 = uVar7 - (uVar6 < uVar11);
    uVar7 = uVar8 >> 1;
    if (uVar8 < 2) break;
LAB__text__004439c0:
    uVar8 = iVar9 + (uVar7 >> 1);
    uVar6 = *(ulong *)(lVar12 + (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4));
    if (uVar6 == uVar11) {
      *(ulong *)(param_4 + 8) = uVar11;
      if (*param_3 != 0) {
        FUN__text__004449ec(*(undefined8 *)(lVar12 + (long)(int)uVar8 * 0x10 + 8));
      }
      break;
    }
  }
LAB__text__00443a5c:
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0xf] = 0;
LAB__text__00443a60:
  *param_4 = 0xff;
  return;
}


