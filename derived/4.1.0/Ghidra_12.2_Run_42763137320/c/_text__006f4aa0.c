/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f4aa0; name: FUN_.text__006f4aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f4aa0(undefined1 *param_1,undefined8 param_2,ushort *param_3,long param_4)

{
  long lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong local_80 [4];
  
  *(uint *)(param_1 + 4) = (uint)param_3[1];
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + (ulong)param_3[1] * 8;
  puVar5 = _DAT_008a7910;
  puVar4 = _DAT_008a7908;
  puVar3 = _DAT_008a7900;
  if (param_3[1] != 0) {
    lVar9 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar8 = *(long *)(param_3 + 8);
      lVar1 = *(long *)(param_1 + 0x10) + lVar11;
      (*(code *)*puVar3)(lVar1);
      (*(code *)*puVar4)(lVar1,(long)*(int *)(lVar8 + lVar9));
      (*(code *)*puVar5)(lVar1,((int *)(lVar8 + lVar9))[1]);
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 8;
      lVar9 = lVar9 + 0x10;
    } while (uVar12 < param_3[1]);
  }
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  nn::util::BitArray::reset();
  uVar12 = (ulong)*param_3;
  if (*param_3 == 0) {
    iVar10 = 0;
    uVar13 = 0xffffffff;
    uVar14 = 0;
LAB__text__006f4ca8:
    *(undefined4 *)(param_1 + 8) = 0;
    if ((int)uVar13 < iVar10) goto LAB__text__006f4d0c;
  }
  else {
    if (param_4 == 0) {
      lVar11 = 0;
      uVar14 = 0;
      iVar10 = 0;
      uVar13 = 0xffffffff;
      do {
        lVar9 = *(long *)(param_3 + 4) + lVar11;
        uVar2 = *(ushort *)(lVar9 + 2);
        if (-1 < (short)uVar2) {
          lVar1 = *(long *)(param_1 + 0x18) + (ulong)uVar2 * 4;
          (*(code *)*_DAT_008a78d8)(lVar1);
          uVar6 = FUN__text__006f2260(*(undefined4 *)(lVar9 + 0xc));
          (*(code *)*_DAT_008a78e0)(lVar1,uVar6,*(undefined4 *)(lVar9 + 8));
          (*(code *)*_DAT_008a78e8)(lVar1,*(undefined2 *)(lVar9 + 4));
          uVar12 = (ulong)(uVar2 >> 3) & 0x1ff8;
          if ((int)uVar13 <= (int)(uint)uVar2) {
            uVar13 = (uint)uVar2;
          }
          iVar10 = iVar10 + 1;
          *(ulong *)((long)local_80 + uVar12) =
               *(ulong *)((long)local_80 + uVar12) | 1L << ((ulong)uVar2 & 0x3f);
          uVar12 = (ulong)*param_3;
        }
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x28;
      } while (uVar14 < uVar12);
    }
    else {
      lVar11 = 0;
      uVar14 = 0;
      iVar10 = 0;
      uVar13 = 0xffffffff;
      do {
        lVar9 = *(long *)(param_3 + 4) + lVar11;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar12 = (ulong)*(short *)(lVar9 + 2);
          if (-1 < *(short *)(lVar9 + 2)) goto LAB__text__006f4bf8;
        }
        else {
          uVar7 = FUN__text__006f3f40(param_4,0,0);
          uVar12 = uVar7 & 0xffffffff;
          if (-1 < (int)uVar7) {
LAB__text__006f4bf8:
            lVar1 = *(long *)(param_1 + 0x18) + (uVar12 & 0xffffffff) * 4;
            (*(code *)*_DAT_008a78d8)(lVar1);
            uVar6 = FUN__text__006f2260(*(undefined4 *)(lVar9 + 0xc));
            (*(code *)*_DAT_008a78e0)(lVar1,uVar6,*(undefined4 *)(lVar9 + 8));
            (*(code *)*_DAT_008a78e8)(lVar1,*(undefined2 *)(lVar9 + 4));
            uVar7 = uVar12 >> 6 & 0x3ffffff;
            if ((int)uVar13 <= (int)(uint)uVar12) {
              uVar13 = (uint)uVar12;
            }
            iVar10 = iVar10 + 1;
            local_80[uVar7] = local_80[uVar7] | 1L << (uVar12 & 0x3f);
          }
        }
        uVar12 = (ulong)*param_3;
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x28;
      } while (uVar14 < uVar12);
    }
    uVar14 = (ulong)(uVar13 + 1);
    if ((int)uVar12 == 0) goto LAB__text__006f4ca8;
    *(uint *)(param_1 + 8) = uVar13 + 1;
    if ((int)uVar13 < iVar10) goto LAB__text__006f4d0c;
  }
  puVar3 = _DAT_008a78d8;
  if (-1 < (int)uVar13) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      if ((local_80[uVar12 >> 6 & 0x3ffffff] >> (uVar12 & 0x3f) & 1) == 0) {
        (*(code *)*puVar3)(*(long *)(param_1 + 0x18) + lVar11);
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 4;
    } while (uVar14 != uVar12);
  }
LAB__text__006f4d0c:
  *param_1 = 1;
  return;
}


