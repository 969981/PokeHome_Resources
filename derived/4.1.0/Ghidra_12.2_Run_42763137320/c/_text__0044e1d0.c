/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044e1d0; name: FUN_.text__0044e1d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0044e1d0(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = FUN__text__00428800(*(undefined8 *)(param_1 + 0xe0));
  if (iVar3 == 1) {
    fVar6 = *(float *)(param_2 + 700) *
            (float)((uint)*_DAT_008a4b70 + (uint)*_DAT_008a4b70 * *(int *)(_DAT_008a45b0 + 0x14));
    fVar7 = 0.5;
    if (fVar6 <= 0.0) {
      fVar7 = -0.5;
    }
    if ((int)(fVar7 + fVar6) <= *(int *)(param_2 + 0x330)) {
      return 0x3f;
    }
    if ((-1 < *(int *)(param_2 + 0x330)) ||
       ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) >> 1 & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (iVar3 != 0x3f) {
      return 2;
    }
    if ((-1 < *(int *)(param_2 + 0x330)) ||
       ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) >> 1 & 1) != 0)) {
      return 0x3f;
    }
  }
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(param_1 + 8) + -0x18;
  }
  uVar2 = *(undefined4 *)(lVar1 + 0x280);
  uVar5 = *_DAT_008a45d8;
  uVar4 = FUN__text__00478e4c(lVar1 + 0x18);
  FUN__text__0048dbf0(uVar5,uVar2,uVar4);
  return iVar3;
}


