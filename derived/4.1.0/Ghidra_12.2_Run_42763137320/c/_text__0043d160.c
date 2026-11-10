/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d160; name: FUN_.text__0043d160
 */


byte FUN__text__0043d160(long param_1,uint *param_2)

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
      (*(long *)(param_2 + 6) != 0)) && (uVar5 = *(uint *)(param_1 + 0x10), uVar5 != 0)) {
    lVar10 = *(long *)(param_1 + 8);
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar5 >> 1);
      puVar9 = (uint *)(lVar10 + (long)iVar1 * 0x18);
      uVar8 = *puVar9;
      if (uVar8 == uVar6) {
        bVar4 = FUN__text__0043d2e0(puVar9);
        lVar10 = lVar10 + (long)iVar1 * 0x18;
        if (*(char *)(lVar10 + 6) == '\0' && *(int *)(lVar10 + 0x10) == 0) {
          FUN__text__00438750(puVar9);
          uVar6 = *(uint *)(param_1 + 0x10);
          if (uVar6 != 0) {
            uVar5 = *param_2;
            iVar7 = 0;
            uVar8 = uVar6;
            do {
              iVar1 = iVar7 + (uVar8 >> 1);
              puVar9 = (uint *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
              uVar2 = *puVar9;
              if (uVar2 == uVar5) {
                uVar6 = uVar6 - 1;
                if ((long)iVar1 < (long)(ulong)uVar6) {
                  memmove(puVar9,puVar9 + 6,
                          (ulong)(((int)*(long *)(param_1 + 8) + uVar6 * 0x18) - (int)puVar9));
                  uVar6 = *(int *)(param_1 + 0x10) - 1;
                }
                *(uint *)(param_1 + 0x10) = uVar6;
                return bVar4 & 1;
              }
              if (uVar2 < uVar5) {
                iVar7 = iVar1 + 1;
              }
              uVar2 = uVar8 - (uVar2 < uVar5);
              uVar8 = uVar2 >> 1;
            } while (1 < uVar2);
          }
        }
        goto LAB__text__0043d200;
      }
      if (uVar8 < uVar6) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar5 - (uVar8 < uVar6);
      uVar5 = uVar8 >> 1;
    } while (1 < uVar8);
  }
  cVar3 = *(char *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = 0;
  bVar4 = cVar3 != '\0';
LAB__text__0043d200:
  return bVar4 & 1;
}


