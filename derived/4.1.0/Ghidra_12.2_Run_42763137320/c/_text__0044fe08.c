/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044fe08; name: FUN_.text__0044fe08
 */


undefined4 FUN__text__0044fe08(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  plVar6 = *(long **)(param_1 + 0xe8);
  lVar8 = plVar6[3];
  iVar1 = *(int *)(lVar8 + 0x330);
  if (0 < iVar1) {
    fVar9 = *(float *)(lVar8 + 700) *
            (float)((uint)*(ushort *)(param_2 + 0x10) - (uint)*(ushort *)(param_2 + 0x12));
    fVar10 = 0.5;
    if (fVar9 <= 0.0) {
      fVar10 = -0.5;
    }
    iVar5 = (int)(fVar10 + fVar9);
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    *(int *)(lVar8 + 0x330) = iVar1 - iVar5;
    return 0x11;
  }
  if (((*(byte *)(plVar6 + 4) & 1) != 0) &&
     (plVar7 = *(long **)(param_1 + 0xe0), *(int *)(plVar7[3] + 0x2b4) == *(int *)(lVar8 + 0x2b4)))
  {
    uVar2 = (**(code **)(*plVar7 + 0xb0))(plVar7);
    uVar3 = (**(code **)(*plVar6 + 0xb0))(plVar6);
    if (((uVar2 & 1) == 0) || ((uVar3 & 1) == 0)) {
      if (((uVar2 ^ uVar3) & 1) == 0) goto LAB__text__0044ff1c;
    }
    else if (*(int *)(*(long *)(plVar7[3] + 0x2a0) + 0x18) ==
             *(int *)(*(long *)(plVar6[3] + 0x2a0) + 0x18)) {
LAB__text__0044ff1c:
      plVar6 = (long *)(lVar8 + 0x18);
      if ((*(ushort *)(lVar8 + 0x220) & 1) == 0) {
        (**(code **)(*plVar6 + 0x70))(plVar6,0);
      }
      else {
        (**(code **)(*plVar6 + 0x78))(plVar6);
        if ((*(ushort *)(lVar8 + 0x220) >> 4 & 1) != 0) {
          (**(code **)(*plVar6 + 0x80))(plVar6);
        }
      }
      FUN__text__004500b0(param_1);
      uVar4 = 0x2d;
      if (*(short *)(param_2 + 0x12) != *(short *)(param_2 + 0x10)) {
        uVar4 = 0x2b;
      }
      return uVar4;
    }
  }
  return 0x11;
}


