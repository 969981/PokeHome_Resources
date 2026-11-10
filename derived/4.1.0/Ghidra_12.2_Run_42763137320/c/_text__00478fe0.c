/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00478fe0; name: FUN_.text__00478fe0
 */


undefined8 FUN__text__00478fe0(long param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  
  lVar7 = FUN__text__0044a594(*(undefined8 *)(param_1 + 8));
  uVar5 = *(uint *)(lVar7 + 0x18);
  if (uVar5 != 0) {
    iVar9 = 0;
    do {
      iVar1 = iVar9 + (uVar5 >> 1);
      uVar10 = *(ulong *)(*(long *)(lVar7 + 0x10) + (long)iVar1 * 8);
      if (uVar10 == param_2) {
        lVar7 = FUN__text__0047d7d0(param_2);
        if (lVar7 == 0) {
          return 2;
        }
        lVar7 = FUN__text__0047da58();
        if (lVar7 == 0) {
          return 2;
        }
        if (*(short *)(*(long *)(lVar7 + 8) + 0x38) == 0) {
          return 2;
        }
        puVar8 = *(undefined8 **)(*(long *)(lVar7 + 8) + 0x20);
        uVar2 = puVar8[1];
        *param_3 = *puVar8;
        param_3[1] = uVar2;
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        uVar4 = puVar8[5];
        param_3[4] = puVar8[4];
        param_3[5] = uVar4;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        return 1;
      }
      if (uVar10 < param_2) {
        iVar9 = iVar1 + 1;
      }
      uVar6 = uVar5 - (uVar10 < param_2);
      uVar5 = uVar6 >> 1;
    } while (1 < uVar6);
  }
  return 2;
}


