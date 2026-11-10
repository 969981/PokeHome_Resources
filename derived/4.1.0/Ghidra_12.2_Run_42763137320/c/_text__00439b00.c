/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00439b00; name: FUN_.text__00439b00
 */


byte FUN__text__00439b00(long param_1,long *param_2,byte *param_3)

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
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char *pcVar16;
  
  bVar7 = *param_3;
  if ((((bVar7 != 0xff) || (param_3[8] != 0xff)) || (*(long *)(param_3 + 0x10) != 0)) &&
     (uVar10 = *(uint *)(param_1 + 0x10), uVar10 != 0)) {
    lVar14 = *(long *)(param_1 + 8);
    iVar11 = 0;
    do {
      iVar1 = iVar11 + (uVar10 >> 1);
      pbVar8 = (byte *)(lVar14 + (long)iVar1 * 0x18);
      bVar2 = *pbVar8;
      if (bVar2 == bVar7) {
        bVar7 = FUN__text__00439d10(pbVar8,param_2,param_3 + 8);
        lVar13 = lVar14 + (long)iVar1 * 0x18;
        piVar9 = (int *)(lVar13 + 0x10);
        pcVar16 = (char *)(lVar13 + 4);
        if (*pcVar16 != '\0' || *piVar9 != 0) goto LAB__text__00439cf0;
        plVar15 = (long *)(lVar14 + (long)iVar1 * 0x18 + 8);
        if (*plVar15 != 0) {
          *piVar9 = 0;
          FUN__text__00400fc0(0);
          *plVar15 = 0;
          *(undefined4 *)(lVar14 + (long)iVar1 * 0x18 + 0x14) = 0;
        }
        *pcVar16 = '\0';
        uVar10 = *(uint *)(param_1 + 0x10);
        if (uVar10 == 0) goto LAB__text__00439cf0;
        bVar2 = *param_3;
        iVar11 = 0;
        uVar12 = uVar10;
        goto LAB__text__00439c90;
      }
      if (bVar2 < bVar7) {
        iVar11 = iVar1 + 1;
      }
      uVar12 = uVar10 - (bVar2 < bVar7);
      uVar10 = uVar12 >> 1;
    } while (1 < uVar12);
  }
  if (*(char *)(param_1 + 6) == '\0') {
    bVar7 = 0;
  }
  else {
    uVar5 = *(ushort *)(param_1 + 4);
    lVar14 = *param_2;
    plVar15 = (long *)(lVar14 + (ulong)uVar5 * 0x28);
    lVar13 = *plVar15;
    if (lVar13 != 0) {
      FUN__text__004360b8(lVar13);
      FUN__text__00400fc0(0x10,lVar13);
      *plVar15 = 0;
    }
    lVar14 = lVar14 + (ulong)uVar5 * 0x28;
    *(undefined4 *)(lVar14 + 0x10) = 0;
    *(byte *)(lVar14 + 0x18) = *(byte *)(lVar14 + 0x18) & 0xfe | 3 < *(byte *)(lVar14 + 0x18);
    *(short *)(lVar14 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar5;
    cVar3 = *(char *)(param_1 + 6);
    *(undefined1 *)(param_1 + 6) = 0;
    bVar7 = cVar3 != '\0';
  }
  goto LAB__text__00439cf0;
  while( true ) {
    if (bVar4 < bVar2) {
      iVar11 = iVar1 + 1;
    }
    uVar6 = uVar12 - (bVar4 < bVar2);
    uVar12 = uVar6 >> 1;
    if (uVar6 < 2) break;
LAB__text__00439c90:
    iVar1 = iVar11 + (uVar12 >> 1);
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
      break;
    }
  }
LAB__text__00439cf0:
  return bVar7 & 1;
}


