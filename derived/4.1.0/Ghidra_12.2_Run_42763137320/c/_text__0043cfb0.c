/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043cfb0; name: FUN_.text__0043cfb0
 */


byte FUN__text__0043cfb0(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  
  uVar9 = *param_2;
  if (((((uVar9 != 0) || (param_2[2] != 0)) || ((char)param_2[4] != -1)) ||
      (((char)param_2[6] != -1 || (*(long *)(param_2 + 8) != 0)))) &&
     (uVar8 = *(uint *)(param_1 + 0x18), uVar8 != 0)) {
    lVar12 = *(long *)(param_1 + 0x10);
    iVar10 = 0;
    do {
      iVar1 = iVar10 + (uVar8 >> 1);
      puVar5 = (uint *)(lVar12 + (long)iVar1 * 0x18);
      uVar11 = *puVar5;
      if (uVar11 == uVar9) {
        bVar4 = FUN__text__0043d160(puVar5,param_2 + 2);
        lVar6 = lVar12 + (long)iVar1 * 0x18;
        piVar7 = (int *)(lVar6 + 0x10);
        pcVar13 = (char *)(lVar6 + 6);
        if (*pcVar13 != '\0' || *piVar7 != 0) goto LAB__text__0043d05c;
        plVar14 = (long *)(lVar12 + (long)iVar1 * 0x18 + 8);
        if (*plVar14 != 0) {
          *piVar7 = 0;
          FUN__text__00400fc0(0);
          *plVar14 = 0;
          *(undefined4 *)(lVar12 + (long)iVar1 * 0x18 + 0x14) = 0;
        }
        *pcVar13 = '\0';
        uVar9 = *(uint *)(param_1 + 0x18);
        if (uVar9 == 0) goto LAB__text__0043d05c;
        uVar8 = *param_2;
        iVar10 = 0;
        uVar11 = uVar9;
        goto LAB__text__0043d0f0;
      }
      if (uVar11 < uVar9) {
        iVar10 = iVar1 + 1;
      }
      uVar11 = uVar8 - (uVar11 < uVar9);
      uVar8 = uVar11 >> 1;
    } while (1 < uVar11);
  }
  cVar3 = *(char *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = 0;
  bVar4 = cVar3 != '\0';
  goto LAB__text__0043d05c;
  while( true ) {
    if (uVar2 < uVar8) {
      iVar10 = iVar1 + 1;
    }
    uVar2 = uVar11 - (uVar2 < uVar8);
    uVar11 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__0043d0f0:
    iVar1 = iVar10 + (uVar11 >> 1);
    puVar5 = (uint *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x18);
    uVar2 = *puVar5;
    if (uVar2 == uVar8) {
      uVar9 = uVar9 - 1;
      if ((long)iVar1 < (long)(ulong)uVar9) {
        memmove(puVar5,puVar5 + 6,
                (ulong)(((int)*(long *)(param_1 + 0x10) + uVar9 * 0x18) - (int)puVar5));
        uVar9 = *(int *)(param_1 + 0x18) - 1;
      }
      *(uint *)(param_1 + 0x18) = uVar9;
      break;
    }
  }
LAB__text__0043d05c:
  return bVar4 & 1;
}


