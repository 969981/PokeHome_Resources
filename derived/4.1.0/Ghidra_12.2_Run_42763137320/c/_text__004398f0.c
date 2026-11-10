/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004398f0; name: FUN_.text__004398f0
 */


byte FUN__text__004398f0(long param_1,long *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  
  uVar7 = *param_3;
  if (((((uVar7 != 0) || ((char)param_3[2] != -1)) || ((char)param_3[4] != -1)) ||
      (*(long *)(param_3 + 6) != 0)) && (uVar6 = *(uint *)(param_1 + 0x10), uVar6 != 0)) {
    lVar12 = *(long *)(param_1 + 8);
    iVar8 = 0;
    do {
      iVar1 = iVar8 + (uVar6 >> 1);
      puVar11 = (uint *)(lVar12 + (long)iVar1 * 0x18);
      uVar9 = *puVar11;
      if (uVar9 == uVar7) {
        bVar5 = FUN__text__00439b00(puVar11,param_2);
        lVar12 = lVar12 + (long)iVar1 * 0x18;
        if (*(char *)(lVar12 + 6) == '\0' && *(int *)(lVar12 + 0x10) == 0) {
          FUN__text__00438750(puVar11);
          uVar7 = *(uint *)(param_1 + 0x10);
          if (uVar7 != 0) {
            uVar6 = *param_3;
            iVar8 = 0;
            uVar9 = uVar7;
            do {
              iVar1 = iVar8 + (uVar9 >> 1);
              puVar11 = (uint *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
              uVar2 = *puVar11;
              if (uVar2 == uVar6) {
                uVar7 = uVar7 - 1;
                if ((long)iVar1 < (long)(ulong)uVar7) {
                  memmove(puVar11,puVar11 + 6,
                          (ulong)(((int)*(long *)(param_1 + 8) + uVar7 * 0x18) - (int)puVar11));
                  uVar7 = *(int *)(param_1 + 0x10) - 1;
                }
                *(uint *)(param_1 + 0x10) = uVar7;
                return bVar5 & 1;
              }
              if (uVar2 < uVar6) {
                iVar8 = iVar1 + 1;
              }
              uVar2 = uVar9 - (uVar2 < uVar6);
              uVar9 = uVar2 >> 1;
            } while (1 < uVar2);
          }
        }
        goto LAB__text__004399f8;
      }
      if (uVar9 < uVar7) {
        iVar8 = iVar1 + 1;
      }
      uVar9 = uVar6 - (uVar9 < uVar7);
      uVar6 = uVar9 >> 1;
    } while (1 < uVar9);
  }
  if (*(char *)(param_1 + 6) == '\0') {
    return 0;
  }
  uVar4 = *(ushort *)(param_1 + 4);
  lVar12 = *param_2;
  plVar13 = (long *)(lVar12 + (ulong)uVar4 * 0x28);
  lVar10 = *plVar13;
  if (lVar10 != 0) {
    FUN__text__004360b8(lVar10);
    FUN__text__00400fc0(0x10,lVar10);
    *plVar13 = 0;
  }
  lVar12 = lVar12 + (ulong)uVar4 * 0x28;
  *(undefined4 *)(lVar12 + 0x10) = 0;
  *(byte *)(lVar12 + 0x18) = *(byte *)(lVar12 + 0x18) & 0xfe | 3 < *(byte *)(lVar12 + 0x18);
  *(short *)(lVar12 + 0x20) = (short)param_2[2];
  *(ushort *)(param_2 + 2) = uVar4;
  cVar3 = *(char *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = 0;
  bVar5 = cVar3 != '\0';
LAB__text__004399f8:
  return bVar5 & 1;
}


