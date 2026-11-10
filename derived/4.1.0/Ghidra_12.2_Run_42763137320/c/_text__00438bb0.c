/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438bb0; name: FUN_.text__00438bb0
 */


long FUN__text__00438bb0(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  bVar2 = *param_2;
  if (((bVar2 != 0xff) || (param_2[8] != 0xff)) || (*(long *)(param_2 + 0x10) != 0)) {
    uVar7 = *(uint *)(param_1 + 0x10);
    if (uVar7 != 0) {
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar7 >> 1);
        pbVar5 = (byte *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
        bVar3 = *pbVar5;
        if (bVar3 == bVar2) goto LAB__text__00438c7c;
        if (bVar3 < bVar2) {
          iVar8 = iVar1 + 1;
        }
        uVar4 = uVar7 - (bVar3 < bVar2);
        uVar7 = uVar4 >> 1;
      } while (1 < uVar4);
    }
    if (bVar2 != 0xff) {
      *param_2 = 0xff;
      uVar7 = *(uint *)(param_1 + 0x10);
      if (uVar7 != 0) {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + (uVar7 >> 1);
          pbVar5 = (byte *)(*(long *)(param_1 + 8) + (long)iVar8 * 0x18);
          if (*pbVar5 == 0xff) goto LAB__text__00438c7c;
          uVar4 = uVar7 - 1;
          iVar8 = iVar8 + 1;
          uVar7 = uVar4 >> 1;
        } while (1 < uVar4);
      }
    }
  }
LAB__text__00438c94:
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *param_2 = 0xff;
  param_2[8] = 0xff;
  lVar6 = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    lVar6 = param_1 + 4;
  }
  return lVar6;
LAB__text__00438c7c:
  lVar6 = FUN__text__00438cc0(pbVar5,param_2 + 8);
  if (lVar6 != 0) {
    return lVar6;
  }
  goto LAB__text__00438c94;
}


