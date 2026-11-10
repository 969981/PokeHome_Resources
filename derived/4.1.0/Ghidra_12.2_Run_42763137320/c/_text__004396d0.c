/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004396d0; name: FUN_.text__004396d0
 */


byte FUN__text__004396d0(long param_1,long *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  
  uVar9 = *param_3;
  if (((((uVar9 != 0) || (param_3[2] != 0)) || ((char)param_3[4] != -1)) ||
      (((char)param_3[6] != -1 || (*(long *)(param_3 + 8) != 0)))) &&
     (uVar8 = *(uint *)(param_1 + 0x18), uVar8 != 0)) {
    lVar13 = *(long *)(param_1 + 0x10);
    iVar10 = 0;
    do {
      iVar1 = iVar10 + (uVar8 >> 1);
      puVar6 = (uint *)(lVar13 + (long)iVar1 * 0x18);
      uVar11 = *puVar6;
      if (uVar11 == uVar9) {
        bVar5 = FUN__text__004398f0(puVar6,param_2,param_3 + 2);
        lVar12 = lVar13 + (long)iVar1 * 0x18;
        piVar7 = (int *)(lVar12 + 0x10);
        pcVar15 = (char *)(lVar12 + 6);
        if (*pcVar15 != '\0' || *piVar7 != 0) goto LAB__text__0043989c;
        plVar14 = (long *)(lVar13 + (long)iVar1 * 0x18 + 8);
        if (*plVar14 != 0) {
          *piVar7 = 0;
          FUN__text__00400fc0(0);
          *plVar14 = 0;
          *(undefined4 *)(lVar13 + (long)iVar1 * 0x18 + 0x14) = 0;
        }
        *pcVar15 = '\0';
        uVar9 = *(uint *)(param_1 + 0x18);
        if (uVar9 == 0) goto LAB__text__0043989c;
        uVar8 = *param_3;
        iVar10 = 0;
        uVar11 = uVar9;
        goto LAB__text__00439864;
      }
      if (uVar11 < uVar9) {
        iVar10 = iVar1 + 1;
      }
      uVar11 = uVar8 - (uVar11 < uVar9);
      uVar8 = uVar11 >> 1;
    } while (1 < uVar11);
  }
  if (*(char *)(param_1 + 10) == '\0') {
    bVar5 = 0;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 8);
    lVar13 = *param_2;
    plVar14 = (long *)(lVar13 + (ulong)uVar4 * 0x28);
    lVar12 = *plVar14;
    if (lVar12 != 0) {
      FUN__text__004360b8(lVar12);
      FUN__text__00400fc0(0x10,lVar12);
      *plVar14 = 0;
    }
    lVar13 = lVar13 + (ulong)uVar4 * 0x28;
    *(undefined4 *)(lVar13 + 0x10) = 0;
    *(byte *)(lVar13 + 0x18) = *(byte *)(lVar13 + 0x18) & 0xfe | 3 < *(byte *)(lVar13 + 0x18);
    *(short *)(lVar13 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar4;
    cVar3 = *(char *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = 0;
    bVar5 = cVar3 != '\0';
  }
  goto LAB__text__0043989c;
  while( true ) {
    if (uVar2 < uVar8) {
      iVar10 = iVar1 + 1;
    }
    uVar2 = uVar11 - (uVar2 < uVar8);
    uVar11 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__00439864:
    iVar1 = iVar10 + (uVar11 >> 1);
    puVar6 = (uint *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x18);
    uVar2 = *puVar6;
    if (uVar2 == uVar8) {
      uVar9 = uVar9 - 1;
      if ((long)iVar1 < (long)(ulong)uVar9) {
        memmove(puVar6,puVar6 + 6,
                (ulong)(((int)*(long *)(param_1 + 0x10) + uVar9 * 0x18) - (int)puVar6));
        uVar9 = *(int *)(param_1 + 0x18) - 1;
      }
      *(uint *)(param_1 + 0x18) = uVar9;
      break;
    }
  }
LAB__text__0043989c:
  return bVar5 & 1;
}


