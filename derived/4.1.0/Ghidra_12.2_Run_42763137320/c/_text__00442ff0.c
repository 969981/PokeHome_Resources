/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00442ff0; name: FUN_.text__00442ff0
 */


byte FUN__text__00442ff0(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  long *plVar15;
  
  bVar6 = *param_2;
  if ((((bVar6 != 0xff) || (param_2[8] != 0xff)) || (*(long *)(param_2 + 0x10) != 0)) &&
     (uVar10 = *(uint *)(param_1 + 0x20), uVar10 != 0)) {
    lVar13 = *(long *)(param_1 + 0x18);
    iVar11 = 0;
    do {
      iVar1 = iVar11 + (uVar10 >> 1);
      pbVar7 = (byte *)(lVar13 + (long)iVar1 * 0x28);
      bVar2 = *pbVar7;
      if (bVar2 == bVar6) {
        bVar6 = FUN__text__00443180(pbVar7,param_2 + 8);
        lVar8 = lVar13 + (long)iVar1 * 0x28;
        piVar9 = (int *)(lVar8 + 0x20);
        pcVar14 = (char *)(lVar8 + 0x10);
        if (*pcVar14 != '\0' || *piVar9 != 0) goto LAB__text__00443084;
        plVar15 = (long *)(lVar13 + (long)iVar1 * 0x28 + 0x18);
        if (*plVar15 != 0) {
          *piVar9 = 0;
          FUN__text__00400fc0(0);
          *plVar15 = 0;
          *(undefined4 *)(lVar13 + (long)iVar1 * 0x28 + 0x24) = 0;
        }
        *pcVar14 = '\0';
        uVar10 = *(uint *)(param_1 + 0x20);
        if (uVar10 == 0) goto LAB__text__00443084;
        bVar2 = *param_2;
        iVar11 = 0;
        uVar12 = uVar10;
        goto LAB__text__00443114;
      }
      if (bVar2 < bVar6) {
        iVar11 = iVar1 + 1;
      }
      uVar12 = uVar10 - (bVar2 < bVar6);
      uVar10 = uVar12 >> 1;
    } while (1 < uVar12);
  }
  cVar3 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  bVar6 = cVar3 != '\0';
  goto LAB__text__00443084;
  while( true ) {
    if (bVar4 < bVar2) {
      iVar11 = iVar1 + 1;
    }
    uVar5 = uVar12 - (bVar4 < bVar2);
    uVar12 = uVar5 >> 1;
    if (uVar5 < 2) break;
LAB__text__00443114:
    iVar1 = iVar11 + (uVar12 >> 1);
    pbVar7 = (byte *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
    bVar4 = *pbVar7;
    if (bVar4 == bVar2) {
      uVar10 = uVar10 - 1;
      if ((long)iVar1 < (long)(ulong)uVar10) {
        memmove(pbVar7,pbVar7 + 0x28,
                (ulong)(((int)*(long *)(param_1 + 0x18) + uVar10 * 0x28) - (int)pbVar7));
        uVar10 = *(int *)(param_1 + 0x20) - 1;
      }
      *(uint *)(param_1 + 0x20) = uVar10;
      break;
    }
  }
LAB__text__00443084:
  return bVar6 & 1;
}


