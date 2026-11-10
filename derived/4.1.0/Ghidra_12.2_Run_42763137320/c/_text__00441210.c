/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00441210; name: FUN_.text__00441210
 */


long FUN__text__00441210(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *param_2;
  if ((((uVar2 != 0) || (param_2[2] != 0)) || ((char)param_2[4] != -1)) ||
     (((char)param_2[6] != -1 || (*(long *)(param_2 + 8) != 0)))) {
    uVar7 = *(uint *)(param_1 + 0x20);
    if (uVar7 != 0) {
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar7 >> 1);
        puVar5 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
        uVar3 = *puVar5;
        if (uVar3 == uVar2) goto LAB__text__004412a4;
        if (uVar3 < uVar2) {
          iVar8 = iVar1 + 1;
        }
        uVar3 = uVar7 - (uVar3 < uVar2);
        uVar7 = uVar3 >> 1;
      } while (1 < uVar3);
    }
    if (uVar2 != 0) {
      *param_2 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        uVar2 = *(uint *)(param_1 + 0x20);
        do {
          puVar5 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)(uVar2 >> 1) * 0x28);
          if (*puVar5 == 0) goto LAB__text__004412a4;
          bVar4 = 1 < uVar2;
          uVar2 = uVar2 >> 1;
        } while (bVar4);
      }
    }
  }
LAB__text__004412e4:
  *param_2 = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 4) = 0xff;
  *(undefined1 *)(param_2 + 6) = 0xff;
  param_2[8] = 0;
  param_2[9] = 0;
  lVar6 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar6 = param_1 + 8;
  }
  return lVar6;
LAB__text__004412a4:
  lVar6 = FUN__text__00441320(puVar5,param_2 + 2);
  if (lVar6 != 0) {
    return lVar6;
  }
  goto LAB__text__004412e4;
}


