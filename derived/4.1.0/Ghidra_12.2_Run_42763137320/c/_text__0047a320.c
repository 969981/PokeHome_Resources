/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047a320; name: FUN_.text__0047a320
 */


int FUN__text__0047a320(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x1b0);
  if (uVar9 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  lVar6 = lVar5 + (ulong)uVar9 * 0x88;
  uVar2 = *(uint *)(param_2 + 0x18);
  if (param_3 == 1) {
    if (uVar2 == 0) {
      return (int)(((ulong)uVar9 * 0x88 - 0x88) / 0x88) + 1;
    }
    iVar4 = 0;
    do {
      uVar8 = *(ulong *)(lVar5 + 0x70);
      iVar7 = 0;
      uVar9 = uVar2;
      do {
        iVar1 = iVar7 + (uVar9 >> 1);
        uVar10 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
        if (uVar10 == uVar8) goto LAB__text__0047a3b0;
        if (uVar10 < uVar8) {
          iVar7 = iVar1 + 1;
        }
        uVar3 = uVar9 - (uVar10 < uVar8);
        uVar9 = uVar3 >> 1;
      } while (1 < uVar3);
      iVar4 = iVar4 + 1;
LAB__text__0047a3b0:
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar6);
  }
  else {
    iVar4 = 0;
    if ((param_3 == 0) && (uVar2 != 0)) {
      do {
        uVar8 = *(ulong *)(lVar5 + 0x70);
        iVar7 = 0;
        uVar9 = uVar2;
        do {
          iVar1 = iVar7 + (uVar9 >> 1);
          uVar10 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
          if (uVar10 == uVar8) {
            iVar4 = iVar4 + 1;
            break;
          }
          if (uVar10 < uVar8) {
            iVar7 = iVar1 + 1;
          }
          uVar3 = uVar9 - (uVar10 < uVar8);
          uVar9 = uVar3 >> 1;
        } while (1 < uVar3);
        lVar5 = lVar5 + 0x88;
      } while (lVar5 != lVar6);
    }
  }
  return iVar4;
}


