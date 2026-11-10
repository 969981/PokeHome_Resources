/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046fd50; name: FUN_.text__0046fd50
 */


undefined8 FUN__text__0046fd50(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar6 = *(uint *)(param_1 + 0x10);
      lVar8 = FUN__text__00400f90(0,(ulong)param_2 * 0x30,0x10);
      if (lVar8 == 0) {
        return 0x34;
      }
      lVar10 = *(long *)(param_1 + 8);
      if ((lVar10 != 0) && (lVar10 != lVar8)) {
        if (uVar6 != 0) {
          lVar10 = 0;
          do {
            puVar1 = (undefined8 *)(lVar8 + lVar10);
            puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + lVar10);
            lVar10 = lVar10 + 0x30;
            uVar3 = puVar2[1];
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            uVar3 = puVar2[2];
            uVar4 = puVar2[3];
            uVar5 = puVar2[5];
            puVar1[4] = puVar2[4];
            puVar1[5] = uVar5;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
          } while ((ulong)uVar6 * 0x30 != lVar10);
          lVar10 = *(long *)(param_1 + 8);
        }
        FUN__text__00400fc0(0,lVar10);
      }
    }
    else {
      lVar8 = FUN__text__00400fb0(0,*(long *)(param_1 + 8),(ulong)param_2 * 0x30,0x10);
      if (lVar8 == 0) {
        return 0x34;
      }
    }
    *(long *)(param_1 + 8) = lVar8;
    *(uint *)(param_1 + 0x14) = param_2;
  }
  iVar7 = param_2 - *(uint *)(param_1 + 0x24);
  if ((param_2 < *(uint *)(param_1 + 0x24) || iVar7 == 0) ||
     (uVar9 = FUN__text__0046fe70(param_1 + 0x18,iVar7), (uVar9 & 1) != 0)) {
    return 1;
  }
  return 0x34;
}


