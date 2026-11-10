/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ec20; name: FUN_.text__0043ec20
 */


byte FUN__text__0043ec20(long param_1,ulong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  
  uVar5 = *param_2;
  if (((((uVar5 != 0 || (int)param_2[1] != 0) || ((int)param_2[2] != 0)) || ((char)param_2[3] != -1)
       ) || (((char)param_2[4] != -1 || (param_2[5] != 0)))) &&
     (uVar6 = *(uint *)(param_1 + 0x20), uVar6 != 0)) {
    lVar11 = *(long *)(param_1 + 0x18);
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar6 >> 1);
      puVar10 = (ulong *)(lVar11 + (long)iVar1 * 0x28);
      uVar9 = *puVar10;
      if (uVar9 == uVar5) {
        bVar4 = FUN__text__00442ce0(puVar10);
        lVar11 = lVar11 + (long)iVar1 * 0x28;
        if (*(char *)(lVar11 + 0x10) != '\0' || *(int *)(lVar11 + 0x20) != 0)
        goto LAB__text__0043ecdc;
        FUN__text__00440eb0(puVar10);
        uVar6 = *(uint *)(param_1 + 0x20);
        if (uVar6 == 0) goto LAB__text__0043ecdc;
        uVar5 = *param_2;
        iVar7 = 0;
        uVar8 = uVar6;
        goto LAB__text__0043ed40;
      }
      if (uVar9 < uVar5) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar6 - (uVar9 < uVar5);
      uVar6 = uVar8 >> 1;
    } while (1 < uVar8);
  }
  cVar2 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  bVar4 = cVar2 != '\0';
  goto LAB__text__0043ecdc;
  while( true ) {
    if (uVar9 < uVar5) {
      iVar7 = iVar1 + 1;
    }
    uVar3 = uVar8 - (uVar9 < uVar5);
    uVar8 = uVar3 >> 1;
    if (uVar3 < 2) break;
LAB__text__0043ed40:
    iVar1 = iVar7 + (uVar8 >> 1);
    puVar10 = (ulong *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
    uVar9 = *puVar10;
    if (uVar9 == uVar5) {
      uVar6 = uVar6 - 1;
      if ((long)iVar1 < (long)(ulong)uVar6) {
        memmove(puVar10,puVar10 + 5,
                (ulong)(((int)*(long *)(param_1 + 0x18) + uVar6 * 0x28) - (int)puVar10));
        uVar6 = *(int *)(param_1 + 0x20) - 1;
      }
      *(uint *)(param_1 + 0x20) = uVar6;
      break;
    }
  }
LAB__text__0043ecdc:
  return bVar4 & 1;
}


