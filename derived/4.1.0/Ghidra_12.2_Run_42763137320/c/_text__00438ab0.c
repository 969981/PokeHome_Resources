/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438ab0; name: FUN_.text__00438ab0
 */


long FUN__text__00438ab0(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = *param_2;
  if ((((uVar2 != 0) || ((char)param_2[2] != -1)) || ((char)param_2[4] != -1)) ||
     (*(long *)(param_2 + 6) != 0)) {
    uVar6 = *(uint *)(param_1 + 0x10);
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        uVar3 = *(uint *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
        if (uVar3 == uVar2) goto LAB__text__00438b64;
        if (uVar3 < uVar2) {
          iVar7 = iVar1 + 1;
        }
        uVar3 = uVar6 - (uVar3 < uVar2);
        uVar6 = uVar3 >> 1;
      } while (1 < uVar3);
    }
    if (uVar2 != 0) {
      *param_2 = 0;
      if (*(uint *)(param_1 + 0x10) != 0) {
        uVar2 = *(uint *)(param_1 + 0x10);
        do {
          if (*(int *)(*(long *)(param_1 + 8) + (ulong)(uVar2 >> 1) * 0x18) == 0)
          goto LAB__text__00438b64;
          bVar4 = 1 < uVar2;
          uVar2 = uVar2 >> 1;
        } while (bVar4);
      }
    }
  }
LAB__text__00438b78:
  *param_2 = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  lVar5 = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    lVar5 = param_1 + 4;
  }
  return lVar5;
LAB__text__00438b64:
  lVar5 = FUN__text__00438bb0();
  if (lVar5 != 0) {
    return lVar5;
  }
  goto LAB__text__00438b78;
}


