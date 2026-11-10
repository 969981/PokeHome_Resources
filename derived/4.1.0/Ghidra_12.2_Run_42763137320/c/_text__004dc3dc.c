/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc3dc; name: FUN_.text__004dc3dc
 */


undefined8 FUN__text__004dc3dc(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_43;
  int local_40 [2];
  undefined8 local_38;
  undefined1 auStack_30 [8];
  short *local_28;
  
  local_40[0] = 0;
  local_38 = 0;
  uVar10 = FUN__text__004aed30(param_2,*(undefined4 *)(param_1 + 0x68),auStack_30,param_1 + 0x40,
                               param_1 + 0x34,param_1 + 0x38,param_1 + 0x2c,param_1 + 0x30,local_40,
                               0,0);
  if ((int)uVar10 == 1) {
    sVar5 = *local_28;
    *(short *)(param_1 + 0x9c) = sVar5;
    if ((sVar5 != -0x7cef) && (sVar5 != 2)) {
      return 7;
    }
    sVar5 = local_28[1];
    lVar12 = *(long *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(local_28 + 10);
    *(undefined4 *)(lVar12 + 0x2b0) = *(undefined4 *)(local_28 + 2);
    *(undefined4 *)(lVar12 + 0x2b4) = uVar3;
    *(undefined1 *)(lVar12 + 0x2ba) = 0;
    *(ushort *)(lVar12 + 0x2b8) = sVar5 << 7 | 0x10;
    if (local_40[0] != 0) {
      FUN__text__004dd7a8(param_1,local_40);
    }
    uVar6 = local_28[6];
    *(undefined2 *)(param_1 + 0x9a) = 0x40;
    uVar1 = *(uint *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x84) = (uint)uVar6;
    uVar7 = 0;
    if ((ushort)local_28[6] != 0) {
      uVar7 = (uVar1 << 6) / (uint)(ushort)local_28[6];
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x24) = uVar7;
    uVar7 = iVar2 + uVar1;
    uVar11 = (uint)uVar6;
    if ((uVar4 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar1 / uVar11;
      }
      *(int *)(param_1 + 0x78) = iVar2;
      *(uint *)(param_1 + 0x7c) = uVar7;
      *(uint *)(param_1 + 0x38) = uVar4 * 0x40 + -1;
    }
    else {
      uVar1 = iVar2 + (uVar4 + 1 >> 6) * (uint)uVar6;
      uVar11 = iVar2 + (*(uint *)(param_1 + 0x34) >> 6) * uVar11;
      *(uint *)(param_1 + 0x78) = uVar11;
      *(uint *)(param_1 + 0x7c) = uVar1;
      if (uVar4 < *(uint *)(param_1 + 0x34)) {
        return 7;
      }
      if (uVar7 < uVar11) {
        return 7;
      }
      if (uVar7 < uVar1) {
        return 7;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),&local_50);
    if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x34)) {
      return 2;
    }
    uVar10 = 2;
    if ((*(uint *)(param_1 + 0x34) <= *(uint *)(param_1 + 0x24)) &&
       (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x24))) {
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(local_28 + 2));
      fVar8 = (float)NEON_ucvtf((uint)(ushort)local_28[6]);
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x9a));
      local_50 = (fVar8 * fVar13) / (fVar9 * 1000.0);
      if (*(short *)(param_1 + 0x54) != 1) {
        local_4c = *(undefined4 *)(param_1 + 0x78);
        uStack_48 = *(undefined4 *)(param_1 + 0x7c);
      }
      local_43 = (undefined1)(int)*(float *)(*(long *)(param_1 + 0x18) + 0x318);
      (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),&local_50);
      uVar10 = (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
                         (*(long **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x84));
      return uVar10;
    }
  }
  return uVar10;
}


