/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043e2c0; name: FUN_.text__0043e2c0
 */


long FUN__text__0043e2c0(long param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar5 = *param_2;
  if ((((uVar5 != 0 || (int)param_2[1] != 0) || ((int)param_2[2] != 0)) || ((char)param_2[3] != -1))
     || (((char)param_2[4] != -1 || (param_2[5] != 0)))) {
    uVar6 = *(uint *)(param_1 + 0x20);
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        uVar8 = *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
        if (uVar8 == uVar5) goto LAB__text__0043e390;
        if (uVar8 < uVar5) {
          iVar7 = iVar1 + 1;
        }
        uVar2 = uVar6 - (uVar8 < uVar5);
        uVar6 = uVar2 >> 1;
      } while (1 < uVar2);
    }
    if (uVar5 != 0) {
      *param_2 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        uVar6 = *(uint *)(param_1 + 0x20);
        do {
          if (*(long *)(*(long *)(param_1 + 0x18) + (ulong)(uVar6 >> 1) * 0x28) == 0)
          goto LAB__text__0043e390;
          bVar3 = 1 < uVar6;
          uVar6 = uVar6 >> 1;
        } while (bVar3);
      }
    }
  }
LAB__text__0043e3a4:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[5] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
LAB__text__0043e390:
  lVar4 = FUN__text__00441210();
  if (lVar4 != 0) {
    return lVar4;
  }
  goto LAB__text__0043e3a4;
}


