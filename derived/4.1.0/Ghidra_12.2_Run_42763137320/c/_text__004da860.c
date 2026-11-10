/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da860; name: FUN_.text__004da860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004da860(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int unaff_w27;
  float fVar11;
  float fVar12;
  uint local_64;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  FUN__text__0041b488(param_1 + 0x10);
  puVar4 = _DAT_008a4b70;
  uVar9 = 0;
  fVar11 = (float)NEON_ucvtf(*param_2);
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
  uVar10 = (uint)(fVar12 * fVar11 * 1.5258789e-05 + 0.5);
  do {
    if (uVar10 == 0) {
      iVar7 = 0x2d;
      goto LAB__text__004da9c0;
    }
    iVar7 = unaff_w27;
    if ((*(short *)(param_1 + 0x92) == 0) && (*(char *)(param_1 + 0xf0) == '\0')) {
      local_64 = (uint)*puVar4;
      iVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_64);
      if (iVar6 == 0x2d) {
LAB__text__004da938:
        lVar8 = *(long *)(param_1 + 0xe8);
        uVar1 = *(uint *)(lVar8 + 0x313);
        if (((uVar1 >> 0x16 & 1) == 0) && (uVar2 = *(uint *)(lVar8 + 0x30c), uVar2 != 0)) {
          iVar7 = 0;
          if (local_64 <= uVar2) {
            iVar7 = uVar2 - local_64;
          }
          bVar5 = uVar2 <= local_64;
          uVar2 = local_64 - uVar2;
          local_64 = 0;
          if (bVar5) {
            local_64 = uVar2;
          }
          *(int *)(lVar8 + 0x30c) = iVar7;
          *(uint *)(lVar8 + 0x313) = uVar1 & 0xfe3fffff;
        }
        *(short *)(param_1 + 0x92) = (short)local_64;
        iVar7 = unaff_w27;
      }
      else {
        iVar7 = iVar6;
        if (iVar6 == 0x11) {
          *(undefined1 *)(param_1 + 0xf0) = 1;
          goto LAB__text__004da938;
        }
      }
      if ((iVar6 != 0x2d) && (iVar6 != 0x11)) {
        return iVar7;
      }
    }
    uVar3 = *(ushort *)(param_1 + 0x92);
    uVar1 = uVar10;
    if (uVar3 <= uVar10) {
      uVar1 = (uint)uVar3;
    }
    uVar9 = uVar1 + uVar9;
    uVar10 = uVar10 - uVar1;
    *(short *)(param_1 + 0x92) = (short)(uVar3 - uVar1);
    unaff_w27 = iVar7;
  } while ((uVar3 - uVar1 != 0) || (*(char *)(param_1 + 0xf0) == '\0'));
  iVar7 = 0x11;
LAB__text__004da9c0:
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
  *param_2 = (int)((float)uVar9 / (fVar11 * 1.5258789e-05) + 0.5);
  return iVar7;
}


