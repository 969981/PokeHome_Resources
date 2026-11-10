/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004460d8; name: FUN_.text__004460d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__004460d8(long param_1,int param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar9;
  uint uVar8;
  long lVar10;
  
  cVar2 = *(char *)(param_1 + 0x28);
  cVar3 = *(char *)(param_1 + 0x2d);
  if ((cVar2 == -0x70 && cVar3 != '\0') || (cVar2 == -0x80)) {
LAB__text__0044612c:
    if ((*(long *)(param_1 + 0x18) != 0) &&
       ((*(long *)(*(long *)(param_1 + 0x18) + 0x10) != 0 && ((param_3 & 1) != 0)))) {
      bVar4 = *(byte *)(param_1 + 0x38);
      uVar8 = (uint)bVar4;
      uVar9 = (uint)bVar4;
      if (((bVar4 >> 1 & 1) == 0) && (*(int *)(param_1 + 0x34) < (int)(uint)_DAT_008ab03c)) {
        if ((cVar2 == -0x80) || ((cVar2 == -0x70 && (cVar3 == '\0')))) {
          FUN__text__004462e0(param_1);
          uVar9 = (uint)*(byte *)(param_1 + 0x38);
        }
        uVar8 = uVar9 | 2;
        *(char *)(param_1 + 0x38) = (char)uVar8;
      }
      if ((uVar8 & 1) == 0) {
        FUN__text__00446420(param_1);
        uVar8 = *(byte *)(param_1 + 0x38) | 1;
        *(char *)(param_1 + 0x38) = (char)uVar8;
      }
      if (((((*(char *)(param_1 + 0x28) == -0x70) && (*(char *)(param_1 + 0x2d) != '\0')) &&
           ((uVar8 >> 2 & 1) == 0)) &&
          ((lVar10 = *(long *)(param_1 + 0x10), lVar10 != 0 &&
           (*(int *)(lVar10 + 0x6c) == 0 && *(int *)(lVar10 + 0x94) == 0)))) &&
         (uVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(), (uVar7 & 1) == 0)) {
        *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
      }
    }
    uVar8 = *(int *)(param_1 + 0x34) - param_2;
    *(uint *)(param_1 + 0x34) = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
    return ((*(byte *)(param_1 + 0x38) ^ 0xff) & 6) == 0;
  }
  if (cVar2 == -2) {
    uVar8 = (uint)*(byte *)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
      if ((int)(uint)_DAT_008ab03c <= *(int *)(param_1 + 0x34)) {
        return false;
      }
      if (((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x10) == 0))
         || ((param_3 & 1) == 0)) {
        uVar8 = *(int *)(param_1 + 0x34) - param_2;
        *(uint *)(param_1 + 0x34) = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        return false;
      }
      FUN__text__004465c0(param_1,param_4);
      uVar9 = *(int *)(param_1 + 0x34) - param_2;
      uVar8 = *(byte *)(param_1 + 0x38) | 2;
      *(char *)(param_1 + 0x38) = (char)uVar8;
      *(uint *)(param_1 + 0x34) = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    }
    bVar5 = *(char *)(param_1 + 0x28) != -2;
    bVar6 = *(short *)(param_1 + 0x2c) != 0;
    bVar1 = bVar5 || bVar6;
    if (bVar5 || bVar6) {
      return bVar1;
    }
    if ((((uVar8 >> 3 & 1) == 0) && (lVar10 = *(long *)(param_1 + 0x10), lVar10 != 0)) &&
       (*(int *)(lVar10 + 0x6c) != 0 || *(int *)(lVar10 + 0x94) != 0)) {
      return bVar1;
    }
  }
  else if ((cVar2 == -0x70) && (cVar3 == '\0')) goto LAB__text__0044612c;
  return true;
}


