/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00439d10; name: FUN_.text__00439d10
 */


byte FUN__text__00439d10(long param_1,long *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  bVar7 = *param_3;
  if ((bVar7 != 0xff || *(long *)(param_3 + 8) != 0) &&
     (uVar10 = *(uint *)(param_1 + 0x10), uVar10 != 0)) {
    lVar15 = *(long *)(param_1 + 8);
    iVar12 = 0;
    do {
      iVar1 = iVar12 + (uVar10 >> 1);
      pbVar8 = (byte *)(lVar15 + (long)iVar1 * 0x18);
      bVar2 = *pbVar8;
      if (bVar2 == bVar7) {
        bVar7 = FUN__text__00439f30(pbVar8,param_2);
        lVar14 = lVar15 + (long)iVar1 * 0x18;
        piVar9 = (int *)(lVar14 + 0x10);
        pcVar11 = (char *)(lVar14 + 4);
        if (*pcVar11 == '\0' && *piVar9 == 0) {
          *pcVar11 = '\0';
          plVar16 = (long *)(lVar15 + (long)iVar1 * 0x18 + 8);
          if (*plVar16 != 0) {
            *piVar9 = 0;
            FUN__text__00400fc0(0);
            *plVar16 = 0;
            *(undefined4 *)(lVar15 + (long)iVar1 * 0x18 + 0x14) = 0;
          }
          uVar10 = *(uint *)(param_1 + 0x10);
          if (uVar10 != 0) {
            bVar2 = *param_3;
            iVar12 = 0;
            uVar13 = uVar10;
            do {
              iVar1 = iVar12 + (uVar13 >> 1);
              pbVar8 = (byte *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
              bVar4 = *pbVar8;
              if (bVar4 == bVar2) {
                uVar10 = uVar10 - 1;
                if ((long)iVar1 < (long)(ulong)uVar10) {
                  memmove(pbVar8,pbVar8 + 0x18,
                          (ulong)(((int)*(long *)(param_1 + 8) + uVar10 * 0x18) - (int)pbVar8));
                  uVar10 = *(int *)(param_1 + 0x10) - 1;
                }
                *(uint *)(param_1 + 0x10) = uVar10;
                return bVar7 & 1;
              }
              if (bVar4 < bVar2) {
                iVar12 = iVar1 + 1;
              }
              uVar6 = uVar13 - (bVar4 < bVar2);
              uVar13 = uVar6 >> 1;
            } while (1 < uVar6);
          }
        }
        goto LAB__text__00439e08;
      }
      if (bVar2 < bVar7) {
        iVar12 = iVar1 + 1;
      }
      uVar13 = uVar10 - (bVar2 < bVar7);
      uVar10 = uVar13 >> 1;
    } while (1 < uVar13);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    return 0;
  }
  uVar5 = *(ushort *)(param_1 + 2);
  lVar15 = *param_2;
  plVar16 = (long *)(lVar15 + (ulong)uVar5 * 0x28);
  lVar14 = *plVar16;
  if (lVar14 != 0) {
    FUN__text__004360b8(lVar14);
    FUN__text__00400fc0(0x10,lVar14);
    *plVar16 = 0;
  }
  lVar15 = lVar15 + (ulong)uVar5 * 0x28;
  *(undefined4 *)(lVar15 + 0x10) = 0;
  *(byte *)(lVar15 + 0x18) = *(byte *)(lVar15 + 0x18) & 0xfe | 3 < *(byte *)(lVar15 + 0x18);
  *(short *)(lVar15 + 0x20) = (short)param_2[2];
  *(ushort *)(param_2 + 2) = uVar5;
  cVar3 = *(char *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  bVar7 = cVar3 != '\0';
LAB__text__00439e08:
  return bVar7 & 1;
}


