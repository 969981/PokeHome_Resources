/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047e778; name: FUN_.text__0047e778
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0047e778(long param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if (*(float *)(param_1 + 0x14) <= _DAT_008ab088) {
    fVar8 = 1.0;
    uVar1 = *(uint *)(param_2 + 1);
  }
  else {
    fVar8 = 1.0 / *(float *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_2 + 1);
  }
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = (ulong)uVar1;
    lVar6 = *param_2;
    uVar4 = 0;
    lVar7 = lVar6;
    do {
      uVar3 = uVar4;
      if (*(long *)(param_1 + 0x170) == *(long *)(lVar6 + 0x70)) {
        *(long *)(param_3 + uVar4 * 8) = lVar6;
        iVar2 = *(int *)(param_1 + 0x194);
        if (iVar2 == 2) {
          fVar9 = *(float *)(lVar6 + 0x44);
        }
        else if (iVar2 == 1) {
          fVar9 = *(float *)(lVar6 + 0x40);
        }
        else {
          fVar9 = 1.0;
          if (iVar2 == 0) {
            fVar9 = *(float *)(lVar6 + 0x3c);
          }
        }
        uVar3 = (ulong)((int)uVar4 + 1);
        *(float *)(param_4 + uVar4 * 4) = fVar9 * fVar8;
        lVar7 = *param_2;
        uVar5 = (ulong)*(uint *)(param_2 + 1);
      }
      lVar6 = lVar6 + 0x88;
      uVar4 = uVar3;
    } while (lVar6 != lVar7 + uVar5 * 0x88);
  }
  return uVar3;
}


