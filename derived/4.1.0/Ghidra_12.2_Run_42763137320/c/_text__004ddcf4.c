/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ddcf4; name: FUN_.text__004ddcf4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004ddcf4(long *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  
  lVar10 = param_1[3];
  if (*(char *)(lVar10 + 0x315) < '\0') {
    if (*(short *)(lVar10 + 0x310) == 0) {
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x24));
      uVar5 = (**(code **)(*param_1 + 0x118))(param_1);
      fVar12 = (fVar12 * 1000.0) / (float)uVar5;
    }
    else {
      fVar12 = (float)(**(code **)(*param_1 + 0x88))(param_1);
    }
    lVar10 = param_1[3];
    uVar5 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar11 = (ulong)(uint)(int)(fVar12 * 0.001 * *(float *)(lVar10 + 0x30c) * (float)uVar5);
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar11 = 0;
    if ((ulong)_DAT_008ab030 != 0) {
      uVar11 = ((ulong)*(uint *)(lVar10 + 0x30c) * (uVar6 & 0xffffffff)) / (ulong)_DAT_008ab030;
    }
  }
  uVar5 = *(uint *)((long)param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 7);
  uVar3 = *(uint *)(lVar10 + 0x313);
  uVar4 = *(ushort *)(param_1[3] + 0x310);
  *(ushort *)((long)param_1 + 0x54) = uVar4;
  if ((uVar5 <= uVar2 && uVar2 - uVar5 != 0) && (uVar9 = (uint)uVar11, uVar2 < uVar9 && uVar4 != 1))
  {
    uVar2 = (uVar2 - uVar5) + 1;
    uVar7 = 0;
    if (uVar2 != 0) {
      uVar7 = (uVar9 - uVar5) / uVar2;
    }
    uVar8 = (uint)uVar4;
    if ((uVar8 == 0) || (uVar7 < uVar8)) {
      sVar1 = 0;
      if (uVar8 != 0) {
        sVar1 = uVar4 - (short)uVar7;
      }
      *(short *)((long)param_1 + 0x54) = sVar1;
      uVar11 = (ulong)(((uVar9 - uVar5) - uVar7 * uVar2) + uVar5);
    }
    else {
      uVar11 = (ulong)(uVar9 - (uVar4 - 1) * uVar2);
      *(undefined2 *)((long)param_1 + 0x54) = 1;
    }
  }
  if (((uVar3 >> 0x18 & 1) != 0) &&
     (lVar10 = FUN__text__004af5c0(param_1 + 8,uVar11 & 0xffffffff), lVar10 != 0)) {
    uVar5 = *(uint *)((long)param_1 + 0x34);
    uVar2 = *(uint *)(param_1 + 7);
    uVar3 = *(uint *)(lVar10 + 4);
    uVar11 = (ulong)uVar3;
    if ((uVar5 <= uVar2 && uVar2 - uVar5 != 0) &&
       (uVar4 = *(ushort *)((long)param_1 + 0x54), uVar2 < uVar3 && uVar4 != 1)) {
      uVar2 = (uVar2 - uVar5) + 1;
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = (uVar3 - uVar5) / uVar2;
      }
      uVar7 = (uint)uVar4;
      if ((uVar4 == 0) || (uVar9 < uVar7)) {
        sVar1 = 0;
        if (uVar7 != 0) {
          sVar1 = uVar4 - (short)uVar9;
        }
        *(short *)((long)param_1 + 0x54) = sVar1;
        return (ulong)(((uVar3 - uVar5) - uVar9 * uVar2) + uVar5);
      }
      uVar11 = (ulong)(uVar3 - (uVar7 - 1) * uVar2);
      *(undefined2 *)((long)param_1 + 0x54) = 1;
    }
  }
  return uVar11 & 0xffffffff;
}


