/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f1dfc; name: FUN_.text__004f1dfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f1dfc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  uVar5 = *(uint *)(param_1 + 0x313);
  if (((uVar5 >> 0x16 & 1) != 0) || ((*(ushort *)(*(long *)(param_1 + 0x2a0) + 0xc) >> 1 & 1) == 0))
  {
    iVar2 = *(int *)(param_1 + 0x330);
    fVar4 = (float)NEON_ucvtf((uint)*_DAT_008a4b70);
    fVar4 = *(float *)(param_1 + 700) * fVar4;
    fVar7 = 0.5;
    if (fVar4 <= 0.0) {
      fVar7 = -0.5;
    }
    iVar6 = (int)(fVar7 + fVar4);
    iVar3 = 0;
    if (iVar6 != 0) {
      iVar3 = iVar2 / iVar6;
    }
    iVar1 = iVar6;
    if (iVar6 < 0) {
      iVar1 = iVar6 + 1;
    }
    iVar3 = iVar2 - iVar3 * iVar6;
    if (iVar1 >> 1 < iVar3 || *(int *)(param_1 + 0x30c) < iVar3) {
      iVar6 = iVar6 - iVar3;
    }
    else {
      if (iVar3 < 1) goto LAB__text__004f1e98;
      iVar6 = -iVar3;
    }
    *(int *)(param_1 + 0x330) = iVar6 + iVar2;
    uVar5 = uVar5 & 0xfe3fffff | 0x400000;
    *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + iVar6;
  }
LAB__text__004f1e98:
  *(uint *)(param_1 + 0x313) = uVar5 | 0x8000000;
  return;
}


