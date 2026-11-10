/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00442e80; name: FUN_.text__00442e80
 */


byte FUN__text__00442e80(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  
  uVar6 = *param_2;
  if (((((uVar6 != 0) || ((char)param_2[2] != -1)) || ((char)param_2[4] != -1)) ||
      (*(long *)(param_2 + 6) != 0)) && (uVar5 = *(uint *)(param_1 + 0x20), uVar5 != 0)) {
    lVar10 = *(long *)(param_1 + 0x18);
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar5 >> 1);
      puVar9 = (uint *)(lVar10 + (long)iVar1 * 0x28);
      uVar8 = *puVar9;
      if (uVar8 == uVar6) {
        bVar4 = FUN__text__00442ff0(puVar9);
        lVar10 = lVar10 + (long)iVar1 * 0x28;
        if (*(char *)(lVar10 + 0x10) != '\0' || *(int *)(lVar10 + 0x20) != 0)
        goto LAB__text__00442f20;
        FUN__text__004410e0(puVar9);
        uVar6 = *(uint *)(param_1 + 0x20);
        if (uVar6 == 0) goto LAB__text__00442f20;
        uVar5 = *param_2;
        iVar7 = 0;
        uVar8 = uVar6;
        goto LAB__text__00442f84;
      }
      if (uVar8 < uVar6) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar5 - (uVar8 < uVar6);
      uVar5 = uVar8 >> 1;
    } while (1 < uVar8);
  }
  cVar3 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  bVar4 = cVar3 != '\0';
  goto LAB__text__00442f20;
  while( true ) {
    if (uVar2 < uVar5) {
      iVar7 = iVar1 + 1;
    }
    uVar2 = uVar8 - (uVar2 < uVar5);
    uVar8 = uVar2 >> 1;
    if (uVar2 < 2) break;
LAB__text__00442f84:
    iVar1 = iVar7 + (uVar8 >> 1);
    puVar9 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
    uVar2 = *puVar9;
    if (uVar2 == uVar5) {
      uVar6 = uVar6 - 1;
      if ((long)iVar1 < (long)(ulong)uVar6) {
        memmove(puVar9,puVar9 + 10,
                (ulong)(((int)*(long *)(param_1 + 0x18) + uVar6 * 0x28) - (int)puVar9));
        uVar6 = *(int *)(param_1 + 0x20) - 1;
      }
      *(uint *)(param_1 + 0x20) = uVar6;
      break;
    }
  }
LAB__text__00442f20:
  return bVar4 & 1;
}


